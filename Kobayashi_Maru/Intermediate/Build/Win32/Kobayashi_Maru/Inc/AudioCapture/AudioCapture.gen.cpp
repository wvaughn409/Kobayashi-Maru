// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AudioCapture/Public/AudioCapture.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAudioCapture() {}
// Cross Module References
	AUDIOCAPTURE_API UScriptStruct* Z_Construct_UScriptStruct_FAudioCaptureDeviceInfo();
	UPackage* Z_Construct_UPackage__Script_AudioCapture();
	AUDIOCAPTURE_API UClass* Z_Construct_UClass_UAudioCapture_NoRegister();
	AUDIOCAPTURE_API UClass* Z_Construct_UClass_UAudioCapture();
	AUDIOMIXER_API UClass* Z_Construct_UClass_UAudioGenerator();
	AUDIOCAPTURE_API UClass* Z_Construct_UClass_UAudioCaptureFunctionLibrary_NoRegister();
	AUDIOCAPTURE_API UClass* Z_Construct_UClass_UAudioCaptureFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
// End Cross Module References
class UScriptStruct* FAudioCaptureDeviceInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AUDIOCAPTURE_API uint32 Get_Z_Construct_UScriptStruct_FAudioCaptureDeviceInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAudioCaptureDeviceInfo, Z_Construct_UPackage__Script_AudioCapture(), TEXT("AudioCaptureDeviceInfo"), sizeof(FAudioCaptureDeviceInfo), Get_Z_Construct_UScriptStruct_FAudioCaptureDeviceInfo_Hash());
	}
	return Singleton;
}
template<> AUDIOCAPTURE_API UScriptStruct* StaticStruct<FAudioCaptureDeviceInfo>()
{
	return FAudioCaptureDeviceInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAudioCaptureDeviceInfo(FAudioCaptureDeviceInfo::StaticStruct, TEXT("/Script/AudioCapture"), TEXT("AudioCaptureDeviceInfo"), false, nullptr, nullptr);
static struct FScriptStruct_AudioCapture_StaticRegisterNativesFAudioCaptureDeviceInfo
{
	FScriptStruct_AudioCapture_StaticRegisterNativesFAudioCaptureDeviceInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AudioCaptureDeviceInfo")),new UScriptStruct::TCppStructOps<FAudioCaptureDeviceInfo>);
	}
} ScriptStruct_AudioCapture_StaticRegisterNativesFAudioCaptureDeviceInfo;
	struct Z_Construct_UScriptStruct_FAudioCaptureDeviceInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SampleRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SampleRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumInputChannels_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumInputChannels;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeviceName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_DeviceName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAudioCaptureDeviceInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Struct defining the time synth global quantization settings\n" },
		{ "ModuleRelativePath", "Public/AudioCapture.h" },
		{ "ToolTip", "Struct defining the time synth global quantization settings" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAudioCaptureDeviceInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAudioCaptureDeviceInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAudioCaptureDeviceInfo_Statics::NewProp_SampleRate_MetaData[] = {
		{ "Category", "AudioCapture" },
		{ "Comment", "// The sample rate of the audio capture device\n" },
		{ "ModuleRelativePath", "Public/AudioCapture.h" },
		{ "ToolTip", "The sample rate of the audio capture device" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAudioCaptureDeviceInfo_Statics::NewProp_SampleRate = { "SampleRate", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAudioCaptureDeviceInfo, SampleRate), METADATA_PARAMS(Z_Construct_UScriptStruct_FAudioCaptureDeviceInfo_Statics::NewProp_SampleRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioCaptureDeviceInfo_Statics::NewProp_SampleRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAudioCaptureDeviceInfo_Statics::NewProp_NumInputChannels_MetaData[] = {
		{ "Category", "AudioCapture" },
		{ "Comment", "// The number of input channels\n" },
		{ "ModuleRelativePath", "Public/AudioCapture.h" },
		{ "ToolTip", "The number of input channels" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAudioCaptureDeviceInfo_Statics::NewProp_NumInputChannels = { "NumInputChannels", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAudioCaptureDeviceInfo, NumInputChannels), METADATA_PARAMS(Z_Construct_UScriptStruct_FAudioCaptureDeviceInfo_Statics::NewProp_NumInputChannels_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioCaptureDeviceInfo_Statics::NewProp_NumInputChannels_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAudioCaptureDeviceInfo_Statics::NewProp_DeviceName_MetaData[] = {
		{ "Category", "AudioCapture" },
		{ "Comment", "// The name of the audio capture device\n" },
		{ "ModuleRelativePath", "Public/AudioCapture.h" },
		{ "ToolTip", "The name of the audio capture device" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAudioCaptureDeviceInfo_Statics::NewProp_DeviceName = { "DeviceName", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAudioCaptureDeviceInfo, DeviceName), METADATA_PARAMS(Z_Construct_UScriptStruct_FAudioCaptureDeviceInfo_Statics::NewProp_DeviceName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioCaptureDeviceInfo_Statics::NewProp_DeviceName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAudioCaptureDeviceInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioCaptureDeviceInfo_Statics::NewProp_SampleRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioCaptureDeviceInfo_Statics::NewProp_NumInputChannels,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioCaptureDeviceInfo_Statics::NewProp_DeviceName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAudioCaptureDeviceInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AudioCapture,
		nullptr,
		&NewStructOps,
		"AudioCaptureDeviceInfo",
		sizeof(FAudioCaptureDeviceInfo),
		alignof(FAudioCaptureDeviceInfo),
		Z_Construct_UScriptStruct_FAudioCaptureDeviceInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioCaptureDeviceInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAudioCaptureDeviceInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioCaptureDeviceInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAudioCaptureDeviceInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAudioCaptureDeviceInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AudioCapture();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AudioCaptureDeviceInfo"), sizeof(FAudioCaptureDeviceInfo), Get_Z_Construct_UScriptStruct_FAudioCaptureDeviceInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAudioCaptureDeviceInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAudioCaptureDeviceInfo_Hash() { return 679446186U; }
	DEFINE_FUNCTION(UAudioCapture::execIsCapturingAudio)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsCapturingAudio();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAudioCapture::execStopCapturingAudio)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopCapturingAudio();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAudioCapture::execStartCapturingAudio)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartCapturingAudio();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAudioCapture::execGetAudioCaptureDeviceInfo)
	{
		P_GET_STRUCT_REF(FAudioCaptureDeviceInfo,Z_Param_Out_OutInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetAudioCaptureDeviceInfo(Z_Param_Out_OutInfo);
		P_NATIVE_END;
	}
	void UAudioCapture::StaticRegisterNativesUAudioCapture()
	{
		UClass* Class = UAudioCapture::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAudioCaptureDeviceInfo", &UAudioCapture::execGetAudioCaptureDeviceInfo },
			{ "IsCapturingAudio", &UAudioCapture::execIsCapturingAudio },
			{ "StartCapturingAudio", &UAudioCapture::execStartCapturingAudio },
			{ "StopCapturingAudio", &UAudioCapture::execStopCapturingAudio },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAudioCapture_GetAudioCaptureDeviceInfo_Statics
	{
		struct AudioCapture_eventGetAudioCaptureDeviceInfo_Parms
		{
			FAudioCaptureDeviceInfo OutInfo;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutInfo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAudioCapture_GetAudioCaptureDeviceInfo_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AudioCapture_eventGetAudioCaptureDeviceInfo_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAudioCapture_GetAudioCaptureDeviceInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AudioCapture_eventGetAudioCaptureDeviceInfo_Parms), &Z_Construct_UFunction_UAudioCapture_GetAudioCaptureDeviceInfo_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAudioCapture_GetAudioCaptureDeviceInfo_Statics::NewProp_OutInfo = { "OutInfo", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AudioCapture_eventGetAudioCaptureDeviceInfo_Parms, OutInfo), Z_Construct_UScriptStruct_FAudioCaptureDeviceInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioCapture_GetAudioCaptureDeviceInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioCapture_GetAudioCaptureDeviceInfo_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioCapture_GetAudioCaptureDeviceInfo_Statics::NewProp_OutInfo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioCapture_GetAudioCaptureDeviceInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "AudioCapture" },
		{ "Comment", "// Returns the audio capture device info\n" },
		{ "ModuleRelativePath", "Public/AudioCapture.h" },
		{ "ToolTip", "Returns the audio capture device info" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioCapture_GetAudioCaptureDeviceInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioCapture, nullptr, "GetAudioCaptureDeviceInfo", nullptr, nullptr, sizeof(AudioCapture_eventGetAudioCaptureDeviceInfo_Parms), Z_Construct_UFunction_UAudioCapture_GetAudioCaptureDeviceInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioCapture_GetAudioCaptureDeviceInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioCapture_GetAudioCaptureDeviceInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioCapture_GetAudioCaptureDeviceInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioCapture_GetAudioCaptureDeviceInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAudioCapture_GetAudioCaptureDeviceInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioCapture_IsCapturingAudio_Statics
	{
		struct AudioCapture_eventIsCapturingAudio_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAudioCapture_IsCapturingAudio_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AudioCapture_eventIsCapturingAudio_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAudioCapture_IsCapturingAudio_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AudioCapture_eventIsCapturingAudio_Parms), &Z_Construct_UFunction_UAudioCapture_IsCapturingAudio_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioCapture_IsCapturingAudio_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioCapture_IsCapturingAudio_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioCapture_IsCapturingAudio_Statics::Function_MetaDataParams[] = {
		{ "Category", "AudioCapture" },
		{ "Comment", "// Returns true if capturing audio\n" },
		{ "ModuleRelativePath", "Public/AudioCapture.h" },
		{ "ToolTip", "Returns true if capturing audio" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioCapture_IsCapturingAudio_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioCapture, nullptr, "IsCapturingAudio", nullptr, nullptr, sizeof(AudioCapture_eventIsCapturingAudio_Parms), Z_Construct_UFunction_UAudioCapture_IsCapturingAudio_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioCapture_IsCapturingAudio_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioCapture_IsCapturingAudio_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioCapture_IsCapturingAudio_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioCapture_IsCapturingAudio()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAudioCapture_IsCapturingAudio_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioCapture_StartCapturingAudio_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioCapture_StartCapturingAudio_Statics::Function_MetaDataParams[] = {
		{ "Category", "AudioCapture" },
		{ "Comment", "// Starts capturing audio\n" },
		{ "ModuleRelativePath", "Public/AudioCapture.h" },
		{ "ToolTip", "Starts capturing audio" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioCapture_StartCapturingAudio_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioCapture, nullptr, "StartCapturingAudio", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioCapture_StartCapturingAudio_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioCapture_StartCapturingAudio_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioCapture_StartCapturingAudio()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAudioCapture_StartCapturingAudio_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioCapture_StopCapturingAudio_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioCapture_StopCapturingAudio_Statics::Function_MetaDataParams[] = {
		{ "Category", "AudioCapture" },
		{ "Comment", "// Stops capturing audio\n" },
		{ "ModuleRelativePath", "Public/AudioCapture.h" },
		{ "ToolTip", "Stops capturing audio" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioCapture_StopCapturingAudio_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioCapture, nullptr, "StopCapturingAudio", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioCapture_StopCapturingAudio_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioCapture_StopCapturingAudio_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioCapture_StopCapturingAudio()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAudioCapture_StopCapturingAudio_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAudioCapture_NoRegister()
	{
		return UAudioCapture::StaticClass();
	}
	struct Z_Construct_UClass_UAudioCapture_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAudioCapture_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAudioGenerator,
		(UObject* (*)())Z_Construct_UPackage__Script_AudioCapture,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAudioCapture_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAudioCapture_GetAudioCaptureDeviceInfo, "GetAudioCaptureDeviceInfo" }, // 859416806
		{ &Z_Construct_UFunction_UAudioCapture_IsCapturingAudio, "IsCapturingAudio" }, // 1661578090
		{ &Z_Construct_UFunction_UAudioCapture_StartCapturingAudio, "StartCapturingAudio" }, // 542460549
		{ &Z_Construct_UFunction_UAudioCapture_StopCapturingAudio, "StopCapturingAudio" }, // 3792343589
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioCapture_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "Comment", "// Class which opens up a handle to an audio capture device.\n// Allows other objects to get audio buffers from the capture device.\n" },
		{ "IncludePath", "AudioCapture.h" },
		{ "ModuleRelativePath", "Public/AudioCapture.h" },
		{ "ToolTip", "Class which opens up a handle to an audio capture device.\nAllows other objects to get audio buffers from the capture device." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAudioCapture_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAudioCapture>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAudioCapture_Statics::ClassParams = {
		&UAudioCapture::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAudioCapture_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioCapture_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAudioCapture()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAudioCapture_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAudioCapture, 943439769);
	template<> AUDIOCAPTURE_API UClass* StaticClass<UAudioCapture>()
	{
		return UAudioCapture::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAudioCapture(Z_Construct_UClass_UAudioCapture, &UAudioCapture::StaticClass, TEXT("/Script/AudioCapture"), TEXT("UAudioCapture"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAudioCapture);
	DEFINE_FUNCTION(UAudioCaptureFunctionLibrary::execCreateAudioCapture)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAudioCapture**)Z_Param__Result=UAudioCaptureFunctionLibrary::CreateAudioCapture();
		P_NATIVE_END;
	}
	void UAudioCaptureFunctionLibrary::StaticRegisterNativesUAudioCaptureFunctionLibrary()
	{
		UClass* Class = UAudioCaptureFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateAudioCapture", &UAudioCaptureFunctionLibrary::execCreateAudioCapture },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAudioCaptureFunctionLibrary_CreateAudioCapture_Statics
	{
		struct AudioCaptureFunctionLibrary_eventCreateAudioCapture_Parms
		{
			UAudioCapture* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAudioCaptureFunctionLibrary_CreateAudioCapture_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AudioCaptureFunctionLibrary_eventCreateAudioCapture_Parms, ReturnValue), Z_Construct_UClass_UAudioCapture_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioCaptureFunctionLibrary_CreateAudioCapture_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioCaptureFunctionLibrary_CreateAudioCapture_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioCaptureFunctionLibrary_CreateAudioCapture_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio Capture" },
		{ "ModuleRelativePath", "Public/AudioCapture.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioCaptureFunctionLibrary_CreateAudioCapture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioCaptureFunctionLibrary, nullptr, "CreateAudioCapture", nullptr, nullptr, sizeof(AudioCaptureFunctionLibrary_eventCreateAudioCapture_Parms), Z_Construct_UFunction_UAudioCaptureFunctionLibrary_CreateAudioCapture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioCaptureFunctionLibrary_CreateAudioCapture_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioCaptureFunctionLibrary_CreateAudioCapture_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioCaptureFunctionLibrary_CreateAudioCapture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioCaptureFunctionLibrary_CreateAudioCapture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAudioCaptureFunctionLibrary_CreateAudioCapture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAudioCaptureFunctionLibrary_NoRegister()
	{
		return UAudioCaptureFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UAudioCaptureFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAudioCaptureFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_AudioCapture,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAudioCaptureFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAudioCaptureFunctionLibrary_CreateAudioCapture, "CreateAudioCapture" }, // 481100788
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioCaptureFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AudioCapture.h" },
		{ "ModuleRelativePath", "Public/AudioCapture.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAudioCaptureFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAudioCaptureFunctionLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAudioCaptureFunctionLibrary_Statics::ClassParams = {
		&UAudioCaptureFunctionLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAudioCaptureFunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioCaptureFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAudioCaptureFunctionLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAudioCaptureFunctionLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAudioCaptureFunctionLibrary, 2053289945);
	template<> AUDIOCAPTURE_API UClass* StaticClass<UAudioCaptureFunctionLibrary>()
	{
		return UAudioCaptureFunctionLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAudioCaptureFunctionLibrary(Z_Construct_UClass_UAudioCaptureFunctionLibrary, &UAudioCaptureFunctionLibrary::StaticClass, TEXT("/Script/AudioCapture"), TEXT("UAudioCaptureFunctionLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAudioCaptureFunctionLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
