// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Paper2D/Classes/PaperSpriteBlueprintLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePaperSpriteBlueprintLibrary() {}
// Cross Module References
	PAPER2D_API UClass* Z_Construct_UClass_UPaperSpriteBlueprintLibrary_NoRegister();
	PAPER2D_API UClass* Z_Construct_UClass_UPaperSpriteBlueprintLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_Paper2D();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateBrush();
	PAPER2D_API UClass* Z_Construct_UClass_UPaperSprite_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UPaperSpriteBlueprintLibrary::execMakeBrushFromSprite)
	{
		P_GET_OBJECT(UPaperSprite,Z_Param_Sprite);
		P_GET_PROPERTY(FIntProperty,Z_Param_Width);
		P_GET_PROPERTY(FIntProperty,Z_Param_Height);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSlateBrush*)Z_Param__Result=UPaperSpriteBlueprintLibrary::MakeBrushFromSprite(Z_Param_Sprite,Z_Param_Width,Z_Param_Height);
		P_NATIVE_END;
	}
	void UPaperSpriteBlueprintLibrary::StaticRegisterNativesUPaperSpriteBlueprintLibrary()
	{
		UClass* Class = UPaperSpriteBlueprintLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "MakeBrushFromSprite", &UPaperSpriteBlueprintLibrary::execMakeBrushFromSprite },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPaperSpriteBlueprintLibrary_MakeBrushFromSprite_Statics
	{
		struct PaperSpriteBlueprintLibrary_eventMakeBrushFromSprite_Parms
		{
			UPaperSprite* Sprite;
			int32 Width;
			int32 Height;
			FSlateBrush ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Height;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Width;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Sprite;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPaperSpriteBlueprintLibrary_MakeBrushFromSprite_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PaperSpriteBlueprintLibrary_eventMakeBrushFromSprite_Parms, ReturnValue), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPaperSpriteBlueprintLibrary_MakeBrushFromSprite_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PaperSpriteBlueprintLibrary_eventMakeBrushFromSprite_Parms, Height), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPaperSpriteBlueprintLibrary_MakeBrushFromSprite_Statics::NewProp_Width = { "Width", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PaperSpriteBlueprintLibrary_eventMakeBrushFromSprite_Parms, Width), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPaperSpriteBlueprintLibrary_MakeBrushFromSprite_Statics::NewProp_Sprite = { "Sprite", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PaperSpriteBlueprintLibrary_eventMakeBrushFromSprite_Parms, Sprite), Z_Construct_UClass_UPaperSprite_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPaperSpriteBlueprintLibrary_MakeBrushFromSprite_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperSpriteBlueprintLibrary_MakeBrushFromSprite_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperSpriteBlueprintLibrary_MakeBrushFromSprite_Statics::NewProp_Height,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperSpriteBlueprintLibrary_MakeBrushFromSprite_Statics::NewProp_Width,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperSpriteBlueprintLibrary_MakeBrushFromSprite_Statics::NewProp_Sprite,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPaperSpriteBlueprintLibrary_MakeBrushFromSprite_Statics::Function_MetaDataParams[] = {
		{ "Category", "Widget|Brush" },
		{ "ModuleRelativePath", "Classes/PaperSpriteBlueprintLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPaperSpriteBlueprintLibrary_MakeBrushFromSprite_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPaperSpriteBlueprintLibrary, nullptr, "MakeBrushFromSprite", nullptr, nullptr, sizeof(PaperSpriteBlueprintLibrary_eventMakeBrushFromSprite_Parms), Z_Construct_UFunction_UPaperSpriteBlueprintLibrary_MakeBrushFromSprite_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperSpriteBlueprintLibrary_MakeBrushFromSprite_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPaperSpriteBlueprintLibrary_MakeBrushFromSprite_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperSpriteBlueprintLibrary_MakeBrushFromSprite_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPaperSpriteBlueprintLibrary_MakeBrushFromSprite()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPaperSpriteBlueprintLibrary_MakeBrushFromSprite_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPaperSpriteBlueprintLibrary_NoRegister()
	{
		return UPaperSpriteBlueprintLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UPaperSpriteBlueprintLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPaperSpriteBlueprintLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_Paper2D,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPaperSpriteBlueprintLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPaperSpriteBlueprintLibrary_MakeBrushFromSprite, "MakeBrushFromSprite" }, // 4169601588
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperSpriteBlueprintLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "PaperSpriteBlueprintLibrary.h" },
		{ "ModuleRelativePath", "Classes/PaperSpriteBlueprintLibrary.h" },
		{ "ScriptName", "PaperSpriteLibrary" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPaperSpriteBlueprintLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPaperSpriteBlueprintLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPaperSpriteBlueprintLibrary_Statics::ClassParams = {
		&UPaperSpriteBlueprintLibrary::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPaperSpriteBlueprintLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperSpriteBlueprintLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPaperSpriteBlueprintLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPaperSpriteBlueprintLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPaperSpriteBlueprintLibrary, 2665860844);
	template<> PAPER2D_API UClass* StaticClass<UPaperSpriteBlueprintLibrary>()
	{
		return UPaperSpriteBlueprintLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPaperSpriteBlueprintLibrary(Z_Construct_UClass_UPaperSpriteBlueprintLibrary, &UPaperSpriteBlueprintLibrary::StaticClass, TEXT("/Script/Paper2D"), TEXT("UPaperSpriteBlueprintLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPaperSpriteBlueprintLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
