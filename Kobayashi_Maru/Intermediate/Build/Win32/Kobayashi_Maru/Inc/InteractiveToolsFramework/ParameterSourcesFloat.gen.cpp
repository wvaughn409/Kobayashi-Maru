// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InteractiveToolsFramework/Public/BaseGizmos/ParameterSourcesFloat.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParameterSourcesFloat() {}
// Cross Module References
	INTERACTIVETOOLSFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FGizmoFloatParameterChange();
	UPackage* Z_Construct_UPackage__Script_InteractiveToolsFramework();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoBaseFloatParameterSource_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoBaseFloatParameterSource();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoFloatParameterSource_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoLocalFloatParameterSource_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoLocalFloatParameterSource();
// End Cross Module References
class UScriptStruct* FGizmoFloatParameterChange::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern INTERACTIVETOOLSFRAMEWORK_API uint32 Get_Z_Construct_UScriptStruct_FGizmoFloatParameterChange_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGizmoFloatParameterChange, Z_Construct_UPackage__Script_InteractiveToolsFramework(), TEXT("GizmoFloatParameterChange"), sizeof(FGizmoFloatParameterChange), Get_Z_Construct_UScriptStruct_FGizmoFloatParameterChange_Hash());
	}
	return Singleton;
}
template<> INTERACTIVETOOLSFRAMEWORK_API UScriptStruct* StaticStruct<FGizmoFloatParameterChange>()
{
	return FGizmoFloatParameterChange::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGizmoFloatParameterChange(FGizmoFloatParameterChange::StaticStruct, TEXT("/Script/InteractiveToolsFramework"), TEXT("GizmoFloatParameterChange"), false, nullptr, nullptr);
static struct FScriptStruct_InteractiveToolsFramework_StaticRegisterNativesFGizmoFloatParameterChange
{
	FScriptStruct_InteractiveToolsFramework_StaticRegisterNativesFGizmoFloatParameterChange()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("GizmoFloatParameterChange")),new UScriptStruct::TCppStructOps<FGizmoFloatParameterChange>);
	}
} ScriptStruct_InteractiveToolsFramework_StaticRegisterNativesFGizmoFloatParameterChange;
	struct Z_Construct_UScriptStruct_FGizmoFloatParameterChange_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CurrentValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InitialValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InitialValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGizmoFloatParameterChange_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * FGizmoVec2ParameterChange represents a change in the value of an IGizmoFloatParameterSource.\n * IGizmoFloatParameterSource implementations use this to track changes and emit delta information.\n */" },
		{ "ModuleRelativePath", "Public/BaseGizmos/ParameterSourcesFloat.h" },
		{ "ToolTip", "FGizmoVec2ParameterChange represents a change in the value of an IGizmoFloatParameterSource.\nIGizmoFloatParameterSource implementations use this to track changes and emit delta information." },
	};
