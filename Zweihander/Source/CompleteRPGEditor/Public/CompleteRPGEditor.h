// Copyright Epic Games, Inc. All Rights Reserved.

#ifndef __COMPLETERPGEDITOR_H__
#define __COMPLETERPGEDITOR_H__

#include "EngineMinimal.h"
#include "EngineStats.h"
#include "Engine/DataAsset.h"
#include "AITypes.h"

#define COLLISION_PROJECTILE	ECC_GameTraceChannel1

DECLARE_LOG_CATEGORY_EXTERN(LogGDC, Log, All);

class FCompleteRPGEditorModule : public IModuleInterface
{
public:
	virtual void StartupModule();
};

#endif
