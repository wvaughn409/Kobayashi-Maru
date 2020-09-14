// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieSceneCapture/Public/Protocols/UserDefinedCaptureProtocol.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUserDefinedCaptureProtocol() {}
// Cross Module References
	MOVIESCENECAPTURE_API UScriptStruct* Z_Construct_UScriptStruct_FCapturedPixels();
	UPackage* Z_Construct_UPackage__Script_MovieSceneCapture();
	MOVIESCENECAPTURE_API UScriptStruct* Z_Construct_UScriptStruct_FCapturedPixelsID();
	MOVIESCENECAPTURE_API UClass* Z_Construct_UClass_UUserDefinedCaptureProtocol_NoRegister();
	MOVIESCENECAPTURE_API UClass* Z_Construct_UClass_UUserDefinedCaptureProtocol();
	MOVIESCENECAPTURE_API UClass* Z_Construct_UClass_UMovieSceneImageCaptureProtocolBase();
	MOVIESCENECAPTURE_API UScriptStruct* Z_Construct_UScriptStruct_FFrameMetrics();
	ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
	MOVIESCENECAPTURE_API UClass* Z_Construct_UClass_UUserDefinedImageCaptureProtocol_NoRegister();
	MOVIESCENECAPTURE_API UClass* Z_Construct_UClass_UUserDefinedImageCaptureProtocol();
	IMAGEWRITEQUEUE_API UEnum* Z_Construct_UEnum_ImageWriteQueue_EDesiredImageFormat();
// End Cross Module References
class UScriptStruct* FCapturedPixels::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENECAPTURE_API uint32 Get_Z_Construct_UScriptStruct_FCapturedPixels_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCapturedPixels, Z_Construct_UPackage__Script_MovieSceneCapture(), TEXT("CapturedPixels"), sizeof(FCapturedPixels), Get_Z_Construct_UScriptStruct_FCapturedPixels_Hash());
	}
	return Singleton;
}
template<> MOVIESCENECAPTURE_API UScriptStruct* StaticStruct<FCapturedPixels>()
{
	return FCapturedPixels::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCapturedPixels(FCapturedPixels::StaticStruct, TEXT("/Script/MovieSceneCapture"), TEXT("CapturedPixels"), false, nullptr, nullptr);
static struct FScriptStruct_MovieSceneCapture_StaticRegisterNativesFCapturedPixels
{
	FScriptStruct_MovieSceneCapture_StaticRegisterNativesFCapturedPixels()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CapturedPixels")),new UScriptStruct::TCppStructOps<FCapturedPixels>);
	}
} ScriptStruct_MovieSceneCapture_StaticRegisterNativesFCapturedPixels;
	struct Z_Construct_UScriptStruct_FCapturedPixels_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCapturedPixels_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Protocols/UserDefinedCaptureProtocol.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCapturedPixels_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCapturedPixels>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCapturedPixels_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneCapture,
		nullptr,
		&NewStructOps,
		"CapturedPixels",
		sizeof(FCapturedPixels),
		alignof(FCapturedPixels),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCapturedPixels_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCapturedPixels_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCapturedPixels()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCapturedPixels_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieSceneCapture();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CapturedPixels"), sizeof(FCapturedPixels), Get_Z_Construct_UScriptStruct_FCapturedPixels_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCapturedPixels_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCapturedPixels_Hash() { return 3522681814U; }
class UScriptStruct* FCapturedPixelsID::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENECAPTURE_API uint32 Get_Z_Construct_UScriptStruct_FCapturedPixelsID_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCapturedPixelsID, Z_Construct_UPackage__Script_MovieSceneCapture(), TEXT("CapturedPixelsID"), sizeof(FCapturedPixelsID), Get_Z_Construct_UScriptStruct_FCapturedPixelsID_Hash());
	}
	return Singleton;
}
template<> MOVIESCENECAPTURE_API UScriptStruct* StaticStruct<FCapturedPixelsID>()
{
	return FCapturedPixelsID::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCapturedPixelsID(FCapturedPixelsID::StaticStruct, TEXT("/Script/MovieSceneCapture"), TEXT("CapturedPixelsID"), false, nullptr, nullptr);
static struct FScriptStruct_MovieSceneCapture_StaticRegisterNativesFCapturedPixelsID
{
	FScriptStruct_MovieSceneCapture_StaticRegisterNativesFCapturedPixelsID()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CapturedPixelsID")),new UScriptStruct::TCppStructOps<FCapturedPixelsID>);
	}
} ScriptStruct_MovieSceneCapture_StaticRegisterNativesFCapturedPixelsID;
	struct Z_Construct_UScriptStruct_FCapturedPixelsID_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Identifiers_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_Identifiers;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Identifiers_Key_KeyProp;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Identifiers_ValueProp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCapturedPixelsID_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Structure used as an identifier for a particular buffer within a capture. */" },
		{ "ModuleRelativePath", "Public/Protocols/UserDefinedCaptureProtocol.h" },
		{ "ToolTip", "Structure used as an identifier for a particular buffer within a capture." },
	};
