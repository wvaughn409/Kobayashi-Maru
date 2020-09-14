// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InteractiveToolsFramework/Public/BaseGizmos/HitTargets.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHitTargets() {}
// Cross Module References
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoLambdaHitTarget_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoLambdaHitTarget();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_InteractiveToolsFramework();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoClickTarget_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoComponentHitTarget_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoComponentHitTarget();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
// End Cross Module References
	void UGizmoLambdaHitTarget::StaticRegisterNativesUGizmoLambdaHitTarget()
	{
	}
	UClass* Z_Construct_UClass_UGizmoLambdaHitTarget_NoRegister()
	{
		return UGizmoLambdaHitTarget::StaticClass();
	}
	struct Z_Construct_UClass_UGizmoLambdaHitTarget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGizmoLambdaHitTarget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoLambdaHitTarget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UGizmoLambdaHitTarget is an IGizmoClickTarget implementation that\n * forwards the hit-test function to a TFunction\n */" },
		{ "IncludePath", "BaseGizmos/HitTargets.h" },
		{ "ModuleRelativePath", "Public/BaseGizmos/HitTargets.h" },
		{ "ToolTip", "UGizmoLambdaHitTarget is an IGizmoClickTarget implementation that\nforwards the hit-test function to a TFunction" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UGizmoLambdaHitTarget_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UGizmoClickTarget_NoRegister, (int32)VTABLE_OFFSET(UGizmoLambdaHitTarget, IGizmoClickTarget), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGizmoLambdaHitTarget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGizmoLambdaHitTarget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGizmoLambdaHitTarget_Statics::ClassParams = {
		&UGizmoLambdaHitTarget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		UE_ARRAY_COUNT(InterfaceParams),
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGizmoLambdaHitTarget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoLambdaHitTarget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGizmoLambdaHitTarget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGizmoLambdaHitTarget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGizmoLambdaHitTarget, 1537872073);
	template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<UGizmoLambdaHitTarget>()
	{
		return UGizmoLambdaHitTarget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGizmoLambdaHitTarget(Z_Construct_UClass_UGizmoLambdaHitTarget, &UGizmoLambdaHitTarget::StaticClass, TEXT("/Script/InteractiveToolsFramework"), TEXT("UGizmoLambdaHitTarget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGizmoLambdaHitTarget);
	void UGizmoComponentHitTarget::StaticRegisterNativesUGizmoComponentHitTarget()
	{
	}
	UClass* Z_Construct_UClass_UGizmoComponentHitTarget_NoRegister()
	{
		return UGizmoComponentHitTarget::StaticClass();
	}
	struct Z_Construct_UClass_UGizmoComponentHitTarget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Component;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGizmoComponentHitTarget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoComponentHitTarget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UGizmoComponentHitTarget is an IGizmoClickTarget implementation that\n * hit-tests a UPrimitiveComponent\n */" },
		{ "IncludePath", "BaseGizmos/HitTargets.h" },
		{ "ModuleRelativePath", "Public/BaseGizmos/HitTargets.h" },
		{ "ToolTip", "UGizmoComponentHitTarget is an IGizmoClickTarget implementation that\nhit-tests a UPrimitiveComponent" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoComponentHitTarget_Statics::NewProp_Component_MetaData[] = {
		{ "Comment", "/**\n\x09 * Component->LineTraceComponent() is called to determine if the target is hit\n\x09 */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BaseGizmos/HitTargets.h" },
		{ "ToolTip", "Component->LineTraceComponent() is called to determine if the target is hit" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGizmoComponentHitTarget_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGizmoComponentHitTarget, Component), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGizmoComponentHitTarget_Statics::NewProp_Component_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoComponentHitTarget_Statics::NewProp_Component_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGizmoComponentHitTarget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoComponentHitTarget_Statics::NewProp_Component,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UGizmoComponentHitTarget_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UGizmoClickTarget_NoRegister, (int32)VTABLE_OFFSET(UGizmoComponentHitTarget, IGizmoClickTarget), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGizmoComponentHitTarget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGizmoComponentHitTarget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGizmoComponentHitTarget_Statics::ClassParams = {
		&UGizmoComponentHitTarget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGizmoComponentHitTarget_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoComponentHitTarget_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGizmoComponentHitTarget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoComponentHitTarget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGizmoComponentHitTarget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGizmoComponentHitTarget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGizmoComponentHitTarget, 3340531323);
	template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<UGizmoComponentHitTarget>()
	{
		return UGizmoComponentHitTarget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGizmoComponentHitTarget(Z_Construct_UClass_UGizmoComponentHitTarget, &UGizmoComponentHitTarget::StaticClass, TEXT("/Script/InteractiveToolsFramework"), TEXT("UGizmoComponentHitTarget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGizmoComponentHitTarget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
