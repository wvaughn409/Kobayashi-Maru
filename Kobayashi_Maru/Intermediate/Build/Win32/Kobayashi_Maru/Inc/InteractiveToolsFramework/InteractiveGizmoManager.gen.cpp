// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InteractiveToolsFramework/Public/InteractiveGizmoManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInteractiveGizmoManager() {}
// Cross Module References
	INTERACTIVETOOLSFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FActiveGizmo();
	UPackage* Z_Construct_UPackage__Script_InteractiveToolsFramework();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveGizmoManager_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveGizmoManager();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveGizmoBuilder_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UToolContextTransactionProvider_NoRegister();
// End Cross Module References
class UScriptStruct* FActiveGizmo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern INTERACTIVETOOLSFRAMEWORK_API uint32 Get_Z_Construct_UScriptStruct_FActiveGizmo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FActiveGizmo, Z_Construct_UPackage__Script_InteractiveToolsFramework(), TEXT("ActiveGizmo"), sizeof(FActiveGizmo), Get_Z_Construct_UScriptStruct_FActiveGizmo_Hash());
	}
	return Singleton;
}
template<> INTERACTIVETOOLSFRAMEWORK_API UScriptStruct* StaticStruct<FActiveGizmo>()
{
	return FActiveGizmo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FActiveGizmo(FActiveGizmo::StaticStruct, TEXT("/Script/InteractiveToolsFramework"), TEXT("ActiveGizmo"), false, nullptr, nullptr);
static struct FScriptStruct_InteractiveToolsFramework_StaticRegisterNativesFActiveGizmo
{
	FScriptStruct_InteractiveToolsFramework_StaticRegisterNativesFActiveGizmo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ActiveGizmo")),new UScriptStruct::TCppStructOps<FActiveGizmo>);
	}
} ScriptStruct_InteractiveToolsFramework_StaticRegisterNativesFActiveGizmo;
	struct Z_Construct_UScriptStruct_FActiveGizmo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActiveGizmo_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InteractiveGizmoManager.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FActiveGizmo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FActiveGizmo>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FActiveGizmo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
		nullptr,
		&NewStructOps,
		"ActiveGizmo",
		sizeof(FActiveGizmo),
		alignof(FActiveGizmo),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FActiveGizmo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActiveGizmo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FActiveGizmo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FActiveGizmo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_InteractiveToolsFramework();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ActiveGizmo"), sizeof(FActiveGizmo), Get_Z_Construct_UScriptStruct_FActiveGizmo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FActiveGizmo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FActiveGizmo_Hash() { return 1710982859U; }
	void UInteractiveGizmoManager::StaticRegisterNativesUInteractiveGizmoManager()
	{
	}
	UClass* Z_Construct_UClass_UInteractiveGizmoManager_NoRegister()
	{
		return UInteractiveGizmoManager::StaticClass();
	}
	struct Z_Construct_UClass_UInteractiveGizmoManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GizmoBuilders_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_GizmoBuilders;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_GizmoBuilders_Key_KeyProp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GizmoBuilders_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActiveGizmos_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ActiveGizmos;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ActiveGizmos_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInteractiveGizmoManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractiveGizmoManager_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UInteractiveGizmoManager allows users of the Tools framework to create and operate Gizmo instances.\n * For each Gizmo, a (string,GizmoBuilder) pair is registered with the GizmoManager.\n * Gizmos can then be activated via the string identifier.\n * \n */" },
		{ "IncludePath", "InteractiveGizmoManager.h" },
		{ "ModuleRelativePath", "Public/InteractiveGizmoManager.h" },
		{ "ToolTip", "UInteractiveGizmoManager allows users of the Tools framework to create and operate Gizmo instances.\nFor each Gizmo, a (string,GizmoBuilder) pair is registered with the GizmoManager.\nGizmos can then be activated via the string identifier." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractiveGizmoManager_Statics::NewProp_GizmoBuilders_MetaData[] = {
		{ "Comment", "/** Current set of named GizmoBuilders */" },
		{ "ModuleRelativePath", "Public/InteractiveGizmoManager.h" },
		{ "ToolTip", "Current set of named GizmoBuilders" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UInteractiveGizmoManager_Statics::NewProp_GizmoBuilders = { "GizmoBuilders", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInteractiveGizmoManager, GizmoBuilders), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UInteractiveGizmoManager_Statics::NewProp_GizmoBuilders_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInteractiveGizmoManager_Statics::NewProp_GizmoBuilders_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UInteractiveGizmoManager_Statics::NewProp_GizmoBuilders_Key_KeyProp = { "GizmoBuilders_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInteractiveGizmoManager_Statics::NewProp_GizmoBuilders_ValueProp = { "GizmoBuilders", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UInteractiveGizmoBuilder_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractiveGizmoManager_Statics::NewProp_ActiveGizmos_MetaData[] = {
		{ "Comment", "/** set of Currently-active Gizmos */" },
		{ "ModuleRelativePath", "Public/InteractiveGizmoManager.h" },
		{ "ToolTip", "set of Currently-active Gizmos" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInteractiveGizmoManager_Statics::NewProp_ActiveGizmos = { "ActiveGizmos", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInteractiveGizmoManager, ActiveGizmos), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UInteractiveGizmoManager_Statics::NewProp_ActiveGizmos_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInteractiveGizmoManager_Statics::NewProp_ActiveGizmos_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInteractiveGizmoManager_Statics::NewProp_ActiveGizmos_Inner = { "ActiveGizmos", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FActiveGizmo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInteractiveGizmoManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractiveGizmoManager_Statics::NewProp_GizmoBuilders,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractiveGizmoManager_Statics::NewProp_GizmoBuilders_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractiveGizmoManager_Statics::NewProp_GizmoBuilders_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractiveGizmoManager_Statics::NewProp_ActiveGizmos,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractiveGizmoManager_Statics::NewProp_ActiveGizmos_Inner,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UInteractiveGizmoManager_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UToolContextTransactionProvider_NoRegister, (int32)VTABLE_OFFSET(UInteractiveGizmoManager, IToolContextTransactionProvider), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInteractiveGizmoManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInteractiveGizmoManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInteractiveGizmoManager_Statics::ClassParams = {
		&UInteractiveGizmoManager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UInteractiveGizmoManager_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UInteractiveGizmoManager_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UInteractiveGizmoManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInteractiveGizmoManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInteractiveGizmoManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInteractiveGizmoManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInteractiveGizmoManager, 2001820946);
	template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<UInteractiveGizmoManager>()
	{
		return UInteractiveGizmoManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInteractiveGizmoManager(Z_Construct_UClass_UInteractiveGizmoManager, &UInteractiveGizmoManager::StaticClass, TEXT("/Script/InteractiveToolsFramework"), TEXT("UInteractiveGizmoManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInteractiveGizmoManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
