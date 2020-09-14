// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Paper2D/Classes/PaperFlipbook.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePaperFlipbook() {}
// Cross Module References
	PAPER2D_API UEnum* Z_Construct_UEnum_Paper2D_EFlipbookCollisionMode();
	UPackage* Z_Construct_UPackage__Script_Paper2D();
	PAPER2D_API UScriptStruct* Z_Construct_UScriptStruct_FPaperFlipbookKeyFrame();
	PAPER2D_API UClass* Z_Construct_UClass_UPaperSprite_NoRegister();
	PAPER2D_API UClass* Z_Construct_UClass_UPaperFlipbook_NoRegister();
	PAPER2D_API UClass* Z_Construct_UClass_UPaperFlipbook();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
// End Cross Module References
	static UEnum* EFlipbookCollisionMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Paper2D_EFlipbookCollisionMode, Z_Construct_UPackage__Script_Paper2D(), TEXT("EFlipbookCollisionMode"));
		}
		return Singleton;
	}
	template<> PAPER2D_API UEnum* StaticEnum<EFlipbookCollisionMode::Type>()
	{
		return EFlipbookCollisionMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EFlipbookCollisionMode(EFlipbookCollisionMode_StaticEnum, TEXT("/Script/Paper2D"), TEXT("EFlipbookCollisionMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Paper2D_EFlipbookCollisionMode_Hash() { return 1670397401U; }
	UEnum* Z_Construct_UEnum_Paper2D_EFlipbookCollisionMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Paper2D();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EFlipbookCollisionMode"), 0, Get_Z_Construct_UEnum_Paper2D_EFlipbookCollisionMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EFlipbookCollisionMode::NoCollision", (int64)EFlipbookCollisionMode::NoCollision },
				{ "EFlipbookCollisionMode::FirstFrameCollision", (int64)EFlipbookCollisionMode::FirstFrameCollision },
				{ "EFlipbookCollisionMode::EachFrameCollision", (int64)EFlipbookCollisionMode::EachFrameCollision },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "EachFrameCollision.Comment", "/** The flipbook changes collision each frame based on the animation (Note: This setting is not recommended and is very expensive, recreating the physics state every frame) */" },
				{ "EachFrameCollision.Name", "EFlipbookCollisionMode::EachFrameCollision" },
				{ "EachFrameCollision.ToolTip", "The flipbook changes collision each frame based on the animation (Note: This setting is not recommended and is very expensive, recreating the physics state every frame)" },
				{ "FirstFrameCollision.Comment", "/** The flipbook has non-animated collision based on the first frame of the animation */" },
				{ "FirstFrameCollision.Name", "EFlipbookCollisionMode::FirstFrameCollision" },
				{ "FirstFrameCollision.ToolTip", "The flipbook has non-animated collision based on the first frame of the animation" },
				{ "ModuleRelativePath", "Classes/PaperFlipbook.h" },
				{ "NoCollision.Comment", "/** The flipbook has no collision */" },
				{ "NoCollision.Name", "EFlipbookCollisionMode::NoCollision" },
				{ "NoCollision.ToolTip", "The flipbook has no collision" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Paper2D,
				nullptr,
				"EFlipbookCollisionMode",
				"EFlipbookCollisionMode::Type",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Namespaced,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FPaperFlipbookKeyFrame::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PAPER2D_API uint32 Get_Z_Construct_UScriptStruct_FPaperFlipbookKeyFrame_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPaperFlipbookKeyFrame, Z_Construct_UPackage__Script_Paper2D(), TEXT("PaperFlipbookKeyFrame"), sizeof(FPaperFlipbookKeyFrame), Get_Z_Construct_UScriptStruct_FPaperFlipbookKeyFrame_Hash());
	}
	return Singleton;
}
template<> PAPER2D_API UScriptStruct* StaticStruct<FPaperFlipbookKeyFrame>()
{
	return FPaperFlipbookKeyFrame::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPaperFlipbookKeyFrame(FPaperFlipbookKeyFrame::StaticStruct, TEXT("/Script/Paper2D"), TEXT("PaperFlipbookKeyFrame"), false, nullptr, nullptr);
static struct FScriptStruct_Paper2D_StaticRegisterNativesFPaperFlipbookKeyFrame
{
	FScriptStruct_Paper2D_StaticRegisterNativesFPaperFlipbookKeyFrame()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PaperFlipbookKeyFrame")),new UScriptStruct::TCppStructOps<FPaperFlipbookKeyFrame>);
	}
} ScriptStruct_Paper2D_StaticRegisterNativesFPaperFlipbookKeyFrame;
	struct Z_Construct_UScriptStruct_FPaperFlipbookKeyFrame_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FrameRun_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_FrameRun;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Sprite_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Sprite;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPaperFlipbookKeyFrame_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/PaperFlipbook.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPaperFlipbookKeyFrame_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPaperFlipbookKeyFrame>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPaperFlipbookKeyFrame_Statics::NewProp_FrameRun_MetaData[] = {
		{ "Category", "Sprite" },
		{ "ClampMin", "1" },
		{ "ModuleRelativePath", "Classes/PaperFlipbook.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPaperFlipbookKeyFrame_Statics::NewProp_FrameRun = { "FrameRun", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPaperFlipbookKeyFrame, FrameRun), METADATA_PARAMS(Z_Construct_UScriptStruct_FPaperFlipbookKeyFrame_Statics::NewProp_FrameRun_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaperFlipbookKeyFrame_Statics::NewProp_FrameRun_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPaperFlipbookKeyFrame_Statics::NewProp_Sprite_MetaData[] = {
		{ "Category", "Sprite" },
		{ "ModuleRelativePath", "Classes/PaperFlipbook.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FPaperFlipbookKeyFrame_Statics::NewProp_Sprite = { "Sprite", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPaperFlipbookKeyFrame, Sprite), Z_Construct_UClass_UPaperSprite_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FPaperFlipbookKeyFrame_Statics::NewProp_Sprite_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaperFlipbookKeyFrame_Statics::NewProp_Sprite_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPaperFlipbookKeyFrame_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPaperFlipbookKeyFrame_Statics::NewProp_FrameRun,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPaperFlipbookKeyFrame_Statics::NewProp_Sprite,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPaperFlipbookKeyFrame_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Paper2D,
		nullptr,
		&NewStructOps,
		"PaperFlipbookKeyFrame",
		sizeof(FPaperFlipbookKeyFrame),
		alignof(FPaperFlipbookKeyFrame),
		Z_Construct_UScriptStruct_FPaperFlipbookKeyFrame_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaperFlipbookKeyFrame_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPaperFlipbookKeyFrame_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaperFlipbookKeyFrame_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPaperFlipbookKeyFrame()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPaperFlipbookKeyFrame_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Paper2D();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PaperFlipbookKeyFrame"), sizeof(FPaperFlipbookKeyFrame), Get_Z_Construct_UScriptStruct_FPaperFlipbookKeyFrame_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPaperFlipbookKeyFrame_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPaperFlipbookKeyFrame_Hash() { return 2828229449U; }
	DEFINE_FUNCTION(UPaperFlipbook::execIsValidKeyFrameIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsValidKeyFrameIndex(Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPaperFlipbook::execGetNumKeyFrames)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetNumKeyFrames();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPaperFlipbook::execGetSpriteAtFrame)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_FrameIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPaperSprite**)Z_Param__Result=P_THIS->GetSpriteAtFrame(Z_Param_FrameIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPaperFlipbook::execGetSpriteAtTime)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Time);
		P_GET_UBOOL(Z_Param_bClampToEnds);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPaperSprite**)Z_Param__Result=P_THIS->GetSpriteAtTime(Z_Param_Time,Z_Param_bClampToEnds);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPaperFlipbook::execGetKeyFrameIndexAtTime)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Time);
		P_GET_UBOOL(Z_Param_bClampToEnds);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetKeyFrameIndexAtTime(Z_Param_Time,Z_Param_bClampToEnds);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPaperFlipbook::execGetTotalDuration)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetTotalDuration();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPaperFlipbook::execGetNumFrames)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetNumFrames();
		P_NATIVE_END;
	}
	void UPaperFlipbook::StaticRegisterNativesUPaperFlipbook()
	{
		UClass* Class = UPaperFlipbook::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetKeyFrameIndexAtTime", &UPaperFlipbook::execGetKeyFrameIndexAtTime },
			{ "GetNumFrames", &UPaperFlipbook::execGetNumFrames },
			{ "GetNumKeyFrames", &UPaperFlipbook::execGetNumKeyFrames },
			{ "GetSpriteAtFrame", &UPaperFlipbook::execGetSpriteAtFrame },
			{ "GetSpriteAtTime", &UPaperFlipbook::execGetSpriteAtTime },
			{ "GetTotalDuration", &UPaperFlipbook::execGetTotalDuration },
			{ "IsValidKeyFrameIndex", &UPaperFlipbook::execIsValidKeyFrameIndex },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPaperFlipbook_GetKeyFrameIndexAtTime_Statics
	{
		struct PaperFlipbook_eventGetKeyFrameIndexAtTime_Parms
		{
			float Time;
			bool bClampToEnds;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static void NewProp_bClampToEnds_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bClampToEnds;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Time;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPaperFlipbook_GetKeyFrameIndexAtTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PaperFlipbook_eventGetKeyFrameIndexAtTime_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPaperFlipbook_GetKeyFrameIndexAtTime_Statics::NewProp_bClampToEnds_SetBit(void* Obj)
	{
		((PaperFlipbook_eventGetKeyFrameIndexAtTime_Parms*)Obj)->bClampToEnds = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPaperFlipbook_GetKeyFrameIndexAtTime_Statics::NewProp_bClampToEnds = { "bClampToEnds", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PaperFlipbook_eventGetKeyFrameIndexAtTime_Parms), &Z_Construct_UFunction_UPaperFlipbook_GetKeyFrameIndexAtTime_Statics::NewProp_bClampToEnds_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPaperFlipbook_GetKeyFrameIndexAtTime_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PaperFlipbook_eventGetKeyFrameIndexAtTime_Parms, Time), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPaperFlipbook_GetKeyFrameIndexAtTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperFlipbook_GetKeyFrameIndexAtTime_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperFlipbook_GetKeyFrameIndexAtTime_Statics::NewProp_bClampToEnds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperFlipbook_GetKeyFrameIndexAtTime_Statics::NewProp_Time,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPaperFlipbook_GetKeyFrameIndexAtTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sprite" },
		{ "Comment", "// Returns the keyframe index that covers the specified time (in seconds), or INDEX_NONE if none exists.\n// When bClampToEnds is true, it will choose the first or last keyframe if the time is out of range.\n" },
		{ "CPP_Default_bClampToEnds", "false" },
		{ "ModuleRelativePath", "Classes/PaperFlipbook.h" },
		{ "ToolTip", "Returns the keyframe index that covers the specified time (in seconds), or INDEX_NONE if none exists.\nWhen bClampToEnds is true, it will choose the first or last keyframe if the time is out of range." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPaperFlipbook_GetKeyFrameIndexAtTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPaperFlipbook, nullptr, "GetKeyFrameIndexAtTime", nullptr, nullptr, sizeof(PaperFlipbook_eventGetKeyFrameIndexAtTime_Parms), Z_Construct_UFunction_UPaperFlipbook_GetKeyFrameIndexAtTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperFlipbook_GetKeyFrameIndexAtTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPaperFlipbook_GetKeyFrameIndexAtTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperFlipbook_GetKeyFrameIndexAtTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPaperFlipbook_GetKeyFrameIndexAtTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPaperFlipbook_GetKeyFrameIndexAtTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPaperFlipbook_GetNumFrames_Statics
	{
		struct PaperFlipbook_eventGetNumFrames_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPaperFlipbook_GetNumFrames_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PaperFlipbook_eventGetNumFrames_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPaperFlipbook_GetNumFrames_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperFlipbook_GetNumFrames_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPaperFlipbook_GetNumFrames_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sprite" },
		{ "Comment", "// Returns the total number of frames\n" },
		{ "ModuleRelativePath", "Classes/PaperFlipbook.h" },
		{ "ToolTip", "Returns the total number of frames" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPaperFlipbook_GetNumFrames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPaperFlipbook, nullptr, "GetNumFrames", nullptr, nullptr, sizeof(PaperFlipbook_eventGetNumFrames_Parms), Z_Construct_UFunction_UPaperFlipbook_GetNumFrames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperFlipbook_GetNumFrames_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPaperFlipbook_GetNumFrames_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperFlipbook_GetNumFrames_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPaperFlipbook_GetNumFrames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPaperFlipbook_GetNumFrames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPaperFlipbook_GetNumKeyFrames_Statics
	{
		struct PaperFlipbook_eventGetNumKeyFrames_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPaperFlipbook_GetNumKeyFrames_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PaperFlipbook_eventGetNumKeyFrames_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPaperFlipbook_GetNumKeyFrames_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperFlipbook_GetNumKeyFrames_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPaperFlipbook_GetNumKeyFrames_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sprite" },
		{ "Comment", "// Returns the number of key frames\n" },
		{ "ModuleRelativePath", "Classes/PaperFlipbook.h" },
		{ "ToolTip", "Returns the number of key frames" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPaperFlipbook_GetNumKeyFrames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPaperFlipbook, nullptr, "GetNumKeyFrames", nullptr, nullptr, sizeof(PaperFlipbook_eventGetNumKeyFrames_Parms), Z_Construct_UFunction_UPaperFlipbook_GetNumKeyFrames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperFlipbook_GetNumKeyFrames_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPaperFlipbook_GetNumKeyFrames_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperFlipbook_GetNumKeyFrames_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPaperFlipbook_GetNumKeyFrames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPaperFlipbook_GetNumKeyFrames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPaperFlipbook_GetSpriteAtFrame_Statics
	{
		struct PaperFlipbook_eventGetSpriteAtFrame_Parms
		{
			int32 FrameIndex;
			UPaperSprite* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_FrameIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPaperFlipbook_GetSpriteAtFrame_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PaperFlipbook_eventGetSpriteAtFrame_Parms, ReturnValue), Z_Construct_UClass_UPaperSprite_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPaperFlipbook_GetSpriteAtFrame_Statics::NewProp_FrameIndex = { "FrameIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PaperFlipbook_eventGetSpriteAtFrame_Parms, FrameIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPaperFlipbook_GetSpriteAtFrame_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperFlipbook_GetSpriteAtFrame_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperFlipbook_GetSpriteAtFrame_Statics::NewProp_FrameIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPaperFlipbook_GetSpriteAtFrame_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sprite" },
		{ "Comment", "// Returns the sprite at the specified keyframe index, or nullptr if none exists\n" },
		{ "ModuleRelativePath", "Classes/PaperFlipbook.h" },
		{ "ToolTip", "Returns the sprite at the specified keyframe index, or nullptr if none exists" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPaperFlipbook_GetSpriteAtFrame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPaperFlipbook, nullptr, "GetSpriteAtFrame", nullptr, nullptr, sizeof(PaperFlipbook_eventGetSpriteAtFrame_Parms), Z_Construct_UFunction_UPaperFlipbook_GetSpriteAtFrame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperFlipbook_GetSpriteAtFrame_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPaperFlipbook_GetSpriteAtFrame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperFlipbook_GetSpriteAtFrame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPaperFlipbook_GetSpriteAtFrame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPaperFlipbook_GetSpriteAtFrame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPaperFlipbook_GetSpriteAtTime_Statics
	{
		struct PaperFlipbook_eventGetSpriteAtTime_Parms
		{
			float Time;
			bool bClampToEnds;
			UPaperSprite* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static void NewProp_bClampToEnds_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bClampToEnds;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Time;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPaperFlipbook_GetSpriteAtTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PaperFlipbook_eventGetSpriteAtTime_Parms, ReturnValue), Z_Construct_UClass_UPaperSprite_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPaperFlipbook_GetSpriteAtTime_Statics::NewProp_bClampToEnds_SetBit(void* Obj)
	{
		((PaperFlipbook_eventGetSpriteAtTime_Parms*)Obj)->bClampToEnds = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPaperFlipbook_GetSpriteAtTime_Statics::NewProp_bClampToEnds = { "bClampToEnds", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PaperFlipbook_eventGetSpriteAtTime_Parms), &Z_Construct_UFunction_UPaperFlipbook_GetSpriteAtTime_Statics::NewProp_bClampToEnds_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPaperFlipbook_GetSpriteAtTime_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PaperFlipbook_eventGetSpriteAtTime_Parms, Time), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPaperFlipbook_GetSpriteAtTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperFlipbook_GetSpriteAtTime_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperFlipbook_GetSpriteAtTime_Statics::NewProp_bClampToEnds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperFlipbook_GetSpriteAtTime_Statics::NewProp_Time,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPaperFlipbook_GetSpriteAtTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sprite" },
		{ "Comment", "// Returns the sprite at the specified time (in seconds), or nullptr if none exists.\n// When bClampToEnds is true, it will choose the first or last sprite if the time is out of range.\n" },
		{ "CPP_Default_bClampToEnds", "false" },
		{ "ModuleRelativePath", "Classes/PaperFlipbook.h" },
		{ "ToolTip", "Returns the sprite at the specified time (in seconds), or nullptr if none exists.\nWhen bClampToEnds is true, it will choose the first or last sprite if the time is out of range." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPaperFlipbook_GetSpriteAtTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPaperFlipbook, nullptr, "GetSpriteAtTime", nullptr, nullptr, sizeof(PaperFlipbook_eventGetSpriteAtTime_Parms), Z_Construct_UFunction_UPaperFlipbook_GetSpriteAtTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperFlipbook_GetSpriteAtTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPaperFlipbook_GetSpriteAtTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperFlipbook_GetSpriteAtTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPaperFlipbook_GetSpriteAtTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPaperFlipbook_GetSpriteAtTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPaperFlipbook_GetTotalDuration_Statics
	{
		struct PaperFlipbook_eventGetTotalDuration_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPaperFlipbook_GetTotalDuration_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PaperFlipbook_eventGetTotalDuration_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPaperFlipbook_GetTotalDuration_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperFlipbook_GetTotalDuration_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPaperFlipbook_GetTotalDuration_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sprite" },
		{ "Comment", "// Returns the total duration in seconds\n" },
		{ "ModuleRelativePath", "Classes/PaperFlipbook.h" },
		{ "ToolTip", "Returns the total duration in seconds" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPaperFlipbook_GetTotalDuration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPaperFlipbook, nullptr, "GetTotalDuration", nullptr, nullptr, sizeof(PaperFlipbook_eventGetTotalDuration_Parms), Z_Construct_UFunction_UPaperFlipbook_GetTotalDuration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperFlipbook_GetTotalDuration_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPaperFlipbook_GetTotalDuration_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperFlipbook_GetTotalDuration_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPaperFlipbook_GetTotalDuration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPaperFlipbook_GetTotalDuration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPaperFlipbook_IsValidKeyFrameIndex_Statics
	{
		struct PaperFlipbook_eventIsValidKeyFrameIndex_Parms
		{
			int32 Index;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UPaperFlipbook_IsValidKeyFrameIndex_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PaperFlipbook_eventIsValidKeyFrameIndex_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPaperFlipbook_IsValidKeyFrameIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PaperFlipbook_eventIsValidKeyFrameIndex_Parms), &Z_Construct_UFunction_UPaperFlipbook_IsValidKeyFrameIndex_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPaperFlipbook_IsValidKeyFrameIndex_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PaperFlipbook_eventIsValidKeyFrameIndex_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPaperFlipbook_IsValidKeyFrameIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperFlipbook_IsValidKeyFrameIndex_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperFlipbook_IsValidKeyFrameIndex_Statics::NewProp_Index,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPaperFlipbook_IsValidKeyFrameIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sprite" },
		{ "Comment", "// Is the specified Index within the valid range of key frames?\n" },
		{ "ModuleRelativePath", "Classes/PaperFlipbook.h" },
		{ "ToolTip", "Is the specified Index within the valid range of key frames?" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPaperFlipbook_IsValidKeyFrameIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPaperFlipbook, nullptr, "IsValidKeyFrameIndex", nullptr, nullptr, sizeof(PaperFlipbook_eventIsValidKeyFrameIndex_Parms), Z_Construct_UFunction_UPaperFlipbook_IsValidKeyFrameIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperFlipbook_IsValidKeyFrameIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPaperFlipbook_IsValidKeyFrameIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperFlipbook_IsValidKeyFrameIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPaperFlipbook_IsValidKeyFrameIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPaperFlipbook_IsValidKeyFrameIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPaperFlipbook_NoRegister()
	{
		return UPaperFlipbook::StaticClass();
	}
	struct Z_Construct_UClass_UPaperFlipbook_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollisionSource_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CollisionSource;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DefaultMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KeyFrames_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_KeyFrames;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_KeyFrames_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FramesPerSecond_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FramesPerSecond;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPaperFlipbook_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Paper2D,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPaperFlipbook_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPaperFlipbook_GetKeyFrameIndexAtTime, "GetKeyFrameIndexAtTime" }, // 2665456999
		{ &Z_Construct_UFunction_UPaperFlipbook_GetNumFrames, "GetNumFrames" }, // 3825296455
		{ &Z_Construct_UFunction_UPaperFlipbook_GetNumKeyFrames, "GetNumKeyFrames" }, // 2498880403
		{ &Z_Construct_UFunction_UPaperFlipbook_GetSpriteAtFrame, "GetSpriteAtFrame" }, // 1817710400
		{ &Z_Construct_UFunction_UPaperFlipbook_GetSpriteAtTime, "GetSpriteAtTime" }, // 828361194
		{ &Z_Construct_UFunction_UPaperFlipbook_GetTotalDuration, "GetTotalDuration" }, // 3935743657
		{ &Z_Construct_UFunction_UPaperFlipbook_IsValidKeyFrameIndex, "IsValidKeyFrameIndex" }, // 862386352
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperFlipbook_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Contains an animation sequence of sprite frames\n */" },
		{ "DisplayThumbnail", "true" },
		{ "IncludePath", "PaperFlipbook.h" },
		{ "ModuleRelativePath", "Classes/PaperFlipbook.h" },
		{ "ToolTip", "Contains an animation sequence of sprite frames" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperFlipbook_Statics::NewProp_CollisionSource_MetaData[] = {
		{ "Category", "Sprite" },
		{ "Comment", "// Collision source\n" },
		{ "ModuleRelativePath", "Classes/PaperFlipbook.h" },
		{ "ToolTip", "Collision source" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPaperFlipbook_Statics::NewProp_CollisionSource = { "CollisionSource", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPaperFlipbook, CollisionSource), Z_Construct_UEnum_Paper2D_EFlipbookCollisionMode, METADATA_PARAMS(Z_Construct_UClass_UPaperFlipbook_Statics::NewProp_CollisionSource_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperFlipbook_Statics::NewProp_CollisionSource_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperFlipbook_Statics::NewProp_DefaultMaterial_MetaData[] = {
		{ "Category", "Sprite" },
		{ "Comment", "// The material to use on a flipbook player instance if not overridden\n" },
		{ "ModuleRelativePath", "Classes/PaperFlipbook.h" },
		{ "ToolTip", "The material to use on a flipbook player instance if not overridden" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPaperFlipbook_Statics::NewProp_DefaultMaterial = { "DefaultMaterial", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPaperFlipbook, DefaultMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPaperFlipbook_Statics::NewProp_DefaultMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperFlipbook_Statics::NewProp_DefaultMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperFlipbook_Statics::NewProp_KeyFrames_MetaData[] = {
		{ "Category", "Sprite" },
		{ "Comment", "// The set of key frames for this flipbook animation (each one has a duration and a sprite to display)\n" },
		{ "ModuleRelativePath", "Classes/PaperFlipbook.h" },
		{ "ToolTip", "The set of key frames for this flipbook animation (each one has a duration and a sprite to display)" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPaperFlipbook_Statics::NewProp_KeyFrames = { "KeyFrames", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPaperFlipbook, KeyFrames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPaperFlipbook_Statics::NewProp_KeyFrames_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperFlipbook_Statics::NewProp_KeyFrames_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPaperFlipbook_Statics::NewProp_KeyFrames_Inner = { "KeyFrames", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPaperFlipbookKeyFrame, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperFlipbook_Statics::NewProp_FramesPerSecond_MetaData[] = {
		{ "Category", "Sprite" },
		{ "ClampMax", "1000" },
		{ "ClampMin", "0" },
		{ "Comment", "// The nominal frame rate to play this flipbook animation back at\n" },
		{ "ModuleRelativePath", "Classes/PaperFlipbook.h" },
		{ "ToolTip", "The nominal frame rate to play this flipbook animation back at" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPaperFlipbook_Statics::NewProp_FramesPerSecond = { "FramesPerSecond", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPaperFlipbook, FramesPerSecond), METADATA_PARAMS(Z_Construct_UClass_UPaperFlipbook_Statics::NewProp_FramesPerSecond_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperFlipbook_Statics::NewProp_FramesPerSecond_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPaperFlipbook_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperFlipbook_Statics::NewProp_CollisionSource,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperFlipbook_Statics::NewProp_DefaultMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperFlipbook_Statics::NewProp_KeyFrames,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperFlipbook_Statics::NewProp_KeyFrames_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperFlipbook_Statics::NewProp_FramesPerSecond,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPaperFlipbook_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPaperFlipbook>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPaperFlipbook_Statics::ClassParams = {
		&UPaperFlipbook::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPaperFlipbook_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPaperFlipbook_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPaperFlipbook_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperFlipbook_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPaperFlipbook()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPaperFlipbook_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPaperFlipbook, 1604445713);
	template<> PAPER2D_API UClass* StaticClass<UPaperFlipbook>()
	{
		return UPaperFlipbook::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPaperFlipbook(Z_Construct_UClass_UPaperFlipbook, &UPaperFlipbook::StaticClass, TEXT("/Script/Paper2D"), TEXT("UPaperFlipbook"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPaperFlipbook);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UPaperFlipbook)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
