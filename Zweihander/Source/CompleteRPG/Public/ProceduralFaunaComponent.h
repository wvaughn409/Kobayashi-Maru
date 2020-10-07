// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "Components/SceneComponent.h"
#include "GenericQuadTree.h"
#include "FaunaSpawner.h"
#include "ProceduralFaunaComponent.generated.h"

class UProceduralFaunaComponent;
class UFaunaCreatureInfo;

DECLARE_STATS_GROUP(TEXT("Procedural Fauna"), STATGROUP_ProcFauna, STATCAT_Advanced);
DECLARE_CYCLE_STAT_EXTERN(TEXT("Cull Distant Fauna"), STAT_CullFauna, STATGROUP_ProcFauna, COMPLETERPG_API);
DECLARE_CYCLE_STAT_EXTERN(TEXT("Destroy Actors"), STAT_CullFauna_ActorDestroy, STATGROUP_ProcFauna, COMPLETERPG_API);

USTRUCT()
struct FFaunaGridCell
{
	GENERATED_USTRUCT_BODY()

	/** Position at the centre of the cell */
	UPROPERTY()
	FVector Centre;

	/** Extent of the cell */
	UPROPERTY()
	FVector HalfExtents;

	/** Whether this cell has been activated at runtime */
	//UPROPERTY()
	bool bRuntimeActive;

};

USTRUCT()
struct FFaunaSpawnGrid
{
	GENERATED_USTRUCT_BODY()

	FFaunaSpawnGrid();
	FFaunaSpawnGrid(UProceduralFaunaComponent* InOwnerComponent);

	void ClearGrid();
	void InitialiseGrid(int32 CellsX, int32 CellsY, float InCellSize);

	bool IsInGrid(const FVector& Location) const;
	bool IsInGrid(const int32& X, const int32& Y) const;
	FFaunaGridCell& GetCell(int32 X, int32 Y);
	FFaunaGridCell& GetCell(FVector Loc);
	bool GetCoords(const FVector& SampleLocation, int32& X, int32& Y);

	UPROPERTY()
	FVector GridOrigin;

	UPROPERTY()
	FVector GridExtents;

	UPROPERTY(EditAnywhere, Category = SiteProperties, meta = (UIMin = "1"))
	int32 NumCellsX;

	UPROPERTY(EditAnywhere, Category = SiteProperties, meta = (UIMin = "1"))
	int32 NumCellsY;

	UPROPERTY()
	float CellSize;

	UPROPERTY()
	TArray<FFaunaGridCell> Cells;

	UPROPERTY()
	UProceduralFaunaComponent* OwnerComponent;
};

/**
 * 
 */
UCLASS()
class COMPLETERPG_API UProceduralFaunaComponent : public USceneComponent
{
	GENERATED_BODY()

public:

	UProceduralFaunaComponent(const FObjectInitializer& ObjectInitialiser);

	/** Whether spawning is enabled. Spawn sites will not be triggered if disabled */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = FaunaSettings, meta = (UIMin = "1"))
	bool bEnableSpawning;

	/** Number of cells to create in the X direction */
	UPROPERTY(EditAnywhere, Category = FaunaSettings, meta = (UIMin = "1"))
	int32 CellsX;
	
	/** Number of cells to create in the Y direction */
	UPROPERTY(EditAnywhere, Category = FaunaSettings, meta = (UIMin = "1"))
	int32 CellsY;

	/** Size of each individual cell */
	UPROPERTY(EditAnywhere, Category = FaunaSettings, meta = (UIMin = "1000"))
	float CellSize;

	/** Height of spawn volume to use when tracing */
	UPROPERTY(EditAnywhere, Category = FaunaSettings, meta = (UIMin = "100"))
	float HalfHeight;

	/** Sea level for the world - for altitude calculations */
	UPROPERTY(EditAnywhere, Category = FaunaSettings)
	float SeaLevel;

	/** Distance from player controller to trigger a spawn site */
	UPROPERTY(EditAnywhere, Category = FaunaSettings)
	float TriggerDistance;

	/** Distance from player controller to remove instances */
	UPROPERTY(EditAnywhere, Category = FaunaSettings)
	float CullDistance;

	/** List of creature definition objects to generate spawn sites for */
	UPROPERTY(EditAnywhere, Category = FaunaSettings)
	TArray<TSubclassOf<UFaunaCreatureInfo>> Creatures;

	/** If true we will generate spawners at runtime rather than edit time */
	UPROPERTY(EditAnywhere, Category = FaunaSettings)
	bool bRuntimeGeneration;

	/** Number of spawners to check for culling each tick */
	UPROPERTY(EditAnywhere, AdvancedDisplay, Category = FaunaSettings, meta=(UIMin="1"))
	int32 NumCullChecksPerFrame;

	/** Bounds outside of which we will not attempt to spawn creatures, if zero we spawn anywhere that the spawn grid covers */
	UPROPERTY(EditAnywhere, Category = FaunaSettings)
	FBox SpawnBounds;

	/** Create grid using current component settings
	 */
	void CreateGrid();

	/** Generate the spawning areas for the currently configured creatures
	 */
	void GenerateSpawnSites();

	/** Destroy all spawners and query actors created by this component
	 */
	void DestroySpawnedActors();

	/** Destroys all active spawned actors created by the fauna spawners
	 */
	void DestroyActiveInstances();

	virtual void TickComponent(float DeltaTime, enum ELevelTick TickType, FActorComponentTickFunction *ThisTickFunction) override;

	/** Notify that a spawner has been loaded
	 *	@param NewSpawner Spawner that was loaded
	 */
	void OnLoadSpawner(AFaunaSpawner* NewSpawner);

protected:

	/** Analyse instances and destroy distant actors
	 */
	void CullDistantFauna(const FVector& SampleLocation);

	int32 GetCreatureIdx(TSubclassOf<UFaunaCreatureInfo> CreatureInfo);

	void UpdateRuntimeGeneration(const FVector& SampleLocation);

	void GenerateSpawnersForCell(FFaunaGridCell &Cell, UWorld* World);

#if WITH_EDITOR
	virtual void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) override;
#endif

	virtual void InitializeComponent() override;

	/** Flips the active and inactive buffers only if the active is empty and the inactive is not
	 */
	void ConditionalFlipBuffers();

	/** Flips the active and inactive buffers
	 */
	void FlipBuffers();

	/** Grid used to arrange spawners */
	UPROPERTY()
	FFaunaSpawnGrid FaunaGrid;

	/** List of loaded spawners for culling detection */
	TArray<TWeakObjectPtr<AFaunaSpawner>> LoadedSpawners;

	/** Buffer pointers to separate cull processing easily over frames */
	TArray<TWeakObjectPtr<AFaunaSpawner>>* ActiveSpawnerBuffer;
	TArray<TWeakObjectPtr<AFaunaSpawner>>* InactiveSpawnerBuffer;

	/** Buffers to store spawner pointers when we're processing them for cull checks.
		This allows us to pop items off one buffer while adding new spawners to the other
		making cull checking more efficient */
	TArray<TWeakObjectPtr<AFaunaSpawner>> SpawnerProcessBuffer[2];

	/** Runtime counts of all spawned instances */
	TArray<int32> InstanceCounts;
};
