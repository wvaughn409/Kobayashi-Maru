// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InteractiveToolsFramework/Public/BaseGizmos/GizmoBaseComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGizmoBaseComponent() {}
// Cross Module References
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoBaseComponent_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoBaseComponent();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent();
	UPackage* Z_Construct_UPackage__Script_InteractiveToolsFramework();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
// End Cross Module References
	DEFINE_FUNCTION(UGizmoBaseComponent::execUpdateWorldLocalState)
	{
		P_GET_UBOOL(Z_Param_bWorldIn);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateWorldLocalState(Z_Param_bWorldIn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGizmoBaseComponent::execUpdateHoverState)
	{
		P_GET_UBOOL(Z_Param_bHoveringIn);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateHoverState(Z_Param_bHoveringIn);
		P_NATIVE_END;
	}
	void UGizmoBaseComponent::StaticRegisterNativesUGizmoBaseComponent()
	{
		UClass* Class = UGizmoBaseComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "UpdateHoverState", &UGizmoBaseComponent::execUpdateHoverState },
			{ "UpdateWorldLocalState", &UGizmoBaseComponent::execUpdateWorldLocalState },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGizmoBaseComponent_UpdateHoverState_Statics
	{
		struct GizmoBaseComponent_eventUpdateHoverState_Parms
		{
			bool bHoveringIn;
		};
		static void NewProp_bHoveringIn_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHoveringIn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UGizmoBaseComponent_UpdateHoverState_Statics::NewProp_bHoveringIn_SetBit(void* Obj)
	{
		((GizmoBaseComponent_eventUpdateHoverState_Parms*)Obj)->bHoveringIn = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGizmoBaseComponent_UpdateHoverState_Statics::NewProp_bHoveringIn = { "bHoveringIn", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GizmoBaseComponent_eventUpdateHoverState_Parms), &Z_Construct_UFunction_UGizmoBaseComponent_UpdateHoverState_Statics::NewProp_bHoveringIn_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGizmoBaseComponent_UpdateHoverState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGizmoBaseComponent_UpdateHoverState_Statics::NewProp_bHoveringIn,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGizmoBaseComponent_UpdateHoverState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoBaseComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGizmoBaseComponent_UpdateHoverState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGizmoBaseComponent, nullptr, "UpdateHoverState", nullptr, nullptr, sizeof(GizmoBaseComponent_eventUpdateHoverState_Parms), Z_Construct_UFunction_UGizmoBaseComponent_UpdateHoverState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGizmoBaseComponent_UpdateHoverState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGizmoBaseComponent_UpdateHoverState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGizmoBaseComponent_UpdateHoverState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGizmoBaseComponent_UpdateHoverState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGizmoBaseComponent_UpdateHoverState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGizmoBaseComponent_UpdateWorldLocalState_Statics
	{
		struct GizmoBaseComponent_eventUpdateWorldLocalState_Parms
		{
			bool bWorldIn;
		};
		static void NewProp_bWorldIn_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWorldIn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UGizmoBaseComponent_UpdateWorldLocalState_Statics::NewProp_bWorldIn_SetBit(void* Obj)
	{
		((GizmoBaseComponent_eventUpdateWorldLocalState_Parms*)Obj)->bWorldIn = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGizmoBaseComponent_UpdateWorldLocalState_Statics::NewProp_bWorldIn = { "bWorldIn", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GizmoBaseComponent_eventUpdateWorldLocalState_Parms), &Z_Construct_UFunction_UGizmoBaseComponent_UpdateWorldLocalState_Statics::NewProp_bWorldIn_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGizmoBaseComponent_UpdateWorldLocalState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGizmoBaseComponent_UpdateWorldLocalState_Statics::NewProp_bWorldIn,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGizmoBaseComponent_UpdateWorldLocalState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoBaseComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGizmoBaseComponent_UpdateWorldLocalState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGizmoBaseComponent, nullptr, "UpdateWorldLocalState", nullptr, nullptr, sizeof(GizmoBaseComponent_eventUpdateWorldLocalState_Parms), Z_Construct_UFunction_UGizmoBaseComponent_UpdateWorldLocalState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGizmoBaseComponent_UpdateWorldLocalState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGizmoBaseComponent_UpdateWorldLocalState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGizmoBaseComponent_UpdateWorldLocalState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGizmoBaseComponent_UpdateWorldLocalState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGizmoBaseComponent_UpdateWorldLocalState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UGizmoBaseComponent_NoRegister()
	{
		return UGizmoBaseComponent::StaticClass();
	}
	struct Z_Construct_UClass_UGizmoBaseComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PixelHitDistanceThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PixelHitDistanceThreshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HoverSizeMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HoverSizeMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Color;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGizmoBaseComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPrimitiveComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGizmoBaseComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGizmoBaseComponent_UpdateHoverState, "UpdateHoverState" }, // 1550232364
		{ &Z_Construct_UFunction_UGizmoBaseComponent_UpdateWorldLocalState, "UpdateWorldLocalState" }, // 2655105709
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoBaseComponent_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "Utility" },
		{ "Comment", "/**\n * Base class for simple Components intended to be used as part of 3D Gizmos.\n * Contains common properties and utility functions.\n * This class does nothing by itself, use subclasses like UGizmoCircleComponent\n */" },
		{ "HideCategories", "Physics Collision Mobile Mobility VirtualTexture Trigger" },
		{ "IncludePath", "BaseGizmos/GizmoBaseComponent.h" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoBaseComponent.h" },
		{ "ToolTip", "Base class for simple Components intended to be used as part of 3D Gizmos.\nContains common properties and utility functions.\nThis class does nothing by itself, use subclasses like UGizmoCircleComponent" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoBaseComponent_Statics::NewProp_PixelHitDistanceThreshold_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoBaseComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGizmoBaseComponent_Statics::NewProp_PixelHitDistanceThreshold = { "PixelHitDistanceThreshold", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGizmoBaseComponent, PixelHitDistanceThreshold), METADATA_PARAMS(Z_Construct_UClass_UGizmoBaseComponent_Statics::NewProp_PixelHitDistanceThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoBaseComponent_Statics::NewProp_PixelHitDistanceThreshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoBaseComponent_Statics::NewProp_HoverSizeMultiplier_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoBaseComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGizmoBaseComponent_Statics::NewProp_HoverSizeMultiplier = { "HoverSizeMultiplier", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGizmoBaseComponent, HoverSizeMultiplier), METADATA_PARAMS(Z_Construct_UClass_UGizmoBaseComponent_Statics::NewProp_HoverSizeMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoBaseComponent_Statics::NewProp_HoverSizeMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoBaseComponent_Statics::NewProp_Color_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoBaseComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGizmoBaseComponent_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGizmoBaseComponent, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UGizmoBaseComponent_Statics::NewProp_Color_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoBaseComponent_Statics::NewProp_Color_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGizmoBaseComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoBaseComponent_Statics::NewProp_PixelHitDistanceThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoBaseComponent_Statics::NewProp_HoverSizeMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoBaseComponent_Statics::NewProp_Color,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGizmoBaseComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGizmoBaseComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGizmoBaseComponent_Statics::ClassParams = {
		&UGizmoBaseComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UGizmoBaseComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoBaseComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UGizmoBaseComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoBaseComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGizmoBaseComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGizmoBaseComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGizmoBaseComponent, 1096739114);
	template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<UGizmoBaseComponent>()
	{
		return UGizmoBaseComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGizmoBaseComponent(Z_Construct_UClass_UGizmoBaseComponent, &UGizmoBaseComponent::StaticClass, TEXT("/Script/InteractiveToolsFramework"), TEXT("UGizmoBaseComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGizmoBaseComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
