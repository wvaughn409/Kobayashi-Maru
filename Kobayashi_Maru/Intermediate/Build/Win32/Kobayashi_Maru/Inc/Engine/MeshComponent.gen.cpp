// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Components/MeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMeshComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMeshComponent();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	DEFINE_FUNCTION(UMeshComponent::execSetVectorParameterValueOnMaterials)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_ParameterName);
		P_GET_STRUCT(FVector,Z_Param_ParameterValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVectorParameterValueOnMaterials(Z_Param_ParameterName,Z_Param_ParameterValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMeshComponent::execSetScalarParameterValueOnMaterials)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_ParameterName);
		P_GET_PROPERTY(FFloatProperty,Z_Param_ParameterValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetScalarParameterValueOnMaterials(Z_Param_ParameterName,Z_Param_ParameterValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMeshComponent::execPrestreamTextures)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Seconds);
		P_GET_UBOOL(Z_Param_bPrioritizeCharacterTextures);
		P_GET_PROPERTY(FIntProperty,Z_Param_CinematicTextureGroups);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PrestreamTextures(Z_Param_Seconds,Z_Param_bPrioritizeCharacterTextures,Z_Param_CinematicTextureGroups);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMeshComponent::execIsMaterialSlotNameValid)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_MaterialSlotName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsMaterialSlotNameValid(Z_Param_MaterialSlotName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMeshComponent::execGetMaterialSlotNames)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FName>*)Z_Param__Result=P_THIS->GetMaterialSlotNames();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMeshComponent::execGetMaterialIndex)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_MaterialSlotName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetMaterialIndex(Z_Param_MaterialSlotName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMeshComponent::execGetMaterials)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UMaterialInterface*>*)Z_Param__Result=P_THIS->GetMaterials();
		P_NATIVE_END;
	}
	void UMeshComponent::StaticRegisterNativesUMeshComponent()
	{
		UClass* Class = UMeshComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetMaterialIndex", &UMeshComponent::execGetMaterialIndex },
			{ "GetMaterials", &UMeshComponent::execGetMaterials },
			{ "GetMaterialSlotNames", &UMeshComponent::execGetMaterialSlotNames },
			{ "IsMaterialSlotNameValid", &UMeshComponent::execIsMaterialSlotNameValid },
			{ "PrestreamTextures", &UMeshComponent::execPrestreamTextures },
			{ "SetScalarParameterValueOnMaterials", &UMeshComponent::execSetScalarParameterValueOnMaterials },
			{ "SetVectorParameterValueOnMaterials", &UMeshComponent::execSetVectorParameterValueOnMaterials },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMeshComponent_GetMaterialIndex_Statics
	{
		struct MeshComponent_eventGetMaterialIndex_Parms
		{
			FName MaterialSlotName;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_MaterialSlotName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMeshComponent_GetMaterialIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MeshComponent_eventGetMaterialIndex_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMeshComponent_GetMaterialIndex_Statics::NewProp_MaterialSlotName = { "MaterialSlotName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MeshComponent_eventGetMaterialIndex_Parms, MaterialSlotName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeshComponent_GetMaterialIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshComponent_GetMaterialIndex_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshComponent_GetMaterialIndex_Statics::NewProp_MaterialSlotName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMeshComponent_GetMaterialIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Mesh" },
		{ "ModuleRelativePath", "Classes/Components/MeshComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshComponent_GetMaterialIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshComponent, nullptr, "GetMaterialIndex", nullptr, nullptr, sizeof(MeshComponent_eventGetMaterialIndex_Parms), Z_Construct_UFunction_UMeshComponent_GetMaterialIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshComponent_GetMaterialIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMeshComponent_GetMaterialIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshComponent_GetMaterialIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMeshComponent_GetMaterialIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMeshComponent_GetMaterialIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMeshComponent_GetMaterials_Statics
	{
		struct MeshComponent_eventGetMaterials_Parms
		{
			TArray<UMaterialInterface*> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMeshComponent_GetMaterials_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MeshComponent_eventGetMaterials_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMeshComponent_GetMaterials_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeshComponent_GetMaterials_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshComponent_GetMaterials_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshComponent_GetMaterials_Statics::NewProp_ReturnValue_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMeshComponent_GetMaterials_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Mesh" },
		{ "ModuleRelativePath", "Classes/Components/MeshComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshComponent_GetMaterials_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshComponent, nullptr, "GetMaterials", nullptr, nullptr, sizeof(MeshComponent_eventGetMaterials_Parms), Z_Construct_UFunction_UMeshComponent_GetMaterials_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshComponent_GetMaterials_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMeshComponent_GetMaterials_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshComponent_GetMaterials_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMeshComponent_GetMaterials()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMeshComponent_GetMaterials_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMeshComponent_GetMaterialSlotNames_Statics
	{
		struct MeshComponent_eventGetMaterialSlotNames_Parms
		{
			TArray<FName> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMeshComponent_GetMaterialSlotNames_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MeshComponent_eventGetMaterialSlotNames_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMeshComponent_GetMaterialSlotNames_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeshComponent_GetMaterialSlotNames_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshComponent_GetMaterialSlotNames_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshComponent_GetMaterialSlotNames_Statics::NewProp_ReturnValue_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMeshComponent_GetMaterialSlotNames_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Mesh" },
		{ "ModuleRelativePath", "Classes/Components/MeshComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshComponent_GetMaterialSlotNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshComponent, nullptr, "GetMaterialSlotNames", nullptr, nullptr, sizeof(MeshComponent_eventGetMaterialSlotNames_Parms), Z_Construct_UFunction_UMeshComponent_GetMaterialSlotNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshComponent_GetMaterialSlotNames_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMeshComponent_GetMaterialSlotNames_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshComponent_GetMaterialSlotNames_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMeshComponent_GetMaterialSlotNames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMeshComponent_GetMaterialSlotNames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMeshComponent_IsMaterialSlotNameValid_Statics
	{
		struct MeshComponent_eventIsMaterialSlotNameValid_Parms
		{
			FName MaterialSlotName;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_MaterialSlotName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMeshComponent_IsMaterialSlotNameValid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MeshComponent_eventIsMaterialSlotNameValid_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMeshComponent_IsMaterialSlotNameValid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MeshComponent_eventIsMaterialSlotNameValid_Parms), &Z_Construct_UFunction_UMeshComponent_IsMaterialSlotNameValid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMeshComponent_IsMaterialSlotNameValid_Statics::NewProp_MaterialSlotName = { "MaterialSlotName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MeshComponent_eventIsMaterialSlotNameValid_Parms, MaterialSlotName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeshComponent_IsMaterialSlotNameValid_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshComponent_IsMaterialSlotNameValid_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshComponent_IsMaterialSlotNameValid_Statics::NewProp_MaterialSlotName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMeshComponent_IsMaterialSlotNameValid_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Mesh" },
		{ "ModuleRelativePath", "Classes/Components/MeshComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshComponent_IsMaterialSlotNameValid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshComponent, nullptr, "IsMaterialSlotNameValid", nullptr, nullptr, sizeof(MeshComponent_eventIsMaterialSlotNameValid_Parms), Z_Construct_UFunction_UMeshComponent_IsMaterialSlotNameValid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshComponent_IsMaterialSlotNameValid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMeshComponent_IsMaterialSlotNameValid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshComponent_IsMaterialSlotNameValid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMeshComponent_IsMaterialSlotNameValid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMeshComponent_IsMaterialSlotNameValid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMeshComponent_PrestreamTextures_Statics
	{
		struct MeshComponent_eventPrestreamTextures_Parms
		{
			float Seconds;
			bool bPrioritizeCharacterTextures;
			int32 CinematicTextureGroups;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CinematicTextureGroups;
		static void NewProp_bPrioritizeCharacterTextures_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPrioritizeCharacterTextures;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Seconds;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMeshComponent_PrestreamTextures_Statics::NewProp_CinematicTextureGroups = { "CinematicTextureGroups", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MeshComponent_eventPrestreamTextures_Parms, CinematicTextureGroups), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UMeshComponent_PrestreamTextures_Statics::NewProp_bPrioritizeCharacterTextures_SetBit(void* Obj)
	{
		((MeshComponent_eventPrestreamTextures_Parms*)Obj)->bPrioritizeCharacterTextures = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMeshComponent_PrestreamTextures_Statics::NewProp_bPrioritizeCharacterTextures = { "bPrioritizeCharacterTextures", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MeshComponent_eventPrestreamTextures_Parms), &Z_Construct_UFunction_UMeshComponent_PrestreamTextures_Statics::NewProp_bPrioritizeCharacterTextures_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMeshComponent_PrestreamTextures_Statics::NewProp_Seconds = { "Seconds", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MeshComponent_eventPrestreamTextures_Parms, Seconds), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeshComponent_PrestreamTextures_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshComponent_PrestreamTextures_Statics::NewProp_CinematicTextureGroups,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshComponent_PrestreamTextures_Statics::NewProp_bPrioritizeCharacterTextures,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshComponent_PrestreamTextures_Statics::NewProp_Seconds,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMeshComponent_PrestreamTextures_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering" },
		{ "Comment", "/**\n\x09 *\x09Tell the streaming system to start loading all textures with all mip-levels.\n\x09 *\x09@param Seconds\x09\x09\x09\x09\x09\x09\x09Number of seconds to force all mip-levels to be resident\n\x09 *\x09@param bPrioritizeCharacterTextures\x09\x09Whether character textures should be prioritized for a while by the streaming system\n\x09 *\x09@param CinematicTextureGroups\x09\x09\x09""Bitfield indicating which texture groups that use extra high-resolution mips\n\x09 */" },
		{ "CPP_Default_CinematicTextureGroups", "0" },
		{ "ModuleRelativePath", "Classes/Components/MeshComponent.h" },
		{ "ToolTip", "Tell the streaming system to start loading all textures with all mip-levels.\n@param Seconds                                                  Number of seconds to force all mip-levels to be resident\n@param bPrioritizeCharacterTextures             Whether character textures should be prioritized for a while by the streaming system\n@param CinematicTextureGroups                   Bitfield indicating which texture groups that use extra high-resolution mips" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshComponent_PrestreamTextures_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshComponent, nullptr, "PrestreamTextures", nullptr, nullptr, sizeof(MeshComponent_eventPrestreamTextures_Parms), Z_Construct_UFunction_UMeshComponent_PrestreamTextures_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshComponent_PrestreamTextures_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMeshComponent_PrestreamTextures_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshComponent_PrestreamTextures_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMeshComponent_PrestreamTextures()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMeshComponent_PrestreamTextures_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMeshComponent_SetScalarParameterValueOnMaterials_Statics
	{
		struct MeshComponent_eventSetScalarParameterValueOnMaterials_Parms
		{
			FName ParameterName;
			float ParameterValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParameterValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ParameterValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParameterName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ParameterName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMeshComponent_SetScalarParameterValueOnMaterials_Statics::NewProp_ParameterValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMeshComponent_SetScalarParameterValueOnMaterials_Statics::NewProp_ParameterValue = { "ParameterValue", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MeshComponent_eventSetScalarParameterValueOnMaterials_Parms, ParameterValue), METADATA_PARAMS(Z_Construct_UFunction_UMeshComponent_SetScalarParameterValueOnMaterials_Statics::NewProp_ParameterValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshComponent_SetScalarParameterValueOnMaterials_Statics::NewProp_ParameterValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMeshComponent_SetScalarParameterValueOnMaterials_Statics::NewProp_ParameterName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMeshComponent_SetScalarParameterValueOnMaterials_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MeshComponent_eventSetScalarParameterValueOnMaterials_Parms, ParameterName), METADATA_PARAMS(Z_Construct_UFunction_UMeshComponent_SetScalarParameterValueOnMaterials_Statics::NewProp_ParameterName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshComponent_SetScalarParameterValueOnMaterials_Statics::NewProp_ParameterName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeshComponent_SetScalarParameterValueOnMaterials_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshComponent_SetScalarParameterValueOnMaterials_Statics::NewProp_ParameterValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshComponent_SetScalarParameterValueOnMaterials_Statics::NewProp_ParameterName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMeshComponent_SetScalarParameterValueOnMaterials_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Material" },
		{ "Comment", "/** Set all occurrences of Scalar Material Parameters with ParameterName in the set of materials of the SkeletalMesh to ParameterValue */" },
		{ "ModuleRelativePath", "Classes/Components/MeshComponent.h" },
		{ "ToolTip", "Set all occurrences of Scalar Material Parameters with ParameterName in the set of materials of the SkeletalMesh to ParameterValue" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshComponent_SetScalarParameterValueOnMaterials_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshComponent, nullptr, "SetScalarParameterValueOnMaterials", nullptr, nullptr, sizeof(MeshComponent_eventSetScalarParameterValueOnMaterials_Parms), Z_Construct_UFunction_UMeshComponent_SetScalarParameterValueOnMaterials_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshComponent_SetScalarParameterValueOnMaterials_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMeshComponent_SetScalarParameterValueOnMaterials_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshComponent_SetScalarParameterValueOnMaterials_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMeshComponent_SetScalarParameterValueOnMaterials()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMeshComponent_SetScalarParameterValueOnMaterials_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMeshComponent_SetVectorParameterValueOnMaterials_Statics
	{
		struct MeshComponent_eventSetVectorParameterValueOnMaterials_Parms
		{
			FName ParameterName;
			FVector ParameterValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParameterValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ParameterValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParameterName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ParameterName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMeshComponent_SetVectorParameterValueOnMaterials_Statics::NewProp_ParameterValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshComponent_SetVectorParameterValueOnMaterials_Statics::NewProp_ParameterValue = { "ParameterValue", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MeshComponent_eventSetVectorParameterValueOnMaterials_Parms, ParameterValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UMeshComponent_SetVectorParameterValueOnMaterials_Statics::NewProp_ParameterValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshComponent_SetVectorParameterValueOnMaterials_Statics::NewProp_ParameterValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMeshComponent_SetVectorParameterValueOnMaterials_Statics::NewProp_ParameterName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMeshComponent_SetVectorParameterValueOnMaterials_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MeshComponent_eventSetVectorParameterValueOnMaterials_Parms, ParameterName), METADATA_PARAMS(Z_Construct_UFunction_UMeshComponent_SetVectorParameterValueOnMaterials_Statics::NewProp_ParameterName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshComponent_SetVectorParameterValueOnMaterials_Statics::NewProp_ParameterName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeshComponent_SetVectorParameterValueOnMaterials_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshComponent_SetVectorParameterValueOnMaterials_Statics::NewProp_ParameterValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshComponent_SetVectorParameterValueOnMaterials_Statics::NewProp_ParameterName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMeshComponent_SetVectorParameterValueOnMaterials_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Material" },
		{ "Comment", "/** Set all occurrences of Vector Material Parameters with ParameterName in the set of materials of the SkeletalMesh to ParameterValue */" },
		{ "ModuleRelativePath", "Classes/Components/MeshComponent.h" },
		{ "ToolTip", "Set all occurrences of Vector Material Parameters with ParameterName in the set of materials of the SkeletalMesh to ParameterValue" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshComponent_SetVectorParameterValueOnMaterials_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshComponent, nullptr, "SetVectorParameterValueOnMaterials", nullptr, nullptr, sizeof(MeshComponent_eventSetVectorParameterValueOnMaterials_Parms), Z_Construct_UFunction_UMeshComponent_SetVectorParameterValueOnMaterials_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshComponent_SetVectorParameterValueOnMaterials_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMeshComponent_SetVectorParameterValueOnMaterials_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshComponent_SetVectorParameterValueOnMaterials_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMeshComponent_SetVectorParameterValueOnMaterials()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMeshComponent_SetVectorParameterValueOnMaterials_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMeshComponent_NoRegister()
	{
		return UMeshComponent::StaticClass();
	}
	struct Z_Construct_UClass_UMeshComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableMaterialParameterCaching_MetaData[];
#endif
		static void NewProp_bEnableMaterialParameterCaching_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableMaterialParameterCaching;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverrideMaterials_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OverrideMaterials;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverrideMaterials_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMeshComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPrimitiveComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMeshComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMeshComponent_GetMaterialIndex, "GetMaterialIndex" }, // 3776282940
		{ &Z_Construct_UFunction_UMeshComponent_GetMaterials, "GetMaterials" }, // 2452942703
		{ &Z_Construct_UFunction_UMeshComponent_GetMaterialSlotNames, "GetMaterialSlotNames" }, // 28846724
		{ &Z_Construct_UFunction_UMeshComponent_IsMaterialSlotNameValid, "IsMaterialSlotNameValid" }, // 3052802427
		{ &Z_Construct_UFunction_UMeshComponent_PrestreamTextures, "PrestreamTextures" }, // 799640218
		{ &Z_Construct_UFunction_UMeshComponent_SetScalarParameterValueOnMaterials, "SetScalarParameterValueOnMaterials" }, // 1807503532
		{ &Z_Construct_UFunction_UMeshComponent_SetVectorParameterValueOnMaterials, "SetVectorParameterValueOnMaterials" }, // 2123273569
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshComponent_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * MeshComponent is an abstract base for any component that is an instance of a renderable collection of triangles.\n *\n * @see UStaticMeshComponent\n * @see USkeletalMeshComponent\n */" },
		{ "HideCategories", "Mobility Trigger" },
		{ "IncludePath", "Components/MeshComponent.h" },
		{ "ModuleRelativePath", "Classes/Components/MeshComponent.h" },
		{ "ToolTip", "MeshComponent is an abstract base for any component that is an instance of a renderable collection of triangles.\n\n@see UStaticMeshComponent\n@see USkeletalMeshComponent" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshComponent_Statics::NewProp_bEnableMaterialParameterCaching_MetaData[] = {
		{ "Category", "MaterialParameters" },
		{ "ModuleRelativePath", "Classes/Components/MeshComponent.h" },
	};
#endif
	void Z_Construct_UClass_UMeshComponent_Statics::NewProp_bEnableMaterialParameterCaching_SetBit(void* Obj)
	{
		((UMeshComponent*)Obj)->bEnableMaterialParameterCaching = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMeshComponent_Statics::NewProp_bEnableMaterialParameterCaching = { "bEnableMaterialParameterCaching", nullptr, (EPropertyFlags)0x00200c0000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UMeshComponent), &Z_Construct_UClass_UMeshComponent_Statics::NewProp_bEnableMaterialParameterCaching_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMeshComponent_Statics::NewProp_bEnableMaterialParameterCaching_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshComponent_Statics::NewProp_bEnableMaterialParameterCaching_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshComponent_Statics::NewProp_OverrideMaterials_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Classes/Components/MeshComponent.h" },
		{ "ToolTip", "Material overrides." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMeshComponent_Statics::NewProp_OverrideMaterials = { "OverrideMaterials", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMeshComponent, OverrideMaterials), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMeshComponent_Statics::NewProp_OverrideMaterials_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshComponent_Statics::NewProp_OverrideMaterials_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMeshComponent_Statics::NewProp_OverrideMaterials_Inner = { "OverrideMaterials", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMeshComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshComponent_Statics::NewProp_bEnableMaterialParameterCaching,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshComponent_Statics::NewProp_OverrideMaterials,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshComponent_Statics::NewProp_OverrideMaterials_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMeshComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMeshComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMeshComponent_Statics::ClassParams = {
		&UMeshComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMeshComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMeshComponent_Statics::PropPointers),
		0,
		0x00B000A5u,
		METADATA_PARAMS(Z_Construct_UClass_UMeshComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMeshComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMeshComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMeshComponent, 3683772554);
	template<> ENGINE_API UClass* StaticClass<UMeshComponent>()
	{
		return UMeshComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMeshComponent(Z_Construct_UClass_UMeshComponent, &UMeshComponent::StaticClass, TEXT("/Script/Engine"), TEXT("UMeshComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMeshComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
