//$ Copyright 2015-20, Code Respawn Technologies Pvt Ltd - All Rights Reserved $//

#pragma once
#include "CoreMinimal.h"
#include "Frameworks/GridFlow/ExecGraph/GridFlowExecGraphScript.h"

class UGridFlowAsset;

class DUNGEONARCHITECTEDITOR_API FGridFlowEditorUtils {
public:
    static void InitializeFlowAsset(UGridFlowAsset* InAsset);

    template <typename T>
    static T* AddExecNode(UGridFlowExecScript* ExecScript) {
        T* Node = NewObject<T>(ExecScript->ScriptGraph);
        ExecScript->ScriptGraph->Nodes.Add(Node);
        return Node;
    }

};
