// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UObjectPlugin/Classes/MyPluginObject.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyPluginObject() {}
// Cross Module References
	UOBJECTPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FMyPluginStruct();
	UPackage* Z_Construct_UPackage__Script_UObjectPlugin();
	UOBJECTPLUGIN_API UClass* Z_Construct_UClass_UMyPluginObject_NoRegister();
	UOBJECTPLUGIN_API UClass* Z_Construct_UClass_UMyPluginObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
class UScriptStruct* FMyPluginStruct::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern UOBJECTPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FMyPluginStruct_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMyPluginStruct, Z_Construct_UPackage__Script_UObjectPlugin(), TEXT("MyPluginStruct"), sizeof(FMyPluginStruct), Get_Z_Construct_UScriptStruct_FMyPluginStruct_Hash());
	}
	return Singleton;
}
template<> UOBJECTPLUGIN_API UScriptStruct* StaticStruct<FMyPluginStruct>()
{
	return FMyPluginStruct::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMyPluginStruct(FMyPluginStruct::StaticStruct, TEXT("/Script/UObjectPlugin"), TEXT("MyPluginStruct"), false, nullptr, nullptr);
static struct FScriptStruct_UObjectPlugin_StaticRegisterNativesFMyPluginStruct
{
	FScriptStruct_UObjectPlugin_StaticRegisterNativesFMyPluginStruct()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MyPluginStruct")),new UScriptStruct::TCppStructOps<FMyPluginStruct>);
	}
} ScriptStruct_UObjectPlugin_StaticRegisterNativesFMyPluginStruct;
	struct Z_Construct_UScriptStruct_FMyPluginStruct_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TestString_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TestString;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMyPluginStruct_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Example UStruct declared in a plugin module\n */" },
		{ "ModuleRelativePath", "Classes/MyPluginObject.h" },
		{ "ToolTip", "Example UStruct declared in a plugin module" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMyPluginStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMyPluginStruct>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMyPluginStruct_Statics::NewProp_TestString_MetaData[] = {
		{ "ModuleRelativePath", "Classes/MyPluginObject.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMyPluginStruct_Statics::NewProp_TestString = { "TestString", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMyPluginStruct, TestString), METADATA_PARAMS(Z_Construct_UScriptStruct_FMyPluginStruct_Statics::NewProp_TestString_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMyPluginStruct_Statics::NewProp_TestString_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMyPluginStruct_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMyPluginStruct_Statics::NewProp_TestString,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMyPluginStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UObjectPlugin,
		nullptr,
		&NewStructOps,
		"MyPluginStruct",
		sizeof(FMyPluginStruct),
		alignof(FMyPluginStruct),
		Z_Construct_UScriptStruct_FMyPluginStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMyPluginStruct_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMyPluginStruct_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMyPluginStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMyPluginStruct()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMyPluginStruct_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_UObjectPlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MyPluginStruct"), sizeof(FMyPluginStruct), Get_Z_Construct_UScriptStruct_FMyPluginStruct_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMyPluginStruct_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMyPluginStruct_Hash() { return 2810400321U; }
	void UMyPluginObject::StaticRegisterNativesUMyPluginObject()
	{
	}
	UClass* Z_Construct_UClass_UMyPluginObject_NoRegister()
	{
		return UMyPluginObject::StaticClass();
	}
	struct Z_Construct_UClass_UMyPluginObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MyStruct_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MyStruct;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMyPluginObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_UObjectPlugin,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyPluginObject_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Example of declaring a UObject in a plugin module\n */" },
		{ "IncludePath", "MyPluginObject.h" },
		{ "ModuleRelativePath", "Classes/MyPluginObject.h" },
		{ "ToolTip", "Example of declaring a UObject in a plugin module" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyPluginObject_Statics::NewProp_MyStruct_MetaData[] = {
		{ "ModuleRelativePath", "Classes/MyPluginObject.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMyPluginObject_Statics::NewProp_MyStruct = { "MyStruct", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMyPluginObject, MyStruct), Z_Construct_UScriptStruct_FMyPluginStruct, METADATA_PARAMS(Z_Construct_UClass_UMyPluginObject_Statics::NewProp_MyStruct_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMyPluginObject_Statics::NewProp_MyStruct_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMyPluginObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyPluginObject_Statics::NewProp_MyStruct,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMyPluginObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyPluginObject>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMyPluginObject_Statics::ClassParams = {
		&UMyPluginObject::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMyPluginObject_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMyPluginObject_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMyPluginObject_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMyPluginObject_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMyPluginObject()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMyPluginObject_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMyPluginObject, 3725912711);
	template<> UOBJECTPLUGIN_API UClass* StaticClass<UMyPluginObject>()
	{
		return UMyPluginObject::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMyPluginObject(Z_Construct_UClass_UMyPluginObject, &UMyPluginObject::StaticClass, TEXT("/Script/UObjectPlugin"), TEXT("UMyPluginObject"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMyPluginObject);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
