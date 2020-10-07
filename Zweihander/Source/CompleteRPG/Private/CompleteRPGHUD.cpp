// Copyright Epic Games, Inc. All Rights Reserved.

#include "CompleteRPG.h"
#include "CompleteRPGHUD.h"
#include "CompleteRPGPC.h"
#include "HoverDronePawn.h"
#include "Engine/Canvas.h"
#include "TextureResource.h"
#include "CanvasItem.h"

ACompleteRPGHUD::ACompleteRPGHUD(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	bShowTelemetry = true;
}

/** Given angle in degrees and range [0..360), return string denoting compass direction. */
static const TCHAR* HeadingAngleToDirectionString(float Angle)
{
	if (Angle < 22.5f)
	{
		return TEXT("N");
	}
	else if (Angle < (22.5f * 3))
	{
		return TEXT("NE");
	}
	else if (Angle < (22.5f * 5))
	{
		return TEXT("E");
	}
	else if (Angle < (22.5f * 7))
	{
		return TEXT("SE");
	}
	else if (Angle < (22.5f * 9))
	{
		return TEXT("S");
	}
	else if (Angle < (22.5f * 11))
	{
		return TEXT("SW");
	}
	else if (Angle < (22.5f * 13))
	{
		return TEXT("W");
	}
	else if (Angle < (22.5f * 15))
	{
		return TEXT("NW");
	}
	else
	{
		return TEXT("N");
	}
}

void ACompleteRPGHUD::DrawHUD()
{
	Super::DrawHUD();

	// basic telemetry data
	if (bShowTelemetry)
	{
		// draw onscreen data
		ACompleteRPGPC* const MyPC = Cast<ACompleteRPGPC>(PlayerOwner);
		if (MyPC)
		{
			APawn* const MyPawn = MyPC->GetPawn();
			AHoverDronePawn* const HoverDronePawn = Cast<AHoverDronePawn>(MyPawn);

			static float StartX = 75.f;
			static float StartY = 75.f;
			static float LineGap = 20.f;

			float CurY = StartY;

			FString const MovementString = MyPC->GetControlModeString();
			DrawText(MovementString, FLinearColor::Yellow, StartX, CurY);
			CurY += LineGap;

			if (HoverDronePawn)
			{
				if (HoverDronePawn->IsMaintainingConstantAltitude())
				{
					DrawText(FString(TEXT(" Auto Altitude ON")), FLinearColor::Yellow, StartX, CurY);
				}
				else
				{
					DrawText(FString(TEXT(" Auto Altitude OFF")), FLinearColor::Yellow, StartX, CurY);
				}
				CurY += LineGap;
			}

			float const CurAltitude = HoverDronePawn ? (HoverDronePawn->GetAltitude() / 100.f) : 0.f;
			FString AltitudeString = FString::Printf(TEXT(" Altitude: %.0fm"), CurAltitude);
			DrawText(AltitudeString, FLinearColor::Yellow, StartX, CurY);
			CurY += LineGap;

			float HeadingAngle = MyPawn ? MyPawn->GetActorRotation().Vector().HeadingAngle() : 0.f;		// we have a rad value in range [-Pi..Pi)
			HeadingAngle = FMath::RadiansToDegrees(HeadingAngle) + 180.f;								// now deg value in range [0..360)
			FString const HeadingString = FString::Printf(TEXT(" Heading: %s %.0f"), HeadingAngleToDirectionString(HeadingAngle), HeadingAngle);
			DrawText(HeadingString, FLinearColor::Yellow, StartX, CurY);
			CurY += LineGap;

			float const Speed = MyPawn ? (MyPawn->GetVelocity().Size() / 100.f) : 0.f;		// m/s
			FString const SpeedString = FString::Printf(TEXT(" Speed: %.0f m/s"), Speed);
			DrawText(SpeedString, FLinearColor::Yellow, StartX, CurY);
			CurY += LineGap;

			if (MyPC->PlayerCameraManager)
			{
				float const CurrentFOV = MyPC->PlayerCameraManager->GetFOVAngle();		// deg

				// Assuming a 24.576mm sensor width, per KimL
				static const float HalfSensorSize = 24.576f / 2.f;
				float FocalLengthMM = HalfSensorSize / FMath::Tan( FMath::DegreesToRadians(CurrentFOV*0.5f) );
				
				FString const FOVString = FString::Printf(TEXT(" Zoom: %.0fmm (%.0f deg fov)"), FocalLengthMM, CurrentFOV);
				DrawText(FOVString, FLinearColor::Yellow, StartX, CurY);
				CurY += LineGap;
			}
		}
	}
}

void ACompleteRPGHUD::SetShowTelemetry(bool bShow)
{
	bShowTelemetry = bShow;
}
