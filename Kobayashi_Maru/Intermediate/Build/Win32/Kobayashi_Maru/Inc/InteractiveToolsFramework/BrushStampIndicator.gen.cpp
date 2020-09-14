// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InteractiveToolsFramework/Public/BaseGizmos/BrushStampIndicator.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBrushStampIndicator() {}
// Cross Module References
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UBrushStampIndicatorBuilder_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UBrushStampIndicatorBuilder();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveGizmoBuilder();
	UPackage* Z_Construct_UPackage__Script_InteractiveToolsFramework();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UBrushStampIndicator_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UBrushStampIndicator();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveGizmo();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	void UBrushStampIndicatorBuilder::StaticRegisterNativesUBrushStampIndicatorBuilder()
	{
	}
	UClass* Z_Construct_UClass_UBrushStampIndicatorBuilder_NoRegister()
	{
		return UBrushStampIndicatorBuilder::StaticClass();
	}
	struct Z_Construct_UClass_UBrushStampIndicatorBuilder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBrushStampIndicatorBuilder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveGizmoBuilder,
		(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBrushStampIndicatorBuilder_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BaseGizmos/BrushStampIndicator.h" },
		{ "ModuleRelativePath", "Public/BaseGizmos/BrushStampIndicator.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBrushStampIndicatorBuilder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBrushStampIndicatorBuilder>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBrushStampIndicatorBuilder_Statics::ClassParams = {
		&UBrushStampIndicatorBuilder::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UBrushStampIndicatorBuilder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBrushStampIndicatorBuilder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBrushStampIndicatorBuilder()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBrushStampIndicatorBuilder_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBrushStampIndicatorBuilder, 3037170197);
	template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<UBrushStampIndicatorBuilder>()
	{
		return UBrushStampIndicatorBuilder::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBrushStampIndicatorBuilder(Z_Construct_UClass_UBrushStampIndicatorBuilder, &UBrushStampIndicatorBuilder::StaticClass, TEXT("/Script/InteractiveToolsFramework"), TEXT("UBrushStampIndicatorBuilder"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBrushStampIndicatorBuilder);
	void UBrushStampIndicator::StaticRegisterNativesUBrushStampIndicator()
	{
	}
	UClass* Z_Construct_UClass_UBrushStampIndicator_NoRegister()
	{
		return UBrushStampIndicator::StaticClass();
	}
	struct Z_Construct_UClass_UBrushStampIndicator_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttachedComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AttachedComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SecondaryLineColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SecondaryLineColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SecondaryLineThickness_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SecondaryLineThickness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDrawSecondaryLines_MetaData[];
#endif
		static void NewProp_bDrawSecondaryLines_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDrawSecondaryLines;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDepthTested_MetaData[];
#endif
		static void NewProp_bDepthTested_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDepthTested;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LineThickness_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LineThickness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LineColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LineColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SampleStepCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_SampleStepCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDrawFalloffCircle_MetaData[];
#endif
		static void NewProp_bDrawFalloffCircle_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDrawFalloffCircle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDrawRadiusCircle_MetaData[];
#endif
		static void NewProp_bDrawRadiusCircle_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDrawRadiusCircle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDrawIndicatorLines_MetaData[];
#endif
		static void NewProp_bDrawIndicatorLines_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDrawIndicatorLines;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BrushNormal_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BrushNormal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BrushPosition_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BrushPosition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BrushFalloff_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BrushFalloff;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BrushRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BrushRadius;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBrushStampIndicator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveGizmo,
		(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBrushStampIndicator_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/*\n * UBrushStampIndicator is a simple 3D brush indicator. \n */" },
		{ "IncludePath", "BaseGizmos/BrushStampIndicator.h" },
		{ "ModuleRelativePath", "Public/BaseGizmos/BrushStampIndicator.h" },
		{ "ToolTip", "* UBrushStampIndicator is a simple 3D brush indicator." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBrushStampIndicator_Statics::NewProp_AttachedComponent_MetaData[] = {
		{ "Comment", "/**\n\x09 * Optional Component that will be transformed such that it tracks the Radius/Position/Normal\n\x09 */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BaseGizmos/BrushStampIndicator.h" },
		{ "ToolTip", "Optional Component that will be transformed such that it tracks the Radius/Position/Normal" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBrushStampIndicator_Statics::NewProp_AttachedComponent = { "AttachedComponent", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBrushStampIndicator, AttachedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBrushStampIndicator_Statics::NewProp_AttachedComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBrushStampIndicator_Statics::NewProp_AttachedComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBrushStampIndicator_Statics::NewProp_SecondaryLineColor_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseGizmos/BrushStampIndicator.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBrushStampIndicator_Statics::NewProp_SecondaryLineColor = { "SecondaryLineColor", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBrushStampIndicator, SecondaryLineColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UBrushStampIndicator_Statics::NewProp_SecondaryLineColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBrushStampIndicator_Statics::NewProp_SecondaryLineColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBrushStampIndicator_Statics::NewProp_SecondaryLineThickness_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseGizmos/BrushStampIndicator.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBrushStampIndicator_Statics::NewProp_SecondaryLineThickness = { "SecondaryLineThickness", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBrushStampIndicator, SecondaryLineThickness), METADATA_PARAMS(Z_Construct_UClass_UBrushStampIndicator_Statics::NewProp_SecondaryLineThickness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBrushStampIndicator_Statics::NewProp_SecondaryLineThickness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBrushStampIndicator_Statics::NewProp_bDrawSecondaryLines_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseGizmos/BrushStampIndicator.h" },
	};
#endif
	void Z_Construct_UClass_UBrushStampIndicator_Statics::NewProp_bDrawSecondaryLines_SetBit(void* Obj)
	{
		((UBrushStampIndicator*)Obj)->bDrawSecondaryLines = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBrushStampIndicator_Statics::NewProp_bDrawSecondaryLines = { "bDrawSecondaryLines", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UBrushStampIndicator), &Z_Construct_UClass_UBrushStampIndicator_Statics::NewProp_bDrawSecondaryLines_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBrushStampIndicator_Statics::NewProp_bDrawSecondaryLines_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBrushStampIndicator_Statics::NewProp_bDrawSecondaryLines_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBrushStampIndicator_Statics::NewProp_bDepthTested_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseGizmos/BrushStampIndicator.h" },
	};
#endif
	void Z_Construct_UClass_UBrushStampIndicator_Statics::NewProp_bDepthTested_SetBit(void* Obj)
	{
		((UBrushStampIndicator*)Obj)->bDepthTested = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBrushStampIndicator_Statics::NewProp_bDepthTested = { "bDepthTested", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UBrushStampIndicator), &Z_Construct_UClass_UBrushStampIndicator_Statics::NewProp_bDepthTested_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBrushStampIndicator_Statics::NewProp_bDepthTested_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBrushStampIndicator_Statics::NewProp_bDepthTested_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBrushStampIndicator_Statics::NewProp_LineThickness_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseGizmos/BrushStampIndicator.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBrushStampIndicator_Statics::NewProp_LineThickness = { "LineThickness", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBrushStampIndicator, LineThickness), METADATA_PARAMS(Z_Construct_UClass_UBrushStampIndicator_Statics::NewProp_LineThickness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBrushStampIndicator_Statics::NewProp_LineThickness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBrushStampIndicator_Statics::NewProp_LineColor_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseGizmos/BrushStampIndicator.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBrushStampIndicator_Statics::NewProp_LineColor = { "LineColor", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBrushStampIndicator, LineColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UBrushStampIndicator_Statics::NewProp_LineColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBrushStampIndicator_Statics::NewProp_LineColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBrushStampIndicator_Statics::NewProp_SampleStepCount_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseGizmos/BrushStampIndicator.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UBrushStampIndicator_Statics::NewProp_SampleStepCount = { "SampleStepCount", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBrushStampIndicator, SampleStepCount), METADATA_PARAMS(Z_Construct_UClass_UBrushStampIndicator_Statics::NewProp_SampleStepCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBrushStampIndicator_Statics::NewProp_SampleStepCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBrushStampIndicator_Statics::NewProp_bDrawFalloffCircle_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseGizmos/BrushStampIndicator.h" },
	};
#endif
	void Z_Construct_UClass_UBrushStampIndicator_Statics::NewProp_bDrawFalloffCircle_SetBit(void* Obj)
	{
		((UBrushStampIndicator*)Obj)->bDrawFalloffCircle = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBrushStampIndicator_Statics::NewProp_bDrawFalloffCircle = { "bDrawFalloffCircle", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UBrushStampIndicator), &Z_Construct_UClass_UBrushStampIndicator_Statics::NewProp_bDrawFalloffCircle_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBrushStampIndicator_Statics::NewProp_bDrawFalloffCircle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBrushStampIndicator_Statics::NewProp_bDrawFalloffCircle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBrushStampIndicator_Statics::NewProp_bDrawRadiusCircle_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseGizmos/BrushStampIndicator.h" },
	};
#endif
	void Z_Construct_UClass_UBrushStampIndicator_Statics::NewProp_bDrawRadiusCircle_SetBit(void* Obj)
	{
		((UBrushStampIndicator*)Obj)->bDrawRadiusCircle = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBrushStampIndicator_Statics::NewProp_bDrawRadiusCircle = { "bDrawRadiusCircle", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UBrushStampIndicator), &Z_Construct_UClass_UBrushStampIndicator_Statics::NewProp_bDrawRadiusCircle_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBrushStampIndicator_Statics::NewProp_bDrawRadiusCircle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBrushStampIndicator_Statics::NewProp_bDrawRadiusCircle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBrushStampIndicator_Statics::NewProp_bDrawIndicatorLines_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseGizmos/BrushStampIndicator.h" },
	};
#endif
	void Z_Construct_UClass_UBrushStampIndicator_Statics::NewProp_bDrawIndicatorLines_SetBit(void* Obj)
	{
		((UBrushStampIndicator*)Obj)->bDrawIndicatorLines = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBrushStampIndicator_Statics::NewProp_bDrawIndicatorLines = { "bDrawIndicatorLines", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UBrushStampIndicator), &Z_Construct_UClass_UBrushStampIndicator_Statics::NewProp_bDrawIndicatorLines_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBrushStampIndicator_Statics::NewProp_bDrawIndicatorLines_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBrushStampIndicator_Statics::NewProp_bDrawIndicatorLines_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBrushStampIndicator_Statics::NewProp_BrushNormal_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseGizmos/BrushStampIndicator.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBrushStampIndicator_Statics::NewProp_BrushNormal = { "BrushNormal", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBrushStampIndicator, BrushNormal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UBrushStampIndicator_Statics::NewProp_BrushNormal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBrushStampIndicator_Statics::NewProp_BrushNormal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBrushStampIndicator_Statics::NewProp_BrushPosition_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseGizmos/BrushStampIndicator.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBrushStampIndicator_Statics::NewProp_BrushPosition = { "BrushPosition", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBrushStampIndicator, BrushPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UBrushStampIndicator_Statics::NewProp_BrushPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBrushStampIndicator_Statics::NewProp_BrushPosition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBrushStampIndicator_Statics::NewProp_BrushFalloff_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseGizmos/BrushStampIndicator.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBrushStampIndicator_Statics::NewProp_BrushFalloff = { "BrushFalloff", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBrushStampIndicator, BrushFalloff), METADATA_PARAMS(Z_Construct_UClass_UBrushStampIndicator_Statics::NewProp_BrushFalloff_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBrushStampIndicator_Statics::NewProp_BrushFalloff_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBrushStampIndicator_Statics::NewProp_BrushRadius_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseGizmos/BrushStampIndicator.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBrushStampIndicator_Statics::NewProp_BrushRadius = { "BrushRadius", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBrushStampIndicator, BrushRadius), METADATA_PARAMS(Z_Construct_UClass_UBrushStampIndicator_Statics::NewProp_BrushRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBrushStampIndicator_Statics::NewProp_BrushRadius_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBrushStampIndicator_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBrushStampIndicator_Statics::NewProp_AttachedComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBrushStampIndicator_Statics::NewProp_SecondaryLineColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBrushStampIndicator_Statics::NewProp_SecondaryLineThickness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBrushStampIndicator_Statics::NewProp_bDrawSecondaryLines,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBrushStampIndicator_Statics::NewProp_bDepthTested,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBrushStampIndicator_Statics::NewProp_LineThickness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBrushStampIndicator_Statics::NewProp_LineColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBrushStampIndicator_Statics::NewProp_SampleStepCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBrushStampIndicator_Statics::NewProp_bDrawFalloffCircle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBrushStampIndicator_Statics::NewProp_bDrawRadiusCircle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBrushStampIndicator_Statics::NewProp_bDrawIndicatorLines,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBrushStampIndicator_Statics::NewProp_BrushNormal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBrushStampIndicator_Statics::NewProp_BrushPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBrushStampIndicator_Statics::NewProp_BrushFalloff,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBrushStampIndicator_Statics::NewProp_BrushRadius,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBrushStampIndicator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBrushStampIndicator>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBrushStampIndicator_Statics::ClassParams = {
		&UBrushStampIndicator::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBrushStampIndicator_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBrushStampIndicator_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UBrushStampIndicator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBrushStampIndicator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBrushStampIndicator()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBrushStampIndicator_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBrushStampIndicator, 2085291431);
	template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<UBrushStampIndicator>()
	{
		return UBrushStampIndicator::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBrushStampIndicator(Z_Construct_UClass_UBrushStampIndicator, &UBrushStampIndicator::StaticClass, TEXT("/Script/InteractiveToolsFramework"), TEXT("UBrushStampIndicator"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBrushStampIndicator);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
