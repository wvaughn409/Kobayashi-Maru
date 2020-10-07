// Copyright 2020 DmVergasov All Rights Reserved.

#include "Utils/UPSEditorDrawer.h"
#include "Engine/Canvas.h"
#include "GameFramework/PlayerController.h"
#include "Debug/DebugDrawService.h"
#include <time.h>
#include "Utils/UPSSettings.h"

#if WITH_EDITOR
#include "Editor.h"
#include "LevelEditorViewport.h"
#endif


UUPSEditorDrawer::UUPSEditorDrawer()
{
#if WITH_EDITOR
	RegisterDrawer("Editor");
#endif
}

uint64 UUPSEditorDrawer::GetCurrentTime()
{
	time_t timeInSec = time(&timeInSec);
	return (uint64)timeInSec;
}

void UUPSEditorDrawer::DrawTextOnScreen(UWorld* World, FString Text, FVector2D DrawLocation, float TextScale /*= 1.f*/, FLinearColor DrawColor /*= FColor::White*/, float DrawTime /*= 0.f*/)
{
#if WITH_EDITOR
	FDrawerItemInfo newText(World, FText::FromString(Text), DrawLocation, DrawColor, TextScale, DrawTime, GetCurrentTime());
	TextToDraw.Add(newText);
#endif
}

void UUPSEditorDrawer::DrawTextInWorld(UWorld* World, FString Text, FVector DrawLocation, float TextScale /*= 1.f*/, FLinearColor DrawColor /*= FColor::White*/, float DrawTime /*= 0.f*/)
{
#if WITH_EDITOR
	if (TextToDraw.Num() > 999)
	{
		TextToDraw.Empty();
	}

	if (Text != "")
	{
		FDrawerItemInfo newText(World, FText::FromString(Text), DrawLocation, DrawColor, TextScale, DrawTime, GetCurrentTime());
		TextToDraw.Add(newText);
	}
#endif
}

void UUPSEditorDrawer::RegisterDrawer(FName Name)
{
	if (!Drawers.Contains(Name))
	{
		Drawers.Add(Name, UDebugDrawService::Register(*Name.ToString(), FDebugDrawDelegate::CreateUObject(this, &UUPSEditorDrawer::DrawDebug)));
	}
}

void UUPSEditorDrawer::UnregisterDrawer(FName Name)
{
	if (Drawers.Contains(Name))
	{
		UDebugDrawService::Unregister(*Drawers.Find(Name));
		Drawers.Remove(Name);
	}
}

void UUPSEditorDrawer::DrawDebug(UCanvas* InCanvas, APlayerController* InPlayerController)
{
#if WITH_EDITOR
	for (int32 index = 0; index < TextToDraw.Num();/*manual increment*/)
	{
		bool bNeedToDraw = true;

		auto& text = TextToDraw[index];

		FVector2D drawLocation;
		if (text.bDrawOnScreen)
		{
			drawLocation = text.ScreenLocation;
		}
		else
		{
			bNeedToDraw = false;

			if (text.World != nullptr)
			{
				FVector viewLocation;
				FRotator viewRotation;
				auto worldType = text.World->WorldType;
				if (worldType == EWorldType::Type::Editor || worldType == EWorldType::Type::EditorPreview)
				{

					auto viewportClient = GCurrentLevelEditingViewportClient;
					viewLocation = viewportClient->GetViewLocation();
					viewRotation = viewportClient->GetViewRotation();
				}
				else
				{
					if (auto playerController = text.World->GetFirstPlayerController())
					{
						viewLocation = playerController->PlayerCameraManager->GetCameraLocation();
						viewRotation = playerController->PlayerCameraManager->GetCameraRotation();
					}
				}

				if (((text.WorldLocation - viewLocation) | viewRotation.Vector()) > 0.f)
				{
					auto worldToScreenLocation = InCanvas->Project(text.WorldLocation);
					drawLocation.X = worldToScreenLocation.X;
					drawLocation.Y = worldToScreenLocation.Y;
					bNeedToDraw = true;
				}
			}
		}

		if (bNeedToDraw)
		{
			FCanvasTextItem textItem(FVector2D(), text.Text, GEngine->GetSubtitleFont(), text.DrawColor);
			textItem.bOutlined = true;
			textItem.OutlineColor = FColor::Black;
			textItem.Scale = FVector2D(text.Scale, text.Scale);
			InCanvas->DrawItem(textItem, drawLocation);
		}

		if (GetCurrentTime() - TextToDraw[index].TimeSeconds >= TextToDraw[index].DrawTime)
		{
			TextToDraw.RemoveAt(index);
		}
		else
		{
			index++;
		}
	}
#endif
}
