//$ Copyright 2015-20, Code Respawn Technologies Pvt Ltd - All Rights Reserved $//

#include "Frameworks/GridFlow/GridFlowAsset.h"


void UGridFlowAsset::AddReferencedObjects(UObject* InThis, FReferenceCollector& Collector) {
    UGridFlowAsset* This = CastChecked<UGridFlowAsset>(InThis);

#if WITH_EDITORONLY_DATA
    Collector.AddReferencedObject(This->ExecEdGraph, This);
#endif	// WITH_EDITORONLY_DATA

    Super::AddReferencedObjects(This, Collector);
}
