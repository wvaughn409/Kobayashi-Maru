// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InteractiveToolsFramework/Public/BaseGizmos/StateTargets.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStateTargets() {}
// Cross Module References
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoNilStateTarget_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoNilStateTarget();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_InteractiveToolsFramework();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoStateTarget_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoLambdaStateTarget_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoLambdaStateTarget();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoObjectModifyStateTarget_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoObjectModifyStateTarget();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoTransformChangeStateTarget_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoTransformChangeStateTarget();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UToolContextTransactionProvider_NoRegister();
// End Cross Module References
	void UGizmoNilStateTarget::StaticRegisterNativesUGizmoNilStateTarget()
	{
	}
	UClass* Z_Construct_UClass_UGizmoNilStateTarget_NoRegister()
	{
		return UGizmoNilStateTarget::StaticClass();
	}
	struct Z_Construct_UClass_UGizmoNilStateTarget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGizmoNilStateTarget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoNilStateTarget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UGizmoNilStateTarget is an implementation of IGizmoStateTarget that does nothing\n */" },
		{ "IncludePath", "BaseGizmos/StateTargets.h" },
		{ "ModuleRelativePath", "Public/BaseGizmos/StateTargets.h" },
		{ "ToolTip", "UGizmoNilStateTarget is an implementation of IGizmoStateTarget that does nothing" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UGizmoNilStateTarget_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UGizmoStateTarget_NoRegister, (int32)VTABLE_OFFSET(UGizmoNilStateTarget, IGizmoStateTarget), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGizmoNilStateTarget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGizmoNilStateTarget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGizmoNilStateTarget_Statics::ClassParams = {
		&UGizmoNilStateTarget::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UGizmoNilStateTarget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoNilStateTarget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGizmoNilStateTarget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGizmoNilStateTarget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGizmoNilStateTarget, 2264747145);
	template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<UGizmoNilStateTarget>()
	{
		return UGizmoNilStateTarget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGizmoNilStateTarget(Z_Construct_UClass_UGizmoNilStateTarget, &UGizmoNilStateTarget::StaticClass, TEXT("/Script/InteractiveToolsFramework"), TEXT("UGizmoNilStateTarget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGizmoNilStateTarget);
	void UGizmoLambdaStateTarget::StaticRegisterNativesUGizmoLambdaStateTarget()
	{
	}
	UClass* Z_Construct_UClass_UGizmoLambdaStateTarget_NoRegister()
	{
		return UGizmoLambdaStateTarget::StaticClass();
	}
	struct Z_Construct_UClass_UGizmoLambdaStateTarget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGizmoLambdaStateTarget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoLambdaStateTarget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UGizmoLambdaStateTarget is an implementation of IGizmoStateTarget that forwards\n * calls to its interface functions to external TFunctions\n */" },
		{ "IncludePath", "BaseGizmos/StateTargets.h" },
		{ "ModuleRelativePath", "Public/BaseGizmos/StateTargets.h" },
		{ "ToolTip", "UGizmoLambdaStateTarget is an implementation of IGizmoStateTarget that forwards\ncalls to its interface functions to external TFunctions" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UGizmoLambdaStateTarget_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UGizmoStateTarget_NoRegister, (int32)VTABLE_OFFSET(UGizmoLambdaStateTarget, IGizmoStateTarget), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGizmoLambdaStateTarget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGizmoLambdaStateTarget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGizmoLambdaStateTarget_Statics::ClassParams = {
		&UGizmoLambdaStateTarget::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UGizmoLambdaStateTarget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoLambdaStateTarget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGizmoLambdaStateTarget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGizmoLambdaStateTarget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGizmoLambdaStateTarget, 1709686474);
	template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<UGizmoLambdaStateTarget>()
	{
		return UGizmoLambdaStateTarget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGizmoLambdaStateTarget(Z_Construct_UClass_UGizmoLambdaStateTarget, &UGizmoLambdaStateTarget::StaticClass, TEXT("/Script/InteractiveToolsFramework"), TEXT("UGizmoLambdaStateTarget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGizmoLambdaStateTarget);
	void UGizmoObjectModifyStateTarget::StaticRegisterNativesUGizmoObjectModifyStateTarget()
	{
	}
	UClass* Z_Construct_UClass_UGizmoObjectModifyStateTarget_NoRegister()
	{
		return UGizmoObjectModifyStateTarget::StaticClass();
	}
	struct Z_Construct_UClass_UGizmoObjectModifyStateTarget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGizmoObjectModifyStateTarget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoObjectModifyStateTarget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UGizmoObjectModifyStateTarget is an implementation of IGizmoStateTarget that \n * opens and closes change transactions on a target UObject via a GizmoManager.\n */" },
		{ "IncludePath", "BaseGizmos/StateTargets.h" },
		{ "ModuleRelativePath", "Public/BaseGizmos/StateTargets.h" },
		{ "ToolTip", "UGizmoObjectModifyStateTarget is an implementation of IGizmoStateTarget that\nopens and closes change transactions on a target UObject via a GizmoManager." },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UGizmoObjectModifyStateTarget_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UGizmoStateTarget_NoRegister, (int32)VTABLE_OFFSET(UGizmoObjectModifyStateTarget, IGizmoStateTarget), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGizmoObjectModifyStateTarget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGizmoObjectModifyStateTarget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGizmoObjectModifyStateTarget_Statics::ClassParams = {
		&UGizmoObjectModifyStateTarget::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UGizmoObjectModifyStateTarget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoObjectModifyStateTarget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGizmoObjectModifyStateTarget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGizmoObjectModifyStateTarget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGizmoObjectModifyStateTarget, 4187479576);
	template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<UGizmoObjectModifyStateTarget>()
	{
		return UGizmoObjectModifyStateTarget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGizmoObjectModifyStateTarget(Z_Construct_UClass_UGizmoObjectModifyStateTarget, &UGizmoObjectModifyStateTarget::StaticClass, TEXT("/Script/InteractiveToolsFramework"), TEXT("UGizmoObjectModifyStateTarget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGizmoObjectModifyStateTarget);
	void UGizmoTransformChangeStateTarget::StaticRegisterNativesUGizmoTransformChangeStateTarget()
	{
	}
	UClass* Z_Construct_UClass_UGizmoTransformChangeStateTarget_NoRegister()
	{
		return UGizmoTransformChangeStateTarget::StaticClass();
	}
	struct Z_Construct_UClass_UGizmoTransformChangeStateTarget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TransactionManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FInterfacePropertyParams NewProp_TransactionManager;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGizmoTransformChangeStateTarget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoTransformChangeStateTarget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UGizmoTransformChangeStateTarget is an implementation of IGizmoStateTarget that\n * emits an FComponentWorldTransformChange on a target USceneComponent. This StateTarget\n * also opens/closes an undo transaction via GizmoManager.\n *\n * The DependentChangeSources and ExternalDependentChangeSources lists allow additional\n * FChange objects to be inserted into the transaction, provided by IToolCommandChangeSource implementations.\n */" },
		{ "IncludePath", "BaseGizmos/StateTargets.h" },
		{ "ModuleRelativePath", "Public/BaseGizmos/StateTargets.h" },
		{ "ToolTip", "UGizmoTransformChangeStateTarget is an implementation of IGizmoStateTarget that\nemits an FComponentWorldTransformChange on a target USceneComponent. This StateTarget\nalso opens/closes an undo transaction via GizmoManager.\n\nThe DependentChangeSources and ExternalDependentChangeSources lists allow additional\nFChange objects to be inserted into the transaction, provided by IToolCommandChangeSource implementations." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoTransformChangeStateTarget_Statics::NewProp_TransactionManager_MetaData[] = {
		{ "Comment", "/**\n\x09 * Pointer to the GizmoManager or ToolManager that is used to open/close the transaction\n\x09 */" },
		{ "ModuleRelativePath", "Public/BaseGizmos/StateTargets.h" },
		{ "ToolTip", "Pointer to the GizmoManager or ToolManager that is used to open/close the transaction" },
	};
#endif
	const UE4CodeGen_Private::FInterfacePropertyParams Z_Construct_UClass_UGizmoTransformChangeStateTarget_Statics::NewProp_TransactionManager = { "TransactionManager", nullptr, (EPropertyFlags)0x0014000000000000, UE4CodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGizmoTransformChangeStateTarget, TransactionManager), Z_Construct_UClass_UToolContextTransactionProvider_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGizmoTransformChangeStateTarget_Statics::NewProp_TransactionManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoTransformChangeStateTarget_Statics::NewProp_TransactionManager_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGizmoTransformChangeStateTarget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoTransformChangeStateTarget_Statics::NewProp_TransactionManager,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UGizmoTransformChangeStateTarget_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UGizmoStateTarget_NoRegister, (int32)VTABLE_OFFSET(UGizmoTransformChangeStateTarget, IGizmoStateTarget), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGizmoTransformChangeStateTarget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGizmoTransformChangeStateTarget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGizmoTransformChangeStateTarget_Statics::ClassParams = {
		&UGizmoTransformChangeStateTarget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGizmoTransformChangeStateTarget_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoTransformChangeStateTarget_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGizmoTransformChangeStateTarget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoTransformChangeStateTarget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGizmoTransformChangeStateTarget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGizmoTransformChangeStateTarget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGizmoTransformChangeStateTarget, 1616170749);
	template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<UGizmoTransformChangeStateTarget>()
	{
		return UGizmoTransformChangeStateTarget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGizmoTransformChangeStateTarget(Z_Construct_UClass_UGizmoTransformChangeStateTarget, &UGizmoTransformChangeStateTarget::StaticClass, TEXT("/Script/InteractiveToolsFramework"), TEXT("UGizmoTransformChangeStateTarget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGizmoTransformChangeStateTarget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
