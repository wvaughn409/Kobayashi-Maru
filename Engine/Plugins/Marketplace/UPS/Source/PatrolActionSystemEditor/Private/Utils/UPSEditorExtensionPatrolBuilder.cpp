// Copyright 2020 DmVergasov All Rights Reserved.
#include "Utils/UPSEditorExtensionPatrolBuilder.h"



bool UUPSEditorExtensionPatrolBuilder::InputKey(FEditorViewportClient* InViewportClient, FViewport* Viewport, FKey Key, EInputEvent Event)
{
	OnInputKeyDelegate.Broadcast(Key, Event);
	return Super::InputKey(InViewportClient, Viewport, Key, Event);
}
