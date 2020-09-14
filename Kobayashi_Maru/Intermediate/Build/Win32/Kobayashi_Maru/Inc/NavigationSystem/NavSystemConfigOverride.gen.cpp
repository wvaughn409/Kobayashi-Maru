// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NavigationSystem/Public/NavSystemConfigOverride.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNavSystemConfigOverride() {}
// Cross Module References
	NAVIGATIONSYSTEM_API UEnum* Z_Construct_UEnum_NavigationSystem_ENavSystemOverridePolicy();
	UPackage* Z_Construct_UPackage__Script_NavigationSystem();
	NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_ANavSystemConfigOverride_NoRegister();
	NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_ANavSystemConfigOverride();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UNavigationSystemConfig_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBillboardComponent_NoRegister();
// End Cross Module References
	static UEnum* ENavSystemOverridePolicy_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_NavigationSystem_ENavSystemOverridePolicy, Z_Construct_UPackage__Script_NavigationSystem(), TEXT("ENavSystemOverridePolicy"));
		}
		return Singleton;
	}
	template<> NAVIGATIONSYSTEM_API UEnum* StaticEnum<ENavSystemOverridePolicy>()
	{
		return ENavSystemOverridePolicy_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ENavSystemOverridePolicy(ENavSystemOverridePolicy_StaticEnum, TEXT("/Script/NavigationSystem"), TEXT("ENavSystemOverridePolicy"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_NavigationSystem_ENavSystemOverridePolicy_Hash() { return 742355866U; }
	UEnum* Z_Construct_UEnum_NavigationSystem_ENavSystemOverridePolicy()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_NavigationSystem();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ENavSystemOverridePolicy"), 0, Get_Z_Construct_UEnum_NavigationSystem_ENavSystemOverridePolicy_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ENavSystemOverridePolicy::Override", (int64)ENavSystemOverridePolicy::Override },
				{ "ENavSystemOverridePolicy::Append", (int64)ENavSystemOverridePolicy::Append },
				{ "ENavSystemOverridePolicy::Skip", (int64)ENavSystemOverridePolicy::Skip },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Append.Comment", "// the pre-exising nav system instance will be destroyed.\n" },
				{ "Append.Name", "ENavSystemOverridePolicy::Append" },
				{ "Append.ToolTip", "the pre-exising nav system instance will be destroyed." },
				{ "ModuleRelativePath", "Public/NavSystemConfigOverride.h" },
				{ "Override.Name", "ENavSystemOverridePolicy::Override" },
				{ "Skip.Comment", "// config information will be added to pre-existing nav system instance\n" },
				{ "Skip.Name", "ENavSystemOverridePolicy::Skip" },
				{ "Skip.ToolTip", "config information will be added to pre-existing nav system instance" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_NavigationSystem,
				nullptr,
				"ENavSystemOverridePolicy",
				"ENavSystemOverridePolicy",
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
#if WITH_EDITOR
	DEFINE_FUNCTION(ANavSystemConfigOverride::execApplyChanges)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ApplyChanges();
		P_NATIVE_END;
	}
#endif //WITH_EDITOR
	void ANavSystemConfigOverride::StaticRegisterNativesANavSystemConfigOverride()
	{
#if WITH_EDITOR
		UClass* Class = ANavSystemConfigOverride::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ApplyChanges", &ANavSystemConfigOverride::execApplyChanges },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
#endif // WITH_EDITOR
	}
#if WITH_EDITOR
	struct Z_Construct_UFunction_ANavSystemConfigOverride_ApplyChanges_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANavSystemConfigOverride_ApplyChanges_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Navigation" },
		{ "Comment", "/** made an explicit function since rebuilding navigation system can be expensive */" },
		{ "ModuleRelativePath", "Public/NavSystemConfigOverride.h" },
		{ "ToolTip", "made an explicit function since rebuilding navigation system can be expensive" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ANavSystemConfigOverride_ApplyChanges_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANavSystemConfigOverride, nullptr, "ApplyChanges", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x20020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANavSystemConfigOverride_ApplyChanges_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ANavSystemConfigOverride_ApplyChanges_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANavSystemConfigOverride_ApplyChanges()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ANavSystemConfigOverride_ApplyChanges_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
	UClass* Z_Construct_UClass_ANavSystemConfigOverride_NoRegister()
	{
		return ANavSystemConfigOverride::StaticClass();
	}
	struct Z_Construct_UClass_ANavSystemConfigOverride_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_EDITOR
		static const FClassFunctionLinkInfo FuncInfo[];
#endif //WITH_EDITOR
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLoadOnClient_MetaData[];
#endif
		static void NewProp_bLoadOnClient_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLoadOnClient;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverridePolicy_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_OverridePolicy;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_OverridePolicy_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NavigationSystemConfig_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NavigationSystemConfig;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpriteComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpriteComponent;
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANavSystemConfigOverride_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_NavigationSystem,
	};
#if WITH_EDITOR
	const FClassFunctionLinkInfo Z_Construct_UClass_ANavSystemConfigOverride_Statics::FuncInfo[] = {
#if WITH_EDITOR
		{ &Z_Construct_UFunction_ANavSystemConfigOverride_ApplyChanges, "ApplyChanges" }, // 3862203815
#endif //WITH_EDITOR
	};
#endif //WITH_EDITOR
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANavSystemConfigOverride_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Input Rendering Actor LOD Cooking" },
		{ "IncludePath", "NavSystemConfigOverride.h" },
		{ "ModuleRelativePath", "Public/NavSystemConfigOverride.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANavSystemConfigOverride_Statics::NewProp_bLoadOnClient_MetaData[] = {
		{ "Category", "Navigation" },
		{ "ModuleRelativePath", "Public/NavSystemConfigOverride.h" },
	};
#endif
	void Z_Construct_UClass_ANavSystemConfigOverride_Statics::NewProp_bLoadOnClient_SetBit(void* Obj)
	{
		((ANavSystemConfigOverride*)Obj)->bLoadOnClient = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ANavSystemConfigOverride_Statics::NewProp_bLoadOnClient = { "bLoadOnClient", nullptr, (EPropertyFlags)0x00200c0000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(ANavSystemConfigOverride), &Z_Construct_UClass_ANavSystemConfigOverride_Statics::NewProp_bLoadOnClient_SetBit, METADATA_PARAMS(Z_Construct_UClass_ANavSystemConfigOverride_Statics::NewProp_bLoadOnClient_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANavSystemConfigOverride_Statics::NewProp_bLoadOnClient_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANavSystemConfigOverride_Statics::NewProp_OverridePolicy_MetaData[] = {
		{ "Category", "Navigation" },
		{ "Comment", "/** If there's already a NavigationSystem instance in the world how should this nav override behave */" },
		{ "ModuleRelativePath", "Public/NavSystemConfigOverride.h" },
		{ "ToolTip", "If there's already a NavigationSystem instance in the world how should this nav override behave" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ANavSystemConfigOverride_Statics::NewProp_OverridePolicy = { "OverridePolicy", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANavSystemConfigOverride, OverridePolicy), Z_Construct_UEnum_NavigationSystem_ENavSystemOverridePolicy, METADATA_PARAMS(Z_Construct_UClass_ANavSystemConfigOverride_Statics::NewProp_OverridePolicy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANavSystemConfigOverride_Statics::NewProp_OverridePolicy_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ANavSystemConfigOverride_Statics::NewProp_OverridePolicy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANavSystemConfigOverride_Statics::NewProp_NavigationSystemConfig_MetaData[] = {
		{ "Category", "Navigation" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/NavSystemConfigOverride.h" },
		{ "NoResetToDefault", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANavSystemConfigOverride_Statics::NewProp_NavigationSystemConfig = { "NavigationSystemConfig", nullptr, (EPropertyFlags)0x002208000008001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANavSystemConfigOverride, NavigationSystemConfig), Z_Construct_UClass_UNavigationSystemConfig_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ANavSystemConfigOverride_Statics::NewProp_NavigationSystemConfig_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANavSystemConfigOverride_Statics::NewProp_NavigationSystemConfig_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANavSystemConfigOverride_Statics::NewProp_SpriteComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/NavSystemConfigOverride.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANavSystemConfigOverride_Statics::NewProp_SpriteComponent = { "SpriteComponent", nullptr, (EPropertyFlags)0x0040000800080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANavSystemConfigOverride, SpriteComponent), Z_Construct_UClass_UBillboardComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ANavSystemConfigOverride_Statics::NewProp_SpriteComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANavSystemConfigOverride_Statics::NewProp_SpriteComponent_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANavSystemConfigOverride_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavSystemConfigOverride_Statics::NewProp_bLoadOnClient,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavSystemConfigOverride_Statics::NewProp_OverridePolicy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavSystemConfigOverride_Statics::NewProp_OverridePolicy_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavSystemConfigOverride_Statics::NewProp_NavigationSystemConfig,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavSystemConfigOverride_Statics::NewProp_SpriteComponent,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANavSystemConfigOverride_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANavSystemConfigOverride>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANavSystemConfigOverride_Statics::ClassParams = {
		&ANavSystemConfigOverride::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		IF_WITH_EDITOR(FuncInfo, nullptr),
		Z_Construct_UClass_ANavSystemConfigOverride_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		IF_WITH_EDITOR(UE_ARRAY_COUNT(FuncInfo), 0),
		UE_ARRAY_COUNT(Z_Construct_UClass_ANavSystemConfigOverride_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ANavSystemConfigOverride_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANavSystemConfigOverride_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANavSystemConfigOverride()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANavSystemConfigOverride_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANavSystemConfigOverride, 1047200403);
	template<> NAVIGATIONSYSTEM_API UClass* StaticClass<ANavSystemConfigOverride>()
	{
		return ANavSystemConfigOverride::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANavSystemConfigOverride(Z_Construct_UClass_ANavSystemConfigOverride, &ANavSystemConfigOverride::StaticClass, TEXT("/Script/NavigationSystem"), TEXT("ANavSystemConfigOverride"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANavSystemConfigOverride);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