#endif
	void* Z_Construct_UScriptStruct_FGizmoFloatParameterChange_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGizmoFloatParameterChange>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGizmoFloatParameterChange_Statics::NewProp_CurrentValue_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseGizmos/ParameterSourcesFloat.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGizmoFloatParameterChange_Statics::NewProp_CurrentValue = { "CurrentValue", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGizmoFloatParameterChange, CurrentValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FGizmoFloatParameterChange_Statics::NewProp_CurrentValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGizmoFloatParameterChange_Statics::NewProp_CurrentValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGizmoFloatParameterChange_Statics::NewProp_InitialValue_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseGizmos/ParameterSourcesFloat.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGizmoFloatParameterChange_Statics::NewProp_InitialValue = { "InitialValue", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGizmoFloatParameterChange, InitialValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FGizmoFloatParameterChange_Statics::NewProp_InitialValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGizmoFloatParameterChange_Statics::NewProp_InitialValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGizmoFloatParameterChange_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGizmoFloatParameterChange_Statics::NewProp_CurrentValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGizmoFloatParameterChange_Statics::NewProp_InitialValue,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGizmoFloatParameterChange_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
		nullptr,
		&NewStructOps,
		"GizmoFloatParameterChange",
		sizeof(FGizmoFloatParameterChange),
		alignof(FGizmoFloatParameterChange),
		Z_Construct_UScriptStruct_FGizmoFloatParameterChange_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGizmoFloatParameterChange_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGizmoFloatParameterChange_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGizmoFloatParameterChange_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGizmoFloatParameterChange()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGizmoFloatParameterChange_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_InteractiveToolsFramework();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GizmoFloatParameterChange"), sizeof(FGizmoFloatParameterChange), Get_Z_Construct_UScriptStruct_FGizmoFloatParameterChange_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGizmoFloatParameterChange_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGizmoFloatParameterChange_Hash() { return 2762809622U; }
	void UGizmoBaseFloatParameterSource::StaticRegisterNativesUGizmoBaseFloatParameterSource()
	{
	}
	UClass* Z_Construct_UClass_UGizmoBaseFloatParameterSource_NoRegister()
	{
		return UGizmoBaseFloatParameterSource::StaticClass();
	}
	struct Z_Construct_UClass_UGizmoBaseFloatParameterSource_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGizmoBaseFloatParameterSource_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoBaseFloatParameterSource_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UGizmoBaseFloatParameterSource is a base implementation of IGizmoFloatParameterSource,\n * which is not functional but adds an OnParameterChanged delegate for further subclasses.\n */" },
		{ "IncludePath", "BaseGizmos/ParameterSourcesFloat.h" },
		{ "ModuleRelativePath", "Public/BaseGizmos/ParameterSourcesFloat.h" },
		{ "ToolTip", "UGizmoBaseFloatParameterSource is a base implementation of IGizmoFloatParameterSource,\nwhich is not functional but adds an OnParameterChanged delegate for further subclasses." },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UGizmoBaseFloatParameterSource_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UGizmoFloatParameterSource_NoRegister, (int32)VTABLE_OFFSET(UGizmoBaseFloatParameterSource, IGizmoFloatParameterSource), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGizmoBaseFloatParameterSource_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGizmoBaseFloatParameterSource>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGizmoBaseFloatParameterSource_Statics::ClassParams = {
		&UGizmoBaseFloatParameterSource::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UGizmoBaseFloatParameterSource_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoBaseFloatParameterSource_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGizmoBaseFloatParameterSource()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGizmoBaseFloatParameterSource_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGizmoBaseFloatParameterSource, 152849986);
	template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<UGizmoBaseFloatParameterSource>()
	{
		return UGizmoBaseFloatParameterSource::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGizmoBaseFloatParameterSource(Z_Construct_UClass_UGizmoBaseFloatParameterSource, &UGizmoBaseFloatParameterSource::StaticClass, TEXT("/Script/InteractiveToolsFramework"), TEXT("UGizmoBaseFloatParameterSource"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGizmoBaseFloatParameterSource);
	void UGizmoLocalFloatParameterSource::StaticRegisterNativesUGizmoLocalFloatParameterSource()
	{
	}
	UClass* Z_Construct_UClass_UGizmoLocalFloatParameterSource_NoRegister()
	{
		return UGizmoLocalFloatParameterSource::StaticClass();
	}
	struct Z_Construct_UClass_UGizmoLocalFloatParameterSource_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastChange_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LastChange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGizmoLocalFloatParameterSource_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGizmoBaseFloatParameterSource,
		(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoLocalFloatParameterSource_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UGizmoLocalFloatParameterSource is an implementation of IGizmoFloatParameterSource\n * (by way of UGizmoBaseFloatParameterSource) which locally stores the relevant Parameter\n * and emits update events via the OnParameterChanged delegate.\n */" },
		{ "IncludePath", "BaseGizmos/ParameterSourcesFloat.h" },
		{ "ModuleRelativePath", "Public/BaseGizmos/ParameterSourcesFloat.h" },
		{ "ToolTip", "UGizmoLocalFloatParameterSource is an implementation of IGizmoFloatParameterSource\n(by way of UGizmoBaseFloatParameterSource) which locally stores the relevant Parameter\nand emits update events via the OnParameterChanged delegate." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoLocalFloatParameterSource_Statics::NewProp_LastChange_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseGizmos/ParameterSourcesFloat.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGizmoLocalFloatParameterSource_Statics::NewProp_LastChange = { "LastChange", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGizmoLocalFloatParameterSource, LastChange), Z_Construct_UScriptStruct_FGizmoFloatParameterChange, METADATA_PARAMS(Z_Construct_UClass_UGizmoLocalFloatParameterSource_Statics::NewProp_LastChange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoLocalFloatParameterSource_Statics::NewProp_LastChange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoLocalFloatParameterSource_Statics::NewProp_Value_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseGizmos/ParameterSourcesFloat.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGizmoLocalFloatParameterSource_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGizmoLocalFloatParameterSource, Value), METADATA_PARAMS(Z_Construct_UClass_UGizmoLocalFloatParameterSource_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoLocalFloatParameterSource_Statics::NewProp_Value_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGizmoLocalFloatParameterSource_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoLocalFloatParameterSource_Statics::NewProp_LastChange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoLocalFloatParameterSource_Statics::NewProp_Value,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGizmoLocalFloatParameterSource_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGizmoLocalFloatParameterSource>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGizmoLocalFloatParameterSource_Statics::ClassParams = {
		&UGizmoLocalFloatParameterSource::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGizmoLocalFloatParameterSource_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoLocalFloatParameterSource_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGizmoLocalFloatParameterSource_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoLocalFloatParameterSource_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGizmoLocalFloatParameterSource()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGizmoLocalFloatParameterSource_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGizmoLocalFloatParameterSource, 3091666550);
	template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<UGizmoLocalFloatParameterSource>()
	{
		return UGizmoLocalFloatParameterSource::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGizmoLocalFloatParameterSource(Z_Construct_UClass_UGizmoLocalFloatParameterSource, &UGizmoLocalFloatParameterSource::StaticClass, TEXT("/Script/InteractiveToolsFramework"), TEXT("UGizmoLocalFloatParameterSource"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGizmoLocalFloatParameterSource);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
