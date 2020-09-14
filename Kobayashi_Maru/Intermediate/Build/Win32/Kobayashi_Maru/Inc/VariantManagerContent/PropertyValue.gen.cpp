// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VariantManagerContent/Public/PropertyValue.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePropertyValue() {}
// Cross Module References
	VARIANTMANAGERCONTENT_API UEnum* Z_Construct_UEnum_VariantManagerContent_EPropertyValueCategory();
	UPackage* Z_Construct_UPackage__Script_VariantManagerContent();
	VARIANTMANAGERCONTENT_API UScriptStruct* Z_Construct_UScriptStruct_FCapturedPropSegment();
	VARIANTMANAGERCONTENT_API UClass* Z_Construct_UClass_UPropertyValue_NoRegister();
	VARIANTMANAGERCONTENT_API UClass* Z_Construct_UClass_UPropertyValue();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	VARIANTMANAGERCONTENT_API UClass* Z_Construct_UClass_UPropertyValueTransform_NoRegister();
	VARIANTMANAGERCONTENT_API UClass* Z_Construct_UClass_UPropertyValueTransform();
	VARIANTMANAGERCONTENT_API UClass* Z_Construct_UClass_UPropertyValueVisibility_NoRegister();
	VARIANTMANAGERCONTENT_API UClass* Z_Construct_UClass_UPropertyValueVisibility();
