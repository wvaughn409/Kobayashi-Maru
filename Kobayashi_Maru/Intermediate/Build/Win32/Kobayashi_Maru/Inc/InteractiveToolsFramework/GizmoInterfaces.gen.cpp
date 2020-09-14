// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InteractiveToolsFramework/Public/BaseGizmos/GizmoInterfaces.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGizmoInterfaces() {}
// Cross Module References
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoTransformSource_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoTransformSource();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_InteractiveToolsFramework();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoAxisSource_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoAxisSource();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoClickTarget_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoClickTarget();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoStateTarget_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoStateTarget();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoFloatParameterSource_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoFloatParameterSource();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoVec2ParameterSource_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoVec2ParameterSource();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
// End Cross Module References
	DEFINE_FUNCTION(IGizmoTransformSource::execSetTransform)
	{
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_NewTransform);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTransform(Z_Param_Out_NewTransform);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IGizmoTransformSource::execGetTransform)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTransform*)Z_Param__Result=P_THIS->GetTransform();
		P_NATIVE_END;
	}
	void UGizmoTransformSource::StaticRegisterNativesUGizmoTransformSource()
	{
		UClass* Class = UGizmoTransformSource::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetTransform", &IGizmoTransformSource::execGetTransform },
			{ "SetTransform", &IGizmoTransformSource::execSetTransform },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGizmoTransformSource_GetTransform_Statics
	{
		struct GizmoTransformSource_eventGetTransform_Parms
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGizmoTransformSource_GetTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GizmoTransformSource_eventGetTransform_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGizmoTransformSource_GetTransform_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGizmoTransformSource_GetTransform_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGizmoTransformSource_GetTransform_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoInterfaces.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGizmoTransformSource_GetTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGizmoTransformSource, nullptr, "GetTransform", nullptr, nullptr, sizeof(GizmoTransformSource_eventGetTransform_Parms), Z_Construct_UFunction_UGizmoTransformSource_GetTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGizmoTransformSource_GetTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40820400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGizmoTransformSource_GetTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGizmoTransformSource_GetTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGizmoTransformSource_GetTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGizmoTransformSource_GetTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGizmoTransformSource_SetTransform_Statics
	{
		struct GizmoTransformSource_eventSetTransform_Parms
		{
			FTransform NewTransform;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewTransform;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGizmoTransformSource_SetTransform_Statics::NewProp_NewTransform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGizmoTransformSource_SetTransform_Statics::NewProp_NewTransform = { "NewTransform", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GizmoTransformSource_eventSetTransform_Parms, NewTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_UGizmoTransformSource_SetTransform_Statics::NewProp_NewTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGizmoTransformSource_SetTransform_Statics::NewProp_NewTransform_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGizmoTransformSource_SetTransform_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGizmoTransformSource_SetTransform_Statics::NewProp_NewTransform,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGizmoTransformSource_SetTransform_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoInterfaces.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGizmoTransformSource_SetTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGizmoTransformSource, nullptr, "SetTransform", nullptr, nullptr, sizeof(GizmoTransformSource_eventSetTransform_Parms), Z_Construct_UFunction_UGizmoTransformSource_SetTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGizmoTransformSource_SetTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00C20400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGizmoTransformSource_SetTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGizmoTransformSource_SetTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGizmoTransformSource_SetTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGizmoTransformSource_SetTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UGizmoTransformSource_NoRegister()
	{
		return UGizmoTransformSource::StaticClass();
	}
	struct Z_Construct_UClass_UGizmoTransformSource_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGizmoTransformSource_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGizmoTransformSource_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGizmoTransformSource_GetTransform, "GetTransform" }, // 2444398419
		{ &Z_Construct_UFunction_UGizmoTransformSource_SetTransform, "SetTransform" }, // 1595163086
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoTransformSource_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoInterfaces.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGizmoTransformSource_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IGizmoTransformSource>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGizmoTransformSource_Statics::ClassParams = {
		&UGizmoTransformSource::StaticClass,
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
		0x001040A1u,
		METADATA_PARAMS(Z_Construct_UClass_UGizmoTransformSource_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoTransformSource_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGizmoTransformSource()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGizmoTransformSource_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGizmoTransformSource, 1762311569);
	template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<UGizmoTransformSource>()
	{
		return UGizmoTransformSource::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGizmoTransformSource(Z_Construct_UClass_UGizmoTransformSource, &UGizmoTransformSource::StaticClass, TEXT("/Script/InteractiveToolsFramework"), TEXT("UGizmoTransformSource"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGizmoTransformSource);
	DEFINE_FUNCTION(IGizmoAxisSource::execGetTangentVectors)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_TangentXOut);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_TangentYOut);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetTangentVectors(Z_Param_Out_TangentXOut,Z_Param_Out_TangentYOut);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IGizmoAxisSource::execHasTangentVectors)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasTangentVectors();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IGizmoAxisSource::execGetDirection)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetDirection();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IGizmoAxisSource::execGetOrigin)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetOrigin();
		P_NATIVE_END;
	}
	void UGizmoAxisSource::StaticRegisterNativesUGizmoAxisSource()
	{
		UClass* Class = UGizmoAxisSource::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetDirection", &IGizmoAxisSource::execGetDirection },
			{ "GetOrigin", &IGizmoAxisSource::execGetOrigin },
			{ "GetTangentVectors", &IGizmoAxisSource::execGetTangentVectors },
			{ "HasTangentVectors", &IGizmoAxisSource::execHasTangentVectors },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGizmoAxisSource_GetDirection_Statics
	{
		struct GizmoAxisSource_eventGetDirection_Parms
		{
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGizmoAxisSource_GetDirection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GizmoAxisSource_eventGetDirection_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGizmoAxisSource_GetDirection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGizmoAxisSource_GetDirection_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGizmoAxisSource_GetDirection_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** @return Direction Vector of axis */" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoInterfaces.h" },
		{ "ToolTip", "@return Direction Vector of axis" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGizmoAxisSource_GetDirection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGizmoAxisSource, nullptr, "GetDirection", nullptr, nullptr, sizeof(GizmoAxisSource_eventGetDirection_Parms), Z_Construct_UFunction_UGizmoAxisSource_GetDirection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGizmoAxisSource_GetDirection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40820400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGizmoAxisSource_GetDirection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGizmoAxisSource_GetDirection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGizmoAxisSource_GetDirection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGizmoAxisSource_GetDirection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGizmoAxisSource_GetOrigin_Statics
	{
		struct GizmoAxisSource_eventGetOrigin_Parms
		{
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGizmoAxisSource_GetOrigin_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GizmoAxisSource_eventGetOrigin_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGizmoAxisSource_GetOrigin_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGizmoAxisSource_GetOrigin_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGizmoAxisSource_GetOrigin_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** @return Origin Point of axis */" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoInterfaces.h" },
		{ "ToolTip", "@return Origin Point of axis" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGizmoAxisSource_GetOrigin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGizmoAxisSource, nullptr, "GetOrigin", nullptr, nullptr, sizeof(GizmoAxisSource_eventGetOrigin_Parms), Z_Construct_UFunction_UGizmoAxisSource_GetOrigin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGizmoAxisSource_GetOrigin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40820400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGizmoAxisSource_GetOrigin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGizmoAxisSource_GetOrigin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGizmoAxisSource_GetOrigin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGizmoAxisSource_GetOrigin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGizmoAxisSource_GetTangentVectors_Statics
	{
		struct GizmoAxisSource_eventGetTangentVectors_Parms
		{
			FVector TangentXOut;
			FVector TangentYOut;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TangentYOut;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TangentXOut;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGizmoAxisSource_GetTangentVectors_Statics::NewProp_TangentYOut = { "TangentYOut", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GizmoAxisSource_eventGetTangentVectors_Parms, TangentYOut), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGizmoAxisSource_GetTangentVectors_Statics::NewProp_TangentXOut = { "TangentXOut", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GizmoAxisSource_eventGetTangentVectors_Parms, TangentXOut), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGizmoAxisSource_GetTangentVectors_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGizmoAxisSource_GetTangentVectors_Statics::NewProp_TangentYOut,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGizmoAxisSource_GetTangentVectors_Statics::NewProp_TangentXOut,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGizmoAxisSource_GetTangentVectors_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Get the two tangent vectors that are orthogonal to the Direction vector. \n\x09 * @warning Only valid if HasTangentVectors() returns true\n\x09 */" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoInterfaces.h" },
		{ "ToolTip", "Get the two tangent vectors that are orthogonal to the Direction vector.\n@warning Only valid if HasTangentVectors() returns true" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGizmoAxisSource_GetTangentVectors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGizmoAxisSource, nullptr, "GetTangentVectors", nullptr, nullptr, sizeof(GizmoAxisSource_eventGetTangentVectors_Parms), Z_Construct_UFunction_UGizmoAxisSource_GetTangentVectors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGizmoAxisSource_GetTangentVectors_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40C20400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGizmoAxisSource_GetTangentVectors_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGizmoAxisSource_GetTangentVectors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGizmoAxisSource_GetTangentVectors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGizmoAxisSource_GetTangentVectors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGizmoAxisSource_HasTangentVectors_Statics
	{
		struct GizmoAxisSource_eventHasTangentVectors_Parms
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
	void Z_Construct_UFunction_UGizmoAxisSource_HasTangentVectors_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GizmoAxisSource_eventHasTangentVectors_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGizmoAxisSource_HasTangentVectors_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GizmoAxisSource_eventHasTangentVectors_Parms), &Z_Construct_UFunction_UGizmoAxisSource_HasTangentVectors_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGizmoAxisSource_HasTangentVectors_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGizmoAxisSource_HasTangentVectors_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGizmoAxisSource_HasTangentVectors_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** @return true if this AxisSource has tangent vectors orthogonal to the Direction vector */" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoInterfaces.h" },
		{ "ToolTip", "@return true if this AxisSource has tangent vectors orthogonal to the Direction vector" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGizmoAxisSource_HasTangentVectors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGizmoAxisSource, nullptr, "HasTangentVectors", nullptr, nullptr, sizeof(GizmoAxisSource_eventHasTangentVectors_Parms), Z_Construct_UFunction_UGizmoAxisSource_HasTangentVectors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGizmoAxisSource_HasTangentVectors_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGizmoAxisSource_HasTangentVectors_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGizmoAxisSource_HasTangentVectors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGizmoAxisSource_HasTangentVectors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGizmoAxisSource_HasTangentVectors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UGizmoAxisSource_NoRegister()
	{
		return UGizmoAxisSource::StaticClass();
	}
	struct Z_Construct_UClass_UGizmoAxisSource_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGizmoAxisSource_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGizmoAxisSource_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGizmoAxisSource_GetDirection, "GetDirection" }, // 3961030733
		{ &Z_Construct_UFunction_UGizmoAxisSource_GetOrigin, "GetOrigin" }, // 2421667884
		{ &Z_Construct_UFunction_UGizmoAxisSource_GetTangentVectors, "GetTangentVectors" }, // 992914127
		{ &Z_Construct_UFunction_UGizmoAxisSource_HasTangentVectors, "HasTangentVectors" }, // 1921833777
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoAxisSource_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoInterfaces.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGizmoAxisSource_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IGizmoAxisSource>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGizmoAxisSource_Statics::ClassParams = {
		&UGizmoAxisSource::StaticClass,
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
		0x001040A1u,
		METADATA_PARAMS(Z_Construct_UClass_UGizmoAxisSource_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoAxisSource_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGizmoAxisSource()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGizmoAxisSource_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGizmoAxisSource, 2392370599);
	template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<UGizmoAxisSource>()
	{
		return UGizmoAxisSource::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGizmoAxisSource(Z_Construct_UClass_UGizmoAxisSource, &UGizmoAxisSource::StaticClass, TEXT("/Script/InteractiveToolsFramework"), TEXT("UGizmoAxisSource"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGizmoAxisSource);
	DEFINE_FUNCTION(IGizmoClickTarget::execUpdateHoverState)
	{
		P_GET_UBOOL(Z_Param_bHovering);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateHoverState(Z_Param_bHovering);
		P_NATIVE_END;
	}
	void UGizmoClickTarget::StaticRegisterNativesUGizmoClickTarget()
	{
		UClass* Class = UGizmoClickTarget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "UpdateHoverState", &IGizmoClickTarget::execUpdateHoverState },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGizmoClickTarget_UpdateHoverState_Statics
	{
		struct GizmoClickTarget_eventUpdateHoverState_Parms
		{
			bool bHovering;
		};
		static void NewProp_bHovering_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHovering;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UGizmoClickTarget_UpdateHoverState_Statics::NewProp_bHovering_SetBit(void* Obj)
	{
		((GizmoClickTarget_eventUpdateHoverState_Parms*)Obj)->bHovering = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGizmoClickTarget_UpdateHoverState_Statics::NewProp_bHovering = { "bHovering", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GizmoClickTarget_eventUpdateHoverState_Parms), &Z_Construct_UFunction_UGizmoClickTarget_UpdateHoverState_Statics::NewProp_bHovering_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGizmoClickTarget_UpdateHoverState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGizmoClickTarget_UpdateHoverState_Statics::NewProp_bHovering,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGizmoClickTarget_UpdateHoverState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoInterfaces.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGizmoClickTarget_UpdateHoverState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGizmoClickTarget, nullptr, "UpdateHoverState", nullptr, nullptr, sizeof(GizmoClickTarget_eventUpdateHoverState_Parms), Z_Construct_UFunction_UGizmoClickTarget_UpdateHoverState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGizmoClickTarget_UpdateHoverState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGizmoClickTarget_UpdateHoverState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGizmoClickTarget_UpdateHoverState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGizmoClickTarget_UpdateHoverState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGizmoClickTarget_UpdateHoverState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UGizmoClickTarget_NoRegister()
	{
		return UGizmoClickTarget::StaticClass();
	}
	struct Z_Construct_UClass_UGizmoClickTarget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGizmoClickTarget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGizmoClickTarget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGizmoClickTarget_UpdateHoverState, "UpdateHoverState" }, // 2221369346
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoClickTarget_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoInterfaces.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGizmoClickTarget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IGizmoClickTarget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGizmoClickTarget_Statics::ClassParams = {
		&UGizmoClickTarget::StaticClass,
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
		0x001040A1u,
		METADATA_PARAMS(Z_Construct_UClass_UGizmoClickTarget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoClickTarget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGizmoClickTarget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGizmoClickTarget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGizmoClickTarget, 370965125);
	template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<UGizmoClickTarget>()
	{
		return UGizmoClickTarget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGizmoClickTarget(Z_Construct_UClass_UGizmoClickTarget, &UGizmoClickTarget::StaticClass, TEXT("/Script/InteractiveToolsFramework"), TEXT("UGizmoClickTarget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGizmoClickTarget);
	DEFINE_FUNCTION(IGizmoStateTarget::execEndUpdate)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EndUpdate();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IGizmoStateTarget::execBeginUpdate)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BeginUpdate();
		P_NATIVE_END;
	}
	void UGizmoStateTarget::StaticRegisterNativesUGizmoStateTarget()
	{
		UClass* Class = UGizmoStateTarget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BeginUpdate", &IGizmoStateTarget::execBeginUpdate },
			{ "EndUpdate", &IGizmoStateTarget::execEndUpdate },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGizmoStateTarget_BeginUpdate_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGizmoStateTarget_BeginUpdate_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * BeginUpdate is called before a standard Gizmo begins changing a parameter (via a ParameterSource)\n\x09 */" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoInterfaces.h" },
		{ "ToolTip", "BeginUpdate is called before a standard Gizmo begins changing a parameter (via a ParameterSource)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGizmoStateTarget_BeginUpdate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGizmoStateTarget, nullptr, "BeginUpdate", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGizmoStateTarget_BeginUpdate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGizmoStateTarget_BeginUpdate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGizmoStateTarget_BeginUpdate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGizmoStateTarget_BeginUpdate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGizmoStateTarget_EndUpdate_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGizmoStateTarget_EndUpdate_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * EndUpdate is called when a standard Gizmo is finished changing a parameter (via a ParameterSource)\n\x09 */" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoInterfaces.h" },
		{ "ToolTip", "EndUpdate is called when a standard Gizmo is finished changing a parameter (via a ParameterSource)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGizmoStateTarget_EndUpdate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGizmoStateTarget, nullptr, "EndUpdate", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGizmoStateTarget_EndUpdate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGizmoStateTarget_EndUpdate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGizmoStateTarget_EndUpdate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGizmoStateTarget_EndUpdate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UGizmoStateTarget_NoRegister()
	{
		return UGizmoStateTarget::StaticClass();
	}
	struct Z_Construct_UClass_UGizmoStateTarget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGizmoStateTarget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGizmoStateTarget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGizmoStateTarget_BeginUpdate, "BeginUpdate" }, // 2991426485
		{ &Z_Construct_UFunction_UGizmoStateTarget_EndUpdate, "EndUpdate" }, // 1421357462
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoStateTarget_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoInterfaces.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGizmoStateTarget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IGizmoStateTarget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGizmoStateTarget_Statics::ClassParams = {
		&UGizmoStateTarget::StaticClass,
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
		0x001040A1u,
		METADATA_PARAMS(Z_Construct_UClass_UGizmoStateTarget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoStateTarget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGizmoStateTarget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGizmoStateTarget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGizmoStateTarget, 2863123710);
	template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<UGizmoStateTarget>()
	{
		return UGizmoStateTarget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGizmoStateTarget(Z_Construct_UClass_UGizmoStateTarget, &UGizmoStateTarget::StaticClass, TEXT("/Script/InteractiveToolsFramework"), TEXT("UGizmoStateTarget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGizmoStateTarget);
	DEFINE_FUNCTION(IGizmoFloatParameterSource::execEndModify)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EndModify();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IGizmoFloatParameterSource::execSetParameter)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetParameter(Z_Param_NewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IGizmoFloatParameterSource::execBeginModify)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BeginModify();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IGizmoFloatParameterSource::execGetParameter)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetParameter();
		P_NATIVE_END;
	}
	void UGizmoFloatParameterSource::StaticRegisterNativesUGizmoFloatParameterSource()
	{
		UClass* Class = UGizmoFloatParameterSource::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BeginModify", &IGizmoFloatParameterSource::execBeginModify },
			{ "EndModify", &IGizmoFloatParameterSource::execEndModify },
			{ "GetParameter", &IGizmoFloatParameterSource::execGetParameter },
			{ "SetParameter", &IGizmoFloatParameterSource::execSetParameter },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGizmoFloatParameterSource_BeginModify_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGizmoFloatParameterSource_BeginModify_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** notify ParameterSource that a parameter modification is about to begin */" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoInterfaces.h" },
		{ "ToolTip", "notify ParameterSource that a parameter modification is about to begin" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGizmoFloatParameterSource_BeginModify_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGizmoFloatParameterSource, nullptr, "BeginModify", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGizmoFloatParameterSource_BeginModify_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGizmoFloatParameterSource_BeginModify_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGizmoFloatParameterSource_BeginModify()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGizmoFloatParameterSource_BeginModify_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGizmoFloatParameterSource_EndModify_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGizmoFloatParameterSource_EndModify_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** notify ParameterSource that a parameter modification is complete */" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoInterfaces.h" },
		{ "ToolTip", "notify ParameterSource that a parameter modification is complete" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGizmoFloatParameterSource_EndModify_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGizmoFloatParameterSource, nullptr, "EndModify", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGizmoFloatParameterSource_EndModify_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGizmoFloatParameterSource_EndModify_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGizmoFloatParameterSource_EndModify()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGizmoFloatParameterSource_EndModify_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGizmoFloatParameterSource_GetParameter_Statics
	{
		struct GizmoFloatParameterSource_eventGetParameter_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGizmoFloatParameterSource_GetParameter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GizmoFloatParameterSource_eventGetParameter_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGizmoFloatParameterSource_GetParameter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGizmoFloatParameterSource_GetParameter_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGizmoFloatParameterSource_GetParameter_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** @return value of parameter */" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoInterfaces.h" },
		{ "ToolTip", "@return value of parameter" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGizmoFloatParameterSource_GetParameter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGizmoFloatParameterSource, nullptr, "GetParameter", nullptr, nullptr, sizeof(GizmoFloatParameterSource_eventGetParameter_Parms), Z_Construct_UFunction_UGizmoFloatParameterSource_GetParameter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGizmoFloatParameterSource_GetParameter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGizmoFloatParameterSource_GetParameter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGizmoFloatParameterSource_GetParameter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGizmoFloatParameterSource_GetParameter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGizmoFloatParameterSource_GetParameter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGizmoFloatParameterSource_SetParameter_Statics
	{
		struct GizmoFloatParameterSource_eventSetParameter_Parms
		{
			float NewValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGizmoFloatParameterSource_SetParameter_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GizmoFloatParameterSource_eventSetParameter_Parms, NewValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGizmoFloatParameterSource_SetParameter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGizmoFloatParameterSource_SetParameter_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGizmoFloatParameterSource_SetParameter_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** set value of parameter */" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoInterfaces.h" },
		{ "ToolTip", "set value of parameter" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGizmoFloatParameterSource_SetParameter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGizmoFloatParameterSource, nullptr, "SetParameter", nullptr, nullptr, sizeof(GizmoFloatParameterSource_eventSetParameter_Parms), Z_Construct_UFunction_UGizmoFloatParameterSource_SetParameter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGizmoFloatParameterSource_SetParameter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGizmoFloatParameterSource_SetParameter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGizmoFloatParameterSource_SetParameter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGizmoFloatParameterSource_SetParameter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGizmoFloatParameterSource_SetParameter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UGizmoFloatParameterSource_NoRegister()
	{
		return UGizmoFloatParameterSource::StaticClass();
	}
	struct Z_Construct_UClass_UGizmoFloatParameterSource_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGizmoFloatParameterSource_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGizmoFloatParameterSource_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGizmoFloatParameterSource_BeginModify, "BeginModify" }, // 1114911507
		{ &Z_Construct_UFunction_UGizmoFloatParameterSource_EndModify, "EndModify" }, // 856818380
		{ &Z_Construct_UFunction_UGizmoFloatParameterSource_GetParameter, "GetParameter" }, // 3934542285
		{ &Z_Construct_UFunction_UGizmoFloatParameterSource_SetParameter, "SetParameter" }, // 705348657
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoFloatParameterSource_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoInterfaces.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGizmoFloatParameterSource_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IGizmoFloatParameterSource>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGizmoFloatParameterSource_Statics::ClassParams = {
		&UGizmoFloatParameterSource::StaticClass,
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
		0x001040A1u,
		METADATA_PARAMS(Z_Construct_UClass_UGizmoFloatParameterSource_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoFloatParameterSource_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGizmoFloatParameterSource()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGizmoFloatParameterSource_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGizmoFloatParameterSource, 2612433487);
	template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<UGizmoFloatParameterSource>()
	{
		return UGizmoFloatParameterSource::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGizmoFloatParameterSource(Z_Construct_UClass_UGizmoFloatParameterSource, &UGizmoFloatParameterSource::StaticClass, TEXT("/Script/InteractiveToolsFramework"), TEXT("UGizmoFloatParameterSource"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGizmoFloatParameterSource);
	DEFINE_FUNCTION(IGizmoVec2ParameterSource::execEndModify)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EndModify();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IGizmoVec2ParameterSource::execSetParameter)
	{
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_NewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetParameter(Z_Param_Out_NewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IGizmoVec2ParameterSource::execBeginModify)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BeginModify();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IGizmoVec2ParameterSource::execGetParameter)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector2D*)Z_Param__Result=P_THIS->GetParameter();
		P_NATIVE_END;
	}
	void UGizmoVec2ParameterSource::StaticRegisterNativesUGizmoVec2ParameterSource()
	{
		UClass* Class = UGizmoVec2ParameterSource::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BeginModify", &IGizmoVec2ParameterSource::execBeginModify },
			{ "EndModify", &IGizmoVec2ParameterSource::execEndModify },
			{ "GetParameter", &IGizmoVec2ParameterSource::execGetParameter },
			{ "SetParameter", &IGizmoVec2ParameterSource::execSetParameter },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGizmoVec2ParameterSource_BeginModify_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGizmoVec2ParameterSource_BeginModify_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** notify ParameterSource that a parameter modification is about to begin */" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoInterfaces.h" },
		{ "ToolTip", "notify ParameterSource that a parameter modification is about to begin" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGizmoVec2ParameterSource_BeginModify_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGizmoVec2ParameterSource, nullptr, "BeginModify", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGizmoVec2ParameterSource_BeginModify_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGizmoVec2ParameterSource_BeginModify_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGizmoVec2ParameterSource_BeginModify()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGizmoVec2ParameterSource_BeginModify_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGizmoVec2ParameterSource_EndModify_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGizmoVec2ParameterSource_EndModify_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** notify ParameterSource that a parameter modification is complete */" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoInterfaces.h" },
		{ "ToolTip", "notify ParameterSource that a parameter modification is complete" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGizmoVec2ParameterSource_EndModify_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGizmoVec2ParameterSource, nullptr, "EndModify", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGizmoVec2ParameterSource_EndModify_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGizmoVec2ParameterSource_EndModify_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGizmoVec2ParameterSource_EndModify()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGizmoVec2ParameterSource_EndModify_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGizmoVec2ParameterSource_GetParameter_Statics
	{
		struct GizmoVec2ParameterSource_eventGetParameter_Parms
		{
			FVector2D ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGizmoVec2ParameterSource_GetParameter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GizmoVec2ParameterSource_eventGetParameter_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGizmoVec2ParameterSource_GetParameter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGizmoVec2ParameterSource_GetParameter_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGizmoVec2ParameterSource_GetParameter_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** @return value of parameter */" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoInterfaces.h" },
		{ "ToolTip", "@return value of parameter" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGizmoVec2ParameterSource_GetParameter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGizmoVec2ParameterSource, nullptr, "GetParameter", nullptr, nullptr, sizeof(GizmoVec2ParameterSource_eventGetParameter_Parms), Z_Construct_UFunction_UGizmoVec2ParameterSource_GetParameter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGizmoVec2ParameterSource_GetParameter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40820400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGizmoVec2ParameterSource_GetParameter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGizmoVec2ParameterSource_GetParameter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGizmoVec2ParameterSource_GetParameter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGizmoVec2ParameterSource_GetParameter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGizmoVec2ParameterSource_SetParameter_Statics
	{
		struct GizmoVec2ParameterSource_eventSetParameter_Parms
		{
			FVector2D NewValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGizmoVec2ParameterSource_SetParameter_Statics::NewProp_NewValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGizmoVec2ParameterSource_SetParameter_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GizmoVec2ParameterSource_eventSetParameter_Parms, NewValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UFunction_UGizmoVec2ParameterSource_SetParameter_Statics::NewProp_NewValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGizmoVec2ParameterSource_SetParameter_Statics::NewProp_NewValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGizmoVec2ParameterSource_SetParameter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGizmoVec2ParameterSource_SetParameter_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGizmoVec2ParameterSource_SetParameter_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** set value of parameter */" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoInterfaces.h" },
		{ "ToolTip", "set value of parameter" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGizmoVec2ParameterSource_SetParameter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGizmoVec2ParameterSource, nullptr, "SetParameter", nullptr, nullptr, sizeof(GizmoVec2ParameterSource_eventSetParameter_Parms), Z_Construct_UFunction_UGizmoVec2ParameterSource_SetParameter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGizmoVec2ParameterSource_SetParameter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00C20400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGizmoVec2ParameterSource_SetParameter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGizmoVec2ParameterSource_SetParameter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGizmoVec2ParameterSource_SetParameter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGizmoVec2ParameterSource_SetParameter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UGizmoVec2ParameterSource_NoRegister()
	{
		return UGizmoVec2ParameterSource::StaticClass();
	}
	struct Z_Construct_UClass_UGizmoVec2ParameterSource_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGizmoVec2ParameterSource_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGizmoVec2ParameterSource_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGizmoVec2ParameterSource_BeginModify, "BeginModify" }, // 3624329913
		{ &Z_Construct_UFunction_UGizmoVec2ParameterSource_EndModify, "EndModify" }, // 1037243217
		{ &Z_Construct_UFunction_UGizmoVec2ParameterSource_GetParameter, "GetParameter" }, // 112800851
		{ &Z_Construct_UFunction_UGizmoVec2ParameterSource_SetParameter, "SetParameter" }, // 2546519052
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoVec2ParameterSource_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoInterfaces.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGizmoVec2ParameterSource_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IGizmoVec2ParameterSource>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGizmoVec2ParameterSource_Statics::ClassParams = {
		&UGizmoVec2ParameterSource::StaticClass,
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
		0x001040A1u,
		METADATA_PARAMS(Z_Construct_UClass_UGizmoVec2ParameterSource_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoVec2ParameterSource_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGizmoVec2ParameterSource()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGizmoVec2ParameterSource_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGizmoVec2ParameterSource, 978698962);
	template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<UGizmoVec2ParameterSource>()
	{
		return UGizmoVec2ParameterSource::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGizmoVec2ParameterSource(Z_Construct_UClass_UGizmoVec2ParameterSource, &UGizmoVec2ParameterSource::StaticClass, TEXT("/Script/InteractiveToolsFramework"), TEXT("UGizmoVec2ParameterSource"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGizmoVec2ParameterSource);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
