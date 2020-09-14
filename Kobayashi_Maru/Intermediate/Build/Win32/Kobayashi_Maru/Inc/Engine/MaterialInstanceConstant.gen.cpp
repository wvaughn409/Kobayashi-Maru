// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Materials/MaterialInstanceConstant.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialInstanceConstant() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceConstant_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceConstant();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstance();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	ENGINE_API UClass* Z_Construct_UClass_UPhysicalMaterialMask_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
// End Cross Module References
	DEFINE_FUNCTION(UMaterialInstanceConstant::execK2_GetVectorParameterValue)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_ParameterName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FLinearColor*)Z_Param__Result=P_THIS->K2_GetVectorParameterValue(Z_Param_ParameterName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMaterialInstanceConstant::execK2_GetTextureParameterValue)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_ParameterName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTexture**)Z_Param__Result=P_THIS->K2_GetTextureParameterValue(Z_Param_ParameterName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMaterialInstanceConstant::execK2_GetScalarParameterValue)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_ParameterName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->K2_GetScalarParameterValue(Z_Param_ParameterName);
		P_NATIVE_END;
	}
	void UMaterialInstanceConstant::StaticRegisterNativesUMaterialInstanceConstant()
	{
		UClass* Class = UMaterialInstanceConstant::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "K2_GetScalarParameterValue", &UMaterialInstanceConstant::execK2_GetScalarParameterValue },
			{ "K2_GetTextureParameterValue", &UMaterialInstanceConstant::execK2_GetTextureParameterValue },
			{ "K2_GetVectorParameterValue", &UMaterialInstanceConstant::execK2_GetVectorParameterValue },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMaterialInstanceConstant_K2_GetScalarParameterValue_Statics
	{
		struct MaterialInstanceConstant_eventK2_GetScalarParameterValue_Parms
		{
			FName ParameterName;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ParameterName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMaterialInstanceConstant_K2_GetScalarParameterValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MaterialInstanceConstant_eventK2_GetScalarParameterValue_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMaterialInstanceConstant_K2_GetScalarParameterValue_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MaterialInstanceConstant_eventK2_GetScalarParameterValue_Parms, ParameterName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMaterialInstanceConstant_K2_GetScalarParameterValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialInstanceConstant_K2_GetScalarParameterValue_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialInstanceConstant_K2_GetScalarParameterValue_Statics::NewProp_ParameterName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMaterialInstanceConstant_K2_GetScalarParameterValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Material" },
		{ "Comment", "/** Get the scalar (float) parameter value from an MIC */" },
		{ "DisplayName", "GetScalarParameterValue" },
		{ "Keywords", "GetFloatParameterValue" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstanceConstant.h" },
		{ "ScriptName", "GetScalarParameterValue" },
		{ "ToolTip", "Get the scalar (float) parameter value from an MIC" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMaterialInstanceConstant_K2_GetScalarParameterValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMaterialInstanceConstant, nullptr, "K2_GetScalarParameterValue", nullptr, nullptr, sizeof(MaterialInstanceConstant_eventK2_GetScalarParameterValue_Parms), Z_Construct_UFunction_UMaterialInstanceConstant_K2_GetScalarParameterValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialInstanceConstant_K2_GetScalarParameterValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMaterialInstanceConstant_K2_GetScalarParameterValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialInstanceConstant_K2_GetScalarParameterValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMaterialInstanceConstant_K2_GetScalarParameterValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMaterialInstanceConstant_K2_GetScalarParameterValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMaterialInstanceConstant_K2_GetTextureParameterValue_Statics
	{
		struct MaterialInstanceConstant_eventK2_GetTextureParameterValue_Parms
		{
			FName ParameterName;
			UTexture* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ParameterName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMaterialInstanceConstant_K2_GetTextureParameterValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MaterialInstanceConstant_eventK2_GetTextureParameterValue_Parms, ReturnValue), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMaterialInstanceConstant_K2_GetTextureParameterValue_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MaterialInstanceConstant_eventK2_GetTextureParameterValue_Parms, ParameterName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMaterialInstanceConstant_K2_GetTextureParameterValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialInstanceConstant_K2_GetTextureParameterValue_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialInstanceConstant_K2_GetTextureParameterValue_Statics::NewProp_ParameterName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMaterialInstanceConstant_K2_GetTextureParameterValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Material" },
		{ "Comment", "/** Get the MIC texture parameter value */" },
		{ "DisplayName", "GetTextureParameterValue" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstanceConstant.h" },
		{ "ScriptName", "GetTextureParameterValue" },
		{ "ToolTip", "Get the MIC texture parameter value" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMaterialInstanceConstant_K2_GetTextureParameterValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMaterialInstanceConstant, nullptr, "K2_GetTextureParameterValue", nullptr, nullptr, sizeof(MaterialInstanceConstant_eventK2_GetTextureParameterValue_Parms), Z_Construct_UFunction_UMaterialInstanceConstant_K2_GetTextureParameterValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialInstanceConstant_K2_GetTextureParameterValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMaterialInstanceConstant_K2_GetTextureParameterValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialInstanceConstant_K2_GetTextureParameterValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMaterialInstanceConstant_K2_GetTextureParameterValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMaterialInstanceConstant_K2_GetTextureParameterValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMaterialInstanceConstant_K2_GetVectorParameterValue_Statics
	{
		struct MaterialInstanceConstant_eventK2_GetVectorParameterValue_Parms
		{
			FName ParameterName;
			FLinearColor ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ParameterName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMaterialInstanceConstant_K2_GetVectorParameterValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MaterialInstanceConstant_eventK2_GetVectorParameterValue_Parms, ReturnValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMaterialInstanceConstant_K2_GetVectorParameterValue_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MaterialInstanceConstant_eventK2_GetVectorParameterValue_Parms, ParameterName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMaterialInstanceConstant_K2_GetVectorParameterValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialInstanceConstant_K2_GetVectorParameterValue_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialInstanceConstant_K2_GetVectorParameterValue_Statics::NewProp_ParameterName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMaterialInstanceConstant_K2_GetVectorParameterValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Material" },
		{ "Comment", "/** Get the MIC vector parameter value */" },
		{ "DisplayName", "GetVectorParameterValue" },
		{ "Keywords", "GetColorParameterValue" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstanceConstant.h" },
		{ "ScriptName", "GetVectorParameterValue" },
		{ "ToolTip", "Get the MIC vector parameter value" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMaterialInstanceConstant_K2_GetVectorParameterValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMaterialInstanceConstant, nullptr, "K2_GetVectorParameterValue", nullptr, nullptr, sizeof(MaterialInstanceConstant_eventK2_GetVectorParameterValue_Parms), Z_Construct_UFunction_UMaterialInstanceConstant_K2_GetVectorParameterValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialInstanceConstant_K2_GetVectorParameterValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMaterialInstanceConstant_K2_GetVectorParameterValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialInstanceConstant_K2_GetVectorParameterValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMaterialInstanceConstant_K2_GetVectorParameterValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMaterialInstanceConstant_K2_GetVectorParameterValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMaterialInstanceConstant_NoRegister()
	{
		return UMaterialInstanceConstant::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialInstanceConstant_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PhysMaterialMask_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PhysMaterialMask;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParameterStateId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ParameterStateId;
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialInstanceConstant_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMaterialInstanceConstant_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMaterialInstanceConstant_K2_GetScalarParameterValue, "K2_GetScalarParameterValue" }, // 3300987305
		{ &Z_Construct_UFunction_UMaterialInstanceConstant_K2_GetTextureParameterValue, "K2_GetTextureParameterValue" }, // 231447012
		{ &Z_Construct_UFunction_UMaterialInstanceConstant_K2_GetVectorParameterValue, "K2_GetVectorParameterValue" }, // 4185168426
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialInstanceConstant_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Material Instances may be used to change the appearance of a material without incurring an expensive recompilation of the material.\n * General modification of the material cannot be supported without recompilation, so the instances are limited to changing the values of\n * predefined material parameters. The parameters are statically defined in the compiled material by a unique name, type and default value.\n */" },
		{ "HideCategories", "Object Thumbnail" },
		{ "IncludePath", "Materials/MaterialInstanceConstant.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstanceConstant.h" },
		{ "ToolTip", "Material Instances may be used to change the appearance of a material without incurring an expensive recompilation of the material.\nGeneral modification of the material cannot be supported without recompilation, so the instances are limited to changing the values of\npredefined material parameters. The parameters are statically defined in the compiled material by a unique name, type and default value." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialInstanceConstant_Statics::NewProp_PhysMaterialMask_MetaData[] = {
		{ "Category", "PhysicalMaterial" },
		{ "Comment", "/** Physical material mask to use for this graphics material. Used for sounds, effects etc.*/" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstanceConstant.h" },
		{ "ToolTip", "Physical material mask to use for this graphics material. Used for sounds, effects etc." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMaterialInstanceConstant_Statics::NewProp_PhysMaterialMask = { "PhysMaterialMask", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialInstanceConstant, PhysMaterialMask), Z_Construct_UClass_UPhysicalMaterialMask_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMaterialInstanceConstant_Statics::NewProp_PhysMaterialMask_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialInstanceConstant_Statics::NewProp_PhysMaterialMask_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialInstanceConstant_Statics::NewProp_ParameterStateId_MetaData[] = {
		{ "Comment", "/** Unique ID for this material instance's parameter set \n\x09 *  Updated on changes in the editor to allow those changes to be detected */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstanceConstant.h" },
		{ "ToolTip", "Unique ID for this material instance's parameter set\nUpdated on changes in the editor to allow those changes to be detected" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialInstanceConstant_Statics::NewProp_ParameterStateId = { "ParameterStateId", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialInstanceConstant, ParameterStateId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_UMaterialInstanceConstant_Statics::NewProp_ParameterStateId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialInstanceConstant_Statics::NewProp_ParameterStateId_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialInstanceConstant_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialInstanceConstant_Statics::NewProp_PhysMaterialMask,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialInstanceConstant_Statics::NewProp_ParameterStateId,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialInstanceConstant_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialInstanceConstant>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMaterialInstanceConstant_Statics::ClassParams = {
		&UMaterialInstanceConstant::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMaterialInstanceConstant_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialInstanceConstant_Statics::PropPointers),
		0,
		0x008820A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialInstanceConstant_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialInstanceConstant_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialInstanceConstant()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMaterialInstanceConstant_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMaterialInstanceConstant, 3957729901);
	template<> ENGINE_API UClass* StaticClass<UMaterialInstanceConstant>()
	{
		return UMaterialInstanceConstant::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMaterialInstanceConstant(Z_Construct_UClass_UMaterialInstanceConstant, &UMaterialInstanceConstant::StaticClass, TEXT("/Script/Engine"), TEXT("UMaterialInstanceConstant"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialInstanceConstant);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
