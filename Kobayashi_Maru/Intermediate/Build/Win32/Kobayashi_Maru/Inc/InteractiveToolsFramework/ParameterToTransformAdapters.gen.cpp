// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InteractiveToolsFramework/Public/BaseGizmos/ParameterToTransformAdapters.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParameterToTransformAdapters() {}
// Cross Module References
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoAxisTranslationParameterSource_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoAxisTranslationParameterSource();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoBaseFloatParameterSource();
	UPackage* Z_Construct_UPackage__Script_InteractiveToolsFramework();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	INTERACTIVETOOLSFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FGizmoFloatParameterChange();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoTransformSource_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoAxisSource_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoPlaneTranslationParameterSource_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoPlaneTranslationParameterSource();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoBaseVec2ParameterSource();
	INTERACTIVETOOLSFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FGizmoVec2ParameterChange();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoAxisRotationParameterSource_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoAxisRotationParameterSource();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoUniformScaleParameterSource_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoUniformScaleParameterSource();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoAxisScaleParameterSource_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoAxisScaleParameterSource();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoPlaneScaleParameterSource_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoPlaneScaleParameterSource();
// End Cross Module References
	void UGizmoAxisTranslationParameterSource::StaticRegisterNativesUGizmoAxisTranslationParameterSource()
	{
	}
	UClass* Z_Construct_UClass_UGizmoAxisTranslationParameterSource_NoRegister()
	{
		return UGizmoAxisTranslationParameterSource::StaticClass();
	}
	struct Z_Construct_UClass_UGizmoAxisTranslationParameterSource_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InitialTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InitialTransform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurTranslationOrigin_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CurTranslationOrigin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurTranslationAxis_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CurTranslationAxis;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastChange_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LastChange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Parameter_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Parameter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TransformSource_MetaData[];
#endif
		static const UE4CodeGen_Private::FInterfacePropertyParams NewProp_TransformSource;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AxisSource_MetaData[];
