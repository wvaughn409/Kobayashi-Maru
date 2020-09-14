// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InteractiveToolsFramework/Public/BaseGizmos/ParameterSourcesVec2.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParameterSourcesVec2() {}
// Cross Module References
	INTERACTIVETOOLSFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FGizmoVec2ParameterChange();
	UPackage* Z_Construct_UPackage__Script_InteractiveToolsFramework();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoBaseVec2ParameterSource_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoBaseVec2ParameterSource();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoVec2ParameterSource_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoLocalVec2ParameterSource_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoLocalVec2ParameterSource();
// End Cross Module References
class UScriptStruct* FGizmoVec2ParameterChange::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern INTERACTIVETOOLSFRAMEWORK_API uint32 Get_Z_Construct_UScriptStruct_FGizmoVec2ParameterChange_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGizmoVec2ParameterChange, Z_Construct_UPackage__Script_InteractiveToolsFramework(), TEXT("GizmoVec2ParameterChange"), sizeof(FGizmoVec2ParameterChange), Get_Z_Construct_UScriptStruct_FGizmoVec2ParameterChange_Hash());
	}
	return Singleton;
}
template<> INTERACTIVETOOLSFRAMEWORK_API UScriptStruct* StaticStruct<FGizmoVec2ParameterChange>()
{
	return FGizmoVec2ParameterChange::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGizmoVec2ParameterChange(FGizmoVec2ParameterChange::StaticStruct, TEXT("/Script/InteractiveToolsFramework"), TEXT("GizmoVec2ParameterChange"), false, nullptr, nullptr);
static struct FScriptStruct_InteractiveToolsFramework_StaticRegisterNativesFGizmoVec2ParameterChange
{
	FScriptStruct_InteractiveToolsFramework_StaticRegisterNativesFGizmoVec2ParameterChange()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("GizmoVec2ParameterChange")),new UScriptStruct::TCppStructOps<FGizmoVec2ParameterChange>);
	}
} ScriptStruct_InteractiveToolsFramework_StaticRegisterNativesFGizmoVec2ParameterChange;
	struct Z_Construct_UScriptStruct_FGizmoVec2ParameterChange_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CurrentValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InitialValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InitialValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGizmoVec2ParameterChange_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * FGizmoVec2ParameterChange represents a change in the value of an IGizmoVec2ParameterSource.\n * IGizmoVec2ParameterSource implementations use this to track changes and emit delta information.\n */" },
		{ "ModuleRelativePath", "Public/BaseGizmos/ParameterSourcesVec2.h" },
		{ "ToolTip", "FGizmoVec2ParameterChange represents a change in the value of an IGizmoVec2ParameterSource.\nIGizmoVec2ParameterSource implementations use this to track changes and emit delta information." },
	};
