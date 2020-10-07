//$ Copyright 2015-20, Code Respawn Technologies Pvt Ltd - All Rights Reserved $//

#include "Frameworks/GraphGrammar/Script/GrammarScriptGraph.h"


UGrammarScriptGraphNode::UGrammarScriptGraphNode() {
    NodeId = FGuid::NewGuid();
}

UGrammarScriptGraph::UGrammarScriptGraph(const FObjectInitializer& ObjectInitializer)
    : Super(ObjectInitializer) {
}
