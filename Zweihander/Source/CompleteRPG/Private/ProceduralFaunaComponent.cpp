// Copyright Epic Games, Inc. All Rights Reserved.

#include "CompleteRPG.h"
#include "ProceduralFaunaComponent.h"
#include "Landscape.h"
#include "Engine/Level.h"
#include "Engine/Blueprint.h"
#include "DrawDebugHelpers.h"
#include "EngineUtils.h"
#include "FaunaSpawnerComponent.h"
#include "FaunaQueryActor.h"
#include "FaunaCreatureInfo.h"
#include "FoliageStatistics.h"
#include "FoliageType_InstancedStaticMesh.h"
#include "ProceduralFaunaBlockingVolume.h"
#include "FaunaAvianCreatureInfo.h"
#include "ProceduralFaunaActor.h"
#include "Components/BrushComponent.h"

DEFINE_STAT(STAT_CullFauna);
DEFINE_STAT(STAT_CullFauna_ActorDestroy);

static TAutoConsoleVariable<int32> CVarDebugDrawFaunaGrid(
	TEXT("DebugDrawFaunaGrid"), 0,
	TEXT("Draws the fauna grid in world"));

static TAutoConsoleVariable<int32> CVarDebugDrawFaunaSpawners(
	TEXT("DebugDrawFaunaSpawners"), 0,
	TEXT("Draws the fauna spawners in world"));

FFaunaSpawnGrid::FFaunaSpawnGrid()
	: GridOrigin(0)
	, GridExtents(0)
	, NumCellsX(-1)
	, NumCellsY(-1)
	, CellSize(-1.0f)
	, OwnerComponent(nullptr)
{

}

FFaunaSpawnGrid::FFaunaSpawnGrid(UProceduralFaunaComponent* InOwnerComponent)
	: GridOrigin(0)
	, GridExtents(0)
	, NumCellsX(-1)
	, NumCellsY(-1)
	, CellSize(-1.0f)
	, OwnerComponent(InOwnerComponent)
{
	
}

void FFaunaSpawnGrid::ClearGrid()
{
	Cells.Empty();
}

void FFaunaSpawnGrid::InitialiseGrid(int32 CellsX, int32 CellsY, float InCellSize)
{
	check(OwnerComponent);

	NumCellsX = CellsX;
	NumCellsY = CellsY;
	CellSize = InCellSize;

	GridOrigin = OwnerComponent->GetComponentLocation();
	GridExtents = FVector(NumCellsX * CellSize, NumCellsY * CellSize, 0);

	Cells.AddZeroed(NumCellsX * NumCellsY);

	for(int32 Y = 0 ; Y < NumCellsY ; ++Y)
	{
		for(int32 X = 0 ; X < NumCellsX ; ++X)
		{
			FFaunaGridCell& Cell = GetCell(X, Y);

			Cell.HalfExtents = FVector(CellSize / 2, CellSize / 2, 0);
			Cell.Centre = GridOrigin + FVector(X * CellSize, Y * CellSize, 0) + Cell.HalfExtents;
		}
	}
}

FFaunaGridCell& FFaunaSpawnGrid::GetCell(int32 X, int32 Y)
{
	check(NumCellsX > 0 && NumCellsY > 0);
	int32 Index = Y * NumCellsX + X;
	check(Cells.IsValidIndex(Index));
	return Cells[Index];
}

FFaunaGridCell& FFaunaSpawnGrid::GetCell(FVector Loc)
{
	int32 X = FMath::FloorToInt((Loc.X - GridOrigin.X) / CellSize);
	int32 Y = FMath::FloorToInt((Loc.Y - GridOrigin.Y) / CellSize);
	return GetCell(X, Y);
}

bool FFaunaSpawnGrid::IsInGrid(const FVector& Location) const
{
	return Location.X > GridOrigin.X && Location.X < (GridOrigin.X + GridExtents.X) &&
		Location.Y > GridOrigin.Y && Location.Y < (GridOrigin.Y + GridExtents.Y);
}

