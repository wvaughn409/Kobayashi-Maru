// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InteractiveToolsFramework/Public/InputState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInputState() {}
// Cross Module References
	INTERACTIVETOOLSFRAMEWORK_API UEnum* Z_Construct_UEnum_InteractiveToolsFramework_EInputDevices();
	UPackage* Z_Construct_UPackage__Script_InteractiveToolsFramework();
	INTERACTIVETOOLSFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FInputRayHit();
// End Cross Module References
	static UEnum* EInputDevices_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_InteractiveToolsFramework_EInputDevices, Z_Construct_UPackage__Script_InteractiveToolsFramework(), TEXT("EInputDevices"));
		}
		return Singleton;
	}
	template<> INTERACTIVETOOLSFRAMEWORK_API UEnum* StaticEnum<EInputDevices>()
	{
		return EInputDevices_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EInputDevices(EInputDevices_StaticEnum, TEXT("/Script/InteractiveToolsFramework"), TEXT("EInputDevices"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_InteractiveToolsFramework_EInputDevices_Hash() { return 1447779414U; }
	UEnum* Z_Construct_UEnum_InteractiveToolsFramework_EInputDevices()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_InteractiveToolsFramework();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EInputDevices"), 0, Get_Z_Construct_UEnum_InteractiveToolsFramework_EInputDevices_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EInputDevices::None", (int64)EInputDevices::None },
				{ "EInputDevices::Keyboard", (int64)EInputDevices::Keyboard },
				{ "EInputDevices::Mouse", (int64)EInputDevices::Mouse },
				{ "EInputDevices::Gamepad", (int64)EInputDevices::Gamepad },
				{ "EInputDevices::OculusTouch", (int64)EInputDevices::OculusTouch },
				{ "EInputDevices::HTCViveWands", (int64)EInputDevices::HTCViveWands },
				{ "EInputDevices::AnySpatialDevice", (int64)EInputDevices::AnySpatialDevice },
				{ "EInputDevices::TabletFingers", (int64)EInputDevices::TabletFingers },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AnySpatialDevice.Name", "EInputDevices::AnySpatialDevice" },
				{ "Comment", "/**\n * Input event data can be applicable to many possible input devices.\n * These flags are used to indicate specific or sets of device types.\n */" },
				{ "Gamepad.Name", "EInputDevices::Gamepad" },
				{ "HTCViveWands.Name", "EInputDevices::HTCViveWands" },
				{ "Keyboard.Name", "EInputDevices::Keyboard" },
				{ "ModuleRelativePath", "Public/InputState.h" },
				{ "Mouse.Name", "EInputDevices::Mouse" },
				{ "None.Name", "EInputDevices::None" },
				{ "OculusTouch.Name", "EInputDevices::OculusTouch" },
				{ "TabletFingers.Name", "EInputDevices::TabletFingers" },
				{ "ToolTip", "Input event data can be applicable to many possible input devices.\nThese flags are used to indicate specific or sets of device types." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
				nullptr,
				"EInputDevices",
				"EInputDevices",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FInputRayHit::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern INTERACTIVETOOLSFRAMEWORK_API uint32 Get_Z_Construct_UScriptStruct_FInputRayHit_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FInputRayHit, Z_Construct_UPackage__Script_InteractiveToolsFramework(), TEXT("InputRayHit"), sizeof(FInputRayHit), Get_Z_Construct_UScriptStruct_FInputRayHit_Hash());
	}
	return Singleton;
}
template<> INTERACTIVETOOLSFRAMEWORK_API UScriptStruct* StaticStruct<FInputRayHit>()
{
	return FInputRayHit::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FInputRayHit(FInputRayHit::StaticStruct, TEXT("/Script/InteractiveToolsFramework"), TEXT("InputRayHit"), false, nullptr, nullptr);
static struct FScriptStruct_InteractiveToolsFramework_StaticRegisterNativesFInputRayHit
{
	FScriptStruct_InteractiveToolsFramework_StaticRegisterNativesFInputRayHit()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("InputRayHit")),new UScriptStruct::TCppStructOps<FInputRayHit>);
	}
} ScriptStruct_InteractiveToolsFramework_StaticRegisterNativesFInputRayHit;
	struct Z_Construct_UScriptStruct_FInputRayHit_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputRayHit_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/*\n * FInputRayHit is returned by various hit-test interface functions.\n * Generally this is intended to be returned as the result of a hit-test with a FInputDeviceRay \n */" },
		{ "ModuleRelativePath", "Public/InputState.h" },
		{ "ToolTip", "* FInputRayHit is returned by various hit-test interface functions.\n* Generally this is intended to be returned as the result of a hit-test with a FInputDeviceRay" },
	};
#endif
	void* Z_Construct_UScriptStruct_FInputRayHit_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInputRayHit>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInputRayHit_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
		nullptr,
		&NewStructOps,
		"InputRayHit",
		sizeof(FInputRayHit),
		alignof(FInputRayHit),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FInputRayHit_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputRayHit_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FInputRayHit()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FInputRayHit_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_InteractiveToolsFramework();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("InputRayHit"), sizeof(FInputRayHit), Get_Z_Construct_UScriptStruct_FInputRayHit_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FInputRayHit_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FInputRayHit_Hash() { return 4198289506U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
