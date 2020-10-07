// Copyright 2020 DmVergasov All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "EditorWorldExtension.h"
#include "UPSEditorExtensionPatrolBuilder.generated.h"


UCLASS()
class PATROLACTIONSYSTEMEDITOR_API UUPSEditorExtensionPatrolBuilder : public UEditorWorldExtension
{
	GENERATED_BODY()
public:
	virtual bool InputKey(FEditorViewportClient* InViewportClient, FViewport* Viewport, FKey Key, EInputEvent Event) override;

public:
	DECLARE_EVENT_TwoParams(UUPSEditorExtensionPatrolBuilder, FOnInputKey, FKey /*Key*/, EInputEvent /*Event*/);
	FOnInputKey OnInputKeyDelegate;
};