#endif
	void* Z_Construct_UScriptStruct_FGizmoVec2ParameterChange_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGizmoVec2ParameterChange>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGizmoVec2ParameterChange_Statics::NewProp_CurrentValue_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseGizmos/ParameterSourcesVec2.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGizmoVec2ParameterChange_Statics::NewProp_CurrentValue = { "CurrentValue", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGizmoVec2ParameterChange, CurrentValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FGizmoVec2ParameterChange_Statics::NewProp_CurrentValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGizmoVec2ParameterChange_Statics::NewProp_CurrentValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGizmoVec2ParameterChange_Statics::NewProp_InitialValue_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseGizmos/ParameterSourcesVec2.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGizmoVec2ParameterChange_Statics::NewProp_InitialValue = { "InitialValue", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGizmoVec2ParameterChange, InitialValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FGizmoVec2ParameterChange_Statics::NewProp_InitialValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGizmoVec2ParameterChange_Statics::NewProp_InitialValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGizmoVec2ParameterChange_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGizmoVec2ParameterChange_Statics::NewProp_CurrentValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGizmoVec2ParameterChange_Statics::NewProp_InitialValue,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGizmoVec2ParameterChange_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
		nullptr,
		&NewStructOps,
		"GizmoVec2ParameterChange",
		sizeof(FGizmoVec2ParameterChange),
		alignof(FGizmoVec2ParameterChange),
		Z_Construct_UScriptStruct_FGizmoVec2ParameterChange_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGizmoVec2ParameterChange_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGizmoVec2ParameterChange_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGizmoVec2ParameterChange_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGizmoVec2ParameterChange()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGizmoVec2ParameterChange_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_InteractiveToolsFramework();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GizmoVec2ParameterChange"), sizeof(FGizmoVec2ParameterChange), Get_Z_Construct_UScriptStruct_FGizmoVec2ParameterChange_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGizmoVec2ParameterChange_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGizmoVec2ParameterChange_Hash() { return 49273437U; }
	void UGizmoBaseVec2ParameterSource::StaticRegisterNativesUGizmoBaseVec2ParameterSource()
	{
	}
	UClass* Z_Construct_UClass_UGizmoBaseVec2ParameterSource_NoRegister()
	{
		return UGizmoBaseVec2ParameterSource::StaticClass();
	}
	struct Z_Construct_UClass_UGizmoBaseVec2ParameterSource_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGizmoBaseVec2ParameterSource_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoBaseVec2ParameterSource_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UGizmoBaseVec2ParameterSource is a base implementation of IGizmoVec2ParameterSource,\n * which is not functional but adds an OnParameterChanged delegate for further subclasses.\n */" },
		{ "IncludePath", "BaseGizmos/ParameterSourcesVec2.h" },
		{ "ModuleRelativePath", "Public/BaseGizmos/ParameterSourcesVec2.h" },
		{ "ToolTip", "UGizmoBaseVec2ParameterSource is a base implementation of IGizmoVec2ParameterSource,\nwhich is not functional but adds an OnParameterChanged delegate for further subclasses." },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UGizmoBaseVec2ParameterSource_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UGizmoVec2ParameterSource_NoRegister, (int32)VTABLE_OFFSET(UGizmoBaseVec2ParameterSource, IGizmoVec2ParameterSource), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGizmoBaseVec2ParameterSource_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGizmoBaseVec2ParameterSource>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGizmoBaseVec2ParameterSource_Statics::ClassParams = {
		&UGizmoBaseVec2ParameterSource::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UGizmoBaseVec2ParameterSource_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoBaseVec2ParameterSource_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGizmoBaseVec2ParameterSource()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGizmoBaseVec2ParameterSource_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGizmoBaseVec2ParameterSource, 2882468932);
	template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<UGizmoBaseVec2ParameterSource>()
	{
		return UGizmoBaseVec2ParameterSource::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGizmoBaseVec2ParameterSource(Z_Construct_UClass_UGizmoBaseVec2ParameterSource, &UGizmoBaseVec2ParameterSource::StaticClass, TEXT("/Script/InteractiveToolsFramework"), TEXT("UGizmoBaseVec2ParameterSource"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGizmoBaseVec2ParameterSource);
	void UGizmoLocalVec2ParameterSource::StaticRegisterNativesUGizmoLocalVec2ParameterSource()
	{
	}
	UClass* Z_Construct_UClass_UGizmoLocalVec2ParameterSource_NoRegister()
	{
		return UGizmoLocalVec2ParameterSource::StaticClass();
	}
	struct Z_Construct_UClass_UGizmoLocalVec2ParameterSource_Statics
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
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGizmoLocalVec2ParameterSource_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGizmoBaseVec2ParameterSource,
		(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoLocalVec2ParameterSource_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UGizmoBaseVec2ParameterSource is an implementation of IGizmoVec2ParameterSource \n * (by way of UGizmoBaseVec2ParameterSource) which locally stores the relevant Parameter\n * and emits update events via the OnParameterChanged delegate.\n */" },
		{ "IncludePath", "BaseGizmos/ParameterSourcesVec2.h" },
		{ "ModuleRelativePath", "Public/BaseGizmos/ParameterSourcesVec2.h" },
		{ "ToolTip", "UGizmoBaseVec2ParameterSource is an implementation of IGizmoVec2ParameterSource\n(by way of UGizmoBaseVec2ParameterSource) which locally stores the relevant Parameter\nand emits update events via the OnParameterChanged delegate." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoLocalVec2ParameterSource_Statics::NewProp_LastChange_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseGizmos/ParameterSourcesVec2.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGizmoLocalVec2ParameterSource_Statics::NewProp_LastChange = { "LastChange", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGizmoLocalVec2ParameterSource, LastChange), Z_Construct_UScriptStruct_FGizmoVec2ParameterChange, METADATA_PARAMS(Z_Construct_UClass_UGizmoLocalVec2ParameterSource_Statics::NewProp_LastChange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoLocalVec2ParameterSource_Statics::NewProp_LastChange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoLocalVec2ParameterSource_Statics::NewProp_Value_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseGizmos/ParameterSourcesVec2.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGizmoLocalVec2ParameterSource_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGizmoLocalVec2ParameterSource, Value), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UGizmoLocalVec2ParameterSource_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoLocalVec2ParameterSource_Statics::NewProp_Value_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGizmoLocalVec2ParameterSource_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoLocalVec2ParameterSource_Statics::NewProp_LastChange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoLocalVec2ParameterSource_Statics::NewProp_Value,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGizmoLocalVec2ParameterSource_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGizmoLocalVec2ParameterSource>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGizmoLocalVec2ParameterSource_Statics::ClassParams = {
		&UGizmoLocalVec2ParameterSource::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGizmoLocalVec2ParameterSource_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoLocalVec2ParameterSource_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGizmoLocalVec2ParameterSource_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoLocalVec2ParameterSource_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGizmoLocalVec2ParameterSource()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGizmoLocalVec2ParameterSource_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGizmoLocalVec2ParameterSource, 1048716400);
	template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<UGizmoLocalVec2ParameterSource>()
	{
		return UGizmoLocalVec2ParameterSource::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGizmoLocalVec2ParameterSource(Z_Construct_UClass_UGizmoLocalVec2ParameterSource, &UGizmoLocalVec2ParameterSource::StaticClass, TEXT("/Script/InteractiveToolsFramework"), TEXT("UGizmoLocalVec2ParameterSource"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGizmoLocalVec2ParameterSource);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
