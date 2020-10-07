// Copyright Epic Games, Inc. All Rights Reserved.
#pragma once 
#include "GameFramework/HUD.h"
#include "CompleteRPGHUD.generated.h"

UCLASS()
class ACompleteRPGHUD : public AHUD
{
	GENERATED_UCLASS_BODY()

public:

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

	void SetShowTelemetry(bool bShow);
	bool GetShowTelemetry() const { return bShowTelemetry; };

private:
	bool bShowTelemetry;
};

