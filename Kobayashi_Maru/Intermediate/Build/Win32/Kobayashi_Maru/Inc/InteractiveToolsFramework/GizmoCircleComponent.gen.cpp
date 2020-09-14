// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InteractiveToolsFramework/Public/BaseGizmos/GizmoCircleComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGizmoCircleComponent() {}
// Cross Module References
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoCircleComponent_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoCircleComponent();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoBaseComponent();
	UPackage* Z_Construct_UPackage__Script_InteractiveToolsFramework();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	void UGizmoCircleComponent::StaticRegisterNativesUGizmoCircleComponent()
	{
	}
	UClass* Z_Construct_UClass_UGizmoCircleComponent_NoRegister()
	{
		return UGizmoCircleComponent::StaticClass();
	}
	struct Z_Construct_UClass_UGizmoCircleComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOnlyAllowFrontFacingHits_MetaData[];
#endif
		static void NewProp_bOnlyAllowFrontFacingHits_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOnlyAllowFrontFacingHits;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bViewAligned_MetaData[];
#endif
		static void NewProp_bViewAligned_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bViewAligned;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumSides_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_NumSides;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Thickness_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Thickness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Radius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Normal_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Normal;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGizmoCircleComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGizmoBaseComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoCircleComponent_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "Utility" },
		{ "Comment", "/**\n * Simple Component intended to be used as part of 3D Gizmos.\n * Draws a 3D circle based on parameters.\n */" },
		{ "HideCategories", "Physics Collision Mobile Physics Collision Mobile Mobility VirtualTexture Trigger" },
		{ "IncludePath", "BaseGizmos/GizmoCircleComponent.h" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoCircleComponent.h" },
		{ "ToolTip", "Simple Component intended to be used as part of 3D Gizmos.\nDraws a 3D circle based on parameters." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoCircleComponent_Statics::NewProp_bOnlyAllowFrontFacingHits_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoCircleComponent.h" },
	};
#endif
	void Z_Construct_UClass_UGizmoCircleComponent_Statics::NewProp_bOnlyAllowFrontFacingHits_SetBit(void* Obj)
	{
		((UGizmoCircleComponent*)Obj)->bOnlyAllowFrontFacingHits = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGizmoCircleComponent_Statics::NewProp_bOnlyAllowFrontFacingHits = { "bOnlyAllowFrontFacingHits", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGizmoCircleComponent), &Z_Construct_UClass_UGizmoCircleComponent_Statics::NewProp_bOnlyAllowFrontFacingHits_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGizmoCircleComponent_Statics::NewProp_bOnlyAllowFrontFacingHits_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoCircleComponent_Statics::NewProp_bOnlyAllowFrontFacingHits_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoCircleComponent_Statics::NewProp_bViewAligned_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoCircleComponent.h" },
	};
#endif
	void Z_Construct_UClass_UGizmoCircleComponent_Statics::NewProp_bViewAligned_SetBit(void* Obj)
	{
		((UGizmoCircleComponent*)Obj)->bViewAligned = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGizmoCircleComponent_Statics::NewProp_bViewAligned = { "bViewAligned", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGizmoCircleComponent), &Z_Construct_UClass_UGizmoCircleComponent_Statics::NewProp_bViewAligned_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGizmoCircleComponent_Statics::NewProp_bViewAligned_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoCircleComponent_Statics::NewProp_bViewAligned_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoCircleComponent_Statics::NewProp_NumSides_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoCircleComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UGizmoCircleComponent_Statics::NewProp_NumSides = { "NumSides", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGizmoCircleComponent, NumSides), METADATA_PARAMS(Z_Construct_UClass_UGizmoCircleComponent_Statics::NewProp_NumSides_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoCircleComponent_Statics::NewProp_NumSides_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoCircleComponent_Statics::NewProp_Thickness_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoCircleComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGizmoCircleComponent_Statics::NewProp_Thickness = { "Thickness", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGizmoCircleComponent, Thickness), METADATA_PARAMS(Z_Construct_UClass_UGizmoCircleComponent_Statics::NewProp_Thickness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoCircleComponent_Statics::NewProp_Thickness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoCircleComponent_Statics::NewProp_Radius_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoCircleComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGizmoCircleComponent_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGizmoCircleComponent, Radius), METADATA_PARAMS(Z_Construct_UClass_UGizmoCircleComponent_Statics::NewProp_Radius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoCircleComponent_Statics::NewProp_Radius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoCircleComponent_Statics::NewProp_Normal_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoCircleComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGizmoCircleComponent_Statics::NewProp_Normal = { "Normal", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGizmoCircleComponent, Normal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UGizmoCircleComponent_Statics::NewProp_Normal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoCircleComponent_Statics::NewProp_Normal_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGizmoCircleComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoCircleComponent_Statics::NewProp_bOnlyAllowFrontFacingHits,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoCircleComponent_Statics::NewProp_bViewAligned,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoCircleComponent_Statics::NewProp_NumSides,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoCircleComponent_Statics::NewProp_Thickness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoCircleComponent_Statics::NewProp_Radius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoCircleComponent_Statics::NewProp_Normal,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGizmoCircleComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGizmoCircleComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGizmoCircleComponent_Statics::ClassParams = {
		&UGizmoCircleComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGizmoCircleComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoCircleComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UGizmoCircleComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoCircleComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGizmoCircleComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGizmoCircleComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGizmoCircleComponent, 4258551149);
	template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<UGizmoCircleComponent>()
	{
		return UGizmoCircleComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGizmoCircleComponent(Z_Construct_UClass_UGizmoCircleComponent, &UGizmoCircleComponent::StaticClass, TEXT("/Script/InteractiveToolsFramework"), TEXT("UGizmoCircleComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGizmoCircleComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
