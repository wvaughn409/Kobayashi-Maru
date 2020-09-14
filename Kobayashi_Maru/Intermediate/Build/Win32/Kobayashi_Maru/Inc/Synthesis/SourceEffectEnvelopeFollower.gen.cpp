// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Synthesis/Classes/SourceEffects/SourceEffectEnvelopeFollower.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSourceEffectEnvelopeFollower() {}
// Cross Module References
	SYNTHESIS_API UFunction* Z_Construct_UDelegateFunction_Synthesis_OnEnvelopeFollowerUpdate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_Synthesis();
	SYNTHESIS_API UEnum* Z_Construct_UEnum_Synthesis_EEnvelopeFollowerPeakMode();
	SYNTHESIS_API UScriptStruct* Z_Construct_UScriptStruct_FSourceEffectEnvelopeFollowerSettings();
	SYNTHESIS_API UClass* Z_Construct_UClass_UEnvelopeFollowerListener_NoRegister();
	SYNTHESIS_API UClass* Z_Construct_UClass_UEnvelopeFollowerListener();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	SYNTHESIS_API UClass* Z_Construct_UClass_USourceEffectEnvelopeFollowerPreset_NoRegister();
	SYNTHESIS_API UClass* Z_Construct_UClass_USourceEffectEnvelopeFollowerPreset();
	ENGINE_API UClass* Z_Construct_UClass_USoundEffectSourcePreset();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_Synthesis_OnEnvelopeFollowerUpdate__DelegateSignature_Statics
	{
		struct _Script_Synthesis_eventOnEnvelopeFollowerUpdate_Parms
		{
			float EnvelopeValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EnvelopeValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_Synthesis_OnEnvelopeFollowerUpdate__DelegateSignature_Statics::NewProp_EnvelopeValue = { "EnvelopeValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Synthesis_eventOnEnvelopeFollowerUpdate_Parms, EnvelopeValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Synthesis_OnEnvelopeFollowerUpdate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Synthesis_OnEnvelopeFollowerUpdate__DelegateSignature_Statics::NewProp_EnvelopeValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Synthesis_OnEnvelopeFollowerUpdate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectEnvelopeFollower.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Synthesis_OnEnvelopeFollowerUpdate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Synthesis, nullptr, "OnEnvelopeFollowerUpdate__DelegateSignature", nullptr, nullptr, sizeof(_Script_Synthesis_eventOnEnvelopeFollowerUpdate_Parms), Z_Construct_UDelegateFunction_Synthesis_OnEnvelopeFollowerUpdate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Synthesis_OnEnvelopeFollowerUpdate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Synthesis_OnEnvelopeFollowerUpdate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Synthesis_OnEnvelopeFollowerUpdate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Synthesis_OnEnvelopeFollowerUpdate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_Synthesis_OnEnvelopeFollowerUpdate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	static UEnum* EEnvelopeFollowerPeakMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Synthesis_EEnvelopeFollowerPeakMode, Z_Construct_UPackage__Script_Synthesis(), TEXT("EEnvelopeFollowerPeakMode"));
		}
		return Singleton;
	}
	template<> SYNTHESIS_API UEnum* StaticEnum<EEnvelopeFollowerPeakMode>()
	{
		return EEnvelopeFollowerPeakMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EEnvelopeFollowerPeakMode(EEnvelopeFollowerPeakMode_StaticEnum, TEXT("/Script/Synthesis"), TEXT("EEnvelopeFollowerPeakMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Synthesis_EEnvelopeFollowerPeakMode_Hash() { return 546974378U; }
	UEnum* Z_Construct_UEnum_Synthesis_EEnvelopeFollowerPeakMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Synthesis();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EEnvelopeFollowerPeakMode"), 0, Get_Z_Construct_UEnum_Synthesis_EEnvelopeFollowerPeakMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EEnvelopeFollowerPeakMode::MeanSquared", (int64)EEnvelopeFollowerPeakMode::MeanSquared },
				{ "EEnvelopeFollowerPeakMode::RootMeanSquared", (int64)EEnvelopeFollowerPeakMode::RootMeanSquared },
				{ "EEnvelopeFollowerPeakMode::Peak", (int64)EEnvelopeFollowerPeakMode::Peak },
				{ "EEnvelopeFollowerPeakMode::Count", (int64)EEnvelopeFollowerPeakMode::Count },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Count.Hidden", "" },
				{ "Count.Name", "EEnvelopeFollowerPeakMode::Count" },
				{ "MeanSquared.Name", "EEnvelopeFollowerPeakMode::MeanSquared" },
				{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectEnvelopeFollower.h" },
				{ "Peak.Name", "EEnvelopeFollowerPeakMode::Peak" },
				{ "RootMeanSquared.Name", "EEnvelopeFollowerPeakMode::RootMeanSquared" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Synthesis,
				nullptr,
				"EEnvelopeFollowerPeakMode",
				"EEnvelopeFollowerPeakMode",
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
class UScriptStruct* FSourceEffectEnvelopeFollowerSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SYNTHESIS_API uint32 Get_Z_Construct_UScriptStruct_FSourceEffectEnvelopeFollowerSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSourceEffectEnvelopeFollowerSettings, Z_Construct_UPackage__Script_Synthesis(), TEXT("SourceEffectEnvelopeFollowerSettings"), sizeof(FSourceEffectEnvelopeFollowerSettings), Get_Z_Construct_UScriptStruct_FSourceEffectEnvelopeFollowerSettings_Hash());
	}
	return Singleton;
}
template<> SYNTHESIS_API UScriptStruct* StaticStruct<FSourceEffectEnvelopeFollowerSettings>()
{
	return FSourceEffectEnvelopeFollowerSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSourceEffectEnvelopeFollowerSettings(FSourceEffectEnvelopeFollowerSettings::StaticStruct, TEXT("/Script/Synthesis"), TEXT("SourceEffectEnvelopeFollowerSettings"), false, nullptr, nullptr);
static struct FScriptStruct_Synthesis_StaticRegisterNativesFSourceEffectEnvelopeFollowerSettings
{
	FScriptStruct_Synthesis_StaticRegisterNativesFSourceEffectEnvelopeFollowerSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SourceEffectEnvelopeFollowerSettings")),new UScriptStruct::TCppStructOps<FSourceEffectEnvelopeFollowerSettings>);
	}
} ScriptStruct_Synthesis_StaticRegisterNativesFSourceEffectEnvelopeFollowerSettings;
	struct Z_Construct_UScriptStruct_FSourceEffectEnvelopeFollowerSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsAnalogMode_MetaData[];
#endif
		static void NewProp_bIsAnalogMode_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsAnalogMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PeakMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PeakMode;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PeakMode_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReleaseTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReleaseTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttackTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AttackTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSourceEffectEnvelopeFollowerSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectEnvelopeFollower.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSourceEffectEnvelopeFollowerSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSourceEffectEnvelopeFollowerSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSourceEffectEnvelopeFollowerSettings_Statics::NewProp_bIsAnalogMode_MetaData[] = {
		{ "Category", "SourceEffect|Preset" },
		{ "Comment", "// Whether or not the envelope follower is in analog mode\n" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectEnvelopeFollower.h" },
		{ "ToolTip", "Whether or not the envelope follower is in analog mode" },
	};
#endif
	void Z_Construct_UScriptStruct_FSourceEffectEnvelopeFollowerSettings_Statics::NewProp_bIsAnalogMode_SetBit(void* Obj)
	{
		((FSourceEffectEnvelopeFollowerSettings*)Obj)->bIsAnalogMode = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSourceEffectEnvelopeFollowerSettings_Statics::NewProp_bIsAnalogMode = { "bIsAnalogMode", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSourceEffectEnvelopeFollowerSettings), &Z_Construct_UScriptStruct_FSourceEffectEnvelopeFollowerSettings_Statics::NewProp_bIsAnalogMode_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSourceEffectEnvelopeFollowerSettings_Statics::NewProp_bIsAnalogMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectEnvelopeFollowerSettings_Statics::NewProp_bIsAnalogMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSourceEffectEnvelopeFollowerSettings_Statics::NewProp_PeakMode_MetaData[] = {
		{ "Category", "SourceEffect|Preset" },
		{ "Comment", "// The peak mode of the envelope follower\n" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectEnvelopeFollower.h" },
		{ "ToolTip", "The peak mode of the envelope follower" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSourceEffectEnvelopeFollowerSettings_Statics::NewProp_PeakMode = { "PeakMode", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSourceEffectEnvelopeFollowerSettings, PeakMode), Z_Construct_UEnum_Synthesis_EEnvelopeFollowerPeakMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FSourceEffectEnvelopeFollowerSettings_Statics::NewProp_PeakMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectEnvelopeFollowerSettings_Statics::NewProp_PeakMode_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSourceEffectEnvelopeFollowerSettings_Statics::NewProp_PeakMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSourceEffectEnvelopeFollowerSettings_Statics::NewProp_ReleaseTime_MetaData[] = {
		{ "Category", "SourceEffect|Preset" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// The release time of the envelope follower in milliseconds\n" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectEnvelopeFollower.h" },
		{ "ToolTip", "The release time of the envelope follower in milliseconds" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSourceEffectEnvelopeFollowerSettings_Statics::NewProp_ReleaseTime = { "ReleaseTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSourceEffectEnvelopeFollowerSettings, ReleaseTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FSourceEffectEnvelopeFollowerSettings_Statics::NewProp_ReleaseTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectEnvelopeFollowerSettings_Statics::NewProp_ReleaseTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSourceEffectEnvelopeFollowerSettings_Statics::NewProp_AttackTime_MetaData[] = {
		{ "Category", "SourceEffect|Preset" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// The attack time of the envelope follower in milliseconds\n" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectEnvelopeFollower.h" },
		{ "ToolTip", "The attack time of the envelope follower in milliseconds" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSourceEffectEnvelopeFollowerSettings_Statics::NewProp_AttackTime = { "AttackTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSourceEffectEnvelopeFollowerSettings, AttackTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FSourceEffectEnvelopeFollowerSettings_Statics::NewProp_AttackTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectEnvelopeFollowerSettings_Statics::NewProp_AttackTime_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSourceEffectEnvelopeFollowerSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectEnvelopeFollowerSettings_Statics::NewProp_bIsAnalogMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectEnvelopeFollowerSettings_Statics::NewProp_PeakMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectEnvelopeFollowerSettings_Statics::NewProp_PeakMode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectEnvelopeFollowerSettings_Statics::NewProp_ReleaseTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectEnvelopeFollowerSettings_Statics::NewProp_AttackTime,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSourceEffectEnvelopeFollowerSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Synthesis,
		nullptr,
		&NewStructOps,
		"SourceEffectEnvelopeFollowerSettings",
		sizeof(FSourceEffectEnvelopeFollowerSettings),
		alignof(FSourceEffectEnvelopeFollowerSettings),
		Z_Construct_UScriptStruct_FSourceEffectEnvelopeFollowerSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectEnvelopeFollowerSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSourceEffectEnvelopeFollowerSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectEnvelopeFollowerSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSourceEffectEnvelopeFollowerSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSourceEffectEnvelopeFollowerSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Synthesis();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SourceEffectEnvelopeFollowerSettings"), sizeof(FSourceEffectEnvelopeFollowerSettings), Get_Z_Construct_UScriptStruct_FSourceEffectEnvelopeFollowerSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSourceEffectEnvelopeFollowerSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSourceEffectEnvelopeFollowerSettings_Hash() { return 2430600384U; }
	void UEnvelopeFollowerListener::StaticRegisterNativesUEnvelopeFollowerListener()
	{
	}
	UClass* Z_Construct_UClass_UEnvelopeFollowerListener_NoRegister()
	{
		return UEnvelopeFollowerListener::StaticClass();
	}
	struct Z_Construct_UClass_UEnvelopeFollowerListener_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnEnvelopeFollowerUpdate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnEnvelopeFollowerUpdate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEnvelopeFollowerListener_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Synthesis,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvelopeFollowerListener_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Synth" },
		{ "HideCategories", "Object ActorComponent Physics Rendering Mobility LOD" },
		{ "IncludePath", "SourceEffects/SourceEffectEnvelopeFollower.h" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectEnvelopeFollower.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvelopeFollowerListener_Statics::NewProp_OnEnvelopeFollowerUpdate_MetaData[] = {
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectEnvelopeFollower.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEnvelopeFollowerListener_Statics::NewProp_OnEnvelopeFollowerUpdate = { "OnEnvelopeFollowerUpdate", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEnvelopeFollowerListener, OnEnvelopeFollowerUpdate), Z_Construct_UDelegateFunction_Synthesis_OnEnvelopeFollowerUpdate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UEnvelopeFollowerListener_Statics::NewProp_OnEnvelopeFollowerUpdate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnvelopeFollowerListener_Statics::NewProp_OnEnvelopeFollowerUpdate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEnvelopeFollowerListener_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvelopeFollowerListener_Statics::NewProp_OnEnvelopeFollowerUpdate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEnvelopeFollowerListener_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEnvelopeFollowerListener>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEnvelopeFollowerListener_Statics::ClassParams = {
		&UEnvelopeFollowerListener::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UEnvelopeFollowerListener_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UEnvelopeFollowerListener_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UEnvelopeFollowerListener_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEnvelopeFollowerListener_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEnvelopeFollowerListener()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEnvelopeFollowerListener_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEnvelopeFollowerListener, 2673417653);
	template<> SYNTHESIS_API UClass* StaticClass<UEnvelopeFollowerListener>()
	{
		return UEnvelopeFollowerListener::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEnvelopeFollowerListener(Z_Construct_UClass_UEnvelopeFollowerListener, &UEnvelopeFollowerListener::StaticClass, TEXT("/Script/Synthesis"), TEXT("UEnvelopeFollowerListener"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEnvelopeFollowerListener);
	DEFINE_FUNCTION(USourceEffectEnvelopeFollowerPreset::execUnregisterEnvelopeFollowerListener)
	{
		P_GET_OBJECT(UEnvelopeFollowerListener,Z_Param_EnvelopeFollowerListener);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UnregisterEnvelopeFollowerListener(Z_Param_EnvelopeFollowerListener);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USourceEffectEnvelopeFollowerPreset::execRegisterEnvelopeFollowerListener)
	{
		P_GET_OBJECT(UEnvelopeFollowerListener,Z_Param_EnvelopeFollowerListener);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RegisterEnvelopeFollowerListener(Z_Param_EnvelopeFollowerListener);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USourceEffectEnvelopeFollowerPreset::execSetSettings)
	{
		P_GET_STRUCT_REF(FSourceEffectEnvelopeFollowerSettings,Z_Param_Out_InSettings);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSettings(Z_Param_Out_InSettings);
		P_NATIVE_END;
	}
	void USourceEffectEnvelopeFollowerPreset::StaticRegisterNativesUSourceEffectEnvelopeFollowerPreset()
	{
		UClass* Class = USourceEffectEnvelopeFollowerPreset::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "RegisterEnvelopeFollowerListener", &USourceEffectEnvelopeFollowerPreset::execRegisterEnvelopeFollowerListener },
			{ "SetSettings", &USourceEffectEnvelopeFollowerPreset::execSetSettings },
			{ "UnregisterEnvelopeFollowerListener", &USourceEffectEnvelopeFollowerPreset::execUnregisterEnvelopeFollowerListener },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USourceEffectEnvelopeFollowerPreset_RegisterEnvelopeFollowerListener_Statics
	{
		struct SourceEffectEnvelopeFollowerPreset_eventRegisterEnvelopeFollowerListener_Parms
		{
			UEnvelopeFollowerListener* EnvelopeFollowerListener;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnvelopeFollowerListener_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EnvelopeFollowerListener;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USourceEffectEnvelopeFollowerPreset_RegisterEnvelopeFollowerListener_Statics::NewProp_EnvelopeFollowerListener_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USourceEffectEnvelopeFollowerPreset_RegisterEnvelopeFollowerListener_Statics::NewProp_EnvelopeFollowerListener = { "EnvelopeFollowerListener", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SourceEffectEnvelopeFollowerPreset_eventRegisterEnvelopeFollowerListener_Parms, EnvelopeFollowerListener), Z_Construct_UClass_UEnvelopeFollowerListener_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USourceEffectEnvelopeFollowerPreset_RegisterEnvelopeFollowerListener_Statics::NewProp_EnvelopeFollowerListener_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectEnvelopeFollowerPreset_RegisterEnvelopeFollowerListener_Statics::NewProp_EnvelopeFollowerListener_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USourceEffectEnvelopeFollowerPreset_RegisterEnvelopeFollowerListener_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceEffectEnvelopeFollowerPreset_RegisterEnvelopeFollowerListener_Statics::NewProp_EnvelopeFollowerListener,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USourceEffectEnvelopeFollowerPreset_RegisterEnvelopeFollowerListener_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Effects" },
		{ "Comment", "/** Adds a submix effect preset to the master submix. */" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectEnvelopeFollower.h" },
		{ "ToolTip", "Adds a submix effect preset to the master submix." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USourceEffectEnvelopeFollowerPreset_RegisterEnvelopeFollowerListener_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USourceEffectEnvelopeFollowerPreset, nullptr, "RegisterEnvelopeFollowerListener", nullptr, nullptr, sizeof(SourceEffectEnvelopeFollowerPreset_eventRegisterEnvelopeFollowerListener_Parms), Z_Construct_UFunction_USourceEffectEnvelopeFollowerPreset_RegisterEnvelopeFollowerListener_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectEnvelopeFollowerPreset_RegisterEnvelopeFollowerListener_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USourceEffectEnvelopeFollowerPreset_RegisterEnvelopeFollowerListener_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectEnvelopeFollowerPreset_RegisterEnvelopeFollowerListener_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USourceEffectEnvelopeFollowerPreset_RegisterEnvelopeFollowerListener()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USourceEffectEnvelopeFollowerPreset_RegisterEnvelopeFollowerListener_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USourceEffectEnvelopeFollowerPreset_SetSettings_Statics
	{
		struct SourceEffectEnvelopeFollowerPreset_eventSetSettings_Parms
		{
			FSourceEffectEnvelopeFollowerSettings InSettings;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InSettings;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USourceEffectEnvelopeFollowerPreset_SetSettings_Statics::NewProp_InSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USourceEffectEnvelopeFollowerPreset_SetSettings_Statics::NewProp_InSettings = { "InSettings", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SourceEffectEnvelopeFollowerPreset_eventSetSettings_Parms, InSettings), Z_Construct_UScriptStruct_FSourceEffectEnvelopeFollowerSettings, METADATA_PARAMS(Z_Construct_UFunction_USourceEffectEnvelopeFollowerPreset_SetSettings_Statics::NewProp_InSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectEnvelopeFollowerPreset_SetSettings_Statics::NewProp_InSettings_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USourceEffectEnvelopeFollowerPreset_SetSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceEffectEnvelopeFollowerPreset_SetSettings_Statics::NewProp_InSettings,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USourceEffectEnvelopeFollowerPreset_SetSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Effects" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectEnvelopeFollower.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USourceEffectEnvelopeFollowerPreset_SetSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USourceEffectEnvelopeFollowerPreset, nullptr, "SetSettings", nullptr, nullptr, sizeof(SourceEffectEnvelopeFollowerPreset_eventSetSettings_Parms), Z_Construct_UFunction_USourceEffectEnvelopeFollowerPreset_SetSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectEnvelopeFollowerPreset_SetSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USourceEffectEnvelopeFollowerPreset_SetSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectEnvelopeFollowerPreset_SetSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USourceEffectEnvelopeFollowerPreset_SetSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USourceEffectEnvelopeFollowerPreset_SetSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USourceEffectEnvelopeFollowerPreset_UnregisterEnvelopeFollowerListener_Statics
	{
		struct SourceEffectEnvelopeFollowerPreset_eventUnregisterEnvelopeFollowerListener_Parms
		{
			UEnvelopeFollowerListener* EnvelopeFollowerListener;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnvelopeFollowerListener_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EnvelopeFollowerListener;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USourceEffectEnvelopeFollowerPreset_UnregisterEnvelopeFollowerListener_Statics::NewProp_EnvelopeFollowerListener_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USourceEffectEnvelopeFollowerPreset_UnregisterEnvelopeFollowerListener_Statics::NewProp_EnvelopeFollowerListener = { "EnvelopeFollowerListener", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SourceEffectEnvelopeFollowerPreset_eventUnregisterEnvelopeFollowerListener_Parms, EnvelopeFollowerListener), Z_Construct_UClass_UEnvelopeFollowerListener_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USourceEffectEnvelopeFollowerPreset_UnregisterEnvelopeFollowerListener_Statics::NewProp_EnvelopeFollowerListener_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectEnvelopeFollowerPreset_UnregisterEnvelopeFollowerListener_Statics::NewProp_EnvelopeFollowerListener_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USourceEffectEnvelopeFollowerPreset_UnregisterEnvelopeFollowerListener_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceEffectEnvelopeFollowerPreset_UnregisterEnvelopeFollowerListener_Statics::NewProp_EnvelopeFollowerListener,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USourceEffectEnvelopeFollowerPreset_UnregisterEnvelopeFollowerListener_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Effects" },
		{ "Comment", "/** Adds a submix effect preset to the master submix. */" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectEnvelopeFollower.h" },
		{ "ToolTip", "Adds a submix effect preset to the master submix." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USourceEffectEnvelopeFollowerPreset_UnregisterEnvelopeFollowerListener_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USourceEffectEnvelopeFollowerPreset, nullptr, "UnregisterEnvelopeFollowerListener", nullptr, nullptr, sizeof(SourceEffectEnvelopeFollowerPreset_eventUnregisterEnvelopeFollowerListener_Parms), Z_Construct_UFunction_USourceEffectEnvelopeFollowerPreset_UnregisterEnvelopeFollowerListener_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectEnvelopeFollowerPreset_UnregisterEnvelopeFollowerListener_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USourceEffectEnvelopeFollowerPreset_UnregisterEnvelopeFollowerListener_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectEnvelopeFollowerPreset_UnregisterEnvelopeFollowerListener_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USourceEffectEnvelopeFollowerPreset_UnregisterEnvelopeFollowerListener()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USourceEffectEnvelopeFollowerPreset_UnregisterEnvelopeFollowerListener_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USourceEffectEnvelopeFollowerPreset_NoRegister()
	{
		return USourceEffectEnvelopeFollowerPreset::StaticClass();
	}
	struct Z_Construct_UClass_USourceEffectEnvelopeFollowerPreset_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Settings;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USourceEffectEnvelopeFollowerPreset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USoundEffectSourcePreset,
		(UObject* (*)())Z_Construct_UPackage__Script_Synthesis,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USourceEffectEnvelopeFollowerPreset_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USourceEffectEnvelopeFollowerPreset_RegisterEnvelopeFollowerListener, "RegisterEnvelopeFollowerListener" }, // 1735008665
		{ &Z_Construct_UFunction_USourceEffectEnvelopeFollowerPreset_SetSettings, "SetSettings" }, // 3041162847
		{ &Z_Construct_UFunction_USourceEffectEnvelopeFollowerPreset_UnregisterEnvelopeFollowerListener, "UnregisterEnvelopeFollowerListener" }, // 3443350105
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USourceEffectEnvelopeFollowerPreset_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "AudioSourceEffect" },
		{ "IncludePath", "SourceEffects/SourceEffectEnvelopeFollower.h" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectEnvelopeFollower.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USourceEffectEnvelopeFollowerPreset_Statics::NewProp_Settings_MetaData[] = {
		{ "Category", "Audio|Effects" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectEnvelopeFollower.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USourceEffectEnvelopeFollowerPreset_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USourceEffectEnvelopeFollowerPreset, Settings), Z_Construct_UScriptStruct_FSourceEffectEnvelopeFollowerSettings, METADATA_PARAMS(Z_Construct_UClass_USourceEffectEnvelopeFollowerPreset_Statics::NewProp_Settings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USourceEffectEnvelopeFollowerPreset_Statics::NewProp_Settings_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USourceEffectEnvelopeFollowerPreset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USourceEffectEnvelopeFollowerPreset_Statics::NewProp_Settings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USourceEffectEnvelopeFollowerPreset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USourceEffectEnvelopeFollowerPreset>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USourceEffectEnvelopeFollowerPreset_Statics::ClassParams = {
		&USourceEffectEnvelopeFollowerPreset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USourceEffectEnvelopeFollowerPreset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USourceEffectEnvelopeFollowerPreset_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USourceEffectEnvelopeFollowerPreset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USourceEffectEnvelopeFollowerPreset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USourceEffectEnvelopeFollowerPreset()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USourceEffectEnvelopeFollowerPreset_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USourceEffectEnvelopeFollowerPreset, 2259522182);
	template<> SYNTHESIS_API UClass* StaticClass<USourceEffectEnvelopeFollowerPreset>()
	{
		return USourceEffectEnvelopeFollowerPreset::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USourceEffectEnvelopeFollowerPreset(Z_Construct_UClass_USourceEffectEnvelopeFollowerPreset, &USourceEffectEnvelopeFollowerPreset::StaticClass, TEXT("/Script/Synthesis"), TEXT("USourceEffectEnvelopeFollowerPreset"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USourceEffectEnvelopeFollowerPreset);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
