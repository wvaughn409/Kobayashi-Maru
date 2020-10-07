//$ Copyright 2015-20, Code Respawn Technologies Pvt Ltd - All Rights Reserved $//

#pragma once
#include "CoreMinimal.h"
#include "Frameworks/GridFlow/ExecGraph/GridFlowExecTask.h"
#include "GridFlowTaskAbstract_CreateMainPath.generated.h"

class UGridFlowAbstractGraph;
struct FGridFlowAbstractNode;
class FGridFlowAbstractGraphQuery;

UCLASS(Meta = (AbstractTask, Title = "Create Main Path", Tooltip = "Create a main path with spawn and goal",
    MenuPriority = 1100))
class DUNGEONARCHITECTRUNTIME_API UGridFlowTaskAbstract_CreateMainPath : public UGridFlowExecTask {
    GENERATED_BODY()

public:
    /**
        The size of the main path

        Variable Name: PathSize
    */
    UPROPERTY(EditAnywhere, Category = "Create Main Path")
    int32 PathSize = 12;

    /**
        The name of this path.  It can be later referenced with this name

        Variable Name: PathName
    */
    UPROPERTY(EditAnywhere, Category = "Create Main Path")
    FString PathName = "main";

    /**
        The color of the nodes in this path

        Variable Name: [N/A]
    */
    UPROPERTY(EditAnywhere, Category = "Create Main Path")
    FLinearColor NodeColor = FLinearColor::Green;

    /**
        Marker name to emit at the spawn point.   Add this marker name in the theme file and emit your spawn blueprints (e.g. player start)

        Variable Name: StartMarkerName
    */
    UPROPERTY(EditAnywhere, Category = "Create Main Path")
    FString StartMarkerName = "SpawnPoint";

    /**
        Marker name to emit at the goal point.   Add this marker name in the theme file and emit your level exit blueprints

        Variable Name: GoalMarkerName
    */
    UPROPERTY(EditAnywhere, Category = "Create Main Path")
    FString GoalMarkerName = "LevelGoal";

    /**
        Optionally, specify a different path name for the start node in the path

        Variable Name: StartNodePathName
    */
    UPROPERTY(EditAnywhere, Category = "Create Main Path")
    FString StartNodePathName = "main_start";

    /**
        Optionally, specify a different path name for the end node in the path

        Variable Name: GoalNodePathName
    */
    UPROPERTY(EditAnywhere, Category = "Create Main Path")
    FString GoalNodePathName = "main_goal";

    /**
        Enable this to override the start node position

        Variable Name: bOverrideStartNodePosition
    */
    UPROPERTY(EditAnywhere, Category = "Start Node")
    bool bOverrideStartNodePosition = false;

    /**
        Override the start node position of the path.   
        This is useful if you want static entrances to your dungeon
        This parameter requires bOverrideStartNodePosition flag to be set

        Variable Name: StartNodePosition
    */
    UPROPERTY(EditAnywhere, Category = "Start Node", Meta=(EditCondition = "bOverrideStartNodePosition"))
    FIntPoint StartNodePosition;

    /**
        The room in the tilemap generate from the start node will have it's full size
        (perturb value for this node will be disable)

        Variable Name: bFullSizeStartRoom
    */
    UPROPERTY(EditAnywhere, Category = "Start Node")
    bool bFullSizeStartRoom = false;

    /**
        The room in the tilemap generate from the goal node (last node in the path) will
        have it's full size (perturb value for this node will be disable)

        Variable Name: bFullSizeGoalRoom
    */
    UPROPERTY(EditAnywhere, Category = "Start Node")
    bool bFullSizeGoalRoom = false;

public:
    void Execute(const FGridFlowExecutionInput& Input, FGridFlowExecutionOutput& Output) override;
    bool GetParameter(const FString& InParameterName, FGridFlowAttribute& OutValue) override;
    bool SetParameter(const FString& InParameterName, const FGridFlowAttribute& InValue) override;
    bool SetParameterSerialized(const FString& InParameterName, const FString& InSerializedText) override;

private:

    bool GrowPath(const FGridFlowAbstractGraphQuery& GraphQuery, const FGridFlowAbstractNode& CurrentNode,
                  const FRandomStream& Random, TArray<FGuid>& OutPath, TSet<FGuid>& Visited);
    void FinalizePath(const FGridFlowAbstractGraphQuery& GraphQuery, const TArray<FGuid>& Path);
};
