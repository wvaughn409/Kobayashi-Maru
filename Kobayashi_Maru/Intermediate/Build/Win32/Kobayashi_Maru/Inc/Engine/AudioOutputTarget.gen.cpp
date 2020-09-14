// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Sound/AudioOutputTarget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAudioOutputTarget() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAudioOutputTarget();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static UEnum* EAudioOutputTarget_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EAudioOutputTarget, Z_Construct_UPackage__Script_Engine(), TEXT("EAudioOutputTarget"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EAudioOutputTarget::Type>()
	{
		return EAudioOutputTarget_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAudioOutputTarget(EAudioOutputTarget_StaticEnum, TEXT("/Script/Engine"), TEXT("EAudioOutputTarget"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EAudioOutputTarget_Hash() { return 846669297U; }
	UEnum* Z_Construct_UEnum_Engine_EAudioOutputTarget()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAudioOutputTarget"), 0, Get_Z_Construct_UEnum_Engine_EAudioOutputTarget_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAudioOutputTarget::Speaker", (int64)EAudioOutputTarget::Speaker },
				{ "EAudioOutputTarget::Controller", (int64)EAudioOutputTarget::Controller },
				{ "EAudioOutputTarget::ControllerFallbackToSpeaker", (int64)EAudioOutputTarget::ControllerFallbackToSpeaker },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Controller.Name", "EAudioOutputTarget::Controller" },
				{ "Controller.ToolTip", "Sound plays only from controller if present." },
				{ "ControllerFallbackToSpeaker.Name", "EAudioOutputTarget::ControllerFallbackToSpeaker" },
				{ "ControllerFallbackToSpeaker.ToolTip", "Sound plays on the controller if present. If not present, it plays from speakers." },
				{ "ModuleRelativePath", "Classes/Sound/AudioOutputTarget.h" },
				{ "Speaker.Name", "EAudioOutputTarget::Speaker" },
				{ "Speaker.ToolTip", "Sound plays only from speakers." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"EAudioOutputTarget",
				"EAudioOutputTarget::Type",
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
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
