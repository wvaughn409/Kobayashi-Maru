// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Components/DecalComponent.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDecalComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UDecalComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDecalComponent();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	DEFINE_FUNCTION(UDecalComponent::execCreateDynamicMaterialInstance)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMaterialInstanceDynamic**)Z_Param__Result=P_THIS->CreateDynamicMaterialInstance();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDecalComponent::execGetDecalMaterial)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMaterialInterface**)Z_Param__Result=P_THIS->GetDecalMaterial();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDecalComponent::execSetDecalMaterial)
	{
		P_GET_OBJECT(UMaterialInterface,Z_Param_NewDecalMaterial);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDecalMaterial(Z_Param_NewDecalMaterial);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDecalComponent::execSetSortOrder)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSortOrder(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDecalComponent::execSetFadeScreenSize)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewFadeScreenSize);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetFadeScreenSize(Z_Param_NewFadeScreenSize);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDecalComponent::execSetFadeIn)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_StartDelay);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Duaration);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetFadeIn(Z_Param_StartDelay,Z_Param_Duaration);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDecalComponent::execSetFadeOut)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_StartDelay);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
		P_GET_UBOOL(Z_Param_DestroyOwnerAfterFade);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetFadeOut(Z_Param_StartDelay,Z_Param_Duration,Z_Param_DestroyOwnerAfterFade);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDecalComponent::execGetFadeInDuration)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetFadeInDuration();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDecalComponent::execGetFadeInStartDelay)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetFadeInStartDelay();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDecalComponent::execGetFadeDuration)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetFadeDuration();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDecalComponent::execGetFadeStartDelay)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetFadeStartDelay();
		P_NATIVE_END;
	}
	void UDecalComponent::StaticRegisterNativesUDecalComponent()
	{
		UClass* Class = UDecalComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateDynamicMaterialInstance", &UDecalComponent::execCreateDynamicMaterialInstance },
			{ "GetDecalMaterial", &UDecalComponent::execGetDecalMaterial },
			{ "GetFadeDuration", &UDecalComponent::execGetFadeDuration },
			{ "GetFadeInDuration", &UDecalComponent::execGetFadeInDuration },
			{ "GetFadeInStartDelay", &UDecalComponent::execGetFadeInStartDelay },
			{ "GetFadeStartDelay", &UDecalComponent::execGetFadeStartDelay },
			{ "SetDecalMaterial", &UDecalComponent::execSetDecalMaterial },
			{ "SetFadeIn", &UDecalComponent::execSetFadeIn },
			{ "SetFadeOut", &UDecalComponent::execSetFadeOut },
			{ "SetFadeScreenSize", &UDecalComponent::execSetFadeScreenSize },
			{ "SetSortOrder", &UDecalComponent::execSetSortOrder },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDecalComponent_CreateDynamicMaterialInstance_Statics
	{
		struct DecalComponent_eventCreateDynamicMaterialInstance_Parms
		{
			UMaterialInstanceDynamic* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDecalComponent_CreateDynamicMaterialInstance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DecalComponent_eventCreateDynamicMaterialInstance_Parms, ReturnValue), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDecalComponent_CreateDynamicMaterialInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDecalComponent_CreateDynamicMaterialInstance_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDecalComponent_CreateDynamicMaterialInstance_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|Decal" },
		{ "Comment", "/** Utility to allocate a new Dynamic Material Instance, set its parent to the currently applied material, and assign it */" },
		{ "ModuleRelativePath", "Classes/Components/DecalComponent.h" },
		{ "ToolTip", "Utility to allocate a new Dynamic Material Instance, set its parent to the currently applied material, and assign it" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDecalComponent_CreateDynamicMaterialInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDecalComponent, nullptr, "CreateDynamicMaterialInstance", nullptr, nullptr, sizeof(DecalComponent_eventCreateDynamicMaterialInstance_Parms), Z_Construct_UFunction_UDecalComponent_CreateDynamicMaterialInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDecalComponent_CreateDynamicMaterialInstance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDecalComponent_CreateDynamicMaterialInstance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDecalComponent_CreateDynamicMaterialInstance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDecalComponent_CreateDynamicMaterialInstance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDecalComponent_CreateDynamicMaterialInstance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDecalComponent_GetDecalMaterial_Statics
	{
		struct DecalComponent_eventGetDecalMaterial_Parms
		{
			UMaterialInterface* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDecalComponent_GetDecalMaterial_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DecalComponent_eventGetDecalMaterial_Parms, ReturnValue), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDecalComponent_GetDecalMaterial_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDecalComponent_GetDecalMaterial_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDecalComponent_GetDecalMaterial_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|Decal" },
		{ "Comment", "/** Accessor for decal material */" },
		{ "ModuleRelativePath", "Classes/Components/DecalComponent.h" },
		{ "ToolTip", "Accessor for decal material" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDecalComponent_GetDecalMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDecalComponent, nullptr, "GetDecalMaterial", nullptr, nullptr, sizeof(DecalComponent_eventGetDecalMaterial_Parms), Z_Construct_UFunction_UDecalComponent_GetDecalMaterial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDecalComponent_GetDecalMaterial_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDecalComponent_GetDecalMaterial_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDecalComponent_GetDecalMaterial_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDecalComponent_GetDecalMaterial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDecalComponent_GetDecalMaterial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDecalComponent_GetFadeDuration_Statics
	{
		struct DecalComponent_eventGetFadeDuration_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDecalComponent_GetFadeDuration_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DecalComponent_eventGetFadeDuration_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDecalComponent_GetFadeDuration_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDecalComponent_GetFadeDuration_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDecalComponent_GetFadeDuration_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|Decal" },
		{ "ModuleRelativePath", "Classes/Components/DecalComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDecalComponent_GetFadeDuration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDecalComponent, nullptr, "GetFadeDuration", nullptr, nullptr, sizeof(DecalComponent_eventGetFadeDuration_Parms), Z_Construct_UFunction_UDecalComponent_GetFadeDuration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDecalComponent_GetFadeDuration_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDecalComponent_GetFadeDuration_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDecalComponent_GetFadeDuration_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDecalComponent_GetFadeDuration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDecalComponent_GetFadeDuration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDecalComponent_GetFadeInDuration_Statics
	{
		struct DecalComponent_eventGetFadeInDuration_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDecalComponent_GetFadeInDuration_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DecalComponent_eventGetFadeInDuration_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDecalComponent_GetFadeInDuration_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDecalComponent_GetFadeInDuration_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDecalComponent_GetFadeInDuration_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|Decal" },
		{ "ModuleRelativePath", "Classes/Components/DecalComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDecalComponent_GetFadeInDuration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDecalComponent, nullptr, "GetFadeInDuration", nullptr, nullptr, sizeof(DecalComponent_eventGetFadeInDuration_Parms), Z_Construct_UFunction_UDecalComponent_GetFadeInDuration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDecalComponent_GetFadeInDuration_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDecalComponent_GetFadeInDuration_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDecalComponent_GetFadeInDuration_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDecalComponent_GetFadeInDuration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDecalComponent_GetFadeInDuration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDecalComponent_GetFadeInStartDelay_Statics
	{
		struct DecalComponent_eventGetFadeInStartDelay_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDecalComponent_GetFadeInStartDelay_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DecalComponent_eventGetFadeInStartDelay_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDecalComponent_GetFadeInStartDelay_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDecalComponent_GetFadeInStartDelay_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDecalComponent_GetFadeInStartDelay_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|Decal" },
		{ "ModuleRelativePath", "Classes/Components/DecalComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDecalComponent_GetFadeInStartDelay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDecalComponent, nullptr, "GetFadeInStartDelay", nullptr, nullptr, sizeof(DecalComponent_eventGetFadeInStartDelay_Parms), Z_Construct_UFunction_UDecalComponent_GetFadeInStartDelay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDecalComponent_GetFadeInStartDelay_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDecalComponent_GetFadeInStartDelay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDecalComponent_GetFadeInStartDelay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDecalComponent_GetFadeInStartDelay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDecalComponent_GetFadeInStartDelay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDecalComponent_GetFadeStartDelay_Statics
	{
		struct DecalComponent_eventGetFadeStartDelay_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDecalComponent_GetFadeStartDelay_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DecalComponent_eventGetFadeStartDelay_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDecalComponent_GetFadeStartDelay_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDecalComponent_GetFadeStartDelay_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDecalComponent_GetFadeStartDelay_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|Decal" },
		{ "ModuleRelativePath", "Classes/Components/DecalComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDecalComponent_GetFadeStartDelay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDecalComponent, nullptr, "GetFadeStartDelay", nullptr, nullptr, sizeof(DecalComponent_eventGetFadeStartDelay_Parms), Z_Construct_UFunction_UDecalComponent_GetFadeStartDelay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDecalComponent_GetFadeStartDelay_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDecalComponent_GetFadeStartDelay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDecalComponent_GetFadeStartDelay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDecalComponent_GetFadeStartDelay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDecalComponent_GetFadeStartDelay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDecalComponent_SetDecalMaterial_Statics
	{
		struct DecalComponent_eventSetDecalMaterial_Parms
		{
			UMaterialInterface* NewDecalMaterial;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewDecalMaterial;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDecalComponent_SetDecalMaterial_Statics::NewProp_NewDecalMaterial = { "NewDecalMaterial", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DecalComponent_eventSetDecalMaterial_Parms, NewDecalMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDecalComponent_SetDecalMaterial_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDecalComponent_SetDecalMaterial_Statics::NewProp_NewDecalMaterial,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDecalComponent_SetDecalMaterial_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|Decal" },
		{ "Comment", "/** setting decal material on decal component. This will force the decal to reattach */" },
		{ "ModuleRelativePath", "Classes/Components/DecalComponent.h" },
		{ "ToolTip", "setting decal material on decal component. This will force the decal to reattach" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDecalComponent_SetDecalMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDecalComponent, nullptr, "SetDecalMaterial", nullptr, nullptr, sizeof(DecalComponent_eventSetDecalMaterial_Parms), Z_Construct_UFunction_UDecalComponent_SetDecalMaterial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDecalComponent_SetDecalMaterial_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDecalComponent_SetDecalMaterial_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDecalComponent_SetDecalMaterial_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDecalComponent_SetDecalMaterial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDecalComponent_SetDecalMaterial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDecalComponent_SetFadeIn_Statics
	{
		struct DecalComponent_eventSetFadeIn_Parms
		{
			float StartDelay;
			float Duaration;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Duaration;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StartDelay;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDecalComponent_SetFadeIn_Statics::NewProp_Duaration = { "Duaration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DecalComponent_eventSetFadeIn_Parms, Duaration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDecalComponent_SetFadeIn_Statics::NewProp_StartDelay = { "StartDelay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DecalComponent_eventSetFadeIn_Parms, StartDelay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDecalComponent_SetFadeIn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDecalComponent_SetFadeIn_Statics::NewProp_Duaration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDecalComponent_SetFadeIn_Statics::NewProp_StartDelay,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDecalComponent_SetFadeIn_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|Decal" },
		{ "ModuleRelativePath", "Classes/Components/DecalComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDecalComponent_SetFadeIn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDecalComponent, nullptr, "SetFadeIn", nullptr, nullptr, sizeof(DecalComponent_eventSetFadeIn_Parms), Z_Construct_UFunction_UDecalComponent_SetFadeIn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDecalComponent_SetFadeIn_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDecalComponent_SetFadeIn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDecalComponent_SetFadeIn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDecalComponent_SetFadeIn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDecalComponent_SetFadeIn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDecalComponent_SetFadeOut_Statics
	{
		struct DecalComponent_eventSetFadeOut_Parms
		{
			float StartDelay;
			float Duration;
			bool DestroyOwnerAfterFade;
		};
		static void NewProp_DestroyOwnerAfterFade_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DestroyOwnerAfterFade;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Duration;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StartDelay;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UDecalComponent_SetFadeOut_Statics::NewProp_DestroyOwnerAfterFade_SetBit(void* Obj)
	{
		((DecalComponent_eventSetFadeOut_Parms*)Obj)->DestroyOwnerAfterFade = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDecalComponent_SetFadeOut_Statics::NewProp_DestroyOwnerAfterFade = { "DestroyOwnerAfterFade", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DecalComponent_eventSetFadeOut_Parms), &Z_Construct_UFunction_UDecalComponent_SetFadeOut_Statics::NewProp_DestroyOwnerAfterFade_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDecalComponent_SetFadeOut_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DecalComponent_eventSetFadeOut_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDecalComponent_SetFadeOut_Statics::NewProp_StartDelay = { "StartDelay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DecalComponent_eventSetFadeOut_Parms, StartDelay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDecalComponent_SetFadeOut_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDecalComponent_SetFadeOut_Statics::NewProp_DestroyOwnerAfterFade,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDecalComponent_SetFadeOut_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDecalComponent_SetFadeOut_Statics::NewProp_StartDelay,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDecalComponent_SetFadeOut_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|Decal" },
		{ "Comment", "/**\n\x09* Sets the decal's fade start time, duration and if the owning actor should be destroyed after the decal is fully faded out.\n\x09* The default value of 0 for FadeStartDelay and FadeDuration makes the decal persistent. See DecalLifetimeOpacity material \n\x09* node to control the look of \"fading out.\"\n\x09*\n\x09* @param StartDelay - Time in seconds to wait before beginning to fade out the decal.\n\x09* @param Duration - Time in second for the decal to fade out.\n\x09* @param DestroyOwnerAfterFade - Should the owning actor automatically be destroyed after it is completely faded out.\n\x09*/" },
		{ "CPP_Default_DestroyOwnerAfterFade", "true" },
		{ "ModuleRelativePath", "Classes/Components/DecalComponent.h" },
		{ "ToolTip", "Sets the decal's fade start time, duration and if the owning actor should be destroyed after the decal is fully faded out.\nThe default value of 0 for FadeStartDelay and FadeDuration makes the decal persistent. See DecalLifetimeOpacity material\nnode to control the look of \"fading out.\"\n\n@param StartDelay - Time in seconds to wait before beginning to fade out the decal.\n@param Duration - Time in second for the decal to fade out.\n@param DestroyOwnerAfterFade - Should the owning actor automatically be destroyed after it is completely faded out." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDecalComponent_SetFadeOut_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDecalComponent, nullptr, "SetFadeOut", nullptr, nullptr, sizeof(DecalComponent_eventSetFadeOut_Parms), Z_Construct_UFunction_UDecalComponent_SetFadeOut_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDecalComponent_SetFadeOut_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDecalComponent_SetFadeOut_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDecalComponent_SetFadeOut_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDecalComponent_SetFadeOut()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDecalComponent_SetFadeOut_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDecalComponent_SetFadeScreenSize_Statics
	{
		struct DecalComponent_eventSetFadeScreenSize_Parms
		{
			float NewFadeScreenSize;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewFadeScreenSize;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDecalComponent_SetFadeScreenSize_Statics::NewProp_NewFadeScreenSize = { "NewFadeScreenSize", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DecalComponent_eventSetFadeScreenSize_Parms, NewFadeScreenSize), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDecalComponent_SetFadeScreenSize_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDecalComponent_SetFadeScreenSize_Statics::NewProp_NewFadeScreenSize,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDecalComponent_SetFadeScreenSize_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|Decal" },
		{ "Comment", "/** Set the FadeScreenSize for this decal component */" },
		{ "ModuleRelativePath", "Classes/Components/DecalComponent.h" },
		{ "ToolTip", "Set the FadeScreenSize for this decal component" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDecalComponent_SetFadeScreenSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDecalComponent, nullptr, "SetFadeScreenSize", nullptr, nullptr, sizeof(DecalComponent_eventSetFadeScreenSize_Parms), Z_Construct_UFunction_UDecalComponent_SetFadeScreenSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDecalComponent_SetFadeScreenSize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDecalComponent_SetFadeScreenSize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDecalComponent_SetFadeScreenSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDecalComponent_SetFadeScreenSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDecalComponent_SetFadeScreenSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDecalComponent_SetSortOrder_Statics
	{
		struct DecalComponent_eventSetSortOrder_Parms
		{
			int32 Value;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDecalComponent_SetSortOrder_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DecalComponent_eventSetSortOrder_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDecalComponent_SetSortOrder_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDecalComponent_SetSortOrder_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDecalComponent_SetSortOrder_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|Decal" },
		{ "Comment", "/** Sets the sort order for the decal component. Higher values draw later (on top). This will force the decal to reattach */" },
		{ "ModuleRelativePath", "Classes/Components/DecalComponent.h" },
		{ "ToolTip", "Sets the sort order for the decal component. Higher values draw later (on top). This will force the decal to reattach" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDecalComponent_SetSortOrder_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDecalComponent, nullptr, "SetSortOrder", nullptr, nullptr, sizeof(DecalComponent_eventSetSortOrder_Parms), Z_Construct_UFunction_UDecalComponent_SetSortOrder_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDecalComponent_SetSortOrder_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDecalComponent_SetSortOrder_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDecalComponent_SetSortOrder_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDecalComponent_SetSortOrder()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDecalComponent_SetSortOrder_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UDecalComponent_NoRegister()
	{
		return UDecalComponent::StaticClass();
	}
	struct Z_Construct_UClass_UDecalComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DecalSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DecalSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDestroyOwnerAfterFade_MetaData[];
#endif
		static void NewProp_bDestroyOwnerAfterFade_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDestroyOwnerAfterFade;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FadeInStartDelay_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FadeInStartDelay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FadeInDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FadeInDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FadeDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FadeDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FadeStartDelay_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FadeStartDelay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FadeScreenSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FadeScreenSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SortOrder_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SortOrder;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DecalMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DecalMaterial;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDecalComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDecalComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDecalComponent_CreateDynamicMaterialInstance, "CreateDynamicMaterialInstance" }, // 2083800360
		{ &Z_Construct_UFunction_UDecalComponent_GetDecalMaterial, "GetDecalMaterial" }, // 813752087
		{ &Z_Construct_UFunction_UDecalComponent_GetFadeDuration, "GetFadeDuration" }, // 1350664017
		{ &Z_Construct_UFunction_UDecalComponent_GetFadeInDuration, "GetFadeInDuration" }, // 1394135888
		{ &Z_Construct_UFunction_UDecalComponent_GetFadeInStartDelay, "GetFadeInStartDelay" }, // 3862966830
		{ &Z_Construct_UFunction_UDecalComponent_GetFadeStartDelay, "GetFadeStartDelay" }, // 743279429
		{ &Z_Construct_UFunction_UDecalComponent_SetDecalMaterial, "SetDecalMaterial" }, // 8316244
		{ &Z_Construct_UFunction_UDecalComponent_SetFadeIn, "SetFadeIn" }, // 1455009206
		{ &Z_Construct_UFunction_UDecalComponent_SetFadeOut, "SetFadeOut" }, // 666611608
		{ &Z_Construct_UFunction_UDecalComponent_SetFadeScreenSize, "SetFadeScreenSize" }, // 2858676004
		{ &Z_Construct_UFunction_UDecalComponent_SetSortOrder, "SetSortOrder" }, // 3513684154
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDecalComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Rendering" },
		{ "Comment", "/** \n * A material that is rendered onto the surface of a mesh. A kind of 'bumper sticker' for a model.\n *\n * @see https://docs.unrealengine.com/latest/INT/Engine/Actors/DecalActor\n * @see UDecalActor\n */" },
		{ "HideCategories", "Collision Object Physics SceneComponent Activation Components|Activation Mobility Trigger PhysicsVolume" },
		{ "IncludePath", "Components/DecalComponent.h" },
		{ "ModuleRelativePath", "Classes/Components/DecalComponent.h" },
		{ "ToolTip", "A material that is rendered onto the surface of a mesh. A kind of 'bumper sticker' for a model.\n\n@see https://docs.unrealengine.com/latest/INT/Engine/Actors/DecalActor\n@see UDecalActor" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDecalComponent_Statics::NewProp_DecalSize_MetaData[] = {
		{ "AllowPreserveRatio", "true" },
		{ "Category", "Decal" },
		{ "Comment", "/** Decal size in local space (does not include the component scale), technically redundant but there for convenience */" },
		{ "ModuleRelativePath", "Classes/Components/DecalComponent.h" },
		{ "ToolTip", "Decal size in local space (does not include the component scale), technically redundant but there for convenience" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDecalComponent_Statics::NewProp_DecalSize = { "DecalSize", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDecalComponent, DecalSize), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UDecalComponent_Statics::NewProp_DecalSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDecalComponent_Statics::NewProp_DecalSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDecalComponent_Statics::NewProp_bDestroyOwnerAfterFade_MetaData[] = {
		{ "Category", "Decal" },
		{ "Comment", "/**\n\x09* Automatically destroys the owning actor after fully fading out.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Components/DecalComponent.h" },
		{ "ToolTip", "Automatically destroys the owning actor after fully fading out." },
	};
#endif
	void Z_Construct_UClass_UDecalComponent_Statics::NewProp_bDestroyOwnerAfterFade_SetBit(void* Obj)
	{
		((UDecalComponent*)Obj)->bDestroyOwnerAfterFade = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDecalComponent_Statics::NewProp_bDestroyOwnerAfterFade = { "bDestroyOwnerAfterFade", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UDecalComponent), &Z_Construct_UClass_UDecalComponent_Statics::NewProp_bDestroyOwnerAfterFade_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDecalComponent_Statics::NewProp_bDestroyOwnerAfterFade_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDecalComponent_Statics::NewProp_bDestroyOwnerAfterFade_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDecalComponent_Statics::NewProp_FadeInStartDelay_MetaData[] = {
		{ "Category", "Decal" },
		{ "ModuleRelativePath", "Classes/Components/DecalComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDecalComponent_Statics::NewProp_FadeInStartDelay = { "FadeInStartDelay", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDecalComponent, FadeInStartDelay), METADATA_PARAMS(Z_Construct_UClass_UDecalComponent_Statics::NewProp_FadeInStartDelay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDecalComponent_Statics::NewProp_FadeInStartDelay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDecalComponent_Statics::NewProp_FadeInDuration_MetaData[] = {
		{ "Category", "Decal" },
		{ "ModuleRelativePath", "Classes/Components/DecalComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDecalComponent_Statics::NewProp_FadeInDuration = { "FadeInDuration", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDecalComponent, FadeInDuration), METADATA_PARAMS(Z_Construct_UClass_UDecalComponent_Statics::NewProp_FadeInDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDecalComponent_Statics::NewProp_FadeInDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDecalComponent_Statics::NewProp_FadeDuration_MetaData[] = {
		{ "Category", "Decal" },
		{ "Comment", "/**\n\x09* Time in seconds for the decal to fade out. Set fade duration and start delay to 0 to make persistent. Only fades in active simulation or game.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Components/DecalComponent.h" },
		{ "ToolTip", "Time in seconds for the decal to fade out. Set fade duration and start delay to 0 to make persistent. Only fades in active simulation or game." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDecalComponent_Statics::NewProp_FadeDuration = { "FadeDuration", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDecalComponent, FadeDuration), METADATA_PARAMS(Z_Construct_UClass_UDecalComponent_Statics::NewProp_FadeDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDecalComponent_Statics::NewProp_FadeDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDecalComponent_Statics::NewProp_FadeStartDelay_MetaData[] = {
		{ "Category", "Decal" },
		{ "Comment", "/**\n\x09* Time in seconds to wait before beginning to fade out the decal. Set fade duration and start delay to 0 to make persistent.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Components/DecalComponent.h" },
		{ "ToolTip", "Time in seconds to wait before beginning to fade out the decal. Set fade duration and start delay to 0 to make persistent." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDecalComponent_Statics::NewProp_FadeStartDelay = { "FadeStartDelay", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDecalComponent, FadeStartDelay), METADATA_PARAMS(Z_Construct_UClass_UDecalComponent_Statics::NewProp_FadeStartDelay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDecalComponent_Statics::NewProp_FadeStartDelay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDecalComponent_Statics::NewProp_FadeScreenSize_MetaData[] = {
		{ "Category", "Decal" },
		{ "ModuleRelativePath", "Classes/Components/DecalComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDecalComponent_Statics::NewProp_FadeScreenSize = { "FadeScreenSize", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDecalComponent, FadeScreenSize), METADATA_PARAMS(Z_Construct_UClass_UDecalComponent_Statics::NewProp_FadeScreenSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDecalComponent_Statics::NewProp_FadeScreenSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDecalComponent_Statics::NewProp_SortOrder_MetaData[] = {
		{ "Category", "Decal" },
		{ "Comment", "/** \n\x09 * Controls the order in which decal elements are rendered.  Higher values draw later (on top). \n\x09 * Setting many different sort orders on many different decals prevents sorting by state and can reduce performance.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/DecalComponent.h" },
		{ "ToolTip", "Controls the order in which decal elements are rendered.  Higher values draw later (on top).\nSetting many different sort orders on many different decals prevents sorting by state and can reduce performance." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDecalComponent_Statics::NewProp_SortOrder = { "SortOrder", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDecalComponent, SortOrder), METADATA_PARAMS(Z_Construct_UClass_UDecalComponent_Statics::NewProp_SortOrder_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDecalComponent_Statics::NewProp_SortOrder_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDecalComponent_Statics::NewProp_DecalMaterial_MetaData[] = {
		{ "Category", "Decal" },
		{ "Comment", "/** Decal material. */" },
		{ "ModuleRelativePath", "Classes/Components/DecalComponent.h" },
		{ "ToolTip", "Decal material." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDecalComponent_Statics::NewProp_DecalMaterial = { "DecalMaterial", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDecalComponent, DecalMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDecalComponent_Statics::NewProp_DecalMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDecalComponent_Statics::NewProp_DecalMaterial_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDecalComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDecalComponent_Statics::NewProp_DecalSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDecalComponent_Statics::NewProp_bDestroyOwnerAfterFade,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDecalComponent_Statics::NewProp_FadeInStartDelay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDecalComponent_Statics::NewProp_FadeInDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDecalComponent_Statics::NewProp_FadeDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDecalComponent_Statics::NewProp_FadeStartDelay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDecalComponent_Statics::NewProp_FadeScreenSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDecalComponent_Statics::NewProp_SortOrder,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDecalComponent_Statics::NewProp_DecalMaterial,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDecalComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDecalComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDecalComponent_Statics::ClassParams = {
		&UDecalComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UDecalComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UDecalComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UDecalComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDecalComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDecalComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDecalComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDecalComponent, 2588474410);
	template<> ENGINE_API UClass* StaticClass<UDecalComponent>()
	{
		return UDecalComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDecalComponent(Z_Construct_UClass_UDecalComponent, &UDecalComponent::StaticClass, TEXT("/Script/Engine"), TEXT("UDecalComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDecalComponent);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UDecalComponent)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
