// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Engine/CanvasRenderTarget2D.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCanvasRenderTarget2D() {}
// Cross Module References
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_OnCanvasRenderTargetUpdate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UCanvas_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCanvasRenderTarget2D_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCanvasRenderTarget2D();
	ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_Engine_OnCanvasRenderTargetUpdate__DelegateSignature_Statics
	{
		struct _Script_Engine_eventOnCanvasRenderTargetUpdate_Parms
		{
			UCanvas* Canvas;
			int32 Width;
			int32 Height;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Height;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Width;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Canvas;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_Engine_OnCanvasRenderTargetUpdate__DelegateSignature_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Engine_eventOnCanvasRenderTargetUpdate_Parms, Height), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_Engine_OnCanvasRenderTargetUpdate__DelegateSignature_Statics::NewProp_Width = { "Width", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Engine_eventOnCanvasRenderTargetUpdate_Parms, Width), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_Engine_OnCanvasRenderTargetUpdate__DelegateSignature_Statics::NewProp_Canvas = { "Canvas", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Engine_eventOnCanvasRenderTargetUpdate_Parms, Canvas), Z_Construct_UClass_UCanvas_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Engine_OnCanvasRenderTargetUpdate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Engine_OnCanvasRenderTargetUpdate__DelegateSignature_Statics::NewProp_Height,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Engine_OnCanvasRenderTargetUpdate__DelegateSignature_Statics::NewProp_Width,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Engine_OnCanvasRenderTargetUpdate__DelegateSignature_Statics::NewProp_Canvas,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Engine_OnCanvasRenderTargetUpdate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** This delegate is assignable through Blueprint and has similar functionality to the above. */" },
		{ "ModuleRelativePath", "Classes/Engine/CanvasRenderTarget2D.h" },
		{ "ToolTip", "This delegate is assignable through Blueprint and has similar functionality to the above." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Engine_OnCanvasRenderTargetUpdate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Engine, nullptr, "OnCanvasRenderTargetUpdate__DelegateSignature", nullptr, nullptr, sizeof(_Script_Engine_eventOnCanvasRenderTargetUpdate_Parms), Z_Construct_UDelegateFunction_Engine_OnCanvasRenderTargetUpdate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_OnCanvasRenderTargetUpdate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Engine_OnCanvasRenderTargetUpdate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_OnCanvasRenderTargetUpdate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Engine_OnCanvasRenderTargetUpdate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_Engine_OnCanvasRenderTargetUpdate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UCanvasRenderTarget2D::execGetSize)
	{
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Width);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Height);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetSize(Z_Param_Out_Width,Z_Param_Out_Height);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCanvasRenderTarget2D::execCreateCanvasRenderTarget2D)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(UClass,Z_Param_CanvasRenderTarget2DClass);
		P_GET_PROPERTY(FIntProperty,Z_Param_Width);
		P_GET_PROPERTY(FIntProperty,Z_Param_Height);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UCanvasRenderTarget2D**)Z_Param__Result=UCanvasRenderTarget2D::CreateCanvasRenderTarget2D(Z_Param_WorldContextObject,Z_Param_CanvasRenderTarget2DClass,Z_Param_Width,Z_Param_Height);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCanvasRenderTarget2D::execUpdateResource)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateResource();
		P_NATIVE_END;
	}
	static FName NAME_UCanvasRenderTarget2D_ReceiveUpdate = FName(TEXT("ReceiveUpdate"));
	void UCanvasRenderTarget2D::ReceiveUpdate(UCanvas* Canvas, int32 Width, int32 Height)
	{
		CanvasRenderTarget2D_eventReceiveUpdate_Parms Parms;
		Parms.Canvas=Canvas;
		Parms.Width=Width;
		Parms.Height=Height;
		ProcessEvent(FindFunctionChecked(NAME_UCanvasRenderTarget2D_ReceiveUpdate),&Parms);
	}
	void UCanvasRenderTarget2D::StaticRegisterNativesUCanvasRenderTarget2D()
	{
		UClass* Class = UCanvasRenderTarget2D::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateCanvasRenderTarget2D", &UCanvasRenderTarget2D::execCreateCanvasRenderTarget2D },
			{ "GetSize", &UCanvasRenderTarget2D::execGetSize },
			{ "UpdateResource", &UCanvasRenderTarget2D::execUpdateResource },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCanvasRenderTarget2D_CreateCanvasRenderTarget2D_Statics
	{
		struct CanvasRenderTarget2D_eventCreateCanvasRenderTarget2D_Parms
		{
			UObject* WorldContextObject;
			TSubclassOf<UCanvasRenderTarget2D>  CanvasRenderTarget2DClass;
			int32 Width;
			int32 Height;
			UCanvasRenderTarget2D* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Height;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Width;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_CanvasRenderTarget2DClass;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCanvasRenderTarget2D_CreateCanvasRenderTarget2D_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CanvasRenderTarget2D_eventCreateCanvasRenderTarget2D_Parms, ReturnValue), Z_Construct_UClass_UCanvasRenderTarget2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCanvasRenderTarget2D_CreateCanvasRenderTarget2D_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CanvasRenderTarget2D_eventCreateCanvasRenderTarget2D_Parms, Height), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCanvasRenderTarget2D_CreateCanvasRenderTarget2D_Statics::NewProp_Width = { "Width", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CanvasRenderTarget2D_eventCreateCanvasRenderTarget2D_Parms, Width), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UCanvasRenderTarget2D_CreateCanvasRenderTarget2D_Statics::NewProp_CanvasRenderTarget2DClass = { "CanvasRenderTarget2DClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CanvasRenderTarget2D_eventCreateCanvasRenderTarget2D_Parms, CanvasRenderTarget2DClass), Z_Construct_UClass_UCanvasRenderTarget2D_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCanvasRenderTarget2D_CreateCanvasRenderTarget2D_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CanvasRenderTarget2D_eventCreateCanvasRenderTarget2D_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCanvasRenderTarget2D_CreateCanvasRenderTarget2D_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCanvasRenderTarget2D_CreateCanvasRenderTarget2D_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCanvasRenderTarget2D_CreateCanvasRenderTarget2D_Statics::NewProp_Height,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCanvasRenderTarget2D_CreateCanvasRenderTarget2D_Statics::NewProp_Width,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCanvasRenderTarget2D_CreateCanvasRenderTarget2D_Statics::NewProp_CanvasRenderTarget2DClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCanvasRenderTarget2D_CreateCanvasRenderTarget2D_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCanvasRenderTarget2D_CreateCanvasRenderTarget2D_Statics::Function_MetaDataParams[] = {
		{ "Category", "Canvas Render Target 2D" },
		{ "Comment", "/**\n\x09 * Creates a new canvas render target and initializes it to the specified dimensions\n\x09 *\n\x09 * @param\x09WorldContextObject\x09The world where this render target will be rendered for\n\x09 * @param\x09""CanvasRenderTarget2DClass\x09""Class of the render target.  Unless you want to use a special sub-class, you can simply pass UCanvasRenderTarget2D::StaticClass() here.\n\x09 * @param\x09Width\x09\x09\x09\x09Width of the render target.\n\x09 * @param\x09Height\x09\x09\x09\x09Height of the render target.\n\x09 *\n\x09 * @return\x09\x09\x09\x09\x09\x09Returns the instanced render target.\n\x09 */" },
		{ "CPP_Default_Height", "1024" },
		{ "CPP_Default_Width", "1024" },
		{ "ModuleRelativePath", "Classes/Engine/CanvasRenderTarget2D.h" },
		{ "ToolTip", "Creates a new canvas render target and initializes it to the specified dimensions\n\n@param       WorldContextObject      The world where this render target will be rendered for\n@param       CanvasRenderTarget2DClass       Class of the render target.  Unless you want to use a special sub-class, you can simply pass UCanvasRenderTarget2D::StaticClass() here.\n@param       Width                           Width of the render target.\n@param       Height                          Height of the render target.\n\n@return                                              Returns the instanced render target." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCanvasRenderTarget2D_CreateCanvasRenderTarget2D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCanvasRenderTarget2D, nullptr, "CreateCanvasRenderTarget2D", nullptr, nullptr, sizeof(CanvasRenderTarget2D_eventCreateCanvasRenderTarget2D_Parms), Z_Construct_UFunction_UCanvasRenderTarget2D_CreateCanvasRenderTarget2D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCanvasRenderTarget2D_CreateCanvasRenderTarget2D_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCanvasRenderTarget2D_CreateCanvasRenderTarget2D_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCanvasRenderTarget2D_CreateCanvasRenderTarget2D_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCanvasRenderTarget2D_CreateCanvasRenderTarget2D()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCanvasRenderTarget2D_CreateCanvasRenderTarget2D_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCanvasRenderTarget2D_GetSize_Statics
	{
		struct CanvasRenderTarget2D_eventGetSize_Parms
		{
			int32 Width;
			int32 Height;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Height;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Width;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCanvasRenderTarget2D_GetSize_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CanvasRenderTarget2D_eventGetSize_Parms, Height), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCanvasRenderTarget2D_GetSize_Statics::NewProp_Width = { "Width", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CanvasRenderTarget2D_eventGetSize_Parms, Width), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCanvasRenderTarget2D_GetSize_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCanvasRenderTarget2D_GetSize_Statics::NewProp_Height,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCanvasRenderTarget2D_GetSize_Statics::NewProp_Width,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCanvasRenderTarget2D_GetSize_Statics::Function_MetaDataParams[] = {
		{ "Category", "Canvas Render Target 2D" },
		{ "Comment", "/**\n\x09 * Gets a specific render target's size from the global map of canvas render targets.\n\x09 *\n\x09 * @param\x09Width\x09Output variable for the render target's width\n\x09 * @param\x09Height\x09Output variable for the render target's height\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Engine/CanvasRenderTarget2D.h" },
		{ "ToolTip", "Gets a specific render target's size from the global map of canvas render targets.\n\n@param       Width   Output variable for the render target's width\n@param       Height  Output variable for the render target's height" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCanvasRenderTarget2D_GetSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCanvasRenderTarget2D, nullptr, "GetSize", nullptr, nullptr, sizeof(CanvasRenderTarget2D_eventGetSize_Parms), Z_Construct_UFunction_UCanvasRenderTarget2D_GetSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCanvasRenderTarget2D_GetSize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCanvasRenderTarget2D_GetSize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCanvasRenderTarget2D_GetSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCanvasRenderTarget2D_GetSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCanvasRenderTarget2D_GetSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCanvasRenderTarget2D_ReceiveUpdate_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Height;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Width;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Canvas;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCanvasRenderTarget2D_ReceiveUpdate_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CanvasRenderTarget2D_eventReceiveUpdate_Parms, Height), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCanvasRenderTarget2D_ReceiveUpdate_Statics::NewProp_Width = { "Width", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CanvasRenderTarget2D_eventReceiveUpdate_Parms, Width), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCanvasRenderTarget2D_ReceiveUpdate_Statics::NewProp_Canvas = { "Canvas", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CanvasRenderTarget2D_eventReceiveUpdate_Parms, Canvas), Z_Construct_UClass_UCanvas_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCanvasRenderTarget2D_ReceiveUpdate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCanvasRenderTarget2D_ReceiveUpdate_Statics::NewProp_Height,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCanvasRenderTarget2D_ReceiveUpdate_Statics::NewProp_Width,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCanvasRenderTarget2D_ReceiveUpdate_Statics::NewProp_Canvas,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCanvasRenderTarget2D_ReceiveUpdate_Statics::Function_MetaDataParams[] = {
		{ "Category", "Canvas Render Target 2D" },
		{ "Comment", "/**\n\x09 * Allows a Blueprint to implement how this Canvas Render Target 2D should be updated.\n\x09 *\n\x09 * @param\x09""Canvas\x09\x09\x09\x09""Canvas object that can be used to paint to the render target\n\x09 * @param\x09Width\x09\x09\x09\x09Width of the render target.\n\x09 * @param\x09Height\x09\x09\x09\x09Height of the render target.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Engine/CanvasRenderTarget2D.h" },
		{ "ToolTip", "Allows a Blueprint to implement how this Canvas Render Target 2D should be updated.\n\n@param       Canvas                          Canvas object that can be used to paint to the render target\n@param       Width                           Width of the render target.\n@param       Height                          Height of the render target." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCanvasRenderTarget2D_ReceiveUpdate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCanvasRenderTarget2D, nullptr, "ReceiveUpdate", nullptr, nullptr, sizeof(CanvasRenderTarget2D_eventReceiveUpdate_Parms), Z_Construct_UFunction_UCanvasRenderTarget2D_ReceiveUpdate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCanvasRenderTarget2D_ReceiveUpdate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCanvasRenderTarget2D_ReceiveUpdate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCanvasRenderTarget2D_ReceiveUpdate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCanvasRenderTarget2D_ReceiveUpdate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCanvasRenderTarget2D_ReceiveUpdate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCanvasRenderTarget2D_UpdateResource_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCanvasRenderTarget2D_UpdateResource_Statics::Function_MetaDataParams[] = {
		{ "Category", "Canvas Render Target 2D" },
		{ "Comment", "/**\n\x09 * Updates the the canvas render target texture's resource. This is where the render target will create or \n\x09 * find a canvas object to use.  It also calls UpdateResourceImmediate() to clear the render target texture \n\x09 * from the deferred rendering list, to stop the texture from being cleared the next frame. From there it\n\x09 * will ask the rendering thread to set up the RHI viewport. The canvas is then set up for rendering and \n\x09 * then the user's update delegate is called.  The canvas is then flushed and the RHI resolves the \n\x09 * texture to make it available for rendering.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Engine/CanvasRenderTarget2D.h" },
		{ "ToolTip", "Updates the the canvas render target texture's resource. This is where the render target will create or\nfind a canvas object to use.  It also calls UpdateResourceImmediate() to clear the render target texture\nfrom the deferred rendering list, to stop the texture from being cleared the next frame. From there it\nwill ask the rendering thread to set up the RHI viewport. The canvas is then set up for rendering and\nthen the user's update delegate is called.  The canvas is then flushed and the RHI resolves the\ntexture to make it available for rendering." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCanvasRenderTarget2D_UpdateResource_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCanvasRenderTarget2D, nullptr, "UpdateResource", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCanvasRenderTarget2D_UpdateResource_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCanvasRenderTarget2D_UpdateResource_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCanvasRenderTarget2D_UpdateResource()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCanvasRenderTarget2D_UpdateResource_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCanvasRenderTarget2D_NoRegister()
	{
		return UCanvasRenderTarget2D::StaticClass();
	}
	struct Z_Construct_UClass_UCanvasRenderTarget2D_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShouldClearRenderTargetOnReceiveUpdate_MetaData[];
#endif
		static void NewProp_bShouldClearRenderTargetOnReceiveUpdate_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShouldClearRenderTargetOnReceiveUpdate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_World_MetaData[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_World;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnCanvasRenderTargetUpdate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCanvasRenderTargetUpdate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCanvasRenderTarget2D_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTextureRenderTarget2D,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCanvasRenderTarget2D_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCanvasRenderTarget2D_CreateCanvasRenderTarget2D, "CreateCanvasRenderTarget2D" }, // 1383075048
		{ &Z_Construct_UFunction_UCanvasRenderTarget2D_GetSize, "GetSize" }, // 891799090
		{ &Z_Construct_UFunction_UCanvasRenderTarget2D_ReceiveUpdate, "ReceiveUpdate" }, // 2627456254
		{ &Z_Construct_UFunction_UCanvasRenderTarget2D_UpdateResource, "UpdateResource" }, // 3209828590
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCanvasRenderTarget2D_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * CanvasRenderTarget2D is 2D render target which exposes a Canvas interface to allow you to draw elements onto \n * it directly.  Use CreateCanvasRenderTarget2D() to create a render target texture by unique name, then\n * bind a function to the OnCanvasRenderTargetUpdate delegate which will be called when the render target is\n * updated.  If you need to repaint your canvas every single frame, simply call UpdateResource() on it from a Tick\n * function.  Also, remember to hold onto your new canvas render target with a reference so that it doesn't get\n * garbage collected.\n */" },
		{ "HideCategories", "Object Texture Compression Adjustments Compositing" },
		{ "IncludePath", "Engine/CanvasRenderTarget2D.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/Engine/CanvasRenderTarget2D.h" },
		{ "ToolTip", "CanvasRenderTarget2D is 2D render target which exposes a Canvas interface to allow you to draw elements onto\nit directly.  Use CreateCanvasRenderTarget2D() to create a render target texture by unique name, then\nbind a function to the OnCanvasRenderTargetUpdate delegate which will be called when the render target is\nupdated.  If you need to repaint your canvas every single frame, simply call UpdateResource() on it from a Tick\nfunction.  Also, remember to hold onto your new canvas render target with a reference so that it doesn't get\ngarbage collected." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCanvasRenderTarget2D_Statics::NewProp_bShouldClearRenderTargetOnReceiveUpdate_MetaData[] = {
		{ "Comment", "// If true, clear the render target to green whenever OnReceiveUpdate() is called.  (Defaults to true.)\n// If false, the render target will retain whatever values it had, allowing the user to update only areas that\n// have changed.\n" },
		{ "ModuleRelativePath", "Classes/Engine/CanvasRenderTarget2D.h" },
		{ "ToolTip", "If true, clear the render target to green whenever OnReceiveUpdate() is called.  (Defaults to true.)\nIf false, the render target will retain whatever values it had, allowing the user to update only areas that\nhave changed." },
	};
#endif
	void Z_Construct_UClass_UCanvasRenderTarget2D_Statics::NewProp_bShouldClearRenderTargetOnReceiveUpdate_SetBit(void* Obj)
	{
		((UCanvasRenderTarget2D*)Obj)->bShouldClearRenderTargetOnReceiveUpdate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCanvasRenderTarget2D_Statics::NewProp_bShouldClearRenderTargetOnReceiveUpdate = { "bShouldClearRenderTargetOnReceiveUpdate", nullptr, (EPropertyFlags)0x0020080000002000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UCanvasRenderTarget2D), &Z_Construct_UClass_UCanvasRenderTarget2D_Statics::NewProp_bShouldClearRenderTargetOnReceiveUpdate_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCanvasRenderTarget2D_Statics::NewProp_bShouldClearRenderTargetOnReceiveUpdate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCanvasRenderTarget2D_Statics::NewProp_bShouldClearRenderTargetOnReceiveUpdate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCanvasRenderTarget2D_Statics::NewProp_World_MetaData[] = {
		{ "Comment", "/* The world this render target will be used with */" },
		{ "ModuleRelativePath", "Classes/Engine/CanvasRenderTarget2D.h" },
		{ "ToolTip", "The world this render target will be used with" },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UCanvasRenderTarget2D_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0024080000000000, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCanvasRenderTarget2D, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCanvasRenderTarget2D_Statics::NewProp_World_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCanvasRenderTarget2D_Statics::NewProp_World_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCanvasRenderTarget2D_Statics::NewProp_OnCanvasRenderTargetUpdate_MetaData[] = {
		{ "Category", "Canvas Render Target 2D" },
		{ "Comment", "/** Called when this Canvas Render Target is asked to update its texture resource. */" },
		{ "ModuleRelativePath", "Classes/Engine/CanvasRenderTarget2D.h" },
		{ "ToolTip", "Called when this Canvas Render Target is asked to update its texture resource." },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCanvasRenderTarget2D_Statics::NewProp_OnCanvasRenderTargetUpdate = { "OnCanvasRenderTargetUpdate", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCanvasRenderTarget2D, OnCanvasRenderTargetUpdate), Z_Construct_UDelegateFunction_Engine_OnCanvasRenderTargetUpdate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCanvasRenderTarget2D_Statics::NewProp_OnCanvasRenderTargetUpdate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCanvasRenderTarget2D_Statics::NewProp_OnCanvasRenderTargetUpdate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCanvasRenderTarget2D_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCanvasRenderTarget2D_Statics::NewProp_bShouldClearRenderTargetOnReceiveUpdate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCanvasRenderTarget2D_Statics::NewProp_World,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCanvasRenderTarget2D_Statics::NewProp_OnCanvasRenderTargetUpdate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCanvasRenderTarget2D_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCanvasRenderTarget2D>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCanvasRenderTarget2D_Statics::ClassParams = {
		&UCanvasRenderTarget2D::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCanvasRenderTarget2D_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCanvasRenderTarget2D_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCanvasRenderTarget2D_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCanvasRenderTarget2D_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCanvasRenderTarget2D()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCanvasRenderTarget2D_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCanvasRenderTarget2D, 1736843382);
	template<> ENGINE_API UClass* StaticClass<UCanvasRenderTarget2D>()
	{
		return UCanvasRenderTarget2D::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCanvasRenderTarget2D(Z_Construct_UClass_UCanvasRenderTarget2D, &UCanvasRenderTarget2D::StaticClass, TEXT("/Script/Engine"), TEXT("UCanvasRenderTarget2D"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCanvasRenderTarget2D);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
