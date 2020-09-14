// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MediaAssets/Public/MediaTexture.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMediaTexture() {}
// Cross Module References
	MEDIAASSETS_API UClass* Z_Construct_UClass_UMediaTexture_NoRegister();
	MEDIAASSETS_API UClass* Z_Construct_UClass_UMediaTexture();
	ENGINE_API UClass* Z_Construct_UClass_UTexture();
	UPackage* Z_Construct_UPackage__Script_MediaAssets();
	MEDIAASSETS_API UClass* Z_Construct_UClass_UMediaPlayer_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_TextureAddress();
// End Cross Module References
	DEFINE_FUNCTION(UMediaTexture::execSetMediaPlayer)
	{
		P_GET_OBJECT(UMediaPlayer,Z_Param_NewMediaPlayer);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMediaPlayer(Z_Param_NewMediaPlayer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMediaTexture::execGetWidth)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetWidth();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMediaTexture::execGetMediaPlayer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMediaPlayer**)Z_Param__Result=P_THIS->GetMediaPlayer();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMediaTexture::execGetHeight)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetHeight();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMediaTexture::execGetAspectRatio)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetAspectRatio();
		P_NATIVE_END;
	}
	void UMediaTexture::StaticRegisterNativesUMediaTexture()
	{
		UClass* Class = UMediaTexture::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAspectRatio", &UMediaTexture::execGetAspectRatio },
			{ "GetHeight", &UMediaTexture::execGetHeight },
			{ "GetMediaPlayer", &UMediaTexture::execGetMediaPlayer },
			{ "GetWidth", &UMediaTexture::execGetWidth },
			{ "SetMediaPlayer", &UMediaTexture::execSetMediaPlayer },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMediaTexture_GetAspectRatio_Statics
	{
		struct MediaTexture_eventGetAspectRatio_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMediaTexture_GetAspectRatio_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MediaTexture_eventGetAspectRatio_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMediaTexture_GetAspectRatio_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaTexture_GetAspectRatio_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMediaTexture_GetAspectRatio_Statics::Function_MetaDataParams[] = {
		{ "Category", "Media|MediaTexture" },
		{ "Comment", "/**\n\x09 * Gets the current aspect ratio of the texture.\n\x09 *\n\x09 * @return Texture aspect ratio.\n\x09 * @see GetHeight, GetWidth\n\x09 */" },
		{ "ModuleRelativePath", "Public/MediaTexture.h" },
		{ "ToolTip", "Gets the current aspect ratio of the texture.\n\n@return Texture aspect ratio.\n@see GetHeight, GetWidth" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaTexture_GetAspectRatio_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaTexture, nullptr, "GetAspectRatio", nullptr, nullptr, sizeof(MediaTexture_eventGetAspectRatio_Parms), Z_Construct_UFunction_UMediaTexture_GetAspectRatio_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaTexture_GetAspectRatio_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMediaTexture_GetAspectRatio_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaTexture_GetAspectRatio_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMediaTexture_GetAspectRatio()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMediaTexture_GetAspectRatio_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMediaTexture_GetHeight_Statics
	{
		struct MediaTexture_eventGetHeight_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMediaTexture_GetHeight_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MediaTexture_eventGetHeight_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMediaTexture_GetHeight_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaTexture_GetHeight_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMediaTexture_GetHeight_Statics::Function_MetaDataParams[] = {
		{ "Category", "Media|MediaTexture" },
		{ "Comment", "/**\n\x09 * Gets the current height of the texture.\n\x09 *\n\x09 * @return Texture height (in pixels).\n\x09 * @see GetAspectRatio, GetWidth\n\x09 */" },
		{ "ModuleRelativePath", "Public/MediaTexture.h" },
		{ "ToolTip", "Gets the current height of the texture.\n\n@return Texture height (in pixels).\n@see GetAspectRatio, GetWidth" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaTexture_GetHeight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaTexture, nullptr, "GetHeight", nullptr, nullptr, sizeof(MediaTexture_eventGetHeight_Parms), Z_Construct_UFunction_UMediaTexture_GetHeight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaTexture_GetHeight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMediaTexture_GetHeight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaTexture_GetHeight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMediaTexture_GetHeight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMediaTexture_GetHeight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMediaTexture_GetMediaPlayer_Statics
	{
		struct MediaTexture_eventGetMediaPlayer_Parms
		{
			UMediaPlayer* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMediaTexture_GetMediaPlayer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MediaTexture_eventGetMediaPlayer_Parms, ReturnValue), Z_Construct_UClass_UMediaPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMediaTexture_GetMediaPlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaTexture_GetMediaPlayer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMediaTexture_GetMediaPlayer_Statics::Function_MetaDataParams[] = {
		{ "Category", "Media|MediaTexture" },
		{ "Comment", "/**\n\x09 * Get the media player that provides the video samples.\n\x09 *\n\x09 * @return The texture's media player, or nullptr if not set.\n\x09 * @see SetMediaPlayer\n\x09 */" },
		{ "ModuleRelativePath", "Public/MediaTexture.h" },
		{ "ToolTip", "Get the media player that provides the video samples.\n\n@return The texture's media player, or nullptr if not set.\n@see SetMediaPlayer" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaTexture_GetMediaPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaTexture, nullptr, "GetMediaPlayer", nullptr, nullptr, sizeof(MediaTexture_eventGetMediaPlayer_Parms), Z_Construct_UFunction_UMediaTexture_GetMediaPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaTexture_GetMediaPlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMediaTexture_GetMediaPlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaTexture_GetMediaPlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMediaTexture_GetMediaPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMediaTexture_GetMediaPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMediaTexture_GetWidth_Statics
	{
		struct MediaTexture_eventGetWidth_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMediaTexture_GetWidth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MediaTexture_eventGetWidth_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMediaTexture_GetWidth_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaTexture_GetWidth_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMediaTexture_GetWidth_Statics::Function_MetaDataParams[] = {
		{ "Category", "Media|MediaTexture" },
		{ "Comment", "/**\n\x09 * Gets the current width of the texture.\n\x09 *\n\x09 * @return Texture width (in pixels).\n\x09 * @see GetAspectRatio, GetHeight\n\x09 */" },
		{ "ModuleRelativePath", "Public/MediaTexture.h" },
		{ "ToolTip", "Gets the current width of the texture.\n\n@return Texture width (in pixels).\n@see GetAspectRatio, GetHeight" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaTexture_GetWidth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaTexture, nullptr, "GetWidth", nullptr, nullptr, sizeof(MediaTexture_eventGetWidth_Parms), Z_Construct_UFunction_UMediaTexture_GetWidth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaTexture_GetWidth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMediaTexture_GetWidth_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaTexture_GetWidth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMediaTexture_GetWidth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMediaTexture_GetWidth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMediaTexture_SetMediaPlayer_Statics
	{
		struct MediaTexture_eventSetMediaPlayer_Parms
		{
			UMediaPlayer* NewMediaPlayer;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewMediaPlayer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMediaTexture_SetMediaPlayer_Statics::NewProp_NewMediaPlayer = { "NewMediaPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MediaTexture_eventSetMediaPlayer_Parms, NewMediaPlayer), Z_Construct_UClass_UMediaPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMediaTexture_SetMediaPlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaTexture_SetMediaPlayer_Statics::NewProp_NewMediaPlayer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMediaTexture_SetMediaPlayer_Statics::Function_MetaDataParams[] = {
		{ "Category", "Media|MediaTexture" },
		{ "Comment", "/**\n\x09 * Set the media player that provides the video samples.\n\x09 *\n\x09 * @param NewMediaPlayer The player to set.\n\x09 * @see GetMediaPlayer\n\x09 */" },
		{ "ModuleRelativePath", "Public/MediaTexture.h" },
		{ "ToolTip", "Set the media player that provides the video samples.\n\n@param NewMediaPlayer The player to set.\n@see GetMediaPlayer" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaTexture_SetMediaPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaTexture, nullptr, "SetMediaPlayer", nullptr, nullptr, sizeof(MediaTexture_eventSetMediaPlayer_Parms), Z_Construct_UFunction_UMediaTexture_SetMediaPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaTexture_SetMediaPlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMediaTexture_SetMediaPlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaTexture_SetMediaPlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMediaTexture_SetMediaPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMediaTexture_SetMediaPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMediaTexture_NoRegister()
	{
		return UMediaTexture::StaticClass();
	}
	struct Z_Construct_UClass_UMediaTexture_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MediaPlayer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MediaPlayer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumMips_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NumMips;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnableGenMips_MetaData[];
#endif
		static void NewProp_EnableGenMips_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_EnableGenMips;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClearColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ClearColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AutoClear_MetaData[];
#endif
		static void NewProp_AutoClear_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_AutoClear;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AddressY_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AddressY;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AddressX_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AddressX;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMediaTexture_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTexture,
		(UObject* (*)())Z_Construct_UPackage__Script_MediaAssets,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMediaTexture_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMediaTexture_GetAspectRatio, "GetAspectRatio" }, // 1657000493
		{ &Z_Construct_UFunction_UMediaTexture_GetHeight, "GetHeight" }, // 2734950854
		{ &Z_Construct_UFunction_UMediaTexture_GetMediaPlayer, "GetMediaPlayer" }, // 3317326696
		{ &Z_Construct_UFunction_UMediaTexture_GetWidth, "GetWidth" }, // 666866578
		{ &Z_Construct_UFunction_UMediaTexture_SetMediaPlayer, "SetMediaPlayer" }, // 2894660717
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMediaTexture_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Implements a texture asset for rendering video tracks from UMediaPlayer assets.\n */" },
		{ "HideCategories", "Adjustments Compositing LevelOfDetail ImportSettings Object" },
		{ "IncludePath", "MediaTexture.h" },
		{ "ModuleRelativePath", "Public/MediaTexture.h" },
		{ "ToolTip", "Implements a texture asset for rendering video tracks from UMediaPlayer assets." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMediaTexture_Statics::NewProp_MediaPlayer_MetaData[] = {
		{ "Category", "Media" },
		{ "Comment", "/**\n\x09 * The media player asset associated with this texture.\n\x09 *\n\x09 * This property is meant for design-time convenience. To change the\n\x09 * associated media player at run-time, use the SetMediaPlayer method.\n\x09 *\n\x09 * @see SetMediaPlayer\n\x09 */" },
		{ "ModuleRelativePath", "Public/MediaTexture.h" },
		{ "ToolTip", "The media player asset associated with this texture.\n\nThis property is meant for design-time convenience. To change the\nassociated media player at run-time, use the SetMediaPlayer method.\n\n@see SetMediaPlayer" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMediaTexture_Statics::NewProp_MediaPlayer = { "MediaPlayer", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMediaTexture, MediaPlayer), Z_Construct_UClass_UMediaPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMediaTexture_Statics::NewProp_MediaPlayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMediaTexture_Statics::NewProp_MediaPlayer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMediaTexture_Statics::NewProp_NumMips_MetaData[] = {
		{ "Category", "MediaTexture" },
		{ "Comment", "/** The number of mips to use (default = 1). */" },
		{ "DisplayName", "Total number of Mipmaps to output" },
		{ "ModuleRelativePath", "Public/MediaTexture.h" },
		{ "ToolTip", "The number of mips to use (default = 1)." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMediaTexture_Statics::NewProp_NumMips = { "NumMips", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMediaTexture, NumMips), nullptr, METADATA_PARAMS(Z_Construct_UClass_UMediaTexture_Statics::NewProp_NumMips_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMediaTexture_Statics::NewProp_NumMips_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMediaTexture_Statics::NewProp_EnableGenMips_MetaData[] = {
		{ "Category", "MediaTexture" },
		{ "Comment", "/** Basic enablement for mip generation. */" },
		{ "DisplayName", "Enable Mipmap generation" },
		{ "ModuleRelativePath", "Public/MediaTexture.h" },
		{ "ToolTip", "Basic enablement for mip generation." },
	};
#endif
	void Z_Construct_UClass_UMediaTexture_Statics::NewProp_EnableGenMips_SetBit(void* Obj)
	{
		((UMediaTexture*)Obj)->EnableGenMips = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMediaTexture_Statics::NewProp_EnableGenMips = { "EnableGenMips", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMediaTexture), &Z_Construct_UClass_UMediaTexture_Statics::NewProp_EnableGenMips_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMediaTexture_Statics::NewProp_EnableGenMips_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMediaTexture_Statics::NewProp_EnableGenMips_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMediaTexture_Statics::NewProp_ClearColor_MetaData[] = {
		{ "Category", "MediaTexture" },
		{ "Comment", "/** The color used to clear the texture if AutoClear is enabled (default = black). */" },
		{ "ModuleRelativePath", "Public/MediaTexture.h" },
		{ "ToolTip", "The color used to clear the texture if AutoClear is enabled (default = black)." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMediaTexture_Statics::NewProp_ClearColor = { "ClearColor", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMediaTexture, ClearColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UMediaTexture_Statics::NewProp_ClearColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMediaTexture_Statics::NewProp_ClearColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMediaTexture_Statics::NewProp_AutoClear_MetaData[] = {
		{ "Category", "MediaTexture" },
		{ "Comment", "/** Whether to clear the texture when no media is being played (default = enabled). */" },
		{ "ModuleRelativePath", "Public/MediaTexture.h" },
		{ "ToolTip", "Whether to clear the texture when no media is being played (default = enabled)." },
	};
#endif
	void Z_Construct_UClass_UMediaTexture_Statics::NewProp_AutoClear_SetBit(void* Obj)
	{
		((UMediaTexture*)Obj)->AutoClear = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMediaTexture_Statics::NewProp_AutoClear = { "AutoClear", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMediaTexture), &Z_Construct_UClass_UMediaTexture_Statics::NewProp_AutoClear_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMediaTexture_Statics::NewProp_AutoClear_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMediaTexture_Statics::NewProp_AutoClear_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMediaTexture_Statics::NewProp_AddressY_MetaData[] = {
		{ "Category", "MediaTexture" },
		{ "Comment", "/** The addressing mode to use for the Y axis. */" },
		{ "DisplayName", "Y-axis Tiling Method" },
		{ "ModuleRelativePath", "Public/MediaTexture.h" },
		{ "ToolTip", "The addressing mode to use for the Y axis." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMediaTexture_Statics::NewProp_AddressY = { "AddressY", nullptr, (EPropertyFlags)0x0010050000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMediaTexture, AddressY), Z_Construct_UEnum_Engine_TextureAddress, METADATA_PARAMS(Z_Construct_UClass_UMediaTexture_Statics::NewProp_AddressY_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMediaTexture_Statics::NewProp_AddressY_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMediaTexture_Statics::NewProp_AddressX_MetaData[] = {
		{ "Category", "MediaTexture" },
		{ "Comment", "/** The addressing mode to use for the X axis. */" },
		{ "DisplayName", "X-axis Tiling Method" },
		{ "ModuleRelativePath", "Public/MediaTexture.h" },
		{ "ToolTip", "The addressing mode to use for the X axis." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMediaTexture_Statics::NewProp_AddressX = { "AddressX", nullptr, (EPropertyFlags)0x0010050000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMediaTexture, AddressX), Z_Construct_UEnum_Engine_TextureAddress, METADATA_PARAMS(Z_Construct_UClass_UMediaTexture_Statics::NewProp_AddressX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMediaTexture_Statics::NewProp_AddressX_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMediaTexture_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMediaTexture_Statics::NewProp_MediaPlayer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMediaTexture_Statics::NewProp_NumMips,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMediaTexture_Statics::NewProp_EnableGenMips,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMediaTexture_Statics::NewProp_ClearColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMediaTexture_Statics::NewProp_AutoClear,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMediaTexture_Statics::NewProp_AddressY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMediaTexture_Statics::NewProp_AddressX,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMediaTexture_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMediaTexture>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMediaTexture_Statics::ClassParams = {
		&UMediaTexture::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMediaTexture_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMediaTexture_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMediaTexture_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMediaTexture_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMediaTexture()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMediaTexture_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMediaTexture, 750871226);
	template<> MEDIAASSETS_API UClass* StaticClass<UMediaTexture>()
	{
		return UMediaTexture::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMediaTexture(Z_Construct_UClass_UMediaTexture, &UMediaTexture::StaticClass, TEXT("/Script/MediaAssets"), TEXT("UMediaTexture"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMediaTexture);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