bool FFaunaSpawnGrid::IsInGrid(const int32& X, const int32& Y) const
{
	return X >= 0 && Y >= 0 && X < NumCellsX && Y < NumCellsY;
}

bool FFaunaSpawnGrid::GetCoords(const FVector& SampleLocation, int32& X, int32& Y)
{
	X = FMath::FloorToInt((SampleLocation.X - GridOrigin.X) / CellSize);
	Y = FMath::FloorToInt((SampleLocation.Y - GridOrigin.Y) / CellSize);
	return IsInGrid(X, Y);
}

UProceduralFaunaComponent::UProceduralFaunaComponent(const FObjectInitializer& ObjectInitialiser)
	: Super(ObjectInitialiser)
	, bEnableSpawning(false)
	, CellsX(1)
	, CellsY(1)
	, CellSize(10000.0f)
	, HalfHeight(300000.0f)
	, SeaLevel(0.0f)
	, TriggerDistance(10000.0f)
	, CullDistance(15000.0f)
	, NumCullChecksPerFrame(5)
	, FaunaGrid(this)
{
	bAutoActivate = true;
	PrimaryComponentTick.bCanEverTick = true;
	bWantsInitializeComponent = true;

	ActiveSpawnerBuffer = &SpawnerProcessBuffer[0];
	InactiveSpawnerBuffer = &SpawnerProcessBuffer[1];
}

void UProceduralFaunaComponent::GenerateSpawnSites()
{
	if(Creatures.Num() == 0 || bRuntimeGeneration)
	{
		return;
	}

	if(UWorld* World = GetWorld())
	{
		for(int32 Idx = 0 ; Idx < FaunaGrid.Cells.Num() ; ++Idx)
		{
			FFaunaGridCell& Cell = FaunaGrid.Cells[Idx];

			GenerateSpawnersForCell(Cell, World);
		}
	}
}

