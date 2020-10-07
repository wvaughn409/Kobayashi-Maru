//$ Copyright 2015-20, Code Respawn Technologies Pvt Ltd - All Rights Reserved $//

#include "Builders/SnapMap/Connection/SnapMapConnectionInfo.h"


USnapMapConnectionInfo::USnapMapConnectionInfo(const FObjectInitializer& ObjectInitializer)
    : Super(ObjectInitializer)
      , ConnectionCategory("default") {
#if WITH_EDITORONLY_DATA
    bEditorPreviewDoor = true;
#endif
}
