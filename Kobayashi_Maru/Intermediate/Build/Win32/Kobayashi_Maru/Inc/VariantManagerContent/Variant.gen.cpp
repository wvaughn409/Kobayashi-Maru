// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VariantManagerContent/Public/Variant.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVariant() {}
// Cross Module References
	VARIANTMANAGERCONTENT_API UClass* Z_Construct_UClass_UVariant_NoRegister();
	VARIANTMANAGERCONTENT_API UClass* Z_Construct_UClass_UVariant();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_VariantManagerContent();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	VARIANTMANAGERCONTENT_API UClass* Z_Construct_UClass_UVariantObjectBinding_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UVariant::execGetThumbnail)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTexture2D**)Z_Param__Result=P_THIS->GetThumbnail();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVariant::execIsActive)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsActive();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVariant::execSwitchOn)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SwitchOn();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVariant::execGetActor)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_ActorIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AActor**)Z_Param__Result=P_THIS->GetActor(Z_Param_ActorIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVariant::execGetNumActors)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetNumActors();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVariant::execGetDisplayText)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=P_THIS->GetDisplayText();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVariant::execSetDisplayText)
	{
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_NewDisplayText);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDisplayText(Z_Param_Out_NewDisplayText);
		P_NATIVE_END;
	}
	void UVariant::StaticRegisterNativesUVariant()
	{
		UClass* Class = UVariant::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetActor", &UVariant::execGetActor },
			{ "GetDisplayText", &UVariant::execGetDisplayText },
			{ "GetNumActors", &UVariant::execGetNumActors },
			{ "GetThumbnail", &UVariant::execGetThumbnail },
			{ "IsActive", &UVariant::execIsActive },
			{ "SetDisplayText", &UVariant::execSetDisplayText },
			{ "SwitchOn", &UVariant::execSwitchOn },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVariant_GetActor_Statics
	{
		struct Variant_eventGetActor_Parms
		{
			int32 ActorIndex;
			AActor* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ActorIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVariant_GetActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Variant_eventGetActor_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVariant_GetActor_Statics::NewProp_ActorIndex = { "ActorIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Variant_eventGetActor_Parms, ActorIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVariant_GetActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVariant_GetActor_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVariant_GetActor_Statics::NewProp_ActorIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVariant_GetActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Variant" },
		{ "ModuleRelativePath", "Public/Variant.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVariant_GetActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVariant, nullptr, "GetActor", nullptr, nullptr, sizeof(Variant_eventGetActor_Parms), Z_Construct_UFunction_UVariant_GetActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVariant_GetActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVariant_GetActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVariant_GetActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVariant_GetActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVariant_GetActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVariant_GetDisplayText_Statics
	{
		struct Variant_eventGetDisplayText_Parms
		{
			FText ReturnValue;
		};
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UVariant_GetDisplayText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Variant_eventGetDisplayText_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVariant_GetDisplayText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVariant_GetDisplayText_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVariant_GetDisplayText_Statics::Function_MetaDataParams[] = {
		{ "Category", "Variant" },
		{ "ModuleRelativePath", "Public/Variant.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVariant_GetDisplayText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVariant, nullptr, "GetDisplayText", nullptr, nullptr, sizeof(Variant_eventGetDisplayText_Parms), Z_Construct_UFunction_UVariant_GetDisplayText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVariant_GetDisplayText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVariant_GetDisplayText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVariant_GetDisplayText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVariant_GetDisplayText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVariant_GetDisplayText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVariant_GetNumActors_Statics
	{
		struct Variant_eventGetNumActors_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVariant_GetNumActors_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Variant_eventGetNumActors_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVariant_GetNumActors_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVariant_GetNumActors_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVariant_GetNumActors_Statics::Function_MetaDataParams[] = {
		{ "Category", "Variant" },
		{ "ModuleRelativePath", "Public/Variant.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVariant_GetNumActors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVariant, nullptr, "GetNumActors", nullptr, nullptr, sizeof(Variant_eventGetNumActors_Parms), Z_Construct_UFunction_UVariant_GetNumActors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVariant_GetNumActors_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVariant_GetNumActors_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVariant_GetNumActors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVariant_GetNumActors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVariant_GetNumActors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVariant_GetThumbnail_Statics
	{
		struct Variant_eventGetThumbnail_Parms
		{
			UTexture2D* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVariant_GetThumbnail_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Variant_eventGetThumbnail_Parms, ReturnValue), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVariant_GetThumbnail_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVariant_GetThumbnail_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVariant_GetThumbnail_Statics::Function_MetaDataParams[] = {
		{ "Category", "Variant" },
		{ "Comment", "// Gets the thumbnail currently used for this variant\n" },
		{ "ModuleRelativePath", "Public/Variant.h" },
		{ "ToolTip", "Gets the thumbnail currently used for this variant" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVariant_GetThumbnail_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVariant, nullptr, "GetThumbnail", nullptr, nullptr, sizeof(Variant_eventGetThumbnail_Parms), Z_Construct_UFunction_UVariant_GetThumbnail_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVariant_GetThumbnail_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVariant_GetThumbnail_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVariant_GetThumbnail_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVariant_GetThumbnail()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVariant_GetThumbnail_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVariant_IsActive_Statics
	{
		struct Variant_eventIsActive_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVariant_IsActive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Variant_eventIsActive_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVariant_IsActive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Variant_eventIsActive_Parms), &Z_Construct_UFunction_UVariant_IsActive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVariant_IsActive_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVariant_IsActive_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVariant_IsActive_Statics::Function_MetaDataParams[] = {
		{ "Category", "Variant" },
		{ "Comment", "// Returns true if none of our properties are dirty\n" },
		{ "ModuleRelativePath", "Public/Variant.h" },
		{ "ToolTip", "Returns true if none of our properties are dirty" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVariant_IsActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVariant, nullptr, "IsActive", nullptr, nullptr, sizeof(Variant_eventIsActive_Parms), Z_Construct_UFunction_UVariant_IsActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVariant_IsActive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVariant_IsActive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVariant_IsActive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVariant_IsActive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVariant_IsActive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVariant_SetDisplayText_Statics
	{
		struct Variant_eventSetDisplayText_Parms
		{
			FText NewDisplayText;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewDisplayText_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_NewDisplayText;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVariant_SetDisplayText_Statics::NewProp_NewDisplayText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UVariant_SetDisplayText_Statics::NewProp_NewDisplayText = { "NewDisplayText", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Variant_eventSetDisplayText_Parms, NewDisplayText), METADATA_PARAMS(Z_Construct_UFunction_UVariant_SetDisplayText_Statics::NewProp_NewDisplayText_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVariant_SetDisplayText_Statics::NewProp_NewDisplayText_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVariant_SetDisplayText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVariant_SetDisplayText_Statics::NewProp_NewDisplayText,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVariant_SetDisplayText_Statics::Function_MetaDataParams[] = {
		{ "Category", "Variant" },
		{ "Comment", "//~ End UObject Interface\n" },
		{ "ModuleRelativePath", "Public/Variant.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVariant_SetDisplayText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVariant, nullptr, "SetDisplayText", nullptr, nullptr, sizeof(Variant_eventSetDisplayText_Parms), Z_Construct_UFunction_UVariant_SetDisplayText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVariant_SetDisplayText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVariant_SetDisplayText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVariant_SetDisplayText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVariant_SetDisplayText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVariant_SetDisplayText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVariant_SwitchOn_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVariant_SwitchOn_Statics::Function_MetaDataParams[] = {
		{ "Category", "Variant" },
		{ "ModuleRelativePath", "Public/Variant.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVariant_SwitchOn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVariant, nullptr, "SwitchOn", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVariant_SwitchOn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVariant_SwitchOn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVariant_SwitchOn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVariant_SwitchOn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UVariant_NoRegister()
	{
		return UVariant::StaticClass();
	}
	struct Z_Construct_UClass_UVariant_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Thumbnail_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Thumbnail;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjectBindings_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ObjectBindings;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ObjectBindings_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisplayText_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_DisplayText;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVariant_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_VariantManagerContent,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UVariant_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVariant_GetActor, "GetActor" }, // 877274167
		{ &Z_Construct_UFunction_UVariant_GetDisplayText, "GetDisplayText" }, // 1269934583
		{ &Z_Construct_UFunction_UVariant_GetNumActors, "GetNumActors" }, // 2586690395
		{ &Z_Construct_UFunction_UVariant_GetThumbnail, "GetThumbnail" }, // 1352570024
		{ &Z_Construct_UFunction_UVariant_IsActive, "IsActive" }, // 701850093
		{ &Z_Construct_UFunction_UVariant_SetDisplayText, "SetDisplayText" }, // 429683168
		{ &Z_Construct_UFunction_UVariant_SwitchOn, "SwitchOn" }, // 2712465599
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVariant_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Variant.h" },
		{ "ModuleRelativePath", "Public/Variant.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVariant_Statics::NewProp_Thumbnail_MetaData[] = {
		{ "ModuleRelativePath", "Public/Variant.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVariant_Statics::NewProp_Thumbnail = { "Thumbnail", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVariant, Thumbnail), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVariant_Statics::NewProp_Thumbnail_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVariant_Statics::NewProp_Thumbnail_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVariant_Statics::NewProp_ObjectBindings_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Variant.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVariant_Statics::NewProp_ObjectBindings = { "ObjectBindings", nullptr, (EPropertyFlags)0x0040008000000008, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVariant, ObjectBindings), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UVariant_Statics::NewProp_ObjectBindings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVariant_Statics::NewProp_ObjectBindings_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVariant_Statics::NewProp_ObjectBindings_Inner = { "ObjectBindings", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UVariantObjectBinding_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVariant_Statics::NewProp_DisplayText_MetaData[] = {
		{ "Comment", "// The display name used to be a property. Use the non-deprecated, non-property version from now on\n" },
		{ "ModuleRelativePath", "Public/Variant.h" },
		{ "ToolTip", "The display name used to be a property. Use the non-deprecated, non-property version from now on" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_UVariant_Statics::NewProp_DisplayText = { "DisplayText", nullptr, (EPropertyFlags)0x0040000020000000, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVariant, DisplayText_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UVariant_Statics::NewProp_DisplayText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVariant_Statics::NewProp_DisplayText_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVariant_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVariant_Statics::NewProp_Thumbnail,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVariant_Statics::NewProp_ObjectBindings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVariant_Statics::NewProp_ObjectBindings_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVariant_Statics::NewProp_DisplayText,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVariant_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVariant>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVariant_Statics::ClassParams = {
		&UVariant::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UVariant_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UVariant_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVariant_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVariant_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVariant()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVariant_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVariant, 1819688290);
	template<> VARIANTMANAGERCONTENT_API UClass* StaticClass<UVariant>()
	{
		return UVariant::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVariant(Z_Construct_UClass_UVariant, &UVariant::StaticClass, TEXT("/Script/VariantManagerContent"), TEXT("UVariant"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVariant);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UVariant)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