void UProceduralFaunaComponent::TickComponent(float DeltaTime, enum ELevelTick TickType, FActorComponentTickFunction *ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// Check we have something to spawn
	if(!bEnableSpawning)
	{
		return;
	}

	FVector CurrentPlayerLocation;
	UWorld* World = GetWorld();
	if(World && World->GetFirstPlayerController())
	{
		FRotator PlayerRotation;
		World->GetFirstPlayerController()->GetPlayerViewPoint(CurrentPlayerLocation, PlayerRotation);

		if(bRuntimeGeneration)
		{
			QUICK_SCOPE_CYCLE_COUNTER(STAT_Fauna_UpdateRuntime);
			UpdateRuntimeGeneration(CurrentPlayerLocation);
		}

		// Get rid of distant instances
		CullDistantFauna(CurrentPlayerLocation);

		FVector2D BoxOffset(TriggerDistance, TriggerDistance);
		FVector2D Player2DLoc(CurrentPlayerLocation);
		FBox2D SpawnTriggerBox(Player2DLoc - BoxOffset, Player2DLoc + BoxOffset);

		TArray<AFaunaSpawner*> Spawners;

		// Get any overlapping spawners from the loaded levels
		{
			QUICK_SCOPE_CYCLE_COUNTER(STAT_Fauna_QuerySpawners);
		for(FConstLevelIterator LevelIter = World->GetLevelIterator(); LevelIter ; ++LevelIter)
		{
			if(AFaunaQueryActor* QueryActor = AFaunaQueryActor::GetFaunaQueryActorForLevel(*LevelIter, false))
			{
				QueryActor->QueryFaunaSpawners(SpawnTriggerBox, Spawners);
			}
		}
		}

		{
			QUICK_SCOPE_CYCLE_COUNTER(STAT_Fauna_TriggerSpawners);
		// Spawn from the spawners if able
		for(AFaunaSpawner* Spawner : Spawners)
		{
			if(Spawner->SpawnerComponent->CanSpawn())
			{
				// check bounds if necessary
				bool bBoundsValid = true;
				FVector Size = SpawnBounds.GetSize();
				if(Size != FVector::ZeroVector)
				{
					// Valid bounds
					bBoundsValid = SpawnBounds.IsInsideXY(Spawner->GetActorLocation());
				}

				FVector ToSpawner = Spawner->GetActorLocation() - CurrentPlayerLocation;
				if(ToSpawner.SizeSquared2D() < TriggerDistance * TriggerDistance && bBoundsValid)
				{
					int32 CreatureIdx = GetCreatureIdx(Spawner->SpawnerComponent->CreatureInfo);
					check(CreatureIdx != INDEX_NONE);

					int32 MaxCreatureInstances = Spawner->SpawnerComponent->CreatureInfo->GetDefaultObject<UFaunaCreatureInfo>()->MaxInstances;
					int32 SpawnLimit = MaxCreatureInstances - InstanceCounts[CreatureIdx];

					if(SpawnLimit > 0)
					{
						InstanceCounts[CreatureIdx] += Spawner->SpawnerComponent->Spawn(SpawnLimit);
					}
				}
			}
		}
	}
	}

	AProceduralFaunaActor* Actor = Cast<AProceduralFaunaActor>(GetOuter());
	if(Actor)
	{
		bool bConsoleDrawGridOverride = CVarDebugDrawFaunaGrid.GetValueOnGameThread() != 0;
		if(Actor->bDrawGrid || bConsoleDrawGridOverride)
		{
			// Draw grid
			for(FFaunaGridCell& Cell : FaunaGrid.Cells)
			{
				FVector Min = Cell.Centre - Cell.HalfExtents * 0.95f;
				FVector Max = Cell.Centre + Cell.HalfExtents * 0.95f;

				FVector ComponentLocation = GetComponentLocation();
				FVector ModifiedCentre = Cell.Centre;
				ModifiedCentre.Z = ComponentLocation.Z;

				DrawDebugBox(World, ModifiedCentre, Cell.HalfExtents * 0.95f, FQuat::Identity, Cell.bRuntimeActive ? FColor::Red : FColor::Blue);
			}

			if(SpawnBounds.GetExtent().SizeSquared() > SMALL_NUMBER)
			{
				FVector Centre(0.0f);
				FVector Extents(0.0f);
				SpawnBounds.GetCenterAndExtents(Centre, Extents);
				DrawDebugBox(World, Centre, Extents, FQuat::Identity, FColor::Magenta);
			}
		}

		bool bConsoleDrawSpawnersOverride = CVarDebugDrawFaunaSpawners.GetValueOnGameThread() != 0;
		if(Actor->bDrawSpawners || bConsoleDrawSpawnersOverride)
		{
			for(TActorIterator<AFaunaSpawner> Iter(World) ; Iter ; ++Iter)
			{
				AFaunaSpawner* Spawner = *Iter;
				UFaunaCreatureInfo* CreatureObj = Spawner->SpawnerComponent->CreatureInfo->GetDefaultObject<UFaunaCreatureInfo>();

				if(CreatureObj)
				{
					FColor SpawnerColour = CreatureObj->CreatureSpawnerDrawColour;
					FMatrix CircleMatrix(FVector(0, 0, 1), FVector(0, 1, 0), FVector(-1, 0, 0), Spawner->GetActorLocation());
					DrawDebugCircle(World, CircleMatrix, CreatureObj->SpawnRadius, 24, SpawnerColour);

					FVector GridProjection = Spawner->GetActorLocation();
					GridProjection.Z = Actor->GetActorLocation().Z;
					DrawDebugLine(World, Spawner->GetActorLocation(), GridProjection, SpawnerColour);
				}
			}
		}
	}
}

void UProceduralFaunaComponent::CreateGrid()
{
	FaunaGrid.ClearGrid();
	if(UWorld* World = GetWorld())
	{
		FaunaGrid.InitialiseGrid(CellsX, CellsY, CellSize);
	}
}

