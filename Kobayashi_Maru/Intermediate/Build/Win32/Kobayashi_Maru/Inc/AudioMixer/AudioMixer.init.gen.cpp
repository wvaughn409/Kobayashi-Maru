// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAudioMixer_init() {}
	AUDIOMIXER_API UFunction* Z_Construct_UDelegateFunction_AudioMixer_OnSynthEnvelopeValue__DelegateSignature();
	AUDIOMIXER_API UFunction* Z_Construct_UDelegateFunction_AudioMixer_OnSoundLoadComplete__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_AudioMixer()
	{
		static UPackage* ReturnPackage = nullptr;
		if (!ReturnPackage)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_AudioMixer_OnSynthEnvelopeValue__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_AudioMixer_OnSoundLoadComplete__DelegateSignature,
			};
			static const UE4CodeGen_Private::FPackageParams PackageParams = {
				"/Script/AudioMixer",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x9EE1A5A5,
				0xB0C2A718,
				METADATA_PARAMS(nullptr, 0)
			};
			UE4CodeGen_Private::ConstructUPackage(ReturnPackage, PackageParams);
		}
		return ReturnPackage;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
