// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Sound/SoundSubmix.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoundSubmix() {}
// Cross Module References
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_OnSubmixEnvelope__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_OnSubmixRecordedFileDone__DelegateSignature();
	ENGINE_API UClass* Z_Construct_UClass_USoundWave_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundSubmixBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundSubmixBase();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_USoundSubmixWithParentBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundSubmixWithParentBase();
	ENGINE_API UClass* Z_Construct_UClass_USoundSubmix_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundSubmix();
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_OnSubmixEnvelopeBP__DelegateSignature();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAudioRecordingExportType();
	AUDIOEXTENSIONS_API UClass* Z_Construct_UClass_USoundfieldEncodingSettingsBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundEffectSubmixPreset_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundfieldSubmix_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundfieldSubmix();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	AUDIOEXTENSIONS_API UClass* Z_Construct_UClass_USoundfieldEffectBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UEndpointSubmix_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UEndpointSubmix();
	AUDIOEXTENSIONS_API UClass* Z_Construct_UClass_UAudioEndpointSettingsBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundfieldEndpointSubmix_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundfieldEndpointSubmix();
	AUDIOEXTENSIONS_API UClass* Z_Construct_UClass_USoundfieldEndpointSettingsBase_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_Engine_OnSubmixEnvelope__DelegateSignature_Statics
	{
		struct _Script_Engine_eventOnSubmixEnvelope_Parms
		{
			TArray<float> Envelope;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Envelope_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Envelope;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Envelope_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Engine_OnSubmixEnvelope__DelegateSignature_Statics::NewProp_Envelope_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_Engine_OnSubmixEnvelope__DelegateSignature_Statics::NewProp_Envelope = { "Envelope", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Engine_eventOnSubmixEnvelope_Parms, Envelope), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UDelegateFunction_Engine_OnSubmixEnvelope__DelegateSignature_Statics::NewProp_Envelope_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_OnSubmixEnvelope__DelegateSignature_Statics::NewProp_Envelope_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_Engine_OnSubmixEnvelope__DelegateSignature_Statics::NewProp_Envelope_Inner = { "Envelope", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Engine_OnSubmixEnvelope__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Engine_OnSubmixEnvelope__DelegateSignature_Statics::NewProp_Envelope,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Engine_OnSubmixEnvelope__DelegateSignature_Statics::NewProp_Envelope_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Engine_OnSubmixEnvelope__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n* Called when a new submix envelope value is generated on the given audio device id (different for multiple PIE). Array is an envelope value for each channel.\n*/" },
		{ "ModuleRelativePath", "Classes/Sound/SoundSubmix.h" },
		{ "ToolTip", "Called when a new submix envelope value is generated on the given audio device id (different for multiple PIE). Array is an envelope value for each channel." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Engine_OnSubmixEnvelope__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Engine, nullptr, "OnSubmixEnvelope__DelegateSignature", nullptr, nullptr, sizeof(_Script_Engine_eventOnSubmixEnvelope_Parms), Z_Construct_UDelegateFunction_Engine_OnSubmixEnvelope__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_OnSubmixEnvelope__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Engine_OnSubmixEnvelope__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_OnSubmixEnvelope__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Engine_OnSubmixEnvelope__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_Engine_OnSubmixEnvelope__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_Engine_OnSubmixRecordedFileDone__DelegateSignature_Statics
	{
		struct _Script_Engine_eventOnSubmixRecordedFileDone_Parms
		{
			const USoundWave* ResultingSoundWave;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResultingSoundWave_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ResultingSoundWave;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Engine_OnSubmixRecordedFileDone__DelegateSignature_Statics::NewProp_ResultingSoundWave_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_Engine_OnSubmixRecordedFileDone__DelegateSignature_Statics::NewProp_ResultingSoundWave = { "ResultingSoundWave", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Engine_eventOnSubmixRecordedFileDone_Parms, ResultingSoundWave), Z_Construct_UClass_USoundWave_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_Engine_OnSubmixRecordedFileDone__DelegateSignature_Statics::NewProp_ResultingSoundWave_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_OnSubmixRecordedFileDone__DelegateSignature_Statics::NewProp_ResultingSoundWave_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Engine_OnSubmixRecordedFileDone__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Engine_OnSubmixRecordedFileDone__DelegateSignature_Statics::NewProp_ResultingSoundWave,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Engine_OnSubmixRecordedFileDone__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n* Called when a recorded file has finished writing to disk.\n*\n*/" },
		{ "ModuleRelativePath", "Classes/Sound/SoundSubmix.h" },
		{ "ToolTip", "Called when a recorded file has finished writing to disk." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Engine_OnSubmixRecordedFileDone__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Engine, nullptr, "OnSubmixRecordedFileDone__DelegateSignature", nullptr, nullptr, sizeof(_Script_Engine_eventOnSubmixRecordedFileDone_Parms), Z_Construct_UDelegateFunction_Engine_OnSubmixRecordedFileDone__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_OnSubmixRecordedFileDone__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Engine_OnSubmixRecordedFileDone__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_OnSubmixRecordedFileDone__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Engine_OnSubmixRecordedFileDone__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_Engine_OnSubmixRecordedFileDone__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	void USoundSubmixBase::StaticRegisterNativesUSoundSubmixBase()
	{
	}
	UClass* Z_Construct_UClass_USoundSubmixBase_NoRegister()
	{
		return USoundSubmixBase::StaticClass();
	}
	struct Z_Construct_UClass_USoundSubmixBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChildSubmixes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ChildSubmixes;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ChildSubmixes_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USoundSubmixBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundSubmixBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Sound/SoundSubmix.h" },
		{ "ModuleRelativePath", "Classes/Sound/SoundSubmix.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundSubmixBase_Statics::NewProp_ChildSubmixes_MetaData[] = {
		{ "Category", "SoundSubmix" },
		{ "Comment", "// Child submixes to this sound mix\n" },
		{ "ModuleRelativePath", "Classes/Sound/SoundSubmix.h" },
		{ "ToolTip", "Child submixes to this sound mix" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USoundSubmixBase_Statics::NewProp_ChildSubmixes = { "ChildSubmixes", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USoundSubmixBase, ChildSubmixes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USoundSubmixBase_Statics::NewProp_ChildSubmixes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundSubmixBase_Statics::NewProp_ChildSubmixes_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USoundSubmixBase_Statics::NewProp_ChildSubmixes_Inner = { "ChildSubmixes", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USoundSubmixBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USoundSubmixBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundSubmixBase_Statics::NewProp_ChildSubmixes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundSubmixBase_Statics::NewProp_ChildSubmixes_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USoundSubmixBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USoundSubmixBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USoundSubmixBase_Statics::ClassParams = {
		&USoundSubmixBase::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USoundSubmixBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USoundSubmixBase_Statics::PropPointers),
		0,
		0x001010A1u,
		METADATA_PARAMS(Z_Construct_UClass_USoundSubmixBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USoundSubmixBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USoundSubmixBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USoundSubmixBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USoundSubmixBase, 2278176028);
	template<> ENGINE_API UClass* StaticClass<USoundSubmixBase>()
	{
		return USoundSubmixBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USoundSubmixBase(Z_Construct_UClass_USoundSubmixBase, &USoundSubmixBase::StaticClass, TEXT("/Script/Engine"), TEXT("USoundSubmixBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USoundSubmixBase);
	void USoundSubmixWithParentBase::StaticRegisterNativesUSoundSubmixWithParentBase()
	{
	}
	UClass* Z_Construct_UClass_USoundSubmixWithParentBase_NoRegister()
	{
		return USoundSubmixWithParentBase::StaticClass();
	}
	struct Z_Construct_UClass_USoundSubmixWithParentBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParentSubmix_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ParentSubmix;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USoundSubmixWithParentBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USoundSubmixBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundSubmixWithParentBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * This submix class can be derived from for submixes that output to a parent submix.\n */" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Sound/SoundSubmix.h" },
		{ "ModuleRelativePath", "Classes/Sound/SoundSubmix.h" },
		{ "ToolTip", "This submix class can be derived from for submixes that output to a parent submix." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundSubmixWithParentBase_Statics::NewProp_ParentSubmix_MetaData[] = {
		{ "Category", "SoundSubmix" },
		{ "ModuleRelativePath", "Classes/Sound/SoundSubmix.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USoundSubmixWithParentBase_Statics::NewProp_ParentSubmix = { "ParentSubmix", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USoundSubmixWithParentBase, ParentSubmix), Z_Construct_UClass_USoundSubmixBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USoundSubmixWithParentBase_Statics::NewProp_ParentSubmix_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundSubmixWithParentBase_Statics::NewProp_ParentSubmix_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USoundSubmixWithParentBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundSubmixWithParentBase_Statics::NewProp_ParentSubmix,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USoundSubmixWithParentBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USoundSubmixWithParentBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USoundSubmixWithParentBase_Statics::ClassParams = {
		&USoundSubmixWithParentBase::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USoundSubmixWithParentBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USoundSubmixWithParentBase_Statics::PropPointers),
		0,
		0x001010A1u,
		METADATA_PARAMS(Z_Construct_UClass_USoundSubmixWithParentBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USoundSubmixWithParentBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USoundSubmixWithParentBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USoundSubmixWithParentBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USoundSubmixWithParentBase, 3317941181);
	template<> ENGINE_API UClass* StaticClass<USoundSubmixWithParentBase>()
	{
		return USoundSubmixWithParentBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USoundSubmixWithParentBase(Z_Construct_UClass_USoundSubmixWithParentBase, &USoundSubmixWithParentBase::StaticClass, TEXT("/Script/Engine"), TEXT("USoundSubmixWithParentBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USoundSubmixWithParentBase);
	DEFINE_FUNCTION(USoundSubmix::execSetSubmixOutputVolume)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InOutputVolume);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSubmixOutputVolume(Z_Param_WorldContextObject,Z_Param_InOutputVolume);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USoundSubmix::execAddEnvelopeFollowerDelegate)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSubmixEnvelopeBP);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddEnvelopeFollowerDelegate(Z_Param_WorldContextObject,FOnSubmixEnvelopeBP(Z_Param_Out_OnSubmixEnvelopeBP));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USoundSubmix::execStopEnvelopeFollowing)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopEnvelopeFollowing(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USoundSubmix::execStartEnvelopeFollowing)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartEnvelopeFollowing(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USoundSubmix::execStopRecordingOutput)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_ENUM(EAudioRecordingExportType,Z_Param_ExportType);
		P_GET_PROPERTY(FStrProperty,Z_Param_Name);
		P_GET_PROPERTY(FStrProperty,Z_Param_Path);
		P_GET_OBJECT(USoundWave,Z_Param_ExistingSoundWaveToOverwrite);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopRecordingOutput(Z_Param_WorldContextObject,EAudioRecordingExportType(Z_Param_ExportType),Z_Param_Name,Z_Param_Path,Z_Param_ExistingSoundWaveToOverwrite);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USoundSubmix::execStartRecordingOutput)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FFloatProperty,Z_Param_ExpectedDuration);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartRecordingOutput(Z_Param_WorldContextObject,Z_Param_ExpectedDuration);
		P_NATIVE_END;
	}
	void USoundSubmix::StaticRegisterNativesUSoundSubmix()
	{
		UClass* Class = USoundSubmix::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddEnvelopeFollowerDelegate", &USoundSubmix::execAddEnvelopeFollowerDelegate },
			{ "SetSubmixOutputVolume", &USoundSubmix::execSetSubmixOutputVolume },
			{ "StartEnvelopeFollowing", &USoundSubmix::execStartEnvelopeFollowing },
			{ "StartRecordingOutput", &USoundSubmix::execStartRecordingOutput },
			{ "StopEnvelopeFollowing", &USoundSubmix::execStopEnvelopeFollowing },
			{ "StopRecordingOutput", &USoundSubmix::execStopRecordingOutput },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USoundSubmix_AddEnvelopeFollowerDelegate_Statics
	{
		struct SoundSubmix_eventAddEnvelopeFollowerDelegate_Parms
		{
			const UObject* WorldContextObject;
			FScriptDelegate OnSubmixEnvelopeBP;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnSubmixEnvelopeBP_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnSubmixEnvelopeBP;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USoundSubmix_AddEnvelopeFollowerDelegate_Statics::NewProp_OnSubmixEnvelopeBP_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_USoundSubmix_AddEnvelopeFollowerDelegate_Statics::NewProp_OnSubmixEnvelopeBP = { "OnSubmixEnvelopeBP", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SoundSubmix_eventAddEnvelopeFollowerDelegate_Parms, OnSubmixEnvelopeBP), Z_Construct_UDelegateFunction_Engine_OnSubmixEnvelopeBP__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_USoundSubmix_AddEnvelopeFollowerDelegate_Statics::NewProp_OnSubmixEnvelopeBP_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundSubmix_AddEnvelopeFollowerDelegate_Statics::NewProp_OnSubmixEnvelopeBP_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USoundSubmix_AddEnvelopeFollowerDelegate_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USoundSubmix_AddEnvelopeFollowerDelegate_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SoundSubmix_eventAddEnvelopeFollowerDelegate_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USoundSubmix_AddEnvelopeFollowerDelegate_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundSubmix_AddEnvelopeFollowerDelegate_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USoundSubmix_AddEnvelopeFollowerDelegate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundSubmix_AddEnvelopeFollowerDelegate_Statics::NewProp_OnSubmixEnvelopeBP,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundSubmix_AddEnvelopeFollowerDelegate_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USoundSubmix_AddEnvelopeFollowerDelegate_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|EnvelopeFollowing" },
		{ "ModuleRelativePath", "Classes/Sound/SoundSubmix.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USoundSubmix_AddEnvelopeFollowerDelegate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USoundSubmix, nullptr, "AddEnvelopeFollowerDelegate", nullptr, nullptr, sizeof(SoundSubmix_eventAddEnvelopeFollowerDelegate_Parms), Z_Construct_UFunction_USoundSubmix_AddEnvelopeFollowerDelegate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundSubmix_AddEnvelopeFollowerDelegate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USoundSubmix_AddEnvelopeFollowerDelegate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundSubmix_AddEnvelopeFollowerDelegate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USoundSubmix_AddEnvelopeFollowerDelegate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USoundSubmix_AddEnvelopeFollowerDelegate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USoundSubmix_SetSubmixOutputVolume_Statics
	{
		struct SoundSubmix_eventSetSubmixOutputVolume_Parms
		{
			const UObject* WorldContextObject;
			float InOutputVolume;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InOutputVolume;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USoundSubmix_SetSubmixOutputVolume_Statics::NewProp_InOutputVolume = { "InOutputVolume", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SoundSubmix_eventSetSubmixOutputVolume_Parms, InOutputVolume), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USoundSubmix_SetSubmixOutputVolume_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USoundSubmix_SetSubmixOutputVolume_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SoundSubmix_eventSetSubmixOutputVolume_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USoundSubmix_SetSubmixOutputVolume_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundSubmix_SetSubmixOutputVolume_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USoundSubmix_SetSubmixOutputVolume_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundSubmix_SetSubmixOutputVolume_Statics::NewProp_InOutputVolume,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundSubmix_SetSubmixOutputVolume_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USoundSubmix_SetSubmixOutputVolume_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio" },
		{ "Comment", "/** Sets the output volume of the submix. This dynamic volume scales with the OutputVolume property of this submix. */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundSubmix.h" },
		{ "ToolTip", "Sets the output volume of the submix. This dynamic volume scales with the OutputVolume property of this submix." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USoundSubmix_SetSubmixOutputVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USoundSubmix, nullptr, "SetSubmixOutputVolume", nullptr, nullptr, sizeof(SoundSubmix_eventSetSubmixOutputVolume_Parms), Z_Construct_UFunction_USoundSubmix_SetSubmixOutputVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundSubmix_SetSubmixOutputVolume_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USoundSubmix_SetSubmixOutputVolume_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundSubmix_SetSubmixOutputVolume_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USoundSubmix_SetSubmixOutputVolume()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USoundSubmix_SetSubmixOutputVolume_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USoundSubmix_StartEnvelopeFollowing_Statics
	{
		struct SoundSubmix_eventStartEnvelopeFollowing_Parms
		{
			const UObject* WorldContextObject;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USoundSubmix_StartEnvelopeFollowing_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USoundSubmix_StartEnvelopeFollowing_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SoundSubmix_eventStartEnvelopeFollowing_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USoundSubmix_StartEnvelopeFollowing_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundSubmix_StartEnvelopeFollowing_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USoundSubmix_StartEnvelopeFollowing_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundSubmix_StartEnvelopeFollowing_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USoundSubmix_StartEnvelopeFollowing_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|EnvelopeFollowing" },
		{ "Comment", "// Start envelope following the submix output. Register with OnSubmixEnvelope to receive envelope follower data in BP.\n" },
		{ "ModuleRelativePath", "Classes/Sound/SoundSubmix.h" },
		{ "ToolTip", "Start envelope following the submix output. Register with OnSubmixEnvelope to receive envelope follower data in BP." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USoundSubmix_StartEnvelopeFollowing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USoundSubmix, nullptr, "StartEnvelopeFollowing", nullptr, nullptr, sizeof(SoundSubmix_eventStartEnvelopeFollowing_Parms), Z_Construct_UFunction_USoundSubmix_StartEnvelopeFollowing_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundSubmix_StartEnvelopeFollowing_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USoundSubmix_StartEnvelopeFollowing_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundSubmix_StartEnvelopeFollowing_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USoundSubmix_StartEnvelopeFollowing()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USoundSubmix_StartEnvelopeFollowing_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USoundSubmix_StartRecordingOutput_Statics
	{
		struct SoundSubmix_eventStartRecordingOutput_Parms
		{
			const UObject* WorldContextObject;
			float ExpectedDuration;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ExpectedDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USoundSubmix_StartRecordingOutput_Statics::NewProp_ExpectedDuration = { "ExpectedDuration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SoundSubmix_eventStartRecordingOutput_Parms, ExpectedDuration), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USoundSubmix_StartRecordingOutput_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USoundSubmix_StartRecordingOutput_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SoundSubmix_eventStartRecordingOutput_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USoundSubmix_StartRecordingOutput_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundSubmix_StartRecordingOutput_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USoundSubmix_StartRecordingOutput_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundSubmix_StartRecordingOutput_Statics::NewProp_ExpectedDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundSubmix_StartRecordingOutput_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USoundSubmix_StartRecordingOutput_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Bounce" },
		{ "Comment", "// Start recording the audio from this submix.\n" },
		{ "DisplayName", "Start Recording Submix Output" },
		{ "ModuleRelativePath", "Classes/Sound/SoundSubmix.h" },
		{ "ToolTip", "Start recording the audio from this submix." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USoundSubmix_StartRecordingOutput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USoundSubmix, nullptr, "StartRecordingOutput", nullptr, nullptr, sizeof(SoundSubmix_eventStartRecordingOutput_Parms), Z_Construct_UFunction_USoundSubmix_StartRecordingOutput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundSubmix_StartRecordingOutput_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USoundSubmix_StartRecordingOutput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundSubmix_StartRecordingOutput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USoundSubmix_StartRecordingOutput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USoundSubmix_StartRecordingOutput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USoundSubmix_StopEnvelopeFollowing_Statics
	{
		struct SoundSubmix_eventStopEnvelopeFollowing_Parms
		{
			const UObject* WorldContextObject;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USoundSubmix_StopEnvelopeFollowing_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USoundSubmix_StopEnvelopeFollowing_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SoundSubmix_eventStopEnvelopeFollowing_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USoundSubmix_StopEnvelopeFollowing_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundSubmix_StopEnvelopeFollowing_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USoundSubmix_StopEnvelopeFollowing_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundSubmix_StopEnvelopeFollowing_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USoundSubmix_StopEnvelopeFollowing_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|EnvelopeFollowing" },
		{ "Comment", "// Start envelope following the submix output. Register with OnSubmixEnvelope to receive envelope follower data in BP.\n" },
		{ "ModuleRelativePath", "Classes/Sound/SoundSubmix.h" },
		{ "ToolTip", "Start envelope following the submix output. Register with OnSubmixEnvelope to receive envelope follower data in BP." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USoundSubmix_StopEnvelopeFollowing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USoundSubmix, nullptr, "StopEnvelopeFollowing", nullptr, nullptr, sizeof(SoundSubmix_eventStopEnvelopeFollowing_Parms), Z_Construct_UFunction_USoundSubmix_StopEnvelopeFollowing_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundSubmix_StopEnvelopeFollowing_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USoundSubmix_StopEnvelopeFollowing_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundSubmix_StopEnvelopeFollowing_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USoundSubmix_StopEnvelopeFollowing()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USoundSubmix_StopEnvelopeFollowing_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USoundSubmix_StopRecordingOutput_Statics
	{
		struct SoundSubmix_eventStopRecordingOutput_Parms
		{
			const UObject* WorldContextObject;
			EAudioRecordingExportType ExportType;
			FString Name;
			FString Path;
			USoundWave* ExistingSoundWaveToOverwrite;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ExistingSoundWaveToOverwrite;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Path;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ExportType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ExportType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USoundSubmix_StopRecordingOutput_Statics::NewProp_ExistingSoundWaveToOverwrite = { "ExistingSoundWaveToOverwrite", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SoundSubmix_eventStopRecordingOutput_Parms, ExistingSoundWaveToOverwrite), Z_Construct_UClass_USoundWave_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USoundSubmix_StopRecordingOutput_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SoundSubmix_eventStopRecordingOutput_Parms, Path), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USoundSubmix_StopRecordingOutput_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USoundSubmix_StopRecordingOutput_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SoundSubmix_eventStopRecordingOutput_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_USoundSubmix_StopRecordingOutput_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundSubmix_StopRecordingOutput_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USoundSubmix_StopRecordingOutput_Statics::NewProp_ExportType = { "ExportType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SoundSubmix_eventStopRecordingOutput_Parms, ExportType), Z_Construct_UEnum_Engine_EAudioRecordingExportType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USoundSubmix_StopRecordingOutput_Statics::NewProp_ExportType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USoundSubmix_StopRecordingOutput_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USoundSubmix_StopRecordingOutput_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SoundSubmix_eventStopRecordingOutput_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USoundSubmix_StopRecordingOutput_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundSubmix_StopRecordingOutput_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USoundSubmix_StopRecordingOutput_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundSubmix_StopRecordingOutput_Statics::NewProp_ExistingSoundWaveToOverwrite,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundSubmix_StopRecordingOutput_Statics::NewProp_Path,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundSubmix_StopRecordingOutput_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundSubmix_StopRecordingOutput_Statics::NewProp_ExportType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundSubmix_StopRecordingOutput_Statics::NewProp_ExportType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundSubmix_StopRecordingOutput_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USoundSubmix_StopRecordingOutput_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Bounce" },
		{ "Comment", "// Finish recording the audio from this submix and export it as a wav file or a USoundWave.\n" },
		{ "CPP_Default_ExistingSoundWaveToOverwrite", "None" },
		{ "DisplayName", "Finish Recording Submix Output" },
		{ "ModuleRelativePath", "Classes/Sound/SoundSubmix.h" },
		{ "ToolTip", "Finish recording the audio from this submix and export it as a wav file or a USoundWave." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USoundSubmix_StopRecordingOutput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USoundSubmix, nullptr, "StopRecordingOutput", nullptr, nullptr, sizeof(SoundSubmix_eventStopRecordingOutput_Parms), Z_Construct_UFunction_USoundSubmix_StopRecordingOutput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundSubmix_StopRecordingOutput_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USoundSubmix_StopRecordingOutput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundSubmix_StopRecordingOutput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USoundSubmix_StopRecordingOutput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USoundSubmix_StopRecordingOutput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USoundSubmix_NoRegister()
	{
		return USoundSubmix::StaticClass();
	}
	struct Z_Construct_UClass_USoundSubmix_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnSubmixRecordedFileDone_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSubmixRecordedFileDone;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OutputVolume_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OutputVolume;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnvelopeFollowerReleaseTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_EnvelopeFollowerReleaseTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnvelopeFollowerAttackTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_EnvelopeFollowerAttackTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AmbisonicsPluginSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AmbisonicsPluginSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SubmixEffectChain_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SubmixEffectChain;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SubmixEffectChain_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bMuteWhenBackgrounded_MetaData[];
#endif
		static void NewProp_bMuteWhenBackgrounded_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMuteWhenBackgrounded;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USoundSubmix_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USoundSubmixWithParentBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USoundSubmix_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USoundSubmix_AddEnvelopeFollowerDelegate, "AddEnvelopeFollowerDelegate" }, // 1538251571
		{ &Z_Construct_UFunction_USoundSubmix_SetSubmixOutputVolume, "SetSubmixOutputVolume" }, // 3392835023
		{ &Z_Construct_UFunction_USoundSubmix_StartEnvelopeFollowing, "StartEnvelopeFollowing" }, // 1757938499
		{ &Z_Construct_UFunction_USoundSubmix_StartRecordingOutput, "StartRecordingOutput" }, // 2418591051
		{ &Z_Construct_UFunction_USoundSubmix_StopEnvelopeFollowing, "StopEnvelopeFollowing" }, // 740899491
		{ &Z_Construct_UFunction_USoundSubmix_StopRecordingOutput, "StopRecordingOutput" }, // 1271176345
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundSubmix_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Sound Submix class meant for applying an effect to the downmixed sum of multiple audio sources.\n */" },
		{ "DisplayName", "Effect Submix" },
		{ "HideCategories", "Object Object Object" },
		{ "IncludePath", "Sound/SoundSubmix.h" },
		{ "ModuleRelativePath", "Classes/Sound/SoundSubmix.h" },
		{ "ToolTip", "Sound Submix class meant for applying an effect to the downmixed sum of multiple audio sources." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundSubmix_Statics::NewProp_OnSubmixRecordedFileDone_MetaData[] = {
		{ "Comment", "// Blueprint delegate for when a recorded file is finished exporting.\n" },
		{ "ModuleRelativePath", "Classes/Sound/SoundSubmix.h" },
		{ "ToolTip", "Blueprint delegate for when a recorded file is finished exporting." },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USoundSubmix_Statics::NewProp_OnSubmixRecordedFileDone = { "OnSubmixRecordedFileDone", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USoundSubmix, OnSubmixRecordedFileDone), Z_Construct_UDelegateFunction_Engine_OnSubmixRecordedFileDone__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USoundSubmix_Statics::NewProp_OnSubmixRecordedFileDone_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundSubmix_Statics::NewProp_OnSubmixRecordedFileDone_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundSubmix_Statics::NewProp_OutputVolume_MetaData[] = {
		{ "Category", "SoundSubmix" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** The output volume of the submix. Applied after submix effects and analysis are performed. */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundSubmix.h" },
		{ "ToolTip", "The output volume of the submix. Applied after submix effects and analysis are performed." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USoundSubmix_Statics::NewProp_OutputVolume = { "OutputVolume", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USoundSubmix, OutputVolume), METADATA_PARAMS(Z_Construct_UClass_USoundSubmix_Statics::NewProp_OutputVolume_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundSubmix_Statics::NewProp_OutputVolume_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundSubmix_Statics::NewProp_EnvelopeFollowerReleaseTime_MetaData[] = {
		{ "Category", "EnvelopeFollower" },
		{ "ClampMin", "0" },
		{ "Comment", "/** The release time in milliseconds for the envelope follower. Delegate callbacks can be registered to get the envelope value of sounds played with this submix. */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundSubmix.h" },
		{ "ToolTip", "The release time in milliseconds for the envelope follower. Delegate callbacks can be registered to get the envelope value of sounds played with this submix." },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USoundSubmix_Statics::NewProp_EnvelopeFollowerReleaseTime = { "EnvelopeFollowerReleaseTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USoundSubmix, EnvelopeFollowerReleaseTime), METADATA_PARAMS(Z_Construct_UClass_USoundSubmix_Statics::NewProp_EnvelopeFollowerReleaseTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundSubmix_Statics::NewProp_EnvelopeFollowerReleaseTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundSubmix_Statics::NewProp_EnvelopeFollowerAttackTime_MetaData[] = {
		{ "Category", "EnvelopeFollower" },
		{ "ClampMin", "0" },
		{ "Comment", "/** The attack time in milliseconds for the envelope follower. Delegate callbacks can be registered to get the envelope value of sounds played with this submix. */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundSubmix.h" },
		{ "ToolTip", "The attack time in milliseconds for the envelope follower. Delegate callbacks can be registered to get the envelope value of sounds played with this submix." },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USoundSubmix_Statics::NewProp_EnvelopeFollowerAttackTime = { "EnvelopeFollowerAttackTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USoundSubmix, EnvelopeFollowerAttackTime), METADATA_PARAMS(Z_Construct_UClass_USoundSubmix_Statics::NewProp_EnvelopeFollowerAttackTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundSubmix_Statics::NewProp_EnvelopeFollowerAttackTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundSubmix_Statics::NewProp_AmbisonicsPluginSettings_MetaData[] = {
		{ "Category", "SoundSubmix" },
		{ "Comment", "/** Optional settings used by plugins which support ambisonics file playback. */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundSubmix.h" },
		{ "ToolTip", "Optional settings used by plugins which support ambisonics file playback." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USoundSubmix_Statics::NewProp_AmbisonicsPluginSettings = { "AmbisonicsPluginSettings", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USoundSubmix, AmbisonicsPluginSettings), Z_Construct_UClass_USoundfieldEncodingSettingsBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USoundSubmix_Statics::NewProp_AmbisonicsPluginSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundSubmix_Statics::NewProp_AmbisonicsPluginSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundSubmix_Statics::NewProp_SubmixEffectChain_MetaData[] = {
		{ "Category", "SoundSubmix" },
		{ "ModuleRelativePath", "Classes/Sound/SoundSubmix.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USoundSubmix_Statics::NewProp_SubmixEffectChain = { "SubmixEffectChain", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USoundSubmix, SubmixEffectChain), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USoundSubmix_Statics::NewProp_SubmixEffectChain_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundSubmix_Statics::NewProp_SubmixEffectChain_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USoundSubmix_Statics::NewProp_SubmixEffectChain_Inner = { "SubmixEffectChain", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USoundEffectSubmixPreset_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundSubmix_Statics::NewProp_bMuteWhenBackgrounded_MetaData[] = {
		{ "Category", "SoundSubmix" },
		{ "Comment", "/** Mute this submix when the application is muted or in the background. Used to prevent submix effect tails from continuing when tabbing out of application or if application is muted. */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundSubmix.h" },
		{ "ToolTip", "Mute this submix when the application is muted or in the background. Used to prevent submix effect tails from continuing when tabbing out of application or if application is muted." },
	};
#endif
	void Z_Construct_UClass_USoundSubmix_Statics::NewProp_bMuteWhenBackgrounded_SetBit(void* Obj)
	{
		((USoundSubmix*)Obj)->bMuteWhenBackgrounded = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USoundSubmix_Statics::NewProp_bMuteWhenBackgrounded = { "bMuteWhenBackgrounded", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USoundSubmix), &Z_Construct_UClass_USoundSubmix_Statics::NewProp_bMuteWhenBackgrounded_SetBit, METADATA_PARAMS(Z_Construct_UClass_USoundSubmix_Statics::NewProp_bMuteWhenBackgrounded_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundSubmix_Statics::NewProp_bMuteWhenBackgrounded_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USoundSubmix_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundSubmix_Statics::NewProp_OnSubmixRecordedFileDone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundSubmix_Statics::NewProp_OutputVolume,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundSubmix_Statics::NewProp_EnvelopeFollowerReleaseTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundSubmix_Statics::NewProp_EnvelopeFollowerAttackTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundSubmix_Statics::NewProp_AmbisonicsPluginSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundSubmix_Statics::NewProp_SubmixEffectChain,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundSubmix_Statics::NewProp_SubmixEffectChain_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundSubmix_Statics::NewProp_bMuteWhenBackgrounded,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USoundSubmix_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USoundSubmix>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USoundSubmix_Statics::ClassParams = {
		&USoundSubmix::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USoundSubmix_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USoundSubmix_Statics::PropPointers),
		0,
		0x009010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USoundSubmix_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USoundSubmix_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USoundSubmix()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USoundSubmix_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USoundSubmix, 1198087902);
	template<> ENGINE_API UClass* StaticClass<USoundSubmix>()
	{
		return USoundSubmix::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USoundSubmix(Z_Construct_UClass_USoundSubmix, &USoundSubmix::StaticClass, TEXT("/Script/Engine"), TEXT("USoundSubmix"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USoundSubmix);
	void USoundfieldSubmix::StaticRegisterNativesUSoundfieldSubmix()
	{
	}
	UClass* Z_Construct_UClass_USoundfieldSubmix_NoRegister()
	{
		return USoundfieldSubmix::StaticClass();
	}
	struct Z_Construct_UClass_USoundfieldSubmix_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EncodingSettingsClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_EncodingSettingsClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SoundfieldEffectChain_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SoundfieldEffectChain;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SoundfieldEffectChain_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EncodingSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EncodingSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SoundfieldEncodingFormat_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SoundfieldEncodingFormat;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USoundfieldSubmix_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USoundSubmixWithParentBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundfieldSubmix_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Sound Submix class meant for use with soundfield formats, such as Ambisonics.\n */" },
		{ "DisplayName", "Soundfield Submix" },
		{ "HideCategories", "Object Object Object" },
		{ "IncludePath", "Sound/SoundSubmix.h" },
		{ "ModuleRelativePath", "Classes/Sound/SoundSubmix.h" },
		{ "ToolTip", "Sound Submix class meant for use with soundfield formats, such as Ambisonics." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundfieldSubmix_Statics::NewProp_EncodingSettingsClass_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Sound/SoundSubmix.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_USoundfieldSubmix_Statics::NewProp_EncodingSettingsClass = { "EncodingSettingsClass", nullptr, (EPropertyFlags)0x0014000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USoundfieldSubmix, EncodingSettingsClass), Z_Construct_UClass_USoundfieldEncodingSettingsBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_USoundfieldSubmix_Statics::NewProp_EncodingSettingsClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundfieldSubmix_Statics::NewProp_EncodingSettingsClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundfieldSubmix_Statics::NewProp_SoundfieldEffectChain_MetaData[] = {
		{ "Category", "Soundfield" },
		{ "Comment", "// TODO: make this editable only if SoundfieldEncodingFormat is non-default\n// and filter classes based on USoundfieldProcessorBase::SupportsFormat.\n" },
		{ "ModuleRelativePath", "Classes/Sound/SoundSubmix.h" },
		{ "ToolTip", "TODO: make this editable only if SoundfieldEncodingFormat is non-default\nand filter classes based on USoundfieldProcessorBase::SupportsFormat." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USoundfieldSubmix_Statics::NewProp_SoundfieldEffectChain = { "SoundfieldEffectChain", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USoundfieldSubmix, SoundfieldEffectChain), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USoundfieldSubmix_Statics::NewProp_SoundfieldEffectChain_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundfieldSubmix_Statics::NewProp_SoundfieldEffectChain_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USoundfieldSubmix_Statics::NewProp_SoundfieldEffectChain_Inner = { "SoundfieldEffectChain", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USoundfieldEffectBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundfieldSubmix_Statics::NewProp_EncodingSettings_MetaData[] = {
		{ "Category", "Soundfield" },
		{ "Comment", "//TODO: Make this editable only if SoundfieldEncodingFormat is non-default,\n// and filter classes based on ISoundfieldFactory::GetCustomSettingsClass().\n" },
		{ "ModuleRelativePath", "Classes/Sound/SoundSubmix.h" },
		{ "ToolTip", "TODO: Make this editable only if SoundfieldEncodingFormat is non-default,\n and filter classes based on ISoundfieldFactory::GetCustomSettingsClass()." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USoundfieldSubmix_Statics::NewProp_EncodingSettings = { "EncodingSettings", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USoundfieldSubmix, EncodingSettings), Z_Construct_UClass_USoundfieldEncodingSettingsBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USoundfieldSubmix_Statics::NewProp_EncodingSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundfieldSubmix_Statics::NewProp_EncodingSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundfieldSubmix_Statics::NewProp_SoundfieldEncodingFormat_MetaData[] = {
		{ "Category", "Soundfield" },
		{ "Comment", "/** Currently used format. */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundSubmix.h" },
		{ "ToolTip", "Currently used format." },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_USoundfieldSubmix_Statics::NewProp_SoundfieldEncodingFormat = { "SoundfieldEncodingFormat", nullptr, (EPropertyFlags)0x0010010000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USoundfieldSubmix, SoundfieldEncodingFormat), METADATA_PARAMS(Z_Construct_UClass_USoundfieldSubmix_Statics::NewProp_SoundfieldEncodingFormat_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundfieldSubmix_Statics::NewProp_SoundfieldEncodingFormat_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USoundfieldSubmix_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundfieldSubmix_Statics::NewProp_EncodingSettingsClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundfieldSubmix_Statics::NewProp_SoundfieldEffectChain,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundfieldSubmix_Statics::NewProp_SoundfieldEffectChain_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundfieldSubmix_Statics::NewProp_EncodingSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundfieldSubmix_Statics::NewProp_SoundfieldEncodingFormat,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USoundfieldSubmix_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USoundfieldSubmix>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USoundfieldSubmix_Statics::ClassParams = {
		&USoundfieldSubmix::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USoundfieldSubmix_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USoundfieldSubmix_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USoundfieldSubmix_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USoundfieldSubmix_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USoundfieldSubmix()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USoundfieldSubmix_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USoundfieldSubmix, 146276267);
	template<> ENGINE_API UClass* StaticClass<USoundfieldSubmix>()
	{
		return USoundfieldSubmix::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USoundfieldSubmix(Z_Construct_UClass_USoundfieldSubmix, &USoundfieldSubmix::StaticClass, TEXT("/Script/Engine"), TEXT("USoundfieldSubmix"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USoundfieldSubmix);
	void UEndpointSubmix::StaticRegisterNativesUEndpointSubmix()
	{
	}
	UClass* Z_Construct_UClass_UEndpointSubmix_NoRegister()
	{
		return UEndpointSubmix::StaticClass();
	}
	struct Z_Construct_UClass_UEndpointSubmix_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EndpointSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EndpointSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EndpointSettingsClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_EndpointSettingsClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EndpointType_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_EndpointType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEndpointSubmix_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USoundSubmixBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEndpointSubmix_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Sound Submix class meant for sending audio to an external endpoint, such as controller haptics or an additional audio device.\n */" },
		{ "DisplayName", "Audio Endpoint Submix" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Sound/SoundSubmix.h" },
		{ "ModuleRelativePath", "Classes/Sound/SoundSubmix.h" },
		{ "ToolTip", "Sound Submix class meant for sending audio to an external endpoint, such as controller haptics or an additional audio device." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEndpointSubmix_Statics::NewProp_EndpointSettings_MetaData[] = {
		{ "Category", "Endpoint" },
		{ "Comment", "//TODO: Make this editable only if EndpointType is non-default,\n// and filter classes based on ISoundfieldFactory::GetCustomSettingsClass().\n" },
		{ "ModuleRelativePath", "Classes/Sound/SoundSubmix.h" },
		{ "ToolTip", "TODO: Make this editable only if EndpointType is non-default,\n and filter classes based on ISoundfieldFactory::GetCustomSettingsClass()." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEndpointSubmix_Statics::NewProp_EndpointSettings = { "EndpointSettings", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEndpointSubmix, EndpointSettings), Z_Construct_UClass_UAudioEndpointSettingsBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEndpointSubmix_Statics::NewProp_EndpointSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEndpointSubmix_Statics::NewProp_EndpointSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEndpointSubmix_Statics::NewProp_EndpointSettingsClass_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Sound/SoundSubmix.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UEndpointSubmix_Statics::NewProp_EndpointSettingsClass = { "EndpointSettingsClass", nullptr, (EPropertyFlags)0x0014000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEndpointSubmix, EndpointSettingsClass), Z_Construct_UClass_UAudioEndpointSettingsBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UEndpointSubmix_Statics::NewProp_EndpointSettingsClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEndpointSubmix_Statics::NewProp_EndpointSettingsClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEndpointSubmix_Statics::NewProp_EndpointType_MetaData[] = {
		{ "Category", "Endpoint" },
		{ "Comment", "/** Currently used format. */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundSubmix.h" },
		{ "ToolTip", "Currently used format." },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UEndpointSubmix_Statics::NewProp_EndpointType = { "EndpointType", nullptr, (EPropertyFlags)0x0010010000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEndpointSubmix, EndpointType), METADATA_PARAMS(Z_Construct_UClass_UEndpointSubmix_Statics::NewProp_EndpointType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEndpointSubmix_Statics::NewProp_EndpointType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEndpointSubmix_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEndpointSubmix_Statics::NewProp_EndpointSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEndpointSubmix_Statics::NewProp_EndpointSettingsClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEndpointSubmix_Statics::NewProp_EndpointType,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEndpointSubmix_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEndpointSubmix>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEndpointSubmix_Statics::ClassParams = {
		&UEndpointSubmix::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UEndpointSubmix_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UEndpointSubmix_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEndpointSubmix_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEndpointSubmix_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEndpointSubmix()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEndpointSubmix_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEndpointSubmix, 2344801807);
	template<> ENGINE_API UClass* StaticClass<UEndpointSubmix>()
	{
		return UEndpointSubmix::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEndpointSubmix(Z_Construct_UClass_UEndpointSubmix, &UEndpointSubmix::StaticClass, TEXT("/Script/Engine"), TEXT("UEndpointSubmix"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEndpointSubmix);
	void USoundfieldEndpointSubmix::StaticRegisterNativesUSoundfieldEndpointSubmix()
	{
	}
	UClass* Z_Construct_UClass_USoundfieldEndpointSubmix_NoRegister()
	{
		return USoundfieldEndpointSubmix::StaticClass();
	}
	struct Z_Construct_UClass_USoundfieldEndpointSubmix_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SoundfieldEffectChain_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SoundfieldEffectChain;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SoundfieldEffectChain_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EncodingSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EncodingSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EncodingSettingsClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_EncodingSettingsClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EndpointSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EndpointSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EndpointSettingsClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_EndpointSettingsClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SoundfieldEndpointType_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SoundfieldEndpointType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USoundfieldEndpointSubmix_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USoundSubmixBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundfieldEndpointSubmix_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Sound Submix class meant for sending soundfield-encoded audio to an external endpoint, such as a hardware binaural renderer that supports ambisonics.\n */" },
		{ "DisplayName", "Soundfield Endpoint Submix" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Sound/SoundSubmix.h" },
		{ "ModuleRelativePath", "Classes/Sound/SoundSubmix.h" },
		{ "ToolTip", "Sound Submix class meant for sending soundfield-encoded audio to an external endpoint, such as a hardware binaural renderer that supports ambisonics." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundfieldEndpointSubmix_Statics::NewProp_SoundfieldEffectChain_MetaData[] = {
		{ "Category", "Soundfield" },
		{ "ModuleRelativePath", "Classes/Sound/SoundSubmix.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USoundfieldEndpointSubmix_Statics::NewProp_SoundfieldEffectChain = { "SoundfieldEffectChain", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USoundfieldEndpointSubmix, SoundfieldEffectChain), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USoundfieldEndpointSubmix_Statics::NewProp_SoundfieldEffectChain_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundfieldEndpointSubmix_Statics::NewProp_SoundfieldEffectChain_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USoundfieldEndpointSubmix_Statics::NewProp_SoundfieldEffectChain_Inner = { "SoundfieldEffectChain", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USoundfieldEffectBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundfieldEndpointSubmix_Statics::NewProp_EncodingSettings_MetaData[] = {
		{ "Category", "Soundfield" },
		{ "ModuleRelativePath", "Classes/Sound/SoundSubmix.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USoundfieldEndpointSubmix_Statics::NewProp_EncodingSettings = { "EncodingSettings", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USoundfieldEndpointSubmix, EncodingSettings), Z_Construct_UClass_USoundfieldEncodingSettingsBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USoundfieldEndpointSubmix_Statics::NewProp_EncodingSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundfieldEndpointSubmix_Statics::NewProp_EncodingSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundfieldEndpointSubmix_Statics::NewProp_EncodingSettingsClass_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Sound/SoundSubmix.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_USoundfieldEndpointSubmix_Statics::NewProp_EncodingSettingsClass = { "EncodingSettingsClass", nullptr, (EPropertyFlags)0x0014000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USoundfieldEndpointSubmix, EncodingSettingsClass), Z_Construct_UClass_USoundfieldEncodingSettingsBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_USoundfieldEndpointSubmix_Statics::NewProp_EncodingSettingsClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundfieldEndpointSubmix_Statics::NewProp_EncodingSettingsClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundfieldEndpointSubmix_Statics::NewProp_EndpointSettings_MetaData[] = {
		{ "Category", "Endpoint" },
		{ "Comment", "//TODO: Make this editable only if EndpointType is non-default,\n// and filter classes based on ISoundfieldFactory::GetCustomSettingsClass().\n" },
		{ "ModuleRelativePath", "Classes/Sound/SoundSubmix.h" },
		{ "ToolTip", "TODO: Make this editable only if EndpointType is non-default,\n and filter classes based on ISoundfieldFactory::GetCustomSettingsClass()." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USoundfieldEndpointSubmix_Statics::NewProp_EndpointSettings = { "EndpointSettings", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USoundfieldEndpointSubmix, EndpointSettings), Z_Construct_UClass_USoundfieldEndpointSettingsBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USoundfieldEndpointSubmix_Statics::NewProp_EndpointSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundfieldEndpointSubmix_Statics::NewProp_EndpointSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundfieldEndpointSubmix_Statics::NewProp_EndpointSettingsClass_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Sound/SoundSubmix.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_USoundfieldEndpointSubmix_Statics::NewProp_EndpointSettingsClass = { "EndpointSettingsClass", nullptr, (EPropertyFlags)0x0014000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USoundfieldEndpointSubmix, EndpointSettingsClass), Z_Construct_UClass_UAudioEndpointSettingsBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_USoundfieldEndpointSubmix_Statics::NewProp_EndpointSettingsClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundfieldEndpointSubmix_Statics::NewProp_EndpointSettingsClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundfieldEndpointSubmix_Statics::NewProp_SoundfieldEndpointType_MetaData[] = {
		{ "Category", "Endpoint" },
		{ "Comment", "/** Currently used format. */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundSubmix.h" },
		{ "ToolTip", "Currently used format." },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_USoundfieldEndpointSubmix_Statics::NewProp_SoundfieldEndpointType = { "SoundfieldEndpointType", nullptr, (EPropertyFlags)0x0010010000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USoundfieldEndpointSubmix, SoundfieldEndpointType), METADATA_PARAMS(Z_Construct_UClass_USoundfieldEndpointSubmix_Statics::NewProp_SoundfieldEndpointType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundfieldEndpointSubmix_Statics::NewProp_SoundfieldEndpointType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USoundfieldEndpointSubmix_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundfieldEndpointSubmix_Statics::NewProp_SoundfieldEffectChain,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundfieldEndpointSubmix_Statics::NewProp_SoundfieldEffectChain_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundfieldEndpointSubmix_Statics::NewProp_EncodingSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundfieldEndpointSubmix_Statics::NewProp_EncodingSettingsClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundfieldEndpointSubmix_Statics::NewProp_EndpointSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundfieldEndpointSubmix_Statics::NewProp_EndpointSettingsClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundfieldEndpointSubmix_Statics::NewProp_SoundfieldEndpointType,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USoundfieldEndpointSubmix_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USoundfieldEndpointSubmix>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USoundfieldEndpointSubmix_Statics::ClassParams = {
		&USoundfieldEndpointSubmix::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USoundfieldEndpointSubmix_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USoundfieldEndpointSubmix_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USoundfieldEndpointSubmix_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USoundfieldEndpointSubmix_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USoundfieldEndpointSubmix()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USoundfieldEndpointSubmix_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USoundfieldEndpointSubmix, 2186563100);
	template<> ENGINE_API UClass* StaticClass<USoundfieldEndpointSubmix>()
	{
		return USoundfieldEndpointSubmix::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USoundfieldEndpointSubmix(Z_Construct_UClass_USoundfieldEndpointSubmix, &USoundfieldEndpointSubmix::StaticClass, TEXT("/Script/Engine"), TEXT("USoundfieldEndpointSubmix"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USoundfieldEndpointSubmix);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