void UProceduralFaunaComponent::DestroySpawnedActors()
{
	// Remove current spawners
	TArray<AFaunaSpawner*> Spawners;
	TArray<AFaunaQueryActor*> QueryActors;

	UWorld* World = GetWorld();
	for(TActorIterator<AFaunaSpawner> It(World) ; It ; ++It)
	{
		if(AFaunaSpawner* Spawner = Cast<AFaunaSpawner>(*It))
		{
			Spawners.Add(Spawner);
		}
	}

	for(TActorIterator<AFaunaQueryActor> It(World) ; It ; ++It)
	{
		if(AFaunaQueryActor* QueryActor = Cast<AFaunaQueryActor>(*It))
		{
			QueryActors.Add(QueryActor);
		}
	}

	for(AFaunaSpawner* Spawner : Spawners)
	{
		World->DestroyActor(Spawner);
	}

	for(AFaunaQueryActor* QueryActor : QueryActors)
	{
		World->DestroyActor(QueryActor);
	}
}

#if WITH_EDITOR
void UProceduralFaunaComponent::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
{
	Super::PostEditChangeProperty(PropertyChangedEvent);

	const FName PropertyName = PropertyChangedEvent.Property ? PropertyChangedEvent.Property->GetFName() : NAME_None;

	if(PropertyName == GET_MEMBER_NAME_CHECKED(UProceduralFaunaComponent, CullDistance))
	{
		CullDistance = FMath::Max(CullDistance, TriggerDistance);
	}
	else if(PropertyName == GET_MEMBER_NAME_CHECKED(UProceduralFaunaComponent, bRuntimeGeneration))
	{
		// if we're going to be generating at runtime, get rid of anything currently saved in levels
		if(bRuntimeGeneration)
		{
			DestroySpawnedActors();
			CreateGrid();
		}
	}
	else if(PropertyName == GET_MEMBER_NAME_CHECKED(UProceduralFaunaComponent, CellsX) ||
			PropertyName == GET_MEMBER_NAME_CHECKED(UProceduralFaunaComponent, CellsY) ||
			PropertyName == GET_MEMBER_NAME_CHECKED(UProceduralFaunaComponent, CellSize))
	{
		// Reset the grid. We do this as soon as the property changes incase we're in runtime
		// mode - where we won't generate anything.
		CreateGrid();
	}
}
#endif

void UProceduralFaunaComponent::CullDistantFauna(const FVector& SampleLocation)
{
	SCOPE_CYCLE_COUNTER(STAT_CullFauna);

	TArray<AActor*> ActorsToCull;

	if(LoadedSpawners.Num() == 0)
	{
		return;
	}
	else if(ActiveSpawnerBuffer->Num() == 0)
	{
		FlipBuffers();
	}
	
	int32 NumChecks = 0;
	while(NumChecks < NumCullChecksPerFrame && ActiveSpawnerBuffer->Num() > 0)
	{
		TWeakObjectPtr<AFaunaSpawner> WeakSpawner = ActiveSpawnerBuffer->Pop(false);
		if(AFaunaSpawner* Spawner = WeakSpawner.Get())
		{
			UFaunaSpawnerComponent* SpawnerComp = Spawner->SpawnerComponent;
			if(SpawnerComp->IsSpawnerActive())
			{
				int32 CreatureIndex = GetCreatureIdx(SpawnerComp->CreatureInfo);
				for(int32 Idx = SpawnerComp->ActiveInstances.Num() - 1 ; Idx >= 0 ; --Idx)
				{
					AActor* Instance = SpawnerComp->ActiveInstances[Idx];
					if(Instance != nullptr)
					{
						float Dist2 = (Instance->GetActorLocation() - SampleLocation).SizeSquared2D();
						if(Dist2 > CullDistance * CullDistance)
						{
							ActorsToCull.Add(Instance);
							SpawnerComp->ActiveInstances.RemoveAt(Idx, 1, false);
							--InstanceCounts[CreatureIndex];
						}
					}
				}
	
				if(SpawnerComp->ActiveInstances.Num() == 0)
				{
					SpawnerComp->DeactivateSpawner();
				}
			}
	
			// Add the spawner back onto the other list
			InactiveSpawnerBuffer->Add(Spawner);
		}
	
		ConditionalFlipBuffers();
		if(ActiveSpawnerBuffer->Num() == 0)
		{
			// Nothing in either buffer
			break;
		}
	
		++NumChecks;
	}

	{
		SCOPE_CYCLE_COUNTER(STAT_CullFauna_ActorDestroy);
		for(AActor* Actor : ActorsToCull)
		{
			if(Actor != nullptr && Actor->GetWorld())
			{
				Actor->GetWorld()->DestroyActor(Actor);
			}
		}
	}
}

