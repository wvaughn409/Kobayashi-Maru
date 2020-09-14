// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InteractiveToolsFramework/Public/BaseGizmos/AxisAngleGizmo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAxisAngleGizmo() {}
// Cross Module References
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UAxisAngleGizmoBuilder_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UAxisAngleGizmoBuilder();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveGizmoBuilder();
	UPackage* Z_Construct_UPackage__Script_InteractiveToolsFramework();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UAxisAngleGizmo_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UAxisAngleGizmo();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveGizmo();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoStateTarget_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoClickTarget_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoFloatParameterSource_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoAxisSource_NoRegister();
// End Cross Module References
	void UAxisAngleGizmoBuilder::StaticRegisterNativesUAxisAngleGizmoBuilder()
	{
	}
	UClass* Z_Construct_UClass_UAxisAngleGizmoBuilder_NoRegister()
	{
		return UAxisAngleGizmoBuilder::StaticClass();
	}
	struct Z_Construct_UClass_UAxisAngleGizmoBuilder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAxisAngleGizmoBuilder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveGizmoBuilder,
		(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAxisAngleGizmoBuilder_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BaseGizmos/AxisAngleGizmo.h" },
		{ "ModuleRelativePath", "Public/BaseGizmos/AxisAngleGizmo.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAxisAngleGizmoBuilder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAxisAngleGizmoBuilder>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAxisAngleGizmoBuilder_Statics::ClassParams = {
		&UAxisAngleGizmoBuilder::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAxisAngleGizmoBuilder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAxisAngleGizmoBuilder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAxisAngleGizmoBuilder()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAxisAngleGizmoBuilder_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAxisAngleGizmoBuilder, 2960324193);
	template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<UAxisAngleGizmoBuilder>()
	{
		return UAxisAngleGizmoBuilder::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAxisAngleGizmoBuilder(Z_Construct_UClass_UAxisAngleGizmoBuilder, &UAxisAngleGizmoBuilder::StaticClass, TEXT("/Script/InteractiveToolsFramework"), TEXT("UAxisAngleGizmoBuilder"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAxisAngleGizmoBuilder);
	void UAxisAngleGizmo::StaticRegisterNativesUAxisAngleGizmo()
	{
	}
	UClass* Z_Construct_UClass_UAxisAngleGizmo_NoRegister()
	{
		return UAxisAngleGizmo::StaticClass();
	}
	struct Z_Construct_UClass_UAxisAngleGizmo_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InteractionCurAngle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InteractionCurAngle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InteractionStartAngle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InteractionStartAngle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InteractionCurPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InteractionCurPoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InteractionStartPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InteractionStartPoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RotationPlaneY_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RotationPlaneY;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RotationPlaneX_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RotationPlaneX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RotationAxis_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RotationAxis;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RotationOrigin_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RotationOrigin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bInInteraction_MetaData[];
#endif
		static void NewProp_bInInteraction_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInInteraction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StateTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FInterfacePropertyParams NewProp_StateTarget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FInterfacePropertyParams NewProp_HitTarget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AngleSource_MetaData[];
#endif
		static const UE4CodeGen_Private::FInterfacePropertyParams NewProp_AngleSource;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AxisSource_MetaData[];
#endif
		static const UE4CodeGen_Private::FInterfacePropertyParams NewProp_AxisSource;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAxisAngleGizmo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveGizmo,
		(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAxisAngleGizmo_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "BaseGizmos/AxisAngleGizmo.h" },
		{ "ModuleRelativePath", "Public/BaseGizmos/AxisAngleGizmo.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAxisAngleGizmo_Statics::NewProp_InteractionCurAngle_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseGizmos/AxisAngleGizmo.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAxisAngleGizmo_Statics::NewProp_InteractionCurAngle = { "InteractionCurAngle", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAxisAngleGizmo, InteractionCurAngle), METADATA_PARAMS(Z_Construct_UClass_UAxisAngleGizmo_Statics::NewProp_InteractionCurAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAxisAngleGizmo_Statics::NewProp_InteractionCurAngle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAxisAngleGizmo_Statics::NewProp_InteractionStartAngle_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseGizmos/AxisAngleGizmo.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAxisAngleGizmo_Statics::NewProp_InteractionStartAngle = { "InteractionStartAngle", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAxisAngleGizmo, InteractionStartAngle), METADATA_PARAMS(Z_Construct_UClass_UAxisAngleGizmo_Statics::NewProp_InteractionStartAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAxisAngleGizmo_Statics::NewProp_InteractionStartAngle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAxisAngleGizmo_Statics::NewProp_InteractionCurPoint_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseGizmos/AxisAngleGizmo.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAxisAngleGizmo_Statics::NewProp_InteractionCurPoint = { "InteractionCurPoint", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAxisAngleGizmo, InteractionCurPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UAxisAngleGizmo_Statics::NewProp_InteractionCurPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAxisAngleGizmo_Statics::NewProp_InteractionCurPoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAxisAngleGizmo_Statics::NewProp_InteractionStartPoint_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseGizmos/AxisAngleGizmo.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAxisAngleGizmo_Statics::NewProp_InteractionStartPoint = { "InteractionStartPoint", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAxisAngleGizmo, InteractionStartPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UAxisAngleGizmo_Statics::NewProp_InteractionStartPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAxisAngleGizmo_Statics::NewProp_InteractionStartPoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAxisAngleGizmo_Statics::NewProp_RotationPlaneY_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseGizmos/AxisAngleGizmo.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAxisAngleGizmo_Statics::NewProp_RotationPlaneY = { "RotationPlaneY", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAxisAngleGizmo, RotationPlaneY), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UAxisAngleGizmo_Statics::NewProp_RotationPlaneY_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAxisAngleGizmo_Statics::NewProp_RotationPlaneY_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAxisAngleGizmo_Statics::NewProp_RotationPlaneX_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseGizmos/AxisAngleGizmo.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAxisAngleGizmo_Statics::NewProp_RotationPlaneX = { "RotationPlaneX", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAxisAngleGizmo, RotationPlaneX), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UAxisAngleGizmo_Statics::NewProp_RotationPlaneX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAxisAngleGizmo_Statics::NewProp_RotationPlaneX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAxisAngleGizmo_Statics::NewProp_RotationAxis_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseGizmos/AxisAngleGizmo.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAxisAngleGizmo_Statics::NewProp_RotationAxis = { "RotationAxis", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAxisAngleGizmo, RotationAxis), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UAxisAngleGizmo_Statics::NewProp_RotationAxis_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAxisAngleGizmo_Statics::NewProp_RotationAxis_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAxisAngleGizmo_Statics::NewProp_RotationOrigin_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseGizmos/AxisAngleGizmo.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAxisAngleGizmo_Statics::NewProp_RotationOrigin = { "RotationOrigin", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAxisAngleGizmo, RotationOrigin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UAxisAngleGizmo_Statics::NewProp_RotationOrigin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAxisAngleGizmo_Statics::NewProp_RotationOrigin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAxisAngleGizmo_Statics::NewProp_bInInteraction_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseGizmos/AxisAngleGizmo.h" },
	};
#endif
	void Z_Construct_UClass_UAxisAngleGizmo_Statics::NewProp_bInInteraction_SetBit(void* Obj)
	{
		((UAxisAngleGizmo*)Obj)->bInInteraction = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAxisAngleGizmo_Statics::NewProp_bInInteraction = { "bInInteraction", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAxisAngleGizmo), &Z_Construct_UClass_UAxisAngleGizmo_Statics::NewProp_bInInteraction_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAxisAngleGizmo_Statics::NewProp_bInInteraction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAxisAngleGizmo_Statics::NewProp_bInInteraction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAxisAngleGizmo_Statics::NewProp_StateTarget_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseGizmos/AxisAngleGizmo.h" },
	};
#endif
	const UE4CodeGen_Private::FInterfacePropertyParams Z_Construct_UClass_UAxisAngleGizmo_Statics::NewProp_StateTarget = { "StateTarget", nullptr, (EPropertyFlags)0x0014000000000000, UE4CodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAxisAngleGizmo, StateTarget), Z_Construct_UClass_UGizmoStateTarget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAxisAngleGizmo_Statics::NewProp_StateTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAxisAngleGizmo_Statics::NewProp_StateTarget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAxisAngleGizmo_Statics::NewProp_HitTarget_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseGizmos/AxisAngleGizmo.h" },
	};
#endif
	const UE4CodeGen_Private::FInterfacePropertyParams Z_Construct_UClass_UAxisAngleGizmo_Statics::NewProp_HitTarget = { "HitTarget", nullptr, (EPropertyFlags)0x0014000000000000, UE4CodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAxisAngleGizmo, HitTarget), Z_Construct_UClass_UGizmoClickTarget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAxisAngleGizmo_Statics::NewProp_HitTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAxisAngleGizmo_Statics::NewProp_HitTarget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAxisAngleGizmo_Statics::NewProp_AngleSource_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseGizmos/AxisAngleGizmo.h" },
	};
