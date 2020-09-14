// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ImgMedia/Public/ImgMediaSource.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeImgMediaSource() {}
// Cross Module References
	IMGMEDIA_API UClass* Z_Construct_UClass_UImgMediaSource_NoRegister();
	IMGMEDIA_API UClass* Z_Construct_UClass_UImgMediaSource();
	MEDIAASSETS_API UClass* Z_Construct_UClass_UBaseMediaSource();
	UPackage* Z_Construct_UPackage__Script_ImgMedia();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDirectoryPath();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameRate();
// End Cross Module References
	DEFINE_FUNCTION(UImgMediaSource::execSetSequencePath)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Path);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSequencePath(Z_Param_Path);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UImgMediaSource::execGetSequencePath)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetSequencePath();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UImgMediaSource::execGetProxies)
	{
		P_GET_TARRAY_REF(FString,Z_Param_Out_OutProxies);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetProxies(Z_Param_Out_OutProxies);
		P_NATIVE_END;
	}
	void UImgMediaSource::StaticRegisterNativesUImgMediaSource()
	{
		UClass* Class = UImgMediaSource::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetProxies", &UImgMediaSource::execGetProxies },
			{ "GetSequencePath", &UImgMediaSource::execGetSequencePath },
			{ "SetSequencePath", &UImgMediaSource::execSetSequencePath },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UImgMediaSource_GetProxies_Statics
	{
		struct ImgMediaSource_eventGetProxies_Parms
		{
			TArray<FString> OutProxies;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutProxies;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OutProxies_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UImgMediaSource_GetProxies_Statics::NewProp_OutProxies = { "OutProxies", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ImgMediaSource_eventGetProxies_Parms, OutProxies), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UImgMediaSource_GetProxies_Statics::NewProp_OutProxies_Inner = { "OutProxies", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UImgMediaSource_GetProxies_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImgMediaSource_GetProxies_Statics::NewProp_OutProxies,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImgMediaSource_GetProxies_Statics::NewProp_OutProxies_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UImgMediaSource_GetProxies_Statics::Function_MetaDataParams[] = {
		{ "Category", "ImgMedia|ImgMediaSource" },
		{ "Comment", "/**\n\x09 * Get the names of available proxy directories.\n\x09 *\n\x09 * @param OutProxies Will contain the names of available proxy directories, if any.\n\x09 * @see GetSequencePath\n\x09 */" },
		{ "ModuleRelativePath", "Public/ImgMediaSource.h" },
		{ "ToolTip", "Get the names of available proxy directories.\n\n@param OutProxies Will contain the names of available proxy directories, if any.\n@see GetSequencePath" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UImgMediaSource_GetProxies_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UImgMediaSource, nullptr, "GetProxies", nullptr, nullptr, sizeof(ImgMediaSource_eventGetProxies_Parms), Z_Construct_UFunction_UImgMediaSource_GetProxies_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UImgMediaSource_GetProxies_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UImgMediaSource_GetProxies_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UImgMediaSource_GetProxies_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UImgMediaSource_GetProxies()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UImgMediaSource_GetProxies_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UImgMediaSource_GetSequencePath_Statics
	{
		struct ImgMediaSource_eventGetSequencePath_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UImgMediaSource_GetSequencePath_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UImgMediaSource_GetSequencePath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ImgMediaSource_eventGetSequencePath_Parms, ReturnValue), METADATA_PARAMS(Z_Construct_UFunction_UImgMediaSource_GetSequencePath_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UImgMediaSource_GetSequencePath_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UImgMediaSource_GetSequencePath_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImgMediaSource_GetSequencePath_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UImgMediaSource_GetSequencePath_Statics::Function_MetaDataParams[] = {
		{ "Category", "ImgMedia|ImgMediaSource" },
		{ "Comment", "/**\n\x09 * Get the path to the image sequence directory to be played.\n\x09 *\n\x09 * @return The file path.\n\x09 * @see SetSequencePath\n\x09 */" },
		{ "ModuleRelativePath", "Public/ImgMediaSource.h" },
		{ "ToolTip", "Get the path to the image sequence directory to be played.\n\n@return The file path.\n@see SetSequencePath" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UImgMediaSource_GetSequencePath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UImgMediaSource, nullptr, "GetSequencePath", nullptr, nullptr, sizeof(ImgMediaSource_eventGetSequencePath_Parms), Z_Construct_UFunction_UImgMediaSource_GetSequencePath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UImgMediaSource_GetSequencePath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UImgMediaSource_GetSequencePath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UImgMediaSource_GetSequencePath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UImgMediaSource_GetSequencePath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UImgMediaSource_GetSequencePath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UImgMediaSource_SetSequencePath_Statics
	{
		struct ImgMediaSource_eventSetSequencePath_Parms
		{
			FString Path;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Path_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Path;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UImgMediaSource_SetSequencePath_Statics::NewProp_Path_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UImgMediaSource_SetSequencePath_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ImgMediaSource_eventSetSequencePath_Parms, Path), METADATA_PARAMS(Z_Construct_UFunction_UImgMediaSource_SetSequencePath_Statics::NewProp_Path_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UImgMediaSource_SetSequencePath_Statics::NewProp_Path_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UImgMediaSource_SetSequencePath_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImgMediaSource_SetSequencePath_Statics::NewProp_Path,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UImgMediaSource_SetSequencePath_Statics::Function_MetaDataParams[] = {
		{ "Category", "ImgMedia|ImgMediaSource" },
		{ "Comment", "/**\n\x09 * Set the path to the image sequence directory this source represents.\n\x09 *\n\x09 * @param Path The path to set.\n\x09 * @see GetSequencePath\n\x09 */" },
		{ "ModuleRelativePath", "Public/ImgMediaSource.h" },
		{ "ToolTip", "Set the path to the image sequence directory this source represents.\n\n@param Path The path to set.\n@see GetSequencePath" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UImgMediaSource_SetSequencePath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UImgMediaSource, nullptr, "SetSequencePath", nullptr, nullptr, sizeof(ImgMediaSource_eventSetSequencePath_Parms), Z_Construct_UFunction_UImgMediaSource_SetSequencePath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UImgMediaSource_SetSequencePath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UImgMediaSource_SetSequencePath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UImgMediaSource_SetSequencePath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UImgMediaSource_SetSequencePath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UImgMediaSource_SetSequencePath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UImgMediaSource_NoRegister()
	{
		return UImgMediaSource::StaticClass();
	}
	struct Z_Construct_UClass_UImgMediaSource_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SequencePath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SequencePath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProxyOverride_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ProxyOverride;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FrameRateOverride_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FrameRateOverride;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UImgMediaSource_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseMediaSource,
		(UObject* (*)())Z_Construct_UPackage__Script_ImgMedia,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UImgMediaSource_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UImgMediaSource_GetProxies, "GetProxies" }, // 3630014577
		{ &Z_Construct_UFunction_UImgMediaSource_GetSequencePath, "GetSequencePath" }, // 2481390948
		{ &Z_Construct_UFunction_UImgMediaSource_SetSequencePath, "SetSequencePath" }, // 3946419858
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UImgMediaSource_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Media source for EXR image sequences.\n *\n * Image sequence media sources point to a directory that contains a series of\n * image files in which each image represents a single frame of the sequence.\n * BMP, EXR, PNG and JPG images are currently supported. EXR image sequences\n * are optimized for performance. The first frame of an image sequence is used\n * to determine the image dimensions (all formats) and frame rate (EXR only).\n *\n * The image sequence directory may contain sub-directories, which are called\n * 'proxies'. Proxies can be used to provide alternative media for playback\n * during development and testing of a game. One common scenario is the use\n * of low resolution versions of image sequence media on computers that are\n * too slow or don't have enough storage to play the original high-res media.\n */" },
		{ "HideCategories", "Overrides Playback Object Object" },
		{ "IncludePath", "ImgMediaSource.h" },
		{ "ModuleRelativePath", "Public/ImgMediaSource.h" },
		{ "ToolTip", "Media source for EXR image sequences.\n\nImage sequence media sources point to a directory that contains a series of\nimage files in which each image represents a single frame of the sequence.\nBMP, EXR, PNG and JPG images are currently supported. EXR image sequences\nare optimized for performance. The first frame of an image sequence is used\nto determine the image dimensions (all formats) and frame rate (EXR only).\n\nThe image sequence directory may contain sub-directories, which are called\n'proxies'. Proxies can be used to provide alternative media for playback\nduring development and testing of a game. One common scenario is the use\nof low resolution versions of image sequence media on computers that are\ntoo slow or don't have enough storage to play the original high-res media." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UImgMediaSource_Statics::NewProp_SequencePath_MetaData[] = {
		{ "Category", "Sequence" },
		{ "Comment", "/** The directory that contains the image sequence files. */" },
		{ "ModuleRelativePath", "Public/ImgMediaSource.h" },
		{ "ToolTip", "The directory that contains the image sequence files." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UImgMediaSource_Statics::NewProp_SequencePath = { "SequencePath", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UImgMediaSource, SequencePath), Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(Z_Construct_UClass_UImgMediaSource_Statics::NewProp_SequencePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UImgMediaSource_Statics::NewProp_SequencePath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UImgMediaSource_Statics::NewProp_ProxyOverride_MetaData[] = {
		{ "Category", "Sequence" },
		{ "Comment", "/** Name of the proxy directory to use. */" },
		{ "ModuleRelativePath", "Public/ImgMediaSource.h" },
		{ "ToolTip", "Name of the proxy directory to use." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UImgMediaSource_Statics::NewProp_ProxyOverride = { "ProxyOverride", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UImgMediaSource, ProxyOverride), METADATA_PARAMS(Z_Construct_UClass_UImgMediaSource_Statics::NewProp_ProxyOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UImgMediaSource_Statics::NewProp_ProxyOverride_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UImgMediaSource_Statics::NewProp_FrameRateOverride_MetaData[] = {
		{ "Category", "Sequence" },
		{ "Comment", "/** Overrides the default frame rate stored in the image files (0/0 = do not override). */" },
		{ "ModuleRelativePath", "Public/ImgMediaSource.h" },
		{ "ToolTip", "Overrides the default frame rate stored in the image files (0/0 = do not override)." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UImgMediaSource_Statics::NewProp_FrameRateOverride = { "FrameRateOverride", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UImgMediaSource, FrameRateOverride), Z_Construct_UScriptStruct_FFrameRate, METADATA_PARAMS(Z_Construct_UClass_UImgMediaSource_Statics::NewProp_FrameRateOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UImgMediaSource_Statics::NewProp_FrameRateOverride_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UImgMediaSource_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UImgMediaSource_Statics::NewProp_SequencePath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UImgMediaSource_Statics::NewProp_ProxyOverride,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UImgMediaSource_Statics::NewProp_FrameRateOverride,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UImgMediaSource_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UImgMediaSource>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UImgMediaSource_Statics::ClassParams = {
		&UImgMediaSource::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UImgMediaSource_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UImgMediaSource_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UImgMediaSource_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UImgMediaSource_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UImgMediaSource()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UImgMediaSource_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UImgMediaSource, 1726564558);
	template<> IMGMEDIA_API UClass* StaticClass<UImgMediaSource>()
	{
		return UImgMediaSource::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UImgMediaSource(Z_Construct_UClass_UImgMediaSource, &UImgMediaSource::StaticClass, TEXT("/Script/ImgMedia"), TEXT("UImgMediaSource"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UImgMediaSource);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
