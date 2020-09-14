// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Camera/CameraStackTypes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCameraStackTypes() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECameraAlphaBlendMode();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDummySpacerCameraTypes();
// End Cross Module References
	static UEnum* ECameraAlphaBlendMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_ECameraAlphaBlendMode, Z_Construct_UPackage__Script_Engine(), TEXT("ECameraAlphaBlendMode"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<ECameraAlphaBlendMode::Type>()
	{
		return ECameraAlphaBlendMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ECameraAlphaBlendMode(ECameraAlphaBlendMode_StaticEnum, TEXT("/Script/Engine"), TEXT("ECameraAlphaBlendMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_ECameraAlphaBlendMode_Hash() { return 2187510753U; }
	UEnum* Z_Construct_UEnum_Engine_ECameraAlphaBlendMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ECameraAlphaBlendMode"), 0, Get_Z_Construct_UEnum_Engine_ECameraAlphaBlendMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ECameraAlphaBlendMode::CABM_Linear", (int64)ECameraAlphaBlendMode::CABM_Linear },
				{ "ECameraAlphaBlendMode::CABM_Cubic", (int64)ECameraAlphaBlendMode::CABM_Cubic },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "CABM_Cubic.DisplayName", "Cubic" },
				{ "CABM_Cubic.Name", "ECameraAlphaBlendMode::CABM_Cubic" },
				{ "CABM_Linear.DisplayName", "Linear" },
				{ "CABM_Linear.Name", "ECameraAlphaBlendMode::CABM_Linear" },
				{ "Comment", "//@TODO: Document\n" },
				{ "ModuleRelativePath", "Classes/Camera/CameraStackTypes.h" },
				{ "ToolTip", "@TODO: Document" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"ECameraAlphaBlendMode",
				"ECameraAlphaBlendMode::Type",
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
class UScriptStruct* FDummySpacerCameraTypes::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FDummySpacerCameraTypes_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDummySpacerCameraTypes, Z_Construct_UPackage__Script_Engine(), TEXT("DummySpacerCameraTypes"), sizeof(FDummySpacerCameraTypes), Get_Z_Construct_UScriptStruct_FDummySpacerCameraTypes_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FDummySpacerCameraTypes>()
{
	return FDummySpacerCameraTypes::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDummySpacerCameraTypes(FDummySpacerCameraTypes::StaticStruct, TEXT("/Script/Engine"), TEXT("DummySpacerCameraTypes"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFDummySpacerCameraTypes
{
	FScriptStruct_Engine_StaticRegisterNativesFDummySpacerCameraTypes()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("DummySpacerCameraTypes")),new UScriptStruct::TCppStructOps<FDummySpacerCameraTypes>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFDummySpacerCameraTypes;
	struct Z_Construct_UScriptStruct_FDummySpacerCameraTypes_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDummySpacerCameraTypes_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// NOTE:\n// This code is work in progress - do not use these types until this comment is removed.\n" },
		{ "ModuleRelativePath", "Classes/Camera/CameraStackTypes.h" },
		{ "ToolTip", "NOTE:\nThis code is work in progress - do not use these types until this comment is removed." },
	};
#endif
	void* Z_Construct_UScriptStruct_FDummySpacerCameraTypes_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDummySpacerCameraTypes>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDummySpacerCameraTypes_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"DummySpacerCameraTypes",
		sizeof(FDummySpacerCameraTypes),
		alignof(FDummySpacerCameraTypes),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDummySpacerCameraTypes_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDummySpacerCameraTypes_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDummySpacerCameraTypes()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDummySpacerCameraTypes_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DummySpacerCameraTypes"), sizeof(FDummySpacerCameraTypes), Get_Z_Construct_UScriptStruct_FDummySpacerCameraTypes_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDummySpacerCameraTypes_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDummySpacerCameraTypes_Hash() { return 701321603U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
