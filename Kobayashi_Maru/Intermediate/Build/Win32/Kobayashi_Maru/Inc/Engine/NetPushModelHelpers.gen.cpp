// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Public/Net/NetPushModelHelpers.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNetPushModelHelpers() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UNetPushModelHelpers_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UNetPushModelHelpers();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_Engine();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UNetPushModelHelpers::execMarkPropertyDirtyFromRepIndex)
	{
		P_GET_OBJECT(UObject,Z_Param_Object);
		P_GET_PROPERTY(FIntProperty,Z_Param_RepIndex);
		P_GET_PROPERTY(FNameProperty,Z_Param_PropertyName);
		P_FINISH;
		P_NATIVE_BEGIN;
		UNetPushModelHelpers::MarkPropertyDirtyFromRepIndex(Z_Param_Object,Z_Param_RepIndex,Z_Param_PropertyName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNetPushModelHelpers::execMarkPropertyDirty)
	{
		P_GET_OBJECT(UObject,Z_Param_Object);
		P_GET_PROPERTY(FNameProperty,Z_Param_PropertyName);
		P_FINISH;
		P_NATIVE_BEGIN;
		UNetPushModelHelpers::MarkPropertyDirty(Z_Param_Object,Z_Param_PropertyName);
		P_NATIVE_END;
	}
	void UNetPushModelHelpers::StaticRegisterNativesUNetPushModelHelpers()
	{
		UClass* Class = UNetPushModelHelpers::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "MarkPropertyDirty", &UNetPushModelHelpers::execMarkPropertyDirty },
			{ "MarkPropertyDirtyFromRepIndex", &UNetPushModelHelpers::execMarkPropertyDirtyFromRepIndex },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UNetPushModelHelpers_MarkPropertyDirty_Statics
	{
		struct NetPushModelHelpers_eventMarkPropertyDirty_Parms
		{
			UObject* Object;
			FName PropertyName;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_PropertyName;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Object;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNetPushModelHelpers_MarkPropertyDirty_Statics::NewProp_PropertyName = { "PropertyName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NetPushModelHelpers_eventMarkPropertyDirty_Parms, PropertyName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNetPushModelHelpers_MarkPropertyDirty_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NetPushModelHelpers_eventMarkPropertyDirty_Parms, Object), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNetPushModelHelpers_MarkPropertyDirty_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNetPushModelHelpers_MarkPropertyDirty_Statics::NewProp_PropertyName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNetPushModelHelpers_MarkPropertyDirty_Statics::NewProp_Object,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNetPushModelHelpers_MarkPropertyDirty_Statics::Function_MetaDataParams[] = {
		{ "Category", "Net" },
		{ "ModuleRelativePath", "Public/Net/NetPushModelHelpers.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNetPushModelHelpers_MarkPropertyDirty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNetPushModelHelpers, nullptr, "MarkPropertyDirty", nullptr, nullptr, sizeof(NetPushModelHelpers_eventMarkPropertyDirty_Parms), Z_Construct_UFunction_UNetPushModelHelpers_MarkPropertyDirty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNetPushModelHelpers_MarkPropertyDirty_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNetPushModelHelpers_MarkPropertyDirty_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNetPushModelHelpers_MarkPropertyDirty_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNetPushModelHelpers_MarkPropertyDirty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNetPushModelHelpers_MarkPropertyDirty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNetPushModelHelpers_MarkPropertyDirtyFromRepIndex_Statics
	{
		struct NetPushModelHelpers_eventMarkPropertyDirtyFromRepIndex_Parms
		{
			UObject* Object;
			int32 RepIndex;
			FName PropertyName;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_PropertyName;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_RepIndex;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Object;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNetPushModelHelpers_MarkPropertyDirtyFromRepIndex_Statics::NewProp_PropertyName = { "PropertyName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NetPushModelHelpers_eventMarkPropertyDirtyFromRepIndex_Parms, PropertyName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNetPushModelHelpers_MarkPropertyDirtyFromRepIndex_Statics::NewProp_RepIndex = { "RepIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NetPushModelHelpers_eventMarkPropertyDirtyFromRepIndex_Parms, RepIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNetPushModelHelpers_MarkPropertyDirtyFromRepIndex_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NetPushModelHelpers_eventMarkPropertyDirtyFromRepIndex_Parms, Object), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNetPushModelHelpers_MarkPropertyDirtyFromRepIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNetPushModelHelpers_MarkPropertyDirtyFromRepIndex_Statics::NewProp_PropertyName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNetPushModelHelpers_MarkPropertyDirtyFromRepIndex_Statics::NewProp_RepIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNetPushModelHelpers_MarkPropertyDirtyFromRepIndex_Statics::NewProp_Object,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNetPushModelHelpers_MarkPropertyDirtyFromRepIndex_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Net" },
		{ "HidePin", "Object|RepIndex|PropertyName" },
		{ "ModuleRelativePath", "Public/Net/NetPushModelHelpers.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNetPushModelHelpers_MarkPropertyDirtyFromRepIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNetPushModelHelpers, nullptr, "MarkPropertyDirtyFromRepIndex", nullptr, nullptr, sizeof(NetPushModelHelpers_eventMarkPropertyDirtyFromRepIndex_Parms), Z_Construct_UFunction_UNetPushModelHelpers_MarkPropertyDirtyFromRepIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNetPushModelHelpers_MarkPropertyDirtyFromRepIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNetPushModelHelpers_MarkPropertyDirtyFromRepIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNetPushModelHelpers_MarkPropertyDirtyFromRepIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNetPushModelHelpers_MarkPropertyDirtyFromRepIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNetPushModelHelpers_MarkPropertyDirtyFromRepIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UNetPushModelHelpers_NoRegister()
	{
		return UNetPushModelHelpers::StaticClass();
	}
	struct Z_Construct_UClass_UNetPushModelHelpers_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNetPushModelHelpers_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UNetPushModelHelpers_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UNetPushModelHelpers_MarkPropertyDirty, "MarkPropertyDirty" }, // 4010735553
		{ &Z_Construct_UFunction_UNetPushModelHelpers_MarkPropertyDirtyFromRepIndex, "MarkPropertyDirtyFromRepIndex" }, // 1005381106
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNetPushModelHelpers_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Net/NetPushModelHelpers.h" },
		{ "ModuleRelativePath", "Public/Net/NetPushModelHelpers.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNetPushModelHelpers_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNetPushModelHelpers>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UNetPushModelHelpers_Statics::ClassParams = {
		&UNetPushModelHelpers::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UNetPushModelHelpers_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNetPushModelHelpers_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNetPushModelHelpers()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UNetPushModelHelpers_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UNetPushModelHelpers, 728539218);
	template<> ENGINE_API UClass* StaticClass<UNetPushModelHelpers>()
	{
		return UNetPushModelHelpers::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNetPushModelHelpers(Z_Construct_UClass_UNetPushModelHelpers, &UNetPushModelHelpers::StaticClass, TEXT("/Script/Engine"), TEXT("UNetPushModelHelpers"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNetPushModelHelpers);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
