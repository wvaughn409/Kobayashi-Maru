// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InteractiveToolsFramework/Public/BaseGizmos/TransformSources.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTransformSources() {}
// Cross Module References
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoBaseTransformSource_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoBaseTransformSource();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_InteractiveToolsFramework();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoTransformSource_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoComponentWorldTransformSource_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoComponentWorldTransformSource();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoScaledTransformSource_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoScaledTransformSource();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoTransformProxyTransformSource_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoTransformProxyTransformSource();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UTransformProxy_NoRegister();
// End Cross Module References
	void UGizmoBaseTransformSource::StaticRegisterNativesUGizmoBaseTransformSource()
	{
	}
	UClass* Z_Construct_UClass_UGizmoBaseTransformSource_NoRegister()
	{
		return UGizmoBaseTransformSource::StaticClass();
	}
	struct Z_Construct_UClass_UGizmoBaseTransformSource_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGizmoBaseTransformSource_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoBaseTransformSource_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UGizmoBaseTransformSource is a base implementation of IGizmoTransformSource that \n * adds an OnTransformChanged delegate. This class cannot be used directly and must be subclassed.\n */" },
		{ "IncludePath", "BaseGizmos/TransformSources.h" },
		{ "ModuleRelativePath", "Public/BaseGizmos/TransformSources.h" },
		{ "ToolTip", "UGizmoBaseTransformSource is a base implementation of IGizmoTransformSource that\nadds an OnTransformChanged delegate. This class cannot be used directly and must be subclassed." },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UGizmoBaseTransformSource_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UGizmoTransformSource_NoRegister, (int32)VTABLE_OFFSET(UGizmoBaseTransformSource, IGizmoTransformSource), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGizmoBaseTransformSource_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGizmoBaseTransformSource>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGizmoBaseTransformSource_Statics::ClassParams = {
		&UGizmoBaseTransformSource::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UGizmoBaseTransformSource_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoBaseTransformSource_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGizmoBaseTransformSource()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGizmoBaseTransformSource_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGizmoBaseTransformSource, 985415656);
	template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<UGizmoBaseTransformSource>()
	{
		return UGizmoBaseTransformSource::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGizmoBaseTransformSource(Z_Construct_UClass_UGizmoBaseTransformSource, &UGizmoBaseTransformSource::StaticClass, TEXT("/Script/InteractiveToolsFramework"), TEXT("UGizmoBaseTransformSource"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGizmoBaseTransformSource);
	void UGizmoComponentWorldTransformSource::StaticRegisterNativesUGizmoComponentWorldTransformSource()
	{
	}
	UClass* Z_Construct_UClass_UGizmoComponentWorldTransformSource_NoRegister()
	{
		return UGizmoComponentWorldTransformSource::StaticClass();
	}
	struct Z_Construct_UClass_UGizmoComponentWorldTransformSource_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bModifyComponentOnTransform_MetaData[];
#endif
		static void NewProp_bModifyComponentOnTransform_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bModifyComponentOnTransform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Component;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGizmoComponentWorldTransformSource_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGizmoBaseTransformSource,
		(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoComponentWorldTransformSource_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UGizmoComponentWorldTransformSource implements IGizmoTransformSource (via UGizmoBaseTransformSource)\n * based on the internal transform of a USceneComponent.\n */" },
		{ "IncludePath", "BaseGizmos/TransformSources.h" },
		{ "ModuleRelativePath", "Public/BaseGizmos/TransformSources.h" },
		{ "ToolTip", "UGizmoComponentWorldTransformSource implements IGizmoTransformSource (via UGizmoBaseTransformSource)\nbased on the internal transform of a USceneComponent." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoComponentWorldTransformSource_Statics::NewProp_bModifyComponentOnTransform_MetaData[] = {
		{ "Comment", "/** If true, Component->Modify() is called on SetTransform */" },
		{ "ModuleRelativePath", "Public/BaseGizmos/TransformSources.h" },
		{ "ToolTip", "If true, Component->Modify() is called on SetTransform" },
	};
#endif
	void Z_Construct_UClass_UGizmoComponentWorldTransformSource_Statics::NewProp_bModifyComponentOnTransform_SetBit(void* Obj)
	{
		((UGizmoComponentWorldTransformSource*)Obj)->bModifyComponentOnTransform = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGizmoComponentWorldTransformSource_Statics::NewProp_bModifyComponentOnTransform = { "bModifyComponentOnTransform", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGizmoComponentWorldTransformSource), &Z_Construct_UClass_UGizmoComponentWorldTransformSource_Statics::NewProp_bModifyComponentOnTransform_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGizmoComponentWorldTransformSource_Statics::NewProp_bModifyComponentOnTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoComponentWorldTransformSource_Statics::NewProp_bModifyComponentOnTransform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoComponentWorldTransformSource_Statics::NewProp_Component_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BaseGizmos/TransformSources.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGizmoComponentWorldTransformSource_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGizmoComponentWorldTransformSource, Component), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGizmoComponentWorldTransformSource_Statics::NewProp_Component_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoComponentWorldTransformSource_Statics::NewProp_Component_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGizmoComponentWorldTransformSource_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoComponentWorldTransformSource_Statics::NewProp_bModifyComponentOnTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoComponentWorldTransformSource_Statics::NewProp_Component,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGizmoComponentWorldTransformSource_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGizmoComponentWorldTransformSource>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGizmoComponentWorldTransformSource_Statics::ClassParams = {
		&UGizmoComponentWorldTransformSource::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGizmoComponentWorldTransformSource_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoComponentWorldTransformSource_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGizmoComponentWorldTransformSource_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoComponentWorldTransformSource_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGizmoComponentWorldTransformSource()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGizmoComponentWorldTransformSource_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGizmoComponentWorldTransformSource, 890990605);
	template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<UGizmoComponentWorldTransformSource>()
	{
		return UGizmoComponentWorldTransformSource::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGizmoComponentWorldTransformSource(Z_Construct_UClass_UGizmoComponentWorldTransformSource, &UGizmoComponentWorldTransformSource::StaticClass, TEXT("/Script/InteractiveToolsFramework"), TEXT("UGizmoComponentWorldTransformSource"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGizmoComponentWorldTransformSource);
	void UGizmoScaledTransformSource::StaticRegisterNativesUGizmoScaledTransformSource()
	{
	}
	UClass* Z_Construct_UClass_UGizmoScaledTransformSource_NoRegister()
	{
		return UGizmoScaledTransformSource::StaticClass();
	}
	struct Z_Construct_UClass_UGizmoScaledTransformSource_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChildTransformSource_MetaData[];
#endif
		static const UE4CodeGen_Private::FInterfacePropertyParams NewProp_ChildTransformSource;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGizmoScaledTransformSource_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGizmoBaseTransformSource,
		(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoScaledTransformSource_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UGizmoScaledTransformSource wraps another IGizmoTransformSource implementation and adds a\n * separate scaling vector to the Transform. The main use of this class is to support scaling\n * in a 3D gizmo without actually scaling the Gizmo itself. Generally our pattern is to apply\n * the gizmo's position/rotation transform to the target object via a TransformProxy, but\n * that does not work with Scaling. So this class stores the scaling vector separately, provided by\n * an external source via FSeparateScaleProvider, and in GetTransform/SetTransform rewrites the\n * Transform from the child IGizmoTransformSource with the new scale.\n */" },
		{ "IncludePath", "BaseGizmos/TransformSources.h" },
		{ "ModuleRelativePath", "Public/BaseGizmos/TransformSources.h" },
		{ "ToolTip", "UGizmoScaledTransformSource wraps another IGizmoTransformSource implementation and adds a\nseparate scaling vector to the Transform. The main use of this class is to support scaling\nin a 3D gizmo without actually scaling the Gizmo itself. Generally our pattern is to apply\nthe gizmo's position/rotation transform to the target object via a TransformProxy, but\nthat does not work with Scaling. So this class stores the scaling vector separately, provided by\nan external source via FSeparateScaleProvider, and in GetTransform/SetTransform rewrites the\nTransform from the child IGizmoTransformSource with the new scale." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoScaledTransformSource_Statics::NewProp_ChildTransformSource_MetaData[] = {
		{ "Comment", "/**\n\x09 * Child transform source\n\x09 */" },
		{ "ModuleRelativePath", "Public/BaseGizmos/TransformSources.h" },
		{ "ToolTip", "Child transform source" },
	};
#endif
	const UE4CodeGen_Private::FInterfacePropertyParams Z_Construct_UClass_UGizmoScaledTransformSource_Statics::NewProp_ChildTransformSource = { "ChildTransformSource", nullptr, (EPropertyFlags)0x0014000000000000, UE4CodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGizmoScaledTransformSource, ChildTransformSource), Z_Construct_UClass_UGizmoTransformSource_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGizmoScaledTransformSource_Statics::NewProp_ChildTransformSource_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoScaledTransformSource_Statics::NewProp_ChildTransformSource_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGizmoScaledTransformSource_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoScaledTransformSource_Statics::NewProp_ChildTransformSource,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGizmoScaledTransformSource_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGizmoScaledTransformSource>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGizmoScaledTransformSource_Statics::ClassParams = {
		&UGizmoScaledTransformSource::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGizmoScaledTransformSource_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoScaledTransformSource_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGizmoScaledTransformSource_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoScaledTransformSource_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGizmoScaledTransformSource()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGizmoScaledTransformSource_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGizmoScaledTransformSource, 499035602);
	template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<UGizmoScaledTransformSource>()
	{
		return UGizmoScaledTransformSource::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGizmoScaledTransformSource(Z_Construct_UClass_UGizmoScaledTransformSource, &UGizmoScaledTransformSource::StaticClass, TEXT("/Script/InteractiveToolsFramework"), TEXT("UGizmoScaledTransformSource"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGizmoScaledTransformSource);
	void UGizmoTransformProxyTransformSource::StaticRegisterNativesUGizmoTransformProxyTransformSource()
	{
	}
	UClass* Z_Construct_UClass_UGizmoTransformProxyTransformSource_NoRegister()
	{
		return UGizmoTransformProxyTransformSource::StaticClass();
	}
	struct Z_Construct_UClass_UGizmoTransformProxyTransformSource_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Proxy_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Proxy;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGizmoTransformProxyTransformSource_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGizmoBaseTransformSource,
		(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoTransformProxyTransformSource_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UGizmoTransformProxyTransformSource implements IGizmoTransformSource (via UGizmoBaseTransformSource)\n * based on the internal transform of a UTransformProxy.\n */" },
		{ "IncludePath", "BaseGizmos/TransformSources.h" },
		{ "ModuleRelativePath", "Public/BaseGizmos/TransformSources.h" },
		{ "ToolTip", "UGizmoTransformProxyTransformSource implements IGizmoTransformSource (via UGizmoBaseTransformSource)\nbased on the internal transform of a UTransformProxy." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoTransformProxyTransformSource_Statics::NewProp_Proxy_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseGizmos/TransformSources.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGizmoTransformProxyTransformSource_Statics::NewProp_Proxy = { "Proxy", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGizmoTransformProxyTransformSource, Proxy), Z_Construct_UClass_UTransformProxy_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGizmoTransformProxyTransformSource_Statics::NewProp_Proxy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoTransformProxyTransformSource_Statics::NewProp_Proxy_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGizmoTransformProxyTransformSource_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoTransformProxyTransformSource_Statics::NewProp_Proxy,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGizmoTransformProxyTransformSource_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGizmoTransformProxyTransformSource>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGizmoTransformProxyTransformSource_Statics::ClassParams = {
		&UGizmoTransformProxyTransformSource::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGizmoTransformProxyTransformSource_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoTransformProxyTransformSource_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGizmoTransformProxyTransformSource_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoTransformProxyTransformSource_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGizmoTransformProxyTransformSource()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGizmoTransformProxyTransformSource_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGizmoTransformProxyTransformSource, 2847193694);
	template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<UGizmoTransformProxyTransformSource>()
	{
		return UGizmoTransformProxyTransformSource::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGizmoTransformProxyTransformSource(Z_Construct_UClass_UGizmoTransformProxyTransformSource, &UGizmoTransformProxyTransformSource::StaticClass, TEXT("/Script/InteractiveToolsFramework"), TEXT("UGizmoTransformProxyTransformSource"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGizmoTransformProxyTransformSource);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
