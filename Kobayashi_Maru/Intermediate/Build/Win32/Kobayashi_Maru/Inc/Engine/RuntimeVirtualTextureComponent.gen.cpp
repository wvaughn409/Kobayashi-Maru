// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Components/RuntimeVirtualTextureComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRuntimeVirtualTextureComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_URuntimeVirtualTextureComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_URuntimeVirtualTextureComponent();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	UPackage* Z_Construct_UPackage__Script_Engine();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_URuntimeVirtualTexture_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(URuntimeVirtualTextureComponent::execGetVirtualTextureTransform)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTransform*)Z_Param__Result=P_THIS->GetVirtualTextureTransform();
		P_NATIVE_END;
	}
	void URuntimeVirtualTextureComponent::StaticRegisterNativesURuntimeVirtualTextureComponent()
	{
		UClass* Class = URuntimeVirtualTextureComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetVirtualTextureTransform", &URuntimeVirtualTextureComponent::execGetVirtualTextureTransform },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_URuntimeVirtualTextureComponent_GetVirtualTextureTransform_Statics
	{
		struct RuntimeVirtualTextureComponent_eventGetVirtualTextureTransform_Parms
		{
			FTransform ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeVirtualTextureComponent_GetVirtualTextureTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeVirtualTextureComponent_eventGetVirtualTextureTransform_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeVirtualTextureComponent_GetVirtualTextureTransform_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeVirtualTextureComponent_GetVirtualTextureTransform_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeVirtualTextureComponent_GetVirtualTextureTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "VirtualTexture" },
		{ "Comment", "/** Get the runtime virtual texture UV to World transform on this component. */" },
		{ "ModuleRelativePath", "Classes/Components/RuntimeVirtualTextureComponent.h" },
		{ "ToolTip", "Get the runtime virtual texture UV to World transform on this component." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeVirtualTextureComponent_GetVirtualTextureTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeVirtualTextureComponent, nullptr, "GetVirtualTextureTransform", nullptr, nullptr, sizeof(RuntimeVirtualTextureComponent_eventGetVirtualTextureTransform_Parms), Z_Construct_UFunction_URuntimeVirtualTextureComponent_GetVirtualTextureTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeVirtualTextureComponent_GetVirtualTextureTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeVirtualTextureComponent_GetVirtualTextureTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeVirtualTextureComponent_GetVirtualTextureTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeVirtualTextureComponent_GetVirtualTextureTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URuntimeVirtualTextureComponent_GetVirtualTextureTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_URuntimeVirtualTextureComponent_NoRegister()
	{
		return URuntimeVirtualTextureComponent::StaticClass();
	}
	struct Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoundsSourceActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BoundsSourceActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseStreamingLowMipsInEditor_MetaData[];
#endif
		static void NewProp_bUseStreamingLowMipsInEditor_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseStreamingLowMipsInEditor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VirtualTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VirtualTexture;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URuntimeVirtualTextureComponent_GetVirtualTextureTransform, "GetVirtualTextureTransform" }, // 2284711425
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Rendering" },
		{ "Comment", "/** Component used to place a URuntimeVirtualTexture in the world. */" },
		{ "HideCategories", "Activation Collision Cooking Mobility LOD Object Physics Rendering Trigger PhysicsVolume" },
		{ "IncludePath", "Components/RuntimeVirtualTextureComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/Components/RuntimeVirtualTextureComponent.h" },
		{ "ToolTip", "Component used to place a URuntimeVirtualTexture in the world." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::NewProp_BoundsSourceActor_MetaData[] = {
		{ "Category", "TransformFromBounds" },
		{ "Comment", "/** Actor to copy the bounds from to set up the transform. */" },
		{ "DisplayName", "Source Actor" },
		{ "ModuleRelativePath", "Classes/Components/RuntimeVirtualTextureComponent.h" },
		{ "ToolTip", "Actor to copy the bounds from to set up the transform." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::NewProp_BoundsSourceActor = { "BoundsSourceActor", nullptr, (EPropertyFlags)0x0020080000200001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URuntimeVirtualTextureComponent, BoundsSourceActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::NewProp_BoundsSourceActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::NewProp_BoundsSourceActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::NewProp_bUseStreamingLowMipsInEditor_MetaData[] = {
		{ "Category", "VirtualTexture" },
		{ "Comment", "/** Use any streaming low mips when rendering in editor. Set true to view and debug the baked streaming low mips. */" },
		{ "ModuleRelativePath", "Classes/Components/RuntimeVirtualTextureComponent.h" },
		{ "ToolTip", "Use any streaming low mips when rendering in editor. Set true to view and debug the baked streaming low mips." },
	};
#endif
	void Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::NewProp_bUseStreamingLowMipsInEditor_SetBit(void* Obj)
	{
		((URuntimeVirtualTextureComponent*)Obj)->bUseStreamingLowMipsInEditor = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::NewProp_bUseStreamingLowMipsInEditor = { "bUseStreamingLowMipsInEditor", nullptr, (EPropertyFlags)0x00200c0000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(URuntimeVirtualTextureComponent), &Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::NewProp_bUseStreamingLowMipsInEditor_SetBit, METADATA_PARAMS(Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::NewProp_bUseStreamingLowMipsInEditor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::NewProp_bUseStreamingLowMipsInEditor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::NewProp_VirtualTexture_MetaData[] = {
		{ "Category", "VirtualTexture" },
		{ "Comment", "/** The virtual texture object to use. */" },
		{ "ModuleRelativePath", "Classes/Components/RuntimeVirtualTextureComponent.h" },
		{ "ToolTip", "The virtual texture object to use." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::NewProp_VirtualTexture = { "VirtualTexture", nullptr, (EPropertyFlags)0x0020080000200015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URuntimeVirtualTextureComponent, VirtualTexture), Z_Construct_UClass_URuntimeVirtualTexture_NoRegister, METADATA_PARAMS(Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::NewProp_VirtualTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::NewProp_VirtualTexture_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::NewProp_BoundsSourceActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::NewProp_bUseStreamingLowMipsInEditor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::NewProp_VirtualTexture,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URuntimeVirtualTextureComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::ClassParams = {
		&URuntimeVirtualTextureComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::PropPointers),
		0,
		0x00B030A4u,
		METADATA_PARAMS(Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URuntimeVirtualTextureComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(URuntimeVirtualTextureComponent, 266721005);
	template<> ENGINE_API UClass* StaticClass<URuntimeVirtualTextureComponent>()
	{
		return URuntimeVirtualTextureComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_URuntimeVirtualTextureComponent(Z_Construct_UClass_URuntimeVirtualTextureComponent, &URuntimeVirtualTextureComponent::StaticClass, TEXT("/Script/Engine"), TEXT("URuntimeVirtualTextureComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(URuntimeVirtualTextureComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
