// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UMG/Public/Components/SizeBox.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSizeBox() {}
// Cross Module References
	UMG_API UClass* Z_Construct_UClass_USizeBox_NoRegister();
	UMG_API UClass* Z_Construct_UClass_USizeBox();
	UMG_API UClass* Z_Construct_UClass_UContentWidget();
	UPackage* Z_Construct_UPackage__Script_UMG();
// End Cross Module References
	DEFINE_FUNCTION(USizeBox::execClearMaxAspectRatio)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearMaxAspectRatio();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USizeBox::execClearMinAspectRatio)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearMinAspectRatio();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USizeBox::execSetMaxAspectRatio)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InMaxAspectRatio);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMaxAspectRatio(Z_Param_InMaxAspectRatio);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USizeBox::execSetMinAspectRatio)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InMinAspectRatio);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMinAspectRatio(Z_Param_InMinAspectRatio);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USizeBox::execClearMaxDesiredHeight)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearMaxDesiredHeight();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USizeBox::execSetMaxDesiredHeight)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InMaxDesiredHeight);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMaxDesiredHeight(Z_Param_InMaxDesiredHeight);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USizeBox::execClearMaxDesiredWidth)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearMaxDesiredWidth();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USizeBox::execSetMaxDesiredWidth)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InMaxDesiredWidth);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMaxDesiredWidth(Z_Param_InMaxDesiredWidth);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USizeBox::execClearMinDesiredHeight)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearMinDesiredHeight();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USizeBox::execSetMinDesiredHeight)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InMinDesiredHeight);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMinDesiredHeight(Z_Param_InMinDesiredHeight);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USizeBox::execClearMinDesiredWidth)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearMinDesiredWidth();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USizeBox::execSetMinDesiredWidth)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InMinDesiredWidth);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMinDesiredWidth(Z_Param_InMinDesiredWidth);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USizeBox::execClearHeightOverride)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearHeightOverride();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USizeBox::execSetHeightOverride)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InHeightOverride);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetHeightOverride(Z_Param_InHeightOverride);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USizeBox::execClearWidthOverride)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearWidthOverride();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USizeBox::execSetWidthOverride)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InWidthOverride);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetWidthOverride(Z_Param_InWidthOverride);
		P_NATIVE_END;
	}
	void USizeBox::StaticRegisterNativesUSizeBox()
	{
		UClass* Class = USizeBox::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClearHeightOverride", &USizeBox::execClearHeightOverride },
			{ "ClearMaxAspectRatio", &USizeBox::execClearMaxAspectRatio },
			{ "ClearMaxDesiredHeight", &USizeBox::execClearMaxDesiredHeight },
			{ "ClearMaxDesiredWidth", &USizeBox::execClearMaxDesiredWidth },
			{ "ClearMinAspectRatio", &USizeBox::execClearMinAspectRatio },
			{ "ClearMinDesiredHeight", &USizeBox::execClearMinDesiredHeight },
			{ "ClearMinDesiredWidth", &USizeBox::execClearMinDesiredWidth },
			{ "ClearWidthOverride", &USizeBox::execClearWidthOverride },
			{ "SetHeightOverride", &USizeBox::execSetHeightOverride },
			{ "SetMaxAspectRatio", &USizeBox::execSetMaxAspectRatio },
			{ "SetMaxDesiredHeight", &USizeBox::execSetMaxDesiredHeight },
			{ "SetMaxDesiredWidth", &USizeBox::execSetMaxDesiredWidth },
			{ "SetMinAspectRatio", &USizeBox::execSetMinAspectRatio },
			{ "SetMinDesiredHeight", &USizeBox::execSetMinDesiredHeight },
			{ "SetMinDesiredWidth", &USizeBox::execSetMinDesiredWidth },
			{ "SetWidthOverride", &USizeBox::execSetWidthOverride },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USizeBox_ClearHeightOverride_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USizeBox_ClearHeightOverride_Statics::Function_MetaDataParams[] = {
		{ "Category", "Layout|Size Box" },
		{ "ModuleRelativePath", "Public/Components/SizeBox.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USizeBox_ClearHeightOverride_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USizeBox, nullptr, "ClearHeightOverride", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USizeBox_ClearHeightOverride_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USizeBox_ClearHeightOverride_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USizeBox_ClearHeightOverride()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USizeBox_ClearHeightOverride_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USizeBox_ClearMaxAspectRatio_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USizeBox_ClearMaxAspectRatio_Statics::Function_MetaDataParams[] = {
		{ "Category", "Layout|Size Box" },
		{ "ModuleRelativePath", "Public/Components/SizeBox.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USizeBox_ClearMaxAspectRatio_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USizeBox, nullptr, "ClearMaxAspectRatio", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USizeBox_ClearMaxAspectRatio_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USizeBox_ClearMaxAspectRatio_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USizeBox_ClearMaxAspectRatio()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USizeBox_ClearMaxAspectRatio_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USizeBox_ClearMaxDesiredHeight_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USizeBox_ClearMaxDesiredHeight_Statics::Function_MetaDataParams[] = {
		{ "Category", "Layout|Size Box" },
		{ "ModuleRelativePath", "Public/Components/SizeBox.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USizeBox_ClearMaxDesiredHeight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USizeBox, nullptr, "ClearMaxDesiredHeight", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USizeBox_ClearMaxDesiredHeight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USizeBox_ClearMaxDesiredHeight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USizeBox_ClearMaxDesiredHeight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USizeBox_ClearMaxDesiredHeight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USizeBox_ClearMaxDesiredWidth_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USizeBox_ClearMaxDesiredWidth_Statics::Function_MetaDataParams[] = {
		{ "Category", "Layout|Size Box" },
		{ "ModuleRelativePath", "Public/Components/SizeBox.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USizeBox_ClearMaxDesiredWidth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USizeBox, nullptr, "ClearMaxDesiredWidth", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USizeBox_ClearMaxDesiredWidth_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USizeBox_ClearMaxDesiredWidth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USizeBox_ClearMaxDesiredWidth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USizeBox_ClearMaxDesiredWidth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USizeBox_ClearMinAspectRatio_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USizeBox_ClearMinAspectRatio_Statics::Function_MetaDataParams[] = {
		{ "Category", "Layout|Size Box" },
		{ "ModuleRelativePath", "Public/Components/SizeBox.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USizeBox_ClearMinAspectRatio_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USizeBox, nullptr, "ClearMinAspectRatio", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USizeBox_ClearMinAspectRatio_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USizeBox_ClearMinAspectRatio_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USizeBox_ClearMinAspectRatio()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USizeBox_ClearMinAspectRatio_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USizeBox_ClearMinDesiredHeight_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USizeBox_ClearMinDesiredHeight_Statics::Function_MetaDataParams[] = {
		{ "Category", "Layout|Size Box" },
		{ "ModuleRelativePath", "Public/Components/SizeBox.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USizeBox_ClearMinDesiredHeight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USizeBox, nullptr, "ClearMinDesiredHeight", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USizeBox_ClearMinDesiredHeight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USizeBox_ClearMinDesiredHeight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USizeBox_ClearMinDesiredHeight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USizeBox_ClearMinDesiredHeight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USizeBox_ClearMinDesiredWidth_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USizeBox_ClearMinDesiredWidth_Statics::Function_MetaDataParams[] = {
		{ "Category", "Layout|Size Box" },
		{ "ModuleRelativePath", "Public/Components/SizeBox.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USizeBox_ClearMinDesiredWidth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USizeBox, nullptr, "ClearMinDesiredWidth", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USizeBox_ClearMinDesiredWidth_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USizeBox_ClearMinDesiredWidth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USizeBox_ClearMinDesiredWidth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USizeBox_ClearMinDesiredWidth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USizeBox_ClearWidthOverride_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USizeBox_ClearWidthOverride_Statics::Function_MetaDataParams[] = {
		{ "Category", "Layout|Size Box" },
		{ "ModuleRelativePath", "Public/Components/SizeBox.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USizeBox_ClearWidthOverride_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USizeBox, nullptr, "ClearWidthOverride", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USizeBox_ClearWidthOverride_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USizeBox_ClearWidthOverride_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USizeBox_ClearWidthOverride()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USizeBox_ClearWidthOverride_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USizeBox_SetHeightOverride_Statics
	{
		struct SizeBox_eventSetHeightOverride_Parms
		{
			float InHeightOverride;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InHeightOverride;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USizeBox_SetHeightOverride_Statics::NewProp_InHeightOverride = { "InHeightOverride", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SizeBox_eventSetHeightOverride_Parms, InHeightOverride), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USizeBox_SetHeightOverride_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USizeBox_SetHeightOverride_Statics::NewProp_InHeightOverride,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USizeBox_SetHeightOverride_Statics::Function_MetaDataParams[] = {
		{ "Category", "Layout|Size Box" },
		{ "Comment", "/** When specified, ignore the content's desired size and report the HeightOverride as the Box's desired height. */" },
		{ "ModuleRelativePath", "Public/Components/SizeBox.h" },
		{ "ToolTip", "When specified, ignore the content's desired size and report the HeightOverride as the Box's desired height." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USizeBox_SetHeightOverride_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USizeBox, nullptr, "SetHeightOverride", nullptr, nullptr, sizeof(SizeBox_eventSetHeightOverride_Parms), Z_Construct_UFunction_USizeBox_SetHeightOverride_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USizeBox_SetHeightOverride_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USizeBox_SetHeightOverride_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USizeBox_SetHeightOverride_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USizeBox_SetHeightOverride()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USizeBox_SetHeightOverride_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USizeBox_SetMaxAspectRatio_Statics
	{
		struct SizeBox_eventSetMaxAspectRatio_Parms
		{
			float InMaxAspectRatio;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InMaxAspectRatio;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USizeBox_SetMaxAspectRatio_Statics::NewProp_InMaxAspectRatio = { "InMaxAspectRatio", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SizeBox_eventSetMaxAspectRatio_Parms, InMaxAspectRatio), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USizeBox_SetMaxAspectRatio_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USizeBox_SetMaxAspectRatio_Statics::NewProp_InMaxAspectRatio,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USizeBox_SetMaxAspectRatio_Statics::Function_MetaDataParams[] = {
		{ "Category", "Layout|Size Box" },
		{ "ModuleRelativePath", "Public/Components/SizeBox.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USizeBox_SetMaxAspectRatio_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USizeBox, nullptr, "SetMaxAspectRatio", nullptr, nullptr, sizeof(SizeBox_eventSetMaxAspectRatio_Parms), Z_Construct_UFunction_USizeBox_SetMaxAspectRatio_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USizeBox_SetMaxAspectRatio_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USizeBox_SetMaxAspectRatio_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USizeBox_SetMaxAspectRatio_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USizeBox_SetMaxAspectRatio()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USizeBox_SetMaxAspectRatio_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USizeBox_SetMaxDesiredHeight_Statics
	{
		struct SizeBox_eventSetMaxDesiredHeight_Parms
		{
			float InMaxDesiredHeight;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InMaxDesiredHeight;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USizeBox_SetMaxDesiredHeight_Statics::NewProp_InMaxDesiredHeight = { "InMaxDesiredHeight", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SizeBox_eventSetMaxDesiredHeight_Parms, InMaxDesiredHeight), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USizeBox_SetMaxDesiredHeight_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USizeBox_SetMaxDesiredHeight_Statics::NewProp_InMaxDesiredHeight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USizeBox_SetMaxDesiredHeight_Statics::Function_MetaDataParams[] = {
		{ "Category", "Layout|Size Box" },
		{ "Comment", "/** When specified, will report the MaxDesiredHeight if smaller than the content's desired height. */" },
		{ "ModuleRelativePath", "Public/Components/SizeBox.h" },
		{ "ToolTip", "When specified, will report the MaxDesiredHeight if smaller than the content's desired height." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USizeBox_SetMaxDesiredHeight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USizeBox, nullptr, "SetMaxDesiredHeight", nullptr, nullptr, sizeof(SizeBox_eventSetMaxDesiredHeight_Parms), Z_Construct_UFunction_USizeBox_SetMaxDesiredHeight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USizeBox_SetMaxDesiredHeight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USizeBox_SetMaxDesiredHeight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USizeBox_SetMaxDesiredHeight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USizeBox_SetMaxDesiredHeight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USizeBox_SetMaxDesiredHeight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USizeBox_SetMaxDesiredWidth_Statics
	{
		struct SizeBox_eventSetMaxDesiredWidth_Parms
		{
			float InMaxDesiredWidth;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InMaxDesiredWidth;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USizeBox_SetMaxDesiredWidth_Statics::NewProp_InMaxDesiredWidth = { "InMaxDesiredWidth", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SizeBox_eventSetMaxDesiredWidth_Parms, InMaxDesiredWidth), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USizeBox_SetMaxDesiredWidth_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USizeBox_SetMaxDesiredWidth_Statics::NewProp_InMaxDesiredWidth,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USizeBox_SetMaxDesiredWidth_Statics::Function_MetaDataParams[] = {
		{ "Category", "Layout|Size Box" },
		{ "Comment", "/** When specified, will report the MaxDesiredWidth if smaller than the content's desired width. */" },
		{ "ModuleRelativePath", "Public/Components/SizeBox.h" },
		{ "ToolTip", "When specified, will report the MaxDesiredWidth if smaller than the content's desired width." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USizeBox_SetMaxDesiredWidth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USizeBox, nullptr, "SetMaxDesiredWidth", nullptr, nullptr, sizeof(SizeBox_eventSetMaxDesiredWidth_Parms), Z_Construct_UFunction_USizeBox_SetMaxDesiredWidth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USizeBox_SetMaxDesiredWidth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USizeBox_SetMaxDesiredWidth_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USizeBox_SetMaxDesiredWidth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USizeBox_SetMaxDesiredWidth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USizeBox_SetMaxDesiredWidth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USizeBox_SetMinAspectRatio_Statics
	{
		struct SizeBox_eventSetMinAspectRatio_Parms
		{
			float InMinAspectRatio;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InMinAspectRatio;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USizeBox_SetMinAspectRatio_Statics::NewProp_InMinAspectRatio = { "InMinAspectRatio", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SizeBox_eventSetMinAspectRatio_Parms, InMinAspectRatio), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USizeBox_SetMinAspectRatio_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USizeBox_SetMinAspectRatio_Statics::NewProp_InMinAspectRatio,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USizeBox_SetMinAspectRatio_Statics::Function_MetaDataParams[] = {
		{ "Category", "Layout|Size Box" },
		{ "ModuleRelativePath", "Public/Components/SizeBox.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USizeBox_SetMinAspectRatio_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USizeBox, nullptr, "SetMinAspectRatio", nullptr, nullptr, sizeof(SizeBox_eventSetMinAspectRatio_Parms), Z_Construct_UFunction_USizeBox_SetMinAspectRatio_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USizeBox_SetMinAspectRatio_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USizeBox_SetMinAspectRatio_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USizeBox_SetMinAspectRatio_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USizeBox_SetMinAspectRatio()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USizeBox_SetMinAspectRatio_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USizeBox_SetMinDesiredHeight_Statics
	{
		struct SizeBox_eventSetMinDesiredHeight_Parms
		{
			float InMinDesiredHeight;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InMinDesiredHeight;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USizeBox_SetMinDesiredHeight_Statics::NewProp_InMinDesiredHeight = { "InMinDesiredHeight", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SizeBox_eventSetMinDesiredHeight_Parms, InMinDesiredHeight), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USizeBox_SetMinDesiredHeight_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USizeBox_SetMinDesiredHeight_Statics::NewProp_InMinDesiredHeight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USizeBox_SetMinDesiredHeight_Statics::Function_MetaDataParams[] = {
		{ "Category", "Layout|Size Box" },
		{ "Comment", "/** When specified, will report the MinDesiredHeight if larger than the content's desired height. */" },
		{ "ModuleRelativePath", "Public/Components/SizeBox.h" },
		{ "ToolTip", "When specified, will report the MinDesiredHeight if larger than the content's desired height." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USizeBox_SetMinDesiredHeight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USizeBox, nullptr, "SetMinDesiredHeight", nullptr, nullptr, sizeof(SizeBox_eventSetMinDesiredHeight_Parms), Z_Construct_UFunction_USizeBox_SetMinDesiredHeight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USizeBox_SetMinDesiredHeight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USizeBox_SetMinDesiredHeight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USizeBox_SetMinDesiredHeight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USizeBox_SetMinDesiredHeight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USizeBox_SetMinDesiredHeight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USizeBox_SetMinDesiredWidth_Statics
	{
		struct SizeBox_eventSetMinDesiredWidth_Parms
		{
			float InMinDesiredWidth;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InMinDesiredWidth;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USizeBox_SetMinDesiredWidth_Statics::NewProp_InMinDesiredWidth = { "InMinDesiredWidth", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SizeBox_eventSetMinDesiredWidth_Parms, InMinDesiredWidth), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USizeBox_SetMinDesiredWidth_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USizeBox_SetMinDesiredWidth_Statics::NewProp_InMinDesiredWidth,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USizeBox_SetMinDesiredWidth_Statics::Function_MetaDataParams[] = {
		{ "Category", "Layout|Size Box" },
		{ "Comment", "/** When specified, will report the MinDesiredWidth if larger than the content's desired width. */" },
		{ "ModuleRelativePath", "Public/Components/SizeBox.h" },
		{ "ToolTip", "When specified, will report the MinDesiredWidth if larger than the content's desired width." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USizeBox_SetMinDesiredWidth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USizeBox, nullptr, "SetMinDesiredWidth", nullptr, nullptr, sizeof(SizeBox_eventSetMinDesiredWidth_Parms), Z_Construct_UFunction_USizeBox_SetMinDesiredWidth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USizeBox_SetMinDesiredWidth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USizeBox_SetMinDesiredWidth_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USizeBox_SetMinDesiredWidth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USizeBox_SetMinDesiredWidth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USizeBox_SetMinDesiredWidth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USizeBox_SetWidthOverride_Statics
	{
		struct SizeBox_eventSetWidthOverride_Parms
		{
			float InWidthOverride;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InWidthOverride;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USizeBox_SetWidthOverride_Statics::NewProp_InWidthOverride = { "InWidthOverride", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SizeBox_eventSetWidthOverride_Parms, InWidthOverride), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USizeBox_SetWidthOverride_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USizeBox_SetWidthOverride_Statics::NewProp_InWidthOverride,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USizeBox_SetWidthOverride_Statics::Function_MetaDataParams[] = {
		{ "Category", "Layout|Size Box" },
		{ "Comment", "/** When specified, ignore the content's desired size and report the WidthOverride as the Box's desired width. */" },
		{ "ModuleRelativePath", "Public/Components/SizeBox.h" },
		{ "ToolTip", "When specified, ignore the content's desired size and report the WidthOverride as the Box's desired width." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USizeBox_SetWidthOverride_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USizeBox, nullptr, "SetWidthOverride", nullptr, nullptr, sizeof(SizeBox_eventSetWidthOverride_Parms), Z_Construct_UFunction_USizeBox_SetWidthOverride_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USizeBox_SetWidthOverride_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USizeBox_SetWidthOverride_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USizeBox_SetWidthOverride_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USizeBox_SetWidthOverride()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USizeBox_SetWidthOverride_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USizeBox_NoRegister()
	{
		return USizeBox::StaticClass();
	}
	struct Z_Construct_UClass_USizeBox_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_MaxAspectRatio_MetaData[];
#endif
		static void NewProp_bOverride_MaxAspectRatio_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_MaxAspectRatio;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_MinAspectRatio_MetaData[];
#endif
		static void NewProp_bOverride_MinAspectRatio_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_MinAspectRatio;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_MaxDesiredHeight_MetaData[];
#endif
		static void NewProp_bOverride_MaxDesiredHeight_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_MaxDesiredHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_MaxDesiredWidth_MetaData[];
#endif
		static void NewProp_bOverride_MaxDesiredWidth_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_MaxDesiredWidth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_MinDesiredHeight_MetaData[];
#endif
		static void NewProp_bOverride_MinDesiredHeight_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_MinDesiredHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_MinDesiredWidth_MetaData[];
#endif
		static void NewProp_bOverride_MinDesiredWidth_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_MinDesiredWidth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_HeightOverride_MetaData[];
#endif
		static void NewProp_bOverride_HeightOverride_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_HeightOverride;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_WidthOverride_MetaData[];
#endif
		static void NewProp_bOverride_WidthOverride_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_WidthOverride;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxAspectRatio_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxAspectRatio;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinAspectRatio_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinAspectRatio;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxDesiredHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxDesiredHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxDesiredWidth_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxDesiredWidth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinDesiredHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinDesiredHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinDesiredWidth_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinDesiredWidth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeightOverride_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HeightOverride;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WidthOverride_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WidthOverride;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USizeBox_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UContentWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_UMG,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USizeBox_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USizeBox_ClearHeightOverride, "ClearHeightOverride" }, // 4265814206
		{ &Z_Construct_UFunction_USizeBox_ClearMaxAspectRatio, "ClearMaxAspectRatio" }, // 4070894448
		{ &Z_Construct_UFunction_USizeBox_ClearMaxDesiredHeight, "ClearMaxDesiredHeight" }, // 3085761091
		{ &Z_Construct_UFunction_USizeBox_ClearMaxDesiredWidth, "ClearMaxDesiredWidth" }, // 958602033
		{ &Z_Construct_UFunction_USizeBox_ClearMinAspectRatio, "ClearMinAspectRatio" }, // 902501333
		{ &Z_Construct_UFunction_USizeBox_ClearMinDesiredHeight, "ClearMinDesiredHeight" }, // 2495596228
		{ &Z_Construct_UFunction_USizeBox_ClearMinDesiredWidth, "ClearMinDesiredWidth" }, // 3307894709
		{ &Z_Construct_UFunction_USizeBox_ClearWidthOverride, "ClearWidthOverride" }, // 4160692494
		{ &Z_Construct_UFunction_USizeBox_SetHeightOverride, "SetHeightOverride" }, // 622819098
		{ &Z_Construct_UFunction_USizeBox_SetMaxAspectRatio, "SetMaxAspectRatio" }, // 1939992664
		{ &Z_Construct_UFunction_USizeBox_SetMaxDesiredHeight, "SetMaxDesiredHeight" }, // 2778649094
		{ &Z_Construct_UFunction_USizeBox_SetMaxDesiredWidth, "SetMaxDesiredWidth" }, // 9295745
		{ &Z_Construct_UFunction_USizeBox_SetMinAspectRatio, "SetMinAspectRatio" }, // 2875433727
		{ &Z_Construct_UFunction_USizeBox_SetMinDesiredHeight, "SetMinDesiredHeight" }, // 3640934432
		{ &Z_Construct_UFunction_USizeBox_SetMinDesiredWidth, "SetMinDesiredWidth" }, // 3726109281
		{ &Z_Construct_UFunction_USizeBox_SetWidthOverride, "SetWidthOverride" }, // 3826381176
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USizeBox_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A widget that allows you to specify the size it reports to have and desire.  Not all widgets report a desired size\n * that you actually desire.  Wrapping them in a SizeBox lets you have the Size Box force them to be a particular size.\n *\n * * Single Child\n * * Fixed Size\n */" },
		{ "IncludePath", "Components/SizeBox.h" },
		{ "ModuleRelativePath", "Public/Components/SizeBox.h" },
		{ "ToolTip", "A widget that allows you to specify the size it reports to have and desire.  Not all widgets report a desired size\nthat you actually desire.  Wrapping them in a SizeBox lets you have the Size Box force them to be a particular size.\n\n* Single Child\n* Fixed Size" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USizeBox_Statics::NewProp_bOverride_MaxAspectRatio_MetaData[] = {
		{ "Category", "Child Layout" },
		{ "Comment", "/**  */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Components/SizeBox.h" },
	};
#endif
	void Z_Construct_UClass_USizeBox_Statics::NewProp_bOverride_MaxAspectRatio_SetBit(void* Obj)
	{
		((USizeBox*)Obj)->bOverride_MaxAspectRatio = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USizeBox_Statics::NewProp_bOverride_MaxAspectRatio = { "bOverride_MaxAspectRatio", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USizeBox), &Z_Construct_UClass_USizeBox_Statics::NewProp_bOverride_MaxAspectRatio_SetBit, METADATA_PARAMS(Z_Construct_UClass_USizeBox_Statics::NewProp_bOverride_MaxAspectRatio_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USizeBox_Statics::NewProp_bOverride_MaxAspectRatio_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USizeBox_Statics::NewProp_bOverride_MinAspectRatio_MetaData[] = {
		{ "Category", "Child Layout" },
		{ "Comment", "/**  */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Components/SizeBox.h" },
	};
#endif
	void Z_Construct_UClass_USizeBox_Statics::NewProp_bOverride_MinAspectRatio_SetBit(void* Obj)
	{
		((USizeBox*)Obj)->bOverride_MinAspectRatio = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USizeBox_Statics::NewProp_bOverride_MinAspectRatio = { "bOverride_MinAspectRatio", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USizeBox), &Z_Construct_UClass_USizeBox_Statics::NewProp_bOverride_MinAspectRatio_SetBit, METADATA_PARAMS(Z_Construct_UClass_USizeBox_Statics::NewProp_bOverride_MinAspectRatio_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USizeBox_Statics::NewProp_bOverride_MinAspectRatio_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USizeBox_Statics::NewProp_bOverride_MaxDesiredHeight_MetaData[] = {
		{ "Category", "Child Layout" },
		{ "Comment", "/**  */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Components/SizeBox.h" },
	};
#endif
	void Z_Construct_UClass_USizeBox_Statics::NewProp_bOverride_MaxDesiredHeight_SetBit(void* Obj)
	{
		((USizeBox*)Obj)->bOverride_MaxDesiredHeight = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USizeBox_Statics::NewProp_bOverride_MaxDesiredHeight = { "bOverride_MaxDesiredHeight", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USizeBox), &Z_Construct_UClass_USizeBox_Statics::NewProp_bOverride_MaxDesiredHeight_SetBit, METADATA_PARAMS(Z_Construct_UClass_USizeBox_Statics::NewProp_bOverride_MaxDesiredHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USizeBox_Statics::NewProp_bOverride_MaxDesiredHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USizeBox_Statics::NewProp_bOverride_MaxDesiredWidth_MetaData[] = {
		{ "Category", "Child Layout" },
		{ "Comment", "/**  */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Components/SizeBox.h" },
	};
#endif
	void Z_Construct_UClass_USizeBox_Statics::NewProp_bOverride_MaxDesiredWidth_SetBit(void* Obj)
	{
		((USizeBox*)Obj)->bOverride_MaxDesiredWidth = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USizeBox_Statics::NewProp_bOverride_MaxDesiredWidth = { "bOverride_MaxDesiredWidth", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USizeBox), &Z_Construct_UClass_USizeBox_Statics::NewProp_bOverride_MaxDesiredWidth_SetBit, METADATA_PARAMS(Z_Construct_UClass_USizeBox_Statics::NewProp_bOverride_MaxDesiredWidth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USizeBox_Statics::NewProp_bOverride_MaxDesiredWidth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USizeBox_Statics::NewProp_bOverride_MinDesiredHeight_MetaData[] = {
		{ "Category", "Child Layout" },
		{ "Comment", "/**  */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Components/SizeBox.h" },
	};
#endif
	void Z_Construct_UClass_USizeBox_Statics::NewProp_bOverride_MinDesiredHeight_SetBit(void* Obj)
	{
		((USizeBox*)Obj)->bOverride_MinDesiredHeight = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USizeBox_Statics::NewProp_bOverride_MinDesiredHeight = { "bOverride_MinDesiredHeight", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USizeBox), &Z_Construct_UClass_USizeBox_Statics::NewProp_bOverride_MinDesiredHeight_SetBit, METADATA_PARAMS(Z_Construct_UClass_USizeBox_Statics::NewProp_bOverride_MinDesiredHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USizeBox_Statics::NewProp_bOverride_MinDesiredHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USizeBox_Statics::NewProp_bOverride_MinDesiredWidth_MetaData[] = {
		{ "Category", "Child Layout" },
		{ "Comment", "/**  */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Components/SizeBox.h" },
	};
#endif
	void Z_Construct_UClass_USizeBox_Statics::NewProp_bOverride_MinDesiredWidth_SetBit(void* Obj)
	{
		((USizeBox*)Obj)->bOverride_MinDesiredWidth = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USizeBox_Statics::NewProp_bOverride_MinDesiredWidth = { "bOverride_MinDesiredWidth", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USizeBox), &Z_Construct_UClass_USizeBox_Statics::NewProp_bOverride_MinDesiredWidth_SetBit, METADATA_PARAMS(Z_Construct_UClass_USizeBox_Statics::NewProp_bOverride_MinDesiredWidth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USizeBox_Statics::NewProp_bOverride_MinDesiredWidth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USizeBox_Statics::NewProp_bOverride_HeightOverride_MetaData[] = {
		{ "Category", "Child Layout" },
		{ "Comment", "/**  */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Components/SizeBox.h" },
	};
#endif
	void Z_Construct_UClass_USizeBox_Statics::NewProp_bOverride_HeightOverride_SetBit(void* Obj)
	{
		((USizeBox*)Obj)->bOverride_HeightOverride = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USizeBox_Statics::NewProp_bOverride_HeightOverride = { "bOverride_HeightOverride", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USizeBox), &Z_Construct_UClass_USizeBox_Statics::NewProp_bOverride_HeightOverride_SetBit, METADATA_PARAMS(Z_Construct_UClass_USizeBox_Statics::NewProp_bOverride_HeightOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USizeBox_Statics::NewProp_bOverride_HeightOverride_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USizeBox_Statics::NewProp_bOverride_WidthOverride_MetaData[] = {
		{ "Category", "Child Layout" },
		{ "Comment", "/**  */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Components/SizeBox.h" },
	};
#endif
	void Z_Construct_UClass_USizeBox_Statics::NewProp_bOverride_WidthOverride_SetBit(void* Obj)
	{
		((USizeBox*)Obj)->bOverride_WidthOverride = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USizeBox_Statics::NewProp_bOverride_WidthOverride = { "bOverride_WidthOverride", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USizeBox), &Z_Construct_UClass_USizeBox_Statics::NewProp_bOverride_WidthOverride_SetBit, METADATA_PARAMS(Z_Construct_UClass_USizeBox_Statics::NewProp_bOverride_WidthOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USizeBox_Statics::NewProp_bOverride_WidthOverride_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USizeBox_Statics::NewProp_MaxAspectRatio_MetaData[] = {
		{ "Category", "Child Layout" },
		{ "Comment", "/** */" },
		{ "editcondition", "bOverride_MaxAspectRatio" },
		{ "ModuleRelativePath", "Public/Components/SizeBox.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USizeBox_Statics::NewProp_MaxAspectRatio = { "MaxAspectRatio", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USizeBox, MaxAspectRatio), METADATA_PARAMS(Z_Construct_UClass_USizeBox_Statics::NewProp_MaxAspectRatio_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USizeBox_Statics::NewProp_MaxAspectRatio_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USizeBox_Statics::NewProp_MinAspectRatio_MetaData[] = {
		{ "Category", "Child Layout" },
		{ "Comment", "/** */" },
		{ "editcondition", "bOverride_MinAspectRatio" },
		{ "ModuleRelativePath", "Public/Components/SizeBox.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USizeBox_Statics::NewProp_MinAspectRatio = { "MinAspectRatio", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USizeBox, MinAspectRatio), METADATA_PARAMS(Z_Construct_UClass_USizeBox_Statics::NewProp_MinAspectRatio_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USizeBox_Statics::NewProp_MinAspectRatio_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USizeBox_Statics::NewProp_MaxDesiredHeight_MetaData[] = {
		{ "Category", "Child Layout" },
		{ "Comment", "/** When specified, will report the MaxDesiredHeight if smaller than the content's desired height. */" },
		{ "editcondition", "bOverride_MaxDesiredHeight" },
		{ "ModuleRelativePath", "Public/Components/SizeBox.h" },
		{ "ToolTip", "When specified, will report the MaxDesiredHeight if smaller than the content's desired height." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USizeBox_Statics::NewProp_MaxDesiredHeight = { "MaxDesiredHeight", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USizeBox, MaxDesiredHeight), METADATA_PARAMS(Z_Construct_UClass_USizeBox_Statics::NewProp_MaxDesiredHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USizeBox_Statics::NewProp_MaxDesiredHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USizeBox_Statics::NewProp_MaxDesiredWidth_MetaData[] = {
		{ "Category", "Child Layout" },
		{ "Comment", "/** When specified, will report the MaxDesiredWidth if smaller than the content's desired width. */" },
		{ "editcondition", "bOverride_MaxDesiredWidth" },
		{ "ModuleRelativePath", "Public/Components/SizeBox.h" },
		{ "ToolTip", "When specified, will report the MaxDesiredWidth if smaller than the content's desired width." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USizeBox_Statics::NewProp_MaxDesiredWidth = { "MaxDesiredWidth", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USizeBox, MaxDesiredWidth), METADATA_PARAMS(Z_Construct_UClass_USizeBox_Statics::NewProp_MaxDesiredWidth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USizeBox_Statics::NewProp_MaxDesiredWidth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USizeBox_Statics::NewProp_MinDesiredHeight_MetaData[] = {
		{ "Category", "Child Layout" },
		{ "Comment", "/** When specified, will report the MinDesiredHeight if larger than the content's desired height. */" },
		{ "editcondition", "bOverride_MinDesiredHeight" },
		{ "ModuleRelativePath", "Public/Components/SizeBox.h" },
		{ "ToolTip", "When specified, will report the MinDesiredHeight if larger than the content's desired height." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USizeBox_Statics::NewProp_MinDesiredHeight = { "MinDesiredHeight", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USizeBox, MinDesiredHeight), METADATA_PARAMS(Z_Construct_UClass_USizeBox_Statics::NewProp_MinDesiredHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USizeBox_Statics::NewProp_MinDesiredHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USizeBox_Statics::NewProp_MinDesiredWidth_MetaData[] = {
		{ "Category", "Child Layout" },
		{ "Comment", "/** When specified, will report the MinDesiredWidth if larger than the content's desired width. */" },
		{ "editcondition", "bOverride_MinDesiredWidth" },
		{ "ModuleRelativePath", "Public/Components/SizeBox.h" },
		{ "ToolTip", "When specified, will report the MinDesiredWidth if larger than the content's desired width." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USizeBox_Statics::NewProp_MinDesiredWidth = { "MinDesiredWidth", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USizeBox, MinDesiredWidth), METADATA_PARAMS(Z_Construct_UClass_USizeBox_Statics::NewProp_MinDesiredWidth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USizeBox_Statics::NewProp_MinDesiredWidth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USizeBox_Statics::NewProp_HeightOverride_MetaData[] = {
		{ "Category", "Child Layout" },
		{ "Comment", "/** When specified, ignore the content's desired size and report the HeightOverride as the Box's desired height. */" },
		{ "editcondition", "bOverride_HeightOverride" },
		{ "ModuleRelativePath", "Public/Components/SizeBox.h" },
		{ "ToolTip", "When specified, ignore the content's desired size and report the HeightOverride as the Box's desired height." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USizeBox_Statics::NewProp_HeightOverride = { "HeightOverride", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USizeBox, HeightOverride), METADATA_PARAMS(Z_Construct_UClass_USizeBox_Statics::NewProp_HeightOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USizeBox_Statics::NewProp_HeightOverride_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USizeBox_Statics::NewProp_WidthOverride_MetaData[] = {
		{ "Category", "Child Layout" },
		{ "Comment", "/** When specified, ignore the content's desired size and report the WidthOverride as the Box's desired width. */" },
		{ "editcondition", "bOverride_WidthOverride" },
		{ "ModuleRelativePath", "Public/Components/SizeBox.h" },
		{ "ToolTip", "When specified, ignore the content's desired size and report the WidthOverride as the Box's desired width." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USizeBox_Statics::NewProp_WidthOverride = { "WidthOverride", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USizeBox, WidthOverride), METADATA_PARAMS(Z_Construct_UClass_USizeBox_Statics::NewProp_WidthOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USizeBox_Statics::NewProp_WidthOverride_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USizeBox_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USizeBox_Statics::NewProp_bOverride_MaxAspectRatio,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USizeBox_Statics::NewProp_bOverride_MinAspectRatio,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USizeBox_Statics::NewProp_bOverride_MaxDesiredHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USizeBox_Statics::NewProp_bOverride_MaxDesiredWidth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USizeBox_Statics::NewProp_bOverride_MinDesiredHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USizeBox_Statics::NewProp_bOverride_MinDesiredWidth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USizeBox_Statics::NewProp_bOverride_HeightOverride,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USizeBox_Statics::NewProp_bOverride_WidthOverride,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USizeBox_Statics::NewProp_MaxAspectRatio,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USizeBox_Statics::NewProp_MinAspectRatio,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USizeBox_Statics::NewProp_MaxDesiredHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USizeBox_Statics::NewProp_MaxDesiredWidth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USizeBox_Statics::NewProp_MinDesiredHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USizeBox_Statics::NewProp_MinDesiredWidth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USizeBox_Statics::NewProp_HeightOverride,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USizeBox_Statics::NewProp_WidthOverride,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USizeBox_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USizeBox>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USizeBox_Statics::ClassParams = {
		&USizeBox::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USizeBox_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USizeBox_Statics::PropPointers),
		0,
		0x00B000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USizeBox_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USizeBox_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USizeBox()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USizeBox_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USizeBox, 4080925208);
	template<> UMG_API UClass* StaticClass<USizeBox>()
	{
		return USizeBox::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USizeBox(Z_Construct_UClass_USizeBox, &USizeBox::StaticClass, TEXT("/Script/UMG"), TEXT("USizeBox"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USizeBox);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
