// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InteractiveToolsFramework/Public/BaseGizmos/TransformProxy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTransformProxy() {}
// Cross Module References
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UTransformProxy_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UTransformProxy();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_InteractiveToolsFramework();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
// End Cross Module References
	void UTransformProxy::StaticRegisterNativesUTransformProxy()
	{
	}
	UClass* Z_Construct_UClass_UTransformProxy_NoRegister()
	{
		return UTransformProxy::StaticClass();
	}
	struct Z_Construct_UClass_UTransformProxy_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InitialSharedTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InitialSharedTransform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SharedTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SharedTransform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSetPivotMode_MetaData[];
#endif
		static void NewProp_bSetPivotMode_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSetPivotMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRotatePerObject_MetaData[];
#endif
		static void NewProp_bRotatePerObject_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRotatePerObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTransformProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTransformProxy_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UTransformProxy is used to transform a set of sub-ojects. An internal\n * FTransform is generated based on the sub-object set, and the relative\n * FTransform of each sub-object is stored. Then as this main transform\n * is updated, the sub-objects are also updated.\n * \n * Currently only USceneComponent sub-objects are supported.\n * \n * If only one sub-object is set, the main transform is the sub-object transform.\n * Otherwise the main transform is centered at the average origin and\n * has no rotation.\n */" },
		{ "IncludePath", "BaseGizmos/TransformProxy.h" },
		{ "ModuleRelativePath", "Public/BaseGizmos/TransformProxy.h" },
		{ "ToolTip", "UTransformProxy is used to transform a set of sub-ojects. An internal\nFTransform is generated based on the sub-object set, and the relative\nFTransform of each sub-object is stored. Then as this main transform\nis updated, the sub-objects are also updated.\n\nCurrently only USceneComponent sub-objects are supported.\n\nIf only one sub-object is set, the main transform is the sub-object transform.\nOtherwise the main transform is centered at the average origin and\nhas no rotation." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTransformProxy_Statics::NewProp_InitialSharedTransform_MetaData[] = {
		{ "Comment", "/** The main transform */" },
		{ "ModuleRelativePath", "Public/BaseGizmos/TransformProxy.h" },
		{ "ToolTip", "The main transform" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTransformProxy_Statics::NewProp_InitialSharedTransform = { "InitialSharedTransform", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTransformProxy, InitialSharedTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UClass_UTransformProxy_Statics::NewProp_InitialSharedTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTransformProxy_Statics::NewProp_InitialSharedTransform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTransformProxy_Statics::NewProp_SharedTransform_MetaData[] = {
		{ "Comment", "/** The main transform */" },
		{ "ModuleRelativePath", "Public/BaseGizmos/TransformProxy.h" },
		{ "ToolTip", "The main transform" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTransformProxy_Statics::NewProp_SharedTransform = { "SharedTransform", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTransformProxy, SharedTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UClass_UTransformProxy_Statics::NewProp_SharedTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTransformProxy_Statics::NewProp_SharedTransform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTransformProxy_Statics::NewProp_bSetPivotMode_MetaData[] = {
		{ "Comment", "/**\n\x09 * If true, then on SetTransform() the components are not moved, and their local transforms are recalculated\n\x09 */" },
		{ "ModuleRelativePath", "Public/BaseGizmos/TransformProxy.h" },
		{ "ToolTip", "If true, then on SetTransform() the components are not moved, and their local transforms are recalculated" },
	};
#endif
	void Z_Construct_UClass_UTransformProxy_Statics::NewProp_bSetPivotMode_SetBit(void* Obj)
	{
		((UTransformProxy*)Obj)->bSetPivotMode = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTransformProxy_Statics::NewProp_bSetPivotMode = { "bSetPivotMode", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UTransformProxy), &Z_Construct_UClass_UTransformProxy_Statics::NewProp_bSetPivotMode_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTransformProxy_Statics::NewProp_bSetPivotMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTransformProxy_Statics::NewProp_bSetPivotMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTransformProxy_Statics::NewProp_bRotatePerObject_MetaData[] = {
		{ "Comment", "/**\n\x09 * If true, relative rotation of shared transform is applied to objects before relative translation (ie they rotate in place)\n\x09 */" },
		{ "ModuleRelativePath", "Public/BaseGizmos/TransformProxy.h" },
		{ "ToolTip", "If true, relative rotation of shared transform is applied to objects before relative translation (ie they rotate in place)" },
	};
#endif
	void Z_Construct_UClass_UTransformProxy_Statics::NewProp_bRotatePerObject_SetBit(void* Obj)
	{
		((UTransformProxy*)Obj)->bRotatePerObject = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTransformProxy_Statics::NewProp_bRotatePerObject = { "bRotatePerObject", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UTransformProxy), &Z_Construct_UClass_UTransformProxy_Statics::NewProp_bRotatePerObject_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTransformProxy_Statics::NewProp_bRotatePerObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTransformProxy_Statics::NewProp_bRotatePerObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTransformProxy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransformProxy_Statics::NewProp_InitialSharedTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransformProxy_Statics::NewProp_SharedTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransformProxy_Statics::NewProp_bSetPivotMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransformProxy_Statics::NewProp_bRotatePerObject,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTransformProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTransformProxy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTransformProxy_Statics::ClassParams = {
		&UTransformProxy::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTransformProxy_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTransformProxy_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTransformProxy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTransformProxy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTransformProxy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTransformProxy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTransformProxy, 212847527);
	template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<UTransformProxy>()
	{
		return UTransformProxy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTransformProxy(Z_Construct_UClass_UTransformProxy, &UTransformProxy::StaticClass, TEXT("/Script/InteractiveToolsFramework"), TEXT("UTransformProxy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTransformProxy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
