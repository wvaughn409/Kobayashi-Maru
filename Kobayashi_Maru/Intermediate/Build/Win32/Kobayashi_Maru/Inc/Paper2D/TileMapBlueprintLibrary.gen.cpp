// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Paper2D/Classes/TileMapBlueprintLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTileMapBlueprintLibrary() {}
// Cross Module References
	PAPER2D_API UClass* Z_Construct_UClass_UTileMapBlueprintLibrary_NoRegister();
	PAPER2D_API UClass* Z_Construct_UClass_UTileMapBlueprintLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_Paper2D();
	PAPER2D_API UClass* Z_Construct_UClass_UPaperTileSet_NoRegister();
	PAPER2D_API UScriptStruct* Z_Construct_UScriptStruct_FPaperTileInfo();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
// End Cross Module References
	DEFINE_FUNCTION(UTileMapBlueprintLibrary::execMakeTile)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_TileIndex);
		P_GET_OBJECT(UPaperTileSet,Z_Param_TileSet);
		P_GET_UBOOL(Z_Param_bFlipH);
		P_GET_UBOOL(Z_Param_bFlipV);
		P_GET_UBOOL(Z_Param_bFlipD);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FPaperTileInfo*)Z_Param__Result=UTileMapBlueprintLibrary::MakeTile(Z_Param_TileIndex,Z_Param_TileSet,Z_Param_bFlipH,Z_Param_bFlipV,Z_Param_bFlipD);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTileMapBlueprintLibrary::execBreakTile)
	{
		P_GET_STRUCT(FPaperTileInfo,Z_Param_Tile);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_TileIndex);
		P_GET_OBJECT_REF(UPaperTileSet,Z_Param_Out_TileSet);
		P_GET_UBOOL_REF(Z_Param_Out_bFlipH);
		P_GET_UBOOL_REF(Z_Param_Out_bFlipV);
		P_GET_UBOOL_REF(Z_Param_Out_bFlipD);
		P_FINISH;
		P_NATIVE_BEGIN;
		UTileMapBlueprintLibrary::BreakTile(Z_Param_Tile,Z_Param_Out_TileIndex,Z_Param_Out_TileSet,Z_Param_Out_bFlipH,Z_Param_Out_bFlipV,Z_Param_Out_bFlipD);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTileMapBlueprintLibrary::execGetTileTransform)
	{
		P_GET_STRUCT(FPaperTileInfo,Z_Param_Tile);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTransform*)Z_Param__Result=UTileMapBlueprintLibrary::GetTileTransform(Z_Param_Tile);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTileMapBlueprintLibrary::execGetTileUserData)
	{
		P_GET_STRUCT(FPaperTileInfo,Z_Param_Tile);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=UTileMapBlueprintLibrary::GetTileUserData(Z_Param_Tile);
		P_NATIVE_END;
	}
	void UTileMapBlueprintLibrary::StaticRegisterNativesUTileMapBlueprintLibrary()
	{
		UClass* Class = UTileMapBlueprintLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BreakTile", &UTileMapBlueprintLibrary::execBreakTile },
			{ "GetTileTransform", &UTileMapBlueprintLibrary::execGetTileTransform },
			{ "GetTileUserData", &UTileMapBlueprintLibrary::execGetTileUserData },
			{ "MakeTile", &UTileMapBlueprintLibrary::execMakeTile },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTileMapBlueprintLibrary_BreakTile_Statics
	{
		struct TileMapBlueprintLibrary_eventBreakTile_Parms
		{
			FPaperTileInfo Tile;
			int32 TileIndex;
			UPaperTileSet* TileSet;
			bool bFlipH;
			bool bFlipV;
			bool bFlipD;
		};
		static void NewProp_bFlipD_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFlipD;
		static void NewProp_bFlipV_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFlipV;
		static void NewProp_bFlipH_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFlipH;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TileSet;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TileIndex;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Tile;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UTileMapBlueprintLibrary_BreakTile_Statics::NewProp_bFlipD_SetBit(void* Obj)
	{
		((TileMapBlueprintLibrary_eventBreakTile_Parms*)Obj)->bFlipD = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTileMapBlueprintLibrary_BreakTile_Statics::NewProp_bFlipD = { "bFlipD", nullptr, (EPropertyFlags)0x0010040000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TileMapBlueprintLibrary_eventBreakTile_Parms), &Z_Construct_UFunction_UTileMapBlueprintLibrary_BreakTile_Statics::NewProp_bFlipD_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTileMapBlueprintLibrary_BreakTile_Statics::NewProp_bFlipV_SetBit(void* Obj)
	{
		((TileMapBlueprintLibrary_eventBreakTile_Parms*)Obj)->bFlipV = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTileMapBlueprintLibrary_BreakTile_Statics::NewProp_bFlipV = { "bFlipV", nullptr, (EPropertyFlags)0x0010040000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TileMapBlueprintLibrary_eventBreakTile_Parms), &Z_Construct_UFunction_UTileMapBlueprintLibrary_BreakTile_Statics::NewProp_bFlipV_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTileMapBlueprintLibrary_BreakTile_Statics::NewProp_bFlipH_SetBit(void* Obj)
	{
		((TileMapBlueprintLibrary_eventBreakTile_Parms*)Obj)->bFlipH = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTileMapBlueprintLibrary_BreakTile_Statics::NewProp_bFlipH = { "bFlipH", nullptr, (EPropertyFlags)0x0010040000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TileMapBlueprintLibrary_eventBreakTile_Parms), &Z_Construct_UFunction_UTileMapBlueprintLibrary_BreakTile_Statics::NewProp_bFlipH_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTileMapBlueprintLibrary_BreakTile_Statics::NewProp_TileSet = { "TileSet", nullptr, (EPropertyFlags)0x0010040000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TileMapBlueprintLibrary_eventBreakTile_Parms, TileSet), Z_Construct_UClass_UPaperTileSet_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTileMapBlueprintLibrary_BreakTile_Statics::NewProp_TileIndex = { "TileIndex", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TileMapBlueprintLibrary_eventBreakTile_Parms, TileIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTileMapBlueprintLibrary_BreakTile_Statics::NewProp_Tile = { "Tile", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TileMapBlueprintLibrary_eventBreakTile_Parms, Tile), Z_Construct_UScriptStruct_FPaperTileInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTileMapBlueprintLibrary_BreakTile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTileMapBlueprintLibrary_BreakTile_Statics::NewProp_bFlipD,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTileMapBlueprintLibrary_BreakTile_Statics::NewProp_bFlipV,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTileMapBlueprintLibrary_BreakTile_Statics::NewProp_bFlipH,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTileMapBlueprintLibrary_BreakTile_Statics::NewProp_TileSet,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTileMapBlueprintLibrary_BreakTile_Statics::NewProp_TileIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTileMapBlueprintLibrary_BreakTile_Statics::NewProp_Tile,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTileMapBlueprintLibrary_BreakTile_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "2" },
		{ "Category", "Sprite" },
		{ "Comment", "// Breaks out the information for a tile\n" },
		{ "ModuleRelativePath", "Classes/TileMapBlueprintLibrary.h" },
		{ "ToolTip", "Breaks out the information for a tile" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTileMapBlueprintLibrary_BreakTile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTileMapBlueprintLibrary, nullptr, "BreakTile", nullptr, nullptr, sizeof(TileMapBlueprintLibrary_eventBreakTile_Parms), Z_Construct_UFunction_UTileMapBlueprintLibrary_BreakTile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTileMapBlueprintLibrary_BreakTile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTileMapBlueprintLibrary_BreakTile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTileMapBlueprintLibrary_BreakTile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTileMapBlueprintLibrary_BreakTile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTileMapBlueprintLibrary_BreakTile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTileMapBlueprintLibrary_GetTileTransform_Statics
	{
		struct TileMapBlueprintLibrary_eventGetTileTransform_Parms
		{
			FPaperTileInfo Tile;
			FTransform ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Tile;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTileMapBlueprintLibrary_GetTileTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TileMapBlueprintLibrary_eventGetTileTransform_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTileMapBlueprintLibrary_GetTileTransform_Statics::NewProp_Tile = { "Tile", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TileMapBlueprintLibrary_eventGetTileTransform_Parms, Tile), Z_Construct_UScriptStruct_FPaperTileInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTileMapBlueprintLibrary_GetTileTransform_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTileMapBlueprintLibrary_GetTileTransform_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTileMapBlueprintLibrary_GetTileTransform_Statics::NewProp_Tile,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTileMapBlueprintLibrary_GetTileTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sprite" },
		{ "Comment", "// Returns the transform for a tile\n" },
		{ "ModuleRelativePath", "Classes/TileMapBlueprintLibrary.h" },
		{ "ToolTip", "Returns the transform for a tile" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTileMapBlueprintLibrary_GetTileTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTileMapBlueprintLibrary, nullptr, "GetTileTransform", nullptr, nullptr, sizeof(TileMapBlueprintLibrary_eventGetTileTransform_Parms), Z_Construct_UFunction_UTileMapBlueprintLibrary_GetTileTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTileMapBlueprintLibrary_GetTileTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTileMapBlueprintLibrary_GetTileTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTileMapBlueprintLibrary_GetTileTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTileMapBlueprintLibrary_GetTileTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTileMapBlueprintLibrary_GetTileTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTileMapBlueprintLibrary_GetTileUserData_Statics
	{
		struct TileMapBlueprintLibrary_eventGetTileUserData_Parms
		{
			FPaperTileInfo Tile;
			FName ReturnValue;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Tile;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UTileMapBlueprintLibrary_GetTileUserData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TileMapBlueprintLibrary_eventGetTileUserData_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTileMapBlueprintLibrary_GetTileUserData_Statics::NewProp_Tile = { "Tile", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TileMapBlueprintLibrary_eventGetTileUserData_Parms, Tile), Z_Construct_UScriptStruct_FPaperTileInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTileMapBlueprintLibrary_GetTileUserData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTileMapBlueprintLibrary_GetTileUserData_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTileMapBlueprintLibrary_GetTileUserData_Statics::NewProp_Tile,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTileMapBlueprintLibrary_GetTileUserData_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sprite" },
		{ "Comment", "// Returns the user data name for the specified tile, or NAME_None if there is no user-specified data\n" },
		{ "ModuleRelativePath", "Classes/TileMapBlueprintLibrary.h" },
		{ "ToolTip", "Returns the user data name for the specified tile, or NAME_None if there is no user-specified data" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTileMapBlueprintLibrary_GetTileUserData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTileMapBlueprintLibrary, nullptr, "GetTileUserData", nullptr, nullptr, sizeof(TileMapBlueprintLibrary_eventGetTileUserData_Parms), Z_Construct_UFunction_UTileMapBlueprintLibrary_GetTileUserData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTileMapBlueprintLibrary_GetTileUserData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTileMapBlueprintLibrary_GetTileUserData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTileMapBlueprintLibrary_GetTileUserData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTileMapBlueprintLibrary_GetTileUserData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTileMapBlueprintLibrary_GetTileUserData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTileMapBlueprintLibrary_MakeTile_Statics
	{
		struct TileMapBlueprintLibrary_eventMakeTile_Parms
		{
			int32 TileIndex;
			UPaperTileSet* TileSet;
			bool bFlipH;
			bool bFlipV;
			bool bFlipD;
			FPaperTileInfo ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static void NewProp_bFlipD_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFlipD;
		static void NewProp_bFlipV_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFlipV;
		static void NewProp_bFlipH_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFlipH;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TileSet;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TileIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTileMapBlueprintLibrary_MakeTile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TileMapBlueprintLibrary_eventMakeTile_Parms, ReturnValue), Z_Construct_UScriptStruct_FPaperTileInfo, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTileMapBlueprintLibrary_MakeTile_Statics::NewProp_bFlipD_SetBit(void* Obj)
	{
		((TileMapBlueprintLibrary_eventMakeTile_Parms*)Obj)->bFlipD = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTileMapBlueprintLibrary_MakeTile_Statics::NewProp_bFlipD = { "bFlipD", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TileMapBlueprintLibrary_eventMakeTile_Parms), &Z_Construct_UFunction_UTileMapBlueprintLibrary_MakeTile_Statics::NewProp_bFlipD_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTileMapBlueprintLibrary_MakeTile_Statics::NewProp_bFlipV_SetBit(void* Obj)
	{
		((TileMapBlueprintLibrary_eventMakeTile_Parms*)Obj)->bFlipV = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTileMapBlueprintLibrary_MakeTile_Statics::NewProp_bFlipV = { "bFlipV", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TileMapBlueprintLibrary_eventMakeTile_Parms), &Z_Construct_UFunction_UTileMapBlueprintLibrary_MakeTile_Statics::NewProp_bFlipV_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTileMapBlueprintLibrary_MakeTile_Statics::NewProp_bFlipH_SetBit(void* Obj)
	{
		((TileMapBlueprintLibrary_eventMakeTile_Parms*)Obj)->bFlipH = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTileMapBlueprintLibrary_MakeTile_Statics::NewProp_bFlipH = { "bFlipH", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TileMapBlueprintLibrary_eventMakeTile_Parms), &Z_Construct_UFunction_UTileMapBlueprintLibrary_MakeTile_Statics::NewProp_bFlipH_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTileMapBlueprintLibrary_MakeTile_Statics::NewProp_TileSet = { "TileSet", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TileMapBlueprintLibrary_eventMakeTile_Parms, TileSet), Z_Construct_UClass_UPaperTileSet_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTileMapBlueprintLibrary_MakeTile_Statics::NewProp_TileIndex = { "TileIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TileMapBlueprintLibrary_eventMakeTile_Parms, TileIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTileMapBlueprintLibrary_MakeTile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTileMapBlueprintLibrary_MakeTile_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTileMapBlueprintLibrary_MakeTile_Statics::NewProp_bFlipD,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTileMapBlueprintLibrary_MakeTile_Statics::NewProp_bFlipV,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTileMapBlueprintLibrary_MakeTile_Statics::NewProp_bFlipH,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTileMapBlueprintLibrary_MakeTile_Statics::NewProp_TileSet,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTileMapBlueprintLibrary_MakeTile_Statics::NewProp_TileIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTileMapBlueprintLibrary_MakeTile_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "2" },
		{ "Category", "Sprite" },
		{ "Comment", "// Creates a tile from the specified information\n" },
		{ "ModuleRelativePath", "Classes/TileMapBlueprintLibrary.h" },
		{ "ToolTip", "Creates a tile from the specified information" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTileMapBlueprintLibrary_MakeTile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTileMapBlueprintLibrary, nullptr, "MakeTile", nullptr, nullptr, sizeof(TileMapBlueprintLibrary_eventMakeTile_Parms), Z_Construct_UFunction_UTileMapBlueprintLibrary_MakeTile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTileMapBlueprintLibrary_MakeTile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTileMapBlueprintLibrary_MakeTile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTileMapBlueprintLibrary_MakeTile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTileMapBlueprintLibrary_MakeTile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTileMapBlueprintLibrary_MakeTile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTileMapBlueprintLibrary_NoRegister()
	{
		return UTileMapBlueprintLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UTileMapBlueprintLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTileMapBlueprintLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_Paper2D,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTileMapBlueprintLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTileMapBlueprintLibrary_BreakTile, "BreakTile" }, // 1670794596
		{ &Z_Construct_UFunction_UTileMapBlueprintLibrary_GetTileTransform, "GetTileTransform" }, // 4184603117
		{ &Z_Construct_UFunction_UTileMapBlueprintLibrary_GetTileUserData, "GetTileUserData" }, // 4081929701
		{ &Z_Construct_UFunction_UTileMapBlueprintLibrary_MakeTile, "MakeTile" }, // 3971855970
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTileMapBlueprintLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A collection of utility methods for working with tile map components\n *\n * @see UPaperTileMap, UPaperTileMapComponent\n */" },
		{ "IncludePath", "TileMapBlueprintLibrary.h" },
		{ "ModuleRelativePath", "Classes/TileMapBlueprintLibrary.h" },
		{ "ScriptName", "TileMapLibrary" },
		{ "ToolTip", "A collection of utility methods for working with tile map components\n\n@see UPaperTileMap, UPaperTileMapComponent" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTileMapBlueprintLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTileMapBlueprintLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTileMapBlueprintLibrary_Statics::ClassParams = {
		&UTileMapBlueprintLibrary::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTileMapBlueprintLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTileMapBlueprintLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTileMapBlueprintLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTileMapBlueprintLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTileMapBlueprintLibrary, 1410804508);
	template<> PAPER2D_API UClass* StaticClass<UTileMapBlueprintLibrary>()
	{
		return UTileMapBlueprintLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTileMapBlueprintLibrary(Z_Construct_UClass_UTileMapBlueprintLibrary, &UTileMapBlueprintLibrary::StaticClass, TEXT("/Script/Paper2D"), TEXT("UTileMapBlueprintLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTileMapBlueprintLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
