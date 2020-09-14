// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InteractiveToolsFramework/Public/BaseGizmos/PlanePositionGizmo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlanePositionGizmo() {}
// Cross Module References
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UPlanePositionGizmoBuilder_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UPlanePositionGizmoBuilder();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveGizmoBuilder();
	UPackage* Z_Construct_UPackage__Script_InteractiveToolsFramework();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UPlanePositionGizmo_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UPlanePositionGizmo();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveGizmo();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoStateTarget_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoClickTarget_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoVec2ParameterSource_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoAxisSource_NoRegister();
// End Cross Module References
	void UPlanePositionGizmoBuilder::StaticRegisterNativesUPlanePositionGizmoBuilder()
	{
	}
	UClass* Z_Construct_UClass_UPlanePositionGizmoBuilder_NoRegister()
	{
		return UPlanePositionGizmoBuilder::StaticClass();
	}
	struct Z_Construct_UClass_UPlanePositionGizmoBuilder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlanePositionGizmoBuilder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveGizmoBuilder,
		(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlanePositionGizmoBuilder_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BaseGizmos/PlanePositionGizmo.h" },
		{ "ModuleRelativePath", "Public/BaseGizmos/PlanePositionGizmo.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlanePositionGizmoBuilder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlanePositionGizmoBuilder>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPlanePositionGizmoBuilder_Statics::ClassParams = {
		&UPlanePositionGizmoBuilder::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UPlanePositionGizmoBuilder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlanePositionGizmoBuilder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlanePositionGizmoBuilder()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPlanePositionGizmoBuilder_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPlanePositionGizmoBuilder, 1952441640);
	template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<UPlanePositionGizmoBuilder>()
	{
		return UPlanePositionGizmoBuilder::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPlanePositionGizmoBuilder(Z_Construct_UClass_UPlanePositionGizmoBuilder, &UPlanePositionGizmoBuilder::StaticClass, TEXT("/Script/InteractiveToolsFramework"), TEXT("UPlanePositionGizmoBuilder"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlanePositionGizmoBuilder);
	void UPlanePositionGizmo::StaticRegisterNativesUPlanePositionGizmo()
	{
	}
	UClass* Z_Construct_UClass_UPlanePositionGizmo_NoRegister()
	{
		return UPlanePositionGizmo::StaticClass();
	}
	struct Z_Construct_UClass_UPlanePositionGizmo_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParameterSigns_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ParameterSigns;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InteractionCurParameter_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InteractionCurParameter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InteractionStartParameter_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InteractionStartParameter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InteractionCurPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InteractionCurPoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InteractionStartPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InteractionStartPoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InteractionAxisY_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InteractionAxisY;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InteractionAxisX_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InteractionAxisX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InteractionNormal_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InteractionNormal;
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bFlipY_MetaData[];
#endif
		static void NewProp_bFlipY_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFlipY;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bFlipX_MetaData[];
#endif
		static void NewProp_bFlipX_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFlipX;
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
	UObject* (*const Z_Construct_UClass_UPlanePositionGizmo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveGizmo,
		(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlanePositionGizmo_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UPlanePositionGizmo implements a gizmo interaction where 2D parameter value is manipulated\n * by dragging a point on a 3D plane in space. The 3D position is converted to 2D coordinates\n * based on the tangent axes of the plane.\n * \n * As with other base gizmos, this class only implements the interaction. The visual aspect of the\n * gizmo, the plane, and the parameter storage are all provided externally.\n *\n * The plane is provided by an IGizmoAxisSource. The origin and normal define the plane and then\n * the tangent axes of the source define the coordinate space. \n * \n * The interaction target (ie the thing you have to click on to start the dragging interaction) is provided by an IGizmoClickTarget. \n *\n * The new 2D parameter value is sent to an IGizmoVec2ParameterSource\n *\n * Internally a UClickDragInputBehavior is used to handle mouse input, configured in ::Setup()\n */" },
		{ "IncludePath", "BaseGizmos/PlanePositionGizmo.h" },
		{ "ModuleRelativePath", "Public/BaseGizmos/PlanePositionGizmo.h" },
		{ "ToolTip", "UPlanePositionGizmo implements a gizmo interaction where 2D parameter value is manipulated\nby dragging a point on a 3D plane in space. The 3D position is converted to 2D coordinates\nbased on the tangent axes of the plane.\n\nAs with other base gizmos, this class only implements the interaction. The visual aspect of the\ngizmo, the plane, and the parameter storage are all provided externally.\n\nThe plane is provided by an IGizmoAxisSource. The origin and normal define the plane and then\nthe tangent axes of the source define the coordinate space.\n\nThe interaction target (ie the thing you have to click on to start the dragging interaction) is provided by an IGizmoClickTarget.\n\nThe new 2D parameter value is sent to an IGizmoVec2ParameterSource\n\nInternally a UClickDragInputBehavior is used to handle mouse input, configured in ::Setup()" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlanePositionGizmo_Statics::NewProp_ParameterSigns_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseGizmos/PlanePositionGizmo.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPlanePositionGizmo_Statics::NewProp_ParameterSigns = { "ParameterSigns", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlanePositionGizmo, ParameterSigns), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UPlanePositionGizmo_Statics::NewProp_ParameterSigns_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlanePositionGizmo_Statics::NewProp_ParameterSigns_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlanePositionGizmo_Statics::NewProp_InteractionCurParameter_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseGizmos/PlanePositionGizmo.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPlanePositionGizmo_Statics::NewProp_InteractionCurParameter = { "InteractionCurParameter", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlanePositionGizmo, InteractionCurParameter), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UPlanePositionGizmo_Statics::NewProp_InteractionCurParameter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlanePositionGizmo_Statics::NewProp_InteractionCurParameter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlanePositionGizmo_Statics::NewProp_InteractionStartParameter_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseGizmos/PlanePositionGizmo.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPlanePositionGizmo_Statics::NewProp_InteractionStartParameter = { "InteractionStartParameter", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlanePositionGizmo, InteractionStartParameter), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UPlanePositionGizmo_Statics::NewProp_InteractionStartParameter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlanePositionGizmo_Statics::NewProp_InteractionStartParameter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlanePositionGizmo_Statics::NewProp_InteractionCurPoint_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseGizmos/PlanePositionGizmo.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPlanePositionGizmo_Statics::NewProp_InteractionCurPoint = { "InteractionCurPoint", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlanePositionGizmo, InteractionCurPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UPlanePositionGizmo_Statics::NewProp_InteractionCurPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlanePositionGizmo_Statics::NewProp_InteractionCurPoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlanePositionGizmo_Statics::NewProp_InteractionStartPoint_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseGizmos/PlanePositionGizmo.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPlanePositionGizmo_Statics::NewProp_InteractionStartPoint = { "InteractionStartPoint", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlanePositionGizmo, InteractionStartPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UPlanePositionGizmo_Statics::NewProp_InteractionStartPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlanePositionGizmo_Statics::NewProp_InteractionStartPoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlanePositionGizmo_Statics::NewProp_InteractionAxisY_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseGizmos/PlanePositionGizmo.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPlanePositionGizmo_Statics::NewProp_InteractionAxisY = { "InteractionAxisY", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlanePositionGizmo, InteractionAxisY), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UPlanePositionGizmo_Statics::NewProp_InteractionAxisY_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlanePositionGizmo_Statics::NewProp_InteractionAxisY_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlanePositionGizmo_Statics::NewProp_InteractionAxisX_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseGizmos/PlanePositionGizmo.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPlanePositionGizmo_Statics::NewProp_InteractionAxisX = { "InteractionAxisX", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlanePositionGizmo, InteractionAxisX), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UPlanePositionGizmo_Statics::NewProp_InteractionAxisX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlanePositionGizmo_Statics::NewProp_InteractionAxisX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlanePositionGizmo_Statics::NewProp_InteractionNormal_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseGizmos/PlanePositionGizmo.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPlanePositionGizmo_Statics::NewProp_InteractionNormal = { "InteractionNormal", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlanePositionGizmo, InteractionNormal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UPlanePositionGizmo_Statics::NewProp_InteractionNormal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlanePositionGizmo_Statics::NewProp_InteractionNormal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlanePositionGizmo_Statics::NewProp_InteractionOrigin_MetaData[] = {
		{ "Comment", "//\n// The values below are used in the context of a single click-drag interaction, ie if bInInteraction = true\n// They otherwise should be considered uninitialized\n//\n" },
		{ "ModuleRelativePath", "Public/BaseGizmos/PlanePositionGizmo.h" },
		{ "ToolTip", "The values below are used in the context of a single click-drag interaction, ie if bInInteraction = true\nThey otherwise should be considered uninitialized" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPlanePositionGizmo_Statics::NewProp_InteractionOrigin = { "InteractionOrigin", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlanePositionGizmo, InteractionOrigin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UPlanePositionGizmo_Statics::NewProp_InteractionOrigin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlanePositionGizmo_Statics::NewProp_InteractionOrigin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlanePositionGizmo_Statics::NewProp_bInInteraction_MetaData[] = {
		{ "Comment", "/** If true, we are in an active click+drag interaction, otherwise we are not */" },
		{ "ModuleRelativePath", "Public/BaseGizmos/PlanePositionGizmo.h" },
		{ "ToolTip", "If true, we are in an active click+drag interaction, otherwise we are not" },
	};
#endif
	void Z_Construct_UClass_UPlanePositionGizmo_Statics::NewProp_bInInteraction_SetBit(void* Obj)
	{
		((UPlanePositionGizmo*)Obj)->bInInteraction = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPlanePositionGizmo_Statics::NewProp_bInInteraction = { "bInInteraction", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPlanePositionGizmo), &Z_Construct_UClass_UPlanePositionGizmo_Statics::NewProp_bInInteraction_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPlanePositionGizmo_Statics::NewProp_bInInteraction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlanePositionGizmo_Statics::NewProp_bInInteraction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlanePositionGizmo_Statics::NewProp_bFlipY_MetaData[] = {
		{ "Comment", "/** If enabled, flip sign of parameter delta on Y axis */" },
		{ "ModuleRelativePath", "Public/BaseGizmos/PlanePositionGizmo.h" },
		{ "ToolTip", "If enabled, flip sign of parameter delta on Y axis" },
	};
#endif
	void Z_Construct_UClass_UPlanePositionGizmo_Statics::NewProp_bFlipY_SetBit(void* Obj)
	{
		((UPlanePositionGizmo*)Obj)->bFlipY = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPlanePositionGizmo_Statics::NewProp_bFlipY = { "bFlipY", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPlanePositionGizmo), &Z_Construct_UClass_UPlanePositionGizmo_Statics::NewProp_bFlipY_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPlanePositionGizmo_Statics::NewProp_bFlipY_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlanePositionGizmo_Statics::NewProp_bFlipY_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlanePositionGizmo_Statics::NewProp_bFlipX_MetaData[] = {
		{ "Comment", "/** If enabled, flip sign of parameter delta on X axis */" },
		{ "ModuleRelativePath", "Public/BaseGizmos/PlanePositionGizmo.h" },
		{ "ToolTip", "If enabled, flip sign of parameter delta on X axis" },
	};
#endif
	void Z_Construct_UClass_UPlanePositionGizmo_Statics::NewProp_bFlipX_SetBit(void* Obj)
	{
		((UPlanePositionGizmo*)Obj)->bFlipX = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPlanePositionGizmo_Statics::NewProp_bFlipX = { "bFlipX", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPlanePositionGizmo), &Z_Construct_UClass_UPlanePositionGizmo_Statics::NewProp_bFlipX_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPlanePositionGizmo_Statics::NewProp_bFlipX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlanePositionGizmo_Statics::NewProp_bFlipX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlanePositionGizmo_Statics::NewProp_bEnableSignedAxis_MetaData[] = {
		{ "Comment", "/** If enabled, then the sign on the parameter delta is always \"increasing\" when moving away from the origin point, rather than just being a projection onto the axis */" },
		{ "ModuleRelativePath", "Public/BaseGizmos/PlanePositionGizmo.h" },
		{ "ToolTip", "If enabled, then the sign on the parameter delta is always \"increasing\" when moving away from the origin point, rather than just being a projection onto the axis" },
	};
#endif
	void Z_Construct_UClass_UPlanePositionGizmo_Statics::NewProp_bEnableSignedAxis_SetBit(void* Obj)
	{
		((UPlanePositionGizmo*)Obj)->bEnableSignedAxis = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPlanePositionGizmo_Statics::NewProp_bEnableSignedAxis = { "bEnableSignedAxis", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPlanePositionGizmo), &Z_Construct_UClass_UPlanePositionGizmo_Statics::NewProp_bEnableSignedAxis_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPlanePositionGizmo_Statics::NewProp_bEnableSignedAxis_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlanePositionGizmo_Statics::NewProp_bEnableSignedAxis_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlanePositionGizmo_Statics::NewProp_StateTarget_MetaData[] = {
		{ "Comment", "/** StateTarget is notified when interaction starts and ends, so that things like undo/redo can be handled externally */" },
		{ "ModuleRelativePath", "Public/BaseGizmos/PlanePositionGizmo.h" },
		{ "ToolTip", "StateTarget is notified when interaction starts and ends, so that things like undo/redo can be handled externally" },
	};
#endif
	const UE4CodeGen_Private::FInterfacePropertyParams Z_Construct_UClass_UPlanePositionGizmo_Statics::NewProp_StateTarget = { "StateTarget", nullptr, (EPropertyFlags)0x0014000000000000, UE4CodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlanePositionGizmo, StateTarget), Z_Construct_UClass_UGizmoStateTarget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPlanePositionGizmo_Statics::NewProp_StateTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlanePositionGizmo_Statics::NewProp_StateTarget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlanePositionGizmo_Statics::NewProp_HitTarget_MetaData[] = {
		{ "Comment", "/** The HitTarget provides a hit-test against some 3D element (presumably a visual widget) that controls when interaction can start */" },
		{ "ModuleRelativePath", "Public/BaseGizmos/PlanePositionGizmo.h" },
		{ "ToolTip", "The HitTarget provides a hit-test against some 3D element (presumably a visual widget) that controls when interaction can start" },
	};
#endif
	const UE4CodeGen_Private::FInterfacePropertyParams Z_Construct_UClass_UPlanePositionGizmo_Statics::NewProp_HitTarget = { "HitTarget", nullptr, (EPropertyFlags)0x0014000000000000, UE4CodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlanePositionGizmo, HitTarget), Z_Construct_UClass_UGizmoClickTarget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPlanePositionGizmo_Statics::NewProp_HitTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlanePositionGizmo_Statics::NewProp_HitTarget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlanePositionGizmo_Statics::NewProp_ParameterSource_MetaData[] = {
		{ "Comment", "/** The 3D plane coordinates are converted to 2D coordinates in the plane tangent space, and the change in value is sent to this ParameterSource */" },
		{ "ModuleRelativePath", "Public/BaseGizmos/PlanePositionGizmo.h" },
		{ "ToolTip", "The 3D plane coordinates are converted to 2D coordinates in the plane tangent space, and the change in value is sent to this ParameterSource" },
	};
#endif
	const UE4CodeGen_Private::FInterfacePropertyParams Z_Construct_UClass_UPlanePositionGizmo_Statics::NewProp_ParameterSource = { "ParameterSource", nullptr, (EPropertyFlags)0x0014000000000000, UE4CodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlanePositionGizmo, ParameterSource), Z_Construct_UClass_UGizmoVec2ParameterSource_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPlanePositionGizmo_Statics::NewProp_ParameterSource_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlanePositionGizmo_Statics::NewProp_ParameterSource_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlanePositionGizmo_Statics::NewProp_AxisSource_MetaData[] = {
		{ "Comment", "/** AxisSource provides the 3D plane on which the interaction happens */" },
		{ "ModuleRelativePath", "Public/BaseGizmos/PlanePositionGizmo.h" },
		{ "ToolTip", "AxisSource provides the 3D plane on which the interaction happens" },
	};
#endif
	const UE4CodeGen_Private::FInterfacePropertyParams Z_Construct_UClass_UPlanePositionGizmo_Statics::NewProp_AxisSource = { "AxisSource", nullptr, (EPropertyFlags)0x0014000000000000, UE4CodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlanePositionGizmo, AxisSource), Z_Construct_UClass_UGizmoAxisSource_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPlanePositionGizmo_Statics::NewProp_AxisSource_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlanePositionGizmo_Statics::NewProp_AxisSource_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlanePositionGizmo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlanePositionGizmo_Statics::NewProp_ParameterSigns,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlanePositionGizmo_Statics::NewProp_InteractionCurParameter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlanePositionGizmo_Statics::NewProp_InteractionStartParameter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlanePositionGizmo_Statics::NewProp_InteractionCurPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlanePositionGizmo_Statics::NewProp_InteractionStartPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlanePositionGizmo_Statics::NewProp_InteractionAxisY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlanePositionGizmo_Statics::NewProp_InteractionAxisX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlanePositionGizmo_Statics::NewProp_InteractionNormal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlanePositionGizmo_Statics::NewProp_InteractionOrigin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlanePositionGizmo_Statics::NewProp_bInInteraction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlanePositionGizmo_Statics::NewProp_bFlipY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlanePositionGizmo_Statics::NewProp_bFlipX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlanePositionGizmo_Statics::NewProp_bEnableSignedAxis,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlanePositionGizmo_Statics::NewProp_StateTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlanePositionGizmo_Statics::NewProp_HitTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlanePositionGizmo_Statics::NewProp_ParameterSource,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlanePositionGizmo_Statics::NewProp_AxisSource,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlanePositionGizmo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlanePositionGizmo>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPlanePositionGizmo_Statics::ClassParams = {
		&UPlanePositionGizmo::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPlanePositionGizmo_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPlanePositionGizmo_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UPlanePositionGizmo_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlanePositionGizmo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlanePositionGizmo()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPlanePositionGizmo_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPlanePositionGizmo, 585534152);
	template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<UPlanePositionGizmo>()
	{
		return UPlanePositionGizmo::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPlanePositionGizmo(Z_Construct_UClass_UPlanePositionGizmo, &UPlanePositionGizmo::StaticClass, TEXT("/Script/InteractiveToolsFramework"), TEXT("UPlanePositionGizmo"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlanePositionGizmo);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
