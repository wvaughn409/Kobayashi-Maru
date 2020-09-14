// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AppleImageUtils/Public/AppleImageUtilsBlueprintProxy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAppleImageUtilsBlueprintProxy() {}
// Cross Module References
	APPLEIMAGEUTILS_API UFunction* Z_Construct_UDelegateFunction_AppleImageUtils_AppleImageConversionDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_AppleImageUtils();
	APPLEIMAGEUTILS_API UScriptStruct* Z_Construct_UScriptStruct_FAppleImageUtilsImageConversionResult();
	APPLEIMAGEUTILS_API UClass* Z_Construct_UClass_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_NoRegister();
	APPLEIMAGEUTILS_API UClass* Z_Construct_UClass_UAppleImageUtilsBaseAsyncTaskBlueprintProxy();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	APPLEIMAGEUTILS_API UEnum* Z_Construct_UEnum_AppleImageUtils_ETextureRotationDirection();
	ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_AppleImageUtils_AppleImageConversionDelegate__DelegateSignature_Statics
	{
		struct _Script_AppleImageUtils_eventAppleImageConversionDelegate_Parms
		{
			FAppleImageUtilsImageConversionResult ConversionResult;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConversionResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ConversionResult;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AppleImageUtils_AppleImageConversionDelegate__DelegateSignature_Statics::NewProp_ConversionResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_AppleImageUtils_AppleImageConversionDelegate__DelegateSignature_Statics::NewProp_ConversionResult = { "ConversionResult", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_AppleImageUtils_eventAppleImageConversionDelegate_Parms, ConversionResult), Z_Construct_UScriptStruct_FAppleImageUtilsImageConversionResult, METADATA_PARAMS(Z_Construct_UDelegateFunction_AppleImageUtils_AppleImageConversionDelegate__DelegateSignature_Statics::NewProp_ConversionResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AppleImageUtils_AppleImageConversionDelegate__DelegateSignature_Statics::NewProp_ConversionResult_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AppleImageUtils_AppleImageConversionDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AppleImageUtils_AppleImageConversionDelegate__DelegateSignature_Statics::NewProp_ConversionResult,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AppleImageUtils_AppleImageConversionDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AppleImageUtilsBlueprintProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AppleImageUtils_AppleImageConversionDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AppleImageUtils, nullptr, "AppleImageConversionDelegate__DelegateSignature", nullptr, nullptr, sizeof(_Script_AppleImageUtils_eventAppleImageConversionDelegate_Parms), Z_Construct_UDelegateFunction_AppleImageUtils_AppleImageConversionDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AppleImageUtils_AppleImageConversionDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_AppleImageUtils_AppleImageConversionDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AppleImageUtils_AppleImageConversionDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_AppleImageUtils_AppleImageConversionDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_AppleImageUtils_AppleImageConversionDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
class UScriptStruct* FAppleImageUtilsImageConversionResult::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern APPLEIMAGEUTILS_API uint32 Get_Z_Construct_UScriptStruct_FAppleImageUtilsImageConversionResult_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAppleImageUtilsImageConversionResult, Z_Construct_UPackage__Script_AppleImageUtils(), TEXT("AppleImageUtilsImageConversionResult"), sizeof(FAppleImageUtilsImageConversionResult), Get_Z_Construct_UScriptStruct_FAppleImageUtilsImageConversionResult_Hash());
	}
	return Singleton;
}
template<> APPLEIMAGEUTILS_API UScriptStruct* StaticStruct<FAppleImageUtilsImageConversionResult>()
{
	return FAppleImageUtilsImageConversionResult::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAppleImageUtilsImageConversionResult(FAppleImageUtilsImageConversionResult::StaticStruct, TEXT("/Script/AppleImageUtils"), TEXT("AppleImageUtilsImageConversionResult"), false, nullptr, nullptr);
static struct FScriptStruct_AppleImageUtils_StaticRegisterNativesFAppleImageUtilsImageConversionResult
{
	FScriptStruct_AppleImageUtils_StaticRegisterNativesFAppleImageUtilsImageConversionResult()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AppleImageUtilsImageConversionResult")),new UScriptStruct::TCppStructOps<FAppleImageUtilsImageConversionResult>);
	}
} ScriptStruct_AppleImageUtils_StaticRegisterNativesFAppleImageUtilsImageConversionResult;
	struct Z_Construct_UScriptStruct_FAppleImageUtilsImageConversionResult_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImageData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ImageData;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ImageData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Error_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Error;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAppleImageUtilsImageConversionResult_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AppleImageUtilsBlueprintProxy.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAppleImageUtilsImageConversionResult_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAppleImageUtilsImageConversionResult>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAppleImageUtilsImageConversionResult_Statics::NewProp_ImageData_MetaData[] = {
		{ "Category", "Image Conversion" },
		{ "ModuleRelativePath", "Public/AppleImageUtilsBlueprintProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAppleImageUtilsImageConversionResult_Statics::NewProp_ImageData = { "ImageData", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAppleImageUtilsImageConversionResult, ImageData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAppleImageUtilsImageConversionResult_Statics::NewProp_ImageData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAppleImageUtilsImageConversionResult_Statics::NewProp_ImageData_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAppleImageUtilsImageConversionResult_Statics::NewProp_ImageData_Inner = { "ImageData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAppleImageUtilsImageConversionResult_Statics::NewProp_Error_MetaData[] = {
		{ "Category", "Image Conversion" },
		{ "ModuleRelativePath", "Public/AppleImageUtilsBlueprintProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAppleImageUtilsImageConversionResult_Statics::NewProp_Error = { "Error", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAppleImageUtilsImageConversionResult, Error), METADATA_PARAMS(Z_Construct_UScriptStruct_FAppleImageUtilsImageConversionResult_Statics::NewProp_Error_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAppleImageUtilsImageConversionResult_Statics::NewProp_Error_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAppleImageUtilsImageConversionResult_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAppleImageUtilsImageConversionResult_Statics::NewProp_ImageData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAppleImageUtilsImageConversionResult_Statics::NewProp_ImageData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAppleImageUtilsImageConversionResult_Statics::NewProp_Error,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAppleImageUtilsImageConversionResult_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AppleImageUtils,
		nullptr,
		&NewStructOps,
		"AppleImageUtilsImageConversionResult",
		sizeof(FAppleImageUtilsImageConversionResult),
		alignof(FAppleImageUtilsImageConversionResult),
		Z_Construct_UScriptStruct_FAppleImageUtilsImageConversionResult_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAppleImageUtilsImageConversionResult_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAppleImageUtilsImageConversionResult_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAppleImageUtilsImageConversionResult_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAppleImageUtilsImageConversionResult()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAppleImageUtilsImageConversionResult_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AppleImageUtils();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AppleImageUtilsImageConversionResult"), sizeof(FAppleImageUtilsImageConversionResult), Get_Z_Construct_UScriptStruct_FAppleImageUtilsImageConversionResult_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAppleImageUtilsImageConversionResult_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAppleImageUtilsImageConversionResult_Hash() { return 4220892939U; }
	DEFINE_FUNCTION(UAppleImageUtilsBaseAsyncTaskBlueprintProxy::execCreateProxyObjectForConvertToPNG)
	{
		P_GET_OBJECT(UTexture,Z_Param_SourceImage);
		P_GET_UBOOL(Z_Param_bWantColor);
		P_GET_UBOOL(Z_Param_bUseGpu);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Scale);
		P_GET_ENUM(ETextureRotationDirection,Z_Param_Rotate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAppleImageUtilsBaseAsyncTaskBlueprintProxy**)Z_Param__Result=UAppleImageUtilsBaseAsyncTaskBlueprintProxy::CreateProxyObjectForConvertToPNG(Z_Param_SourceImage,Z_Param_bWantColor,Z_Param_bUseGpu,Z_Param_Scale,ETextureRotationDirection(Z_Param_Rotate));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAppleImageUtilsBaseAsyncTaskBlueprintProxy::execCreateProxyObjectForConvertToTIFF)
	{
		P_GET_OBJECT(UTexture,Z_Param_SourceImage);
		P_GET_UBOOL(Z_Param_bWantColor);
		P_GET_UBOOL(Z_Param_bUseGpu);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Scale);
		P_GET_ENUM(ETextureRotationDirection,Z_Param_Rotate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAppleImageUtilsBaseAsyncTaskBlueprintProxy**)Z_Param__Result=UAppleImageUtilsBaseAsyncTaskBlueprintProxy::CreateProxyObjectForConvertToTIFF(Z_Param_SourceImage,Z_Param_bWantColor,Z_Param_bUseGpu,Z_Param_Scale,ETextureRotationDirection(Z_Param_Rotate));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAppleImageUtilsBaseAsyncTaskBlueprintProxy::execCreateProxyObjectForConvertToHEIF)
	{
		P_GET_OBJECT(UTexture,Z_Param_SourceImage);
		P_GET_PROPERTY(FIntProperty,Z_Param_Quality);
		P_GET_UBOOL(Z_Param_bWantColor);
		P_GET_UBOOL(Z_Param_bUseGpu);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Scale);
		P_GET_ENUM(ETextureRotationDirection,Z_Param_Rotate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAppleImageUtilsBaseAsyncTaskBlueprintProxy**)Z_Param__Result=UAppleImageUtilsBaseAsyncTaskBlueprintProxy::CreateProxyObjectForConvertToHEIF(Z_Param_SourceImage,Z_Param_Quality,Z_Param_bWantColor,Z_Param_bUseGpu,Z_Param_Scale,ETextureRotationDirection(Z_Param_Rotate));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAppleImageUtilsBaseAsyncTaskBlueprintProxy::execCreateProxyObjectForConvertToJPEG)
	{
		P_GET_OBJECT(UTexture,Z_Param_SourceImage);
		P_GET_PROPERTY(FIntProperty,Z_Param_Quality);
		P_GET_UBOOL(Z_Param_bWantColor);
		P_GET_UBOOL(Z_Param_bUseGpu);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Scale);
		P_GET_ENUM(ETextureRotationDirection,Z_Param_Rotate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAppleImageUtilsBaseAsyncTaskBlueprintProxy**)Z_Param__Result=UAppleImageUtilsBaseAsyncTaskBlueprintProxy::CreateProxyObjectForConvertToJPEG(Z_Param_SourceImage,Z_Param_Quality,Z_Param_bWantColor,Z_Param_bUseGpu,Z_Param_Scale,ETextureRotationDirection(Z_Param_Rotate));
		P_NATIVE_END;
	}
	void UAppleImageUtilsBaseAsyncTaskBlueprintProxy::StaticRegisterNativesUAppleImageUtilsBaseAsyncTaskBlueprintProxy()
	{
		UClass* Class = UAppleImageUtilsBaseAsyncTaskBlueprintProxy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateProxyObjectForConvertToHEIF", &UAppleImageUtilsBaseAsyncTaskBlueprintProxy::execCreateProxyObjectForConvertToHEIF },
			{ "CreateProxyObjectForConvertToJPEG", &UAppleImageUtilsBaseAsyncTaskBlueprintProxy::execCreateProxyObjectForConvertToJPEG },
			{ "CreateProxyObjectForConvertToPNG", &UAppleImageUtilsBaseAsyncTaskBlueprintProxy::execCreateProxyObjectForConvertToPNG },
			{ "CreateProxyObjectForConvertToTIFF", &UAppleImageUtilsBaseAsyncTaskBlueprintProxy::execCreateProxyObjectForConvertToTIFF },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToHEIF_Statics
	{
		struct AppleImageUtilsBaseAsyncTaskBlueprintProxy_eventCreateProxyObjectForConvertToHEIF_Parms
		{
			UTexture* SourceImage;
			int32 Quality;
			bool bWantColor;
			bool bUseGpu;
			float Scale;
			ETextureRotationDirection Rotate;
			UAppleImageUtilsBaseAsyncTaskBlueprintProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Rotate;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Rotate_Underlying;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Scale;
		static void NewProp_bUseGpu_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseGpu;
		static void NewProp_bWantColor_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWantColor;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Quality;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SourceImage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToHEIF_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AppleImageUtilsBaseAsyncTaskBlueprintProxy_eventCreateProxyObjectForConvertToHEIF_Parms, ReturnValue), Z_Construct_UClass_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToHEIF_Statics::NewProp_Rotate = { "Rotate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AppleImageUtilsBaseAsyncTaskBlueprintProxy_eventCreateProxyObjectForConvertToHEIF_Parms, Rotate), Z_Construct_UEnum_AppleImageUtils_ETextureRotationDirection, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToHEIF_Statics::NewProp_Rotate_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToHEIF_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AppleImageUtilsBaseAsyncTaskBlueprintProxy_eventCreateProxyObjectForConvertToHEIF_Parms, Scale), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToHEIF_Statics::NewProp_bUseGpu_SetBit(void* Obj)
	{
		((AppleImageUtilsBaseAsyncTaskBlueprintProxy_eventCreateProxyObjectForConvertToHEIF_Parms*)Obj)->bUseGpu = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToHEIF_Statics::NewProp_bUseGpu = { "bUseGpu", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AppleImageUtilsBaseAsyncTaskBlueprintProxy_eventCreateProxyObjectForConvertToHEIF_Parms), &Z_Construct_UFunction_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToHEIF_Statics::NewProp_bUseGpu_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToHEIF_Statics::NewProp_bWantColor_SetBit(void* Obj)
	{
		((AppleImageUtilsBaseAsyncTaskBlueprintProxy_eventCreateProxyObjectForConvertToHEIF_Parms*)Obj)->bWantColor = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToHEIF_Statics::NewProp_bWantColor = { "bWantColor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AppleImageUtilsBaseAsyncTaskBlueprintProxy_eventCreateProxyObjectForConvertToHEIF_Parms), &Z_Construct_UFunction_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToHEIF_Statics::NewProp_bWantColor_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToHEIF_Statics::NewProp_Quality = { "Quality", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AppleImageUtilsBaseAsyncTaskBlueprintProxy_eventCreateProxyObjectForConvertToHEIF_Parms, Quality), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToHEIF_Statics::NewProp_SourceImage = { "SourceImage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AppleImageUtilsBaseAsyncTaskBlueprintProxy_eventCreateProxyObjectForConvertToHEIF_Parms, SourceImage), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToHEIF_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToHEIF_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToHEIF_Statics::NewProp_Rotate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToHEIF_Statics::NewProp_Rotate_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToHEIF_Statics::NewProp_Scale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToHEIF_Statics::NewProp_bUseGpu,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToHEIF_Statics::NewProp_bWantColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToHEIF_Statics::NewProp_Quality,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToHEIF_Statics::NewProp_SourceImage,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToHEIF_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Image Conversion" },
		{ "Comment", "/**\n\x09 * Converts a image to an array of HEIF data in a background task\n\x09 *\n\x09 * @param SourceImage the image to compress\n\x09 * @param Quality the quality level to compress to\n\x09 * @param bWantColor whether the HEIF is color (true) or monochrome (false)\n\x09 * @param bUseGpu whether to use the GPU (true) or the CPU (false) to compress\n\x09 * @param Scale whether to scale the image before conversion, defaults to no scaling\n\x09 * @param Rotate a direction to rotate the image in during conversion, defaults to none\n\x09 */" },
		{ "CPP_Default_bUseGpu", "true" },
		{ "CPP_Default_bWantColor", "true" },
		{ "CPP_Default_Quality", "85" },
		{ "CPP_Default_Rotate", "None" },
		{ "CPP_Default_Scale", "1.000000" },
		{ "DisplayName", "Convert To HEIF" },
		{ "ModuleRelativePath", "Public/AppleImageUtilsBlueprintProxy.h" },
		{ "ToolTip", "Converts a image to an array of HEIF data in a background task\n\n@param SourceImage the image to compress\n@param Quality the quality level to compress to\n@param bWantColor whether the HEIF is color (true) or monochrome (false)\n@param bUseGpu whether to use the GPU (true) or the CPU (false) to compress\n@param Scale whether to scale the image before conversion, defaults to no scaling\n@param Rotate a direction to rotate the image in during conversion, defaults to none" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToHEIF_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAppleImageUtilsBaseAsyncTaskBlueprintProxy, nullptr, "CreateProxyObjectForConvertToHEIF", nullptr, nullptr, sizeof(AppleImageUtilsBaseAsyncTaskBlueprintProxy_eventCreateProxyObjectForConvertToHEIF_Parms), Z_Construct_UFunction_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToHEIF_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToHEIF_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToHEIF_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToHEIF_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToHEIF()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToHEIF_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToJPEG_Statics
	{
		struct AppleImageUtilsBaseAsyncTaskBlueprintProxy_eventCreateProxyObjectForConvertToJPEG_Parms
		{
			UTexture* SourceImage;
			int32 Quality;
			bool bWantColor;
			bool bUseGpu;
			float Scale;
			ETextureRotationDirection Rotate;
			UAppleImageUtilsBaseAsyncTaskBlueprintProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Rotate;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Rotate_Underlying;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Scale;
		static void NewProp_bUseGpu_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseGpu;
		static void NewProp_bWantColor_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWantColor;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Quality;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SourceImage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToJPEG_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AppleImageUtilsBaseAsyncTaskBlueprintProxy_eventCreateProxyObjectForConvertToJPEG_Parms, ReturnValue), Z_Construct_UClass_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToJPEG_Statics::NewProp_Rotate = { "Rotate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AppleImageUtilsBaseAsyncTaskBlueprintProxy_eventCreateProxyObjectForConvertToJPEG_Parms, Rotate), Z_Construct_UEnum_AppleImageUtils_ETextureRotationDirection, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToJPEG_Statics::NewProp_Rotate_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToJPEG_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AppleImageUtilsBaseAsyncTaskBlueprintProxy_eventCreateProxyObjectForConvertToJPEG_Parms, Scale), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToJPEG_Statics::NewProp_bUseGpu_SetBit(void* Obj)
	{
		((AppleImageUtilsBaseAsyncTaskBlueprintProxy_eventCreateProxyObjectForConvertToJPEG_Parms*)Obj)->bUseGpu = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToJPEG_Statics::NewProp_bUseGpu = { "bUseGpu", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AppleImageUtilsBaseAsyncTaskBlueprintProxy_eventCreateProxyObjectForConvertToJPEG_Parms), &Z_Construct_UFunction_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToJPEG_Statics::NewProp_bUseGpu_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToJPEG_Statics::NewProp_bWantColor_SetBit(void* Obj)
	{
		((AppleImageUtilsBaseAsyncTaskBlueprintProxy_eventCreateProxyObjectForConvertToJPEG_Parms*)Obj)->bWantColor = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToJPEG_Statics::NewProp_bWantColor = { "bWantColor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AppleImageUtilsBaseAsyncTaskBlueprintProxy_eventCreateProxyObjectForConvertToJPEG_Parms), &Z_Construct_UFunction_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToJPEG_Statics::NewProp_bWantColor_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToJPEG_Statics::NewProp_Quality = { "Quality", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AppleImageUtilsBaseAsyncTaskBlueprintProxy_eventCreateProxyObjectForConvertToJPEG_Parms, Quality), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToJPEG_Statics::NewProp_SourceImage = { "SourceImage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AppleImageUtilsBaseAsyncTaskBlueprintProxy_eventCreateProxyObjectForConvertToJPEG_Parms, SourceImage), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToJPEG_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToJPEG_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToJPEG_Statics::NewProp_Rotate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToJPEG_Statics::NewProp_Rotate_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToJPEG_Statics::NewProp_Scale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToJPEG_Statics::NewProp_bUseGpu,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToJPEG_Statics::NewProp_bWantColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToJPEG_Statics::NewProp_Quality,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToJPEG_Statics::NewProp_SourceImage,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToJPEG_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Image Conversion" },
		{ "Comment", "/**\n\x09 * Converts a image to an array of JPEG data in a background task\n\x09 *\n\x09 * @param SourceImage the image to compress\n\x09 * @param Quality the quality level to compress to\n\x09 * @param bWantColor whether the JPEG is color (true) or monochrome (false)\n\x09 * @param bUseGpu whether to use the GPU (true) or the CPU (false) to compress\n\x09 * @param Scale whether to scale the image before conversion, defaults to no scaling\n\x09 * @param Rotate a direction to rotate the image in during conversion, defaults to none\n\x09 */" },
		{ "CPP_Default_bUseGpu", "true" },
		{ "CPP_Default_bWantColor", "true" },
		{ "CPP_Default_Quality", "85" },
		{ "CPP_Default_Rotate", "None" },
		{ "CPP_Default_Scale", "1.000000" },
		{ "DisplayName", "Convert To JPEG" },
		{ "ModuleRelativePath", "Public/AppleImageUtilsBlueprintProxy.h" },
		{ "ToolTip", "Converts a image to an array of JPEG data in a background task\n\n@param SourceImage the image to compress\n@param Quality the quality level to compress to\n@param bWantColor whether the JPEG is color (true) or monochrome (false)\n@param bUseGpu whether to use the GPU (true) or the CPU (false) to compress\n@param Scale whether to scale the image before conversion, defaults to no scaling\n@param Rotate a direction to rotate the image in during conversion, defaults to none" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToJPEG_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAppleImageUtilsBaseAsyncTaskBlueprintProxy, nullptr, "CreateProxyObjectForConvertToJPEG", nullptr, nullptr, sizeof(AppleImageUtilsBaseAsyncTaskBlueprintProxy_eventCreateProxyObjectForConvertToJPEG_Parms), Z_Construct_UFunction_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToJPEG_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToJPEG_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToJPEG_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToJPEG_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToJPEG()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToJPEG_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToPNG_Statics
	{
		struct AppleImageUtilsBaseAsyncTaskBlueprintProxy_eventCreateProxyObjectForConvertToPNG_Parms
		{
			UTexture* SourceImage;
			bool bWantColor;
			bool bUseGpu;
			float Scale;
			ETextureRotationDirection Rotate;
			UAppleImageUtilsBaseAsyncTaskBlueprintProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Rotate;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Rotate_Underlying;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Scale;
		static void NewProp_bUseGpu_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseGpu;
		static void NewProp_bWantColor_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWantColor;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SourceImage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToPNG_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AppleImageUtilsBaseAsyncTaskBlueprintProxy_eventCreateProxyObjectForConvertToPNG_Parms, ReturnValue), Z_Construct_UClass_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToPNG_Statics::NewProp_Rotate = { "Rotate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AppleImageUtilsBaseAsyncTaskBlueprintProxy_eventCreateProxyObjectForConvertToPNG_Parms, Rotate), Z_Construct_UEnum_AppleImageUtils_ETextureRotationDirection, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToPNG_Statics::NewProp_Rotate_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToPNG_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AppleImageUtilsBaseAsyncTaskBlueprintProxy_eventCreateProxyObjectForConvertToPNG_Parms, Scale), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToPNG_Statics::NewProp_bUseGpu_SetBit(void* Obj)
	{
		((AppleImageUtilsBaseAsyncTaskBlueprintProxy_eventCreateProxyObjectForConvertToPNG_Parms*)Obj)->bUseGpu = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToPNG_Statics::NewProp_bUseGpu = { "bUseGpu", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AppleImageUtilsBaseAsyncTaskBlueprintProxy_eventCreateProxyObjectForConvertToPNG_Parms), &Z_Construct_UFunction_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToPNG_Statics::NewProp_bUseGpu_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToPNG_Statics::NewProp_bWantColor_SetBit(void* Obj)
	{
		((AppleImageUtilsBaseAsyncTaskBlueprintProxy_eventCreateProxyObjectForConvertToPNG_Parms*)Obj)->bWantColor = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToPNG_Statics::NewProp_bWantColor = { "bWantColor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AppleImageUtilsBaseAsyncTaskBlueprintProxy_eventCreateProxyObjectForConvertToPNG_Parms), &Z_Construct_UFunction_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToPNG_Statics::NewProp_bWantColor_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToPNG_Statics::NewProp_SourceImage = { "SourceImage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AppleImageUtilsBaseAsyncTaskBlueprintProxy_eventCreateProxyObjectForConvertToPNG_Parms, SourceImage), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToPNG_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToPNG_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToPNG_Statics::NewProp_Rotate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToPNG_Statics::NewProp_Rotate_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToPNG_Statics::NewProp_Scale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToPNG_Statics::NewProp_bUseGpu,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToPNG_Statics::NewProp_bWantColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToPNG_Statics::NewProp_SourceImage,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToPNG_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Image Conversion" },
		{ "Comment", "/**\n\x09 * Converts a image to an array of TIFF data in a background task\n\x09 *\n\x09 * @param SourceImage the image to compress\n\x09 * @param Quality the quality level to compress to\n\x09 * @param bWantColor whether the PNG is color (true) or monochrome (false)\n\x09 * @param bUseGpu whether to use the GPU (true) or the CPU (false) to compress\n\x09 * @param Scale whether to scale the image before conversion, defaults to no scaling\n\x09 * @param Rotate a direction to rotate the image in during conversion, defaults to none\n\x09 */" },
		{ "CPP_Default_bUseGpu", "true" },
		{ "CPP_Default_bWantColor", "true" },
		{ "CPP_Default_Rotate", "None" },
		{ "CPP_Default_Scale", "1.000000" },
		{ "DisplayName", "Convert To PNG" },
		{ "ModuleRelativePath", "Public/AppleImageUtilsBlueprintProxy.h" },
		{ "ToolTip", "Converts a image to an array of TIFF data in a background task\n\n@param SourceImage the image to compress\n@param Quality the quality level to compress to\n@param bWantColor whether the PNG is color (true) or monochrome (false)\n@param bUseGpu whether to use the GPU (true) or the CPU (false) to compress\n@param Scale whether to scale the image before conversion, defaults to no scaling\n@param Rotate a direction to rotate the image in during conversion, defaults to none" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToPNG_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAppleImageUtilsBaseAsyncTaskBlueprintProxy, nullptr, "CreateProxyObjectForConvertToPNG", nullptr, nullptr, sizeof(AppleImageUtilsBaseAsyncTaskBlueprintProxy_eventCreateProxyObjectForConvertToPNG_Parms), Z_Construct_UFunction_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToPNG_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToPNG_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToPNG_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToPNG_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToPNG()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToPNG_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToTIFF_Statics
	{
		struct AppleImageUtilsBaseAsyncTaskBlueprintProxy_eventCreateProxyObjectForConvertToTIFF_Parms
		{
			UTexture* SourceImage;
			bool bWantColor;
			bool bUseGpu;
			float Scale;
			ETextureRotationDirection Rotate;
			UAppleImageUtilsBaseAsyncTaskBlueprintProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Rotate;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Rotate_Underlying;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Scale;
		static void NewProp_bUseGpu_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseGpu;
		static void NewProp_bWantColor_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWantColor;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SourceImage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToTIFF_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AppleImageUtilsBaseAsyncTaskBlueprintProxy_eventCreateProxyObjectForConvertToTIFF_Parms, ReturnValue), Z_Construct_UClass_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToTIFF_Statics::NewProp_Rotate = { "Rotate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AppleImageUtilsBaseAsyncTaskBlueprintProxy_eventCreateProxyObjectForConvertToTIFF_Parms, Rotate), Z_Construct_UEnum_AppleImageUtils_ETextureRotationDirection, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToTIFF_Statics::NewProp_Rotate_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToTIFF_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AppleImageUtilsBaseAsyncTaskBlueprintProxy_eventCreateProxyObjectForConvertToTIFF_Parms, Scale), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToTIFF_Statics::NewProp_bUseGpu_SetBit(void* Obj)
	{
		((AppleImageUtilsBaseAsyncTaskBlueprintProxy_eventCreateProxyObjectForConvertToTIFF_Parms*)Obj)->bUseGpu = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToTIFF_Statics::NewProp_bUseGpu = { "bUseGpu", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AppleImageUtilsBaseAsyncTaskBlueprintProxy_eventCreateProxyObjectForConvertToTIFF_Parms), &Z_Construct_UFunction_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToTIFF_Statics::NewProp_bUseGpu_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToTIFF_Statics::NewProp_bWantColor_SetBit(void* Obj)
	{
		((AppleImageUtilsBaseAsyncTaskBlueprintProxy_eventCreateProxyObjectForConvertToTIFF_Parms*)Obj)->bWantColor = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToTIFF_Statics::NewProp_bWantColor = { "bWantColor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AppleImageUtilsBaseAsyncTaskBlueprintProxy_eventCreateProxyObjectForConvertToTIFF_Parms), &Z_Construct_UFunction_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToTIFF_Statics::NewProp_bWantColor_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToTIFF_Statics::NewProp_SourceImage = { "SourceImage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AppleImageUtilsBaseAsyncTaskBlueprintProxy_eventCreateProxyObjectForConvertToTIFF_Parms, SourceImage), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToTIFF_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToTIFF_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToTIFF_Statics::NewProp_Rotate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToTIFF_Statics::NewProp_Rotate_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToTIFF_Statics::NewProp_Scale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToTIFF_Statics::NewProp_bUseGpu,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToTIFF_Statics::NewProp_bWantColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToTIFF_Statics::NewProp_SourceImage,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToTIFF_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Image Conversion" },
		{ "Comment", "/**\n\x09 * Converts a image to an array of TIFF data in a background task\n\x09 *\n\x09 * @param SourceImage the image to compress\n\x09 * @param Quality the quality level to compress to\n\x09 * @param bWantColor whether the TIFF is color (true) or monochrome (false)\n\x09 * @param bUseGpu whether to use the GPU (true) or the CPU (false) to compress\n\x09 * @param Scale whether to scale the image before conversion, defaults to no scaling\n\x09 * @param Rotate a direction to rotate the image in during conversion, defaults to none\n\x09 */" },
		{ "CPP_Default_bUseGpu", "true" },
		{ "CPP_Default_bWantColor", "true" },
		{ "CPP_Default_Rotate", "None" },
		{ "CPP_Default_Scale", "1.000000" },
		{ "DisplayName", "Convert To TIFF" },
		{ "ModuleRelativePath", "Public/AppleImageUtilsBlueprintProxy.h" },
		{ "ToolTip", "Converts a image to an array of TIFF data in a background task\n\n@param SourceImage the image to compress\n@param Quality the quality level to compress to\n@param bWantColor whether the TIFF is color (true) or monochrome (false)\n@param bUseGpu whether to use the GPU (true) or the CPU (false) to compress\n@param Scale whether to scale the image before conversion, defaults to no scaling\n@param Rotate a direction to rotate the image in during conversion, defaults to none" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToTIFF_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAppleImageUtilsBaseAsyncTaskBlueprintProxy, nullptr, "CreateProxyObjectForConvertToTIFF", nullptr, nullptr, sizeof(AppleImageUtilsBaseAsyncTaskBlueprintProxy_eventCreateProxyObjectForConvertToTIFF_Parms), Z_Construct_UFunction_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToTIFF_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToTIFF_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToTIFF_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToTIFF_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToTIFF()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToTIFF_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_NoRegister()
	{
		return UAppleImageUtilsBaseAsyncTaskBlueprintProxy::StaticClass();
	}
	struct Z_Construct_UClass_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConversionResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ConversionResult;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnFailure_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFailure;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSuccess;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AppleImageUtils,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToHEIF, "CreateProxyObjectForConvertToHEIF" }, // 3084560560
		{ &Z_Construct_UFunction_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToJPEG, "CreateProxyObjectForConvertToJPEG" }, // 1883217509
		{ &Z_Construct_UFunction_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToPNG, "CreateProxyObjectForConvertToPNG" }, // 3606647058
		{ &Z_Construct_UFunction_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToTIFF, "CreateProxyObjectForConvertToTIFF" }, // 3060495074
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AppleImageUtilsBlueprintProxy.h" },
		{ "ModuleRelativePath", "Public/AppleImageUtilsBlueprintProxy.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_Statics::NewProp_ConversionResult_MetaData[] = {
		{ "Category", "Image Conversion" },
		{ "ModuleRelativePath", "Public/AppleImageUtilsBlueprintProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_Statics::NewProp_ConversionResult = { "ConversionResult", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAppleImageUtilsBaseAsyncTaskBlueprintProxy, ConversionResult), Z_Construct_UScriptStruct_FAppleImageUtilsImageConversionResult, METADATA_PARAMS(Z_Construct_UClass_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_Statics::NewProp_ConversionResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_Statics::NewProp_ConversionResult_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_Statics::NewProp_OnFailure_MetaData[] = {
		{ "ModuleRelativePath", "Public/AppleImageUtilsBlueprintProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_Statics::NewProp_OnFailure = { "OnFailure", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAppleImageUtilsBaseAsyncTaskBlueprintProxy, OnFailure), Z_Construct_UDelegateFunction_AppleImageUtils_AppleImageConversionDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_Statics::NewProp_OnFailure_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_Statics::NewProp_OnFailure_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_Statics::NewProp_OnSuccess_MetaData[] = {
		{ "ModuleRelativePath", "Public/AppleImageUtilsBlueprintProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAppleImageUtilsBaseAsyncTaskBlueprintProxy, OnSuccess), Z_Construct_UDelegateFunction_AppleImageUtils_AppleImageConversionDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_Statics::NewProp_OnSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_Statics::NewProp_OnSuccess_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_Statics::NewProp_ConversionResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_Statics::NewProp_OnFailure,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_Statics::NewProp_OnSuccess,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAppleImageUtilsBaseAsyncTaskBlueprintProxy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_Statics::ClassParams = {
		&UAppleImageUtilsBaseAsyncTaskBlueprintProxy::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_Statics::PropPointers),
		0,
		0x008800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAppleImageUtilsBaseAsyncTaskBlueprintProxy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAppleImageUtilsBaseAsyncTaskBlueprintProxy, 726438225);
	template<> APPLEIMAGEUTILS_API UClass* StaticClass<UAppleImageUtilsBaseAsyncTaskBlueprintProxy>()
	{
		return UAppleImageUtilsBaseAsyncTaskBlueprintProxy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAppleImageUtilsBaseAsyncTaskBlueprintProxy(Z_Construct_UClass_UAppleImageUtilsBaseAsyncTaskBlueprintProxy, &UAppleImageUtilsBaseAsyncTaskBlueprintProxy::StaticClass, TEXT("/Script/AppleImageUtils"), TEXT("UAppleImageUtilsBaseAsyncTaskBlueprintProxy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAppleImageUtilsBaseAsyncTaskBlueprintProxy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
