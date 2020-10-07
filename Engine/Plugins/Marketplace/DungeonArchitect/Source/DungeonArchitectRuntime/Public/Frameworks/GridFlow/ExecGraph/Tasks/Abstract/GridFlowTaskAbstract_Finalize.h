//$ Copyright 2015-20, Code Respawn Technologies Pvt Ltd - All Rights Reserved $//

#pragma once
#include "CoreMinimal.h"
#include "Frameworks/GridFlow/AbstractGraph/GridFlowAbstractNode.h"
#include "Frameworks/GridFlow/ExecGraph/GridFlowExecTask.h"
#include "GridFlowTaskAbstract_Finalize.generated.h"

struct FGridFlowItem;
struct FGridFlowAbstractLink;
class FGridFlowAbstractGraphQuery;

UCLASS(Meta = (AbstractTask, Title = "Finalize Graph", Tooltip = "Call this to finalize the layout graph", MenuPriority
    = 1500))
class DUNGEONARCHITECTRUNTIME_API UGridFlowTaskAbstract_Finalize : public UGridFlowExecTask {
    GENERATED_BODY()
public:
    /**
        Indicates if corridors are allowed. A corridor is created if it has one entrance and one exit 
        and they are in the same line (i.e. both along X or Y axis)

        Variable Name: bGenerateCorridors
    */
    UPROPERTY(EditAnywhere, Category = "Finalize Graph")
    bool bGenerateCorridors = true;

    /**
        Indicates if caves are allowed. A room node is promoted to a cave 
        if the number of enemies in this node is less than or equal to MaxEnemiesPerCaveNode

        Variable Name: bGenerateCaves
    */
    UPROPERTY(EditAnywhere, Category = "Finalize Graph")
    bool bGenerateCaves = true;

    /**
        The condition for promoting a room to a cave.  If the number of enemies in the room node is 
        less than or equal to this value, it is promoted to a cave.
        Sometimes, it might still be room regardless of this value, if we need a door and there 
        are no nearby rooms (caves chunks don't have doors)

        Variable Name: MaxEnemiesPerCaveNode
    */
    UPROPERTY(EditAnywhere, Category = "Finalize Graph")
    int32 MaxEnemiesPerCaveNode = 3;

    /**
        Some of the links will be converted to one way links, to avoid the player walking around locked doors.
        Adjust this weight to modify the one-way door promotion criteria

        Variable Name: OneWayDoorPromotionWeight
    */
    UPROPERTY(EditAnywhere, Category = "Finalize Graph")
    float OneWayDoorPromotionWeight = 0.0f;


public:
    void Execute(const FGridFlowExecutionInput& Input, FGridFlowExecutionOutput& Output) override;
    bool GetParameter(const FString& InParameterName, FGridFlowAttribute& OutValue) override;
    bool SetParameter(const FString& InParameterName, const FGridFlowAttribute& InValue) override;
    bool SetParameterSerialized(const FString& InParameterName, const FString& InSerializedText) override;

private:
    struct DUNGEONARCHITECTRUNTIME_API FItemInfo {
        FGuid ItemId;
        FGridFlowAbstractNode* HostNode = nullptr;
        FGridFlowAbstractLink* HostLink = nullptr;

        FGridFlowItem* GetItem() const;
        void* GetParentObject() const;
    };

private:
    void AssignRoomTypes(const FGridFlowAbstractGraphQuery& GraphQuery, const FRandomStream& Random);
    EGridFlowAbstractNodeRoomType GetNodeRoomType(const FGridFlowAbstractGraphQuery& GraphQuery,
                                                  FGridFlowAbstractNode* Node);
    bool ResolveKeyLocks(const FGridFlowAbstractGraphQuery& GraphQuery, struct FItemInfo& KeyInfo,
                         struct FItemInfo& LockInfo);
};
