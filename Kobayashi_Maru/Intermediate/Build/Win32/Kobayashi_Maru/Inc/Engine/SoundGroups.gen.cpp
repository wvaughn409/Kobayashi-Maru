// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Sound/SoundGroups.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoundGroups() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ESoundGroup();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSoundGroup();
	ENGINE_API UClass* Z_Construct_UClass_USoundGroups_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundGroups();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
	static UEnum* ESoundGroup_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_ESoundGroup, Z_Construct_UPackage__Script_Engine(), TEXT("ESoundGroup"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<ESoundGroup>()
	{
		return ESoundGroup_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESoundGroup(ESoundGroup_StaticEnum, TEXT("/Script/Engine"), TEXT("ESoundGroup"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_ESoundGroup_Hash() { return 2868003966U; }
	UEnum* Z_Construct_UEnum_Engine_ESoundGroup()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESoundGroup"), 0, Get_Z_Construct_UEnum_Engine_ESoundGroup_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "SOUNDGROUP_Default", (int64)SOUNDGROUP_Default },
				{ "SOUNDGROUP_Effects", (int64)SOUNDGROUP_Effects },
				{ "SOUNDGROUP_UI", (int64)SOUNDGROUP_UI },
				{ "SOUNDGROUP_Music", (int64)SOUNDGROUP_Music },
				{ "SOUNDGROUP_Voice", (int64)SOUNDGROUP_Voice },
				{ "SOUNDGROUP_GameSoundGroup1", (int64)SOUNDGROUP_GameSoundGroup1 },
				{ "SOUNDGROUP_GameSoundGroup2", (int64)SOUNDGROUP_GameSoundGroup2 },
				{ "SOUNDGROUP_GameSoundGroup3", (int64)SOUNDGROUP_GameSoundGroup3 },
				{ "SOUNDGROUP_GameSoundGroup4", (int64)SOUNDGROUP_GameSoundGroup4 },
				{ "SOUNDGROUP_GameSoundGroup5", (int64)SOUNDGROUP_GameSoundGroup5 },
				{ "SOUNDGROUP_GameSoundGroup6", (int64)SOUNDGROUP_GameSoundGroup6 },
				{ "SOUNDGROUP_GameSoundGroup7", (int64)SOUNDGROUP_GameSoundGroup7 },
				{ "SOUNDGROUP_GameSoundGroup8", (int64)SOUNDGROUP_GameSoundGroup8 },
				{ "SOUNDGROUP_GameSoundGroup9", (int64)SOUNDGROUP_GameSoundGroup9 },
				{ "SOUNDGROUP_GameSoundGroup10", (int64)SOUNDGROUP_GameSoundGroup10 },
				{ "SOUNDGROUP_GameSoundGroup11", (int64)SOUNDGROUP_GameSoundGroup11 },
				{ "SOUNDGROUP_GameSoundGroup12", (int64)SOUNDGROUP_GameSoundGroup12 },
				{ "SOUNDGROUP_GameSoundGroup13", (int64)SOUNDGROUP_GameSoundGroup13 },
				{ "SOUNDGROUP_GameSoundGroup14", (int64)SOUNDGROUP_GameSoundGroup14 },
				{ "SOUNDGROUP_GameSoundGroup15", (int64)SOUNDGROUP_GameSoundGroup15 },
				{ "SOUNDGROUP_GameSoundGroup16", (int64)SOUNDGROUP_GameSoundGroup16 },
				{ "SOUNDGROUP_GameSoundGroup17", (int64)SOUNDGROUP_GameSoundGroup17 },
				{ "SOUNDGROUP_GameSoundGroup18", (int64)SOUNDGROUP_GameSoundGroup18 },
				{ "SOUNDGROUP_GameSoundGroup19", (int64)SOUNDGROUP_GameSoundGroup19 },
				{ "SOUNDGROUP_GameSoundGroup20", (int64)SOUNDGROUP_GameSoundGroup20 },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Sound/SoundGroups.h" },
				{ "SOUNDGROUP_Default.DisplayName", "Default" },
				{ "SOUNDGROUP_Default.Name", "SOUNDGROUP_Default" },
				{ "SOUNDGROUP_Effects.DisplayName", "Effects" },
				{ "SOUNDGROUP_Effects.Name", "SOUNDGROUP_Effects" },
				{ "SOUNDGROUP_GameSoundGroup1.Hidden", "" },
				{ "SOUNDGROUP_GameSoundGroup1.Name", "SOUNDGROUP_GameSoundGroup1" },
				{ "SOUNDGROUP_GameSoundGroup10.Hidden", "" },
				{ "SOUNDGROUP_GameSoundGroup10.Name", "SOUNDGROUP_GameSoundGroup10" },
				{ "SOUNDGROUP_GameSoundGroup11.Hidden", "" },
				{ "SOUNDGROUP_GameSoundGroup11.Name", "SOUNDGROUP_GameSoundGroup11" },
				{ "SOUNDGROUP_GameSoundGroup12.Hidden", "" },
				{ "SOUNDGROUP_GameSoundGroup12.Name", "SOUNDGROUP_GameSoundGroup12" },
				{ "SOUNDGROUP_GameSoundGroup13.Hidden", "" },
				{ "SOUNDGROUP_GameSoundGroup13.Name", "SOUNDGROUP_GameSoundGroup13" },
				{ "SOUNDGROUP_GameSoundGroup14.Hidden", "" },
				{ "SOUNDGROUP_GameSoundGroup14.Name", "SOUNDGROUP_GameSoundGroup14" },
				{ "SOUNDGROUP_GameSoundGroup15.Hidden", "" },
				{ "SOUNDGROUP_GameSoundGroup15.Name", "SOUNDGROUP_GameSoundGroup15" },
				{ "SOUNDGROUP_GameSoundGroup16.Hidden", "" },
				{ "SOUNDGROUP_GameSoundGroup16.Name", "SOUNDGROUP_GameSoundGroup16" },
				{ "SOUNDGROUP_GameSoundGroup17.Hidden", "" },
				{ "SOUNDGROUP_GameSoundGroup17.Name", "SOUNDGROUP_GameSoundGroup17" },
				{ "SOUNDGROUP_GameSoundGroup18.Hidden", "" },
				{ "SOUNDGROUP_GameSoundGroup18.Name", "SOUNDGROUP_GameSoundGroup18" },
				{ "SOUNDGROUP_GameSoundGroup19.Hidden", "" },
				{ "SOUNDGROUP_GameSoundGroup19.Name", "SOUNDGROUP_GameSoundGroup19" },
				{ "SOUNDGROUP_GameSoundGroup2.Hidden", "" },
				{ "SOUNDGROUP_GameSoundGroup2.Name", "SOUNDGROUP_GameSoundGroup2" },
				{ "SOUNDGROUP_GameSoundGroup20.Hidden", "" },
				{ "SOUNDGROUP_GameSoundGroup20.Name", "SOUNDGROUP_GameSoundGroup20" },
				{ "SOUNDGROUP_GameSoundGroup3.Hidden", "" },
				{ "SOUNDGROUP_GameSoundGroup3.Name", "SOUNDGROUP_GameSoundGroup3" },
				{ "SOUNDGROUP_GameSoundGroup4.Hidden", "" },
				{ "SOUNDGROUP_GameSoundGroup4.Name", "SOUNDGROUP_GameSoundGroup4" },
				{ "SOUNDGROUP_GameSoundGroup5.Hidden", "" },
				{ "SOUNDGROUP_GameSoundGroup5.Name", "SOUNDGROUP_GameSoundGroup5" },
				{ "SOUNDGROUP_GameSoundGroup6.Hidden", "" },
				{ "SOUNDGROUP_GameSoundGroup6.Name", "SOUNDGROUP_GameSoundGroup6" },
				{ "SOUNDGROUP_GameSoundGroup7.Hidden", "" },
				{ "SOUNDGROUP_GameSoundGroup7.Name", "SOUNDGROUP_GameSoundGroup7" },
				{ "SOUNDGROUP_GameSoundGroup8.Hidden", "" },
				{ "SOUNDGROUP_GameSoundGroup8.Name", "SOUNDGROUP_GameSoundGroup8" },
				{ "SOUNDGROUP_GameSoundGroup9.Hidden", "" },
				{ "SOUNDGROUP_GameSoundGroup9.Name", "SOUNDGROUP_GameSoundGroup9" },
				{ "SOUNDGROUP_Music.DisplayName", "Music" },
				{ "SOUNDGROUP_Music.Name", "SOUNDGROUP_Music" },
				{ "SOUNDGROUP_UI.DisplayName", "UI" },
				{ "SOUNDGROUP_UI.Name", "SOUNDGROUP_UI" },
				{ "SOUNDGROUP_Voice.DisplayName", "Voice" },
				{ "SOUNDGROUP_Voice.Name", "SOUNDGROUP_Voice" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"ESoundGroup",
				"ESoundGroup",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FSoundGroup::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FSoundGroup_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSoundGroup, Z_Construct_UPackage__Script_Engine(), TEXT("SoundGroup"), sizeof(FSoundGroup), Get_Z_Construct_UScriptStruct_FSoundGroup_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FSoundGroup>()
{
	return FSoundGroup::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSoundGroup(FSoundGroup::StaticStruct, TEXT("/Script/Engine"), TEXT("SoundGroup"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFSoundGroup
{
	FScriptStruct_Engine_StaticRegisterNativesFSoundGroup()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SoundGroup")),new UScriptStruct::TCppStructOps<FSoundGroup>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFSoundGroup;
	struct Z_Construct_UScriptStruct_FSoundGroup_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DecompressedDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DecompressedDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAlwaysDecompressOnLoad_MetaData[];
#endif
		static void NewProp_bAlwaysDecompressOnLoad_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAlwaysDecompressOnLoad;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DisplayName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SoundGroup_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SoundGroup;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundGroup_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Sound/SoundGroups.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSoundGroup_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSoundGroup>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundGroup_Statics::NewProp_DecompressedDuration_MetaData[] = {
		{ "Comment", "/**\n\x09 * Sound duration in seconds below which sounds are entirely expanded to PCM at load time\n\x09 * Disregarded if bAlwaysDecompressOnLoad is true\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Sound/SoundGroups.h" },
		{ "ToolTip", "Sound duration in seconds below which sounds are entirely expanded to PCM at load time\nDisregarded if bAlwaysDecompressOnLoad is true" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSoundGroup_Statics::NewProp_DecompressedDuration = { "DecompressedDuration", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSoundGroup, DecompressedDuration), METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundGroup_Statics::NewProp_DecompressedDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundGroup_Statics::NewProp_DecompressedDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundGroup_Statics::NewProp_bAlwaysDecompressOnLoad_MetaData[] = {
		{ "Comment", "// Whether sounds in this group should always decompress on load\n" },
		{ "ModuleRelativePath", "Classes/Sound/SoundGroups.h" },
		{ "ToolTip", "Whether sounds in this group should always decompress on load" },
	};
#endif
	void Z_Construct_UScriptStruct_FSoundGroup_Statics::NewProp_bAlwaysDecompressOnLoad_SetBit(void* Obj)
	{
		((FSoundGroup*)Obj)->bAlwaysDecompressOnLoad = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSoundGroup_Statics::NewProp_bAlwaysDecompressOnLoad = { "bAlwaysDecompressOnLoad", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FSoundGroup), &Z_Construct_UScriptStruct_FSoundGroup_Statics::NewProp_bAlwaysDecompressOnLoad_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundGroup_Statics::NewProp_bAlwaysDecompressOnLoad_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundGroup_Statics::NewProp_bAlwaysDecompressOnLoad_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundGroup_Statics::NewProp_DisplayName_MetaData[] = {
		{ "Comment", "// An override display name for custom game sound groups\n" },
		{ "ModuleRelativePath", "Classes/Sound/SoundGroups.h" },
		{ "ToolTip", "An override display name for custom game sound groups" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSoundGroup_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSoundGroup, DisplayName), METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundGroup_Statics::NewProp_DisplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundGroup_Statics::NewProp_DisplayName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundGroup_Statics::NewProp_SoundGroup_MetaData[] = {
		{ "Comment", "// The sound group enumeration we are setting values for\n" },
		{ "ModuleRelativePath", "Classes/Sound/SoundGroups.h" },
		{ "ToolTip", "The sound group enumeration we are setting values for" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSoundGroup_Statics::NewProp_SoundGroup = { "SoundGroup", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSoundGroup, SoundGroup), Z_Construct_UEnum_Engine_ESoundGroup, METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundGroup_Statics::NewProp_SoundGroup_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundGroup_Statics::NewProp_SoundGroup_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSoundGroup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundGroup_Statics::NewProp_DecompressedDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundGroup_Statics::NewProp_bAlwaysDecompressOnLoad,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundGroup_Statics::NewProp_DisplayName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundGroup_Statics::NewProp_SoundGroup,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSoundGroup_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"SoundGroup",
		sizeof(FSoundGroup),
		alignof(FSoundGroup),
		Z_Construct_UScriptStruct_FSoundGroup_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundGroup_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundGroup_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundGroup_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSoundGroup()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSoundGroup_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SoundGroup"), sizeof(FSoundGroup), Get_Z_Construct_UScriptStruct_FSoundGroup_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSoundGroup_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSoundGroup_Hash() { return 2503771415U; }
	void USoundGroups::StaticRegisterNativesUSoundGroups()
	{
	}
	UClass* Z_Construct_UClass_USoundGroups_NoRegister()
	{
		return USoundGroups::StaticClass();
	}
	struct Z_Construct_UClass_USoundGroups_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SoundGroupProfiles_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SoundGroupProfiles;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SoundGroupProfiles_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USoundGroups_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundGroups_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// This class is a singleton initialized from the ini\n" },
		{ "IncludePath", "Sound/SoundGroups.h" },
		{ "ModuleRelativePath", "Classes/Sound/SoundGroups.h" },
		{ "ToolTip", "This class is a singleton initialized from the ini" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundGroups_Statics::NewProp_SoundGroupProfiles_MetaData[] = {
		{ "Comment", "// The ini editable array of profiles\n" },
		{ "ModuleRelativePath", "Classes/Sound/SoundGroups.h" },
		{ "ToolTip", "The ini editable array of profiles" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USoundGroups_Statics::NewProp_SoundGroupProfiles = { "SoundGroupProfiles", nullptr, (EPropertyFlags)0x0040000000004000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USoundGroups, SoundGroupProfiles), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USoundGroups_Statics::NewProp_SoundGroupProfiles_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundGroups_Statics::NewProp_SoundGroupProfiles_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USoundGroups_Statics::NewProp_SoundGroupProfiles_Inner = { "SoundGroupProfiles", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSoundGroup, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USoundGroups_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundGroups_Statics::NewProp_SoundGroupProfiles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundGroups_Statics::NewProp_SoundGroupProfiles_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USoundGroups_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USoundGroups>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USoundGroups_Statics::ClassParams = {
		&USoundGroups::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USoundGroups_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USoundGroups_Statics::PropPointers),
		0,
		0x000000A5u,
		METADATA_PARAMS(Z_Construct_UClass_USoundGroups_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USoundGroups_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USoundGroups()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USoundGroups_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USoundGroups, 1933198745);
	template<> ENGINE_API UClass* StaticClass<USoundGroups>()
	{
		return USoundGroups::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USoundGroups(Z_Construct_UClass_USoundGroups, &USoundGroups::StaticClass, TEXT("/Script/Engine"), TEXT("USoundGroups"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USoundGroups);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
