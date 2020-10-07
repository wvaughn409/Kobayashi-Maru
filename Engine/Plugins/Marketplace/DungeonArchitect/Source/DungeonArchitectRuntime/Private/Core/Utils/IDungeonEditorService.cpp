//$ Copyright 2015-20, Code Respawn Technologies Pvt Ltd - All Rights Reserved $//

#include "Core/Utils/EditorService/IDungeonEditorService.h"


TSharedPtr<IDungeonEditorService> IDungeonEditorService::Instance;

TSharedPtr<IDungeonEditorService> IDungeonEditorService::Get() {
    return Instance;
}

void IDungeonEditorService::Set(TSharedPtr<IDungeonEditorService> InInstance) {
    Instance = InInstance;
}
