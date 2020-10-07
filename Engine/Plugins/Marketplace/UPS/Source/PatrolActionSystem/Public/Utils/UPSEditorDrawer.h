// Copyright 2020 DmVergasov All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UPSEditorDrawer.generated.h"

class UCanvas;
class APlayerController;

/*
Need to draw some text in editor. To get drawer use UUPSEditorDrawer* Get() function
*/

USTRUCT ()
struct PATROLACTIONSYSTEM_API FDrawerItemInfo
{
	GENERATED_BODY()
public:
	FDrawerItemInfo() {};

	FDrawerItemInfo(UWorld* InWorld, FText NewText, FVector NewWorldLocation, FLinearColor NewDrawColor, float NewScale, float NewDrawTime, uint64 NewTimeSeconds) :
		Text(NewText),
		bDrawOnScreen(false),
		WorldLocation(NewWorldLocation),
		DrawColor(NewDrawColor),
		Scale(NewScale),
		DrawTime(NewDrawTime),
		TimeSeconds(NewTimeSeconds),
		World(InWorld)
	{
	}

	FDrawerItemInfo(UWorld* InWorld, FText NewText, FVector2D NewScreenLocation, FLinearColor NewDrawColor, float NewScale, float NewDrawTime, uint64 NewTimeSeconds) :
		Text(NewText),
		bDrawOnScreen(true),
		ScreenLocation(NewScreenLocation),
		DrawColor(NewDrawColor),
		Scale(NewScale),
		DrawTime(NewDrawTime),
		TimeSeconds(NewTimeSeconds),
		World(InWorld)
	{
	}

	FText Text;
	bool bDrawOnScreen = false;
	FVector WorldLocation;
	FVector2D ScreenLocation;
	FLinearColor DrawColor = FLinearColor::White;
	float Scale = 1.f;
	float DrawTime = 0.f;
	uint64 TimeSeconds = 0;

	UPROPERTY()
	UWorld* World = nullptr;
};

UCLASS()
class PATROLACTIONSYSTEM_API UUPSEditorDrawer : public UObject
{
	GENERATED_BODY()
public:
	UUPSEditorDrawer();

public:
	static UUPSEditorDrawer* Get() {return UUPSEditorDrawer::StaticClass()->GetDefaultObject <UUPSEditorDrawer>();}
	uint64 GetCurrentTime();

	void DrawTextOnScreen(UWorld* World, FString Text, FVector2D DrawLocation, float TextScale = 1.f, FLinearColor DrawColor = FColor::White, float DrawTime = 0.f);
	void DrawTextInWorld(UWorld* World, FString Text, FVector DrawLocation, float TextScale = 1.f, FLinearColor DrawColor = FColor::White, float DrawTime = 0.f);
	void RegisterDrawer(FName Name);
	void UnregisterDrawer(FName Name);

private:
	void DrawDebug(UCanvas* InCanvas, APlayerController* InPlayerController);

private:
	TArray<FDrawerItemInfo> TextToDraw;
	TMap<FName, FDelegateHandle> Drawers;
};