#endif
	void* Z_Construct_UScriptStruct_FCapturedPixelsID_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCapturedPixelsID>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCapturedPixelsID_Statics::NewProp_Identifiers_MetaData[] = {
		{ "Category", "Capture" },
		{ "Comment", "/** Map of identifiers to their values for this ID. */" },
		{ "ModuleRelativePath", "Public/Protocols/UserDefinedCaptureProtocol.h" },
		{ "ToolTip", "Map of identifiers to their values for this ID." },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FCapturedPixelsID_Statics::NewProp_Identifiers = { "Identifiers", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCapturedPixelsID, Identifiers), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FCapturedPixelsID_Statics::NewProp_Identifiers_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCapturedPixelsID_Statics::NewProp_Identifiers_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCapturedPixelsID_Statics::NewProp_Identifiers_Key_KeyProp = { "Identifiers_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCapturedPixelsID_Statics::NewProp_Identifiers_ValueProp = { "Identifiers", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCapturedPixelsID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCapturedPixelsID_Statics::NewProp_Identifiers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCapturedPixelsID_Statics::NewProp_Identifiers_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCapturedPixelsID_Statics::NewProp_Identifiers_ValueProp,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCapturedPixelsID_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneCapture,
		nullptr,
		&NewStructOps,
		"CapturedPixelsID",
		sizeof(FCapturedPixelsID),
		alignof(FCapturedPixelsID),
		Z_Construct_UScriptStruct_FCapturedPixelsID_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCapturedPixelsID_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCapturedPixelsID_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCapturedPixelsID_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCapturedPixelsID()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCapturedPixelsID_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieSceneCapture();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CapturedPixelsID"), sizeof(FCapturedPixelsID), Get_Z_Construct_UScriptStruct_FCapturedPixelsID_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCapturedPixelsID_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCapturedPixelsID_Hash() { return 1924341701U; }
	DEFINE_FUNCTION(UUserDefinedCaptureProtocol::execGetCurrentFrameMetrics)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FFrameMetrics*)Z_Param__Result=P_THIS->GetCurrentFrameMetrics();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUserDefinedCaptureProtocol::execGenerateFilename)
	{
		P_GET_STRUCT_REF(FFrameMetrics,Z_Param_Out_InFrameMetrics);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GenerateFilename(Z_Param_Out_InFrameMetrics);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUserDefinedCaptureProtocol::execStopCapturingFinalPixels)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopCapturingFinalPixels();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUserDefinedCaptureProtocol::execStartCapturingFinalPixels)
	{
		P_GET_STRUCT_REF(FCapturedPixelsID,Z_Param_Out_StreamID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartCapturingFinalPixels(Z_Param_Out_StreamID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUserDefinedCaptureProtocol::execResolveBuffer)
	{
		P_GET_OBJECT(UTexture,Z_Param_Buffer);
		P_GET_STRUCT_REF(FCapturedPixelsID,Z_Param_Out_BufferID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResolveBuffer(Z_Param_Buffer,Z_Param_Out_BufferID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUserDefinedCaptureProtocol::execOnCanFinalize)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->OnCanFinalize_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUserDefinedCaptureProtocol::execOnSetup)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->OnSetup_Implementation();
		P_NATIVE_END;
	}
	static FName NAME_UUserDefinedCaptureProtocol_OnBeginFinalize = FName(TEXT("OnBeginFinalize"));
	void UUserDefinedCaptureProtocol::OnBeginFinalize()
	{
		ProcessEvent(FindFunctionChecked(NAME_UUserDefinedCaptureProtocol_OnBeginFinalize),NULL);
	}
	static FName NAME_UUserDefinedCaptureProtocol_OnCanFinalize = FName(TEXT("OnCanFinalize"));
	bool UUserDefinedCaptureProtocol::OnCanFinalize() const
	{
		UserDefinedCaptureProtocol_eventOnCanFinalize_Parms Parms;
		const_cast<UUserDefinedCaptureProtocol*>(this)->ProcessEvent(FindFunctionChecked(NAME_UUserDefinedCaptureProtocol_OnCanFinalize),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UUserDefinedCaptureProtocol_OnCaptureFrame = FName(TEXT("OnCaptureFrame"));
	void UUserDefinedCaptureProtocol::OnCaptureFrame()
	{
		ProcessEvent(FindFunctionChecked(NAME_UUserDefinedCaptureProtocol_OnCaptureFrame),NULL);
	}
	static FName NAME_UUserDefinedCaptureProtocol_OnFinalize = FName(TEXT("OnFinalize"));
	void UUserDefinedCaptureProtocol::OnFinalize()
	{
		ProcessEvent(FindFunctionChecked(NAME_UUserDefinedCaptureProtocol_OnFinalize),NULL);
	}
	static FName NAME_UUserDefinedCaptureProtocol_OnPauseCapture = FName(TEXT("OnPauseCapture"));
	void UUserDefinedCaptureProtocol::OnPauseCapture()
	{
		ProcessEvent(FindFunctionChecked(NAME_UUserDefinedCaptureProtocol_OnPauseCapture),NULL);
	}
	static FName NAME_UUserDefinedCaptureProtocol_OnPixelsReceived = FName(TEXT("OnPixelsReceived"));
	void UUserDefinedCaptureProtocol::OnPixelsReceived(FCapturedPixels const& Pixels, FCapturedPixelsID const& ID, FFrameMetrics FrameMetrics)
	{
		UserDefinedCaptureProtocol_eventOnPixelsReceived_Parms Parms;
		Parms.Pixels=Pixels;
		Parms.ID=ID;
		Parms.FrameMetrics=FrameMetrics;
		ProcessEvent(FindFunctionChecked(NAME_UUserDefinedCaptureProtocol_OnPixelsReceived),&Parms);
	}
	static FName NAME_UUserDefinedCaptureProtocol_OnPreTick = FName(TEXT("OnPreTick"));
	void UUserDefinedCaptureProtocol::OnPreTick()
	{
		ProcessEvent(FindFunctionChecked(NAME_UUserDefinedCaptureProtocol_OnPreTick),NULL);
	}
	static FName NAME_UUserDefinedCaptureProtocol_OnSetup = FName(TEXT("OnSetup"));
	bool UUserDefinedCaptureProtocol::OnSetup()
	{
		UserDefinedCaptureProtocol_eventOnSetup_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UUserDefinedCaptureProtocol_OnSetup),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UUserDefinedCaptureProtocol_OnStartCapture = FName(TEXT("OnStartCapture"));
	void UUserDefinedCaptureProtocol::OnStartCapture()
	{
		ProcessEvent(FindFunctionChecked(NAME_UUserDefinedCaptureProtocol_OnStartCapture),NULL);
	}
	static FName NAME_UUserDefinedCaptureProtocol_OnTick = FName(TEXT("OnTick"));
	void UUserDefinedCaptureProtocol::OnTick()
	{
		ProcessEvent(FindFunctionChecked(NAME_UUserDefinedCaptureProtocol_OnTick),NULL);
	}
	static FName NAME_UUserDefinedCaptureProtocol_OnWarmUp = FName(TEXT("OnWarmUp"));
	void UUserDefinedCaptureProtocol::OnWarmUp()
	{
		ProcessEvent(FindFunctionChecked(NAME_UUserDefinedCaptureProtocol_OnWarmUp),NULL);
	}
	void UUserDefinedCaptureProtocol::StaticRegisterNativesUUserDefinedCaptureProtocol()
	{
		UClass* Class = UUserDefinedCaptureProtocol::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GenerateFilename", &UUserDefinedCaptureProtocol::execGenerateFilename },
			{ "GetCurrentFrameMetrics", &UUserDefinedCaptureProtocol::execGetCurrentFrameMetrics },
			{ "OnCanFinalize", &UUserDefinedCaptureProtocol::execOnCanFinalize },
			{ "OnSetup", &UUserDefinedCaptureProtocol::execOnSetup },
			{ "ResolveBuffer", &UUserDefinedCaptureProtocol::execResolveBuffer },
			{ "StartCapturingFinalPixels", &UUserDefinedCaptureProtocol::execStartCapturingFinalPixels },
			{ "StopCapturingFinalPixels", &UUserDefinedCaptureProtocol::execStopCapturingFinalPixels },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUserDefinedCaptureProtocol_GenerateFilename_Statics
	{
		struct UserDefinedCaptureProtocol_eventGenerateFilename_Parms
		{
			FFrameMetrics InFrameMetrics;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InFrameMetrics_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InFrameMetrics;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUserDefinedCaptureProtocol_GenerateFilename_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UserDefinedCaptureProtocol_eventGenerateFilename_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserDefinedCaptureProtocol_GenerateFilename_Statics::NewProp_InFrameMetrics_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUserDefinedCaptureProtocol_GenerateFilename_Statics::NewProp_InFrameMetrics = { "InFrameMetrics", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UserDefinedCaptureProtocol_eventGenerateFilename_Parms, InFrameMetrics), Z_Construct_UScriptStruct_FFrameMetrics, METADATA_PARAMS(Z_Construct_UFunction_UUserDefinedCaptureProtocol_GenerateFilename_Statics::NewProp_InFrameMetrics_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserDefinedCaptureProtocol_GenerateFilename_Statics::NewProp_InFrameMetrics_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUserDefinedCaptureProtocol_GenerateFilename_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserDefinedCaptureProtocol_GenerateFilename_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserDefinedCaptureProtocol_GenerateFilename_Statics::NewProp_InFrameMetrics,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserDefinedCaptureProtocol_GenerateFilename_Statics::Function_MetaDataParams[] = {
		{ "Category", "Capture" },
		{ "Comment", "/**\n\x09 * Generate a filename for the current frame\n\x09 */" },
		{ "ModuleRelativePath", "Public/Protocols/UserDefinedCaptureProtocol.h" },
		{ "ToolTip", "Generate a filename for the current frame" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserDefinedCaptureProtocol_GenerateFilename_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUserDefinedCaptureProtocol, nullptr, "GenerateFilename", nullptr, nullptr, sizeof(UserDefinedCaptureProtocol_eventGenerateFilename_Parms), Z_Construct_UFunction_UUserDefinedCaptureProtocol_GenerateFilename_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserDefinedCaptureProtocol_GenerateFilename_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUserDefinedCaptureProtocol_GenerateFilename_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserDefinedCaptureProtocol_GenerateFilename_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUserDefinedCaptureProtocol_GenerateFilename()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUserDefinedCaptureProtocol_GenerateFilename_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUserDefinedCaptureProtocol_GetCurrentFrameMetrics_Statics
	{
		struct UserDefinedCaptureProtocol_eventGetCurrentFrameMetrics_Parms
		{
			FFrameMetrics ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUserDefinedCaptureProtocol_GetCurrentFrameMetrics_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UserDefinedCaptureProtocol_eventGetCurrentFrameMetrics_Parms, ReturnValue), Z_Construct_UScriptStruct_FFrameMetrics, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUserDefinedCaptureProtocol_GetCurrentFrameMetrics_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserDefinedCaptureProtocol_GetCurrentFrameMetrics_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserDefinedCaptureProtocol_GetCurrentFrameMetrics_Statics::Function_MetaDataParams[] = {
		{ "Category", "Capture" },
		{ "Comment", "/**\n\x09 * Access this protocol's current frame metrics\n\x09 */" },
		{ "ModuleRelativePath", "Public/Protocols/UserDefinedCaptureProtocol.h" },
		{ "ToolTip", "Access this protocol's current frame metrics" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserDefinedCaptureProtocol_GetCurrentFrameMetrics_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUserDefinedCaptureProtocol, nullptr, "GetCurrentFrameMetrics", nullptr, nullptr, sizeof(UserDefinedCaptureProtocol_eventGetCurrentFrameMetrics_Parms), Z_Construct_UFunction_UUserDefinedCaptureProtocol_GetCurrentFrameMetrics_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserDefinedCaptureProtocol_GetCurrentFrameMetrics_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUserDefinedCaptureProtocol_GetCurrentFrameMetrics_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserDefinedCaptureProtocol_GetCurrentFrameMetrics_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUserDefinedCaptureProtocol_GetCurrentFrameMetrics()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUserDefinedCaptureProtocol_GetCurrentFrameMetrics_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnBeginFinalize_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnBeginFinalize_Statics::Function_MetaDataParams[] = {
		{ "Category", "Capture" },
		{ "Comment", "/**\n\x09 * Called when this protocol is going to be shut down - should not capture any more frames\n\x09 */" },
		{ "ModuleRelativePath", "Public/Protocols/UserDefinedCaptureProtocol.h" },
		{ "ToolTip", "Called when this protocol is going to be shut down - should not capture any more frames" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnBeginFinalize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUserDefinedCaptureProtocol, nullptr, "OnBeginFinalize", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnBeginFinalize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnBeginFinalize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnBeginFinalize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnBeginFinalize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnCanFinalize_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnCanFinalize_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UserDefinedCaptureProtocol_eventOnCanFinalize_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnCanFinalize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UserDefinedCaptureProtocol_eventOnCanFinalize_Parms), &Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnCanFinalize_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnCanFinalize_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnCanFinalize_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnCanFinalize_Statics::Function_MetaDataParams[] = {
		{ "Category", "Capture" },
		{ "Comment", "/**\n\x09 * Called to check whether this protocol has finished any pending tasks, and can now be shut down\n\x09 */" },
		{ "ModuleRelativePath", "Public/Protocols/UserDefinedCaptureProtocol.h" },
		{ "ToolTip", "Called to check whether this protocol has finished any pending tasks, and can now be shut down" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnCanFinalize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUserDefinedCaptureProtocol, nullptr, "OnCanFinalize", nullptr, nullptr, sizeof(UserDefinedCaptureProtocol_eventOnCanFinalize_Parms), Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnCanFinalize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnCanFinalize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnCanFinalize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnCanFinalize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnCanFinalize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnCanFinalize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnCaptureFrame_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnCaptureFrame_Statics::Function_MetaDataParams[] = {
		{ "Category", "Capture" },
		{ "Comment", "/**\n\x09 * Called when this protocol should capture the current frame\n\x09 */" },
		{ "ModuleRelativePath", "Public/Protocols/UserDefinedCaptureProtocol.h" },
		{ "ToolTip", "Called when this protocol should capture the current frame" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnCaptureFrame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUserDefinedCaptureProtocol, nullptr, "OnCaptureFrame", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnCaptureFrame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnCaptureFrame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnCaptureFrame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnCaptureFrame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnFinalize_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnFinalize_Statics::Function_MetaDataParams[] = {
		{ "Category", "Capture" },
		{ "Comment", "/**\n\x09 * Called to complete finalization of this protocol\n\x09 */" },
		{ "ModuleRelativePath", "Public/Protocols/UserDefinedCaptureProtocol.h" },
		{ "ToolTip", "Called to complete finalization of this protocol" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnFinalize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUserDefinedCaptureProtocol, nullptr, "OnFinalize", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnFinalize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnFinalize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnFinalize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnFinalize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnPauseCapture_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnPauseCapture_Statics::Function_MetaDataParams[] = {
		{ "Category", "Capture" },
		{ "Comment", "/**\n\x09 * Called when this protocol should temporarily stop capturing frames\n\x09 */" },
		{ "ModuleRelativePath", "Public/Protocols/UserDefinedCaptureProtocol.h" },
		{ "ToolTip", "Called when this protocol should temporarily stop capturing frames" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnPauseCapture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUserDefinedCaptureProtocol, nullptr, "OnPauseCapture", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnPauseCapture_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnPauseCapture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnPauseCapture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnPauseCapture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnPixelsReceived_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FrameMetrics;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Pixels_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Pixels;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnPixelsReceived_Statics::NewProp_FrameMetrics = { "FrameMetrics", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UserDefinedCaptureProtocol_eventOnPixelsReceived_Parms, FrameMetrics), Z_Construct_UScriptStruct_FFrameMetrics, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnPixelsReceived_Statics::NewProp_ID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnPixelsReceived_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UserDefinedCaptureProtocol_eventOnPixelsReceived_Parms, ID), Z_Construct_UScriptStruct_FCapturedPixelsID, METADATA_PARAMS(Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnPixelsReceived_Statics::NewProp_ID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnPixelsReceived_Statics::NewProp_ID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnPixelsReceived_Statics::NewProp_Pixels_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnPixelsReceived_Statics::NewProp_Pixels = { "Pixels", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UserDefinedCaptureProtocol_eventOnPixelsReceived_Parms, Pixels), Z_Construct_UScriptStruct_FCapturedPixels, METADATA_PARAMS(Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnPixelsReceived_Statics::NewProp_Pixels_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnPixelsReceived_Statics::NewProp_Pixels_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnPixelsReceived_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnPixelsReceived_Statics::NewProp_FrameMetrics,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnPixelsReceived_Statics::NewProp_ID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnPixelsReceived_Statics::NewProp_Pixels,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnPixelsReceived_Statics::Function_MetaDataParams[] = {
		{ "Category", "Capture" },
		{ "Comment", "/**\n\x09 * Called when pixels have been received for the specified stream name\n\x09 */" },
		{ "ModuleRelativePath", "Public/Protocols/UserDefinedCaptureProtocol.h" },
		{ "ToolTip", "Called when pixels have been received for the specified stream name" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnPixelsReceived_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUserDefinedCaptureProtocol, nullptr, "OnPixelsReceived", nullptr, nullptr, sizeof(UserDefinedCaptureProtocol_eventOnPixelsReceived_Parms), Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnPixelsReceived_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnPixelsReceived_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08480800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnPixelsReceived_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnPixelsReceived_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnPixelsReceived()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnPixelsReceived_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnPreTick_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnPreTick_Statics::Function_MetaDataParams[] = {
		{ "Category", "Capture" },
		{ "Comment", "/**\n\x09 * Called before the capture process itself is ticked, before each frame is set up for capture\n\x09 * Useful for any pre-frame set up or resetting the previous frame's state\n\x09 */" },
		{ "ModuleRelativePath", "Public/Protocols/UserDefinedCaptureProtocol.h" },
		{ "ToolTip", "Called before the capture process itself is ticked, before each frame is set up for capture\nUseful for any pre-frame set up or resetting the previous frame's state" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnPreTick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUserDefinedCaptureProtocol, nullptr, "OnPreTick", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnPreTick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnPreTick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnPreTick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnPreTick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnSetup_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnSetup_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UserDefinedCaptureProtocol_eventOnSetup_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnSetup_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UserDefinedCaptureProtocol_eventOnSetup_Parms), &Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnSetup_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnSetup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnSetup_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnSetup_Statics::Function_MetaDataParams[] = {
		{ "Category", "Capture" },
		{ "Comment", "/**\n\x09 * Called once at the start of the capture process, but before any warmup frames\n\x09 * @return true if this protocol set up successfully, false otherwise\n\x09 */" },
		{ "ModuleRelativePath", "Public/Protocols/UserDefinedCaptureProtocol.h" },
		{ "ToolTip", "Called once at the start of the capture process, but before any warmup frames\n@return true if this protocol set up successfully, false otherwise" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnSetup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUserDefinedCaptureProtocol, nullptr, "OnSetup", nullptr, nullptr, sizeof(UserDefinedCaptureProtocol_eventOnSetup_Parms), Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnSetup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnSetup_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnSetup_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnSetup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnSetup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnSetup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnStartCapture_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnStartCapture_Statics::Function_MetaDataParams[] = {
		{ "Category", "Capture" },
		{ "Comment", "/**\n\x09 * Called when this protocol should start capturing frames\n\x09 */" },
		{ "ModuleRelativePath", "Public/Protocols/UserDefinedCaptureProtocol.h" },
		{ "ToolTip", "Called when this protocol should start capturing frames" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnStartCapture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUserDefinedCaptureProtocol, nullptr, "OnStartCapture", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnStartCapture_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnStartCapture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnStartCapture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnStartCapture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnTick_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnTick_Statics::Function_MetaDataParams[] = {
		{ "Category", "Capture" },
		{ "Comment", "/**\n\x09 * Called after the capture process itself is ticked, after the frame is set up for capture, but before most actors have ticked\n\x09 */" },
		{ "ModuleRelativePath", "Public/Protocols/UserDefinedCaptureProtocol.h" },
		{ "ToolTip", "Called after the capture process itself is ticked, after the frame is set up for capture, but before most actors have ticked" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnTick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUserDefinedCaptureProtocol, nullptr, "OnTick", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnTick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnTick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnTick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnTick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnWarmUp_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnWarmUp_Statics::Function_MetaDataParams[] = {
		{ "Category", "Capture" },
		{ "Comment", "/**\n\x09 * Called when the capture process is warming up. Protocols may transition from either an initialized, or capturing state to warm-up\n\x09 */" },
		{ "ModuleRelativePath", "Public/Protocols/UserDefinedCaptureProtocol.h" },
		{ "ToolTip", "Called when the capture process is warming up. Protocols may transition from either an initialized, or capturing state to warm-up" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnWarmUp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUserDefinedCaptureProtocol, nullptr, "OnWarmUp", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnWarmUp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnWarmUp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnWarmUp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnWarmUp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUserDefinedCaptureProtocol_ResolveBuffer_Statics
	{
		struct UserDefinedCaptureProtocol_eventResolveBuffer_Parms
		{
			UTexture* Buffer;
			FCapturedPixelsID BufferID;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BufferID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BufferID;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Buffer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserDefinedCaptureProtocol_ResolveBuffer_Statics::NewProp_BufferID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUserDefinedCaptureProtocol_ResolveBuffer_Statics::NewProp_BufferID = { "BufferID", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UserDefinedCaptureProtocol_eventResolveBuffer_Parms, BufferID), Z_Construct_UScriptStruct_FCapturedPixelsID, METADATA_PARAMS(Z_Construct_UFunction_UUserDefinedCaptureProtocol_ResolveBuffer_Statics::NewProp_BufferID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserDefinedCaptureProtocol_ResolveBuffer_Statics::NewProp_BufferID_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUserDefinedCaptureProtocol_ResolveBuffer_Statics::NewProp_Buffer = { "Buffer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UserDefinedCaptureProtocol_eventResolveBuffer_Parms, Buffer), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUserDefinedCaptureProtocol_ResolveBuffer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserDefinedCaptureProtocol_ResolveBuffer_Statics::NewProp_BufferID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserDefinedCaptureProtocol_ResolveBuffer_Statics::NewProp_Buffer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserDefinedCaptureProtocol_ResolveBuffer_Statics::Function_MetaDataParams[] = {
		{ "Category", "Capture" },
		{ "Comment", "/*\n\x09 * Resolve the specified buffer and pass it directly to the specified handler when done (does not pass to any bound streams)\n\x09 * \n\x09 * @param Buffer          The desired buffer to save\n\x09 * @param BufferID        The ID of this buffer that is passed to the pixel handler (e.g. a composition pass name).\n\x09 */" },
		{ "ModuleRelativePath", "Public/Protocols/UserDefinedCaptureProtocol.h" },
		{ "ToolTip", "* Resolve the specified buffer and pass it directly to the specified handler when done (does not pass to any bound streams)\n*\n* @param Buffer          The desired buffer to save\n* @param BufferID        The ID of this buffer that is passed to the pixel handler (e.g. a composition pass name)." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserDefinedCaptureProtocol_ResolveBuffer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUserDefinedCaptureProtocol, nullptr, "ResolveBuffer", nullptr, nullptr, sizeof(UserDefinedCaptureProtocol_eventResolveBuffer_Parms), Z_Construct_UFunction_UUserDefinedCaptureProtocol_ResolveBuffer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserDefinedCaptureProtocol_ResolveBuffer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUserDefinedCaptureProtocol_ResolveBuffer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserDefinedCaptureProtocol_ResolveBuffer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUserDefinedCaptureProtocol_ResolveBuffer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUserDefinedCaptureProtocol_ResolveBuffer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUserDefinedCaptureProtocol_StartCapturingFinalPixels_Statics
	{
		struct UserDefinedCaptureProtocol_eventStartCapturingFinalPixels_Parms
		{
			FCapturedPixelsID StreamID;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StreamID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StreamID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserDefinedCaptureProtocol_StartCapturingFinalPixels_Statics::NewProp_StreamID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUserDefinedCaptureProtocol_StartCapturingFinalPixels_Statics::NewProp_StreamID = { "StreamID", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UserDefinedCaptureProtocol_eventStartCapturingFinalPixels_Parms, StreamID), Z_Construct_UScriptStruct_FCapturedPixelsID, METADATA_PARAMS(Z_Construct_UFunction_UUserDefinedCaptureProtocol_StartCapturingFinalPixels_Statics::NewProp_StreamID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserDefinedCaptureProtocol_StartCapturingFinalPixels_Statics::NewProp_StreamID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUserDefinedCaptureProtocol_StartCapturingFinalPixels_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserDefinedCaptureProtocol_StartCapturingFinalPixels_Statics::NewProp_StreamID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserDefinedCaptureProtocol_StartCapturingFinalPixels_Statics::Function_MetaDataParams[] = {
		{ "Category", "Capture" },
		{ "Comment", "/**\n\x09 * Instruct this protocol to start capturing LDR final pixels (including slate widgets and burn-ins)\n\x09 *\n\x09 * @param StreamID        The identifier to use for the final pixels buffer\n\x09 */" },
		{ "ModuleRelativePath", "Public/Protocols/UserDefinedCaptureProtocol.h" },
		{ "ToolTip", "Instruct this protocol to start capturing LDR final pixels (including slate widgets and burn-ins)\n\n@param StreamID        The identifier to use for the final pixels buffer" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserDefinedCaptureProtocol_StartCapturingFinalPixels_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUserDefinedCaptureProtocol, nullptr, "StartCapturingFinalPixels", nullptr, nullptr, sizeof(UserDefinedCaptureProtocol_eventStartCapturingFinalPixels_Parms), Z_Construct_UFunction_UUserDefinedCaptureProtocol_StartCapturingFinalPixels_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserDefinedCaptureProtocol_StartCapturingFinalPixels_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUserDefinedCaptureProtocol_StartCapturingFinalPixels_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserDefinedCaptureProtocol_StartCapturingFinalPixels_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUserDefinedCaptureProtocol_StartCapturingFinalPixels()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUserDefinedCaptureProtocol_StartCapturingFinalPixels_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUserDefinedCaptureProtocol_StopCapturingFinalPixels_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserDefinedCaptureProtocol_StopCapturingFinalPixels_Statics::Function_MetaDataParams[] = {
		{ "Category", "Capture" },
		{ "Comment", "/**\n\x09 * Instruct this protocol to stop capturing LDR final pixels\n\x09 */" },
		{ "ModuleRelativePath", "Public/Protocols/UserDefinedCaptureProtocol.h" },
		{ "ToolTip", "Instruct this protocol to stop capturing LDR final pixels" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserDefinedCaptureProtocol_StopCapturingFinalPixels_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUserDefinedCaptureProtocol, nullptr, "StopCapturingFinalPixels", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUserDefinedCaptureProtocol_StopCapturingFinalPixels_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserDefinedCaptureProtocol_StopCapturingFinalPixels_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUserDefinedCaptureProtocol_StopCapturingFinalPixels()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUserDefinedCaptureProtocol_StopCapturingFinalPixels_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUserDefinedCaptureProtocol_NoRegister()
	{
		return UUserDefinedCaptureProtocol::StaticClass();
	}
	struct Z_Construct_UClass_UUserDefinedCaptureProtocol_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_World_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_World;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUserDefinedCaptureProtocol_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneImageCaptureProtocolBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneCapture,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUserDefinedCaptureProtocol_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUserDefinedCaptureProtocol_GenerateFilename, "GenerateFilename" }, // 1099832700
		{ &Z_Construct_UFunction_UUserDefinedCaptureProtocol_GetCurrentFrameMetrics, "GetCurrentFrameMetrics" }, // 1618971165
		{ &Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnBeginFinalize, "OnBeginFinalize" }, // 2659318912
		{ &Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnCanFinalize, "OnCanFinalize" }, // 3396182246
		{ &Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnCaptureFrame, "OnCaptureFrame" }, // 266166193
		{ &Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnFinalize, "OnFinalize" }, // 3352920768
		{ &Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnPauseCapture, "OnPauseCapture" }, // 818854893
		{ &Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnPixelsReceived, "OnPixelsReceived" }, // 1794888706
		{ &Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnPreTick, "OnPreTick" }, // 1566425016
		{ &Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnSetup, "OnSetup" }, // 2361579960
		{ &Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnStartCapture, "OnStartCapture" }, // 990284899
		{ &Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnTick, "OnTick" }, // 2224572235
		{ &Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnWarmUp, "OnWarmUp" }, // 2013822816
		{ &Z_Construct_UFunction_UUserDefinedCaptureProtocol_ResolveBuffer, "ResolveBuffer" }, // 1523389485
		{ &Z_Construct_UFunction_UUserDefinedCaptureProtocol_StartCapturingFinalPixels, "StartCapturingFinalPixels" }, // 1081876549
		{ &Z_Construct_UFunction_UUserDefinedCaptureProtocol_StopCapturingFinalPixels, "StopCapturingFinalPixels" }, // 4176696395
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUserDefinedCaptureProtocol_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * A blueprintable capture protocol that defines how to capture frames from the engine\n */" },
		{ "DisplayName", "Capture Protocol" },
		{ "IncludePath", "Protocols/UserDefinedCaptureProtocol.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Protocols/UserDefinedCaptureProtocol.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "A blueprintable capture protocol that defines how to capture frames from the engine" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUserDefinedCaptureProtocol_Statics::NewProp_World_MetaData[] = {
		{ "Category", "Capture" },
		{ "Comment", "/** World pointer assigned on Setup */" },
		{ "ModuleRelativePath", "Public/Protocols/UserDefinedCaptureProtocol.h" },
		{ "ToolTip", "World pointer assigned on Setup" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUserDefinedCaptureProtocol_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUserDefinedCaptureProtocol, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUserDefinedCaptureProtocol_Statics::NewProp_World_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUserDefinedCaptureProtocol_Statics::NewProp_World_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUserDefinedCaptureProtocol_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUserDefinedCaptureProtocol_Statics::NewProp_World,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUserDefinedCaptureProtocol_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUserDefinedCaptureProtocol>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUserDefinedCaptureProtocol_Statics::ClassParams = {
		&UUserDefinedCaptureProtocol::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UUserDefinedCaptureProtocol_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UUserDefinedCaptureProtocol_Statics::PropPointers),
		0,
		0x001004A1u,
		METADATA_PARAMS(Z_Construct_UClass_UUserDefinedCaptureProtocol_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUserDefinedCaptureProtocol_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUserDefinedCaptureProtocol()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUserDefinedCaptureProtocol_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUserDefinedCaptureProtocol, 3503848781);
	template<> MOVIESCENECAPTURE_API UClass* StaticClass<UUserDefinedCaptureProtocol>()
	{
		return UUserDefinedCaptureProtocol::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUserDefinedCaptureProtocol(Z_Construct_UClass_UUserDefinedCaptureProtocol, &UUserDefinedCaptureProtocol::StaticClass, TEXT("/Script/MovieSceneCapture"), TEXT("UUserDefinedCaptureProtocol"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUserDefinedCaptureProtocol);
	DEFINE_FUNCTION(UUserDefinedImageCaptureProtocol::execWriteImageToDisk)
	{
		P_GET_STRUCT_REF(FCapturedPixels,Z_Param_Out_PixelData);
		P_GET_STRUCT_REF(FCapturedPixelsID,Z_Param_Out_StreamID);
		P_GET_STRUCT_REF(FFrameMetrics,Z_Param_Out_FrameMetrics);
		P_GET_UBOOL(Z_Param_bCopyImageData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->WriteImageToDisk(Z_Param_Out_PixelData,Z_Param_Out_StreamID,Z_Param_Out_FrameMetrics,Z_Param_bCopyImageData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUserDefinedImageCaptureProtocol::execGenerateFilenameForCurrentFrame)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GenerateFilenameForCurrentFrame();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUserDefinedImageCaptureProtocol::execGenerateFilenameForBuffer)
	{
		P_GET_OBJECT(UTexture,Z_Param_Buffer);
		P_GET_STRUCT_REF(FCapturedPixelsID,Z_Param_Out_StreamID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GenerateFilenameForBuffer(Z_Param_Buffer,Z_Param_Out_StreamID);
		P_NATIVE_END;
	}
	void UUserDefinedImageCaptureProtocol::StaticRegisterNativesUUserDefinedImageCaptureProtocol()
	{
		UClass* Class = UUserDefinedImageCaptureProtocol::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GenerateFilenameForBuffer", &UUserDefinedImageCaptureProtocol::execGenerateFilenameForBuffer },
			{ "GenerateFilenameForCurrentFrame", &UUserDefinedImageCaptureProtocol::execGenerateFilenameForCurrentFrame },
			{ "WriteImageToDisk", &UUserDefinedImageCaptureProtocol::execWriteImageToDisk },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUserDefinedImageCaptureProtocol_GenerateFilenameForBuffer_Statics
	{
		struct UserDefinedImageCaptureProtocol_eventGenerateFilenameForBuffer_Parms
		{
			UTexture* Buffer;
			FCapturedPixelsID StreamID;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StreamID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StreamID;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Buffer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUserDefinedImageCaptureProtocol_GenerateFilenameForBuffer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UserDefinedImageCaptureProtocol_eventGenerateFilenameForBuffer_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserDefinedImageCaptureProtocol_GenerateFilenameForBuffer_Statics::NewProp_StreamID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUserDefinedImageCaptureProtocol_GenerateFilenameForBuffer_Statics::NewProp_StreamID = { "StreamID", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UserDefinedImageCaptureProtocol_eventGenerateFilenameForBuffer_Parms, StreamID), Z_Construct_UScriptStruct_FCapturedPixelsID, METADATA_PARAMS(Z_Construct_UFunction_UUserDefinedImageCaptureProtocol_GenerateFilenameForBuffer_Statics::NewProp_StreamID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserDefinedImageCaptureProtocol_GenerateFilenameForBuffer_Statics::NewProp_StreamID_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUserDefinedImageCaptureProtocol_GenerateFilenameForBuffer_Statics::NewProp_Buffer = { "Buffer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UserDefinedImageCaptureProtocol_eventGenerateFilenameForBuffer_Parms, Buffer), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUserDefinedImageCaptureProtocol_GenerateFilenameForBuffer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserDefinedImageCaptureProtocol_GenerateFilenameForBuffer_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserDefinedImageCaptureProtocol_GenerateFilenameForBuffer_Statics::NewProp_StreamID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserDefinedImageCaptureProtocol_GenerateFilenameForBuffer_Statics::NewProp_Buffer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserDefinedImageCaptureProtocol_GenerateFilenameForBuffer_Statics::Function_MetaDataParams[] = {
		{ "Category", "Capture" },
		{ "Comment", "/*\n\x09 * Generate a filename for the specified buffer using this protocol's file name formatter\n\x09 * \n\x09 * @param Buffer          The desired buffer to generate a filename for\n\x09 * @param StreamID        The ID of the stream for this buffer (e.g. a composition pass name)\n\x09 * @return A fully qualified file name\n\x09 */" },
		{ "ModuleRelativePath", "Public/Protocols/UserDefinedCaptureProtocol.h" },
		{ "ToolTip", "* Generate a filename for the specified buffer using this protocol's file name formatter\n*\n* @param Buffer          The desired buffer to generate a filename for\n* @param StreamID        The ID of the stream for this buffer (e.g. a composition pass name)\n* @return A fully qualified file name" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserDefinedImageCaptureProtocol_GenerateFilenameForBuffer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUserDefinedImageCaptureProtocol, nullptr, "GenerateFilenameForBuffer", nullptr, nullptr, sizeof(UserDefinedImageCaptureProtocol_eventGenerateFilenameForBuffer_Parms), Z_Construct_UFunction_UUserDefinedImageCaptureProtocol_GenerateFilenameForBuffer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserDefinedImageCaptureProtocol_GenerateFilenameForBuffer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUserDefinedImageCaptureProtocol_GenerateFilenameForBuffer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserDefinedImageCaptureProtocol_GenerateFilenameForBuffer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUserDefinedImageCaptureProtocol_GenerateFilenameForBuffer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUserDefinedImageCaptureProtocol_GenerateFilenameForBuffer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUserDefinedImageCaptureProtocol_GenerateFilenameForCurrentFrame_Statics
	{
		struct UserDefinedImageCaptureProtocol_eventGenerateFilenameForCurrentFrame_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUserDefinedImageCaptureProtocol_GenerateFilenameForCurrentFrame_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UserDefinedImageCaptureProtocol_eventGenerateFilenameForCurrentFrame_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUserDefinedImageCaptureProtocol_GenerateFilenameForCurrentFrame_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserDefinedImageCaptureProtocol_GenerateFilenameForCurrentFrame_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserDefinedImageCaptureProtocol_GenerateFilenameForCurrentFrame_Statics::Function_MetaDataParams[] = {
		{ "Category", "Capture" },
		{ "Comment", "/*\n\x09 * Generate a filename for the current frame using this protocol's file name formatter\n\x09 * \n\x09 * @return A fully qualified file name for the current frame number\n\x09 */" },
		{ "ModuleRelativePath", "Public/Protocols/UserDefinedCaptureProtocol.h" },
		{ "ToolTip", "* Generate a filename for the current frame using this protocol's file name formatter\n*\n* @return A fully qualified file name for the current frame number" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserDefinedImageCaptureProtocol_GenerateFilenameForCurrentFrame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUserDefinedImageCaptureProtocol, nullptr, "GenerateFilenameForCurrentFrame", nullptr, nullptr, sizeof(UserDefinedImageCaptureProtocol_eventGenerateFilenameForCurrentFrame_Parms), Z_Construct_UFunction_UUserDefinedImageCaptureProtocol_GenerateFilenameForCurrentFrame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserDefinedImageCaptureProtocol_GenerateFilenameForCurrentFrame_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUserDefinedImageCaptureProtocol_GenerateFilenameForCurrentFrame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserDefinedImageCaptureProtocol_GenerateFilenameForCurrentFrame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUserDefinedImageCaptureProtocol_GenerateFilenameForCurrentFrame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUserDefinedImageCaptureProtocol_GenerateFilenameForCurrentFrame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUserDefinedImageCaptureProtocol_WriteImageToDisk_Statics
	{
		struct UserDefinedImageCaptureProtocol_eventWriteImageToDisk_Parms
		{
			FCapturedPixels PixelData;
			FCapturedPixelsID StreamID;
			FFrameMetrics FrameMetrics;
			bool bCopyImageData;
		};
		static void NewProp_bCopyImageData_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCopyImageData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FrameMetrics_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FrameMetrics;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StreamID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StreamID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PixelData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PixelData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUserDefinedImageCaptureProtocol_WriteImageToDisk_Statics::NewProp_bCopyImageData_SetBit(void* Obj)
	{
		((UserDefinedImageCaptureProtocol_eventWriteImageToDisk_Parms*)Obj)->bCopyImageData = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUserDefinedImageCaptureProtocol_WriteImageToDisk_Statics::NewProp_bCopyImageData = { "bCopyImageData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UserDefinedImageCaptureProtocol_eventWriteImageToDisk_Parms), &Z_Construct_UFunction_UUserDefinedImageCaptureProtocol_WriteImageToDisk_Statics::NewProp_bCopyImageData_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserDefinedImageCaptureProtocol_WriteImageToDisk_Statics::NewProp_FrameMetrics_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUserDefinedImageCaptureProtocol_WriteImageToDisk_Statics::NewProp_FrameMetrics = { "FrameMetrics", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UserDefinedImageCaptureProtocol_eventWriteImageToDisk_Parms, FrameMetrics), Z_Construct_UScriptStruct_FFrameMetrics, METADATA_PARAMS(Z_Construct_UFunction_UUserDefinedImageCaptureProtocol_WriteImageToDisk_Statics::NewProp_FrameMetrics_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserDefinedImageCaptureProtocol_WriteImageToDisk_Statics::NewProp_FrameMetrics_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserDefinedImageCaptureProtocol_WriteImageToDisk_Statics::NewProp_StreamID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUserDefinedImageCaptureProtocol_WriteImageToDisk_Statics::NewProp_StreamID = { "StreamID", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UserDefinedImageCaptureProtocol_eventWriteImageToDisk_Parms, StreamID), Z_Construct_UScriptStruct_FCapturedPixelsID, METADATA_PARAMS(Z_Construct_UFunction_UUserDefinedImageCaptureProtocol_WriteImageToDisk_Statics::NewProp_StreamID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserDefinedImageCaptureProtocol_WriteImageToDisk_Statics::NewProp_StreamID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserDefinedImageCaptureProtocol_WriteImageToDisk_Statics::NewProp_PixelData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUserDefinedImageCaptureProtocol_WriteImageToDisk_Statics::NewProp_PixelData = { "PixelData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UserDefinedImageCaptureProtocol_eventWriteImageToDisk_Parms, PixelData), Z_Construct_UScriptStruct_FCapturedPixels, METADATA_PARAMS(Z_Construct_UFunction_UUserDefinedImageCaptureProtocol_WriteImageToDisk_Statics::NewProp_PixelData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserDefinedImageCaptureProtocol_WriteImageToDisk_Statics::NewProp_PixelData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUserDefinedImageCaptureProtocol_WriteImageToDisk_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserDefinedImageCaptureProtocol_WriteImageToDisk_Statics::NewProp_bCopyImageData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserDefinedImageCaptureProtocol_WriteImageToDisk_Statics::NewProp_FrameMetrics,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserDefinedImageCaptureProtocol_WriteImageToDisk_Statics::NewProp_StreamID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserDefinedImageCaptureProtocol_WriteImageToDisk_Statics::NewProp_PixelData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserDefinedImageCaptureProtocol_WriteImageToDisk_Statics::Function_MetaDataParams[] = {
		{ "Category", "Capture" },
		{ "Comment", "/*\n\x09 * Generate a filename for the current frame using this protocol's file name formatter\n\x09 * \n\x09 * @return A fully qualified file name for the current frame number\n\x09 */" },
		{ "CPP_Default_bCopyImageData", "false" },
		{ "ModuleRelativePath", "Public/Protocols/UserDefinedCaptureProtocol.h" },
		{ "ToolTip", "* Generate a filename for the current frame using this protocol's file name formatter\n*\n* @return A fully qualified file name for the current frame number" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserDefinedImageCaptureProtocol_WriteImageToDisk_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUserDefinedImageCaptureProtocol, nullptr, "WriteImageToDisk", nullptr, nullptr, sizeof(UserDefinedImageCaptureProtocol_eventWriteImageToDisk_Parms), Z_Construct_UFunction_UUserDefinedImageCaptureProtocol_WriteImageToDisk_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserDefinedImageCaptureProtocol_WriteImageToDisk_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUserDefinedImageCaptureProtocol_WriteImageToDisk_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserDefinedImageCaptureProtocol_WriteImageToDisk_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUserDefinedImageCaptureProtocol_WriteImageToDisk()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUserDefinedImageCaptureProtocol_WriteImageToDisk_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUserDefinedImageCaptureProtocol_NoRegister()
	{
		return UUserDefinedImageCaptureProtocol::StaticClass();
	}
	struct Z_Construct_UClass_UUserDefinedImageCaptureProtocol_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CompressionQuality_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CompressionQuality;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableCompression_MetaData[];
#endif
		static void NewProp_bEnableCompression_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableCompression;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Format_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Format;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Format_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUserDefinedImageCaptureProtocol_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserDefinedCaptureProtocol,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneCapture,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUserDefinedImageCaptureProtocol_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUserDefinedImageCaptureProtocol_GenerateFilenameForBuffer, "GenerateFilenameForBuffer" }, // 3325571439
		{ &Z_Construct_UFunction_UUserDefinedImageCaptureProtocol_GenerateFilenameForCurrentFrame, "GenerateFilenameForCurrentFrame" }, // 4221892220
		{ &Z_Construct_UFunction_UUserDefinedImageCaptureProtocol_WriteImageToDisk, "WriteImageToDisk" }, // 1554007560
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUserDefinedImageCaptureProtocol_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * A blueprintable capture protocol tailored to capturing and exporting frames as images\n */" },
		{ "DisplayName", "Capture Protocol" },
		{ "IncludePath", "Protocols/UserDefinedCaptureProtocol.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Protocols/UserDefinedCaptureProtocol.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "A blueprintable capture protocol tailored to capturing and exporting frames as images" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUserDefinedImageCaptureProtocol_Statics::NewProp_CompressionQuality_MetaData[] = {
		{ "Category", "Capture" },
		{ "Comment", "/** The compression quality for the image type. For EXRs, 0 = Default ZIP compression, 1 = No compression, PNGs and JPEGs expect a value between 0 and 100*/" },
		{ "EditCondition", "bEnableCompression" },
		{ "ModuleRelativePath", "Public/Protocols/UserDefinedCaptureProtocol.h" },
		{ "ToolTip", "The compression quality for the image type. For EXRs, 0 = Default ZIP compression, 1 = No compression, PNGs and JPEGs expect a value between 0 and 100" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UUserDefinedImageCaptureProtocol_Statics::NewProp_CompressionQuality = { "CompressionQuality", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUserDefinedImageCaptureProtocol, CompressionQuality), METADATA_PARAMS(Z_Construct_UClass_UUserDefinedImageCaptureProtocol_Statics::NewProp_CompressionQuality_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUserDefinedImageCaptureProtocol_Statics::NewProp_CompressionQuality_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUserDefinedImageCaptureProtocol_Statics::NewProp_bEnableCompression_MetaData[] = {
		{ "Category", "Capture" },
		{ "Comment", "/** Whether to save images with compression or not. Not supported for bitmaps. */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Protocols/UserDefinedCaptureProtocol.h" },
		{ "ToolTip", "Whether to save images with compression or not. Not supported for bitmaps." },
	};
#endif
	void Z_Construct_UClass_UUserDefinedImageCaptureProtocol_Statics::NewProp_bEnableCompression_SetBit(void* Obj)
	{
		((UUserDefinedImageCaptureProtocol*)Obj)->bEnableCompression = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUserDefinedImageCaptureProtocol_Statics::NewProp_bEnableCompression = { "bEnableCompression", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UUserDefinedImageCaptureProtocol), &Z_Construct_UClass_UUserDefinedImageCaptureProtocol_Statics::NewProp_bEnableCompression_SetBit, METADATA_PARAMS(Z_Construct_UClass_UUserDefinedImageCaptureProtocol_Statics::NewProp_bEnableCompression_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUserDefinedImageCaptureProtocol_Statics::NewProp_bEnableCompression_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUserDefinedImageCaptureProtocol_Statics::NewProp_Format_MetaData[] = {
		{ "Category", "Capture" },
		{ "Comment", "/** The image format to save as */" },
		{ "ModuleRelativePath", "Public/Protocols/UserDefinedCaptureProtocol.h" },
		{ "ToolTip", "The image format to save as" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UUserDefinedImageCaptureProtocol_Statics::NewProp_Format = { "Format", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUserDefinedImageCaptureProtocol, Format), Z_Construct_UEnum_ImageWriteQueue_EDesiredImageFormat, METADATA_PARAMS(Z_Construct_UClass_UUserDefinedImageCaptureProtocol_Statics::NewProp_Format_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUserDefinedImageCaptureProtocol_Statics::NewProp_Format_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UUserDefinedImageCaptureProtocol_Statics::NewProp_Format_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUserDefinedImageCaptureProtocol_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUserDefinedImageCaptureProtocol_Statics::NewProp_CompressionQuality,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUserDefinedImageCaptureProtocol_Statics::NewProp_bEnableCompression,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUserDefinedImageCaptureProtocol_Statics::NewProp_Format,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUserDefinedImageCaptureProtocol_Statics::NewProp_Format_Underlying,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUserDefinedImageCaptureProtocol_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUserDefinedImageCaptureProtocol>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUserDefinedImageCaptureProtocol_Statics::ClassParams = {
		&UUserDefinedImageCaptureProtocol::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UUserDefinedImageCaptureProtocol_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UUserDefinedImageCaptureProtocol_Statics::PropPointers),
		0,
		0x001004A5u,
		METADATA_PARAMS(Z_Construct_UClass_UUserDefinedImageCaptureProtocol_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUserDefinedImageCaptureProtocol_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUserDefinedImageCaptureProtocol()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUserDefinedImageCaptureProtocol_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUserDefinedImageCaptureProtocol, 3734153229);
	template<> MOVIESCENECAPTURE_API UClass* StaticClass<UUserDefinedImageCaptureProtocol>()
	{
		return UUserDefinedImageCaptureProtocol::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUserDefinedImageCaptureProtocol(Z_Construct_UClass_UUserDefinedImageCaptureProtocol, &UUserDefinedImageCaptureProtocol::StaticClass, TEXT("/Script/MovieSceneCapture"), TEXT("UUserDefinedImageCaptureProtocol"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUserDefinedImageCaptureProtocol);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
