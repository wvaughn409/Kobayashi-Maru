// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InteractiveToolsFramework/Public/BaseGizmos/AxisPositionGizmo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAxisPositionGizmo() {}
// Cross Module References
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UAxisPositionGizmoBuilder_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UAxisPositionGizmoBuilder();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveGizmoBuilder();
	UPackage* Z_Construct_UPackage__Script_InteractiveToolsFramework();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UAxisPositionGizmo_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UAxisPositionGizmo();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveGizmo();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoStateTarget_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoClickTarget_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoFloatParameterSource_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoAxisSource_NoRegister();
// End Cross Module References
	void UAxisPositionGizmoBuilder::StaticRegisterNativesUAxisPositionGizmoBuilder()
	{
	}
	UClass* Z_Construct_UClass_UAxisPositionGizmoBuilder_NoRegister()
	{
		return UAxisPositionGizmoBuilder::StaticClass();
	}
	struct Z_Construct_UClass_UAxisPositionGizmoBuilder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAxisPositionGizmoBuilder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveGizmoBuilder,
		(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAxisPositionGizmoBuilder_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BaseGizmos/AxisPositionGizmo.h" },
		{ "ModuleRelativePath", "Public/BaseGizmos/AxisPositionGizmo.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAxisPositionGizmoBuilder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAxisPositionGizmoBuilder>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAxisPositionGizmoBuilder_Statics::ClassParams = {
		&UAxisPositionGizmoBuilder::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAxisPositionGizmoBuilder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAxisPositionGizmoBuilder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAxisPositionGizmoBuilder()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAxisPositionGizmoBuilder_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAxisPositionGizmoBuilder, 423839794);
	template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<UAxisPositionGizmoBuilder>()
	{
		return UAxisPositionGizmoBuilder::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAxisPositionGizmoBuilder(Z_Construct_UClass_UAxisPositionGizmoBuilder, &UAxisPositionGizmoBuilder::StaticClass, TEXT("/Script/InteractiveToolsFramework"), TEXT("UAxisPositionGizmoBuilder"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAxisPositionGizmoBuilder);
	void UAxisPositionGizmo::StaticRegisterNativesUAxisPositionGizmo()
	{
	}
	UClass* Z_Construct_UClass_UAxisPositionGizmo_NoRegister()
	{
		return UAxisPositionGizmo::StaticClass();
	}
	struct Z_Construct_UClass_UAxisPositionGizmo_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParameterSign_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ParameterSign;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InteractionCurParameter_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InteractionCurParameter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InteractionStartParameter_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InteractionStartParameter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InteractionCurPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InteractionCurPoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InteractionStartPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InteractionStartPoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InteractionAxis_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InteractionAxis;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InteractionOrigin_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InteractionOrigin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bInInteraction_MetaData[];
#endif
		static void NewProp_bInInteraction_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInInteraction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableSignedAxis_MetaData[];
#endif
		static void NewProp_bEnableSignedAxis_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableSignedAxis;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StateTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FInterfacePropertyParams NewProp_StateTarget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FInterfacePropertyParams NewProp_HitTarget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParameterSource_MetaData[];
#endif
		static const UE4CodeGen_Private::FInterfacePropertyParams NewProp_ParameterSource;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AxisSource_MetaData[];
#endif
		static const UE4CodeGen_Private::FInterfacePropertyParams NewProp_AxisSource;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAxisPositionGizmo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveGizmo,
		(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAxisPositionGizmo_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UAxisPositionGizmo implements a gizmo interaction where 1D parameter value is manipulated\n * by dragging a point on a 3D line/axis in space. The 3D point is converted to the axis parameter at\n * the nearest point, giving us the 1D parameter value.\n *\n * As with other base gizmos, this class only implements the interaction. The visual aspect of the\n * gizmo, the axis, and the parameter storage are all provided externally.\n *\n * The axis direction+origin is provided by an IGizmoAxisSource. \n *\n * The interaction target (ie the thing you have to click on to start the dragging interaction) is provided by an IGizmoClickTarget.\n *\n * The new 1D parameter value is sent to an IGizmoFloatParameterSource\n *\n * Internally a UClickDragInputBehavior is used to handle mouse input, configured in ::Setup()\n */" },
		{ "IncludePath", "BaseGizmos/AxisPositionGizmo.h" },
		{ "ModuleRelativePath", "Public/BaseGizmos/AxisPositionGizmo.h" },
		{ "ToolTip", "UAxisPositionGizmo implements a gizmo interaction where 1D parameter value is manipulated\nby dragging a point on a 3D line/axis in space. The 3D point is converted to the axis parameter at\nthe nearest point, giving us the 1D parameter value.\n\nAs with other base gizmos, this class only implements the interaction. The visual aspect of the\ngizmo, the axis, and the parameter storage are all provided externally.\n\nThe axis direction+origin is provided by an IGizmoAxisSource.\n\nThe interaction target (ie the thing you have to click on to start the dragging interaction) is provided by an IGizmoClickTarget.\n\nThe new 1D parameter value is sent to an IGizmoFloatParameterSource\n\nInternally a UClickDragInputBehavior is used to handle mouse input, configured in ::Setup()" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAxisPositionGizmo_Statics::NewProp_ParameterSign_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseGizmos/AxisPositionGizmo.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAxisPositionGizmo_Statics::NewProp_ParameterSign = { "ParameterSign", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAxisPositionGizmo, ParameterSign), METADATA_PARAMS(Z_Construct_UClass_UAxisPositionGizmo_Statics::NewProp_ParameterSign_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAxisPositionGizmo_Statics::NewProp_ParameterSign_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAxisPositionGizmo_Statics::NewProp_InteractionCurParameter_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseGizmos/AxisPositionGizmo.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAxisPositionGizmo_Statics::NewProp_InteractionCurParameter = { "InteractionCurParameter", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAxisPositionGizmo, InteractionCurParameter), METADATA_PARAMS(Z_Construct_UClass_UAxisPositionGizmo_Statics::NewProp_InteractionCurParameter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAxisPositionGizmo_Statics::NewProp_InteractionCurParameter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAxisPositionGizmo_Statics::NewProp_InteractionStartParameter_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseGizmos/AxisPositionGizmo.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAxisPositionGizmo_Statics::NewProp_InteractionStartParameter = { "InteractionStartParameter", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAxisPositionGizmo, InteractionStartParameter), METADATA_PARAMS(Z_Construct_UClass_UAxisPositionGizmo_Statics::NewProp_InteractionStartParameter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAxisPositionGizmo_Statics::NewProp_InteractionStartParameter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAxisPositionGizmo_Statics::NewProp_InteractionCurPoint_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseGizmos/AxisPositionGizmo.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAxisPositionGizmo_Statics::NewProp_InteractionCurPoint = { "InteractionCurPoint", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAxisPositionGizmo, InteractionCurPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UAxisPositionGizmo_Statics::NewProp_InteractionCurPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAxisPositionGizmo_Statics::NewProp_InteractionCurPoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAxisPositionGizmo_Statics::NewProp_InteractionStartPoint_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseGizmos/AxisPositionGizmo.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAxisPositionGizmo_Statics::NewProp_InteractionStartPoint = { "InteractionStartPoint", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAxisPositionGizmo, InteractionStartPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UAxisPositionGizmo_Statics::NewProp_InteractionStartPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAxisPositionGizmo_Statics::NewProp_InteractionStartPoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAxisPositionGizmo_Statics::NewProp_InteractionAxis_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseGizmos/AxisPositionGizmo.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAxisPositionGizmo_Statics::NewProp_InteractionAxis = { "InteractionAxis", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAxisPositionGizmo, InteractionAxis), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UAxisPositionGizmo_Statics::NewProp_InteractionAxis_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAxisPositionGizmo_Statics::NewProp_InteractionAxis_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAxisPositionGizmo_Statics::NewProp_InteractionOrigin_MetaData[] = {
		{ "Comment", "//\n// The values below are used in the context of a single click-drag interaction, ie if bInInteraction = true\n// They otherwise should be considered uninitialized\n//\n" },
		{ "ModuleRelativePath", "Public/BaseGizmos/AxisPositionGizmo.h" },
		{ "ToolTip", "The values below are used in the context of a single click-drag interaction, ie if bInInteraction = true\nThey otherwise should be considered uninitialized" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAxisPositionGizmo_Statics::NewProp_InteractionOrigin = { "InteractionOrigin", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAxisPositionGizmo, InteractionOrigin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UAxisPositionGizmo_Statics::NewProp_InteractionOrigin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAxisPositionGizmo_Statics::NewProp_InteractionOrigin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAxisPositionGizmo_Statics::NewProp_bInInteraction_MetaData[] = {
		{ "Comment", "/** If true, we are in an active click+drag interaction, otherwise we are not */" },
		{ "ModuleRelativePath", "Public/BaseGizmos/AxisPositionGizmo.h" },
		{ "ToolTip", "If true, we are in an active click+drag interaction, otherwise we are not" },
	};
#endif
	void Z_Construct_UClass_UAxisPositionGizmo_Statics::NewProp_bInInteraction_SetBit(void* Obj)
	{
		((UAxisPositionGizmo*)Obj)->bInInteraction = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAxisPositionGizmo_Statics::NewProp_bInInteraction = { "bInInteraction", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAxisPositionGizmo), &Z_Construct_UClass_UAxisPositionGizmo_Statics::NewProp_bInInteraction_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAxisPositionGizmo_Statics::NewProp_bInInteraction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAxisPositionGizmo_Statics::NewProp_bInInteraction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAxisPositionGizmo_Statics::NewProp_bEnableSignedAxis_MetaData[] = {
		{ "Comment", "/** If enabled, then the sign on the parameter delta is always \"increasing\" when moving away from the origin point, rather than just being a projection onto the axis */" },
		{ "ModuleRelativePath", "Public/BaseGizmos/AxisPositionGizmo.h" },
		{ "ToolTip", "If enabled, then the sign on the parameter delta is always \"increasing\" when moving away from the origin point, rather than just being a projection onto the axis" },
	};
#endif
	void Z_Construct_UClass_UAxisPositionGizmo_Statics::NewProp_bEnableSignedAxis_SetBit(void* Obj)
	{
		((UAxisPositionGizmo*)Obj)->bEnableSignedAxis = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAxisPositionGizmo_Statics::NewProp_bEnableSignedAxis = { "bEnableSignedAxis", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAxisPositionGizmo), &Z_Construct_UClass_UAxisPositionGizmo_Statics::NewProp_bEnableSignedAxis_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAxisPositionGizmo_Statics::NewProp_bEnableSignedAxis_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAxisPositionGizmo_Statics::NewProp_bEnableSignedAxis_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAxisPositionGizmo_Statics::NewProp_StateTarget_MetaData[] = {
		{ "Comment", "/** StateTarget is notified when interaction starts and ends, so that things like undo/redo can be handled externally. */" },
		{ "ModuleRelativePath", "Public/BaseGizmos/AxisPositionGizmo.h" },
		{ "ToolTip", "StateTarget is notified when interaction starts and ends, so that things like undo/redo can be handled externally." },
	};
#endif
	const UE4CodeGen_Private::FInterfacePropertyParams Z_Construct_UClass_UAxisPositionGizmo_Statics::NewProp_StateTarget = { "StateTarget", nullptr, (EPropertyFlags)0x0014000000000000, UE4CodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAxisPositionGizmo, StateTarget), Z_Construct_UClass_UGizmoStateTarget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAxisPositionGizmo_Statics::NewProp_StateTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAxisPositionGizmo_Statics::NewProp_StateTarget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAxisPositionGizmo_Statics::NewProp_HitTarget_MetaData[] = {
		{ "Comment", "/** The HitTarget provides a hit-test against some 3D element (presumably a visual widget) that controls when interaction can start */" },
		{ "ModuleRelativePath", "Public/BaseGizmos/AxisPositionGizmo.h" },
		{ "ToolTip", "The HitTarget provides a hit-test against some 3D element (presumably a visual widget) that controls when interaction can start" },
	};
#endif
	const UE4CodeGen_Private::FInterfacePropertyParams Z_Construct_UClass_UAxisPositionGizmo_Statics::NewProp_HitTarget = { "HitTarget", nullptr, (EPropertyFlags)0x0014000000000000, UE4CodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAxisPositionGizmo, HitTarget), Z_Construct_UClass_UGizmoClickTarget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAxisPositionGizmo_Statics::NewProp_HitTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAxisPositionGizmo_Statics::NewProp_HitTarget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAxisPositionGizmo_Statics::NewProp_ParameterSource_MetaData[] = {
		{ "Comment", "/** The 3D line-nearest-point is converted to a 1D coordinate along the line, and the change in value is sent to this ParameterSource */" },
		{ "ModuleRelativePath", "Public/BaseGizmos/AxisPositionGizmo.h" },
		{ "ToolTip", "The 3D line-nearest-point is converted to a 1D coordinate along the line, and the change in value is sent to this ParameterSource" },
	};
#endif
	const UE4CodeGen_Private::FInterfacePropertyParams Z_Construct_UClass_UAxisPositionGizmo_Statics::NewProp_ParameterSource = { "ParameterSource", nullptr, (EPropertyFlags)0x0014000000000000, UE4CodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAxisPositionGizmo, ParameterSource), Z_Construct_UClass_UGizmoFloatParameterSource_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAxisPositionGizmo_Statics::NewProp_ParameterSource_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAxisPositionGizmo_Statics::NewProp_ParameterSource_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAxisPositionGizmo_Statics::NewProp_AxisSource_MetaData[] = {
		{ "Comment", "/** AxisSource provides the 3D line on which the interaction happens */" },
		{ "ModuleRelativePath", "Public/BaseGizmos/AxisPositionGizmo.h" },
		{ "ToolTip", "AxisSource provides the 3D line on which the interaction happens" },
	};
#endif
	const UE4CodeGen_Private::FInterfacePropertyParams Z_Construct_UClass_UAxisPositionGizmo_Statics::NewProp_AxisSource = { "AxisSource", nullptr, (EPropertyFlags)0x0014000000000000, UE4CodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAxisPositionGizmo, AxisSource), Z_Construct_UClass_UGizmoAxisSource_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAxisPositionGizmo_Statics::NewProp_AxisSource_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAxisPositionGizmo_Statics::NewProp_AxisSource_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAxisPositionGizmo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAxisPositionGizmo_Statics::NewProp_ParameterSign,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAxisPositionGizmo_Statics::NewProp_InteractionCurParameter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAxisPositionGizmo_Statics::NewProp_InteractionStartParameter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAxisPositionGizmo_Statics::NewProp_InteractionCurPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAxisPositionGizmo_Statics::NewProp_InteractionStartPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAxisPositionGizmo_Statics::NewProp_InteractionAxis,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAxisPositionGizmo_Statics::NewProp_InteractionOrigin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAxisPositionGizmo_Statics::NewProp_bInInteraction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAxisPositionGizmo_Statics::NewProp_bEnableSignedAxis,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAxisPositionGizmo_Statics::NewProp_StateTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAxisPositionGizmo_Statics::NewProp_HitTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAxisPositionGizmo_Statics::NewProp_ParameterSource,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAxisPositionGizmo_Statics::NewProp_AxisSource,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAxisPositionGizmo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAxisPositionGizmo>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAxisPositionGizmo_Statics::ClassParams = {
		&UAxisPositionGizmo::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAxisPositionGizmo_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAxisPositionGizmo_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UAxisPositionGizmo_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAxisPositionGizmo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAxisPositionGizmo()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAxisPositionGizmo_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAxisPositionGizmo, 3267158846);
	template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<UAxisPositionGizmo>()
	{
		return UAxisPositionGizmo::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAxisPositionGizmo(Z_Construct_UClass_UAxisPositionGizmo, &UAxisPositionGizmo::StaticClass, TEXT("/Script/InteractiveToolsFramework"), TEXT("UAxisPositionGizmo"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAxisPositionGizmo);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
