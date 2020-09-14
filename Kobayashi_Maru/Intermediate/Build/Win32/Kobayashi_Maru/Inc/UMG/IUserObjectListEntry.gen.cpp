// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UMG/Public/Blueprint/IUserObjectListEntry.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIUserObjectListEntry() {}
// Cross Module References
	UMG_API UClass* Z_Construct_UClass_UUserObjectListEntry_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserObjectListEntry();
	UMG_API UClass* Z_Construct_UClass_UUserListEntry();
	UPackage* Z_Construct_UPackage__Script_UMG();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserObjectListEntryLibrary_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserObjectListEntryLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
// End Cross Module References
	void IUserObjectListEntry::OnListItemObjectSet(UObject* ListItemObject)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnListItemObjectSet instead.");
	}
	void UUserObjectListEntry::StaticRegisterNativesUUserObjectListEntry()
	{
	}
	struct Z_Construct_UFunction_UUserObjectListEntry_OnListItemObjectSet_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ListItemObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUserObjectListEntry_OnListItemObjectSet_Statics::NewProp_ListItemObject = { "ListItemObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UserObjectListEntry_eventOnListItemObjectSet_Parms, ListItemObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUserObjectListEntry_OnListItemObjectSet_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserObjectListEntry_OnListItemObjectSet_Statics::NewProp_ListItemObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserObjectListEntry_OnListItemObjectSet_Statics::Function_MetaDataParams[] = {
		{ "Category", "ObjectListEntry" },
		{ "Comment", "/** Called when this entry is assigned a new item object to represent by the owning list view */" },
		{ "ModuleRelativePath", "Public/Blueprint/IUserObjectListEntry.h" },
		{ "ToolTip", "Called when this entry is assigned a new item object to represent by the owning list view" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserObjectListEntry_OnListItemObjectSet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUserObjectListEntry, nullptr, "OnListItemObjectSet", nullptr, nullptr, sizeof(UserObjectListEntry_eventOnListItemObjectSet_Parms), Z_Construct_UFunction_UUserObjectListEntry_OnListItemObjectSet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserObjectListEntry_OnListItemObjectSet_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUserObjectListEntry_OnListItemObjectSet_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserObjectListEntry_OnListItemObjectSet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUserObjectListEntry_OnListItemObjectSet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUserObjectListEntry_OnListItemObjectSet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUserObjectListEntry_NoRegister()
	{
		return UUserObjectListEntry::StaticClass();
	}
	struct Z_Construct_UClass_UUserObjectListEntry_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUserObjectListEntry_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserListEntry,
		(UObject* (*)())Z_Construct_UPackage__Script_UMG,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUserObjectListEntry_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUserObjectListEntry_OnListItemObjectSet, "OnListItemObjectSet" }, // 45997171
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUserObjectListEntry_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Blueprint/IUserObjectListEntry.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUserObjectListEntry_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IUserObjectListEntry>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUserObjectListEntry_Statics::ClassParams = {
		&UUserObjectListEntry::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UUserObjectListEntry_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUserObjectListEntry_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUserObjectListEntry()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUserObjectListEntry_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUserObjectListEntry, 1665598927);
	template<> UMG_API UClass* StaticClass<UUserObjectListEntry>()
	{
		return UUserObjectListEntry::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUserObjectListEntry(Z_Construct_UClass_UUserObjectListEntry, &UUserObjectListEntry::StaticClass, TEXT("/Script/UMG"), TEXT("UUserObjectListEntry"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUserObjectListEntry);
	static FName NAME_UUserObjectListEntry_OnListItemObjectSet = FName(TEXT("OnListItemObjectSet"));
	void IUserObjectListEntry::Execute_OnListItemObjectSet(UObject* O, UObject* ListItemObject)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UUserObjectListEntry::StaticClass()));
		UserObjectListEntry_eventOnListItemObjectSet_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UUserObjectListEntry_OnListItemObjectSet);
		if (Func)
		{
			Parms.ListItemObject=ListItemObject;
			O->ProcessEvent(Func, &Parms);
		}
	}
	DEFINE_FUNCTION(UUserObjectListEntryLibrary::execGetListItemObject)
	{
		P_GET_TINTERFACE(IUserObjectListEntry,Z_Param_UserObjectListEntry);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UObject**)Z_Param__Result=UUserObjectListEntryLibrary::GetListItemObject(Z_Param_UserObjectListEntry);
		P_NATIVE_END;
	}
	void UUserObjectListEntryLibrary::StaticRegisterNativesUUserObjectListEntryLibrary()
	{
		UClass* Class = UUserObjectListEntryLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetListItemObject", &UUserObjectListEntryLibrary::execGetListItemObject },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUserObjectListEntryLibrary_GetListItemObject_Statics
	{
		struct UserObjectListEntryLibrary_eventGetListItemObject_Parms
		{
			TScriptInterface<IUserObjectListEntry> UserObjectListEntry;
			UObject* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FInterfacePropertyParams NewProp_UserObjectListEntry;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUserObjectListEntryLibrary_GetListItemObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UserObjectListEntryLibrary_eventGetListItemObject_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UUserObjectListEntryLibrary_GetListItemObject_Statics::NewProp_UserObjectListEntry = { "UserObjectListEntry", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UserObjectListEntryLibrary_eventGetListItemObject_Parms, UserObjectListEntry), Z_Construct_UClass_UUserObjectListEntry_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUserObjectListEntryLibrary_GetListItemObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserObjectListEntryLibrary_GetListItemObject_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserObjectListEntryLibrary_GetListItemObject_Statics::NewProp_UserObjectListEntry,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserObjectListEntryLibrary_GetListItemObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "UserObjectListEntry" },
		{ "Comment", "/** \n\x09 * Returns the item in the owning list view that this entry is currently assigned to represent. \n\x09 * @param UserObjectListEntry Note: Visually not transmitted, but this defaults to \"self\". No need to hook up if calling internally.\n\x09 */" },
		{ "DefaultToSelf", "UserObjectListEntry" },
		{ "ModuleRelativePath", "Public/Blueprint/IUserObjectListEntry.h" },
		{ "ToolTip", "Returns the item in the owning list view that this entry is currently assigned to represent.\n@param UserObjectListEntry Note: Visually not transmitted, but this defaults to \"self\". No need to hook up if calling internally." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserObjectListEntryLibrary_GetListItemObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUserObjectListEntryLibrary, nullptr, "GetListItemObject", nullptr, nullptr, sizeof(UserObjectListEntryLibrary_eventGetListItemObject_Parms), Z_Construct_UFunction_UUserObjectListEntryLibrary_GetListItemObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserObjectListEntryLibrary_GetListItemObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUserObjectListEntryLibrary_GetListItemObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserObjectListEntryLibrary_GetListItemObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUserObjectListEntryLibrary_GetListItemObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUserObjectListEntryLibrary_GetListItemObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUserObjectListEntryLibrary_NoRegister()
	{
		return UUserObjectListEntryLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UUserObjectListEntryLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUserObjectListEntryLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_UMG,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUserObjectListEntryLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUserObjectListEntryLibrary_GetListItemObject, "GetListItemObject" }, // 370833945
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUserObjectListEntryLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Static library to supply \"for free\" functionality to widgets that implement IUserListEntry */" },
		{ "IncludePath", "Blueprint/IUserObjectListEntry.h" },
		{ "ModuleRelativePath", "Public/Blueprint/IUserObjectListEntry.h" },
		{ "ToolTip", "Static library to supply \"for free\" functionality to widgets that implement IUserListEntry" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUserObjectListEntryLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUserObjectListEntryLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUserObjectListEntryLibrary_Statics::ClassParams = {
		&UUserObjectListEntryLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UUserObjectListEntryLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUserObjectListEntryLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUserObjectListEntryLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUserObjectListEntryLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUserObjectListEntryLibrary, 1345259618);
	template<> UMG_API UClass* StaticClass<UUserObjectListEntryLibrary>()
	{
		return UUserObjectListEntryLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUserObjectListEntryLibrary(Z_Construct_UClass_UUserObjectListEntryLibrary, &UUserObjectListEntryLibrary::StaticClass, TEXT("/Script/UMG"), TEXT("UUserObjectListEntryLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUserObjectListEntryLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