void UProceduralFaunaComponent::OnLoadSpawner(AFaunaSpawner* NewSpawner)
{
	LoadedSpawners.Add(NewSpawner);
	InactiveSpawnerBuffer->Add(NewSpawner);
}

void UProceduralFaunaComponent::InitializeComponent()
{
	InstanceCounts.AddZeroed(Creatures.Num());
}

int32 UProceduralFaunaComponent::GetCreatureIdx(TSubclassOf<UFaunaCreatureInfo> CreatureInfo)
{
	for(int32 CreatureIdx = 0 ; CreatureIdx < Creatures.Num() ; ++CreatureIdx)
	{
		TSubclassOf<UFaunaCreatureInfo> Creature = Creatures[CreatureIdx];
		if(CreatureInfo == Creature)
		{
			return CreatureIdx;
		}
	}
	return INDEX_NONE;
}

void UProceduralFaunaComponent::DestroyActiveInstances()
{
	for(TWeakObjectPtr<AFaunaSpawner>& WeakSpawner : LoadedSpawners)
	{
		if(AFaunaSpawner* SpawnerActor = WeakSpawner.Get())
		{
			UFaunaSpawnerComponent* SpawnerComp = SpawnerActor->SpawnerComponent;
			UWorld* World = GetWorld();

			for(int32 Idx = SpawnerComp->ActiveInstances.Num() - 1 ; Idx >= 0 ; --Idx)
			{
				AActor* Instance = SpawnerComp->ActiveInstances[Idx];
				// temp fix for actors getting Gc-ed
				if (Instance)
				{
					World->DestroyActor(Instance);
				}
			}
			SpawnerComp->ActiveInstances.Empty();
			SpawnerComp->DeactivateSpawner();
		}
	}
	
	FMemory::Memzero(InstanceCounts.GetData(), InstanceCounts.Num() * sizeof(int32));
}

void UProceduralFaunaComponent::UpdateRuntimeGeneration(const FVector& SampleLocation)
{
	if(FaunaGrid.IsInGrid(SampleLocation))
	{
		// Generate twice our trigger distance, so we always have spawn sites ready
		const float GenerationDistance = TriggerDistance * 2.0f;
		// See how many cells that covers
		int32 GenerationExtent = FMath::CeilToInt(GenerationDistance / CellSize);

		int32 XCoord = -1;
		int32 YCoord = -1;

		// If the player position is on the grid, check the surrounding cells for generation
		if(FaunaGrid.GetCoords(SampleLocation, XCoord, YCoord))
		{
			// Valid grid location
			for(int32 X = XCoord - GenerationExtent ; X < XCoord + GenerationExtent ; ++X)
			{
				for(int32 Y = YCoord - GenerationExtent ; Y < YCoord + GenerationExtent ; ++Y)
				{
					if(FaunaGrid.IsInGrid(X, Y))
					{
						FFaunaGridCell& Cell = FaunaGrid.GetCell(X, Y);

						if(!Cell.bRuntimeActive)
						{
							GenerateSpawnersForCell(Cell, GetWorld());

							Cell.bRuntimeActive = true;
						}
					}
				}
			}
		}
	}
}

