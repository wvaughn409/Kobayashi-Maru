// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/AI/NavigationSystemBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNavigationSystemBase() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_FNavigationSystemRunMode();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UNavigationSystemBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UNavigationSystemBase();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
	static UEnum* FNavigationSystemRunMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_FNavigationSystemRunMode, Z_Construct_UPackage__Script_Engine(), TEXT("FNavigationSystemRunMode"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<FNavigationSystemRunMode>()
	{
		return FNavigationSystemRunMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_FNavigationSystemRunMode(FNavigationSystemRunMode_StaticEnum, TEXT("/Script/Engine"), TEXT("FNavigationSystemRunMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_FNavigationSystemRunMode_Hash() { return 3978371007U; }
	UEnum* Z_Construct_UEnum_Engine_FNavigationSystemRunMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("FNavigationSystemRunMode"), 0, Get_Z_Construct_UEnum_Engine_FNavigationSystemRunMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "FNavigationSystemRunMode::InvalidMode", (int64)FNavigationSystemRunMode::InvalidMode },
				{ "FNavigationSystemRunMode::GameMode", (int64)FNavigationSystemRunMode::GameMode },
				{ "FNavigationSystemRunMode::EditorMode", (int64)FNavigationSystemRunMode::EditorMode },
				{ "FNavigationSystemRunMode::SimulationMode", (int64)FNavigationSystemRunMode::SimulationMode },
				{ "FNavigationSystemRunMode::PIEMode", (int64)FNavigationSystemRunMode::PIEMode },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "EditorMode.Name", "FNavigationSystemRunMode::EditorMode" },
				{ "GameMode.Name", "FNavigationSystemRunMode::GameMode" },
				{ "InvalidMode.Name", "FNavigationSystemRunMode::InvalidMode" },
				{ "ModuleRelativePath", "Classes/AI/NavigationSystemBase.h" },
				{ "PIEMode.Name", "FNavigationSystemRunMode::PIEMode" },
				{ "SimulationMode.Name", "FNavigationSystemRunMode::SimulationMode" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"FNavigationSystemRunMode",
				"FNavigationSystemRunMode",
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
	void UNavigationSystemBase::StaticRegisterNativesUNavigationSystemBase()
	{
	}
	UClass* Z_Construct_UClass_UNavigationSystemBase_NoRegister()
	{
		return UNavigationSystemBase::StaticClass();
	}
	struct Z_Construct_UClass_UNavigationSystemBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNavigationSystemBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNavigationSystemBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AI/NavigationSystemBase.h" },
		{ "ModuleRelativePath", "Classes/AI/NavigationSystemBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNavigationSystemBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNavigationSystemBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UNavigationSystemBase_Statics::ClassParams = {
		&UNavigationSystemBase::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000ABu,
		METADATA_PARAMS(Z_Construct_UClass_UNavigationSystemBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNavigationSystemBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNavigationSystemBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UNavigationSystemBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UNavigationSystemBase, 1300642404);
	template<> ENGINE_API UClass* StaticClass<UNavigationSystemBase>()
	{
		return UNavigationSystemBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNavigationSystemBase(Z_Construct_UClass_UNavigationSystemBase, &UNavigationSystemBase::StaticClass, TEXT("/Script/Engine"), TEXT("UNavigationSystemBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNavigationSystemBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
