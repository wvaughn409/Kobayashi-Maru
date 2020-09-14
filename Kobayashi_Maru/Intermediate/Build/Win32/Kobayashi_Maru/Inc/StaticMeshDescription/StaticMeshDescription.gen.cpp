// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StaticMeshDescription/Public/StaticMeshDescription.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStaticMeshDescription() {}
// Cross Module References
	STATICMESHDESCRIPTION_API UClass* Z_Construct_UClass_UStaticMeshDescription_NoRegister();
	STATICMESHDESCRIPTION_API UClass* Z_Construct_UClass_UStaticMeshDescription();
	MESHDESCRIPTION_API UClass* Z_Construct_UClass_UMeshDescriptionBase();
	UPackage* Z_Construct_UPackage__Script_StaticMeshDescription();
	MESHDESCRIPTION_API UScriptStruct* Z_Construct_UScriptStruct_FPolygonID();
	MESHDESCRIPTION_API UScriptStruct* Z_Construct_UScriptStruct_FPolygonGroupID();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	MESHDESCRIPTION_API UScriptStruct* Z_Construct_UScriptStruct_FVertexInstanceID();
// End Cross Module References
	DEFINE_FUNCTION(UStaticMeshDescription::execSetPolygonGroupMaterialSlotName)
	{
		P_GET_STRUCT(FPolygonGroupID,Z_Param_PolygonGroupID);
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_SlotName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPolygonGroupMaterialSlotName(Z_Param_PolygonGroupID,Z_Param_Out_SlotName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStaticMeshDescription::execCreateCube)
	{
		P_GET_STRUCT(FVector,Z_Param_Center);
		P_GET_STRUCT(FVector,Z_Param_HalfExtents);
		P_GET_STRUCT(FPolygonGroupID,Z_Param_PolygonGroup);
		P_GET_STRUCT_REF(FPolygonID,Z_Param_Out_PolygonID_PlusX);
		P_GET_STRUCT_REF(FPolygonID,Z_Param_Out_PolygonID_MinusX);
		P_GET_STRUCT_REF(FPolygonID,Z_Param_Out_PolygonID_PlusY);
		P_GET_STRUCT_REF(FPolygonID,Z_Param_Out_PolygonID_MinusY);
		P_GET_STRUCT_REF(FPolygonID,Z_Param_Out_PolygonID_PlusZ);
		P_GET_STRUCT_REF(FPolygonID,Z_Param_Out_PolygonID_MinusZ);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CreateCube(Z_Param_Center,Z_Param_HalfExtents,Z_Param_PolygonGroup,Z_Param_Out_PolygonID_PlusX,Z_Param_Out_PolygonID_MinusX,Z_Param_Out_PolygonID_PlusY,Z_Param_Out_PolygonID_MinusY,Z_Param_Out_PolygonID_PlusZ,Z_Param_Out_PolygonID_MinusZ);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStaticMeshDescription::execSetVertexInstanceUV)
	{
		P_GET_STRUCT(FVertexInstanceID,Z_Param_VertexInstanceID);
		P_GET_STRUCT(FVector2D,Z_Param_UV);
		P_GET_PROPERTY(FIntProperty,Z_Param_UVIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVertexInstanceUV(Z_Param_VertexInstanceID,Z_Param_UV,Z_Param_UVIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStaticMeshDescription::execGetVertexInstanceUV)
	{
		P_GET_STRUCT(FVertexInstanceID,Z_Param_VertexInstanceID);
		P_GET_PROPERTY(FIntProperty,Z_Param_UVIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector2D*)Z_Param__Result=P_THIS->GetVertexInstanceUV(Z_Param_VertexInstanceID,Z_Param_UVIndex);
		P_NATIVE_END;
	}
	void UStaticMeshDescription::StaticRegisterNativesUStaticMeshDescription()
	{
		UClass* Class = UStaticMeshDescription::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateCube", &UStaticMeshDescription::execCreateCube },
			{ "GetVertexInstanceUV", &UStaticMeshDescription::execGetVertexInstanceUV },
			{ "SetPolygonGroupMaterialSlotName", &UStaticMeshDescription::execSetPolygonGroupMaterialSlotName },
			{ "SetVertexInstanceUV", &UStaticMeshDescription::execSetVertexInstanceUV },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UStaticMeshDescription_CreateCube_Statics
	{
		struct StaticMeshDescription_eventCreateCube_Parms
		{
			FVector Center;
			FVector HalfExtents;
			FPolygonGroupID PolygonGroup;
			FPolygonID PolygonID_PlusX;
			FPolygonID PolygonID_MinusX;
			FPolygonID PolygonID_PlusY;
			FPolygonID PolygonID_MinusY;
			FPolygonID PolygonID_PlusZ;
			FPolygonID PolygonID_MinusZ;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PolygonID_MinusZ;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PolygonID_PlusZ;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PolygonID_MinusY;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PolygonID_PlusY;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PolygonID_MinusX;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PolygonID_PlusX;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PolygonGroup;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HalfExtents;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Center;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStaticMeshDescription_CreateCube_Statics::NewProp_PolygonID_MinusZ = { "PolygonID_MinusZ", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StaticMeshDescription_eventCreateCube_Parms, PolygonID_MinusZ), Z_Construct_UScriptStruct_FPolygonID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStaticMeshDescription_CreateCube_Statics::NewProp_PolygonID_PlusZ = { "PolygonID_PlusZ", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StaticMeshDescription_eventCreateCube_Parms, PolygonID_PlusZ), Z_Construct_UScriptStruct_FPolygonID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStaticMeshDescription_CreateCube_Statics::NewProp_PolygonID_MinusY = { "PolygonID_MinusY", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StaticMeshDescription_eventCreateCube_Parms, PolygonID_MinusY), Z_Construct_UScriptStruct_FPolygonID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStaticMeshDescription_CreateCube_Statics::NewProp_PolygonID_PlusY = { "PolygonID_PlusY", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StaticMeshDescription_eventCreateCube_Parms, PolygonID_PlusY), Z_Construct_UScriptStruct_FPolygonID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStaticMeshDescription_CreateCube_Statics::NewProp_PolygonID_MinusX = { "PolygonID_MinusX", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StaticMeshDescription_eventCreateCube_Parms, PolygonID_MinusX), Z_Construct_UScriptStruct_FPolygonID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStaticMeshDescription_CreateCube_Statics::NewProp_PolygonID_PlusX = { "PolygonID_PlusX", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StaticMeshDescription_eventCreateCube_Parms, PolygonID_PlusX), Z_Construct_UScriptStruct_FPolygonID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStaticMeshDescription_CreateCube_Statics::NewProp_PolygonGroup = { "PolygonGroup", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StaticMeshDescription_eventCreateCube_Parms, PolygonGroup), Z_Construct_UScriptStruct_FPolygonGroupID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStaticMeshDescription_CreateCube_Statics::NewProp_HalfExtents = { "HalfExtents", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StaticMeshDescription_eventCreateCube_Parms, HalfExtents), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStaticMeshDescription_CreateCube_Statics::NewProp_Center = { "Center", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StaticMeshDescription_eventCreateCube_Parms, Center), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStaticMeshDescription_CreateCube_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshDescription_CreateCube_Statics::NewProp_PolygonID_MinusZ,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshDescription_CreateCube_Statics::NewProp_PolygonID_PlusZ,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshDescription_CreateCube_Statics::NewProp_PolygonID_MinusY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshDescription_CreateCube_Statics::NewProp_PolygonID_PlusY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshDescription_CreateCube_Statics::NewProp_PolygonID_MinusX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshDescription_CreateCube_Statics::NewProp_PolygonID_PlusX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshDescription_CreateCube_Statics::NewProp_PolygonGroup,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshDescription_CreateCube_Statics::NewProp_HalfExtents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshDescription_CreateCube_Statics::NewProp_Center,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStaticMeshDescription_CreateCube_Statics::Function_MetaDataParams[] = {
		{ "Category", "MeshDescription" },
		{ "ModuleRelativePath", "Public/StaticMeshDescription.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStaticMeshDescription_CreateCube_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStaticMeshDescription, nullptr, "CreateCube", nullptr, nullptr, sizeof(StaticMeshDescription_eventCreateCube_Parms), Z_Construct_UFunction_UStaticMeshDescription_CreateCube_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshDescription_CreateCube_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStaticMeshDescription_CreateCube_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshDescription_CreateCube_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStaticMeshDescription_CreateCube()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStaticMeshDescription_CreateCube_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStaticMeshDescription_GetVertexInstanceUV_Statics
	{
		struct StaticMeshDescription_eventGetVertexInstanceUV_Parms
		{
			FVertexInstanceID VertexInstanceID;
			int32 UVIndex;
			FVector2D ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_UVIndex;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VertexInstanceID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStaticMeshDescription_GetVertexInstanceUV_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StaticMeshDescription_eventGetVertexInstanceUV_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UStaticMeshDescription_GetVertexInstanceUV_Statics::NewProp_UVIndex = { "UVIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StaticMeshDescription_eventGetVertexInstanceUV_Parms, UVIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStaticMeshDescription_GetVertexInstanceUV_Statics::NewProp_VertexInstanceID = { "VertexInstanceID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StaticMeshDescription_eventGetVertexInstanceUV_Parms, VertexInstanceID), Z_Construct_UScriptStruct_FVertexInstanceID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStaticMeshDescription_GetVertexInstanceUV_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshDescription_GetVertexInstanceUV_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshDescription_GetVertexInstanceUV_Statics::NewProp_UVIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshDescription_GetVertexInstanceUV_Statics::NewProp_VertexInstanceID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStaticMeshDescription_GetVertexInstanceUV_Statics::Function_MetaDataParams[] = {
		{ "Category", "MeshDescription" },
		{ "CPP_Default_UVIndex", "0" },
		{ "ModuleRelativePath", "Public/StaticMeshDescription.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStaticMeshDescription_GetVertexInstanceUV_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStaticMeshDescription, nullptr, "GetVertexInstanceUV", nullptr, nullptr, sizeof(StaticMeshDescription_eventGetVertexInstanceUV_Parms), Z_Construct_UFunction_UStaticMeshDescription_GetVertexInstanceUV_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshDescription_GetVertexInstanceUV_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStaticMeshDescription_GetVertexInstanceUV_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshDescription_GetVertexInstanceUV_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStaticMeshDescription_GetVertexInstanceUV()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStaticMeshDescription_GetVertexInstanceUV_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStaticMeshDescription_SetPolygonGroupMaterialSlotName_Statics
	{
		struct StaticMeshDescription_eventSetPolygonGroupMaterialSlotName_Parms
		{
			FPolygonGroupID PolygonGroupID;
			FName SlotName;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SlotName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SlotName;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PolygonGroupID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStaticMeshDescription_SetPolygonGroupMaterialSlotName_Statics::NewProp_SlotName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UStaticMeshDescription_SetPolygonGroupMaterialSlotName_Statics::NewProp_SlotName = { "SlotName", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StaticMeshDescription_eventSetPolygonGroupMaterialSlotName_Parms, SlotName), METADATA_PARAMS(Z_Construct_UFunction_UStaticMeshDescription_SetPolygonGroupMaterialSlotName_Statics::NewProp_SlotName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshDescription_SetPolygonGroupMaterialSlotName_Statics::NewProp_SlotName_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStaticMeshDescription_SetPolygonGroupMaterialSlotName_Statics::NewProp_PolygonGroupID = { "PolygonGroupID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StaticMeshDescription_eventSetPolygonGroupMaterialSlotName_Parms, PolygonGroupID), Z_Construct_UScriptStruct_FPolygonGroupID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStaticMeshDescription_SetPolygonGroupMaterialSlotName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshDescription_SetPolygonGroupMaterialSlotName_Statics::NewProp_SlotName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshDescription_SetPolygonGroupMaterialSlotName_Statics::NewProp_PolygonGroupID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStaticMeshDescription_SetPolygonGroupMaterialSlotName_Statics::Function_MetaDataParams[] = {
		{ "Category", "MeshDescription" },
		{ "ModuleRelativePath", "Public/StaticMeshDescription.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStaticMeshDescription_SetPolygonGroupMaterialSlotName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStaticMeshDescription, nullptr, "SetPolygonGroupMaterialSlotName", nullptr, nullptr, sizeof(StaticMeshDescription_eventSetPolygonGroupMaterialSlotName_Parms), Z_Construct_UFunction_UStaticMeshDescription_SetPolygonGroupMaterialSlotName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshDescription_SetPolygonGroupMaterialSlotName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStaticMeshDescription_SetPolygonGroupMaterialSlotName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshDescription_SetPolygonGroupMaterialSlotName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStaticMeshDescription_SetPolygonGroupMaterialSlotName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStaticMeshDescription_SetPolygonGroupMaterialSlotName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStaticMeshDescription_SetVertexInstanceUV_Statics
	{
		struct StaticMeshDescription_eventSetVertexInstanceUV_Parms
		{
			FVertexInstanceID VertexInstanceID;
			FVector2D UV;
			int32 UVIndex;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_UVIndex;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UV;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VertexInstanceID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UStaticMeshDescription_SetVertexInstanceUV_Statics::NewProp_UVIndex = { "UVIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StaticMeshDescription_eventSetVertexInstanceUV_Parms, UVIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStaticMeshDescription_SetVertexInstanceUV_Statics::NewProp_UV = { "UV", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StaticMeshDescription_eventSetVertexInstanceUV_Parms, UV), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStaticMeshDescription_SetVertexInstanceUV_Statics::NewProp_VertexInstanceID = { "VertexInstanceID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StaticMeshDescription_eventSetVertexInstanceUV_Parms, VertexInstanceID), Z_Construct_UScriptStruct_FVertexInstanceID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStaticMeshDescription_SetVertexInstanceUV_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshDescription_SetVertexInstanceUV_Statics::NewProp_UVIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshDescription_SetVertexInstanceUV_Statics::NewProp_UV,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshDescription_SetVertexInstanceUV_Statics::NewProp_VertexInstanceID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStaticMeshDescription_SetVertexInstanceUV_Statics::Function_MetaDataParams[] = {
		{ "Category", "MeshDescription" },
		{ "CPP_Default_UVIndex", "0" },
		{ "ModuleRelativePath", "Public/StaticMeshDescription.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStaticMeshDescription_SetVertexInstanceUV_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStaticMeshDescription, nullptr, "SetVertexInstanceUV", nullptr, nullptr, sizeof(StaticMeshDescription_eventSetVertexInstanceUV_Parms), Z_Construct_UFunction_UStaticMeshDescription_SetVertexInstanceUV_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshDescription_SetVertexInstanceUV_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStaticMeshDescription_SetVertexInstanceUV_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshDescription_SetVertexInstanceUV_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStaticMeshDescription_SetVertexInstanceUV()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStaticMeshDescription_SetVertexInstanceUV_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UStaticMeshDescription_NoRegister()
	{
		return UStaticMeshDescription::StaticClass();
	}
	struct Z_Construct_UClass_UStaticMeshDescription_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStaticMeshDescription_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMeshDescriptionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_StaticMeshDescription,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UStaticMeshDescription_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UStaticMeshDescription_CreateCube, "CreateCube" }, // 2037241691
		{ &Z_Construct_UFunction_UStaticMeshDescription_GetVertexInstanceUV, "GetVertexInstanceUV" }, // 2175989921
		{ &Z_Construct_UFunction_UStaticMeshDescription_SetPolygonGroupMaterialSlotName, "SetPolygonGroupMaterialSlotName" }, // 53764944
		{ &Z_Construct_UFunction_UStaticMeshDescription_SetVertexInstanceUV, "SetVertexInstanceUV" }, // 2508979458
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMeshDescription_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n* A wrapper for MeshDescription, customized for static meshes\n*/" },
		{ "IncludePath", "StaticMeshDescription.h" },
		{ "ModuleRelativePath", "Public/StaticMeshDescription.h" },
		{ "ToolTip", "A wrapper for MeshDescription, customized for static meshes" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStaticMeshDescription_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStaticMeshDescription>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UStaticMeshDescription_Statics::ClassParams = {
		&UStaticMeshDescription::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UStaticMeshDescription_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UStaticMeshDescription_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UStaticMeshDescription()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UStaticMeshDescription_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UStaticMeshDescription, 1967255823);
	template<> STATICMESHDESCRIPTION_API UClass* StaticClass<UStaticMeshDescription>()
	{
		return UStaticMeshDescription::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UStaticMeshDescription(Z_Construct_UClass_UStaticMeshDescription, &UStaticMeshDescription::StaticClass, TEXT("/Script/StaticMeshDescription"), TEXT("UStaticMeshDescription"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStaticMeshDescription);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
