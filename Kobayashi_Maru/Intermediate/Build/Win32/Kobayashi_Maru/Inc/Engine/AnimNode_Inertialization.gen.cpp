// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Animation/AnimNode_Inertialization.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_Inertialization() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EInertializationSpace();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EInertializationBoneState();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EInertializationState();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_Inertialization();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_Base();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPoseLink();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FInertializationPoseDiff();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FInertializationCurveDiff();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FInertializationBoneDiff();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FInertializationPose();
// End Cross Module References
	static UEnum* EInertializationSpace_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EInertializationSpace, Z_Construct_UPackage__Script_Engine(), TEXT("EInertializationSpace"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EInertializationSpace>()
	{
		return EInertializationSpace_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EInertializationSpace(EInertializationSpace_StaticEnum, TEXT("/Script/Engine"), TEXT("EInertializationSpace"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EInertializationSpace_Hash() { return 2853798450U; }
	UEnum* Z_Construct_UEnum_Engine_EInertializationSpace()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EInertializationSpace"), 0, Get_Z_Construct_UEnum_Engine_EInertializationSpace_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EInertializationSpace::Default", (int64)EInertializationSpace::Default },
				{ "EInertializationSpace::WorldSpace", (int64)EInertializationSpace::WorldSpace },
				{ "EInertializationSpace::WorldRotation", (int64)EInertializationSpace::WorldRotation },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Default.Name", "EInertializationSpace::Default" },
				{ "ModuleRelativePath", "Classes/Animation/AnimNode_Inertialization.h" },
				{ "WorldRotation.Comment", "// Inertialize translation and rotation in world space (to conceal discontinuities in actor transform such snapping to a new attach parent)\n" },
				{ "WorldRotation.Name", "EInertializationSpace::WorldRotation" },
				{ "WorldRotation.ToolTip", "Inertialize translation and rotation in world space (to conceal discontinuities in actor transform such snapping to a new attach parent)" },
				{ "WorldSpace.Comment", "// Inertialize in local space (default)\n" },
				{ "WorldSpace.Name", "EInertializationSpace::WorldSpace" },
				{ "WorldSpace.ToolTip", "Inertialize in local space (default)" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"EInertializationSpace",
				"EInertializationSpace",
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
	static UEnum* EInertializationBoneState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EInertializationBoneState, Z_Construct_UPackage__Script_Engine(), TEXT("EInertializationBoneState"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EInertializationBoneState>()
	{
		return EInertializationBoneState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EInertializationBoneState(EInertializationBoneState_StaticEnum, TEXT("/Script/Engine"), TEXT("EInertializationBoneState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EInertializationBoneState_Hash() { return 3731583657U; }
	UEnum* Z_Construct_UEnum_Engine_EInertializationBoneState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EInertializationBoneState"), 0, Get_Z_Construct_UEnum_Engine_EInertializationBoneState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EInertializationBoneState::Invalid", (int64)EInertializationBoneState::Invalid },
				{ "EInertializationBoneState::Valid", (int64)EInertializationBoneState::Valid },
				{ "EInertializationBoneState::Excluded", (int64)EInertializationBoneState::Excluded },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Excluded.Comment", "// Valid bone\n" },
				{ "Excluded.Name", "EInertializationBoneState::Excluded" },
				{ "Excluded.ToolTip", "Valid bone" },
				{ "Invalid.Name", "EInertializationBoneState::Invalid" },
				{ "ModuleRelativePath", "Classes/Animation/AnimNode_Inertialization.h" },
				{ "Valid.Comment", "// Invalid bone (ie: bone was present in the skeleton but was not present in the pose when it was captured)\n" },
				{ "Valid.Name", "EInertializationBoneState::Valid" },
				{ "Valid.ToolTip", "Invalid bone (ie: bone was present in the skeleton but was not present in the pose when it was captured)" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"EInertializationBoneState",
				"EInertializationBoneState",
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
	static UEnum* EInertializationState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EInertializationState, Z_Construct_UPackage__Script_Engine(), TEXT("EInertializationState"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EInertializationState>()
	{
		return EInertializationState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EInertializationState(EInertializationState_StaticEnum, TEXT("/Script/Engine"), TEXT("EInertializationState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EInertializationState_Hash() { return 1281481753U; }
	UEnum* Z_Construct_UEnum_Engine_EInertializationState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EInertializationState"), 0, Get_Z_Construct_UEnum_Engine_EInertializationState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EInertializationState::Inactive", (int64)EInertializationState::Inactive },
				{ "EInertializationState::Pending", (int64)EInertializationState::Pending },
				{ "EInertializationState::Active", (int64)EInertializationState::Active },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Active.Comment", "// Inertialization request pending... prepare to capture the pose difference and then switch to active\n" },
				{ "Active.Name", "EInertializationState::Active" },
				{ "Active.ToolTip", "Inertialization request pending... prepare to capture the pose difference and then switch to active" },
				{ "Comment", "// Inertialization: High-Performance Animation Transitions in 'Gears of War'\n// David Bollo\n// Game Developer Conference 2018\n//\n// https://www.gdcvault.com/play/1025165/Inertialization\n// https://www.gdcvault.com/play/1025331/Inertialization\n" },
				{ "Inactive.Name", "EInertializationState::Inactive" },
				{ "ModuleRelativePath", "Classes/Animation/AnimNode_Inertialization.h" },
				{ "Pending.Comment", "// Inertialization inactive\n" },
				{ "Pending.Name", "EInertializationState::Pending" },
				{ "Pending.ToolTip", "Inertialization inactive" },
				{ "ToolTip", "Inertialization: High-Performance Animation Transitions in 'Gears of War'\nDavid Bollo\nGame Developer Conference 2018\n\nhttps:www.gdcvault.com/play/1025165/Inertialization\nhttps:www.gdcvault.com/play/1025331/Inertialization" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"EInertializationState",
				"EInertializationState",
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
class UScriptStruct* FAnimNode_Inertialization::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FAnimNode_Inertialization_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_Inertialization, Z_Construct_UPackage__Script_Engine(), TEXT("AnimNode_Inertialization"), sizeof(FAnimNode_Inertialization), Get_Z_Construct_UScriptStruct_FAnimNode_Inertialization_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FAnimNode_Inertialization>()
{
	return FAnimNode_Inertialization::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimNode_Inertialization(FAnimNode_Inertialization::StaticStruct, TEXT("/Script/Engine"), TEXT("AnimNode_Inertialization"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFAnimNode_Inertialization
{
	FScriptStruct_Engine_StaticRegisterNativesFAnimNode_Inertialization()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AnimNode_Inertialization")),new UScriptStruct::TCppStructOps<FAnimNode_Inertialization>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFAnimNode_Inertialization;
	struct Z_Construct_UScriptStruct_FAnimNode_Inertialization_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Source_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Source;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_Inertialization_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_Inertialization.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNode_Inertialization_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_Inertialization>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_Inertialization_Statics::NewProp_Source_MetaData[] = {
		{ "Category", "Links" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_Inertialization.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_Inertialization_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_Inertialization, Source), Z_Construct_UScriptStruct_FPoseLink, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_Inertialization_Statics::NewProp_Source_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_Inertialization_Statics::NewProp_Source_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_Inertialization_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Inertialization_Statics::NewProp_Source,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_Inertialization_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		Z_Construct_UScriptStruct_FAnimNode_Base,
		&NewStructOps,
		"AnimNode_Inertialization",
		sizeof(FAnimNode_Inertialization),
		alignof(FAnimNode_Inertialization),
		Z_Construct_UScriptStruct_FAnimNode_Inertialization_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_Inertialization_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_Inertialization_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_Inertialization_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_Inertialization()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimNode_Inertialization_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimNode_Inertialization"), sizeof(FAnimNode_Inertialization), Get_Z_Construct_UScriptStruct_FAnimNode_Inertialization_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAnimNode_Inertialization_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimNode_Inertialization_Hash() { return 4048812480U; }
class UScriptStruct* FInertializationPoseDiff::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FInertializationPoseDiff_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FInertializationPoseDiff, Z_Construct_UPackage__Script_Engine(), TEXT("InertializationPoseDiff"), sizeof(FInertializationPoseDiff), Get_Z_Construct_UScriptStruct_FInertializationPoseDiff_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FInertializationPoseDiff>()
{
	return FInertializationPoseDiff::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FInertializationPoseDiff(FInertializationPoseDiff::StaticStruct, TEXT("/Script/Engine"), TEXT("InertializationPoseDiff"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFInertializationPoseDiff
{
	FScriptStruct_Engine_StaticRegisterNativesFInertializationPoseDiff()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("InertializationPoseDiff")),new UScriptStruct::TCppStructOps<FInertializationPoseDiff>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFInertializationPoseDiff;
	struct Z_Construct_UScriptStruct_FInertializationPoseDiff_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInertializationPoseDiff_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_Inertialization.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FInertializationPoseDiff_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInertializationPoseDiff>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInertializationPoseDiff_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"InertializationPoseDiff",
		sizeof(FInertializationPoseDiff),
		alignof(FInertializationPoseDiff),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FInertializationPoseDiff_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInertializationPoseDiff_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FInertializationPoseDiff()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FInertializationPoseDiff_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("InertializationPoseDiff"), sizeof(FInertializationPoseDiff), Get_Z_Construct_UScriptStruct_FInertializationPoseDiff_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FInertializationPoseDiff_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FInertializationPoseDiff_Hash() { return 1563779287U; }
class UScriptStruct* FInertializationCurveDiff::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FInertializationCurveDiff_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FInertializationCurveDiff, Z_Construct_UPackage__Script_Engine(), TEXT("InertializationCurveDiff"), sizeof(FInertializationCurveDiff), Get_Z_Construct_UScriptStruct_FInertializationCurveDiff_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FInertializationCurveDiff>()
{
	return FInertializationCurveDiff::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FInertializationCurveDiff(FInertializationCurveDiff::StaticStruct, TEXT("/Script/Engine"), TEXT("InertializationCurveDiff"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFInertializationCurveDiff
{
	FScriptStruct_Engine_StaticRegisterNativesFInertializationCurveDiff()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("InertializationCurveDiff")),new UScriptStruct::TCppStructOps<FInertializationCurveDiff>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFInertializationCurveDiff;
	struct Z_Construct_UScriptStruct_FInertializationCurveDiff_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInertializationCurveDiff_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_Inertialization.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FInertializationCurveDiff_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInertializationCurveDiff>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInertializationCurveDiff_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"InertializationCurveDiff",
		sizeof(FInertializationCurveDiff),
		alignof(FInertializationCurveDiff),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FInertializationCurveDiff_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInertializationCurveDiff_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FInertializationCurveDiff()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FInertializationCurveDiff_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("InertializationCurveDiff"), sizeof(FInertializationCurveDiff), Get_Z_Construct_UScriptStruct_FInertializationCurveDiff_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FInertializationCurveDiff_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FInertializationCurveDiff_Hash() { return 1955770976U; }
class UScriptStruct* FInertializationBoneDiff::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FInertializationBoneDiff_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FInertializationBoneDiff, Z_Construct_UPackage__Script_Engine(), TEXT("InertializationBoneDiff"), sizeof(FInertializationBoneDiff), Get_Z_Construct_UScriptStruct_FInertializationBoneDiff_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FInertializationBoneDiff>()
{
	return FInertializationBoneDiff::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FInertializationBoneDiff(FInertializationBoneDiff::StaticStruct, TEXT("/Script/Engine"), TEXT("InertializationBoneDiff"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFInertializationBoneDiff
{
	FScriptStruct_Engine_StaticRegisterNativesFInertializationBoneDiff()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("InertializationBoneDiff")),new UScriptStruct::TCppStructOps<FInertializationBoneDiff>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFInertializationBoneDiff;
	struct Z_Construct_UScriptStruct_FInertializationBoneDiff_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInertializationBoneDiff_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_Inertialization.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FInertializationBoneDiff_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInertializationBoneDiff>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInertializationBoneDiff_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"InertializationBoneDiff",
		sizeof(FInertializationBoneDiff),
		alignof(FInertializationBoneDiff),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FInertializationBoneDiff_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInertializationBoneDiff_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FInertializationBoneDiff()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FInertializationBoneDiff_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("InertializationBoneDiff"), sizeof(FInertializationBoneDiff), Get_Z_Construct_UScriptStruct_FInertializationBoneDiff_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FInertializationBoneDiff_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FInertializationBoneDiff_Hash() { return 3405153254U; }
class UScriptStruct* FInertializationPose::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FInertializationPose_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FInertializationPose, Z_Construct_UPackage__Script_Engine(), TEXT("InertializationPose"), sizeof(FInertializationPose), Get_Z_Construct_UScriptStruct_FInertializationPose_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FInertializationPose>()
{
	return FInertializationPose::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FInertializationPose(FInertializationPose::StaticStruct, TEXT("/Script/Engine"), TEXT("InertializationPose"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFInertializationPose
{
	FScriptStruct_Engine_StaticRegisterNativesFInertializationPose()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("InertializationPose")),new UScriptStruct::TCppStructOps<FInertializationPose>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFInertializationPose;
	struct Z_Construct_UScriptStruct_FInertializationPose_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInertializationPose_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_Inertialization.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FInertializationPose_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInertializationPose>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInertializationPose_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"InertializationPose",
		sizeof(FInertializationPose),
		alignof(FInertializationPose),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FInertializationPose_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInertializationPose_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FInertializationPose()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FInertializationPose_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("InertializationPose"), sizeof(FInertializationPose), Get_Z_Construct_UScriptStruct_FInertializationPose_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FInertializationPose_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FInertializationPose_Hash() { return 3041193451U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