#endif
		static const UE4CodeGen_Private::FInterfacePropertyParams NewProp_AxisSource;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGizmoAxisTranslationParameterSource_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGizmoBaseFloatParameterSource,
		(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoAxisTranslationParameterSource_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UGizmoAxisTranslationParameterSource is an IGizmoFloatParameterSource implementation that\n * interprets the float value as the parameter of a line equation, and maps this parameter to a 3D translation \n * along a line with origin/direction given by an IGizmoAxisSource. This translation is applied to an IGizmoTransformSource.\n *\n * This ParameterSource is intended to be used to create 3D Axis Translation Gizmos.\n */" },
		{ "IncludePath", "BaseGizmos/ParameterToTransformAdapters.h" },
		{ "ModuleRelativePath", "Public/BaseGizmos/ParameterToTransformAdapters.h" },
		{ "ToolTip", "UGizmoAxisTranslationParameterSource is an IGizmoFloatParameterSource implementation that\ninterprets the float value as the parameter of a line equation, and maps this parameter to a 3D translation\nalong a line with origin/direction given by an IGizmoAxisSource. This translation is applied to an IGizmoTransformSource.\n\nThis ParameterSource is intended to be used to create 3D Axis Translation Gizmos." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoAxisTranslationParameterSource_Statics::NewProp_InitialTransform_MetaData[] = {
		{ "Comment", "/** Saved copy of Initial Transform for current parameter edit (only valid between BeginModify/EndModify) */" },
		{ "ModuleRelativePath", "Public/BaseGizmos/ParameterToTransformAdapters.h" },
		{ "ToolTip", "Saved copy of Initial Transform for current parameter edit (only valid between BeginModify/EndModify)" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGizmoAxisTranslationParameterSource_Statics::NewProp_InitialTransform = { "InitialTransform", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGizmoAxisTranslationParameterSource, InitialTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UClass_UGizmoAxisTranslationParameterSource_Statics::NewProp_InitialTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoAxisTranslationParameterSource_Statics::NewProp_InitialTransform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoAxisTranslationParameterSource_Statics::NewProp_CurTranslationOrigin_MetaData[] = {
		{ "Comment", "/** tranlsation origin for current parameter edit (only valid between BeginModify/EndModify) */" },
		{ "ModuleRelativePath", "Public/BaseGizmos/ParameterToTransformAdapters.h" },
		{ "ToolTip", "tranlsation origin for current parameter edit (only valid between BeginModify/EndModify)" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGizmoAxisTranslationParameterSource_Statics::NewProp_CurTranslationOrigin = { "CurTranslationOrigin", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGizmoAxisTranslationParameterSource, CurTranslationOrigin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UGizmoAxisTranslationParameterSource_Statics::NewProp_CurTranslationOrigin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoAxisTranslationParameterSource_Statics::NewProp_CurTranslationOrigin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoAxisTranslationParameterSource_Statics::NewProp_CurTranslationAxis_MetaData[] = {
		{ "Comment", "/** tranlsation axis for current parameter edit (only valid between BeginModify/EndModify) */" },
		{ "ModuleRelativePath", "Public/BaseGizmos/ParameterToTransformAdapters.h" },
		{ "ToolTip", "tranlsation axis for current parameter edit (only valid between BeginModify/EndModify)" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGizmoAxisTranslationParameterSource_Statics::NewProp_CurTranslationAxis = { "CurTranslationAxis", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGizmoAxisTranslationParameterSource, CurTranslationAxis), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UGizmoAxisTranslationParameterSource_Statics::NewProp_CurTranslationAxis_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoAxisTranslationParameterSource_Statics::NewProp_CurTranslationAxis_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoAxisTranslationParameterSource_Statics::NewProp_LastChange_MetaData[] = {
		{ "Comment", "/** Active parameter change (only valid between BeginModify/EndModify) */" },
		{ "ModuleRelativePath", "Public/BaseGizmos/ParameterToTransformAdapters.h" },
		{ "ToolTip", "Active parameter change (only valid between BeginModify/EndModify)" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGizmoAxisTranslationParameterSource_Statics::NewProp_LastChange = { "LastChange", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGizmoAxisTranslationParameterSource, LastChange), Z_Construct_UScriptStruct_FGizmoFloatParameterChange, METADATA_PARAMS(Z_Construct_UClass_UGizmoAxisTranslationParameterSource_Statics::NewProp_LastChange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoAxisTranslationParameterSource_Statics::NewProp_LastChange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoAxisTranslationParameterSource_Statics::NewProp_Parameter_MetaData[] = {
		{ "Comment", "/** Parameter is the line-equation parameter that this FloatParameterSource provides */" },
		{ "ModuleRelativePath", "Public/BaseGizmos/ParameterToTransformAdapters.h" },
		{ "ToolTip", "Parameter is the line-equation parameter that this FloatParameterSource provides" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGizmoAxisTranslationParameterSource_Statics::NewProp_Parameter = { "Parameter", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGizmoAxisTranslationParameterSource, Parameter), METADATA_PARAMS(Z_Construct_UClass_UGizmoAxisTranslationParameterSource_Statics::NewProp_Parameter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoAxisTranslationParameterSource_Statics::NewProp_Parameter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoAxisTranslationParameterSource_Statics::NewProp_TransformSource_MetaData[] = {
		{ "Comment", "/** This TransformSource is updated by applying the constructed 3D translation */" },
		{ "ModuleRelativePath", "Public/BaseGizmos/ParameterToTransformAdapters.h" },
		{ "ToolTip", "This TransformSource is updated by applying the constructed 3D translation" },
	};
#endif
	const UE4CodeGen_Private::FInterfacePropertyParams Z_Construct_UClass_UGizmoAxisTranslationParameterSource_Statics::NewProp_TransformSource = { "TransformSource", nullptr, (EPropertyFlags)0x0014000000000000, UE4CodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGizmoAxisTranslationParameterSource, TransformSource), Z_Construct_UClass_UGizmoTransformSource_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGizmoAxisTranslationParameterSource_Statics::NewProp_TransformSource_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoAxisTranslationParameterSource_Statics::NewProp_TransformSource_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoAxisTranslationParameterSource_Statics::NewProp_AxisSource_MetaData[] = {
		{ "Comment", "/** The Parameter line-equation value is converted to a 3D Translation along this Axis */" },
		{ "ModuleRelativePath", "Public/BaseGizmos/ParameterToTransformAdapters.h" },
		{ "ToolTip", "The Parameter line-equation value is converted to a 3D Translation along this Axis" },
	};
#endif
	const UE4CodeGen_Private::FInterfacePropertyParams Z_Construct_UClass_UGizmoAxisTranslationParameterSource_Statics::NewProp_AxisSource = { "AxisSource", nullptr, (EPropertyFlags)0x0014000000000000, UE4CodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGizmoAxisTranslationParameterSource, AxisSource), Z_Construct_UClass_UGizmoAxisSource_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGizmoAxisTranslationParameterSource_Statics::NewProp_AxisSource_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoAxisTranslationParameterSource_Statics::NewProp_AxisSource_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGizmoAxisTranslationParameterSource_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoAxisTranslationParameterSource_Statics::NewProp_InitialTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoAxisTranslationParameterSource_Statics::NewProp_CurTranslationOrigin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoAxisTranslationParameterSource_Statics::NewProp_CurTranslationAxis,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoAxisTranslationParameterSource_Statics::NewProp_LastChange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoAxisTranslationParameterSource_Statics::NewProp_Parameter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoAxisTranslationParameterSource_Statics::NewProp_TransformSource,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoAxisTranslationParameterSource_Statics::NewProp_AxisSource,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGizmoAxisTranslationParameterSource_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGizmoAxisTranslationParameterSource>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGizmoAxisTranslationParameterSource_Statics::ClassParams = {
		&UGizmoAxisTranslationParameterSource::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGizmoAxisTranslationParameterSource_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoAxisTranslationParameterSource_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGizmoAxisTranslationParameterSource_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoAxisTranslationParameterSource_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGizmoAxisTranslationParameterSource()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGizmoAxisTranslationParameterSource_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGizmoAxisTranslationParameterSource, 2691382942);
	template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<UGizmoAxisTranslationParameterSource>()
	{
		return UGizmoAxisTranslationParameterSource::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGizmoAxisTranslationParameterSource(Z_Construct_UClass_UGizmoAxisTranslationParameterSource, &UGizmoAxisTranslationParameterSource::StaticClass, TEXT("/Script/InteractiveToolsFramework"), TEXT("UGizmoAxisTranslationParameterSource"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGizmoAxisTranslationParameterSource);
	void UGizmoPlaneTranslationParameterSource::StaticRegisterNativesUGizmoPlaneTranslationParameterSource()
	{
	}
	UClass* Z_Construct_UClass_UGizmoPlaneTranslationParameterSource_NoRegister()
	{
		return UGizmoPlaneTranslationParameterSource::StaticClass();
	}
	struct Z_Construct_UClass_UGizmoPlaneTranslationParameterSource_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InitialTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InitialTransform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurTranslationAxisY_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CurTranslationAxisY;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurTranslationAxisX_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CurTranslationAxisX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurTranslationNormal_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CurTranslationNormal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurTranslationOrigin_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CurTranslationOrigin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastChange_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LastChange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Parameter_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Parameter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TransformSource_MetaData[];
#endif
		static const UE4CodeGen_Private::FInterfacePropertyParams NewProp_TransformSource;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AxisSource_MetaData[];
#endif
		static const UE4CodeGen_Private::FInterfacePropertyParams NewProp_AxisSource;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGizmoPlaneTranslationParameterSource_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGizmoBaseVec2ParameterSource,
		(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoPlaneTranslationParameterSource_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UGizmoAxisRotationParameterSource is an IGizmoVec2ParameterSource implementation that\n * interprets the FVector2D parameter as a position in a 2D plane, and maps this position to a 3D translation\n * a plane with origin/normal given by an IGizmoAxisSource. This translation is applied to an IGizmoTransformSource.\n * \n * This ParameterSource is intended to be used to create 3D Plane Translation Gizmos.\n */" },
		{ "IncludePath", "BaseGizmos/ParameterToTransformAdapters.h" },
		{ "ModuleRelativePath", "Public/BaseGizmos/ParameterToTransformAdapters.h" },
		{ "ToolTip", "UGizmoAxisRotationParameterSource is an IGizmoVec2ParameterSource implementation that\ninterprets the FVector2D parameter as a position in a 2D plane, and maps this position to a 3D translation\na plane with origin/normal given by an IGizmoAxisSource. This translation is applied to an IGizmoTransformSource.\n\nThis ParameterSource is intended to be used to create 3D Plane Translation Gizmos." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoPlaneTranslationParameterSource_Statics::NewProp_InitialTransform_MetaData[] = {
		{ "Comment", "/** Saved copy of Initial Transform for current parameter edit (only valid between BeginModify/EndModify) */" },
		{ "ModuleRelativePath", "Public/BaseGizmos/ParameterToTransformAdapters.h" },
		{ "ToolTip", "Saved copy of Initial Transform for current parameter edit (only valid between BeginModify/EndModify)" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGizmoPlaneTranslationParameterSource_Statics::NewProp_InitialTransform = { "InitialTransform", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGizmoPlaneTranslationParameterSource, InitialTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UClass_UGizmoPlaneTranslationParameterSource_Statics::NewProp_InitialTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoPlaneTranslationParameterSource_Statics::NewProp_InitialTransform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoPlaneTranslationParameterSource_Statics::NewProp_CurTranslationAxisY_MetaData[] = {
		{ "Comment", "/** in-plane axis Y for current parameter edit (only valid between BeginModify/EndModify) */" },
		{ "ModuleRelativePath", "Public/BaseGizmos/ParameterToTransformAdapters.h" },
		{ "ToolTip", "in-plane axis Y for current parameter edit (only valid between BeginModify/EndModify)" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGizmoPlaneTranslationParameterSource_Statics::NewProp_CurTranslationAxisY = { "CurTranslationAxisY", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGizmoPlaneTranslationParameterSource, CurTranslationAxisY), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UGizmoPlaneTranslationParameterSource_Statics::NewProp_CurTranslationAxisY_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoPlaneTranslationParameterSource_Statics::NewProp_CurTranslationAxisY_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoPlaneTranslationParameterSource_Statics::NewProp_CurTranslationAxisX_MetaData[] = {
		{ "Comment", "/** in-plane axis X for current parameter edit (only valid between BeginModify/EndModify) */" },
		{ "ModuleRelativePath", "Public/BaseGizmos/ParameterToTransformAdapters.h" },
		{ "ToolTip", "in-plane axis X for current parameter edit (only valid between BeginModify/EndModify)" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGizmoPlaneTranslationParameterSource_Statics::NewProp_CurTranslationAxisX = { "CurTranslationAxisX", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGizmoPlaneTranslationParameterSource, CurTranslationAxisX), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UGizmoPlaneTranslationParameterSource_Statics::NewProp_CurTranslationAxisX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoPlaneTranslationParameterSource_Statics::NewProp_CurTranslationAxisX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoPlaneTranslationParameterSource_Statics::NewProp_CurTranslationNormal_MetaData[] = {
		{ "Comment", "/** plane normal for current parameter edit (only valid between BeginModify/EndModify) */" },
		{ "ModuleRelativePath", "Public/BaseGizmos/ParameterToTransformAdapters.h" },
		{ "ToolTip", "plane normal for current parameter edit (only valid between BeginModify/EndModify)" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGizmoPlaneTranslationParameterSource_Statics::NewProp_CurTranslationNormal = { "CurTranslationNormal", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGizmoPlaneTranslationParameterSource, CurTranslationNormal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UGizmoPlaneTranslationParameterSource_Statics::NewProp_CurTranslationNormal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoPlaneTranslationParameterSource_Statics::NewProp_CurTranslationNormal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoPlaneTranslationParameterSource_Statics::NewProp_CurTranslationOrigin_MetaData[] = {
		{ "Comment", "/** plane origin for current parameter edit (only valid between BeginModify/EndModify) */" },
		{ "ModuleRelativePath", "Public/BaseGizmos/ParameterToTransformAdapters.h" },
		{ "ToolTip", "plane origin for current parameter edit (only valid between BeginModify/EndModify)" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGizmoPlaneTranslationParameterSource_Statics::NewProp_CurTranslationOrigin = { "CurTranslationOrigin", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGizmoPlaneTranslationParameterSource, CurTranslationOrigin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UGizmoPlaneTranslationParameterSource_Statics::NewProp_CurTranslationOrigin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoPlaneTranslationParameterSource_Statics::NewProp_CurTranslationOrigin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoPlaneTranslationParameterSource_Statics::NewProp_LastChange_MetaData[] = {
		{ "Comment", "/** Active parameter change (only valid between BeginModify/EndModify) */" },
		{ "ModuleRelativePath", "Public/BaseGizmos/ParameterToTransformAdapters.h" },
		{ "ToolTip", "Active parameter change (only valid between BeginModify/EndModify)" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGizmoPlaneTranslationParameterSource_Statics::NewProp_LastChange = { "LastChange", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGizmoPlaneTranslationParameterSource, LastChange), Z_Construct_UScriptStruct_FGizmoVec2ParameterChange, METADATA_PARAMS(Z_Construct_UClass_UGizmoPlaneTranslationParameterSource_Statics::NewProp_LastChange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoPlaneTranslationParameterSource_Statics::NewProp_LastChange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoPlaneTranslationParameterSource_Statics::NewProp_Parameter_MetaData[] = {
		{ "Comment", "/** Parameter is the two line-equation parameters that this Vec2ParameterSource provides */" },
		{ "ModuleRelativePath", "Public/BaseGizmos/ParameterToTransformAdapters.h" },
		{ "ToolTip", "Parameter is the two line-equation parameters that this Vec2ParameterSource provides" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGizmoPlaneTranslationParameterSource_Statics::NewProp_Parameter = { "Parameter", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGizmoPlaneTranslationParameterSource, Parameter), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UGizmoPlaneTranslationParameterSource_Statics::NewProp_Parameter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoPlaneTranslationParameterSource_Statics::NewProp_Parameter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoPlaneTranslationParameterSource_Statics::NewProp_TransformSource_MetaData[] = {
		{ "Comment", "/** This TransformSource is updated by applying the constructed 3D translation */" },
		{ "ModuleRelativePath", "Public/BaseGizmos/ParameterToTransformAdapters.h" },
		{ "ToolTip", "This TransformSource is updated by applying the constructed 3D translation" },
	};
#endif
	const UE4CodeGen_Private::FInterfacePropertyParams Z_Construct_UClass_UGizmoPlaneTranslationParameterSource_Statics::NewProp_TransformSource = { "TransformSource", nullptr, (EPropertyFlags)0x0014000000000000, UE4CodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGizmoPlaneTranslationParameterSource, TransformSource), Z_Construct_UClass_UGizmoTransformSource_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGizmoPlaneTranslationParameterSource_Statics::NewProp_TransformSource_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoPlaneTranslationParameterSource_Statics::NewProp_TransformSource_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoPlaneTranslationParameterSource_Statics::NewProp_AxisSource_MetaData[] = {
		{ "Comment", "/** AxisSource provides the 3D plane (origin/normal/u/v) that is used to interpret the 2D parameters */" },
		{ "ModuleRelativePath", "Public/BaseGizmos/ParameterToTransformAdapters.h" },
		{ "ToolTip", "AxisSource provides the 3D plane (origin/normal/u/v) that is used to interpret the 2D parameters" },
	};
#endif
	const UE4CodeGen_Private::FInterfacePropertyParams Z_Construct_UClass_UGizmoPlaneTranslationParameterSource_Statics::NewProp_AxisSource = { "AxisSource", nullptr, (EPropertyFlags)0x0014000000000000, UE4CodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGizmoPlaneTranslationParameterSource, AxisSource), Z_Construct_UClass_UGizmoAxisSource_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGizmoPlaneTranslationParameterSource_Statics::NewProp_AxisSource_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoPlaneTranslationParameterSource_Statics::NewProp_AxisSource_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGizmoPlaneTranslationParameterSource_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoPlaneTranslationParameterSource_Statics::NewProp_InitialTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoPlaneTranslationParameterSource_Statics::NewProp_CurTranslationAxisY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoPlaneTranslationParameterSource_Statics::NewProp_CurTranslationAxisX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoPlaneTranslationParameterSource_Statics::NewProp_CurTranslationNormal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoPlaneTranslationParameterSource_Statics::NewProp_CurTranslationOrigin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoPlaneTranslationParameterSource_Statics::NewProp_LastChange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoPlaneTranslationParameterSource_Statics::NewProp_Parameter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoPlaneTranslationParameterSource_Statics::NewProp_TransformSource,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoPlaneTranslationParameterSource_Statics::NewProp_AxisSource,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGizmoPlaneTranslationParameterSource_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGizmoPlaneTranslationParameterSource>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGizmoPlaneTranslationParameterSource_Statics::ClassParams = {
		&UGizmoPlaneTranslationParameterSource::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGizmoPlaneTranslationParameterSource_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoPlaneTranslationParameterSource_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGizmoPlaneTranslationParameterSource_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoPlaneTranslationParameterSource_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGizmoPlaneTranslationParameterSource()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGizmoPlaneTranslationParameterSource_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGizmoPlaneTranslationParameterSource, 2476759552);
	template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<UGizmoPlaneTranslationParameterSource>()
	{
		return UGizmoPlaneTranslationParameterSource::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGizmoPlaneTranslationParameterSource(Z_Construct_UClass_UGizmoPlaneTranslationParameterSource, &UGizmoPlaneTranslationParameterSource::StaticClass, TEXT("/Script/InteractiveToolsFramework"), TEXT("UGizmoPlaneTranslationParameterSource"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGizmoPlaneTranslationParameterSource);
	void UGizmoAxisRotationParameterSource::StaticRegisterNativesUGizmoAxisRotationParameterSource()
	{
	}
	UClass* Z_Construct_UClass_UGizmoAxisRotationParameterSource_NoRegister()
	{
		return UGizmoAxisRotationParameterSource::StaticClass();
	}
	struct Z_Construct_UClass_UGizmoAxisRotationParameterSource_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InitialTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InitialTransform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurRotationOrigin_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CurRotationOrigin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurRotationAxis_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CurRotationAxis;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastChange_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LastChange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Angle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Angle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TransformSource_MetaData[];
#endif
		static const UE4CodeGen_Private::FInterfacePropertyParams NewProp_TransformSource;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AxisSource_MetaData[];
#endif
		static const UE4CodeGen_Private::FInterfacePropertyParams NewProp_AxisSource;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGizmoAxisRotationParameterSource_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGizmoBaseFloatParameterSource,
		(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoAxisRotationParameterSource_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UGizmoAxisRotationParameterSource is an IGizmoFloatParameterSource implementation that\n * interprets the float parameter as an angle, and maps this angle to a 3D rotation\n * around an IGizmoAxisSource (ie 3D axis). This rotation is applied to an IGizmoTransformSource.\n * This ParameterSource is intended to be used to create 3D Rotation Gizmos.\n */" },
		{ "IncludePath", "BaseGizmos/ParameterToTransformAdapters.h" },
		{ "ModuleRelativePath", "Public/BaseGizmos/ParameterToTransformAdapters.h" },
		{ "ToolTip", "UGizmoAxisRotationParameterSource is an IGizmoFloatParameterSource implementation that\ninterprets the float parameter as an angle, and maps this angle to a 3D rotation\naround an IGizmoAxisSource (ie 3D axis). This rotation is applied to an IGizmoTransformSource.\nThis ParameterSource is intended to be used to create 3D Rotation Gizmos." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoAxisRotationParameterSource_Statics::NewProp_InitialTransform_MetaData[] = {
		{ "Comment", "/** Saved copy of Initial Transform for current parameter edit (only valid between BeginModify/EndModify) */" },
		{ "ModuleRelativePath", "Public/BaseGizmos/ParameterToTransformAdapters.h" },
		{ "ToolTip", "Saved copy of Initial Transform for current parameter edit (only valid between BeginModify/EndModify)" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGizmoAxisRotationParameterSource_Statics::NewProp_InitialTransform = { "InitialTransform", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGizmoAxisRotationParameterSource, InitialTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UClass_UGizmoAxisRotationParameterSource_Statics::NewProp_InitialTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoAxisRotationParameterSource_Statics::NewProp_InitialTransform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoAxisRotationParameterSource_Statics::NewProp_CurRotationOrigin_MetaData[] = {
		{ "Comment", "/** Rotation origin for current parameter edit (only valid between BeginModify/EndModify) */" },
		{ "ModuleRelativePath", "Public/BaseGizmos/ParameterToTransformAdapters.h" },
		{ "ToolTip", "Rotation origin for current parameter edit (only valid between BeginModify/EndModify)" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGizmoAxisRotationParameterSource_Statics::NewProp_CurRotationOrigin = { "CurRotationOrigin", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGizmoAxisRotationParameterSource, CurRotationOrigin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UGizmoAxisRotationParameterSource_Statics::NewProp_CurRotationOrigin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoAxisRotationParameterSource_Statics::NewProp_CurRotationOrigin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoAxisRotationParameterSource_Statics::NewProp_CurRotationAxis_MetaData[] = {
		{ "Comment", "/** Rotation axis for current parameter edit (only valid between BeginModify/EndModify) */" },
		{ "ModuleRelativePath", "Public/BaseGizmos/ParameterToTransformAdapters.h" },
		{ "ToolTip", "Rotation axis for current parameter edit (only valid between BeginModify/EndModify)" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGizmoAxisRotationParameterSource_Statics::NewProp_CurRotationAxis = { "CurRotationAxis", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGizmoAxisRotationParameterSource, CurRotationAxis), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UGizmoAxisRotationParameterSource_Statics::NewProp_CurRotationAxis_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoAxisRotationParameterSource_Statics::NewProp_CurRotationAxis_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoAxisRotationParameterSource_Statics::NewProp_LastChange_MetaData[] = {
		{ "Comment", "/** Active parameter change (only valid between BeginModify/EndModify) */" },
		{ "ModuleRelativePath", "Public/BaseGizmos/ParameterToTransformAdapters.h" },
		{ "ToolTip", "Active parameter change (only valid between BeginModify/EndModify)" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGizmoAxisRotationParameterSource_Statics::NewProp_LastChange = { "LastChange", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGizmoAxisRotationParameterSource, LastChange), Z_Construct_UScriptStruct_FGizmoFloatParameterChange, METADATA_PARAMS(Z_Construct_UClass_UGizmoAxisRotationParameterSource_Statics::NewProp_LastChange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoAxisRotationParameterSource_Statics::NewProp_LastChange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoAxisRotationParameterSource_Statics::NewProp_Angle_MetaData[] = {
		{ "Comment", "/** Angle is the parameter that this FloatParameterSource provides */" },
		{ "ModuleRelativePath", "Public/BaseGizmos/ParameterToTransformAdapters.h" },
		{ "ToolTip", "Angle is the parameter that this FloatParameterSource provides" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGizmoAxisRotationParameterSource_Statics::NewProp_Angle = { "Angle", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGizmoAxisRotationParameterSource, Angle), METADATA_PARAMS(Z_Construct_UClass_UGizmoAxisRotationParameterSource_Statics::NewProp_Angle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoAxisRotationParameterSource_Statics::NewProp_Angle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoAxisRotationParameterSource_Statics::NewProp_TransformSource_MetaData[] = {
		{ "Comment", "/** This TransformSource is updated by applying the constructed 3D rotation */" },
		{ "ModuleRelativePath", "Public/BaseGizmos/ParameterToTransformAdapters.h" },
		{ "ToolTip", "This TransformSource is updated by applying the constructed 3D rotation" },
	};
#endif
	const UE4CodeGen_Private::FInterfacePropertyParams Z_Construct_UClass_UGizmoAxisRotationParameterSource_Statics::NewProp_TransformSource = { "TransformSource", nullptr, (EPropertyFlags)0x0014000000000000, UE4CodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGizmoAxisRotationParameterSource, TransformSource), Z_Construct_UClass_UGizmoTransformSource_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGizmoAxisRotationParameterSource_Statics::NewProp_TransformSource_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoAxisRotationParameterSource_Statics::NewProp_TransformSource_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoAxisRotationParameterSource_Statics::NewProp_AxisSource_MetaData[] = {
		{ "Comment", "/** float-parameter Angle is mapped to a 3D Rotation around this Axis */" },
		{ "ModuleRelativePath", "Public/BaseGizmos/ParameterToTransformAdapters.h" },
		{ "ToolTip", "float-parameter Angle is mapped to a 3D Rotation around this Axis" },
	};
#endif
	const UE4CodeGen_Private::FInterfacePropertyParams Z_Construct_UClass_UGizmoAxisRotationParameterSource_Statics::NewProp_AxisSource = { "AxisSource", nullptr, (EPropertyFlags)0x0014000000000000, UE4CodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGizmoAxisRotationParameterSource, AxisSource), Z_Construct_UClass_UGizmoAxisSource_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGizmoAxisRotationParameterSource_Statics::NewProp_AxisSource_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoAxisRotationParameterSource_Statics::NewProp_AxisSource_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGizmoAxisRotationParameterSource_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoAxisRotationParameterSource_Statics::NewProp_InitialTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoAxisRotationParameterSource_Statics::NewProp_CurRotationOrigin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoAxisRotationParameterSource_Statics::NewProp_CurRotationAxis,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoAxisRotationParameterSource_Statics::NewProp_LastChange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoAxisRotationParameterSource_Statics::NewProp_Angle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoAxisRotationParameterSource_Statics::NewProp_TransformSource,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoAxisRotationParameterSource_Statics::NewProp_AxisSource,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGizmoAxisRotationParameterSource_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGizmoAxisRotationParameterSource>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGizmoAxisRotationParameterSource_Statics::ClassParams = {
		&UGizmoAxisRotationParameterSource::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGizmoAxisRotationParameterSource_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoAxisRotationParameterSource_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGizmoAxisRotationParameterSource_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoAxisRotationParameterSource_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGizmoAxisRotationParameterSource()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGizmoAxisRotationParameterSource_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGizmoAxisRotationParameterSource, 2110162);
	template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<UGizmoAxisRotationParameterSource>()
	{
		return UGizmoAxisRotationParameterSource::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGizmoAxisRotationParameterSource(Z_Construct_UClass_UGizmoAxisRotationParameterSource, &UGizmoAxisRotationParameterSource::StaticClass, TEXT("/Script/InteractiveToolsFramework"), TEXT("UGizmoAxisRotationParameterSource"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGizmoAxisRotationParameterSource);
	void UGizmoUniformScaleParameterSource::StaticRegisterNativesUGizmoUniformScaleParameterSource()
	{
	}
	UClass* Z_Construct_UClass_UGizmoUniformScaleParameterSource_NoRegister()
	{
		return UGizmoUniformScaleParameterSource::StaticClass();
	}
	struct Z_Construct_UClass_UGizmoUniformScaleParameterSource_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InitialTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InitialTransform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurScaleAxisY_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CurScaleAxisY;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurScaleAxisX_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CurScaleAxisX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurScaleNormal_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CurScaleNormal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurScaleOrigin_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CurScaleOrigin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastChange_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LastChange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Parameter_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Parameter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScaleMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ScaleMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TransformSource_MetaData[];
#endif
		static const UE4CodeGen_Private::FInterfacePropertyParams NewProp_TransformSource;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AxisSource_MetaData[];
#endif
		static const UE4CodeGen_Private::FInterfacePropertyParams NewProp_AxisSource;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGizmoUniformScaleParameterSource_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGizmoBaseVec2ParameterSource,
		(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoUniformScaleParameterSource_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n  * UGizmoUniformScaleParameterSource is an IGizmoVec2ParameterSource implementation that\n  * interprets the Vec2 parameter as the position in a 2D plane, and maps this parameter to a\n  * change in a uniform scale value. This scale is applied to an IGizmoTransformSource.\n  * \n  * The X/Y plane parameter deltas are converted to a uniform scale delta simply by adding them.\n  * This assumpes that the 3D plane is oriented such that \"positive\" along the X and Y \n  * tangent axes corresponds to something semantically meaningful. It's up to the client to do this.\n  *\n  * This ParameterSource is intended to be used to create 3D Uniform Scale Gizmos.\n  */" },
		{ "IncludePath", "BaseGizmos/ParameterToTransformAdapters.h" },
		{ "ModuleRelativePath", "Public/BaseGizmos/ParameterToTransformAdapters.h" },
		{ "ToolTip", "UGizmoUniformScaleParameterSource is an IGizmoVec2ParameterSource implementation that\ninterprets the Vec2 parameter as the position in a 2D plane, and maps this parameter to a\nchange in a uniform scale value. This scale is applied to an IGizmoTransformSource.\n\nThe X/Y plane parameter deltas are converted to a uniform scale delta simply by adding them.\nThis assumpes that the 3D plane is oriented such that \"positive\" along the X and Y\ntangent axes corresponds to something semantically meaningful. It's up to the client to do this.\n\nThis ParameterSource is intended to be used to create 3D Uniform Scale Gizmos." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoUniformScaleParameterSource_Statics::NewProp_InitialTransform_MetaData[] = {
		{ "Comment", "/** Saved copy of Initial Transform for current parameter edit (only valid between BeginModify/EndModify) */" },
		{ "ModuleRelativePath", "Public/BaseGizmos/ParameterToTransformAdapters.h" },
		{ "ToolTip", "Saved copy of Initial Transform for current parameter edit (only valid between BeginModify/EndModify)" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGizmoUniformScaleParameterSource_Statics::NewProp_InitialTransform = { "InitialTransform", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGizmoUniformScaleParameterSource, InitialTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UClass_UGizmoUniformScaleParameterSource_Statics::NewProp_InitialTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoUniformScaleParameterSource_Statics::NewProp_InitialTransform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoUniformScaleParameterSource_Statics::NewProp_CurScaleAxisY_MetaData[] = {
		{ "Comment", "/** in-plane axis Y for current parameter edit (only valid between BeginModify/EndModify) */" },
		{ "ModuleRelativePath", "Public/BaseGizmos/ParameterToTransformAdapters.h" },
		{ "ToolTip", "in-plane axis Y for current parameter edit (only valid between BeginModify/EndModify)" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGizmoUniformScaleParameterSource_Statics::NewProp_CurScaleAxisY = { "CurScaleAxisY", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGizmoUniformScaleParameterSource, CurScaleAxisY), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UGizmoUniformScaleParameterSource_Statics::NewProp_CurScaleAxisY_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoUniformScaleParameterSource_Statics::NewProp_CurScaleAxisY_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoUniformScaleParameterSource_Statics::NewProp_CurScaleAxisX_MetaData[] = {
		{ "Comment", "/** in-plane axis X for current parameter edit (only valid between BeginModify/EndModify) */" },
		{ "ModuleRelativePath", "Public/BaseGizmos/ParameterToTransformAdapters.h" },
		{ "ToolTip", "in-plane axis X for current parameter edit (only valid between BeginModify/EndModify)" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGizmoUniformScaleParameterSource_Statics::NewProp_CurScaleAxisX = { "CurScaleAxisX", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGizmoUniformScaleParameterSource, CurScaleAxisX), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UGizmoUniformScaleParameterSource_Statics::NewProp_CurScaleAxisX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoUniformScaleParameterSource_Statics::NewProp_CurScaleAxisX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoUniformScaleParameterSource_Statics::NewProp_CurScaleNormal_MetaData[] = {
		{ "Comment", "/** plane normal for current parameter edit (only valid between BeginModify/EndModify) */" },
		{ "ModuleRelativePath", "Public/BaseGizmos/ParameterToTransformAdapters.h" },
		{ "ToolTip", "plane normal for current parameter edit (only valid between BeginModify/EndModify)" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGizmoUniformScaleParameterSource_Statics::NewProp_CurScaleNormal = { "CurScaleNormal", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGizmoUniformScaleParameterSource, CurScaleNormal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UGizmoUniformScaleParameterSource_Statics::NewProp_CurScaleNormal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoUniformScaleParameterSource_Statics::NewProp_CurScaleNormal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoUniformScaleParameterSource_Statics::NewProp_CurScaleOrigin_MetaData[] = {
		{ "Comment", "/** plane origin for current parameter edit (only valid between BeginModify/EndModify) */" },
		{ "ModuleRelativePath", "Public/BaseGizmos/ParameterToTransformAdapters.h" },
		{ "ToolTip", "plane origin for current parameter edit (only valid between BeginModify/EndModify)" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGizmoUniformScaleParameterSource_Statics::NewProp_CurScaleOrigin = { "CurScaleOrigin", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGizmoUniformScaleParameterSource, CurScaleOrigin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UGizmoUniformScaleParameterSource_Statics::NewProp_CurScaleOrigin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoUniformScaleParameterSource_Statics::NewProp_CurScaleOrigin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoUniformScaleParameterSource_Statics::NewProp_LastChange_MetaData[] = {
		{ "Comment", "/** Active parameter change (only valid between BeginModify/EndModify) */" },
		{ "ModuleRelativePath", "Public/BaseGizmos/ParameterToTransformAdapters.h" },
		{ "ToolTip", "Active parameter change (only valid between BeginModify/EndModify)" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGizmoUniformScaleParameterSource_Statics::NewProp_LastChange = { "LastChange", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGizmoUniformScaleParameterSource, LastChange), Z_Construct_UScriptStruct_FGizmoVec2ParameterChange, METADATA_PARAMS(Z_Construct_UClass_UGizmoUniformScaleParameterSource_Statics::NewProp_LastChange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoUniformScaleParameterSource_Statics::NewProp_LastChange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoUniformScaleParameterSource_Statics::NewProp_Parameter_MetaData[] = {
		{ "Comment", "/** Parameter is the two line-equation parameters that this Vec2ParameterSource provides */" },
		{ "ModuleRelativePath", "Public/BaseGizmos/ParameterToTransformAdapters.h" },
		{ "ToolTip", "Parameter is the two line-equation parameters that this Vec2ParameterSource provides" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGizmoUniformScaleParameterSource_Statics::NewProp_Parameter = { "Parameter", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGizmoUniformScaleParameterSource, Parameter), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UGizmoUniformScaleParameterSource_Statics::NewProp_Parameter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoUniformScaleParameterSource_Statics::NewProp_Parameter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoUniformScaleParameterSource_Statics::NewProp_ScaleMultiplier_MetaData[] = {
		{ "Comment", "/** Coordinate delta is multiplied by this amount */" },
		{ "ModuleRelativePath", "Public/BaseGizmos/ParameterToTransformAdapters.h" },
		{ "ToolTip", "Coordinate delta is multiplied by this amount" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGizmoUniformScaleParameterSource_Statics::NewProp_ScaleMultiplier = { "ScaleMultiplier", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGizmoUniformScaleParameterSource, ScaleMultiplier), METADATA_PARAMS(Z_Construct_UClass_UGizmoUniformScaleParameterSource_Statics::NewProp_ScaleMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoUniformScaleParameterSource_Statics::NewProp_ScaleMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoUniformScaleParameterSource_Statics::NewProp_TransformSource_MetaData[] = {
		{ "Comment", "/** This TransformSource is updated by applying the constructed 3D translation */" },
		{ "ModuleRelativePath", "Public/BaseGizmos/ParameterToTransformAdapters.h" },
		{ "ToolTip", "This TransformSource is updated by applying the constructed 3D translation" },
	};
#endif
	const UE4CodeGen_Private::FInterfacePropertyParams Z_Construct_UClass_UGizmoUniformScaleParameterSource_Statics::NewProp_TransformSource = { "TransformSource", nullptr, (EPropertyFlags)0x0014000000000000, UE4CodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGizmoUniformScaleParameterSource, TransformSource), Z_Construct_UClass_UGizmoTransformSource_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGizmoUniformScaleParameterSource_Statics::NewProp_TransformSource_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoUniformScaleParameterSource_Statics::NewProp_TransformSource_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoUniformScaleParameterSource_Statics::NewProp_AxisSource_MetaData[] = {
		{ "Comment", "/** AxisSource provides the 3D plane (origin/normal/u/v) that is used to interpret the 2D parameters */" },
		{ "ModuleRelativePath", "Public/BaseGizmos/ParameterToTransformAdapters.h" },
		{ "ToolTip", "AxisSource provides the 3D plane (origin/normal/u/v) that is used to interpret the 2D parameters" },
	};
#endif
	const UE4CodeGen_Private::FInterfacePropertyParams Z_Construct_UClass_UGizmoUniformScaleParameterSource_Statics::NewProp_AxisSource = { "AxisSource", nullptr, (EPropertyFlags)0x0014000000000000, UE4CodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGizmoUniformScaleParameterSource, AxisSource), Z_Construct_UClass_UGizmoAxisSource_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGizmoUniformScaleParameterSource_Statics::NewProp_AxisSource_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoUniformScaleParameterSource_Statics::NewProp_AxisSource_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGizmoUniformScaleParameterSource_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoUniformScaleParameterSource_Statics::NewProp_InitialTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoUniformScaleParameterSource_Statics::NewProp_CurScaleAxisY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoUniformScaleParameterSource_Statics::NewProp_CurScaleAxisX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoUniformScaleParameterSource_Statics::NewProp_CurScaleNormal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoUniformScaleParameterSource_Statics::NewProp_CurScaleOrigin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoUniformScaleParameterSource_Statics::NewProp_LastChange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoUniformScaleParameterSource_Statics::NewProp_Parameter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoUniformScaleParameterSource_Statics::NewProp_ScaleMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoUniformScaleParameterSource_Statics::NewProp_TransformSource,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoUniformScaleParameterSource_Statics::NewProp_AxisSource,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGizmoUniformScaleParameterSource_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGizmoUniformScaleParameterSource>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGizmoUniformScaleParameterSource_Statics::ClassParams = {
		&UGizmoUniformScaleParameterSource::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGizmoUniformScaleParameterSource_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoUniformScaleParameterSource_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGizmoUniformScaleParameterSource_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoUniformScaleParameterSource_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGizmoUniformScaleParameterSource()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGizmoUniformScaleParameterSource_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGizmoUniformScaleParameterSource, 2060898865);
	template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<UGizmoUniformScaleParameterSource>()
	{
		return UGizmoUniformScaleParameterSource::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGizmoUniformScaleParameterSource(Z_Construct_UClass_UGizmoUniformScaleParameterSource, &UGizmoUniformScaleParameterSource::StaticClass, TEXT("/Script/InteractiveToolsFramework"), TEXT("UGizmoUniformScaleParameterSource"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGizmoUniformScaleParameterSource);
	void UGizmoAxisScaleParameterSource::StaticRegisterNativesUGizmoAxisScaleParameterSource()
	{
	}
	UClass* Z_Construct_UClass_UGizmoAxisScaleParameterSource_NoRegister()
	{
		return UGizmoAxisScaleParameterSource::StaticClass();
	}
	struct Z_Construct_UClass_UGizmoAxisScaleParameterSource_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InitialTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InitialTransform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurScaleOrigin_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CurScaleOrigin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurScaleAxis_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CurScaleAxis;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastChange_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LastChange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Parameter_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Parameter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScaleMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ScaleMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TransformSource_MetaData[];
#endif
		static const UE4CodeGen_Private::FInterfacePropertyParams NewProp_TransformSource;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AxisSource_MetaData[];
#endif
		static const UE4CodeGen_Private::FInterfacePropertyParams NewProp_AxisSource;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGizmoAxisScaleParameterSource_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGizmoBaseFloatParameterSource,
		(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoAxisScaleParameterSource_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UGizmoAxisScaleParameterSource is an IGizmoFloatParameterSource implementation that\n * interprets the float value as the parameter of a line equation, and maps this parameter to a scale factor\n * along a line with origin/direction given by an IGizmoAxisSource. This scale is applied to an IGizmoTransformSource.\n *\n * This ParameterSource is intended to be used to create 3D Axis Scale Gizmos.\n */" },
		{ "IncludePath", "BaseGizmos/ParameterToTransformAdapters.h" },
		{ "ModuleRelativePath", "Public/BaseGizmos/ParameterToTransformAdapters.h" },
		{ "ToolTip", "UGizmoAxisScaleParameterSource is an IGizmoFloatParameterSource implementation that\ninterprets the float value as the parameter of a line equation, and maps this parameter to a scale factor\nalong a line with origin/direction given by an IGizmoAxisSource. This scale is applied to an IGizmoTransformSource.\n\nThis ParameterSource is intended to be used to create 3D Axis Scale Gizmos." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoAxisScaleParameterSource_Statics::NewProp_InitialTransform_MetaData[] = {
		{ "Comment", "/** Saved copy of Initial transform for current parameter edit (only valid between BeginModify/EndModify) */" },
		{ "ModuleRelativePath", "Public/BaseGizmos/ParameterToTransformAdapters.h" },
		{ "ToolTip", "Saved copy of Initial transform for current parameter edit (only valid between BeginModify/EndModify)" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGizmoAxisScaleParameterSource_Statics::NewProp_InitialTransform = { "InitialTransform", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGizmoAxisScaleParameterSource, InitialTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UClass_UGizmoAxisScaleParameterSource_Statics::NewProp_InitialTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoAxisScaleParameterSource_Statics::NewProp_InitialTransform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoAxisScaleParameterSource_Statics::NewProp_CurScaleOrigin_MetaData[] = {
		{ "Comment", "/** scale origin for current parameter edit (only valid between BeginModify/EndModify) */" },
		{ "ModuleRelativePath", "Public/BaseGizmos/ParameterToTransformAdapters.h" },
		{ "ToolTip", "scale origin for current parameter edit (only valid between BeginModify/EndModify)" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGizmoAxisScaleParameterSource_Statics::NewProp_CurScaleOrigin = { "CurScaleOrigin", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGizmoAxisScaleParameterSource, CurScaleOrigin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UGizmoAxisScaleParameterSource_Statics::NewProp_CurScaleOrigin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoAxisScaleParameterSource_Statics::NewProp_CurScaleOrigin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoAxisScaleParameterSource_Statics::NewProp_CurScaleAxis_MetaData[] = {
		{ "Comment", "/** scale axis for current parameter edit (only valid between BeginModify/EndModify) */" },
		{ "ModuleRelativePath", "Public/BaseGizmos/ParameterToTransformAdapters.h" },
		{ "ToolTip", "scale axis for current parameter edit (only valid between BeginModify/EndModify)" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGizmoAxisScaleParameterSource_Statics::NewProp_CurScaleAxis = { "CurScaleAxis", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGizmoAxisScaleParameterSource, CurScaleAxis), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UGizmoAxisScaleParameterSource_Statics::NewProp_CurScaleAxis_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoAxisScaleParameterSource_Statics::NewProp_CurScaleAxis_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoAxisScaleParameterSource_Statics::NewProp_LastChange_MetaData[] = {
		{ "Comment", "/** Active parameter change (only valid between BeginModify/EndModify) */" },
		{ "ModuleRelativePath", "Public/BaseGizmos/ParameterToTransformAdapters.h" },
		{ "ToolTip", "Active parameter change (only valid between BeginModify/EndModify)" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGizmoAxisScaleParameterSource_Statics::NewProp_LastChange = { "LastChange", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGizmoAxisScaleParameterSource, LastChange), Z_Construct_UScriptStruct_FGizmoFloatParameterChange, METADATA_PARAMS(Z_Construct_UClass_UGizmoAxisScaleParameterSource_Statics::NewProp_LastChange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoAxisScaleParameterSource_Statics::NewProp_LastChange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoAxisScaleParameterSource_Statics::NewProp_Parameter_MetaData[] = {
		{ "Comment", "/** Parameter is the line-equation parameter that this FloatParameterSource provides */" },
		{ "ModuleRelativePath", "Public/BaseGizmos/ParameterToTransformAdapters.h" },
		{ "ToolTip", "Parameter is the line-equation parameter that this FloatParameterSource provides" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGizmoAxisScaleParameterSource_Statics::NewProp_Parameter = { "Parameter", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGizmoAxisScaleParameterSource, Parameter), METADATA_PARAMS(Z_Construct_UClass_UGizmoAxisScaleParameterSource_Statics::NewProp_Parameter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoAxisScaleParameterSource_Statics::NewProp_Parameter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoAxisScaleParameterSource_Statics::NewProp_ScaleMultiplier_MetaData[] = {
		{ "Comment", "/** Coordinate delta is multiplied by this amount */" },
		{ "ModuleRelativePath", "Public/BaseGizmos/ParameterToTransformAdapters.h" },
		{ "ToolTip", "Coordinate delta is multiplied by this amount" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGizmoAxisScaleParameterSource_Statics::NewProp_ScaleMultiplier = { "ScaleMultiplier", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGizmoAxisScaleParameterSource, ScaleMultiplier), METADATA_PARAMS(Z_Construct_UClass_UGizmoAxisScaleParameterSource_Statics::NewProp_ScaleMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoAxisScaleParameterSource_Statics::NewProp_ScaleMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoAxisScaleParameterSource_Statics::NewProp_TransformSource_MetaData[] = {
		{ "Comment", "/** This TransformSource is updated by applying the constructed 3D rotation */" },
		{ "ModuleRelativePath", "Public/BaseGizmos/ParameterToTransformAdapters.h" },
		{ "ToolTip", "This TransformSource is updated by applying the constructed 3D rotation" },
	};
#endif
	const UE4CodeGen_Private::FInterfacePropertyParams Z_Construct_UClass_UGizmoAxisScaleParameterSource_Statics::NewProp_TransformSource = { "TransformSource", nullptr, (EPropertyFlags)0x0014000000000000, UE4CodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGizmoAxisScaleParameterSource, TransformSource), Z_Construct_UClass_UGizmoTransformSource_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGizmoAxisScaleParameterSource_Statics::NewProp_TransformSource_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoAxisScaleParameterSource_Statics::NewProp_TransformSource_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoAxisScaleParameterSource_Statics::NewProp_AxisSource_MetaData[] = {
		{ "Comment", "/** The Parameter line-equation value is converted to a 3D Translation along this Axis */" },
		{ "ModuleRelativePath", "Public/BaseGizmos/ParameterToTransformAdapters.h" },
		{ "ToolTip", "The Parameter line-equation value is converted to a 3D Translation along this Axis" },
	};
#endif
	const UE4CodeGen_Private::FInterfacePropertyParams Z_Construct_UClass_UGizmoAxisScaleParameterSource_Statics::NewProp_AxisSource = { "AxisSource", nullptr, (EPropertyFlags)0x0014000000000000, UE4CodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGizmoAxisScaleParameterSource, AxisSource), Z_Construct_UClass_UGizmoAxisSource_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGizmoAxisScaleParameterSource_Statics::NewProp_AxisSource_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoAxisScaleParameterSource_Statics::NewProp_AxisSource_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGizmoAxisScaleParameterSource_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoAxisScaleParameterSource_Statics::NewProp_InitialTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoAxisScaleParameterSource_Statics::NewProp_CurScaleOrigin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoAxisScaleParameterSource_Statics::NewProp_CurScaleAxis,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoAxisScaleParameterSource_Statics::NewProp_LastChange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoAxisScaleParameterSource_Statics::NewProp_Parameter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoAxisScaleParameterSource_Statics::NewProp_ScaleMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoAxisScaleParameterSource_Statics::NewProp_TransformSource,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoAxisScaleParameterSource_Statics::NewProp_AxisSource,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGizmoAxisScaleParameterSource_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGizmoAxisScaleParameterSource>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGizmoAxisScaleParameterSource_Statics::ClassParams = {
		&UGizmoAxisScaleParameterSource::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGizmoAxisScaleParameterSource_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoAxisScaleParameterSource_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGizmoAxisScaleParameterSource_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoAxisScaleParameterSource_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGizmoAxisScaleParameterSource()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGizmoAxisScaleParameterSource_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGizmoAxisScaleParameterSource, 4077535617);
	template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<UGizmoAxisScaleParameterSource>()
	{
		return UGizmoAxisScaleParameterSource::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGizmoAxisScaleParameterSource(Z_Construct_UClass_UGizmoAxisScaleParameterSource, &UGizmoAxisScaleParameterSource::StaticClass, TEXT("/Script/InteractiveToolsFramework"), TEXT("UGizmoAxisScaleParameterSource"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGizmoAxisScaleParameterSource);
	void UGizmoPlaneScaleParameterSource::StaticRegisterNativesUGizmoPlaneScaleParameterSource()
	{
	}
	UClass* Z_Construct_UClass_UGizmoPlaneScaleParameterSource_NoRegister()
	{
		return UGizmoPlaneScaleParameterSource::StaticClass();
	}
	struct Z_Construct_UClass_UGizmoPlaneScaleParameterSource_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InitialTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InitialTransform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurScaleAxisY_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CurScaleAxisY;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurScaleAxisX_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CurScaleAxisX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurScaleNormal_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CurScaleNormal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurScaleOrigin_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CurScaleOrigin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastChange_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LastChange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Parameter_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Parameter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScaleMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ScaleMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TransformSource_MetaData[];
#endif
		static const UE4CodeGen_Private::FInterfacePropertyParams NewProp_TransformSource;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AxisSource_MetaData[];
#endif
		static const UE4CodeGen_Private::FInterfacePropertyParams NewProp_AxisSource;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGizmoPlaneScaleParameterSource_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGizmoBaseVec2ParameterSource,
		(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoPlaneScaleParameterSource_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UGizmoPlaneScaleParameterSource  is an UGizmoBaseVec2ParameterSource implementation that\n * maps a 2D parameter delta to a change in a 3D scaling vector, based on the tangent axes of a 3D plane\n * This scale is applied to an IGizmoTransformSource.\n *\n * This ParameterSource is intended to be used to create 3D Plane Scale Gizmos.\n */" },
		{ "IncludePath", "BaseGizmos/ParameterToTransformAdapters.h" },
		{ "ModuleRelativePath", "Public/BaseGizmos/ParameterToTransformAdapters.h" },
		{ "ToolTip", "UGizmoPlaneScaleParameterSource  is an UGizmoBaseVec2ParameterSource implementation that\nmaps a 2D parameter delta to a change in a 3D scaling vector, based on the tangent axes of a 3D plane\nThis scale is applied to an IGizmoTransformSource.\n\nThis ParameterSource is intended to be used to create 3D Plane Scale Gizmos." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoPlaneScaleParameterSource_Statics::NewProp_InitialTransform_MetaData[] = {
		{ "Comment", "/** Saved copy of Initial Transform for current parameter edit (only valid between BeginModify/EndModify) */" },
		{ "ModuleRelativePath", "Public/BaseGizmos/ParameterToTransformAdapters.h" },
		{ "ToolTip", "Saved copy of Initial Transform for current parameter edit (only valid between BeginModify/EndModify)" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGizmoPlaneScaleParameterSource_Statics::NewProp_InitialTransform = { "InitialTransform", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGizmoPlaneScaleParameterSource, InitialTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UClass_UGizmoPlaneScaleParameterSource_Statics::NewProp_InitialTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoPlaneScaleParameterSource_Statics::NewProp_InitialTransform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoPlaneScaleParameterSource_Statics::NewProp_CurScaleAxisY_MetaData[] = {
		{ "Comment", "/** in-plane axis Y for current parameter edit (only valid between BeginModify/EndModify) */" },
		{ "ModuleRelativePath", "Public/BaseGizmos/ParameterToTransformAdapters.h" },
		{ "ToolTip", "in-plane axis Y for current parameter edit (only valid between BeginModify/EndModify)" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGizmoPlaneScaleParameterSource_Statics::NewProp_CurScaleAxisY = { "CurScaleAxisY", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGizmoPlaneScaleParameterSource, CurScaleAxisY), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UGizmoPlaneScaleParameterSource_Statics::NewProp_CurScaleAxisY_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoPlaneScaleParameterSource_Statics::NewProp_CurScaleAxisY_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoPlaneScaleParameterSource_Statics::NewProp_CurScaleAxisX_MetaData[] = {
		{ "Comment", "/** in-plane axis X for current parameter edit (only valid between BeginModify/EndModify) */" },
		{ "ModuleRelativePath", "Public/BaseGizmos/ParameterToTransformAdapters.h" },
		{ "ToolTip", "in-plane axis X for current parameter edit (only valid between BeginModify/EndModify)" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGizmoPlaneScaleParameterSource_Statics::NewProp_CurScaleAxisX = { "CurScaleAxisX", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGizmoPlaneScaleParameterSource, CurScaleAxisX), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UGizmoPlaneScaleParameterSource_Statics::NewProp_CurScaleAxisX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoPlaneScaleParameterSource_Statics::NewProp_CurScaleAxisX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoPlaneScaleParameterSource_Statics::NewProp_CurScaleNormal_MetaData[] = {
		{ "Comment", "/** plane normal for current parameter edit (only valid between BeginModify/EndModify) */" },
		{ "ModuleRelativePath", "Public/BaseGizmos/ParameterToTransformAdapters.h" },
		{ "ToolTip", "plane normal for current parameter edit (only valid between BeginModify/EndModify)" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGizmoPlaneScaleParameterSource_Statics::NewProp_CurScaleNormal = { "CurScaleNormal", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGizmoPlaneScaleParameterSource, CurScaleNormal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UGizmoPlaneScaleParameterSource_Statics::NewProp_CurScaleNormal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoPlaneScaleParameterSource_Statics::NewProp_CurScaleNormal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoPlaneScaleParameterSource_Statics::NewProp_CurScaleOrigin_MetaData[] = {
		{ "Comment", "/** plane origin for current parameter edit (only valid between BeginModify/EndModify) */" },
		{ "ModuleRelativePath", "Public/BaseGizmos/ParameterToTransformAdapters.h" },
		{ "ToolTip", "plane origin for current parameter edit (only valid between BeginModify/EndModify)" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGizmoPlaneScaleParameterSource_Statics::NewProp_CurScaleOrigin = { "CurScaleOrigin", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGizmoPlaneScaleParameterSource, CurScaleOrigin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UGizmoPlaneScaleParameterSource_Statics::NewProp_CurScaleOrigin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoPlaneScaleParameterSource_Statics::NewProp_CurScaleOrigin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoPlaneScaleParameterSource_Statics::NewProp_LastChange_MetaData[] = {
		{ "Comment", "/** Active parameter change (only valid between BeginModify/EndModify) */" },
		{ "ModuleRelativePath", "Public/BaseGizmos/ParameterToTransformAdapters.h" },
		{ "ToolTip", "Active parameter change (only valid between BeginModify/EndModify)" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGizmoPlaneScaleParameterSource_Statics::NewProp_LastChange = { "LastChange", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGizmoPlaneScaleParameterSource, LastChange), Z_Construct_UScriptStruct_FGizmoVec2ParameterChange, METADATA_PARAMS(Z_Construct_UClass_UGizmoPlaneScaleParameterSource_Statics::NewProp_LastChange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoPlaneScaleParameterSource_Statics::NewProp_LastChange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoPlaneScaleParameterSource_Statics::NewProp_Parameter_MetaData[] = {
		{ "Comment", "/** Parameter is the two line-equation parameters that this Vec2ParameterSource provides */" },
		{ "ModuleRelativePath", "Public/BaseGizmos/ParameterToTransformAdapters.h" },
		{ "ToolTip", "Parameter is the two line-equation parameters that this Vec2ParameterSource provides" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGizmoPlaneScaleParameterSource_Statics::NewProp_Parameter = { "Parameter", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGizmoPlaneScaleParameterSource, Parameter), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UGizmoPlaneScaleParameterSource_Statics::NewProp_Parameter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoPlaneScaleParameterSource_Statics::NewProp_Parameter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoPlaneScaleParameterSource_Statics::NewProp_ScaleMultiplier_MetaData[] = {
		{ "Comment", "/** Coordinate delta is multiplied by this amount */" },
		{ "ModuleRelativePath", "Public/BaseGizmos/ParameterToTransformAdapters.h" },
		{ "ToolTip", "Coordinate delta is multiplied by this amount" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGizmoPlaneScaleParameterSource_Statics::NewProp_ScaleMultiplier = { "ScaleMultiplier", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGizmoPlaneScaleParameterSource, ScaleMultiplier), METADATA_PARAMS(Z_Construct_UClass_UGizmoPlaneScaleParameterSource_Statics::NewProp_ScaleMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoPlaneScaleParameterSource_Statics::NewProp_ScaleMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoPlaneScaleParameterSource_Statics::NewProp_TransformSource_MetaData[] = {
		{ "Comment", "/** This TransformSource is updated by applying the constructed 3D translation */" },
		{ "ModuleRelativePath", "Public/BaseGizmos/ParameterToTransformAdapters.h" },
		{ "ToolTip", "This TransformSource is updated by applying the constructed 3D translation" },
	};
#endif
	const UE4CodeGen_Private::FInterfacePropertyParams Z_Construct_UClass_UGizmoPlaneScaleParameterSource_Statics::NewProp_TransformSource = { "TransformSource", nullptr, (EPropertyFlags)0x0014000000000000, UE4CodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGizmoPlaneScaleParameterSource, TransformSource), Z_Construct_UClass_UGizmoTransformSource_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGizmoPlaneScaleParameterSource_Statics::NewProp_TransformSource_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoPlaneScaleParameterSource_Statics::NewProp_TransformSource_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoPlaneScaleParameterSource_Statics::NewProp_AxisSource_MetaData[] = {
		{ "Comment", "/** AxisSource provides the 3D plane (origin/normal/u/v) that is used to interpret the 2D parameters */" },
		{ "ModuleRelativePath", "Public/BaseGizmos/ParameterToTransformAdapters.h" },
		{ "ToolTip", "AxisSource provides the 3D plane (origin/normal/u/v) that is used to interpret the 2D parameters" },
	};
#endif
	const UE4CodeGen_Private::FInterfacePropertyParams Z_Construct_UClass_UGizmoPlaneScaleParameterSource_Statics::NewProp_AxisSource = { "AxisSource", nullptr, (EPropertyFlags)0x0014000000000000, UE4CodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGizmoPlaneScaleParameterSource, AxisSource), Z_Construct_UClass_UGizmoAxisSource_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGizmoPlaneScaleParameterSource_Statics::NewProp_AxisSource_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoPlaneScaleParameterSource_Statics::NewProp_AxisSource_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGizmoPlaneScaleParameterSource_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoPlaneScaleParameterSource_Statics::NewProp_InitialTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoPlaneScaleParameterSource_Statics::NewProp_CurScaleAxisY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoPlaneScaleParameterSource_Statics::NewProp_CurScaleAxisX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoPlaneScaleParameterSource_Statics::NewProp_CurScaleNormal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoPlaneScaleParameterSource_Statics::NewProp_CurScaleOrigin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoPlaneScaleParameterSource_Statics::NewProp_LastChange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoPlaneScaleParameterSource_Statics::NewProp_Parameter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoPlaneScaleParameterSource_Statics::NewProp_ScaleMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoPlaneScaleParameterSource_Statics::NewProp_TransformSource,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoPlaneScaleParameterSource_Statics::NewProp_AxisSource,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGizmoPlaneScaleParameterSource_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGizmoPlaneScaleParameterSource>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGizmoPlaneScaleParameterSource_Statics::ClassParams = {
		&UGizmoPlaneScaleParameterSource::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGizmoPlaneScaleParameterSource_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoPlaneScaleParameterSource_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGizmoPlaneScaleParameterSource_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoPlaneScaleParameterSource_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGizmoPlaneScaleParameterSource()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGizmoPlaneScaleParameterSource_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGizmoPlaneScaleParameterSource, 2631391938);
	template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<UGizmoPlaneScaleParameterSource>()
	{
		return UGizmoPlaneScaleParameterSource::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGizmoPlaneScaleParameterSource(Z_Construct_UClass_UGizmoPlaneScaleParameterSource, &UGizmoPlaneScaleParameterSource::StaticClass, TEXT("/Script/InteractiveToolsFramework"), TEXT("UGizmoPlaneScaleParameterSource"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGizmoPlaneScaleParameterSource);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
