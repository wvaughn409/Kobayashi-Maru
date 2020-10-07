//$ Copyright 2015-20, Code Respawn Technologies Pvt Ltd - All Rights Reserved $//

#include "Core/Editors/GridFlow/GridFlowEditorUtils.h"

#include "Frameworks/GridFlow/ExecGraph/GridFlowExecEdGraph.h"
#include "Frameworks/GridFlow/ExecGraph/GridFlowExecGraphScript.h"
#include "Frameworks/GridFlow/GridFlowAsset.h"

void FGridFlowEditorUtils::InitializeFlowAsset(UGridFlowAsset* InAsset) {
    InAsset->ExecEdGraph = NewObject<UGridFlowExecEdGraph>(InAsset, UGridFlowExecEdGraph::StaticClass(), NAME_None,
                                                           RF_Transactional);
    InAsset->ExecScript = NewObject<UGridFlowExecScript>(InAsset, "ExecScript");
    FGridFlowExecScriptCompiler::Compile(InAsset->ExecEdGraph, InAsset->ExecScript);
}