#endif
	const UE4CodeGen_Private::FInterfacePropertyParams Z_Construct_UClass_UAxisAngleGizmo_Statics::NewProp_AngleSource = { "AngleSource", nullptr, (EPropertyFlags)0x0014000000000000, UE4CodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAxisAngleGizmo, AngleSource), Z_Construct_UClass_UGizmoFloatParameterSource_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAxisAngleGizmo_Statics::NewProp_AngleSource_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAxisAngleGizmo_Statics::NewProp_AngleSource_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAxisAngleGizmo_Statics::NewProp_AxisSource_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseGizmos/AxisAngleGizmo.h" },
	};
#endif
	const UE4CodeGen_Private::FInterfacePropertyParams Z_Construct_UClass_UAxisAngleGizmo_Statics::NewProp_AxisSource = { "AxisSource", nullptr, (EPropertyFlags)0x0014000000000000, UE4CodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAxisAngleGizmo, AxisSource), Z_Construct_UClass_UGizmoAxisSource_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAxisAngleGizmo_Statics::NewProp_AxisSource_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAxisAngleGizmo_Statics::NewProp_AxisSource_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAxisAngleGizmo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAxisAngleGizmo_Statics::NewProp_InteractionCurAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAxisAngleGizmo_Statics::NewProp_InteractionStartAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAxisAngleGizmo_Statics::NewProp_InteractionCurPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAxisAngleGizmo_Statics::NewProp_InteractionStartPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAxisAngleGizmo_Statics::NewProp_RotationPlaneY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAxisAngleGizmo_Statics::NewProp_RotationPlaneX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAxisAngleGizmo_Statics::NewProp_RotationAxis,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAxisAngleGizmo_Statics::NewProp_RotationOrigin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAxisAngleGizmo_Statics::NewProp_bInInteraction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAxisAngleGizmo_Statics::NewProp_StateTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAxisAngleGizmo_Statics::NewProp_HitTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAxisAngleGizmo_Statics::NewProp_AngleSource,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAxisAngleGizmo_Statics::NewProp_AxisSource,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAxisAngleGizmo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAxisAngleGizmo>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAxisAngleGizmo_Statics::ClassParams = {
		&UAxisAngleGizmo::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAxisAngleGizmo_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAxisAngleGizmo_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UAxisAngleGizmo_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAxisAngleGizmo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAxisAngleGizmo()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAxisAngleGizmo_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAxisAngleGizmo, 2174557495);
	template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<UAxisAngleGizmo>()
	{
		return UAxisAngleGizmo::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAxisAngleGizmo(Z_Construct_UClass_UAxisAngleGizmo, &UAxisAngleGizmo::StaticClass, TEXT("/Script/InteractiveToolsFramework"), TEXT("UAxisAngleGizmo"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAxisAngleGizmo);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