// End Cross Module References
	static UEnum* EPropertyValueCategory_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_VariantManagerContent_EPropertyValueCategory, Z_Construct_UPackage__Script_VariantManagerContent(), TEXT("EPropertyValueCategory"));
		}
		return Singleton;
	}
	template<> VARIANTMANAGERCONTENT_API UEnum* StaticEnum<EPropertyValueCategory>()
	{
		return EPropertyValueCategory_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPropertyValueCategory(EPropertyValueCategory_StaticEnum, TEXT("/Script/VariantManagerContent"), TEXT("EPropertyValueCategory"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_VariantManagerContent_EPropertyValueCategory_Hash() { return 3309265563U; }
	UEnum* Z_Construct_UEnum_VariantManagerContent_EPropertyValueCategory()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_VariantManagerContent();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPropertyValueCategory"), 0, Get_Z_Construct_UEnum_VariantManagerContent_EPropertyValueCategory_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPropertyValueCategory::Undefined", (int64)EPropertyValueCategory::Undefined },
				{ "EPropertyValueCategory::Generic", (int64)EPropertyValueCategory::Generic },
				{ "EPropertyValueCategory::RelativeLocation", (int64)EPropertyValueCategory::RelativeLocation },
				{ "EPropertyValueCategory::RelativeRotation", (int64)EPropertyValueCategory::RelativeRotation },
				{ "EPropertyValueCategory::RelativeScale3D", (int64)EPropertyValueCategory::RelativeScale3D },
				{ "EPropertyValueCategory::Visibility", (int64)EPropertyValueCategory::Visibility },
				{ "EPropertyValueCategory::Material", (int64)EPropertyValueCategory::Material },
				{ "EPropertyValueCategory::Color", (int64)EPropertyValueCategory::Color },
				{ "EPropertyValueCategory::Option", (int64)EPropertyValueCategory::Option },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Color.Name", "EPropertyValueCategory::Color" },
				{ "Generic.Name", "EPropertyValueCategory::Generic" },
				{ "Material.Name", "EPropertyValueCategory::Material" },
				{ "ModuleRelativePath", "Public/PropertyValue.h" },
				{ "Option.Name", "EPropertyValueCategory::Option" },
				{ "RelativeLocation.Name", "EPropertyValueCategory::RelativeLocation" },
				{ "RelativeRotation.Name", "EPropertyValueCategory::RelativeRotation" },
				{ "RelativeScale3D.Name", "EPropertyValueCategory::RelativeScale3D" },
				{ "Undefined.Name", "EPropertyValueCategory::Undefined" },
				{ "Visibility.Name", "EPropertyValueCategory::Visibility" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_VariantManagerContent,
				nullptr,
				"EPropertyValueCategory",
				"EPropertyValueCategory",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FCapturedPropSegment::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VARIANTMANAGERCONTENT_API uint32 Get_Z_Construct_UScriptStruct_FCapturedPropSegment_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCapturedPropSegment, Z_Construct_UPackage__Script_VariantManagerContent(), TEXT("CapturedPropSegment"), sizeof(FCapturedPropSegment), Get_Z_Construct_UScriptStruct_FCapturedPropSegment_Hash());
	}
	return Singleton;
}
template<> VARIANTMANAGERCONTENT_API UScriptStruct* StaticStruct<FCapturedPropSegment>()
{
	return FCapturedPropSegment::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCapturedPropSegment(FCapturedPropSegment::StaticStruct, TEXT("/Script/VariantManagerContent"), TEXT("CapturedPropSegment"), false, nullptr, nullptr);
static struct FScriptStruct_VariantManagerContent_StaticRegisterNativesFCapturedPropSegment
{
	FScriptStruct_VariantManagerContent_StaticRegisterNativesFCapturedPropSegment()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CapturedPropSegment")),new UScriptStruct::TCppStructOps<FCapturedPropSegment>);
	}
} ScriptStruct_VariantManagerContent_StaticRegisterNativesFCapturedPropSegment;
	struct Z_Construct_UScriptStruct_FCapturedPropSegment_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ComponentName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ComponentName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PropertyIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PropertyIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PropertyName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PropertyName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCapturedPropSegment_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// Describes one link in a full property path\n// For array properties, a link might be the outer (e.g. AttachChildren, -1, None)\n// while also it may be an inner (e.g. AttachChildren, 2, Cube)\n// Doing this allows us to resolve components regardless of their order, which\n// is important for handling component reordering and transient components (e.g.\n// runtime billboard components, etc)\n" },
		{ "ModuleRelativePath", "Public/PropertyValue.h" },
		{ "ToolTip", "Describes one link in a full property path\nFor array properties, a link might be the outer (e.g. AttachChildren, -1, None)\nwhile also it may be an inner (e.g. AttachChildren, 2, Cube)\nDoing this allows us to resolve components regardless of their order, which\nis important for handling component reordering and transient components (e.g.\nruntime billboard components, etc)" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCapturedPropSegment_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCapturedPropSegment>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCapturedPropSegment_Statics::NewProp_ComponentName_MetaData[] = {
		{ "ModuleRelativePath", "Public/PropertyValue.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCapturedPropSegment_Statics::NewProp_ComponentName = { "ComponentName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCapturedPropSegment, ComponentName), METADATA_PARAMS(Z_Construct_UScriptStruct_FCapturedPropSegment_Statics::NewProp_ComponentName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCapturedPropSegment_Statics::NewProp_ComponentName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCapturedPropSegment_Statics::NewProp_PropertyIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/PropertyValue.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCapturedPropSegment_Statics::NewProp_PropertyIndex = { "PropertyIndex", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCapturedPropSegment, PropertyIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FCapturedPropSegment_Statics::NewProp_PropertyIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCapturedPropSegment_Statics::NewProp_PropertyIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCapturedPropSegment_Statics::NewProp_PropertyName_MetaData[] = {
		{ "ModuleRelativePath", "Public/PropertyValue.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCapturedPropSegment_Statics::NewProp_PropertyName = { "PropertyName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCapturedPropSegment, PropertyName), METADATA_PARAMS(Z_Construct_UScriptStruct_FCapturedPropSegment_Statics::NewProp_PropertyName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCapturedPropSegment_Statics::NewProp_PropertyName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCapturedPropSegment_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCapturedPropSegment_Statics::NewProp_ComponentName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCapturedPropSegment_Statics::NewProp_PropertyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCapturedPropSegment_Statics::NewProp_PropertyName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCapturedPropSegment_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VariantManagerContent,
		nullptr,
		&NewStructOps,
		"CapturedPropSegment",
		sizeof(FCapturedPropSegment),
		alignof(FCapturedPropSegment),
		Z_Construct_UScriptStruct_FCapturedPropSegment_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCapturedPropSegment_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCapturedPropSegment_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCapturedPropSegment_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCapturedPropSegment()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCapturedPropSegment_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_VariantManagerContent();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CapturedPropSegment"), sizeof(FCapturedPropSegment), Get_Z_Construct_UScriptStruct_FCapturedPropSegment_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCapturedPropSegment_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCapturedPropSegment_Hash() { return 401287400U; }
	DEFINE_FUNCTION(UPropertyValue::execHasRecordedData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasRecordedData();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPropertyValue::execGetFullDisplayString)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetFullDisplayString();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPropertyValue::execGetPropertyTooltip)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=P_THIS->GetPropertyTooltip();
		P_NATIVE_END;
	}
	void UPropertyValue::StaticRegisterNativesUPropertyValue()
	{
		UClass* Class = UPropertyValue::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetFullDisplayString", &UPropertyValue::execGetFullDisplayString },
			{ "GetPropertyTooltip", &UPropertyValue::execGetPropertyTooltip },
			{ "HasRecordedData", &UPropertyValue::execHasRecordedData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPropertyValue_GetFullDisplayString_Statics
	{
		struct PropertyValue_eventGetFullDisplayString_Parms
		{
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPropertyValue_GetFullDisplayString_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPropertyValue_GetFullDisplayString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PropertyValue_eventGetFullDisplayString_Parms, ReturnValue), METADATA_PARAMS(Z_Construct_UFunction_UPropertyValue_GetFullDisplayString_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPropertyValue_GetFullDisplayString_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPropertyValue_GetFullDisplayString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPropertyValue_GetFullDisplayString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPropertyValue_GetFullDisplayString_Statics::Function_MetaDataParams[] = {
		{ "Category", "PropertyValue" },
		{ "ModuleRelativePath", "Public/PropertyValue.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPropertyValue_GetFullDisplayString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPropertyValue, nullptr, "GetFullDisplayString", nullptr, nullptr, sizeof(PropertyValue_eventGetFullDisplayString_Parms), Z_Construct_UFunction_UPropertyValue_GetFullDisplayString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPropertyValue_GetFullDisplayString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPropertyValue_GetFullDisplayString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPropertyValue_GetFullDisplayString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPropertyValue_GetFullDisplayString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPropertyValue_GetFullDisplayString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPropertyValue_GetPropertyTooltip_Statics
	{
		struct PropertyValue_eventGetPropertyTooltip_Parms
		{
			FText ReturnValue;
		};
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UPropertyValue_GetPropertyTooltip_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PropertyValue_eventGetPropertyTooltip_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPropertyValue_GetPropertyTooltip_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPropertyValue_GetPropertyTooltip_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPropertyValue_GetPropertyTooltip_Statics::Function_MetaDataParams[] = {
		{ "Category", "PropertyValue" },
		{ "ModuleRelativePath", "Public/PropertyValue.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPropertyValue_GetPropertyTooltip_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPropertyValue, nullptr, "GetPropertyTooltip", nullptr, nullptr, sizeof(PropertyValue_eventGetPropertyTooltip_Parms), Z_Construct_UFunction_UPropertyValue_GetPropertyTooltip_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPropertyValue_GetPropertyTooltip_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPropertyValue_GetPropertyTooltip_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPropertyValue_GetPropertyTooltip_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPropertyValue_GetPropertyTooltip()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPropertyValue_GetPropertyTooltip_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPropertyValue_HasRecordedData_Statics
	{
		struct PropertyValue_eventHasRecordedData_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UPropertyValue_HasRecordedData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PropertyValue_eventHasRecordedData_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPropertyValue_HasRecordedData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PropertyValue_eventHasRecordedData_Parms), &Z_Construct_UFunction_UPropertyValue_HasRecordedData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPropertyValue_HasRecordedData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPropertyValue_HasRecordedData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPropertyValue_HasRecordedData_Statics::Function_MetaDataParams[] = {
		{ "Category", "PropertyValue" },
		{ "ModuleRelativePath", "Public/PropertyValue.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPropertyValue_HasRecordedData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPropertyValue, nullptr, "HasRecordedData", nullptr, nullptr, sizeof(PropertyValue_eventHasRecordedData_Parms), Z_Construct_UFunction_UPropertyValue_HasRecordedData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPropertyValue_HasRecordedData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPropertyValue_HasRecordedData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPropertyValue_HasRecordedData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPropertyValue_HasRecordedData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPropertyValue_HasRecordedData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPropertyValue_NoRegister()
	{
		return UPropertyValue::StaticClass();
	}
	struct Z_Construct_UClass_UPropertyValue_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisplayOrder_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_DisplayOrder;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PropCategory_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PropCategory;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PropCategory_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ValueBytes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ValueBytes;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ValueBytes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeafPropertyClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_LeafPropertyClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHasRecordedData_MetaData[];
#endif
		static void NewProp_bHasRecordedData_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasRecordedData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PropertySetterParameterDefaults_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_PropertySetterParameterDefaults;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PropertySetterParameterDefaults_Key_KeyProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PropertySetterParameterDefaults_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PropertySetterName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_PropertySetterName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FullDisplayString_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FullDisplayString;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CapturedPropSegments_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CapturedPropSegments;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CapturedPropSegments_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PropertyIndices_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PropertyIndices;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PropertyIndices_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Properties_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Properties;
		static const UE4CodeGen_Private::FFieldPathPropertyParams NewProp_Properties_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPropertyValue_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_VariantManagerContent,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPropertyValue_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPropertyValue_GetFullDisplayString, "GetFullDisplayString" }, // 2477687011
		{ &Z_Construct_UFunction_UPropertyValue_GetPropertyTooltip, "GetPropertyTooltip" }, // 1572506266
		{ &Z_Construct_UFunction_UPropertyValue_HasRecordedData, "HasRecordedData" }, // 4226222851
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPropertyValue_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "PropertyValue.h" },
		{ "ModuleRelativePath", "Public/PropertyValue.h" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPropertyValue_Statics::NewProp_DisplayOrder_MetaData[] = {
		{ "ModuleRelativePath", "Public/PropertyValue.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UPropertyValue_Statics::NewProp_DisplayOrder = { "DisplayOrder", nullptr, (EPropertyFlags)0x0020080800000000, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPropertyValue, DisplayOrder), METADATA_PARAMS(Z_Construct_UClass_UPropertyValue_Statics::NewProp_DisplayOrder_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPropertyValue_Statics::NewProp_DisplayOrder_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPropertyValue_Statics::NewProp_PropCategory_MetaData[] = {
		{ "ModuleRelativePath", "Public/PropertyValue.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPropertyValue_Statics::NewProp_PropCategory = { "PropCategory", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPropertyValue, PropCategory), Z_Construct_UEnum_VariantManagerContent_EPropertyValueCategory, METADATA_PARAMS(Z_Construct_UClass_UPropertyValue_Statics::NewProp_PropCategory_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPropertyValue_Statics::NewProp_PropCategory_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPropertyValue_Statics::NewProp_PropCategory_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPropertyValue_Statics::NewProp_ValueBytes_MetaData[] = {
		{ "ModuleRelativePath", "Public/PropertyValue.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPropertyValue_Statics::NewProp_ValueBytes = { "ValueBytes", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPropertyValue, ValueBytes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPropertyValue_Statics::NewProp_ValueBytes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPropertyValue_Statics::NewProp_ValueBytes_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPropertyValue_Statics::NewProp_ValueBytes_Inner = { "ValueBytes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPropertyValue_Statics::NewProp_LeafPropertyClass_MetaData[] = {
		{ "Comment", "// We use these mainly to know how to serialize/deserialize the values of properties that need special care\n// (e.g. UObjectProperties, name properties, text properties, etc)\n" },
		{ "ModuleRelativePath", "Public/PropertyValue.h" },
		{ "ToolTip", "We use these mainly to know how to serialize/deserialize the values of properties that need special care\n(e.g. UObjectProperties, name properties, text properties, etc)" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UPropertyValue_Statics::NewProp_LeafPropertyClass = { "LeafPropertyClass", nullptr, (EPropertyFlags)0x0020080020000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPropertyValue, LeafPropertyClass_DEPRECATED), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UPropertyValue_Statics::NewProp_LeafPropertyClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPropertyValue_Statics::NewProp_LeafPropertyClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPropertyValue_Statics::NewProp_bHasRecordedData_MetaData[] = {
		{ "ModuleRelativePath", "Public/PropertyValue.h" },
	};
#endif
	void Z_Construct_UClass_UPropertyValue_Statics::NewProp_bHasRecordedData_SetBit(void* Obj)
	{
		((UPropertyValue*)Obj)->bHasRecordedData = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPropertyValue_Statics::NewProp_bHasRecordedData = { "bHasRecordedData", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPropertyValue), &Z_Construct_UClass_UPropertyValue_Statics::NewProp_bHasRecordedData_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPropertyValue_Statics::NewProp_bHasRecordedData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPropertyValue_Statics::NewProp_bHasRecordedData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPropertyValue_Statics::NewProp_PropertySetterParameterDefaults_MetaData[] = {
		{ "ModuleRelativePath", "Public/PropertyValue.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UPropertyValue_Statics::NewProp_PropertySetterParameterDefaults = { "PropertySetterParameterDefaults", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPropertyValue, PropertySetterParameterDefaults), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPropertyValue_Statics::NewProp_PropertySetterParameterDefaults_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPropertyValue_Statics::NewProp_PropertySetterParameterDefaults_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPropertyValue_Statics::NewProp_PropertySetterParameterDefaults_Key_KeyProp = { "PropertySetterParameterDefaults_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPropertyValue_Statics::NewProp_PropertySetterParameterDefaults_ValueProp = { "PropertySetterParameterDefaults", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPropertyValue_Statics::NewProp_PropertySetterName_MetaData[] = {
		{ "ModuleRelativePath", "Public/PropertyValue.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPropertyValue_Statics::NewProp_PropertySetterName = { "PropertySetterName", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPropertyValue, PropertySetterName), METADATA_PARAMS(Z_Construct_UClass_UPropertyValue_Statics::NewProp_PropertySetterName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPropertyValue_Statics::NewProp_PropertySetterName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPropertyValue_Statics::NewProp_FullDisplayString_MetaData[] = {
		{ "ModuleRelativePath", "Public/PropertyValue.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPropertyValue_Statics::NewProp_FullDisplayString = { "FullDisplayString", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPropertyValue, FullDisplayString), METADATA_PARAMS(Z_Construct_UClass_UPropertyValue_Statics::NewProp_FullDisplayString_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPropertyValue_Statics::NewProp_FullDisplayString_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPropertyValue_Statics::NewProp_CapturedPropSegments_MetaData[] = {
		{ "ModuleRelativePath", "Public/PropertyValue.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPropertyValue_Statics::NewProp_CapturedPropSegments = { "CapturedPropSegments", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPropertyValue, CapturedPropSegments), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPropertyValue_Statics::NewProp_CapturedPropSegments_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPropertyValue_Statics::NewProp_CapturedPropSegments_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPropertyValue_Statics::NewProp_CapturedPropSegments_Inner = { "CapturedPropSegments", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FCapturedPropSegment, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPropertyValue_Statics::NewProp_PropertyIndices_MetaData[] = {
		{ "ModuleRelativePath", "Public/PropertyValue.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPropertyValue_Statics::NewProp_PropertyIndices = { "PropertyIndices", nullptr, (EPropertyFlags)0x0020080020000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPropertyValue, PropertyIndices_DEPRECATED), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPropertyValue_Statics::NewProp_PropertyIndices_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPropertyValue_Statics::NewProp_PropertyIndices_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPropertyValue_Statics::NewProp_PropertyIndices_Inner = { "PropertyIndices", nullptr, (EPropertyFlags)0x0000000020000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPropertyValue_Statics::NewProp_Properties_MetaData[] = {
		{ "Comment", "// Properties were previously stored like this. Use CapturedPropSegments from now on, which stores\n// properties by name instead. It is much safer, as we can't guarantee these pointers will be valid\n// if they point at other packages (will depend on package load order, etc).\n" },
		{ "ModuleRelativePath", "Public/PropertyValue.h" },
		{ "ToolTip", "Properties were previously stored like this. Use CapturedPropSegments from now on, which stores\nproperties by name instead. It is much safer, as we can't guarantee these pointers will be valid\nif they point at other packages (will depend on package load order, etc)." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPropertyValue_Statics::NewProp_Properties = { "Properties", nullptr, (EPropertyFlags)0x0020080020000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPropertyValue, Properties_DEPRECATED), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPropertyValue_Statics::NewProp_Properties_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPropertyValue_Statics::NewProp_Properties_MetaData)) };
	const UE4CodeGen_Private::FFieldPathPropertyParams Z_Construct_UClass_UPropertyValue_Statics::NewProp_Properties_Inner = { "Properties", nullptr, (EPropertyFlags)0x0000000020000000, UE4CodeGen_Private::EPropertyGenFlags::FieldPath, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, &FProperty::StaticClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPropertyValue_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertyValue_Statics::NewProp_DisplayOrder,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertyValue_Statics::NewProp_PropCategory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertyValue_Statics::NewProp_PropCategory_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertyValue_Statics::NewProp_ValueBytes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertyValue_Statics::NewProp_ValueBytes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertyValue_Statics::NewProp_LeafPropertyClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertyValue_Statics::NewProp_bHasRecordedData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertyValue_Statics::NewProp_PropertySetterParameterDefaults,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertyValue_Statics::NewProp_PropertySetterParameterDefaults_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertyValue_Statics::NewProp_PropertySetterParameterDefaults_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertyValue_Statics::NewProp_PropertySetterName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertyValue_Statics::NewProp_FullDisplayString,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertyValue_Statics::NewProp_CapturedPropSegments,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertyValue_Statics::NewProp_CapturedPropSegments_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertyValue_Statics::NewProp_PropertyIndices,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertyValue_Statics::NewProp_PropertyIndices_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertyValue_Statics::NewProp_Properties,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertyValue_Statics::NewProp_Properties_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPropertyValue_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPropertyValue>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPropertyValue_Statics::ClassParams = {
		&UPropertyValue::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPropertyValue_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPropertyValue_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPropertyValue_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPropertyValue_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPropertyValue()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPropertyValue_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPropertyValue, 3507343270);
	template<> VARIANTMANAGERCONTENT_API UClass* StaticClass<UPropertyValue>()
	{
		return UPropertyValue::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPropertyValue(Z_Construct_UClass_UPropertyValue, &UPropertyValue::StaticClass, TEXT("/Script/VariantManagerContent"), TEXT("UPropertyValue"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPropertyValue);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UPropertyValue)
	void UPropertyValueTransform::StaticRegisterNativesUPropertyValueTransform()
	{
	}
	UClass* Z_Construct_UClass_UPropertyValueTransform_NoRegister()
	{
		return UPropertyValueTransform::StaticClass();
	}
	struct Z_Construct_UClass_UPropertyValueTransform_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPropertyValueTransform_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPropertyValue,
		(UObject* (*)())Z_Construct_UPackage__Script_VariantManagerContent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPropertyValueTransform_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Deprecated: Only here for backwards compatibility with 4.21\n" },
		{ "IncludePath", "PropertyValue.h" },
		{ "ModuleRelativePath", "Public/PropertyValue.h" },
		{ "ToolTip", "Deprecated: Only here for backwards compatibility with 4.21" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPropertyValueTransform_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPropertyValueTransform>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPropertyValueTransform_Statics::ClassParams = {
		&UPropertyValueTransform::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPropertyValueTransform_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPropertyValueTransform_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPropertyValueTransform()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPropertyValueTransform_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPropertyValueTransform, 3091467475);
	template<> VARIANTMANAGERCONTENT_API UClass* StaticClass<UPropertyValueTransform>()
	{
		return UPropertyValueTransform::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPropertyValueTransform(Z_Construct_UClass_UPropertyValueTransform, &UPropertyValueTransform::StaticClass, TEXT("/Script/VariantManagerContent"), TEXT("UPropertyValueTransform"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPropertyValueTransform);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UPropertyValueTransform)
	void UPropertyValueVisibility::StaticRegisterNativesUPropertyValueVisibility()
	{
	}
	UClass* Z_Construct_UClass_UPropertyValueVisibility_NoRegister()
	{
		return UPropertyValueVisibility::StaticClass();
	}
	struct Z_Construct_UClass_UPropertyValueVisibility_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPropertyValueVisibility_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPropertyValue,
		(UObject* (*)())Z_Construct_UPackage__Script_VariantManagerContent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPropertyValueVisibility_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Deprecated: Only here for backwards compatibility\n" },
		{ "IncludePath", "PropertyValue.h" },
		{ "ModuleRelativePath", "Public/PropertyValue.h" },
		{ "ToolTip", "Deprecated: Only here for backwards compatibility" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPropertyValueVisibility_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPropertyValueVisibility>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPropertyValueVisibility_Statics::ClassParams = {
		&UPropertyValueVisibility::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPropertyValueVisibility_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPropertyValueVisibility_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPropertyValueVisibility()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPropertyValueVisibility_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPropertyValueVisibility, 3080015945);
	template<> VARIANTMANAGERCONTENT_API UClass* StaticClass<UPropertyValueVisibility>()
	{
		return UPropertyValueVisibility::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPropertyValueVisibility(Z_Construct_UClass_UPropertyValueVisibility, &UPropertyValueVisibility::StaticClass, TEXT("/Script/VariantManagerContent"), TEXT("UPropertyValueVisibility"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPropertyValueVisibility);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UPropertyValueVisibility)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
