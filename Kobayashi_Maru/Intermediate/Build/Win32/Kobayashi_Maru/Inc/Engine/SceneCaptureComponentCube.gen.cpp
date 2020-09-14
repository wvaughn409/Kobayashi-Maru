// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Components/SceneCaptureComponentCube.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSceneCaptureComponentCube() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_USceneCaptureComponentCube_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneCaptureComponentCube();
	ENGINE_API UClass* Z_Construct_UClass_USceneCaptureComponent();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTargetCube_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USceneCaptureComponentCube::execCaptureScene)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CaptureScene();
		P_NATIVE_END;
	}
	void USceneCaptureComponentCube::StaticRegisterNativesUSceneCaptureComponentCube()
	{
		UClass* Class = USceneCaptureComponentCube::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CaptureScene", &USceneCaptureComponentCube::execCaptureScene },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USceneCaptureComponentCube_CaptureScene_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USceneCaptureComponentCube_CaptureScene_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|SceneCapture" },
		{ "Comment", "/** \n\x09 * Render the scene to the texture target immediately.  \n\x09 * This should not be used if bCaptureEveryFrame is enabled, or the scene capture will render redundantly. \n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/SceneCaptureComponentCube.h" },
		{ "ToolTip", "Render the scene to the texture target immediately.\nThis should not be used if bCaptureEveryFrame is enabled, or the scene capture will render redundantly." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USceneCaptureComponentCube_CaptureScene_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USceneCaptureComponentCube, nullptr, "CaptureScene", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USceneCaptureComponentCube_CaptureScene_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USceneCaptureComponentCube_CaptureScene_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USceneCaptureComponentCube_CaptureScene()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USceneCaptureComponentCube_CaptureScene_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USceneCaptureComponentCube_NoRegister()
	{
		return USceneCaptureComponentCube::StaticClass();
	}
	struct Z_Construct_UClass_USceneCaptureComponentCube_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IPD_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_IPD;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextureTargetODS_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TextureTargetODS;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextureTargetRight_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TextureTargetRight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextureTargetLeft_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TextureTargetLeft;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCaptureRotation_MetaData[];
#endif
		static void NewProp_bCaptureRotation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCaptureRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextureTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TextureTarget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USceneCaptureComponentCube_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneCaptureComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USceneCaptureComponentCube_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USceneCaptureComponentCube_CaptureScene, "CaptureScene" }, // 3700163768
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USceneCaptureComponentCube_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Rendering" },
		{ "Comment", "/**\n *\x09Used to capture a 'snapshot' of the scene from a 6 planes and feed it to a render target.\n */" },
		{ "HideCategories", "Collision Object Physics SceneComponent Collision Object Physics SceneComponent Mobility Trigger PhysicsVolume" },
		{ "IncludePath", "Components/SceneCaptureComponentCube.h" },
		{ "ModuleRelativePath", "Classes/Components/SceneCaptureComponentCube.h" },
		{ "ToolTip", "Used to capture a 'snapshot' of the scene from a 6 planes and feed it to a render target." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USceneCaptureComponentCube_Statics::NewProp_IPD_MetaData[] = {
		{ "Category", "SceneCapture|Omni-directional Stereo Capture" },
		{ "ClampMax", "16.0" },
		{ "ClampMin", "0.0" },
		{ "DisplayName", "Interpupillary Distance (cm)" },
		{ "ModuleRelativePath", "Classes/Components/SceneCaptureComponentCube.h" },
		{ "UIMax", "16.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USceneCaptureComponentCube_Statics::NewProp_IPD = { "IPD", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USceneCaptureComponentCube, IPD), METADATA_PARAMS(Z_Construct_UClass_USceneCaptureComponentCube_Statics::NewProp_IPD_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USceneCaptureComponentCube_Statics::NewProp_IPD_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USceneCaptureComponentCube_Statics::NewProp_TextureTargetODS_MetaData[] = {
		{ "Category", "SceneCapture|Omni-directional Stereo Capture" },
		{ "ModuleRelativePath", "Classes/Components/SceneCaptureComponentCube.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USceneCaptureComponentCube_Statics::NewProp_TextureTargetODS = { "TextureTargetODS", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USceneCaptureComponentCube, TextureTargetODS), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USceneCaptureComponentCube_Statics::NewProp_TextureTargetODS_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USceneCaptureComponentCube_Statics::NewProp_TextureTargetODS_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USceneCaptureComponentCube_Statics::NewProp_TextureTargetRight_MetaData[] = {
		{ "Category", "SceneCapture|Omni-directional Stereo Capture" },
		{ "ModuleRelativePath", "Classes/Components/SceneCaptureComponentCube.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USceneCaptureComponentCube_Statics::NewProp_TextureTargetRight = { "TextureTargetRight", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USceneCaptureComponentCube, TextureTargetRight), Z_Construct_UClass_UTextureRenderTargetCube_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USceneCaptureComponentCube_Statics::NewProp_TextureTargetRight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USceneCaptureComponentCube_Statics::NewProp_TextureTargetRight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USceneCaptureComponentCube_Statics::NewProp_TextureTargetLeft_MetaData[] = {
		{ "Category", "SceneCapture|Omni-directional Stereo Capture" },
		{ "Comment", "/**\n\x09\x09Omni-directional Stereo Capture\n\n\x09\x09If vr.ODSCapture is enabled and both left, right and ODS render targets are set,\n\x09\x09we'll ignore the texture target and instead do an omni-directional stereo capture.\n\x09\x09Warped cube maps will be rendered into the left and right texture targets using the \n\x09\x09IPD property for stereo offset. We will then reconstruct a stereo lat-long with the left\n\x09\x09""eye stacked on top of the right eye in the ODS target.\n\x09\x09See: https://developers.google.com/vr/jump/rendering-ods-content.pdf\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Components/SceneCaptureComponentCube.h" },
		{ "ToolTip", "Omni-directional Stereo Capture\n\nIf vr.ODSCapture is enabled and both left, right and ODS render targets are set,\nwe'll ignore the texture target and instead do an omni-directional stereo capture.\nWarped cube maps will be rendered into the left and right texture targets using the\nIPD property for stereo offset. We will then reconstruct a stereo lat-long with the left\neye stacked on top of the right eye in the ODS target.\nSee: https://developers.google.com/vr/jump/rendering-ods-content.pdf" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USceneCaptureComponentCube_Statics::NewProp_TextureTargetLeft = { "TextureTargetLeft", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USceneCaptureComponentCube, TextureTargetLeft), Z_Construct_UClass_UTextureRenderTargetCube_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USceneCaptureComponentCube_Statics::NewProp_TextureTargetLeft_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USceneCaptureComponentCube_Statics::NewProp_TextureTargetLeft_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USceneCaptureComponentCube_Statics::NewProp_bCaptureRotation_MetaData[] = {
		{ "Category", "SceneCapture" },
		{ "Comment", "/** Preserve the rotation of the actor when updating the capture. The default behavior is to capture the cube aligned to the world axis system.  */" },
		{ "ModuleRelativePath", "Classes/Components/SceneCaptureComponentCube.h" },
		{ "ToolTip", "Preserve the rotation of the actor when updating the capture. The default behavior is to capture the cube aligned to the world axis system." },
	};
#endif
	void Z_Construct_UClass_USceneCaptureComponentCube_Statics::NewProp_bCaptureRotation_SetBit(void* Obj)
	{
		((USceneCaptureComponentCube*)Obj)->bCaptureRotation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USceneCaptureComponentCube_Statics::NewProp_bCaptureRotation = { "bCaptureRotation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USceneCaptureComponentCube), &Z_Construct_UClass_USceneCaptureComponentCube_Statics::NewProp_bCaptureRotation_SetBit, METADATA_PARAMS(Z_Construct_UClass_USceneCaptureComponentCube_Statics::NewProp_bCaptureRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USceneCaptureComponentCube_Statics::NewProp_bCaptureRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USceneCaptureComponentCube_Statics::NewProp_TextureTarget_MetaData[] = {
		{ "Category", "SceneCapture" },
		{ "Comment", "/** Temporary render target that can be used by the editor. */" },
		{ "ModuleRelativePath", "Classes/Components/SceneCaptureComponentCube.h" },
		{ "ToolTip", "Temporary render target that can be used by the editor." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USceneCaptureComponentCube_Statics::NewProp_TextureTarget = { "TextureTarget", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USceneCaptureComponentCube, TextureTarget), Z_Construct_UClass_UTextureRenderTargetCube_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USceneCaptureComponentCube_Statics::NewProp_TextureTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USceneCaptureComponentCube_Statics::NewProp_TextureTarget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USceneCaptureComponentCube_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USceneCaptureComponentCube_Statics::NewProp_IPD,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USceneCaptureComponentCube_Statics::NewProp_TextureTargetODS,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USceneCaptureComponentCube_Statics::NewProp_TextureTargetRight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USceneCaptureComponentCube_Statics::NewProp_TextureTargetLeft,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USceneCaptureComponentCube_Statics::NewProp_bCaptureRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USceneCaptureComponentCube_Statics::NewProp_TextureTarget,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USceneCaptureComponentCube_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USceneCaptureComponentCube>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USceneCaptureComponentCube_Statics::ClassParams = {
		&USceneCaptureComponentCube::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USceneCaptureComponentCube_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USceneCaptureComponentCube_Statics::PropPointers),
		0,
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_USceneCaptureComponentCube_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USceneCaptureComponentCube_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USceneCaptureComponentCube()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USceneCaptureComponentCube_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USceneCaptureComponentCube, 1481286619);
	template<> ENGINE_API UClass* StaticClass<USceneCaptureComponentCube>()
	{
		return USceneCaptureComponentCube::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USceneCaptureComponentCube(Z_Construct_UClass_USceneCaptureComponentCube, &USceneCaptureComponentCube::StaticClass, TEXT("/Script/Engine"), TEXT("USceneCaptureComponentCube"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USceneCaptureComponentCube);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
