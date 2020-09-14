// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OculusMR/Private/OculusMR_BoundaryMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOculusMR_BoundaryMeshComponent() {}
// Cross Module References
	OCULUSMR_API UEnum* Z_Construct_UEnum_OculusMR_EOculusMR_BoundaryType();
	UPackage* Z_Construct_UPackage__Script_OculusMR();
	OCULUSMR_API UClass* Z_Construct_UClass_UOculusMR_BoundaryMeshComponent_NoRegister();
	OCULUSMR_API UClass* Z_Construct_UClass_UOculusMR_BoundaryMeshComponent();
	ENGINE_API UClass* Z_Construct_UClass_UMeshComponent();
	OCULUSMR_API UClass* Z_Construct_UClass_AOculusMR_CastingCameraActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterial_NoRegister();
// End Cross Module References
	static UEnum* EOculusMR_BoundaryType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_OculusMR_EOculusMR_BoundaryType, Z_Construct_UPackage__Script_OculusMR(), TEXT("EOculusMR_BoundaryType"));
		}
		return Singleton;
	}
	template<> OCULUSMR_API UEnum* StaticEnum<EOculusMR_BoundaryType>()
	{
		return EOculusMR_BoundaryType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EOculusMR_BoundaryType(EOculusMR_BoundaryType_StaticEnum, TEXT("/Script/OculusMR"), TEXT("EOculusMR_BoundaryType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_OculusMR_EOculusMR_BoundaryType_Hash() { return 1554853218U; }
	UEnum* Z_Construct_UEnum_OculusMR_EOculusMR_BoundaryType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_OculusMR();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EOculusMR_BoundaryType"), 0, Get_Z_Construct_UEnum_OculusMR_EOculusMR_BoundaryType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EOculusMR_BoundaryType::BT_OuterBoundary", (int64)EOculusMR_BoundaryType::BT_OuterBoundary },
				{ "EOculusMR_BoundaryType::BT_PlayArea", (int64)EOculusMR_BoundaryType::BT_PlayArea },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "BT_OuterBoundary.DisplayName", "OuterBoundary" },
				{ "BT_OuterBoundary.Name", "EOculusMR_BoundaryType::BT_OuterBoundary" },
				{ "BT_PlayArea.DisplayName", "PlayArea" },
				{ "BT_PlayArea.Name", "EOculusMR_BoundaryType::BT_PlayArea" },
				{ "ModuleRelativePath", "Private/OculusMR_BoundaryMeshComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_OculusMR,
				nullptr,
				"EOculusMR_BoundaryType",
				"EOculusMR_BoundaryType",
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
	void UOculusMR_BoundaryMeshComponent::StaticRegisterNativesUOculusMR_BoundaryMeshComponent()
	{
	}
	UClass* Z_Construct_UClass_UOculusMR_BoundaryMeshComponent_NoRegister()
	{
		return UOculusMR_BoundaryMeshComponent::StaticClass();
	}
	struct Z_Construct_UClass_UOculusMR_BoundaryMeshComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CastingCameraActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CastingCameraActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WhiteMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WhiteMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TopZ_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TopZ;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BottomZ_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BottomZ;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoundaryType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_BoundaryType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_BoundaryType_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOculusMR_BoundaryMeshComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMeshComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_OculusMR,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusMR_BoundaryMeshComponent_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "Rendering" },
		{ "Comment", "/** Component that allows you to specify custom triangle mesh geometry */" },
		{ "HideCategories", "Object LOD Physics Collision Mobility Trigger" },
		{ "IncludePath", "OculusMR_BoundaryMeshComponent.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Private/OculusMR_BoundaryMeshComponent.h" },
		{ "ToolTip", "Component that allows you to specify custom triangle mesh geometry" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusMR_BoundaryMeshComponent_Statics::NewProp_CastingCameraActor_MetaData[] = {
		{ "ModuleRelativePath", "Private/OculusMR_BoundaryMeshComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOculusMR_BoundaryMeshComponent_Statics::NewProp_CastingCameraActor = { "CastingCameraActor", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOculusMR_BoundaryMeshComponent, CastingCameraActor), Z_Construct_UClass_AOculusMR_CastingCameraActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UOculusMR_BoundaryMeshComponent_Statics::NewProp_CastingCameraActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOculusMR_BoundaryMeshComponent_Statics::NewProp_CastingCameraActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusMR_BoundaryMeshComponent_Statics::NewProp_WhiteMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Private/OculusMR_BoundaryMeshComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOculusMR_BoundaryMeshComponent_Statics::NewProp_WhiteMaterial = { "WhiteMaterial", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOculusMR_BoundaryMeshComponent, WhiteMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UOculusMR_BoundaryMeshComponent_Statics::NewProp_WhiteMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOculusMR_BoundaryMeshComponent_Statics::NewProp_WhiteMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusMR_BoundaryMeshComponent_Statics::NewProp_TopZ_MetaData[] = {
		{ "Category", "OculusMR" },
		{ "ModuleRelativePath", "Private/OculusMR_BoundaryMeshComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UOculusMR_BoundaryMeshComponent_Statics::NewProp_TopZ = { "TopZ", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOculusMR_BoundaryMeshComponent, TopZ), METADATA_PARAMS(Z_Construct_UClass_UOculusMR_BoundaryMeshComponent_Statics::NewProp_TopZ_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOculusMR_BoundaryMeshComponent_Statics::NewProp_TopZ_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusMR_BoundaryMeshComponent_Statics::NewProp_BottomZ_MetaData[] = {
		{ "Category", "OculusMR" },
		{ "ModuleRelativePath", "Private/OculusMR_BoundaryMeshComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UOculusMR_BoundaryMeshComponent_Statics::NewProp_BottomZ = { "BottomZ", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOculusMR_BoundaryMeshComponent, BottomZ), METADATA_PARAMS(Z_Construct_UClass_UOculusMR_BoundaryMeshComponent_Statics::NewProp_BottomZ_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOculusMR_BoundaryMeshComponent_Statics::NewProp_BottomZ_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusMR_BoundaryMeshComponent_Statics::NewProp_BoundaryType_MetaData[] = {
		{ "Category", "OculusMR" },
		{ "ModuleRelativePath", "Private/OculusMR_BoundaryMeshComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UOculusMR_BoundaryMeshComponent_Statics::NewProp_BoundaryType = { "BoundaryType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOculusMR_BoundaryMeshComponent, BoundaryType), Z_Construct_UEnum_OculusMR_EOculusMR_BoundaryType, METADATA_PARAMS(Z_Construct_UClass_UOculusMR_BoundaryMeshComponent_Statics::NewProp_BoundaryType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOculusMR_BoundaryMeshComponent_Statics::NewProp_BoundaryType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UOculusMR_BoundaryMeshComponent_Statics::NewProp_BoundaryType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOculusMR_BoundaryMeshComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusMR_BoundaryMeshComponent_Statics::NewProp_CastingCameraActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusMR_BoundaryMeshComponent_Statics::NewProp_WhiteMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusMR_BoundaryMeshComponent_Statics::NewProp_TopZ,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusMR_BoundaryMeshComponent_Statics::NewProp_BottomZ,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusMR_BoundaryMeshComponent_Statics::NewProp_BoundaryType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusMR_BoundaryMeshComponent_Statics::NewProp_BoundaryType_Underlying,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOculusMR_BoundaryMeshComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOculusMR_BoundaryMeshComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UOculusMR_BoundaryMeshComponent_Statics::ClassParams = {
		&UOculusMR_BoundaryMeshComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UOculusMR_BoundaryMeshComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UOculusMR_BoundaryMeshComponent_Statics::PropPointers),
		0,
		0x00A012A4u,
		METADATA_PARAMS(Z_Construct_UClass_UOculusMR_BoundaryMeshComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOculusMR_BoundaryMeshComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOculusMR_BoundaryMeshComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UOculusMR_BoundaryMeshComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UOculusMR_BoundaryMeshComponent, 1213818675);
	template<> OCULUSMR_API UClass* StaticClass<UOculusMR_BoundaryMeshComponent>()
	{
		return UOculusMR_BoundaryMeshComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UOculusMR_BoundaryMeshComponent(Z_Construct_UClass_UOculusMR_BoundaryMeshComponent, &UOculusMR_BoundaryMeshComponent::StaticClass, TEXT("/Script/OculusMR"), TEXT("UOculusMR_BoundaryMeshComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOculusMR_BoundaryMeshComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
