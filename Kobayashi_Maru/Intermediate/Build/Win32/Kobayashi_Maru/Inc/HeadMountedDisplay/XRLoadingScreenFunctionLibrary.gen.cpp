// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HeadMountedDisplay/Public/XRLoadingScreenFunctionLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeXRLoadingScreenFunctionLibrary() {}
// Cross Module References
	HEADMOUNTEDDISPLAY_API UClass* Z_Construct_UClass_UXRLoadingScreenFunctionLibrary_NoRegister();
	HEADMOUNTEDDISPLAY_API UClass* Z_Construct_UClass_UXRLoadingScreenFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_HeadMountedDisplay();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UXRLoadingScreenFunctionLibrary::execHideLoadingScreen)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UXRLoadingScreenFunctionLibrary::HideLoadingScreen();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXRLoadingScreenFunctionLibrary::execShowLoadingScreen)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UXRLoadingScreenFunctionLibrary::ShowLoadingScreen();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXRLoadingScreenFunctionLibrary::execAddLoadingScreenSplash)
	{
		P_GET_OBJECT(UTexture,Z_Param_Texture);
		P_GET_STRUCT(FVector,Z_Param_Translation);
		P_GET_STRUCT(FRotator,Z_Param_Rotation);
		P_GET_STRUCT(FVector2D,Z_Param_Size);
		P_GET_STRUCT(FRotator,Z_Param_DeltaRotation);
		P_GET_UBOOL(Z_Param_bClearBeforeAdd);
		P_FINISH;
		P_NATIVE_BEGIN;
		UXRLoadingScreenFunctionLibrary::AddLoadingScreenSplash(Z_Param_Texture,Z_Param_Translation,Z_Param_Rotation,Z_Param_Size,Z_Param_DeltaRotation,Z_Param_bClearBeforeAdd);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXRLoadingScreenFunctionLibrary::execClearLoadingScreenSplashes)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UXRLoadingScreenFunctionLibrary::ClearLoadingScreenSplashes();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXRLoadingScreenFunctionLibrary::execSetLoadingScreen)
	{
		P_GET_OBJECT(UTexture,Z_Param_Texture);
		P_GET_STRUCT(FVector2D,Z_Param_Scale);
		P_GET_STRUCT(FVector,Z_Param_Offset);
		P_GET_UBOOL(Z_Param_bShowLoadingMovie);
		P_GET_UBOOL(Z_Param_bShowOnSet);
		P_FINISH;
		P_NATIVE_BEGIN;
		UXRLoadingScreenFunctionLibrary::SetLoadingScreen(Z_Param_Texture,Z_Param_Scale,Z_Param_Offset,Z_Param_bShowLoadingMovie,Z_Param_bShowOnSet);
		P_NATIVE_END;
	}
	void UXRLoadingScreenFunctionLibrary::StaticRegisterNativesUXRLoadingScreenFunctionLibrary()
	{
		UClass* Class = UXRLoadingScreenFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddLoadingScreenSplash", &UXRLoadingScreenFunctionLibrary::execAddLoadingScreenSplash },
			{ "ClearLoadingScreenSplashes", &UXRLoadingScreenFunctionLibrary::execClearLoadingScreenSplashes },
			{ "HideLoadingScreen", &UXRLoadingScreenFunctionLibrary::execHideLoadingScreen },
			{ "SetLoadingScreen", &UXRLoadingScreenFunctionLibrary::execSetLoadingScreen },
			{ "ShowLoadingScreen", &UXRLoadingScreenFunctionLibrary::execShowLoadingScreen },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UXRLoadingScreenFunctionLibrary_AddLoadingScreenSplash_Statics
	{
		struct XRLoadingScreenFunctionLibrary_eventAddLoadingScreenSplash_Parms
		{
			UTexture* Texture;
			FVector Translation;
			FRotator Rotation;
			FVector2D Size;
			FRotator DeltaRotation;
			bool bClearBeforeAdd;
		};
		static void NewProp_bClearBeforeAdd_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bClearBeforeAdd;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DeltaRotation;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Size;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Rotation;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Translation;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Texture;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UXRLoadingScreenFunctionLibrary_AddLoadingScreenSplash_Statics::NewProp_bClearBeforeAdd_SetBit(void* Obj)
	{
		((XRLoadingScreenFunctionLibrary_eventAddLoadingScreenSplash_Parms*)Obj)->bClearBeforeAdd = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UXRLoadingScreenFunctionLibrary_AddLoadingScreenSplash_Statics::NewProp_bClearBeforeAdd = { "bClearBeforeAdd", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(XRLoadingScreenFunctionLibrary_eventAddLoadingScreenSplash_Parms), &Z_Construct_UFunction_UXRLoadingScreenFunctionLibrary_AddLoadingScreenSplash_Statics::NewProp_bClearBeforeAdd_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UXRLoadingScreenFunctionLibrary_AddLoadingScreenSplash_Statics::NewProp_DeltaRotation = { "DeltaRotation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XRLoadingScreenFunctionLibrary_eventAddLoadingScreenSplash_Parms, DeltaRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UXRLoadingScreenFunctionLibrary_AddLoadingScreenSplash_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XRLoadingScreenFunctionLibrary_eventAddLoadingScreenSplash_Parms, Size), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UXRLoadingScreenFunctionLibrary_AddLoadingScreenSplash_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XRLoadingScreenFunctionLibrary_eventAddLoadingScreenSplash_Parms, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UXRLoadingScreenFunctionLibrary_AddLoadingScreenSplash_Statics::NewProp_Translation = { "Translation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XRLoadingScreenFunctionLibrary_eventAddLoadingScreenSplash_Parms, Translation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UXRLoadingScreenFunctionLibrary_AddLoadingScreenSplash_Statics::NewProp_Texture = { "Texture", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XRLoadingScreenFunctionLibrary_eventAddLoadingScreenSplash_Parms, Texture), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXRLoadingScreenFunctionLibrary_AddLoadingScreenSplash_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXRLoadingScreenFunctionLibrary_AddLoadingScreenSplash_Statics::NewProp_bClearBeforeAdd,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXRLoadingScreenFunctionLibrary_AddLoadingScreenSplash_Statics::NewProp_DeltaRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXRLoadingScreenFunctionLibrary_AddLoadingScreenSplash_Statics::NewProp_Size,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXRLoadingScreenFunctionLibrary_AddLoadingScreenSplash_Statics::NewProp_Rotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXRLoadingScreenFunctionLibrary_AddLoadingScreenSplash_Statics::NewProp_Translation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXRLoadingScreenFunctionLibrary_AddLoadingScreenSplash_Statics::NewProp_Texture,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXRLoadingScreenFunctionLibrary_AddLoadingScreenSplash_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input|HeadMountedDisplay|LoadingScreen" },
		{ "Comment", "/**\n     * Adds a splash element to the loading screen.\n     *\n\x09 * @param Texture\x09\x09\x09(in) A texture asset to be used for the splash.\n\x09 * @param Translation       (in) Initial translation of the center of the splash.\n\x09 * @param Rotation\x09\x09\x09(in) Initial rotation of the splash screen, with the origin at the center of the splash.\n\x09 * @param Size      \x09\x09(in) Size, of the quad with the splash screen.\n\x09 * @param DeltaRotation\x09\x09(in) Incremental rotation, that is added each 2nd frame to the quad transform. The quad is rotated around the center of the quad.\n\x09 * @param bClearBeforeAdd\x09(in) If true, clears splashes before adding a new one.\n\x09 */" },
		{ "CPP_Default_bClearBeforeAdd", "false" },
		{ "CPP_Default_DeltaRotation", "" },
		{ "CPP_Default_Size", "(X=1.000,Y=1.000)" },
		{ "ModuleRelativePath", "Public/XRLoadingScreenFunctionLibrary.h" },
		{ "ToolTip", "Adds a splash element to the loading screen.\n\n@param Texture                       (in) A texture asset to be used for the splash.\n@param Translation       (in) Initial translation of the center of the splash.\n@param Rotation                      (in) Initial rotation of the splash screen, with the origin at the center of the splash.\n@param Size                  (in) Size, of the quad with the splash screen.\n@param DeltaRotation         (in) Incremental rotation, that is added each 2nd frame to the quad transform. The quad is rotated around the center of the quad.\n@param bClearBeforeAdd       (in) If true, clears splashes before adding a new one." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXRLoadingScreenFunctionLibrary_AddLoadingScreenSplash_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXRLoadingScreenFunctionLibrary, nullptr, "AddLoadingScreenSplash", nullptr, nullptr, sizeof(XRLoadingScreenFunctionLibrary_eventAddLoadingScreenSplash_Parms), Z_Construct_UFunction_UXRLoadingScreenFunctionLibrary_AddLoadingScreenSplash_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXRLoadingScreenFunctionLibrary_AddLoadingScreenSplash_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXRLoadingScreenFunctionLibrary_AddLoadingScreenSplash_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXRLoadingScreenFunctionLibrary_AddLoadingScreenSplash_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXRLoadingScreenFunctionLibrary_AddLoadingScreenSplash()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXRLoadingScreenFunctionLibrary_AddLoadingScreenSplash_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXRLoadingScreenFunctionLibrary_ClearLoadingScreenSplashes_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXRLoadingScreenFunctionLibrary_ClearLoadingScreenSplashes_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input|HeadMountedDisplay|LoadingScreen" },
		{ "ModuleRelativePath", "Public/XRLoadingScreenFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXRLoadingScreenFunctionLibrary_ClearLoadingScreenSplashes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXRLoadingScreenFunctionLibrary, nullptr, "ClearLoadingScreenSplashes", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXRLoadingScreenFunctionLibrary_ClearLoadingScreenSplashes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXRLoadingScreenFunctionLibrary_ClearLoadingScreenSplashes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXRLoadingScreenFunctionLibrary_ClearLoadingScreenSplashes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXRLoadingScreenFunctionLibrary_ClearLoadingScreenSplashes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXRLoadingScreenFunctionLibrary_HideLoadingScreen_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXRLoadingScreenFunctionLibrary_HideLoadingScreen_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input|HeadMountedDisplay|LoadingScreen" },
		{ "Comment", "/**\n\x09 * Hide the splash screen and return to normal display.\n\x09 */" },
		{ "ModuleRelativePath", "Public/XRLoadingScreenFunctionLibrary.h" },
		{ "ToolTip", "Hide the splash screen and return to normal display." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXRLoadingScreenFunctionLibrary_HideLoadingScreen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXRLoadingScreenFunctionLibrary, nullptr, "HideLoadingScreen", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXRLoadingScreenFunctionLibrary_HideLoadingScreen_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXRLoadingScreenFunctionLibrary_HideLoadingScreen_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXRLoadingScreenFunctionLibrary_HideLoadingScreen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXRLoadingScreenFunctionLibrary_HideLoadingScreen_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXRLoadingScreenFunctionLibrary_SetLoadingScreen_Statics
	{
		struct XRLoadingScreenFunctionLibrary_eventSetLoadingScreen_Parms
		{
			UTexture* Texture;
			FVector2D Scale;
			FVector Offset;
			bool bShowLoadingMovie;
			bool bShowOnSet;
		};
		static void NewProp_bShowOnSet_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowOnSet;
		static void NewProp_bShowLoadingMovie_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowLoadingMovie;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Offset;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Scale;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Texture;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UXRLoadingScreenFunctionLibrary_SetLoadingScreen_Statics::NewProp_bShowOnSet_SetBit(void* Obj)
	{
		((XRLoadingScreenFunctionLibrary_eventSetLoadingScreen_Parms*)Obj)->bShowOnSet = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UXRLoadingScreenFunctionLibrary_SetLoadingScreen_Statics::NewProp_bShowOnSet = { "bShowOnSet", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(XRLoadingScreenFunctionLibrary_eventSetLoadingScreen_Parms), &Z_Construct_UFunction_UXRLoadingScreenFunctionLibrary_SetLoadingScreen_Statics::NewProp_bShowOnSet_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UXRLoadingScreenFunctionLibrary_SetLoadingScreen_Statics::NewProp_bShowLoadingMovie_SetBit(void* Obj)
	{
		((XRLoadingScreenFunctionLibrary_eventSetLoadingScreen_Parms*)Obj)->bShowLoadingMovie = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UXRLoadingScreenFunctionLibrary_SetLoadingScreen_Statics::NewProp_bShowLoadingMovie = { "bShowLoadingMovie", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(XRLoadingScreenFunctionLibrary_eventSetLoadingScreen_Parms), &Z_Construct_UFunction_UXRLoadingScreenFunctionLibrary_SetLoadingScreen_Statics::NewProp_bShowLoadingMovie_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UXRLoadingScreenFunctionLibrary_SetLoadingScreen_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XRLoadingScreenFunctionLibrary_eventSetLoadingScreen_Parms, Offset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UXRLoadingScreenFunctionLibrary_SetLoadingScreen_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XRLoadingScreenFunctionLibrary_eventSetLoadingScreen_Parms, Scale), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UXRLoadingScreenFunctionLibrary_SetLoadingScreen_Statics::NewProp_Texture = { "Texture", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XRLoadingScreenFunctionLibrary_eventSetLoadingScreen_Parms, Texture), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXRLoadingScreenFunctionLibrary_SetLoadingScreen_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXRLoadingScreenFunctionLibrary_SetLoadingScreen_Statics::NewProp_bShowOnSet,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXRLoadingScreenFunctionLibrary_SetLoadingScreen_Statics::NewProp_bShowLoadingMovie,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXRLoadingScreenFunctionLibrary_SetLoadingScreen_Statics::NewProp_Offset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXRLoadingScreenFunctionLibrary_SetLoadingScreen_Statics::NewProp_Scale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXRLoadingScreenFunctionLibrary_SetLoadingScreen_Statics::NewProp_Texture,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXRLoadingScreenFunctionLibrary_SetLoadingScreen_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input|HeadMountedDisplay|LoadingScreen" },
		{ "ModuleRelativePath", "Public/XRLoadingScreenFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXRLoadingScreenFunctionLibrary_SetLoadingScreen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXRLoadingScreenFunctionLibrary, nullptr, "SetLoadingScreen", nullptr, nullptr, sizeof(XRLoadingScreenFunctionLibrary_eventSetLoadingScreen_Parms), Z_Construct_UFunction_UXRLoadingScreenFunctionLibrary_SetLoadingScreen_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXRLoadingScreenFunctionLibrary_SetLoadingScreen_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXRLoadingScreenFunctionLibrary_SetLoadingScreen_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXRLoadingScreenFunctionLibrary_SetLoadingScreen_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXRLoadingScreenFunctionLibrary_SetLoadingScreen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXRLoadingScreenFunctionLibrary_SetLoadingScreen_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXRLoadingScreenFunctionLibrary_ShowLoadingScreen_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXRLoadingScreenFunctionLibrary_ShowLoadingScreen_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input|HeadMountedDisplay|LoadingScreen" },
		{ "Comment", "/**\n\x09 * Show the loading screen and override the VR display\n\x09 */" },
		{ "ModuleRelativePath", "Public/XRLoadingScreenFunctionLibrary.h" },
		{ "ToolTip", "Show the loading screen and override the VR display" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXRLoadingScreenFunctionLibrary_ShowLoadingScreen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXRLoadingScreenFunctionLibrary, nullptr, "ShowLoadingScreen", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXRLoadingScreenFunctionLibrary_ShowLoadingScreen_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXRLoadingScreenFunctionLibrary_ShowLoadingScreen_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXRLoadingScreenFunctionLibrary_ShowLoadingScreen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXRLoadingScreenFunctionLibrary_ShowLoadingScreen_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UXRLoadingScreenFunctionLibrary_NoRegister()
	{
		return UXRLoadingScreenFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UXRLoadingScreenFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UXRLoadingScreenFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_HeadMountedDisplay,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UXRLoadingScreenFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UXRLoadingScreenFunctionLibrary_AddLoadingScreenSplash, "AddLoadingScreenSplash" }, // 2833800451
		{ &Z_Construct_UFunction_UXRLoadingScreenFunctionLibrary_ClearLoadingScreenSplashes, "ClearLoadingScreenSplashes" }, // 4139352987
		{ &Z_Construct_UFunction_UXRLoadingScreenFunctionLibrary_HideLoadingScreen, "HideLoadingScreen" }, // 2051721433
		{ &Z_Construct_UFunction_UXRLoadingScreenFunctionLibrary_SetLoadingScreen, "SetLoadingScreen" }, // 1096361363
		{ &Z_Construct_UFunction_UXRLoadingScreenFunctionLibrary_ShowLoadingScreen, "ShowLoadingScreen" }, // 1203064709
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UXRLoadingScreenFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * XR Loading Screen Function Library \n */" },
		{ "IncludePath", "XRLoadingScreenFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/XRLoadingScreenFunctionLibrary.h" },
		{ "ToolTip", "XR Loading Screen Function Library" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UXRLoadingScreenFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UXRLoadingScreenFunctionLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UXRLoadingScreenFunctionLibrary_Statics::ClassParams = {
		&UXRLoadingScreenFunctionLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UXRLoadingScreenFunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UXRLoadingScreenFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UXRLoadingScreenFunctionLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UXRLoadingScreenFunctionLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UXRLoadingScreenFunctionLibrary, 438369545);
	template<> HEADMOUNTEDDISPLAY_API UClass* StaticClass<UXRLoadingScreenFunctionLibrary>()
	{
		return UXRLoadingScreenFunctionLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UXRLoadingScreenFunctionLibrary(Z_Construct_UClass_UXRLoadingScreenFunctionLibrary, &UXRLoadingScreenFunctionLibrary::StaticClass, TEXT("/Script/HeadMountedDisplay"), TEXT("UXRLoadingScreenFunctionLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UXRLoadingScreenFunctionLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
