// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/GameFramework/HUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHUD() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AHUD_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UFont_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EBlendMode();
	ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDebugTextInfo();
	ENGINE_API UClass* Z_Construct_UClass_UCanvas_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AHUD::execPreviousDebugTarget)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PreviousDebugTarget();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AHUD::execNextDebugTarget)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->NextDebugTarget();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AHUD::execGetOwningPawn)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(APawn**)Z_Param__Result=P_THIS->GetOwningPawn();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AHUD::execGetOwningPlayerController)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(APlayerController**)Z_Param__Result=P_THIS->GetOwningPlayerController();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AHUD::execAddHitBox)
	{
		P_GET_STRUCT(FVector2D,Z_Param_Position);
		P_GET_STRUCT(FVector2D,Z_Param_Size);
		P_GET_PROPERTY(FNameProperty,Z_Param_InName);
		P_GET_UBOOL(Z_Param_bConsumesInput);
		P_GET_PROPERTY(FIntProperty,Z_Param_Priority);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddHitBox(Z_Param_Position,Z_Param_Size,Z_Param_InName,Z_Param_bConsumesInput,Z_Param_Priority);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AHUD::execGetActorsInSelectionRectangle)
	{
		P_GET_OBJECT(UClass,Z_Param_ClassFilter);
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_FirstPoint);
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_SecondPoint);
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_OutActors);
		P_GET_UBOOL(Z_Param_bIncludeNonCollidingComponents);
		P_GET_UBOOL(Z_Param_bActorMustBeFullyEnclosed);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetActorsInSelectionRectangle(Z_Param_ClassFilter,Z_Param_Out_FirstPoint,Z_Param_Out_SecondPoint,Z_Param_Out_OutActors,Z_Param_bIncludeNonCollidingComponents,Z_Param_bActorMustBeFullyEnclosed);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AHUD::execDeproject)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_ScreenX);
		P_GET_PROPERTY(FFloatProperty,Z_Param_ScreenY);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_WorldPosition);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_WorldDirection);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Deproject(Z_Param_ScreenX,Z_Param_ScreenY,Z_Param_Out_WorldPosition,Z_Param_Out_WorldDirection);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AHUD::execProject)
	{
		P_GET_STRUCT(FVector,Z_Param_Location);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->Project(Z_Param_Location);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AHUD::execDrawMaterialTriangle)
	{
		P_GET_OBJECT(UMaterialInterface,Z_Param_Material);
		P_GET_STRUCT(FVector2D,Z_Param_V0_Pos);
		P_GET_STRUCT(FVector2D,Z_Param_V1_Pos);
		P_GET_STRUCT(FVector2D,Z_Param_V2_Pos);
		P_GET_STRUCT(FVector2D,Z_Param_V0_UV);
		P_GET_STRUCT(FVector2D,Z_Param_V1_UV);
		P_GET_STRUCT(FVector2D,Z_Param_V2_UV);
		P_GET_STRUCT(FLinearColor,Z_Param_V0_Color);
		P_GET_STRUCT(FLinearColor,Z_Param_V1_Color);
		P_GET_STRUCT(FLinearColor,Z_Param_V2_Color);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DrawMaterialTriangle(Z_Param_Material,Z_Param_V0_Pos,Z_Param_V1_Pos,Z_Param_V2_Pos,Z_Param_V0_UV,Z_Param_V1_UV,Z_Param_V2_UV,Z_Param_V0_Color,Z_Param_V1_Color,Z_Param_V2_Color);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AHUD::execDrawMaterialSimple)
	{
		P_GET_OBJECT(UMaterialInterface,Z_Param_Material);
		P_GET_PROPERTY(FFloatProperty,Z_Param_ScreenX);
		P_GET_PROPERTY(FFloatProperty,Z_Param_ScreenY);
		P_GET_PROPERTY(FFloatProperty,Z_Param_ScreenW);
		P_GET_PROPERTY(FFloatProperty,Z_Param_ScreenH);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Scale);
		P_GET_UBOOL(Z_Param_bScalePosition);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DrawMaterialSimple(Z_Param_Material,Z_Param_ScreenX,Z_Param_ScreenY,Z_Param_ScreenW,Z_Param_ScreenH,Z_Param_Scale,Z_Param_bScalePosition);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AHUD::execDrawMaterial)
	{
		P_GET_OBJECT(UMaterialInterface,Z_Param_Material);
		P_GET_PROPERTY(FFloatProperty,Z_Param_ScreenX);
		P_GET_PROPERTY(FFloatProperty,Z_Param_ScreenY);
		P_GET_PROPERTY(FFloatProperty,Z_Param_ScreenW);
		P_GET_PROPERTY(FFloatProperty,Z_Param_ScreenH);
		P_GET_PROPERTY(FFloatProperty,Z_Param_MaterialU);
		P_GET_PROPERTY(FFloatProperty,Z_Param_MaterialV);
		P_GET_PROPERTY(FFloatProperty,Z_Param_MaterialUWidth);
		P_GET_PROPERTY(FFloatProperty,Z_Param_MaterialVHeight);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Scale);
		P_GET_UBOOL(Z_Param_bScalePosition);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Rotation);
		P_GET_STRUCT(FVector2D,Z_Param_RotPivot);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DrawMaterial(Z_Param_Material,Z_Param_ScreenX,Z_Param_ScreenY,Z_Param_ScreenW,Z_Param_ScreenH,Z_Param_MaterialU,Z_Param_MaterialV,Z_Param_MaterialUWidth,Z_Param_MaterialVHeight,Z_Param_Scale,Z_Param_bScalePosition,Z_Param_Rotation,Z_Param_RotPivot);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AHUD::execDrawTextureSimple)
	{
		P_GET_OBJECT(UTexture,Z_Param_Texture);
		P_GET_PROPERTY(FFloatProperty,Z_Param_ScreenX);
		P_GET_PROPERTY(FFloatProperty,Z_Param_ScreenY);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Scale);
		P_GET_UBOOL(Z_Param_bScalePosition);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DrawTextureSimple(Z_Param_Texture,Z_Param_ScreenX,Z_Param_ScreenY,Z_Param_Scale,Z_Param_bScalePosition);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AHUD::execDrawTexture)
	{
		P_GET_OBJECT(UTexture,Z_Param_Texture);
		P_GET_PROPERTY(FFloatProperty,Z_Param_ScreenX);
		P_GET_PROPERTY(FFloatProperty,Z_Param_ScreenY);
		P_GET_PROPERTY(FFloatProperty,Z_Param_ScreenW);
		P_GET_PROPERTY(FFloatProperty,Z_Param_ScreenH);
		P_GET_PROPERTY(FFloatProperty,Z_Param_TextureU);
		P_GET_PROPERTY(FFloatProperty,Z_Param_TextureV);
		P_GET_PROPERTY(FFloatProperty,Z_Param_TextureUWidth);
		P_GET_PROPERTY(FFloatProperty,Z_Param_TextureVHeight);
		P_GET_STRUCT(FLinearColor,Z_Param_TintColor);
		P_GET_PROPERTY(FByteProperty,Z_Param_BlendMode);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Scale);
		P_GET_UBOOL(Z_Param_bScalePosition);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Rotation);
		P_GET_STRUCT(FVector2D,Z_Param_RotPivot);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DrawTexture(Z_Param_Texture,Z_Param_ScreenX,Z_Param_ScreenY,Z_Param_ScreenW,Z_Param_ScreenH,Z_Param_TextureU,Z_Param_TextureV,Z_Param_TextureUWidth,Z_Param_TextureVHeight,Z_Param_TintColor,EBlendMode(Z_Param_BlendMode),Z_Param_Scale,Z_Param_bScalePosition,Z_Param_Rotation,Z_Param_RotPivot);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AHUD::execDrawRect)
	{
		P_GET_STRUCT(FLinearColor,Z_Param_RectColor);
		P_GET_PROPERTY(FFloatProperty,Z_Param_ScreenX);
		P_GET_PROPERTY(FFloatProperty,Z_Param_ScreenY);
		P_GET_PROPERTY(FFloatProperty,Z_Param_ScreenW);
		P_GET_PROPERTY(FFloatProperty,Z_Param_ScreenH);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DrawRect(Z_Param_RectColor,Z_Param_ScreenX,Z_Param_ScreenY,Z_Param_ScreenW,Z_Param_ScreenH);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AHUD::execDrawLine)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_StartScreenX);
		P_GET_PROPERTY(FFloatProperty,Z_Param_StartScreenY);
		P_GET_PROPERTY(FFloatProperty,Z_Param_EndScreenX);
		P_GET_PROPERTY(FFloatProperty,Z_Param_EndScreenY);
		P_GET_STRUCT(FLinearColor,Z_Param_LineColor);
		P_GET_PROPERTY(FFloatProperty,Z_Param_LineThickness);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DrawLine(Z_Param_StartScreenX,Z_Param_StartScreenY,Z_Param_EndScreenX,Z_Param_EndScreenY,Z_Param_LineColor,Z_Param_LineThickness);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AHUD::execDrawText)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Text);
		P_GET_STRUCT(FLinearColor,Z_Param_TextColor);
		P_GET_PROPERTY(FFloatProperty,Z_Param_ScreenX);
		P_GET_PROPERTY(FFloatProperty,Z_Param_ScreenY);
		P_GET_OBJECT(UFont,Z_Param_Font);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Scale);
		P_GET_UBOOL(Z_Param_bScalePosition);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DrawText(Z_Param_Text,Z_Param_TextColor,Z_Param_ScreenX,Z_Param_ScreenY,Z_Param_Font,Z_Param_Scale,Z_Param_bScalePosition);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AHUD::execGetTextSize)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Text);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_OutWidth);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_OutHeight);
		P_GET_OBJECT(UFont,Z_Param_Font);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Scale);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetTextSize(Z_Param_Text,Z_Param_Out_OutWidth,Z_Param_Out_OutHeight,Z_Param_Font,Z_Param_Scale);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AHUD::execRemoveDebugText)
	{
		P_GET_OBJECT(AActor,Z_Param_SrcActor);
		P_GET_UBOOL(Z_Param_bLeaveDurationText);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveDebugText_Implementation(Z_Param_SrcActor,Z_Param_bLeaveDurationText);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AHUD::execRemoveAllDebugStrings)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveAllDebugStrings_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AHUD::execAddDebugText)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_DebugText);
		P_GET_OBJECT(AActor,Z_Param_SrcActor);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
		P_GET_STRUCT(FVector,Z_Param_Offset);
		P_GET_STRUCT(FVector,Z_Param_DesiredOffset);
		P_GET_STRUCT(FColor,Z_Param_TextColor);
		P_GET_UBOOL(Z_Param_bSkipOverwriteCheck);
		P_GET_UBOOL(Z_Param_bAbsoluteLocation);
		P_GET_UBOOL(Z_Param_bKeepAttachedToActor);
		P_GET_OBJECT(UFont,Z_Param_InFont);
		P_GET_PROPERTY(FFloatProperty,Z_Param_FontScale);
		P_GET_UBOOL(Z_Param_bDrawShadow);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddDebugText_Implementation(Z_Param_DebugText,Z_Param_SrcActor,Z_Param_Duration,Z_Param_Offset,Z_Param_DesiredOffset,Z_Param_TextColor,Z_Param_bSkipOverwriteCheck,Z_Param_bAbsoluteLocation,Z_Param_bKeepAttachedToActor,Z_Param_InFont,Z_Param_FontScale,Z_Param_bDrawShadow);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AHUD::execShowDebugForReticleTargetToggle)
	{
		P_GET_OBJECT(UClass,Z_Param_DesiredClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ShowDebugForReticleTargetToggle(Z_Param_DesiredClass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AHUD::execShowDebugToggleSubCategory)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_Category);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ShowDebugToggleSubCategory(Z_Param_Category);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AHUD::execShowDebug)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_DebugType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ShowDebug(Z_Param_DebugType);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AHUD::execShowHUD)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ShowHUD();
		P_NATIVE_END;
	}
	static FName NAME_AHUD_AddDebugText = FName(TEXT("AddDebugText"));
	void AHUD::AddDebugText(const FString& DebugText, AActor* SrcActor, float Duration, FVector Offset, FVector DesiredOffset, FColor TextColor, bool bSkipOverwriteCheck, bool bAbsoluteLocation, bool bKeepAttachedToActor, UFont* InFont, float FontScale, bool bDrawShadow)
	{
		HUD_eventAddDebugText_Parms Parms;
		Parms.DebugText=DebugText;
		Parms.SrcActor=SrcActor;
		Parms.Duration=Duration;
		Parms.Offset=Offset;
		Parms.DesiredOffset=DesiredOffset;
		Parms.TextColor=TextColor;
		Parms.bSkipOverwriteCheck=bSkipOverwriteCheck ? true : false;
		Parms.bAbsoluteLocation=bAbsoluteLocation ? true : false;
		Parms.bKeepAttachedToActor=bKeepAttachedToActor ? true : false;
		Parms.InFont=InFont;
		Parms.FontScale=FontScale;
		Parms.bDrawShadow=bDrawShadow ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AHUD_AddDebugText),&Parms);
	}
	static FName NAME_AHUD_ReceiveDrawHUD = FName(TEXT("ReceiveDrawHUD"));
	void AHUD::ReceiveDrawHUD(int32 SizeX, int32 SizeY)
	{
		HUD_eventReceiveDrawHUD_Parms Parms;
		Parms.SizeX=SizeX;
		Parms.SizeY=SizeY;
		ProcessEvent(FindFunctionChecked(NAME_AHUD_ReceiveDrawHUD),&Parms);
	}
	static FName NAME_AHUD_ReceiveHitBoxBeginCursorOver = FName(TEXT("ReceiveHitBoxBeginCursorOver"));
	void AHUD::ReceiveHitBoxBeginCursorOver(const FName BoxName)
	{
		HUD_eventReceiveHitBoxBeginCursorOver_Parms Parms;
		Parms.BoxName=BoxName;
		ProcessEvent(FindFunctionChecked(NAME_AHUD_ReceiveHitBoxBeginCursorOver),&Parms);
	}
	static FName NAME_AHUD_ReceiveHitBoxClick = FName(TEXT("ReceiveHitBoxClick"));
	void AHUD::ReceiveHitBoxClick(const FName BoxName)
	{
		HUD_eventReceiveHitBoxClick_Parms Parms;
		Parms.BoxName=BoxName;
		ProcessEvent(FindFunctionChecked(NAME_AHUD_ReceiveHitBoxClick),&Parms);
	}
	static FName NAME_AHUD_ReceiveHitBoxEndCursorOver = FName(TEXT("ReceiveHitBoxEndCursorOver"));
	void AHUD::ReceiveHitBoxEndCursorOver(const FName BoxName)
	{
		HUD_eventReceiveHitBoxEndCursorOver_Parms Parms;
		Parms.BoxName=BoxName;
		ProcessEvent(FindFunctionChecked(NAME_AHUD_ReceiveHitBoxEndCursorOver),&Parms);
	}
	static FName NAME_AHUD_ReceiveHitBoxRelease = FName(TEXT("ReceiveHitBoxRelease"));
	void AHUD::ReceiveHitBoxRelease(const FName BoxName)
	{
		HUD_eventReceiveHitBoxRelease_Parms Parms;
		Parms.BoxName=BoxName;
		ProcessEvent(FindFunctionChecked(NAME_AHUD_ReceiveHitBoxRelease),&Parms);
	}
	static FName NAME_AHUD_RemoveAllDebugStrings = FName(TEXT("RemoveAllDebugStrings"));
	void AHUD::RemoveAllDebugStrings()
	{
		ProcessEvent(FindFunctionChecked(NAME_AHUD_RemoveAllDebugStrings),NULL);
	}
	static FName NAME_AHUD_RemoveDebugText = FName(TEXT("RemoveDebugText"));
	void AHUD::RemoveDebugText(AActor* SrcActor, bool bLeaveDurationText)
	{
		HUD_eventRemoveDebugText_Parms Parms;
		Parms.SrcActor=SrcActor;
		Parms.bLeaveDurationText=bLeaveDurationText ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AHUD_RemoveDebugText),&Parms);
	}
	void AHUD::StaticRegisterNativesAHUD()
	{
		UClass* Class = AHUD::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddDebugText", &AHUD::execAddDebugText },
			{ "AddHitBox", &AHUD::execAddHitBox },
			{ "Deproject", &AHUD::execDeproject },
			{ "DrawLine", &AHUD::execDrawLine },
			{ "DrawMaterial", &AHUD::execDrawMaterial },
			{ "DrawMaterialSimple", &AHUD::execDrawMaterialSimple },
			{ "DrawMaterialTriangle", &AHUD::execDrawMaterialTriangle },
			{ "DrawRect", &AHUD::execDrawRect },
			{ "DrawText", &AHUD::execDrawText },
			{ "DrawTexture", &AHUD::execDrawTexture },
			{ "DrawTextureSimple", &AHUD::execDrawTextureSimple },
			{ "GetActorsInSelectionRectangle", &AHUD::execGetActorsInSelectionRectangle },
			{ "GetOwningPawn", &AHUD::execGetOwningPawn },
			{ "GetOwningPlayerController", &AHUD::execGetOwningPlayerController },
			{ "GetTextSize", &AHUD::execGetTextSize },
			{ "NextDebugTarget", &AHUD::execNextDebugTarget },
			{ "PreviousDebugTarget", &AHUD::execPreviousDebugTarget },
			{ "Project", &AHUD::execProject },
			{ "RemoveAllDebugStrings", &AHUD::execRemoveAllDebugStrings },
			{ "RemoveDebugText", &AHUD::execRemoveDebugText },
			{ "ShowDebug", &AHUD::execShowDebug },
			{ "ShowDebugForReticleTargetToggle", &AHUD::execShowDebugForReticleTargetToggle },
			{ "ShowDebugToggleSubCategory", &AHUD::execShowDebugToggleSubCategory },
			{ "ShowHUD", &AHUD::execShowHUD },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AHUD_AddDebugText_Statics
	{
		static void NewProp_bDrawShadow_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDrawShadow;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FontScale;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InFont;
		static void NewProp_bKeepAttachedToActor_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bKeepAttachedToActor;
		static void NewProp_bAbsoluteLocation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAbsoluteLocation;
		static void NewProp_bSkipOverwriteCheck_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSkipOverwriteCheck;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TextColor;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DesiredOffset;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Offset;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Duration;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SrcActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DebugText_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DebugText;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AHUD_AddDebugText_Statics::NewProp_bDrawShadow_SetBit(void* Obj)
	{
		((HUD_eventAddDebugText_Parms*)Obj)->bDrawShadow = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AHUD_AddDebugText_Statics::NewProp_bDrawShadow = { "bDrawShadow", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(HUD_eventAddDebugText_Parms), &Z_Construct_UFunction_AHUD_AddDebugText_Statics::NewProp_bDrawShadow_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AHUD_AddDebugText_Statics::NewProp_FontScale = { "FontScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HUD_eventAddDebugText_Parms, FontScale), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AHUD_AddDebugText_Statics::NewProp_InFont = { "InFont", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HUD_eventAddDebugText_Parms, InFont), Z_Construct_UClass_UFont_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AHUD_AddDebugText_Statics::NewProp_bKeepAttachedToActor_SetBit(void* Obj)
	{
		((HUD_eventAddDebugText_Parms*)Obj)->bKeepAttachedToActor = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AHUD_AddDebugText_Statics::NewProp_bKeepAttachedToActor = { "bKeepAttachedToActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(HUD_eventAddDebugText_Parms), &Z_Construct_UFunction_AHUD_AddDebugText_Statics::NewProp_bKeepAttachedToActor_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AHUD_AddDebugText_Statics::NewProp_bAbsoluteLocation_SetBit(void* Obj)
	{
		((HUD_eventAddDebugText_Parms*)Obj)->bAbsoluteLocation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AHUD_AddDebugText_Statics::NewProp_bAbsoluteLocation = { "bAbsoluteLocation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(HUD_eventAddDebugText_Parms), &Z_Construct_UFunction_AHUD_AddDebugText_Statics::NewProp_bAbsoluteLocation_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AHUD_AddDebugText_Statics::NewProp_bSkipOverwriteCheck_SetBit(void* Obj)
	{
		((HUD_eventAddDebugText_Parms*)Obj)->bSkipOverwriteCheck = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AHUD_AddDebugText_Statics::NewProp_bSkipOverwriteCheck = { "bSkipOverwriteCheck", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(HUD_eventAddDebugText_Parms), &Z_Construct_UFunction_AHUD_AddDebugText_Statics::NewProp_bSkipOverwriteCheck_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AHUD_AddDebugText_Statics::NewProp_TextColor = { "TextColor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HUD_eventAddDebugText_Parms, TextColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AHUD_AddDebugText_Statics::NewProp_DesiredOffset = { "DesiredOffset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HUD_eventAddDebugText_Parms, DesiredOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AHUD_AddDebugText_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HUD_eventAddDebugText_Parms, Offset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AHUD_AddDebugText_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HUD_eventAddDebugText_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AHUD_AddDebugText_Statics::NewProp_SrcActor = { "SrcActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HUD_eventAddDebugText_Parms, SrcActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHUD_AddDebugText_Statics::NewProp_DebugText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AHUD_AddDebugText_Statics::NewProp_DebugText = { "DebugText", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HUD_eventAddDebugText_Parms, DebugText), METADATA_PARAMS(Z_Construct_UFunction_AHUD_AddDebugText_Statics::NewProp_DebugText_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AHUD_AddDebugText_Statics::NewProp_DebugText_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHUD_AddDebugText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHUD_AddDebugText_Statics::NewProp_bDrawShadow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHUD_AddDebugText_Statics::NewProp_FontScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHUD_AddDebugText_Statics::NewProp_InFont,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHUD_AddDebugText_Statics::NewProp_bKeepAttachedToActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHUD_AddDebugText_Statics::NewProp_bAbsoluteLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHUD_AddDebugText_Statics::NewProp_bSkipOverwriteCheck,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHUD_AddDebugText_Statics::NewProp_TextColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHUD_AddDebugText_Statics::NewProp_DesiredOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHUD_AddDebugText_Statics::NewProp_Offset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHUD_AddDebugText_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHUD_AddDebugText_Statics::NewProp_SrcActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHUD_AddDebugText_Statics::NewProp_DebugText,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHUD_AddDebugText_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Add debug text for a specific actor to be displayed via DrawDebugTextList().  If the debug text is invalid then it will\n\x09 * attempt to remove any previous entries via RemoveDebugText().\n\x09 * \n\x09 * @param DebugText\x09\x09\x09\x09Text to draw\n\x09 * @param SrcActor\x09\x09\x09\x09""Actor to which this relates\n\x09 * @param Duration\x09\x09\x09\x09""Duration to display the string\n\x09 * @param Offset \x09\x09\x09\x09Initial offset to render text\n\x09 * @param DesiredOffset \x09\x09""Desired offset to render text - the text will move to this location over the given duration\n\x09 * @param TextColor \x09\x09\x09""Color of text to render\n\x09 * @param bSkipOverwriteCheck \x09skips the check to see if there is already debug text for the given actor\n\x09 * @param bAbsoluteLocation \x09use an absolute world location\n\x09 * @param bKeepAttachedToActor \x09if this is true the text will follow the actor, otherwise it will be drawn at the location when the call was made\n\x09 * @param InFont \x09\x09\x09\x09""font to use\n\x09 * @param FontScale \x09\x09\x09scale\n\x09 * @param bDrawShadow \x09\x09\x09""Draw shadow on this string\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/HUD.h" },
		{ "ToolTip", "Add debug text for a specific actor to be displayed via DrawDebugTextList().  If the debug text is invalid then it will\nattempt to remove any previous entries via RemoveDebugText().\n\n@param DebugText                             Text to draw\n@param SrcActor                              Actor to which this relates\n@param Duration                              Duration to display the string\n@param Offset                                Initial offset to render text\n@param DesiredOffset                 Desired offset to render text - the text will move to this location over the given duration\n@param TextColor                     Color of text to render\n@param bSkipOverwriteCheck   skips the check to see if there is already debug text for the given actor\n@param bAbsoluteLocation     use an absolute world location\n@param bKeepAttachedToActor  if this is true the text will follow the actor, otherwise it will be drawn at the location when the call was made\n@param InFont                                font to use\n@param FontScale                     scale\n@param bDrawShadow                   Draw shadow on this string" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHUD_AddDebugText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHUD, nullptr, "AddDebugText", nullptr, nullptr, sizeof(HUD_eventAddDebugText_Parms), Z_Construct_UFunction_AHUD_AddDebugText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHUD_AddDebugText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01820CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHUD_AddDebugText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHUD_AddDebugText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHUD_AddDebugText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHUD_AddDebugText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHUD_AddHitBox_Statics
	{
		struct HUD_eventAddHitBox_Parms
		{
			FVector2D Position;
			FVector2D Size;
			FName InName;
			bool bConsumesInput;
			int32 Priority;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Priority;
		static void NewProp_bConsumesInput_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bConsumesInput;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_InName;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Size;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Position;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AHUD_AddHitBox_Statics::NewProp_Priority = { "Priority", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HUD_eventAddHitBox_Parms, Priority), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AHUD_AddHitBox_Statics::NewProp_bConsumesInput_SetBit(void* Obj)
	{
		((HUD_eventAddHitBox_Parms*)Obj)->bConsumesInput = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AHUD_AddHitBox_Statics::NewProp_bConsumesInput = { "bConsumesInput", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(HUD_eventAddHitBox_Parms), &Z_Construct_UFunction_AHUD_AddHitBox_Statics::NewProp_bConsumesInput_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AHUD_AddHitBox_Statics::NewProp_InName = { "InName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HUD_eventAddHitBox_Parms, InName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AHUD_AddHitBox_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HUD_eventAddHitBox_Parms, Size), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AHUD_AddHitBox_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HUD_eventAddHitBox_Parms, Position), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHUD_AddHitBox_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHUD_AddHitBox_Statics::NewProp_Priority,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHUD_AddHitBox_Statics::NewProp_bConsumesInput,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHUD_AddHitBox_Statics::NewProp_InName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHUD_AddHitBox_Statics::NewProp_Size,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHUD_AddHitBox_Statics::NewProp_Position,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHUD_AddHitBox_Statics::Function_MetaDataParams[] = {
		{ "Category", "HUD" },
		{ "Comment", "/**\n\x09 * Add a hitbox to the hud\n\x09 * @param Position\x09\x09\x09""Coordinates of the top left of the hit box.\n\x09 * @param Size\x09\x09\x09\x09Size of the hit box.\n\x09 * @param Name\x09\x09\x09\x09Name of the hit box.\n\x09 * @param bConsumesInput\x09Whether click processing should continue if this hit box is clicked.\n\x09 * @param Priority\x09\x09\x09The priority of the box used for layering. Larger values are considered first.  Equal values are considered in the order they were added.\n\x09 */" },
		{ "CPP_Default_Priority", "0" },
		{ "ModuleRelativePath", "Classes/GameFramework/HUD.h" },
		{ "ToolTip", "Add a hitbox to the hud\n@param Position                      Coordinates of the top left of the hit box.\n@param Size                          Size of the hit box.\n@param Name                          Name of the hit box.\n@param bConsumesInput        Whether click processing should continue if this hit box is clicked.\n@param Priority                      The priority of the box used for layering. Larger values are considered first.  Equal values are considered in the order they were added." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHUD_AddHitBox_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHUD, nullptr, "AddHitBox", nullptr, nullptr, sizeof(HUD_eventAddHitBox_Parms), Z_Construct_UFunction_AHUD_AddHitBox_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHUD_AddHitBox_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHUD_AddHitBox_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHUD_AddHitBox_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHUD_AddHitBox()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHUD_AddHitBox_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHUD_Deproject_Statics
	{
		struct HUD_eventDeproject_Parms
		{
			float ScreenX;
			float ScreenY;
			FVector WorldPosition;
			FVector WorldDirection;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WorldDirection;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WorldPosition;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ScreenY;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ScreenX;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AHUD_Deproject_Statics::NewProp_WorldDirection = { "WorldDirection", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HUD_eventDeproject_Parms, WorldDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AHUD_Deproject_Statics::NewProp_WorldPosition = { "WorldPosition", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HUD_eventDeproject_Parms, WorldPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AHUD_Deproject_Statics::NewProp_ScreenY = { "ScreenY", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HUD_eventDeproject_Parms, ScreenY), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AHUD_Deproject_Statics::NewProp_ScreenX = { "ScreenX", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HUD_eventDeproject_Parms, ScreenX), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHUD_Deproject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHUD_Deproject_Statics::NewProp_WorldDirection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHUD_Deproject_Statics::NewProp_WorldPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHUD_Deproject_Statics::NewProp_ScreenY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHUD_Deproject_Statics::NewProp_ScreenX,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHUD_Deproject_Statics::Function_MetaDataParams[] = {
		{ "Category", "HUD" },
		{ "Comment", "/** Transforms a 2D screen location into a 3D location and direction */" },
		{ "ModuleRelativePath", "Classes/GameFramework/HUD.h" },
		{ "ToolTip", "Transforms a 2D screen location into a 3D location and direction" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHUD_Deproject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHUD, nullptr, "Deproject", nullptr, nullptr, sizeof(HUD_eventDeproject_Parms), Z_Construct_UFunction_AHUD_Deproject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHUD_Deproject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHUD_Deproject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHUD_Deproject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHUD_Deproject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHUD_Deproject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHUD_DrawLine_Statics
	{
		struct HUD_eventDrawLine_Parms
		{
			float StartScreenX;
			float StartScreenY;
			float EndScreenX;
			float EndScreenY;
			FLinearColor LineColor;
			float LineThickness;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LineThickness;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LineColor;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EndScreenY;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EndScreenX;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StartScreenY;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StartScreenX;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AHUD_DrawLine_Statics::NewProp_LineThickness = { "LineThickness", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HUD_eventDrawLine_Parms, LineThickness), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AHUD_DrawLine_Statics::NewProp_LineColor = { "LineColor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HUD_eventDrawLine_Parms, LineColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AHUD_DrawLine_Statics::NewProp_EndScreenY = { "EndScreenY", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HUD_eventDrawLine_Parms, EndScreenY), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AHUD_DrawLine_Statics::NewProp_EndScreenX = { "EndScreenX", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HUD_eventDrawLine_Parms, EndScreenX), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AHUD_DrawLine_Statics::NewProp_StartScreenY = { "StartScreenY", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HUD_eventDrawLine_Parms, StartScreenY), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AHUD_DrawLine_Statics::NewProp_StartScreenX = { "StartScreenX", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HUD_eventDrawLine_Parms, StartScreenX), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHUD_DrawLine_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHUD_DrawLine_Statics::NewProp_LineThickness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHUD_DrawLine_Statics::NewProp_LineColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHUD_DrawLine_Statics::NewProp_EndScreenY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHUD_DrawLine_Statics::NewProp_EndScreenX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHUD_DrawLine_Statics::NewProp_StartScreenY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHUD_DrawLine_Statics::NewProp_StartScreenX,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHUD_DrawLine_Statics::Function_MetaDataParams[] = {
		{ "Category", "HUD" },
		{ "Comment", "/**\n\x09 * Draws a 2D line on the HUD.\n\x09 * @param StartScreenX\x09\x09Screen-space X coordinate of start of the line.\n\x09 * @param StartScreenY\x09\x09Screen-space Y coordinate of start of the line.\n\x09 * @param EndScreenX\x09\x09Screen-space X coordinate of end of the line.\n\x09 * @param EndScreenY\x09\x09Screen-space Y coordinate of end of the line.\n\x09 * @param LineColor\x09\x09\x09""Color to draw line\n\x09 * @param LineThickness\x09\x09Thickness of the line to draw\n\x09 */" },
		{ "CPP_Default_LineThickness", "0.000000" },
		{ "LineColor", "(R=0,G=0,B=0,A=1)" },
		{ "ModuleRelativePath", "Classes/GameFramework/HUD.h" },
		{ "ToolTip", "Draws a 2D line on the HUD.\n@param StartScreenX          Screen-space X coordinate of start of the line.\n@param StartScreenY          Screen-space Y coordinate of start of the line.\n@param EndScreenX            Screen-space X coordinate of end of the line.\n@param EndScreenY            Screen-space Y coordinate of end of the line.\n@param LineColor                     Color to draw line\n@param LineThickness         Thickness of the line to draw" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHUD_DrawLine_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHUD, nullptr, "DrawLine", nullptr, nullptr, sizeof(HUD_eventDrawLine_Parms), Z_Construct_UFunction_AHUD_DrawLine_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHUD_DrawLine_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHUD_DrawLine_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHUD_DrawLine_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHUD_DrawLine()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHUD_DrawLine_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHUD_DrawMaterial_Statics
	{
		struct HUD_eventDrawMaterial_Parms
		{
			UMaterialInterface* Material;
			float ScreenX;
			float ScreenY;
			float ScreenW;
			float ScreenH;
			float MaterialU;
			float MaterialV;
			float MaterialUWidth;
			float MaterialVHeight;
			float Scale;
			bool bScalePosition;
			float Rotation;
			FVector2D RotPivot;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RotPivot;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Rotation;
		static void NewProp_bScalePosition_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bScalePosition;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Scale;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaterialVHeight;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaterialUWidth;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaterialV;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaterialU;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ScreenH;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ScreenW;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ScreenY;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ScreenX;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Material;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AHUD_DrawMaterial_Statics::NewProp_RotPivot = { "RotPivot", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HUD_eventDrawMaterial_Parms, RotPivot), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AHUD_DrawMaterial_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HUD_eventDrawMaterial_Parms, Rotation), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AHUD_DrawMaterial_Statics::NewProp_bScalePosition_SetBit(void* Obj)
	{
		((HUD_eventDrawMaterial_Parms*)Obj)->bScalePosition = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AHUD_DrawMaterial_Statics::NewProp_bScalePosition = { "bScalePosition", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(HUD_eventDrawMaterial_Parms), &Z_Construct_UFunction_AHUD_DrawMaterial_Statics::NewProp_bScalePosition_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AHUD_DrawMaterial_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HUD_eventDrawMaterial_Parms, Scale), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AHUD_DrawMaterial_Statics::NewProp_MaterialVHeight = { "MaterialVHeight", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HUD_eventDrawMaterial_Parms, MaterialVHeight), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AHUD_DrawMaterial_Statics::NewProp_MaterialUWidth = { "MaterialUWidth", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HUD_eventDrawMaterial_Parms, MaterialUWidth), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AHUD_DrawMaterial_Statics::NewProp_MaterialV = { "MaterialV", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HUD_eventDrawMaterial_Parms, MaterialV), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AHUD_DrawMaterial_Statics::NewProp_MaterialU = { "MaterialU", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HUD_eventDrawMaterial_Parms, MaterialU), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AHUD_DrawMaterial_Statics::NewProp_ScreenH = { "ScreenH", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HUD_eventDrawMaterial_Parms, ScreenH), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AHUD_DrawMaterial_Statics::NewProp_ScreenW = { "ScreenW", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HUD_eventDrawMaterial_Parms, ScreenW), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AHUD_DrawMaterial_Statics::NewProp_ScreenY = { "ScreenY", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HUD_eventDrawMaterial_Parms, ScreenY), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AHUD_DrawMaterial_Statics::NewProp_ScreenX = { "ScreenX", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HUD_eventDrawMaterial_Parms, ScreenX), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AHUD_DrawMaterial_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HUD_eventDrawMaterial_Parms, Material), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHUD_DrawMaterial_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHUD_DrawMaterial_Statics::NewProp_RotPivot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHUD_DrawMaterial_Statics::NewProp_Rotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHUD_DrawMaterial_Statics::NewProp_bScalePosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHUD_DrawMaterial_Statics::NewProp_Scale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHUD_DrawMaterial_Statics::NewProp_MaterialVHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHUD_DrawMaterial_Statics::NewProp_MaterialUWidth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHUD_DrawMaterial_Statics::NewProp_MaterialV,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHUD_DrawMaterial_Statics::NewProp_MaterialU,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHUD_DrawMaterial_Statics::NewProp_ScreenH,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHUD_DrawMaterial_Statics::NewProp_ScreenW,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHUD_DrawMaterial_Statics::NewProp_ScreenY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHUD_DrawMaterial_Statics::NewProp_ScreenX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHUD_DrawMaterial_Statics::NewProp_Material,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHUD_DrawMaterial_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "9" },
		{ "Category", "HUD" },
		{ "Comment", "/**\n\x09 * Draws a material-textured quad on the HUD.\n\x09 * @param Material\x09\x09\x09Material to use\n\x09 * @param ScreenX\x09\x09\x09Screen-space X coordinate of upper left corner of the quad.\n\x09 * @param ScreenY\x09\x09\x09Screen-space Y coordinate of upper left corner of the quad.\n\x09 * @param ScreenW\x09\x09\x09Screen-space width of the quad (in pixels).\n\x09 * @param ScreenH\x09\x09\x09Screen-space height of the quad (in pixels).\n\x09 * @param MaterialU\x09\x09\x09Texture-space U coordinate of upper left corner of the quad\n\x09 * @param MaterialV\x09\x09\x09Texture-space V coordinate of upper left corner of the quad.\n\x09 * @param MaterialUWidth\x09Texture-space width of the quad (in normalized UV distance).\n\x09 * @param MaterialVHeight\x09Texture-space height of the quad (in normalized UV distance).\n\x09 * @param Scale\x09\x09\x09\x09""Amount to scale the entire texture (horizontally and vertically)\n\x09 * @param bScalePosition\x09Whether the \"Scale\" parameter should also scale the position of this draw call.\n\x09 * @param Rotation\x09\x09\x09""Amount to rotate this quad\n\x09 * @param RotPivot\x09\x09\x09Location (as proportion of quad, 0-1) to rotate about\n\x09 */" },
		{ "CPP_Default_bScalePosition", "false" },
		{ "CPP_Default_Rotation", "0.000000" },
		{ "CPP_Default_RotPivot", "" },
		{ "CPP_Default_Scale", "1.000000" },
		{ "ModuleRelativePath", "Classes/GameFramework/HUD.h" },
		{ "ToolTip", "Draws a material-textured quad on the HUD.\n@param Material                      Material to use\n@param ScreenX                       Screen-space X coordinate of upper left corner of the quad.\n@param ScreenY                       Screen-space Y coordinate of upper left corner of the quad.\n@param ScreenW                       Screen-space width of the quad (in pixels).\n@param ScreenH                       Screen-space height of the quad (in pixels).\n@param MaterialU                     Texture-space U coordinate of upper left corner of the quad\n@param MaterialV                     Texture-space V coordinate of upper left corner of the quad.\n@param MaterialUWidth        Texture-space width of the quad (in normalized UV distance).\n@param MaterialVHeight       Texture-space height of the quad (in normalized UV distance).\n@param Scale                         Amount to scale the entire texture (horizontally and vertically)\n@param bScalePosition        Whether the \"Scale\" parameter should also scale the position of this draw call.\n@param Rotation                      Amount to rotate this quad\n@param RotPivot                      Location (as proportion of quad, 0-1) to rotate about" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHUD_DrawMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHUD, nullptr, "DrawMaterial", nullptr, nullptr, sizeof(HUD_eventDrawMaterial_Parms), Z_Construct_UFunction_AHUD_DrawMaterial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHUD_DrawMaterial_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHUD_DrawMaterial_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHUD_DrawMaterial_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHUD_DrawMaterial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHUD_DrawMaterial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHUD_DrawMaterialSimple_Statics
	{
		struct HUD_eventDrawMaterialSimple_Parms
		{
			UMaterialInterface* Material;
			float ScreenX;
			float ScreenY;
			float ScreenW;
			float ScreenH;
			float Scale;
			bool bScalePosition;
		};
		static void NewProp_bScalePosition_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bScalePosition;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Scale;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ScreenH;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ScreenW;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ScreenY;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ScreenX;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Material;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AHUD_DrawMaterialSimple_Statics::NewProp_bScalePosition_SetBit(void* Obj)
	{
		((HUD_eventDrawMaterialSimple_Parms*)Obj)->bScalePosition = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AHUD_DrawMaterialSimple_Statics::NewProp_bScalePosition = { "bScalePosition", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(HUD_eventDrawMaterialSimple_Parms), &Z_Construct_UFunction_AHUD_DrawMaterialSimple_Statics::NewProp_bScalePosition_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AHUD_DrawMaterialSimple_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HUD_eventDrawMaterialSimple_Parms, Scale), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AHUD_DrawMaterialSimple_Statics::NewProp_ScreenH = { "ScreenH", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HUD_eventDrawMaterialSimple_Parms, ScreenH), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AHUD_DrawMaterialSimple_Statics::NewProp_ScreenW = { "ScreenW", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HUD_eventDrawMaterialSimple_Parms, ScreenW), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AHUD_DrawMaterialSimple_Statics::NewProp_ScreenY = { "ScreenY", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HUD_eventDrawMaterialSimple_Parms, ScreenY), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AHUD_DrawMaterialSimple_Statics::NewProp_ScreenX = { "ScreenX", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HUD_eventDrawMaterialSimple_Parms, ScreenX), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AHUD_DrawMaterialSimple_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HUD_eventDrawMaterialSimple_Parms, Material), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHUD_DrawMaterialSimple_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHUD_DrawMaterialSimple_Statics::NewProp_bScalePosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHUD_DrawMaterialSimple_Statics::NewProp_Scale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHUD_DrawMaterialSimple_Statics::NewProp_ScreenH,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHUD_DrawMaterialSimple_Statics::NewProp_ScreenW,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHUD_DrawMaterialSimple_Statics::NewProp_ScreenY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHUD_DrawMaterialSimple_Statics::NewProp_ScreenX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHUD_DrawMaterialSimple_Statics::NewProp_Material,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHUD_DrawMaterialSimple_Statics::Function_MetaDataParams[] = {
		{ "Category", "HUD" },
		{ "Comment", "/**\n\x09 * Draws a material-textured quad on the HUD.  Assumes UVs such that the entire material is shown.\n\x09 * @param Material\x09\x09\x09Material to use\n\x09 * @param ScreenX\x09\x09\x09Screen-space X coordinate of upper left corner of the quad.\n\x09 * @param ScreenY\x09\x09\x09Screen-space Y coordinate of upper left corner of the quad.\n\x09 * @param ScreenW\x09\x09\x09Screen-space width of the quad (in pixels).\n\x09 * @param ScreenH\x09\x09\x09Screen-space height of the quad (in pixels).\n\x09 * @param Scale\x09\x09\x09\x09""Amount to scale the entire texture (horizontally and vertically)\n\x09 * @param bScalePosition\x09Whether the \"Scale\" parameter should also scale the position of this draw call.\n\x09 */" },
		{ "CPP_Default_bScalePosition", "false" },
		{ "CPP_Default_Scale", "1.000000" },
		{ "ModuleRelativePath", "Classes/GameFramework/HUD.h" },
		{ "ToolTip", "Draws a material-textured quad on the HUD.  Assumes UVs such that the entire material is shown.\n@param Material                      Material to use\n@param ScreenX                       Screen-space X coordinate of upper left corner of the quad.\n@param ScreenY                       Screen-space Y coordinate of upper left corner of the quad.\n@param ScreenW                       Screen-space width of the quad (in pixels).\n@param ScreenH                       Screen-space height of the quad (in pixels).\n@param Scale                         Amount to scale the entire texture (horizontally and vertically)\n@param bScalePosition        Whether the \"Scale\" parameter should also scale the position of this draw call." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHUD_DrawMaterialSimple_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHUD, nullptr, "DrawMaterialSimple", nullptr, nullptr, sizeof(HUD_eventDrawMaterialSimple_Parms), Z_Construct_UFunction_AHUD_DrawMaterialSimple_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHUD_DrawMaterialSimple_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHUD_DrawMaterialSimple_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHUD_DrawMaterialSimple_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHUD_DrawMaterialSimple()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHUD_DrawMaterialSimple_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHUD_DrawMaterialTriangle_Statics
	{
		struct HUD_eventDrawMaterialTriangle_Parms
		{
			UMaterialInterface* Material;
			FVector2D V0_Pos;
			FVector2D V1_Pos;
			FVector2D V2_Pos;
			FVector2D V0_UV;
			FVector2D V1_UV;
			FVector2D V2_UV;
			FLinearColor V0_Color;
			FLinearColor V1_Color;
			FLinearColor V2_Color;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_V2_Color;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_V1_Color;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_V0_Color;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_V2_UV;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_V1_UV;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_V0_UV;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_V2_Pos;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_V1_Pos;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_V0_Pos;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Material;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AHUD_DrawMaterialTriangle_Statics::NewProp_V2_Color = { "V2_Color", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HUD_eventDrawMaterialTriangle_Parms, V2_Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AHUD_DrawMaterialTriangle_Statics::NewProp_V1_Color = { "V1_Color", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HUD_eventDrawMaterialTriangle_Parms, V1_Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AHUD_DrawMaterialTriangle_Statics::NewProp_V0_Color = { "V0_Color", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HUD_eventDrawMaterialTriangle_Parms, V0_Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AHUD_DrawMaterialTriangle_Statics::NewProp_V2_UV = { "V2_UV", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HUD_eventDrawMaterialTriangle_Parms, V2_UV), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AHUD_DrawMaterialTriangle_Statics::NewProp_V1_UV = { "V1_UV", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HUD_eventDrawMaterialTriangle_Parms, V1_UV), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AHUD_DrawMaterialTriangle_Statics::NewProp_V0_UV = { "V0_UV", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HUD_eventDrawMaterialTriangle_Parms, V0_UV), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AHUD_DrawMaterialTriangle_Statics::NewProp_V2_Pos = { "V2_Pos", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HUD_eventDrawMaterialTriangle_Parms, V2_Pos), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AHUD_DrawMaterialTriangle_Statics::NewProp_V1_Pos = { "V1_Pos", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HUD_eventDrawMaterialTriangle_Parms, V1_Pos), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AHUD_DrawMaterialTriangle_Statics::NewProp_V0_Pos = { "V0_Pos", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HUD_eventDrawMaterialTriangle_Parms, V0_Pos), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AHUD_DrawMaterialTriangle_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HUD_eventDrawMaterialTriangle_Parms, Material), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHUD_DrawMaterialTriangle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHUD_DrawMaterialTriangle_Statics::NewProp_V2_Color,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHUD_DrawMaterialTriangle_Statics::NewProp_V1_Color,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHUD_DrawMaterialTriangle_Statics::NewProp_V0_Color,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHUD_DrawMaterialTriangle_Statics::NewProp_V2_UV,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHUD_DrawMaterialTriangle_Statics::NewProp_V1_UV,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHUD_DrawMaterialTriangle_Statics::NewProp_V0_UV,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHUD_DrawMaterialTriangle_Statics::NewProp_V2_Pos,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHUD_DrawMaterialTriangle_Statics::NewProp_V1_Pos,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHUD_DrawMaterialTriangle_Statics::NewProp_V0_Pos,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHUD_DrawMaterialTriangle_Statics::NewProp_Material,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHUD_DrawMaterialTriangle_Statics::Function_MetaDataParams[] = {
		{ "Category", "HUD" },
		{ "CPP_Default_V0_Color", "(R=1.000000,G=1.000000,B=1.000000,A=1.000000)" },
		{ "CPP_Default_V1_Color", "(R=1.000000,G=1.000000,B=1.000000,A=1.000000)" },
		{ "CPP_Default_V2_Color", "(R=1.000000,G=1.000000,B=1.000000,A=1.000000)" },
		{ "ModuleRelativePath", "Classes/GameFramework/HUD.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHUD_DrawMaterialTriangle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHUD, nullptr, "DrawMaterialTriangle", nullptr, nullptr, sizeof(HUD_eventDrawMaterialTriangle_Parms), Z_Construct_UFunction_AHUD_DrawMaterialTriangle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHUD_DrawMaterialTriangle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHUD_DrawMaterialTriangle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHUD_DrawMaterialTriangle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHUD_DrawMaterialTriangle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHUD_DrawMaterialTriangle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHUD_DrawRect_Statics
	{
		struct HUD_eventDrawRect_Parms
		{
			FLinearColor RectColor;
			float ScreenX;
			float ScreenY;
			float ScreenW;
			float ScreenH;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ScreenH;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ScreenW;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ScreenY;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ScreenX;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RectColor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AHUD_DrawRect_Statics::NewProp_ScreenH = { "ScreenH", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HUD_eventDrawRect_Parms, ScreenH), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AHUD_DrawRect_Statics::NewProp_ScreenW = { "ScreenW", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HUD_eventDrawRect_Parms, ScreenW), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AHUD_DrawRect_Statics::NewProp_ScreenY = { "ScreenY", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HUD_eventDrawRect_Parms, ScreenY), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AHUD_DrawRect_Statics::NewProp_ScreenX = { "ScreenX", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HUD_eventDrawRect_Parms, ScreenX), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AHUD_DrawRect_Statics::NewProp_RectColor = { "RectColor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HUD_eventDrawRect_Parms, RectColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHUD_DrawRect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHUD_DrawRect_Statics::NewProp_ScreenH,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHUD_DrawRect_Statics::NewProp_ScreenW,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHUD_DrawRect_Statics::NewProp_ScreenY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHUD_DrawRect_Statics::NewProp_ScreenX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHUD_DrawRect_Statics::NewProp_RectColor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHUD_DrawRect_Statics::Function_MetaDataParams[] = {
		{ "Category", "HUD" },
		{ "Comment", "/**\n\x09 * Draws a colored untextured quad on the HUD.\n\x09 * @param RectColor\x09\x09\x09""Color of the rect. Can be translucent.\n\x09 * @param ScreenX\x09\x09\x09Screen-space X coordinate of upper left corner of the quad.\n\x09 * @param ScreenY\x09\x09\x09Screen-space Y coordinate of upper left corner of the quad.\n\x09 * @param ScreenW\x09\x09\x09Screen-space width of the quad (in pixels).\n\x09 * @param ScreenH\x09\x09\x09Screen-space height of the quad (in pixels).\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/HUD.h" },
		{ "RectColor", "(R=0,G=0,B=0,A=1)" },
		{ "ToolTip", "Draws a colored untextured quad on the HUD.\n@param RectColor                     Color of the rect. Can be translucent.\n@param ScreenX                       Screen-space X coordinate of upper left corner of the quad.\n@param ScreenY                       Screen-space Y coordinate of upper left corner of the quad.\n@param ScreenW                       Screen-space width of the quad (in pixels).\n@param ScreenH                       Screen-space height of the quad (in pixels)." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHUD_DrawRect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHUD, nullptr, "DrawRect", nullptr, nullptr, sizeof(HUD_eventDrawRect_Parms), Z_Construct_UFunction_AHUD_DrawRect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHUD_DrawRect_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHUD_DrawRect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHUD_DrawRect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHUD_DrawRect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHUD_DrawRect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHUD_DrawText_Statics
	{
		struct HUD_eventDrawText_Parms
		{
			FString Text;
			FLinearColor TextColor;
			float ScreenX;
			float ScreenY;
			UFont* Font;
			float Scale;
			bool bScalePosition;
		};
		static void NewProp_bScalePosition_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bScalePosition;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Scale;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Font;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ScreenY;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ScreenX;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TextColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Text;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AHUD_DrawText_Statics::NewProp_bScalePosition_SetBit(void* Obj)
	{
		((HUD_eventDrawText_Parms*)Obj)->bScalePosition = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AHUD_DrawText_Statics::NewProp_bScalePosition = { "bScalePosition", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(HUD_eventDrawText_Parms), &Z_Construct_UFunction_AHUD_DrawText_Statics::NewProp_bScalePosition_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AHUD_DrawText_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HUD_eventDrawText_Parms, Scale), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AHUD_DrawText_Statics::NewProp_Font = { "Font", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HUD_eventDrawText_Parms, Font), Z_Construct_UClass_UFont_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AHUD_DrawText_Statics::NewProp_ScreenY = { "ScreenY", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HUD_eventDrawText_Parms, ScreenY), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AHUD_DrawText_Statics::NewProp_ScreenX = { "ScreenX", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HUD_eventDrawText_Parms, ScreenX), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AHUD_DrawText_Statics::NewProp_TextColor = { "TextColor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HUD_eventDrawText_Parms, TextColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHUD_DrawText_Statics::NewProp_Text_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AHUD_DrawText_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HUD_eventDrawText_Parms, Text), METADATA_PARAMS(Z_Construct_UFunction_AHUD_DrawText_Statics::NewProp_Text_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AHUD_DrawText_Statics::NewProp_Text_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHUD_DrawText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHUD_DrawText_Statics::NewProp_bScalePosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHUD_DrawText_Statics::NewProp_Scale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHUD_DrawText_Statics::NewProp_Font,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHUD_DrawText_Statics::NewProp_ScreenY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHUD_DrawText_Statics::NewProp_ScreenX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHUD_DrawText_Statics::NewProp_TextColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHUD_DrawText_Statics::NewProp_Text,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHUD_DrawText_Statics::Function_MetaDataParams[] = {
		{ "Category", "HUD" },
		{ "Comment", "/**\n\x09 * Draws a string on the HUD.\n\x09 * @param Text\x09\x09\x09\x09String to draw\n\x09 * @param TextColor\x09\x09\x09""Color to draw string\n\x09 * @param ScreenX\x09\x09\x09Screen-space X coordinate of upper left corner of the string.\n\x09 * @param ScreenY\x09\x09\x09Screen-space Y coordinate of upper left corner of the string.\n\x09 * @param Font\x09\x09\x09\x09""Font to draw text.  If NULL, default font is chosen.\n\x09 * @param Scale\x09\x09\x09\x09Scale multiplier to control size of the text.\n\x09 * @param bScalePosition\x09Whether the \"Scale\" parameter should also scale the position of this draw call.\n\x09 */" },
		{ "CPP_Default_bScalePosition", "false" },
		{ "CPP_Default_Font", "None" },
		{ "CPP_Default_Scale", "1.000000" },
		{ "ModuleRelativePath", "Classes/GameFramework/HUD.h" },
		{ "TextColor", "(R=0,G=0,B=0,A=1)" },
		{ "ToolTip", "Draws a string on the HUD.\n@param Text                          String to draw\n@param TextColor                     Color to draw string\n@param ScreenX                       Screen-space X coordinate of upper left corner of the string.\n@param ScreenY                       Screen-space Y coordinate of upper left corner of the string.\n@param Font                          Font to draw text.  If NULL, default font is chosen.\n@param Scale                         Scale multiplier to control size of the text.\n@param bScalePosition        Whether the \"Scale\" parameter should also scale the position of this draw call." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHUD_DrawText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHUD, nullptr, "DrawText", nullptr, nullptr, sizeof(HUD_eventDrawText_Parms), Z_Construct_UFunction_AHUD_DrawText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHUD_DrawText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHUD_DrawText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHUD_DrawText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHUD_DrawText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHUD_DrawText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHUD_DrawTexture_Statics
	{
		struct HUD_eventDrawTexture_Parms
		{
			UTexture* Texture;
			float ScreenX;
			float ScreenY;
			float ScreenW;
			float ScreenH;
			float TextureU;
			float TextureV;
			float TextureUWidth;
			float TextureVHeight;
			FLinearColor TintColor;
			TEnumAsByte<EBlendMode> BlendMode;
			float Scale;
			bool bScalePosition;
			float Rotation;
			FVector2D RotPivot;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RotPivot;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Rotation;
		static void NewProp_bScalePosition_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bScalePosition;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Scale;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_BlendMode;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TintColor;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TextureVHeight;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TextureUWidth;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TextureV;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TextureU;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ScreenH;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ScreenW;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ScreenY;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ScreenX;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Texture;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AHUD_DrawTexture_Statics::NewProp_RotPivot = { "RotPivot", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HUD_eventDrawTexture_Parms, RotPivot), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AHUD_DrawTexture_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HUD_eventDrawTexture_Parms, Rotation), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AHUD_DrawTexture_Statics::NewProp_bScalePosition_SetBit(void* Obj)
	{
		((HUD_eventDrawTexture_Parms*)Obj)->bScalePosition = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AHUD_DrawTexture_Statics::NewProp_bScalePosition = { "bScalePosition", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(HUD_eventDrawTexture_Parms), &Z_Construct_UFunction_AHUD_DrawTexture_Statics::NewProp_bScalePosition_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AHUD_DrawTexture_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HUD_eventDrawTexture_Parms, Scale), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AHUD_DrawTexture_Statics::NewProp_BlendMode = { "BlendMode", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HUD_eventDrawTexture_Parms, BlendMode), Z_Construct_UEnum_Engine_EBlendMode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AHUD_DrawTexture_Statics::NewProp_TintColor = { "TintColor", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HUD_eventDrawTexture_Parms, TintColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AHUD_DrawTexture_Statics::NewProp_TextureVHeight = { "TextureVHeight", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HUD_eventDrawTexture_Parms, TextureVHeight), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AHUD_DrawTexture_Statics::NewProp_TextureUWidth = { "TextureUWidth", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HUD_eventDrawTexture_Parms, TextureUWidth), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AHUD_DrawTexture_Statics::NewProp_TextureV = { "TextureV", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HUD_eventDrawTexture_Parms, TextureV), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AHUD_DrawTexture_Statics::NewProp_TextureU = { "TextureU", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HUD_eventDrawTexture_Parms, TextureU), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AHUD_DrawTexture_Statics::NewProp_ScreenH = { "ScreenH", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HUD_eventDrawTexture_Parms, ScreenH), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AHUD_DrawTexture_Statics::NewProp_ScreenW = { "ScreenW", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HUD_eventDrawTexture_Parms, ScreenW), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AHUD_DrawTexture_Statics::NewProp_ScreenY = { "ScreenY", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HUD_eventDrawTexture_Parms, ScreenY), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AHUD_DrawTexture_Statics::NewProp_ScreenX = { "ScreenX", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HUD_eventDrawTexture_Parms, ScreenX), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AHUD_DrawTexture_Statics::NewProp_Texture = { "Texture", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HUD_eventDrawTexture_Parms, Texture), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHUD_DrawTexture_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHUD_DrawTexture_Statics::NewProp_RotPivot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHUD_DrawTexture_Statics::NewProp_Rotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHUD_DrawTexture_Statics::NewProp_bScalePosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHUD_DrawTexture_Statics::NewProp_Scale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHUD_DrawTexture_Statics::NewProp_BlendMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHUD_DrawTexture_Statics::NewProp_TintColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHUD_DrawTexture_Statics::NewProp_TextureVHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHUD_DrawTexture_Statics::NewProp_TextureUWidth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHUD_DrawTexture_Statics::NewProp_TextureV,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHUD_DrawTexture_Statics::NewProp_TextureU,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHUD_DrawTexture_Statics::NewProp_ScreenH,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHUD_DrawTexture_Statics::NewProp_ScreenW,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHUD_DrawTexture_Statics::NewProp_ScreenY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHUD_DrawTexture_Statics::NewProp_ScreenX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHUD_DrawTexture_Statics::NewProp_Texture,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHUD_DrawTexture_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "9" },
		{ "Category", "HUD" },
		{ "Comment", "/**\n\x09 * Draws a textured quad on the HUD.\n\x09 * @param Texture\x09\x09\x09Texture to draw.\n\x09 * @param ScreenX\x09\x09\x09Screen-space X coordinate of upper left corner of the quad.\n\x09 * @param ScreenY\x09\x09\x09Screen-space Y coordinate of upper left corner of the quad.\n\x09 * @param ScreenW\x09\x09\x09Screen-space width of the quad (in pixels).\n\x09 * @param ScreenH\x09\x09\x09Screen-space height of the quad (in pixels).\n\x09 * @param TextureU\x09\x09\x09Texture-space U coordinate of upper left corner of the quad\n\x09 * @param TextureV\x09\x09\x09Texture-space V coordinate of upper left corner of the quad.\n\x09 * @param TextureUWidth\x09\x09Texture-space width of the quad (in normalized UV distance).\n\x09 * @param TextureVHeight\x09Texture-space height of the quad (in normalized UV distance).\n\x09 * @param TintColor\x09\x09\x09Vertex color for the quad.\n\x09 * @param BlendMode\x09\x09\x09""Controls how to blend this quad with the scene. Translucent by default.\n\x09 * @param Scale\x09\x09\x09\x09""Amount to scale the entire texture (horizontally and vertically)\n\x09 * @param bScalePosition\x09Whether the \"Scale\" parameter should also scale the position of this draw call.\n\x09 * @param Rotation\x09\x09\x09""Amount to rotate this quad\n\x09 * @param RotPivot\x09\x09\x09Location (as proportion of quad, 0-1) to rotate about\n\x09 */" },
		{ "CPP_Default_BlendMode", "BLEND_Translucent" },
		{ "CPP_Default_bScalePosition", "false" },
		{ "CPP_Default_Rotation", "0.000000" },
		{ "CPP_Default_RotPivot", "" },
		{ "CPP_Default_Scale", "1.000000" },
		{ "CPP_Default_TintColor", "(R=1.000000,G=1.000000,B=1.000000,A=1.000000)" },
		{ "ModuleRelativePath", "Classes/GameFramework/HUD.h" },
		{ "ToolTip", "Draws a textured quad on the HUD.\n@param Texture                       Texture to draw.\n@param ScreenX                       Screen-space X coordinate of upper left corner of the quad.\n@param ScreenY                       Screen-space Y coordinate of upper left corner of the quad.\n@param ScreenW                       Screen-space width of the quad (in pixels).\n@param ScreenH                       Screen-space height of the quad (in pixels).\n@param TextureU                      Texture-space U coordinate of upper left corner of the quad\n@param TextureV                      Texture-space V coordinate of upper left corner of the quad.\n@param TextureUWidth         Texture-space width of the quad (in normalized UV distance).\n@param TextureVHeight        Texture-space height of the quad (in normalized UV distance).\n@param TintColor                     Vertex color for the quad.\n@param BlendMode                     Controls how to blend this quad with the scene. Translucent by default.\n@param Scale                         Amount to scale the entire texture (horizontally and vertically)\n@param bScalePosition        Whether the \"Scale\" parameter should also scale the position of this draw call.\n@param Rotation                      Amount to rotate this quad\n@param RotPivot                      Location (as proportion of quad, 0-1) to rotate about" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHUD_DrawTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHUD, nullptr, "DrawTexture", nullptr, nullptr, sizeof(HUD_eventDrawTexture_Parms), Z_Construct_UFunction_AHUD_DrawTexture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHUD_DrawTexture_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHUD_DrawTexture_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHUD_DrawTexture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHUD_DrawTexture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHUD_DrawTexture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHUD_DrawTextureSimple_Statics
	{
		struct HUD_eventDrawTextureSimple_Parms
		{
			UTexture* Texture;
			float ScreenX;
			float ScreenY;
			float Scale;
			bool bScalePosition;
		};
		static void NewProp_bScalePosition_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bScalePosition;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Scale;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ScreenY;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ScreenX;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Texture;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AHUD_DrawTextureSimple_Statics::NewProp_bScalePosition_SetBit(void* Obj)
	{
		((HUD_eventDrawTextureSimple_Parms*)Obj)->bScalePosition = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AHUD_DrawTextureSimple_Statics::NewProp_bScalePosition = { "bScalePosition", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(HUD_eventDrawTextureSimple_Parms), &Z_Construct_UFunction_AHUD_DrawTextureSimple_Statics::NewProp_bScalePosition_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AHUD_DrawTextureSimple_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HUD_eventDrawTextureSimple_Parms, Scale), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AHUD_DrawTextureSimple_Statics::NewProp_ScreenY = { "ScreenY", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HUD_eventDrawTextureSimple_Parms, ScreenY), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AHUD_DrawTextureSimple_Statics::NewProp_ScreenX = { "ScreenX", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HUD_eventDrawTextureSimple_Parms, ScreenX), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AHUD_DrawTextureSimple_Statics::NewProp_Texture = { "Texture", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HUD_eventDrawTextureSimple_Parms, Texture), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHUD_DrawTextureSimple_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHUD_DrawTextureSimple_Statics::NewProp_bScalePosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHUD_DrawTextureSimple_Statics::NewProp_Scale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHUD_DrawTextureSimple_Statics::NewProp_ScreenY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHUD_DrawTextureSimple_Statics::NewProp_ScreenX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHUD_DrawTextureSimple_Statics::NewProp_Texture,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHUD_DrawTextureSimple_Statics::Function_MetaDataParams[] = {
		{ "Category", "HUD" },
		{ "Comment", "/**\n\x09 * Draws a textured quad on the HUD. Assumes 1:1 texel density.\n\x09 * @param Texture\x09\x09\x09Texture to draw.\n\x09 * @param ScreenX\x09\x09\x09Screen-space X coordinate of upper left corner of the quad.\n\x09 * @param ScreenY\x09\x09\x09Screen-space Y coordinate of upper left corner of the quad.\n\x09 * @param Scale\x09\x09\x09\x09Scale multiplier to control size of the text.\n\x09 * @param bScalePosition\x09Whether the \"Scale\" parameter should also scale the position of this draw call.\n\x09 */" },
		{ "CPP_Default_bScalePosition", "false" },
		{ "CPP_Default_Scale", "1.000000" },
		{ "ModuleRelativePath", "Classes/GameFramework/HUD.h" },
		{ "ToolTip", "Draws a textured quad on the HUD. Assumes 1:1 texel density.\n@param Texture                       Texture to draw.\n@param ScreenX                       Screen-space X coordinate of upper left corner of the quad.\n@param ScreenY                       Screen-space Y coordinate of upper left corner of the quad.\n@param Scale                         Scale multiplier to control size of the text.\n@param bScalePosition        Whether the \"Scale\" parameter should also scale the position of this draw call." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHUD_DrawTextureSimple_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHUD, nullptr, "DrawTextureSimple", nullptr, nullptr, sizeof(HUD_eventDrawTextureSimple_Parms), Z_Construct_UFunction_AHUD_DrawTextureSimple_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHUD_DrawTextureSimple_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHUD_DrawTextureSimple_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHUD_DrawTextureSimple_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHUD_DrawTextureSimple()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHUD_DrawTextureSimple_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHUD_GetActorsInSelectionRectangle_Statics
	{
		struct HUD_eventGetActorsInSelectionRectangle_Parms
		{
			TSubclassOf<AActor>  ClassFilter;
			FVector2D FirstPoint;
			FVector2D SecondPoint;
			TArray<AActor*> OutActors;
			bool bIncludeNonCollidingComponents;
			bool bActorMustBeFullyEnclosed;
		};
		static void NewProp_bActorMustBeFullyEnclosed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bActorMustBeFullyEnclosed;
		static void NewProp_bIncludeNonCollidingComponents_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIncludeNonCollidingComponents;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutActors;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OutActors_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SecondPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SecondPoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FirstPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FirstPoint;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ClassFilter;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AHUD_GetActorsInSelectionRectangle_Statics::NewProp_bActorMustBeFullyEnclosed_SetBit(void* Obj)
	{
		((HUD_eventGetActorsInSelectionRectangle_Parms*)Obj)->bActorMustBeFullyEnclosed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AHUD_GetActorsInSelectionRectangle_Statics::NewProp_bActorMustBeFullyEnclosed = { "bActorMustBeFullyEnclosed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(HUD_eventGetActorsInSelectionRectangle_Parms), &Z_Construct_UFunction_AHUD_GetActorsInSelectionRectangle_Statics::NewProp_bActorMustBeFullyEnclosed_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AHUD_GetActorsInSelectionRectangle_Statics::NewProp_bIncludeNonCollidingComponents_SetBit(void* Obj)
	{
		((HUD_eventGetActorsInSelectionRectangle_Parms*)Obj)->bIncludeNonCollidingComponents = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AHUD_GetActorsInSelectionRectangle_Statics::NewProp_bIncludeNonCollidingComponents = { "bIncludeNonCollidingComponents", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(HUD_eventGetActorsInSelectionRectangle_Parms), &Z_Construct_UFunction_AHUD_GetActorsInSelectionRectangle_Statics::NewProp_bIncludeNonCollidingComponents_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AHUD_GetActorsInSelectionRectangle_Statics::NewProp_OutActors = { "OutActors", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HUD_eventGetActorsInSelectionRectangle_Parms, OutActors), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AHUD_GetActorsInSelectionRectangle_Statics::NewProp_OutActors_Inner = { "OutActors", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHUD_GetActorsInSelectionRectangle_Statics::NewProp_SecondPoint_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AHUD_GetActorsInSelectionRectangle_Statics::NewProp_SecondPoint = { "SecondPoint", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HUD_eventGetActorsInSelectionRectangle_Parms, SecondPoint), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UFunction_AHUD_GetActorsInSelectionRectangle_Statics::NewProp_SecondPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AHUD_GetActorsInSelectionRectangle_Statics::NewProp_SecondPoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHUD_GetActorsInSelectionRectangle_Statics::NewProp_FirstPoint_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AHUD_GetActorsInSelectionRectangle_Statics::NewProp_FirstPoint = { "FirstPoint", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HUD_eventGetActorsInSelectionRectangle_Parms, FirstPoint), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UFunction_AHUD_GetActorsInSelectionRectangle_Statics::NewProp_FirstPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AHUD_GetActorsInSelectionRectangle_Statics::NewProp_FirstPoint_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AHUD_GetActorsInSelectionRectangle_Statics::NewProp_ClassFilter = { "ClassFilter", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HUD_eventGetActorsInSelectionRectangle_Parms, ClassFilter), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHUD_GetActorsInSelectionRectangle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHUD_GetActorsInSelectionRectangle_Statics::NewProp_bActorMustBeFullyEnclosed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHUD_GetActorsInSelectionRectangle_Statics::NewProp_bIncludeNonCollidingComponents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHUD_GetActorsInSelectionRectangle_Statics::NewProp_OutActors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHUD_GetActorsInSelectionRectangle_Statics::NewProp_OutActors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHUD_GetActorsInSelectionRectangle_Statics::NewProp_SecondPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHUD_GetActorsInSelectionRectangle_Statics::NewProp_FirstPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHUD_GetActorsInSelectionRectangle_Statics::NewProp_ClassFilter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHUD_GetActorsInSelectionRectangle_Statics::Function_MetaDataParams[] = {
		{ "Category", "HUD" },
		{ "Comment", "/**\n\x09 * Returns the array of actors inside a selection rectangle, with a class filter.\n\x09 *\n\x09 * Sample usage:\n\x09 *\n\x09 *       TArray<AStaticMeshActor*> ActorsInSelectionRect;\n\x09 * \x09\x09""Canvas->GetActorsInSelectionRectangle<AStaticMeshActor>(FirstPoint,SecondPoint,ActorsInSelectionRect);\n\x09 *\n\x09 *\n\x09 * @param FirstPoint\x09\x09\x09\x09\x09The first point, or anchor of the marquee box. Where the dragging of the marquee started in screen space.\n\x09 * @param SecondPoint\x09\x09\x09\x09\x09The second point, where the mouse cursor currently is / the other point of the box selection, in screen space.\n\x09 * @return OutActors\x09\x09\x09\x09\x09The actors that are within the selection box according to selection rule\n\x09 * @param bIncludeNonCollidingComponents \x09Whether to include even non-colliding components of the actor when determining its bounds\n\x09 * @param bActorMustBeFullyEnclosed  \x09The Selection rule: whether the selection box can partially intersect Actor, or must fully enclose the Actor.\n\x09 *\n\x09 */" },
		{ "CPP_Default_bActorMustBeFullyEnclosed", "false" },
		{ "CPP_Default_bIncludeNonCollidingComponents", "true" },
		{ "ModuleRelativePath", "Classes/GameFramework/HUD.h" },
		{ "ToolTip", "Returns the array of actors inside a selection rectangle, with a class filter.\n\nSample usage:\n\n      TArray<AStaticMeshActor*> ActorsInSelectionRect;\n             Canvas->GetActorsInSelectionRectangle<AStaticMeshActor>(FirstPoint,SecondPoint,ActorsInSelectionRect);\n\n\n@param FirstPoint                                    The first point, or anchor of the marquee box. Where the dragging of the marquee started in screen space.\n@param SecondPoint                                   The second point, where the mouse cursor currently is / the other point of the box selection, in screen space.\n@return OutActors                                    The actors that are within the selection box according to selection rule\n@param bIncludeNonCollidingComponents        Whether to include even non-colliding components of the actor when determining its bounds\n@param bActorMustBeFullyEnclosed     The Selection rule: whether the selection box can partially intersect Actor, or must fully enclose the Actor." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHUD_GetActorsInSelectionRectangle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHUD, nullptr, "GetActorsInSelectionRectangle", nullptr, nullptr, sizeof(HUD_eventGetActorsInSelectionRectangle_Parms), Z_Construct_UFunction_AHUD_GetActorsInSelectionRectangle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHUD_GetActorsInSelectionRectangle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHUD_GetActorsInSelectionRectangle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHUD_GetActorsInSelectionRectangle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHUD_GetActorsInSelectionRectangle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHUD_GetActorsInSelectionRectangle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHUD_GetOwningPawn_Statics
	{
		struct HUD_eventGetOwningPawn_Parms
		{
			APawn* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AHUD_GetOwningPawn_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HUD_eventGetOwningPawn_Parms, ReturnValue), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHUD_GetOwningPawn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHUD_GetOwningPawn_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHUD_GetOwningPawn_Statics::Function_MetaDataParams[] = {
		{ "Category", "HUD" },
		{ "Comment", "/** Returns the Pawn for this HUD's player.\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/HUD.h" },
		{ "ToolTip", "Returns the Pawn for this HUD's player." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHUD_GetOwningPawn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHUD, nullptr, "GetOwningPawn", nullptr, nullptr, sizeof(HUD_eventGetOwningPawn_Parms), Z_Construct_UFunction_AHUD_GetOwningPawn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHUD_GetOwningPawn_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHUD_GetOwningPawn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHUD_GetOwningPawn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHUD_GetOwningPawn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHUD_GetOwningPawn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHUD_GetOwningPlayerController_Statics
	{
		struct HUD_eventGetOwningPlayerController_Parms
		{
			APlayerController* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AHUD_GetOwningPlayerController_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HUD_eventGetOwningPlayerController_Parms, ReturnValue), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHUD_GetOwningPlayerController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHUD_GetOwningPlayerController_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHUD_GetOwningPlayerController_Statics::Function_MetaDataParams[] = {
		{ "Category", "HUD" },
		{ "Comment", "/** Returns the PlayerController for this HUD's player.\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/HUD.h" },
		{ "ToolTip", "Returns the PlayerController for this HUD's player." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHUD_GetOwningPlayerController_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHUD, nullptr, "GetOwningPlayerController", nullptr, nullptr, sizeof(HUD_eventGetOwningPlayerController_Parms), Z_Construct_UFunction_AHUD_GetOwningPlayerController_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHUD_GetOwningPlayerController_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHUD_GetOwningPlayerController_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHUD_GetOwningPlayerController_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHUD_GetOwningPlayerController()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHUD_GetOwningPlayerController_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHUD_GetTextSize_Statics
	{
		struct HUD_eventGetTextSize_Parms
		{
			FString Text;
			float OutWidth;
			float OutHeight;
			UFont* Font;
			float Scale;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Scale;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Font;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OutHeight;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OutWidth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Text;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AHUD_GetTextSize_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HUD_eventGetTextSize_Parms, Scale), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AHUD_GetTextSize_Statics::NewProp_Font = { "Font", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HUD_eventGetTextSize_Parms, Font), Z_Construct_UClass_UFont_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AHUD_GetTextSize_Statics::NewProp_OutHeight = { "OutHeight", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HUD_eventGetTextSize_Parms, OutHeight), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AHUD_GetTextSize_Statics::NewProp_OutWidth = { "OutWidth", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HUD_eventGetTextSize_Parms, OutWidth), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHUD_GetTextSize_Statics::NewProp_Text_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AHUD_GetTextSize_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HUD_eventGetTextSize_Parms, Text), METADATA_PARAMS(Z_Construct_UFunction_AHUD_GetTextSize_Statics::NewProp_Text_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AHUD_GetTextSize_Statics::NewProp_Text_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHUD_GetTextSize_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHUD_GetTextSize_Statics::NewProp_Scale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHUD_GetTextSize_Statics::NewProp_Font,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHUD_GetTextSize_Statics::NewProp_OutHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHUD_GetTextSize_Statics::NewProp_OutWidth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHUD_GetTextSize_Statics::NewProp_Text,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHUD_GetTextSize_Statics::Function_MetaDataParams[] = {
		{ "Category", "HUD" },
		{ "Comment", "/**\n\x09 * Returns the width and height of a string.\n\x09 * @param Text\x09\x09\x09\x09String to draw\n\x09 * @param OutWidth\x09\x09\x09Returns the width in pixels of the string.\n\x09 * @param OutHeight\x09\x09\x09Returns the height in pixels of the string.\n\x09 * @param Font\x09\x09\x09\x09""Font to draw text.  If NULL, default font is chosen.\n\x09 * @param Scale\x09\x09\x09\x09Scale multiplier to control size of the text.\n\x09 */" },
		{ "CPP_Default_Font", "None" },
		{ "CPP_Default_Scale", "1.000000" },
		{ "ModuleRelativePath", "Classes/GameFramework/HUD.h" },
		{ "ToolTip", "Returns the width and height of a string.\n@param Text                          String to draw\n@param OutWidth                      Returns the width in pixels of the string.\n@param OutHeight                     Returns the height in pixels of the string.\n@param Font                          Font to draw text.  If NULL, default font is chosen.\n@param Scale                         Scale multiplier to control size of the text." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHUD_GetTextSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHUD, nullptr, "GetTextSize", nullptr, nullptr, sizeof(HUD_eventGetTextSize_Parms), Z_Construct_UFunction_AHUD_GetTextSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHUD_GetTextSize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHUD_GetTextSize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHUD_GetTextSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHUD_GetTextSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHUD_GetTextSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHUD_NextDebugTarget_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHUD_NextDebugTarget_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Cycle to next target in our considered targets list for 'showdebug' */" },
		{ "ModuleRelativePath", "Classes/GameFramework/HUD.h" },
		{ "ToolTip", "Cycle to next target in our considered targets list for 'showdebug'" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHUD_NextDebugTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHUD, nullptr, "NextDebugTarget", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020600, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHUD_NextDebugTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHUD_NextDebugTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHUD_NextDebugTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHUD_NextDebugTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHUD_PreviousDebugTarget_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHUD_PreviousDebugTarget_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Cycle to previous target in our considered targets list for 'showdebug' */" },
		{ "ModuleRelativePath", "Classes/GameFramework/HUD.h" },
		{ "ToolTip", "Cycle to previous target in our considered targets list for 'showdebug'" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHUD_PreviousDebugTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHUD, nullptr, "PreviousDebugTarget", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020600, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHUD_PreviousDebugTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHUD_PreviousDebugTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHUD_PreviousDebugTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHUD_PreviousDebugTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHUD_Project_Statics
	{
		struct HUD_eventProject_Parms
		{
			FVector Location;
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AHUD_Project_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HUD_eventProject_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AHUD_Project_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HUD_eventProject_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHUD_Project_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHUD_Project_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHUD_Project_Statics::NewProp_Location,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHUD_Project_Statics::Function_MetaDataParams[] = {
		{ "Category", "HUD" },
		{ "Comment", "/** Transforms a 3D world-space vector into 2D screen coordinates */" },
		{ "ModuleRelativePath", "Classes/GameFramework/HUD.h" },
		{ "ToolTip", "Transforms a 3D world-space vector into 2D screen coordinates" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHUD_Project_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHUD, nullptr, "Project", nullptr, nullptr, sizeof(HUD_eventProject_Parms), Z_Construct_UFunction_AHUD_Project_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHUD_Project_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHUD_Project_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHUD_Project_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHUD_Project()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHUD_Project_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHUD_ReceiveDrawHUD_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SizeY;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SizeX;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AHUD_ReceiveDrawHUD_Statics::NewProp_SizeY = { "SizeY", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HUD_eventReceiveDrawHUD_Parms, SizeY), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AHUD_ReceiveDrawHUD_Statics::NewProp_SizeX = { "SizeX", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HUD_eventReceiveDrawHUD_Parms, SizeX), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHUD_ReceiveDrawHUD_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHUD_ReceiveDrawHUD_Statics::NewProp_SizeY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHUD_ReceiveDrawHUD_Statics::NewProp_SizeX,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHUD_ReceiveDrawHUD_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** \n\x09 *\x09Hook to allow blueprints to do custom HUD drawing. @see bSuppressNativeHUD to control HUD drawing in base class. \n\x09 *\x09Note:  the canvas resource used for drawing is only valid during this event, it will not be valid if drawing functions are called later (e.g. after a Delay node).\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/HUD.h" },
		{ "ToolTip", "Hook to allow blueprints to do custom HUD drawing. @see bSuppressNativeHUD to control HUD drawing in base class.\nNote:  the canvas resource used for drawing is only valid during this event, it will not be valid if drawing functions are called later (e.g. after a Delay node)." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHUD_ReceiveDrawHUD_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHUD, nullptr, "ReceiveDrawHUD", nullptr, nullptr, sizeof(HUD_eventReceiveDrawHUD_Parms), Z_Construct_UFunction_AHUD_ReceiveDrawHUD_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHUD_ReceiveDrawHUD_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHUD_ReceiveDrawHUD_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHUD_ReceiveDrawHUD_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHUD_ReceiveDrawHUD()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHUD_ReceiveDrawHUD_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHUD_ReceiveHitBoxBeginCursorOver_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoxName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_BoxName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHUD_ReceiveHitBoxBeginCursorOver_Statics::NewProp_BoxName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AHUD_ReceiveHitBoxBeginCursorOver_Statics::NewProp_BoxName = { "BoxName", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HUD_eventReceiveHitBoxBeginCursorOver_Parms, BoxName), METADATA_PARAMS(Z_Construct_UFunction_AHUD_ReceiveHitBoxBeginCursorOver_Statics::NewProp_BoxName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AHUD_ReceiveHitBoxBeginCursorOver_Statics::NewProp_BoxName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHUD_ReceiveHitBoxBeginCursorOver_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHUD_ReceiveHitBoxBeginCursorOver_Statics::NewProp_BoxName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHUD_ReceiveHitBoxBeginCursorOver_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Called when a hit box is moused over. */" },
		{ "DisplayName", "HitBoxBeginCursorOver" },
		{ "ModuleRelativePath", "Classes/GameFramework/HUD.h" },
		{ "ToolTip", "Called when a hit box is moused over." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHUD_ReceiveHitBoxBeginCursorOver_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHUD, nullptr, "ReceiveHitBoxBeginCursorOver", nullptr, nullptr, sizeof(HUD_eventReceiveHitBoxBeginCursorOver_Parms), Z_Construct_UFunction_AHUD_ReceiveHitBoxBeginCursorOver_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHUD_ReceiveHitBoxBeginCursorOver_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHUD_ReceiveHitBoxBeginCursorOver_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHUD_ReceiveHitBoxBeginCursorOver_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHUD_ReceiveHitBoxBeginCursorOver()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHUD_ReceiveHitBoxBeginCursorOver_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHUD_ReceiveHitBoxClick_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoxName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_BoxName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHUD_ReceiveHitBoxClick_Statics::NewProp_BoxName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AHUD_ReceiveHitBoxClick_Statics::NewProp_BoxName = { "BoxName", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HUD_eventReceiveHitBoxClick_Parms, BoxName), METADATA_PARAMS(Z_Construct_UFunction_AHUD_ReceiveHitBoxClick_Statics::NewProp_BoxName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AHUD_ReceiveHitBoxClick_Statics::NewProp_BoxName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHUD_ReceiveHitBoxClick_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHUD_ReceiveHitBoxClick_Statics::NewProp_BoxName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHUD_ReceiveHitBoxClick_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Called when a hit box is clicked on. Provides the name associated with that box. */" },
		{ "DisplayName", "HitBoxClicked" },
		{ "ModuleRelativePath", "Classes/GameFramework/HUD.h" },
		{ "ToolTip", "Called when a hit box is clicked on. Provides the name associated with that box." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHUD_ReceiveHitBoxClick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHUD, nullptr, "ReceiveHitBoxClick", nullptr, nullptr, sizeof(HUD_eventReceiveHitBoxClick_Parms), Z_Construct_UFunction_AHUD_ReceiveHitBoxClick_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHUD_ReceiveHitBoxClick_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHUD_ReceiveHitBoxClick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHUD_ReceiveHitBoxClick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHUD_ReceiveHitBoxClick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHUD_ReceiveHitBoxClick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHUD_ReceiveHitBoxEndCursorOver_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoxName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_BoxName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHUD_ReceiveHitBoxEndCursorOver_Statics::NewProp_BoxName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AHUD_ReceiveHitBoxEndCursorOver_Statics::NewProp_BoxName = { "BoxName", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HUD_eventReceiveHitBoxEndCursorOver_Parms, BoxName), METADATA_PARAMS(Z_Construct_UFunction_AHUD_ReceiveHitBoxEndCursorOver_Statics::NewProp_BoxName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AHUD_ReceiveHitBoxEndCursorOver_Statics::NewProp_BoxName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHUD_ReceiveHitBoxEndCursorOver_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHUD_ReceiveHitBoxEndCursorOver_Statics::NewProp_BoxName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHUD_ReceiveHitBoxEndCursorOver_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Called when a hit box no longer has the mouse over it. */" },
		{ "DisplayName", "HitBoxEndCursorOver" },
		{ "ModuleRelativePath", "Classes/GameFramework/HUD.h" },
		{ "ToolTip", "Called when a hit box no longer has the mouse over it." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHUD_ReceiveHitBoxEndCursorOver_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHUD, nullptr, "ReceiveHitBoxEndCursorOver", nullptr, nullptr, sizeof(HUD_eventReceiveHitBoxEndCursorOver_Parms), Z_Construct_UFunction_AHUD_ReceiveHitBoxEndCursorOver_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHUD_ReceiveHitBoxEndCursorOver_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHUD_ReceiveHitBoxEndCursorOver_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHUD_ReceiveHitBoxEndCursorOver_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHUD_ReceiveHitBoxEndCursorOver()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHUD_ReceiveHitBoxEndCursorOver_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHUD_ReceiveHitBoxRelease_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoxName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_BoxName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHUD_ReceiveHitBoxRelease_Statics::NewProp_BoxName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AHUD_ReceiveHitBoxRelease_Statics::NewProp_BoxName = { "BoxName", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HUD_eventReceiveHitBoxRelease_Parms, BoxName), METADATA_PARAMS(Z_Construct_UFunction_AHUD_ReceiveHitBoxRelease_Statics::NewProp_BoxName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AHUD_ReceiveHitBoxRelease_Statics::NewProp_BoxName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHUD_ReceiveHitBoxRelease_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHUD_ReceiveHitBoxRelease_Statics::NewProp_BoxName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHUD_ReceiveHitBoxRelease_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Called when a hit box is unclicked. Provides the name associated with that box. */" },
		{ "DisplayName", "HitBoxReleased" },
		{ "ModuleRelativePath", "Classes/GameFramework/HUD.h" },
		{ "ToolTip", "Called when a hit box is unclicked. Provides the name associated with that box." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHUD_ReceiveHitBoxRelease_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHUD, nullptr, "ReceiveHitBoxRelease", nullptr, nullptr, sizeof(HUD_eventReceiveHitBoxRelease_Parms), Z_Construct_UFunction_AHUD_ReceiveHitBoxRelease_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHUD_ReceiveHitBoxRelease_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHUD_ReceiveHitBoxRelease_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHUD_ReceiveHitBoxRelease_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHUD_ReceiveHitBoxRelease()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHUD_ReceiveHitBoxRelease_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHUD_RemoveAllDebugStrings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHUD_RemoveAllDebugStrings_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Remove all debug strings added via AddDebugText\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/HUD.h" },
		{ "ToolTip", "Remove all debug strings added via AddDebugText" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHUD_RemoveAllDebugStrings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHUD, nullptr, "RemoveAllDebugStrings", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHUD_RemoveAllDebugStrings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHUD_RemoveAllDebugStrings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHUD_RemoveAllDebugStrings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHUD_RemoveAllDebugStrings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHUD_RemoveDebugText_Statics
	{
		static void NewProp_bLeaveDurationText_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLeaveDurationText;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SrcActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AHUD_RemoveDebugText_Statics::NewProp_bLeaveDurationText_SetBit(void* Obj)
	{
		((HUD_eventRemoveDebugText_Parms*)Obj)->bLeaveDurationText = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AHUD_RemoveDebugText_Statics::NewProp_bLeaveDurationText = { "bLeaveDurationText", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(HUD_eventRemoveDebugText_Parms), &Z_Construct_UFunction_AHUD_RemoveDebugText_Statics::NewProp_bLeaveDurationText_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AHUD_RemoveDebugText_Statics::NewProp_SrcActor = { "SrcActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HUD_eventRemoveDebugText_Parms, SrcActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHUD_RemoveDebugText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHUD_RemoveDebugText_Statics::NewProp_bLeaveDurationText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHUD_RemoveDebugText_Statics::NewProp_SrcActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHUD_RemoveDebugText_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Remove debug strings for the given actor\n\x09 *\n\x09 * @param\x09SrcActor\x09\x09\x09""Actor whose string you wish to remove\n\x09 * @param\x09""bLeaveDurationText\x09when true text that has a finite duration will be removed, otherwise all will be removed for given actor\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/HUD.h" },
		{ "ToolTip", "Remove debug strings for the given actor\n\n@param       SrcActor                        Actor whose string you wish to remove\n@param       bLeaveDurationText      when true text that has a finite duration will be removed, otherwise all will be removed for given actor" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHUD_RemoveDebugText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHUD, nullptr, "RemoveDebugText", nullptr, nullptr, sizeof(HUD_eventRemoveDebugText_Parms), Z_Construct_UFunction_AHUD_RemoveDebugText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHUD_RemoveDebugText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHUD_RemoveDebugText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHUD_RemoveDebugText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHUD_RemoveDebugText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHUD_RemoveDebugText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHUD_ShowDebug_Statics
	{
		struct HUD_eventShowDebug_Parms
		{
			FName DebugType;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_DebugType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AHUD_ShowDebug_Statics::NewProp_DebugType = { "DebugType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HUD_eventShowDebug_Parms, DebugType), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHUD_ShowDebug_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHUD_ShowDebug_Statics::NewProp_DebugType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHUD_ShowDebug_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Toggles displaying properties of player's current ViewTarget\n\x09 * DebugType input values supported by base engine include \"AI\", \"physics\", \"net\", \"camera\", and \"collision\"\n\x09 */" },
		{ "CPP_Default_DebugType", "None" },
		{ "ModuleRelativePath", "Classes/GameFramework/HUD.h" },
		{ "ToolTip", "Toggles displaying properties of player's current ViewTarget\nDebugType input values supported by base engine include \"AI\", \"physics\", \"net\", \"camera\", and \"collision\"" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHUD_ShowDebug_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHUD, nullptr, "ShowDebug", nullptr, nullptr, sizeof(HUD_eventShowDebug_Parms), Z_Construct_UFunction_AHUD_ShowDebug_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHUD_ShowDebug_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020600, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHUD_ShowDebug_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHUD_ShowDebug_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHUD_ShowDebug()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHUD_ShowDebug_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHUD_ShowDebugForReticleTargetToggle_Statics
	{
		struct HUD_eventShowDebugForReticleTargetToggle_Parms
		{
			TSubclassOf<AActor>  DesiredClass;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_DesiredClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AHUD_ShowDebugForReticleTargetToggle_Statics::NewProp_DesiredClass = { "DesiredClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HUD_eventShowDebugForReticleTargetToggle_Parms, DesiredClass), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHUD_ShowDebugForReticleTargetToggle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHUD_ShowDebugForReticleTargetToggle_Statics::NewProp_DesiredClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHUD_ShowDebugForReticleTargetToggle_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Toggles 'ShowDebug' from showing debug info between reticle target actor (of subclass <DesiredClass>) and camera view target */" },
		{ "ModuleRelativePath", "Classes/GameFramework/HUD.h" },
		{ "ToolTip", "Toggles 'ShowDebug' from showing debug info between reticle target actor (of subclass <DesiredClass>) and camera view target" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHUD_ShowDebugForReticleTargetToggle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHUD, nullptr, "ShowDebugForReticleTargetToggle", nullptr, nullptr, sizeof(HUD_eventShowDebugForReticleTargetToggle_Parms), Z_Construct_UFunction_AHUD_ShowDebugForReticleTargetToggle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHUD_ShowDebugForReticleTargetToggle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHUD_ShowDebugForReticleTargetToggle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHUD_ShowDebugForReticleTargetToggle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHUD_ShowDebugForReticleTargetToggle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHUD_ShowDebugForReticleTargetToggle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHUD_ShowDebugToggleSubCategory_Statics
	{
		struct HUD_eventShowDebugToggleSubCategory_Parms
		{
			FName Category;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Category;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AHUD_ShowDebugToggleSubCategory_Statics::NewProp_Category = { "Category", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HUD_eventShowDebugToggleSubCategory_Parms, Category), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHUD_ShowDebugToggleSubCategory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHUD_ShowDebugToggleSubCategory_Statics::NewProp_Category,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHUD_ShowDebugToggleSubCategory_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Toggles sub categories of show debug to customize display\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/HUD.h" },
		{ "ToolTip", "Toggles sub categories of show debug to customize display" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHUD_ShowDebugToggleSubCategory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHUD, nullptr, "ShowDebugToggleSubCategory", nullptr, nullptr, sizeof(HUD_eventShowDebugToggleSubCategory_Parms), Z_Construct_UFunction_AHUD_ShowDebugToggleSubCategory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHUD_ShowDebugToggleSubCategory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHUD_ShowDebugToggleSubCategory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHUD_ShowDebugToggleSubCategory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHUD_ShowDebugToggleSubCategory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHUD_ShowDebugToggleSubCategory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHUD_ShowHUD_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHUD_ShowHUD_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** hides or shows HUD */" },
		{ "ModuleRelativePath", "Classes/GameFramework/HUD.h" },
		{ "ToolTip", "hides or shows HUD" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHUD_ShowHUD_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHUD, nullptr, "ShowHUD", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020600, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHUD_ShowHUD_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHUD_ShowHUD_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHUD_ShowHUD()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHUD_ShowHUD_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AHUD_NoRegister()
	{
		return AHUD::StaticClass();
	}
	struct Z_Construct_UClass_AHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShowDebugTargetActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ShowDebugTargetActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShowDebugTargetDesiredClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ShowDebugTargetDesiredClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DebugTextList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DebugTextList;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DebugTextList_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DebugCanvas_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DebugCanvas;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Canvas_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Canvas;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ToggledDebugCategories_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ToggledDebugCategories;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ToggledDebugCategories_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DebugDisplay_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DebugDisplay;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_DebugDisplay_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PostRenderedActors_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PostRenderedActors;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PostRenderedActors_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableDebugTextShadow_MetaData[];
#endif
		static void NewProp_bEnableDebugTextShadow_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableDebugTextShadow;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShowOverlays_MetaData[];
#endif
		static void NewProp_bShowOverlays_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowOverlays;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShowHitBoxDebugInfo_MetaData[];
#endif
		static void NewProp_bShowHitBoxDebugInfo_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowHitBoxDebugInfo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentTargetIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CurrentTargetIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShowDebugInfo_MetaData[];
#endif
		static void NewProp_bShowDebugInfo_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowDebugInfo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShowHUD_MetaData[];
#endif
		static void NewProp_bShowHUD_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowHUD;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLostFocusPaused_MetaData[];
#endif
		static void NewProp_bLostFocusPaused_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLostFocusPaused;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerOwner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerOwner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AHUD_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AHUD_AddDebugText, "AddDebugText" }, // 3850846096
		{ &Z_Construct_UFunction_AHUD_AddHitBox, "AddHitBox" }, // 1322738800
		{ &Z_Construct_UFunction_AHUD_Deproject, "Deproject" }, // 2251531402
		{ &Z_Construct_UFunction_AHUD_DrawLine, "DrawLine" }, // 2624817201
		{ &Z_Construct_UFunction_AHUD_DrawMaterial, "DrawMaterial" }, // 2360492057
		{ &Z_Construct_UFunction_AHUD_DrawMaterialSimple, "DrawMaterialSimple" }, // 2092500908
		{ &Z_Construct_UFunction_AHUD_DrawMaterialTriangle, "DrawMaterialTriangle" }, // 3128122228
		{ &Z_Construct_UFunction_AHUD_DrawRect, "DrawRect" }, // 3010760376
		{ &Z_Construct_UFunction_AHUD_DrawText, "DrawText" }, // 2758178041
		{ &Z_Construct_UFunction_AHUD_DrawTexture, "DrawTexture" }, // 3944477462
		{ &Z_Construct_UFunction_AHUD_DrawTextureSimple, "DrawTextureSimple" }, // 3807971346
		{ &Z_Construct_UFunction_AHUD_GetActorsInSelectionRectangle, "GetActorsInSelectionRectangle" }, // 2159257025
		{ &Z_Construct_UFunction_AHUD_GetOwningPawn, "GetOwningPawn" }, // 3237412580
		{ &Z_Construct_UFunction_AHUD_GetOwningPlayerController, "GetOwningPlayerController" }, // 1970770169
		{ &Z_Construct_UFunction_AHUD_GetTextSize, "GetTextSize" }, // 393794672
		{ &Z_Construct_UFunction_AHUD_NextDebugTarget, "NextDebugTarget" }, // 3585456975
		{ &Z_Construct_UFunction_AHUD_PreviousDebugTarget, "PreviousDebugTarget" }, // 3443135087
		{ &Z_Construct_UFunction_AHUD_Project, "Project" }, // 1023491654
		{ &Z_Construct_UFunction_AHUD_ReceiveDrawHUD, "ReceiveDrawHUD" }, // 734232612
		{ &Z_Construct_UFunction_AHUD_ReceiveHitBoxBeginCursorOver, "ReceiveHitBoxBeginCursorOver" }, // 165391964
		{ &Z_Construct_UFunction_AHUD_ReceiveHitBoxClick, "ReceiveHitBoxClick" }, // 3206089452
		{ &Z_Construct_UFunction_AHUD_ReceiveHitBoxEndCursorOver, "ReceiveHitBoxEndCursorOver" }, // 3111271074
		{ &Z_Construct_UFunction_AHUD_ReceiveHitBoxRelease, "ReceiveHitBoxRelease" }, // 1509319947
		{ &Z_Construct_UFunction_AHUD_RemoveAllDebugStrings, "RemoveAllDebugStrings" }, // 2934784897
		{ &Z_Construct_UFunction_AHUD_RemoveDebugText, "RemoveDebugText" }, // 598983840
		{ &Z_Construct_UFunction_AHUD_ShowDebug, "ShowDebug" }, // 3091879414
		{ &Z_Construct_UFunction_AHUD_ShowDebugForReticleTargetToggle, "ShowDebugForReticleTargetToggle" }, // 1553038757
		{ &Z_Construct_UFunction_AHUD_ShowDebugToggleSubCategory, "ShowDebugToggleSubCategory" }, // 445460245
		{ &Z_Construct_UFunction_AHUD_ShowHUD, "ShowHUD" }, // 1739454418
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHUD_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** \n * Base class of the heads-up display. This has a canvas and a debug canvas on which primitives can be drawn.\n * It also contains a list of simple hit boxes that can be used for simple item click detection.\n * A method of rendering debug text is also included.\n * Provides some simple methods for rendering text, textures, rectangles and materials which can also be accessed from blueprints.\n * @see UCanvas\n * @see FHUDHitBox\n * @see FDebugTextInfo\n */" },
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "GameFramework/HUD.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/GameFramework/HUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
		{ "ToolTip", "Base class of the heads-up display. This has a canvas and a debug canvas on which primitives can be drawn.\nIt also contains a list of simple hit boxes that can be used for simple item click detection.\nA method of rendering debug text is also included.\nProvides some simple methods for rendering text, textures, rectangles and materials which can also be accessed from blueprints.\n@see UCanvas\n@see FHUDHitBox\n@see FDebugTextInfo" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHUD_Statics::NewProp_ShowDebugTargetActor_MetaData[] = {
		{ "Comment", "/** Show Debug Actor used if 'bShowDebugForReticleTarget' is true, only updated if trace from reticle hit a new Actor of class 'ShowDebugTargetDesiredClass'*/" },
		{ "ModuleRelativePath", "Classes/GameFramework/HUD.h" },
		{ "ToolTip", "Show Debug Actor used if 'bShowDebugForReticleTarget' is true, only updated if trace from reticle hit a new Actor of class 'ShowDebugTargetDesiredClass'" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHUD_Statics::NewProp_ShowDebugTargetActor = { "ShowDebugTargetActor", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHUD, ShowDebugTargetActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHUD_Statics::NewProp_ShowDebugTargetActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHUD_Statics::NewProp_ShowDebugTargetActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHUD_Statics::NewProp_ShowDebugTargetDesiredClass_MetaData[] = {
		{ "Comment", "/** Class filter for selecting 'ShowDebugTargetActor' when 'bShowDebugForReticleTarget' is true. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/HUD.h" },
		{ "ToolTip", "Class filter for selecting 'ShowDebugTargetActor' when 'bShowDebugForReticleTarget' is true." },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AHUD_Statics::NewProp_ShowDebugTargetDesiredClass = { "ShowDebugTargetDesiredClass", nullptr, (EPropertyFlags)0x0024080000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHUD, ShowDebugTargetDesiredClass), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AHUD_Statics::NewProp_ShowDebugTargetDesiredClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHUD_Statics::NewProp_ShowDebugTargetDesiredClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHUD_Statics::NewProp_DebugTextList_MetaData[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/HUD.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AHUD_Statics::NewProp_DebugTextList = { "DebugTextList", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHUD, DebugTextList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AHUD_Statics::NewProp_DebugTextList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHUD_Statics::NewProp_DebugTextList_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AHUD_Statics::NewProp_DebugTextList_Inner = { "DebugTextList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FDebugTextInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHUD_Statics::NewProp_DebugCanvas_MetaData[] = {
		{ "Comment", "/** 'Foreground' debug canvas, will draw in front of Slate UI. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/HUD.h" },
		{ "ToolTip", "'Foreground' debug canvas, will draw in front of Slate UI." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHUD_Statics::NewProp_DebugCanvas = { "DebugCanvas", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHUD, DebugCanvas), Z_Construct_UClass_UCanvas_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHUD_Statics::NewProp_DebugCanvas_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHUD_Statics::NewProp_DebugCanvas_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHUD_Statics::NewProp_Canvas_MetaData[] = {
		{ "Comment", "/** Canvas to Draw HUD on.  Only valid during PostRender() event.  */" },
		{ "ModuleRelativePath", "Classes/GameFramework/HUD.h" },
		{ "ToolTip", "Canvas to Draw HUD on.  Only valid during PostRender() event." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHUD_Statics::NewProp_Canvas = { "Canvas", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHUD, Canvas), Z_Construct_UClass_UCanvas_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHUD_Statics::NewProp_Canvas_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHUD_Statics::NewProp_Canvas_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHUD_Statics::NewProp_ToggledDebugCategories_MetaData[] = {
		{ "Comment", "/** Array of names specifying what subsets of debug info to display for viewtarget actor. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/HUD.h" },
		{ "ToolTip", "Array of names specifying what subsets of debug info to display for viewtarget actor." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AHUD_Statics::NewProp_ToggledDebugCategories = { "ToggledDebugCategories", nullptr, (EPropertyFlags)0x0010000000044000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHUD, ToggledDebugCategories), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AHUD_Statics::NewProp_ToggledDebugCategories_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHUD_Statics::NewProp_ToggledDebugCategories_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_AHUD_Statics::NewProp_ToggledDebugCategories_Inner = { "ToggledDebugCategories", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHUD_Statics::NewProp_DebugDisplay_MetaData[] = {
		{ "Comment", "/** Array of names specifying what debug info to display for viewtarget actor. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/HUD.h" },
		{ "ToolTip", "Array of names specifying what debug info to display for viewtarget actor." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AHUD_Statics::NewProp_DebugDisplay = { "DebugDisplay", nullptr, (EPropertyFlags)0x0010000000044000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHUD, DebugDisplay), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AHUD_Statics::NewProp_DebugDisplay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHUD_Statics::NewProp_DebugDisplay_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_AHUD_Statics::NewProp_DebugDisplay_Inner = { "DebugDisplay", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHUD_Statics::NewProp_PostRenderedActors_MetaData[] = {
		{ "Comment", "/** Holds a list of Actors that need PostRender() calls. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/HUD.h" },
		{ "ToolTip", "Holds a list of Actors that need PostRender() calls." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AHUD_Statics::NewProp_PostRenderedActors = { "PostRenderedActors", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHUD, PostRenderedActors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AHUD_Statics::NewProp_PostRenderedActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHUD_Statics::NewProp_PostRenderedActors_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHUD_Statics::NewProp_PostRenderedActors_Inner = { "PostRenderedActors", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHUD_Statics::NewProp_bEnableDebugTextShadow_MetaData[] = {
		{ "Category", "HUD" },
		{ "Comment", "/** Put shadow on debug strings */" },
		{ "ModuleRelativePath", "Classes/GameFramework/HUD.h" },
		{ "ToolTip", "Put shadow on debug strings" },
	};
#endif
	void Z_Construct_UClass_AHUD_Statics::NewProp_bEnableDebugTextShadow_SetBit(void* Obj)
	{
		((AHUD*)Obj)->bEnableDebugTextShadow = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AHUD_Statics::NewProp_bEnableDebugTextShadow = { "bEnableDebugTextShadow", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(AHUD), &Z_Construct_UClass_AHUD_Statics::NewProp_bEnableDebugTextShadow_SetBit, METADATA_PARAMS(Z_Construct_UClass_AHUD_Statics::NewProp_bEnableDebugTextShadow_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHUD_Statics::NewProp_bEnableDebugTextShadow_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHUD_Statics::NewProp_bShowOverlays_MetaData[] = {
		{ "Category", "HUD" },
		{ "Comment", "/** If true, render actor overlays. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/HUD.h" },
		{ "ToolTip", "If true, render actor overlays." },
	};
#endif
	void Z_Construct_UClass_AHUD_Statics::NewProp_bShowOverlays_SetBit(void* Obj)
	{
		((AHUD*)Obj)->bShowOverlays = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AHUD_Statics::NewProp_bShowOverlays = { "bShowOverlays", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(AHUD), &Z_Construct_UClass_AHUD_Statics::NewProp_bShowOverlays_SetBit, METADATA_PARAMS(Z_Construct_UClass_AHUD_Statics::NewProp_bShowOverlays_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHUD_Statics::NewProp_bShowOverlays_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHUD_Statics::NewProp_bShowHitBoxDebugInfo_MetaData[] = {
		{ "Category", "HUD" },
		{ "Comment", "/** If true, show hitbox debugging info. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/HUD.h" },
		{ "ToolTip", "If true, show hitbox debugging info." },
	};
#endif
	void Z_Construct_UClass_AHUD_Statics::NewProp_bShowHitBoxDebugInfo_SetBit(void* Obj)
	{
		((AHUD*)Obj)->bShowHitBoxDebugInfo = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AHUD_Statics::NewProp_bShowHitBoxDebugInfo = { "bShowHitBoxDebugInfo", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(AHUD), &Z_Construct_UClass_AHUD_Statics::NewProp_bShowHitBoxDebugInfo_SetBit, METADATA_PARAMS(Z_Construct_UClass_AHUD_Statics::NewProp_bShowHitBoxDebugInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHUD_Statics::NewProp_bShowHitBoxDebugInfo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHUD_Statics::NewProp_CurrentTargetIndex_MetaData[] = {
		{ "Comment", "/** Current target in our considered Targets list for 'showdebug' */" },
		{ "ModuleRelativePath", "Classes/GameFramework/HUD.h" },
		{ "ToolTip", "Current target in our considered Targets list for 'showdebug'" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AHUD_Statics::NewProp_CurrentTargetIndex = { "CurrentTargetIndex", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHUD, CurrentTargetIndex), METADATA_PARAMS(Z_Construct_UClass_AHUD_Statics::NewProp_CurrentTargetIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHUD_Statics::NewProp_CurrentTargetIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHUD_Statics::NewProp_bShowDebugInfo_MetaData[] = {
		{ "Category", "HUD" },
		{ "Comment", "/** If true, current ViewTarget shows debug information using its DisplayDebug(). */" },
		{ "ModuleRelativePath", "Classes/GameFramework/HUD.h" },
		{ "ToolTip", "If true, current ViewTarget shows debug information using its DisplayDebug()." },
	};
#endif
	void Z_Construct_UClass_AHUD_Statics::NewProp_bShowDebugInfo_SetBit(void* Obj)
	{
		((AHUD*)Obj)->bShowDebugInfo = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AHUD_Statics::NewProp_bShowDebugInfo = { "bShowDebugInfo", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(AHUD), &Z_Construct_UClass_AHUD_Statics::NewProp_bShowDebugInfo_SetBit, METADATA_PARAMS(Z_Construct_UClass_AHUD_Statics::NewProp_bShowDebugInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHUD_Statics::NewProp_bShowDebugInfo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHUD_Statics::NewProp_bShowHUD_MetaData[] = {
		{ "Category", "HUD" },
		{ "Comment", "/** Whether or not the HUD should be drawn. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/HUD.h" },
		{ "ToolTip", "Whether or not the HUD should be drawn." },
	};
#endif
	void Z_Construct_UClass_AHUD_Statics::NewProp_bShowHUD_SetBit(void* Obj)
	{
		((AHUD*)Obj)->bShowHUD = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AHUD_Statics::NewProp_bShowHUD = { "bShowHUD", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(AHUD), &Z_Construct_UClass_AHUD_Statics::NewProp_bShowHUD_SetBit, METADATA_PARAMS(Z_Construct_UClass_AHUD_Statics::NewProp_bShowHUD_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHUD_Statics::NewProp_bShowHUD_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHUD_Statics::NewProp_bLostFocusPaused_MetaData[] = {
		{ "Category", "HUD" },
		{ "Comment", "/** Tells whether the game was paused due to lost focus */" },
		{ "ModuleRelativePath", "Classes/GameFramework/HUD.h" },
		{ "ToolTip", "Tells whether the game was paused due to lost focus" },
	};
#endif
	void Z_Construct_UClass_AHUD_Statics::NewProp_bLostFocusPaused_SetBit(void* Obj)
	{
		((AHUD*)Obj)->bLostFocusPaused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AHUD_Statics::NewProp_bLostFocusPaused = { "bLostFocusPaused", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(AHUD), &Z_Construct_UClass_AHUD_Statics::NewProp_bLostFocusPaused_SetBit, METADATA_PARAMS(Z_Construct_UClass_AHUD_Statics::NewProp_bLostFocusPaused_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHUD_Statics::NewProp_bLostFocusPaused_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHUD_Statics::NewProp_PlayerOwner_MetaData[] = {
		{ "Category", "HUD" },
		{ "Comment", "/** PlayerController which owns this HUD. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/HUD.h" },
		{ "ToolTip", "PlayerController which owns this HUD." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHUD_Statics::NewProp_PlayerOwner = { "PlayerOwner", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHUD, PlayerOwner), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHUD_Statics::NewProp_PlayerOwner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHUD_Statics::NewProp_PlayerOwner_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AHUD_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHUD_Statics::NewProp_ShowDebugTargetActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHUD_Statics::NewProp_ShowDebugTargetDesiredClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHUD_Statics::NewProp_DebugTextList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHUD_Statics::NewProp_DebugTextList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHUD_Statics::NewProp_DebugCanvas,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHUD_Statics::NewProp_Canvas,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHUD_Statics::NewProp_ToggledDebugCategories,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHUD_Statics::NewProp_ToggledDebugCategories_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHUD_Statics::NewProp_DebugDisplay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHUD_Statics::NewProp_DebugDisplay_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHUD_Statics::NewProp_PostRenderedActors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHUD_Statics::NewProp_PostRenderedActors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHUD_Statics::NewProp_bEnableDebugTextShadow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHUD_Statics::NewProp_bShowOverlays,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHUD_Statics::NewProp_bShowHitBoxDebugInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHUD_Statics::NewProp_CurrentTargetIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHUD_Statics::NewProp_bShowDebugInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHUD_Statics::NewProp_bShowHUD,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHUD_Statics::NewProp_bLostFocusPaused,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHUD_Statics::NewProp_PlayerOwner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AHUD_Statics::ClassParams = {
		&AHUD::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AHUD_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AHUD_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AHUD_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AHUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AHUD, 2738095198);
	template<> ENGINE_API UClass* StaticClass<AHUD>()
	{
		return AHUD::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AHUD(Z_Construct_UClass_AHUD, &AHUD::StaticClass, TEXT("/Script/Engine"), TEXT("AHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
