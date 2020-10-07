// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CompleteRPG/ManiacManfredUtility.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeManiacManfredUtility() {}
// Cross Module References
	COMPLETERPG_API UClass* Z_Construct_UClass_UManiacManfredUtility_NoRegister();
	COMPLETERPG_API UClass* Z_Construct_UClass_UManiacManfredUtility();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_CompleteRPG();
	ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
	PAPER2D_API UClass* Z_Construct_UClass_APaperSpriteActor_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UManiacManfredUtility::execMarkPackageDirty)
	{
		P_GET_OBJECT(UObject,Z_Param_Object);
		P_FINISH;
		P_NATIVE_BEGIN;
		UManiacManfredUtility::MarkPackageDirty(Z_Param_Object);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UManiacManfredUtility::execChangeSpriteFromTexture)
	{
		P_GET_OBJECT(APaperSpriteActor,Z_Param_Actor);
		P_GET_OBJECT(UTexture,Z_Param_Texture);
		P_FINISH;
		P_NATIVE_BEGIN;
		UManiacManfredUtility::ChangeSpriteFromTexture(Z_Param_Actor,Z_Param_Texture);
		P_NATIVE_END;
	}
	void UManiacManfredUtility::StaticRegisterNativesUManiacManfredUtility()
	{
		UClass* Class = UManiacManfredUtility::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ChangeSpriteFromTexture", &UManiacManfredUtility::execChangeSpriteFromTexture },
			{ "MarkPackageDirty", &UManiacManfredUtility::execMarkPackageDirty },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UManiacManfredUtility_ChangeSpriteFromTexture_Statics
	{
		struct ManiacManfredUtility_eventChangeSpriteFromTexture_Parms
		{
			APaperSpriteActor* Actor;
			UTexture* Texture;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Texture;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UManiacManfredUtility_ChangeSpriteFromTexture_Statics::NewProp_Texture = { "Texture", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ManiacManfredUtility_eventChangeSpriteFromTexture_Parms, Texture), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UManiacManfredUtility_ChangeSpriteFromTexture_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ManiacManfredUtility_eventChangeSpriteFromTexture_Parms, Actor), Z_Construct_UClass_APaperSpriteActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManiacManfredUtility_ChangeSpriteFromTexture_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManiacManfredUtility_ChangeSpriteFromTexture_Statics::NewProp_Texture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManiacManfredUtility_ChangeSpriteFromTexture_Statics::NewProp_Actor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UManiacManfredUtility_ChangeSpriteFromTexture_Statics::Function_MetaDataParams[] = {
		{ "Category", "Maniac Manfred Utility" },
		{ "ModuleRelativePath", "ManiacManfredUtility.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UManiacManfredUtility_ChangeSpriteFromTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManiacManfredUtility, nullptr, "ChangeSpriteFromTexture", nullptr, nullptr, sizeof(ManiacManfredUtility_eventChangeSpriteFromTexture_Parms), Z_Construct_UFunction_UManiacManfredUtility_ChangeSpriteFromTexture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManiacManfredUtility_ChangeSpriteFromTexture_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UManiacManfredUtility_ChangeSpriteFromTexture_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UManiacManfredUtility_ChangeSpriteFromTexture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UManiacManfredUtility_ChangeSpriteFromTexture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UManiacManfredUtility_ChangeSpriteFromTexture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UManiacManfredUtility_MarkPackageDirty_Statics
	{
		struct ManiacManfredUtility_eventMarkPackageDirty_Parms
		{
			UObject* Object;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Object;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UManiacManfredUtility_MarkPackageDirty_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ManiacManfredUtility_eventMarkPackageDirty_Parms, Object), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManiacManfredUtility_MarkPackageDirty_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManiacManfredUtility_MarkPackageDirty_Statics::NewProp_Object,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UManiacManfredUtility_MarkPackageDirty_Statics::Function_MetaDataParams[] = {
		{ "Category", "Maniac Manfred Utility" },
		{ "ModuleRelativePath", "ManiacManfredUtility.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UManiacManfredUtility_MarkPackageDirty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManiacManfredUtility, nullptr, "MarkPackageDirty", nullptr, nullptr, sizeof(ManiacManfredUtility_eventMarkPackageDirty_Parms), Z_Construct_UFunction_UManiacManfredUtility_MarkPackageDirty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManiacManfredUtility_MarkPackageDirty_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UManiacManfredUtility_MarkPackageDirty_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UManiacManfredUtility_MarkPackageDirty_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UManiacManfredUtility_MarkPackageDirty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UManiacManfredUtility_MarkPackageDirty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UManiacManfredUtility_NoRegister()
	{
		return UManiacManfredUtility::StaticClass();
	}
	struct Z_Construct_UClass_UManiacManfredUtility_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UManiacManfredUtility_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_CompleteRPG,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UManiacManfredUtility_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UManiacManfredUtility_ChangeSpriteFromTexture, "ChangeSpriteFromTexture" }, // 4188694484
		{ &Z_Construct_UFunction_UManiacManfredUtility_MarkPackageDirty, "MarkPackageDirty" }, // 974047013
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManiacManfredUtility_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ManiacManfredUtility.h" },
		{ "ModuleRelativePath", "ManiacManfredUtility.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UManiacManfredUtility_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UManiacManfredUtility>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UManiacManfredUtility_Statics::ClassParams = {
		&UManiacManfredUtility::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UManiacManfredUtility_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UManiacManfredUtility_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UManiacManfredUtility()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UManiacManfredUtility_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UManiacManfredUtility, 703026604);
	template<> COMPLETERPG_API UClass* StaticClass<UManiacManfredUtility>()
	{
		return UManiacManfredUtility::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UManiacManfredUtility(Z_Construct_UClass_UManiacManfredUtility, &UManiacManfredUtility::StaticClass, TEXT("/Script/CompleteRPG"), TEXT("UManiacManfredUtility"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UManiacManfredUtility);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
