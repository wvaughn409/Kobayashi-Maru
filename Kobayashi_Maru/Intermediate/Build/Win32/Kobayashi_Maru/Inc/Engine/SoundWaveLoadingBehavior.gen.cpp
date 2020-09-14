// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Sound/SoundWaveLoadingBehavior.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoundWaveLoadingBehavior() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ESoundWaveLoadingBehavior();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static UEnum* ESoundWaveLoadingBehavior_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_ESoundWaveLoadingBehavior, Z_Construct_UPackage__Script_Engine(), TEXT("ESoundWaveLoadingBehavior"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<ESoundWaveLoadingBehavior>()
	{
		return ESoundWaveLoadingBehavior_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESoundWaveLoadingBehavior(ESoundWaveLoadingBehavior_StaticEnum, TEXT("/Script/Engine"), TEXT("ESoundWaveLoadingBehavior"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_ESoundWaveLoadingBehavior_Hash() { return 795745357U; }
	UEnum* Z_Construct_UEnum_Engine_ESoundWaveLoadingBehavior()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESoundWaveLoadingBehavior"), 0, Get_Z_Construct_UEnum_Engine_ESoundWaveLoadingBehavior_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESoundWaveLoadingBehavior::Inherited", (int64)ESoundWaveLoadingBehavior::Inherited },
				{ "ESoundWaveLoadingBehavior::RetainOnLoad", (int64)ESoundWaveLoadingBehavior::RetainOnLoad },
				{ "ESoundWaveLoadingBehavior::PrimeOnLoad", (int64)ESoundWaveLoadingBehavior::PrimeOnLoad },
				{ "ESoundWaveLoadingBehavior::LoadOnDemand", (int64)ESoundWaveLoadingBehavior::LoadOnDemand },
				{ "ESoundWaveLoadingBehavior::ForceInline", (int64)ESoundWaveLoadingBehavior::ForceInline },
				{ "ESoundWaveLoadingBehavior::Uninitialized", (int64)ESoundWaveLoadingBehavior::Uninitialized },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Comment", "/**\n * Only used when stream caching is enabled. Determines how we are going to load or retain a given audio asset.\n * A USoundWave's loading behavior can be overridden in the USoundWave itself, the sound wave's USoundClass, or by cvars.\n * The order of priority is defined as:\n * 1) The loading behavior set on the USoundWave\n * 2) The loading behavior set on the USoundWave's USoundClass.\n * 3) The loading behavior set on the nearest parent of a USoundWave's USoundClass.\n * 4) The loading behavior set via the au.streamcache cvars.\n */" },
				{ "ForceInline.Comment", "// Force all audio data for this audio asset to live outside of the cache and use the non-streaming decode pathways. Only usable if set on the USoundWave.\n" },
				{ "ForceInline.DisplayName", "Force Inline" },
				{ "ForceInline.Name", "ESoundWaveLoadingBehavior::ForceInline" },
				{ "ForceInline.ToolTip", "Force all audio data for this audio asset to live outside of the cache and use the non-streaming decode pathways. Only usable if set on the USoundWave." },
				{ "Inherited.Comment", "// If set on a USoundWave, use the setting defined by the USoundClass. If set on the next parent USoundClass, or the default behavior defined via the au.streamcache cvars.\n" },
				{ "Inherited.Name", "ESoundWaveLoadingBehavior::Inherited" },
				{ "Inherited.ToolTip", "If set on a USoundWave, use the setting defined by the USoundClass. If set on the next parent USoundClass, or the default behavior defined via the au.streamcache cvars." },
				{ "LoadOnDemand.Comment", "// the first chunk of audio for this asset will not be loaded until this asset is played or primed.\n" },
				{ "LoadOnDemand.Name", "ESoundWaveLoadingBehavior::LoadOnDemand" },
				{ "LoadOnDemand.ToolTip", "the first chunk of audio for this asset will not be loaded until this asset is played or primed." },
				{ "ModuleRelativePath", "Classes/Sound/SoundWaveLoadingBehavior.h" },
				{ "PrimeOnLoad.Comment", "// the first chunk of audio for this asset will be loaded into the cache from disk when this asset is loaded, but may be evicted to make room for other audio if it isn't played for a while.\n" },
				{ "PrimeOnLoad.Name", "ESoundWaveLoadingBehavior::PrimeOnLoad" },
				{ "PrimeOnLoad.ToolTip", "the first chunk of audio for this asset will be loaded into the cache from disk when this asset is loaded, but may be evicted to make room for other audio if it isn't played for a while." },
				{ "RetainOnLoad.Comment", "// the first chunk of audio for this asset will be retained in the audio cache until a given USoundWave is either destroyed or USoundWave::ReleaseCompressedAudioData is called.\n" },
				{ "RetainOnLoad.Name", "ESoundWaveLoadingBehavior::RetainOnLoad" },
				{ "RetainOnLoad.ToolTip", "the first chunk of audio for this asset will be retained in the audio cache until a given USoundWave is either destroyed or USoundWave::ReleaseCompressedAudioData is called." },
				{ "ToolTip", "Only used when stream caching is enabled. Determines how we are going to load or retain a given audio asset.\nA USoundWave's loading behavior can be overridden in the USoundWave itself, the sound wave's USoundClass, or by cvars.\nThe order of priority is defined as:\n1) The loading behavior set on the USoundWave\n2) The loading behavior set on the USoundWave's USoundClass.\n3) The loading behavior set on the nearest parent of a USoundWave's USoundClass.\n4) The loading behavior set via the au.streamcache cvars." },
				{ "Uninitialized.Comment", "// This value is used to delineate when the value of ESoundWaveLoadingBehavior hasn't been cached on a USoundWave yet.\n" },
				{ "Uninitialized.Hidden", "" },
				{ "Uninitialized.Name", "ESoundWaveLoadingBehavior::Uninitialized" },
				{ "Uninitialized.ToolTip", "This value is used to delineate when the value of ESoundWaveLoadingBehavior hasn't been cached on a USoundWave yet." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"ESoundWaveLoadingBehavior",
				"ESoundWaveLoadingBehavior",
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
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
