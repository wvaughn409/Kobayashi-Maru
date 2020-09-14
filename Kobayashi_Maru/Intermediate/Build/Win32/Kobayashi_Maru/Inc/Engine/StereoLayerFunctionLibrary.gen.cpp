// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Kismet/StereoLayerFunctionLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStereoLayerFunctionLibrary() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UStereoLayerFunctionLibrary_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStereoLayerFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_Engine();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UStereoLayerFunctionLibrary::execEnableAutoLoadingSplashScreen)
	{
		P_GET_UBOOL(Z_Param_InAutoShowEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		UStereoLayerFunctionLibrary::EnableAutoLoadingSplashScreen(Z_Param_InAutoShowEnabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStereoLayerFunctionLibrary::execHideSplashScreen)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UStereoLayerFunctionLibrary::HideSplashScreen();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStereoLayerFunctionLibrary::execShowSplashScreen)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UStereoLayerFunctionLibrary::ShowSplashScreen();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStereoLayerFunctionLibrary::execSetSplashScreen)
	{
		P_GET_OBJECT(UTexture,Z_Param_Texture);
		P_GET_STRUCT(FVector2D,Z_Param_Scale);
		P_GET_STRUCT(FVector,Z_Param_Offset);
		P_GET_UBOOL(Z_Param_bShowLoadingMovie);
		P_GET_UBOOL(Z_Param_bShowOnSet);
		P_FINISH;
		P_NATIVE_BEGIN;
		UStereoLayerFunctionLibrary::SetSplashScreen(Z_Param_Texture,Z_Param_Scale,Z_Param_Offset,Z_Param_bShowLoadingMovie,Z_Param_bShowOnSet);
		P_NATIVE_END;
	}
	void UStereoLayerFunctionLibrary::StaticRegisterNativesUStereoLayerFunctionLibrary()
	{
		UClass* Class = UStereoLayerFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EnableAutoLoadingSplashScreen", &UStereoLayerFunctionLibrary::execEnableAutoLoadingSplashScreen },
			{ "HideSplashScreen", &UStereoLayerFunctionLibrary::execHideSplashScreen },
			{ "SetSplashScreen", &UStereoLayerFunctionLibrary::execSetSplashScreen },
			{ "ShowSplashScreen", &UStereoLayerFunctionLibrary::execShowSplashScreen },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UStereoLayerFunctionLibrary_EnableAutoLoadingSplashScreen_Statics
	{
		struct StereoLayerFunctionLibrary_eventEnableAutoLoadingSplashScreen_Parms
		{
			bool InAutoShowEnabled;
		};
		static void NewProp_InAutoShowEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_InAutoShowEnabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UStereoLayerFunctionLibrary_EnableAutoLoadingSplashScreen_Statics::NewProp_InAutoShowEnabled_SetBit(void* Obj)
	{
		((StereoLayerFunctionLibrary_eventEnableAutoLoadingSplashScreen_Parms*)Obj)->InAutoShowEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStereoLayerFunctionLibrary_EnableAutoLoadingSplashScreen_Statics::NewProp_InAutoShowEnabled = { "InAutoShowEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(StereoLayerFunctionLibrary_eventEnableAutoLoadingSplashScreen_Parms), &Z_Construct_UFunction_UStereoLayerFunctionLibrary_EnableAutoLoadingSplashScreen_Statics::NewProp_InAutoShowEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStereoLayerFunctionLibrary_EnableAutoLoadingSplashScreen_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStereoLayerFunctionLibrary_EnableAutoLoadingSplashScreen_Statics::NewProp_InAutoShowEnabled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStereoLayerFunctionLibrary_EnableAutoLoadingSplashScreen_Statics::Function_MetaDataParams[] = {
		{ "Category", "VR" },
		{ "Comment", "/**\n\x09 * Enables/disables splash screen to be automatically shown when LoadMap is called.\n\x09 *\n\x09 * @param\x09""bAutoShowEnabled\x09(in)\x09True, if automatic showing of splash screens is enabled when map is being loaded.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Kismet/StereoLayerFunctionLibrary.h" },
		{ "ToolTip", "Enables/disables splash screen to be automatically shown when LoadMap is called.\n\n@param       bAutoShowEnabled        (in)    True, if automatic showing of splash screens is enabled when map is being loaded." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStereoLayerFunctionLibrary_EnableAutoLoadingSplashScreen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStereoLayerFunctionLibrary, nullptr, "EnableAutoLoadingSplashScreen", nullptr, nullptr, sizeof(StereoLayerFunctionLibrary_eventEnableAutoLoadingSplashScreen_Parms), Z_Construct_UFunction_UStereoLayerFunctionLibrary_EnableAutoLoadingSplashScreen_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStereoLayerFunctionLibrary_EnableAutoLoadingSplashScreen_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStereoLayerFunctionLibrary_EnableAutoLoadingSplashScreen_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStereoLayerFunctionLibrary_EnableAutoLoadingSplashScreen_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStereoLayerFunctionLibrary_EnableAutoLoadingSplashScreen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStereoLayerFunctionLibrary_EnableAutoLoadingSplashScreen_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStereoLayerFunctionLibrary_HideSplashScreen_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStereoLayerFunctionLibrary_HideSplashScreen_Statics::Function_MetaDataParams[] = {
		{ "Category", "VR" },
		{ "Comment", "/**\n\x09* Hide the splash screen and return to normal display.\n\x09*/" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Please use Hide Loading Screen instead." },
		{ "ModuleRelativePath", "Classes/Kismet/StereoLayerFunctionLibrary.h" },
		{ "ToolTip", "Hide the splash screen and return to normal display." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStereoLayerFunctionLibrary_HideSplashScreen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStereoLayerFunctionLibrary, nullptr, "HideSplashScreen", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStereoLayerFunctionLibrary_HideSplashScreen_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStereoLayerFunctionLibrary_HideSplashScreen_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStereoLayerFunctionLibrary_HideSplashScreen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStereoLayerFunctionLibrary_HideSplashScreen_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStereoLayerFunctionLibrary_SetSplashScreen_Statics
	{
		struct StereoLayerFunctionLibrary_eventSetSplashScreen_Parms
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
	void Z_Construct_UFunction_UStereoLayerFunctionLibrary_SetSplashScreen_Statics::NewProp_bShowOnSet_SetBit(void* Obj)
	{
		((StereoLayerFunctionLibrary_eventSetSplashScreen_Parms*)Obj)->bShowOnSet = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStereoLayerFunctionLibrary_SetSplashScreen_Statics::NewProp_bShowOnSet = { "bShowOnSet", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(StereoLayerFunctionLibrary_eventSetSplashScreen_Parms), &Z_Construct_UFunction_UStereoLayerFunctionLibrary_SetSplashScreen_Statics::NewProp_bShowOnSet_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UStereoLayerFunctionLibrary_SetSplashScreen_Statics::NewProp_bShowLoadingMovie_SetBit(void* Obj)
	{
		((StereoLayerFunctionLibrary_eventSetSplashScreen_Parms*)Obj)->bShowLoadingMovie = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStereoLayerFunctionLibrary_SetSplashScreen_Statics::NewProp_bShowLoadingMovie = { "bShowLoadingMovie", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(StereoLayerFunctionLibrary_eventSetSplashScreen_Parms), &Z_Construct_UFunction_UStereoLayerFunctionLibrary_SetSplashScreen_Statics::NewProp_bShowLoadingMovie_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStereoLayerFunctionLibrary_SetSplashScreen_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StereoLayerFunctionLibrary_eventSetSplashScreen_Parms, Offset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStereoLayerFunctionLibrary_SetSplashScreen_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StereoLayerFunctionLibrary_eventSetSplashScreen_Parms, Scale), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStereoLayerFunctionLibrary_SetSplashScreen_Statics::NewProp_Texture = { "Texture", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StereoLayerFunctionLibrary_eventSetSplashScreen_Parms, Texture), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStereoLayerFunctionLibrary_SetSplashScreen_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStereoLayerFunctionLibrary_SetSplashScreen_Statics::NewProp_bShowOnSet,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStereoLayerFunctionLibrary_SetSplashScreen_Statics::NewProp_bShowLoadingMovie,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStereoLayerFunctionLibrary_SetSplashScreen_Statics::NewProp_Offset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStereoLayerFunctionLibrary_SetSplashScreen_Statics::NewProp_Scale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStereoLayerFunctionLibrary_SetSplashScreen_Statics::NewProp_Texture,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStereoLayerFunctionLibrary_SetSplashScreen_Statics::Function_MetaDataParams[] = {
		{ "Category", "VR" },
		{ "Comment", "/**\n\x09* Set splash screen attributes\n\x09*\n\x09* @param Texture\x09\x09\x09(in) A texture to be used for the splash. B8R8G8A8 format.\n\x09* @param Scale\x09\x09\x09\x09(in) Scale multiplier of the splash screen.\n\x09* @param Offset\x09\x09\x09\x09(in) Position in UE Units to offset the Splash Screen by\n\x09* @param ShowLoadingMovie\x09(in) Whether the splash screen presents loading movies.\n\x09*/" },
		{ "CPP_Default_bShowLoadingMovie", "false" },
		{ "CPP_Default_bShowOnSet", "false" },
		{ "CPP_Default_Offset", "0.000000,0.000000,0.000000" },
		{ "CPP_Default_Scale", "(X=1.000,Y=1.000)" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Please use Add Loading Screen Splash instead." },
		{ "ModuleRelativePath", "Classes/Kismet/StereoLayerFunctionLibrary.h" },
		{ "ToolTip", "Set splash screen attributes\n\n@param Texture                        (in) A texture to be used for the splash. B8R8G8A8 format.\n@param Scale                          (in) Scale multiplier of the splash screen.\n@param Offset                         (in) Position in UE Units to offset the Splash Screen by\n@param ShowLoadingMovie       (in) Whether the splash screen presents loading movies." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStereoLayerFunctionLibrary_SetSplashScreen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStereoLayerFunctionLibrary, nullptr, "SetSplashScreen", nullptr, nullptr, sizeof(StereoLayerFunctionLibrary_eventSetSplashScreen_Parms), Z_Construct_UFunction_UStereoLayerFunctionLibrary_SetSplashScreen_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStereoLayerFunctionLibrary_SetSplashScreen_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStereoLayerFunctionLibrary_SetSplashScreen_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStereoLayerFunctionLibrary_SetSplashScreen_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStereoLayerFunctionLibrary_SetSplashScreen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStereoLayerFunctionLibrary_SetSplashScreen_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStereoLayerFunctionLibrary_ShowSplashScreen_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStereoLayerFunctionLibrary_ShowSplashScreen_Statics::Function_MetaDataParams[] = {
		{ "Category", "VR" },
		{ "Comment", "/**\n\x09* Show the splash screen and override the VR display\n\x09*/" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Please use Show Loading Screen instead." },
		{ "ModuleRelativePath", "Classes/Kismet/StereoLayerFunctionLibrary.h" },
		{ "ToolTip", "Show the splash screen and override the VR display" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStereoLayerFunctionLibrary_ShowSplashScreen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStereoLayerFunctionLibrary, nullptr, "ShowSplashScreen", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStereoLayerFunctionLibrary_ShowSplashScreen_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStereoLayerFunctionLibrary_ShowSplashScreen_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStereoLayerFunctionLibrary_ShowSplashScreen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStereoLayerFunctionLibrary_ShowSplashScreen_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UStereoLayerFunctionLibrary_NoRegister()
	{
		return UStereoLayerFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UStereoLayerFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStereoLayerFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UStereoLayerFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UStereoLayerFunctionLibrary_EnableAutoLoadingSplashScreen, "EnableAutoLoadingSplashScreen" }, // 2943351378
		{ &Z_Construct_UFunction_UStereoLayerFunctionLibrary_HideSplashScreen, "HideSplashScreen" }, // 3529877309
		{ &Z_Construct_UFunction_UStereoLayerFunctionLibrary_SetSplashScreen, "SetSplashScreen" }, // 3835942513
		{ &Z_Construct_UFunction_UStereoLayerFunctionLibrary_ShowSplashScreen, "ShowSplashScreen" }, // 166027574
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStereoLayerFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * StereoLayer Extensions Function Library\n */" },
		{ "IncludePath", "Kismet/StereoLayerFunctionLibrary.h" },
		{ "ModuleRelativePath", "Classes/Kismet/StereoLayerFunctionLibrary.h" },
		{ "ToolTip", "StereoLayer Extensions Function Library" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStereoLayerFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStereoLayerFunctionLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UStereoLayerFunctionLibrary_Statics::ClassParams = {
		&UStereoLayerFunctionLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UStereoLayerFunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UStereoLayerFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UStereoLayerFunctionLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UStereoLayerFunctionLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UStereoLayerFunctionLibrary, 3293429180);
	template<> ENGINE_API UClass* StaticClass<UStereoLayerFunctionLibrary>()
	{
		return UStereoLayerFunctionLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UStereoLayerFunctionLibrary(Z_Construct_UClass_UStereoLayerFunctionLibrary, &UStereoLayerFunctionLibrary::StaticClass, TEXT("/Script/Engine"), TEXT("UStereoLayerFunctionLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStereoLayerFunctionLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
