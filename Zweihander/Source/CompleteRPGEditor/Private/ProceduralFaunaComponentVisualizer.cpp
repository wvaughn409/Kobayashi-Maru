// Copyright Epic Games, Inc. All Rights Reserved.

#include "CompleteRPGEditor.h"
#include "UnrealEd.h"
#include "ProceduralFaunaComponentVisualizer.h"
#include "ProceduralFaunaComponent.h"
#include "ProceduralFaunaActor.h"
#include "FaunaSpawnerComponent.h"
#include "FaunaCreatureInfo.h"

static const FColor GridColour(0, 100, 255);

void FProceduralFaunaComponentVisualizer::DrawVisualization(const UActorComponent* Component, const FSceneView* View, FPrimitiveDrawInterface* PDI)
{
	if(const UProceduralFaunaComponent* FaunaComponent = Cast<const UProceduralFaunaComponent>(Component))
	{
		if(AProceduralFaunaActor* Actor = Cast<AProceduralFaunaActor>(Component->GetOuter()))
		{
			float CellSize = FaunaComponent->CellSize;
			FVector Extents(CellSize, CellSize, 0);
			FVector Origin = FaunaComponent->GetComponentLocation();

			if(Actor->bDrawGrid)
			{
				for(int32 X = 0 ; X < FaunaComponent->CellsX ; ++X)
				{
					for(int32 Y = 0 ; Y < FaunaComponent->CellsY ; ++Y)
					{
						FVector CellOffset(X * CellSize, Y * CellSize, 0.0f);
						FBox CellBox(Origin + CellOffset, Origin + CellOffset + Extents);
						DrawWireBox(PDI, CellBox, GridColour, SDPG_World);
					}
				}
			}

			if(Actor->bDrawSpawners)
			{
				FVector Offset(1000.0f, 1000.0f, 0);
				for(TActorIterator<AFaunaSpawner> Iter(FaunaComponent->GetWorld()) ; Iter ; ++Iter)
				{
					AFaunaSpawner* Spawner = *Iter;
					UFaunaSpawnerComponent* SpawnerComp = Spawner->SpawnerComponent;
					UFaunaCreatureInfo* CreatureObj = SpawnerComp->CreatureInfo->GetDefaultObject<UFaunaCreatureInfo>();

					FVector SpawnerLoc = Spawner->GetActorLocation();
					FVector SpawnerGridLoc = FVector(SpawnerLoc.X, SpawnerLoc.Y, Origin.Z);
					DrawWireCylinder(PDI, SpawnerLoc, FVector(1, 0, 0), FVector(0, 1, 0), FVector(0, 0, 1), FColor::Green, CreatureObj->SpawnRadius, 1000.0f, 16, SDPG_World);
					PDI->DrawLine(SpawnerGridLoc, SpawnerLoc, FColor::Green, SDPG_World);
				}
			}
		}
	}
}

