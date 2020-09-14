// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VariantManagerContent/Public/VariantSet.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVariantSet() {}
// Cross Module References
	VARIANTMANAGERCONTENT_API UClass* Z_Construct_UClass_UVariantSet_NoRegister();
	VARIANTMANAGERCONTENT_API UClass* Z_Construct_UClass_UVariantSet();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_VariantManagerContent();
	VARIANTMANAGERCONTENT_API UClass* Z_Construct_UClass_UVariant_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UVariantSet::execGetVariantByName)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_VariantName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UVariant**)Z_Param__Result=P_THIS->GetVariantByName(Z_Param_VariantName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVariantSet::execGetVariant)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_VariantIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UVariant**)Z_Param__Result=P_THIS->GetVariant(Z_Param_VariantIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVariantSet::execGetNumVariants)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetNumVariants();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVariantSet::execGetDisplayText)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=P_THIS->GetDisplayText();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVariantSet::execSetDisplayText)
	{
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_NewDisplayText);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDisplayText(Z_Param_Out_NewDisplayText);
		P_NATIVE_END;
	}
	void UVariantSet::StaticRegisterNativesUVariantSet()
	{
		UClass* Class = UVariantSet::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetDisplayText", &UVariantSet::execGetDisplayText },
			{ "GetNumVariants", &UVariantSet::execGetNumVariants },
			{ "GetVariant", &UVariantSet::execGetVariant },
			{ "GetVariantByName", &UVariantSet::execGetVariantByName },
			{ "SetDisplayText", &UVariantSet::execSetDisplayText },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVariantSet_GetDisplayText_Statics
	{
		struct VariantSet_eventGetDisplayText_Parms
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
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UVariantSet_GetDisplayText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VariantSet_eventGetDisplayText_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVariantSet_GetDisplayText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVariantSet_GetDisplayText_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVariantSet_GetDisplayText_Statics::Function_MetaDataParams[] = {
		{ "Category", "VariantSet" },
		{ "ModuleRelativePath", "Public/VariantSet.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVariantSet_GetDisplayText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVariantSet, nullptr, "GetDisplayText", nullptr, nullptr, sizeof(VariantSet_eventGetDisplayText_Parms), Z_Construct_UFunction_UVariantSet_GetDisplayText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVariantSet_GetDisplayText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVariantSet_GetDisplayText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVariantSet_GetDisplayText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVariantSet_GetDisplayText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVariantSet_GetDisplayText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVariantSet_GetNumVariants_Statics
	{
		struct VariantSet_eventGetNumVariants_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVariantSet_GetNumVariants_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VariantSet_eventGetNumVariants_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVariantSet_GetNumVariants_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVariantSet_GetNumVariants_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVariantSet_GetNumVariants_Statics::Function_MetaDataParams[] = {
		{ "Category", "VariantSet" },
		{ "ModuleRelativePath", "Public/VariantSet.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVariantSet_GetNumVariants_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVariantSet, nullptr, "GetNumVariants", nullptr, nullptr, sizeof(VariantSet_eventGetNumVariants_Parms), Z_Construct_UFunction_UVariantSet_GetNumVariants_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVariantSet_GetNumVariants_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVariantSet_GetNumVariants_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVariantSet_GetNumVariants_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVariantSet_GetNumVariants()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVariantSet_GetNumVariants_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVariantSet_GetVariant_Statics
	{
		struct VariantSet_eventGetVariant_Parms
		{
			int32 VariantIndex;
			UVariant* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_VariantIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVariantSet_GetVariant_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VariantSet_eventGetVariant_Parms, ReturnValue), Z_Construct_UClass_UVariant_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVariantSet_GetVariant_Statics::NewProp_VariantIndex = { "VariantIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VariantSet_eventGetVariant_Parms, VariantIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVariantSet_GetVariant_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVariantSet_GetVariant_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVariantSet_GetVariant_Statics::NewProp_VariantIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVariantSet_GetVariant_Statics::Function_MetaDataParams[] = {
		{ "Category", "VariantSet" },
		{ "ModuleRelativePath", "Public/VariantSet.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVariantSet_GetVariant_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVariantSet, nullptr, "GetVariant", nullptr, nullptr, sizeof(VariantSet_eventGetVariant_Parms), Z_Construct_UFunction_UVariantSet_GetVariant_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVariantSet_GetVariant_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVariantSet_GetVariant_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVariantSet_GetVariant_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVariantSet_GetVariant()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVariantSet_GetVariant_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVariantSet_GetVariantByName_Statics
	{
		struct VariantSet_eventGetVariantByName_Parms
		{
			FString VariantName;
			UVariant* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_VariantName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVariantSet_GetVariantByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VariantSet_eventGetVariantByName_Parms, ReturnValue), Z_Construct_UClass_UVariant_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVariantSet_GetVariantByName_Statics::NewProp_VariantName = { "VariantName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VariantSet_eventGetVariantByName_Parms, VariantName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVariantSet_GetVariantByName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVariantSet_GetVariantByName_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVariantSet_GetVariantByName_Statics::NewProp_VariantName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVariantSet_GetVariantByName_Statics::Function_MetaDataParams[] = {
		{ "Category", "VariantSet" },
		{ "ModuleRelativePath", "Public/VariantSet.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVariantSet_GetVariantByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVariantSet, nullptr, "GetVariantByName", nullptr, nullptr, sizeof(VariantSet_eventGetVariantByName_Parms), Z_Construct_UFunction_UVariantSet_GetVariantByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVariantSet_GetVariantByName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVariantSet_GetVariantByName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVariantSet_GetVariantByName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVariantSet_GetVariantByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVariantSet_GetVariantByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVariantSet_SetDisplayText_Statics
	{
		struct VariantSet_eventSetDisplayText_Parms
		{
			FText NewDisplayText;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewDisplayText_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_NewDisplayText;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVariantSet_SetDisplayText_Statics::NewProp_NewDisplayText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UVariantSet_SetDisplayText_Statics::NewProp_NewDisplayText = { "NewDisplayText", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VariantSet_eventSetDisplayText_Parms, NewDisplayText), METADATA_PARAMS(Z_Construct_UFunction_UVariantSet_SetDisplayText_Statics::NewProp_NewDisplayText_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVariantSet_SetDisplayText_Statics::NewProp_NewDisplayText_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVariantSet_SetDisplayText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVariantSet_SetDisplayText_Statics::NewProp_NewDisplayText,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVariantSet_SetDisplayText_Statics::Function_MetaDataParams[] = {
		{ "Category", "VariantSet" },
		{ "ModuleRelativePath", "Public/VariantSet.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVariantSet_SetDisplayText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVariantSet, nullptr, "SetDisplayText", nullptr, nullptr, sizeof(VariantSet_eventSetDisplayText_Parms), Z_Construct_UFunction_UVariantSet_SetDisplayText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVariantSet_SetDisplayText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVariantSet_SetDisplayText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVariantSet_SetDisplayText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVariantSet_SetDisplayText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVariantSet_SetDisplayText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UVariantSet_NoRegister()
	{
		return UVariantSet::StaticClass();
	}
	struct Z_Construct_UClass_UVariantSet_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Variants_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Variants;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Variants_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bExpanded_MetaData[];
#endif
		static void NewProp_bExpanded_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bExpanded;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisplayText_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_DisplayText;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVariantSet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_VariantManagerContent,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UVariantSet_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVariantSet_GetDisplayText, "GetDisplayText" }, // 1028712778
		{ &Z_Construct_UFunction_UVariantSet_GetNumVariants, "GetNumVariants" }, // 505467713
		{ &Z_Construct_UFunction_UVariantSet_GetVariant, "GetVariant" }, // 989680075
		{ &Z_Construct_UFunction_UVariantSet_GetVariantByName, "GetVariantByName" }, // 61977316
		{ &Z_Construct_UFunction_UVariantSet_SetDisplayText, "SetDisplayText" }, // 2630472442
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVariantSet_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "VariantSet.h" },
		{ "ModuleRelativePath", "Public/VariantSet.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVariantSet_Statics::NewProp_Variants_MetaData[] = {
		{ "ModuleRelativePath", "Public/VariantSet.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVariantSet_Statics::NewProp_Variants = { "Variants", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVariantSet, Variants), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UVariantSet_Statics::NewProp_Variants_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVariantSet_Statics::NewProp_Variants_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVariantSet_Statics::NewProp_Variants_Inner = { "Variants", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UVariant_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVariantSet_Statics::NewProp_bExpanded_MetaData[] = {
		{ "ModuleRelativePath", "Public/VariantSet.h" },
	};
#endif
	void Z_Construct_UClass_UVariantSet_Statics::NewProp_bExpanded_SetBit(void* Obj)
	{
		((UVariantSet*)Obj)->bExpanded = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVariantSet_Statics::NewProp_bExpanded = { "bExpanded", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVariantSet), &Z_Construct_UClass_UVariantSet_Statics::NewProp_bExpanded_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVariantSet_Statics::NewProp_bExpanded_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVariantSet_Statics::NewProp_bExpanded_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVariantSet_Statics::NewProp_DisplayText_MetaData[] = {
		{ "Comment", "// The display name used to be a property. Use the non-deprecated, non-property version from now on\n" },
		{ "ModuleRelativePath", "Public/VariantSet.h" },
		{ "ToolTip", "The display name used to be a property. Use the non-deprecated, non-property version from now on" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_UVariantSet_Statics::NewProp_DisplayText = { "DisplayText", nullptr, (EPropertyFlags)0x0040000020000000, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVariantSet, DisplayText_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UVariantSet_Statics::NewProp_DisplayText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVariantSet_Statics::NewProp_DisplayText_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVariantSet_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVariantSet_Statics::NewProp_Variants,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVariantSet_Statics::NewProp_Variants_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVariantSet_Statics::NewProp_bExpanded,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVariantSet_Statics::NewProp_DisplayText,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVariantSet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVariantSet>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVariantSet_Statics::ClassParams = {
		&UVariantSet::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UVariantSet_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UVariantSet_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVariantSet_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVariantSet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVariantSet()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVariantSet_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVariantSet, 1796835034);
	template<> VARIANTMANAGERCONTENT_API UClass* StaticClass<UVariantSet>()
	{
		return UVariantSet::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVariantSet(Z_Construct_UClass_UVariantSet, &UVariantSet::StaticClass, TEXT("/Script/VariantManagerContent"), TEXT("UVariantSet"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVariantSet);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UVariantSet)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