void UProceduralFaunaComponent::GenerateSpawnersForCell(FFaunaGridCell &Cell, UWorld* World)
{
	QUICK_SCOPE_CYCLE_COUNTER(STAT_Fauna_GenerateCellSpawners);
	for(TSubclassOf<UFaunaCreatureInfo> CreatureInfo : Creatures)
	{
		// No creature in this slot
		if(CreatureInfo == nullptr)
		{
			continue;
		}

		// Attempt to generate a spawner location 
		FVector SpawnLocation(0);
		ULevel* SpawnLevel = nullptr;
		UFaunaCreatureInfo* CreatureInfoObj = CreatureInfo->GetDefaultObject<UFaunaCreatureInfo>();
		if(CreatureInfoObj->GenerateSpawnerLocationForCell(World, Cell, SpawnLocation, SpawnLevel, HalfHeight))
		{
			// Candidate Location found
			FCollisionShape Sphere;
			Sphere.MakeSphere(CreatureInfoObj->SpawnRadius);

			// Look for blocking volumes in the chosen location.
			bool bLocationValid = true;
			TArray<FOverlapResult> Overlaps;
			{
				QUICK_SCOPE_CYCLE_COUNTER(STAT_Fauna_BlockingVolOverlap);

 				for(TActorIterator<AProceduralFaunaBlockingVolume> Iter(GetWorld()) ; Iter ; ++Iter)
 				{
 					AProceduralFaunaBlockingVolume* Volume = Cast<AProceduralFaunaBlockingVolume>(*Iter);
 					if(Volume)
 					{
 						UBrushComponent* Brush = Volume->GetBrushComponent();
 						if(Brush && Brush->BodyInstance.IsValidBodyInstance())
 						{
 							if(Brush->BodyInstance.OverlapTest(SpawnLocation, FQuat::Identity, Sphere))
 							{
 								bLocationValid = false;
 								break;
 							}
 						}
 					}
 				}
			}

			if(bLocationValid)
			{
				// Create a new spawner
				FRotator Rot(0);
				FActorSpawnParameters Params;
				
				// If the creature type didn't specify a level, use the P-Level
				ULevel* QueryLevel = SpawnLevel ? SpawnLevel : World->PersistentLevel;
				Params.OverrideLevel = QueryLevel;
				AFaunaSpawner* Spawner = GetWorld()->SpawnActor<AFaunaSpawner>(AFaunaSpawner::StaticClass(), SpawnLocation, Rot, Params);
				
				if(Spawner)
				{
					Spawner->SpawnerComponent->CreatureInfo = CreatureInfo;
				
					// Add the spawner to the correct level quad tree
					FVector2D Radius(CreatureInfoObj->SpawnRadius, CreatureInfoObj->SpawnRadius);
					FVector2D Location = FVector2D(Spawner->GetActorLocation());
					FBox2D SpawnerBounds(FVector2D(Location - Radius), FVector2D(Location + Radius));
				
					AFaunaQueryActor* QueryActor = AFaunaQueryActor::GetFaunaQueryActorForLevel(QueryLevel, true);
					QueryActor->InsertSpawner(Spawner, SpawnerBounds);

					// Update the active spawner array if we're generating at load time.
					if(bRuntimeGeneration)
					{
						LoadedSpawners.Add(Spawner);
						InactiveSpawnerBuffer->Add(Spawner);
					}
				}
			}
		}
	}
}

void UProceduralFaunaComponent::ConditionalFlipBuffers()
{
	if(ActiveSpawnerBuffer->Num() == 0 && InactiveSpawnerBuffer->Num() > 0)
	{
		FlipBuffers();
	}
}

void UProceduralFaunaComponent::FlipBuffers()
{
	TArray<TWeakObjectPtr<AFaunaSpawner>>* Temp = ActiveSpawnerBuffer;
	ActiveSpawnerBuffer = InactiveSpawnerBuffer;
	InactiveSpawnerBuffer = Temp;
}
