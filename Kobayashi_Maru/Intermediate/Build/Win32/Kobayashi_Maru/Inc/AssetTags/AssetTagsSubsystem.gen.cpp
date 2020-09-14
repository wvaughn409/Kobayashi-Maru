// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AssetTags/Public/AssetTagsSubsystem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAssetTagsSubsystem() {}
// Cross Module References
	ASSETTAGS_API UEnum* Z_Construct_UEnum_AssetTags_ECollectionScriptingShareType();
	UPackage* Z_Construct_UPackage__Script_AssetTags();
	ASSETTAGS_API UClass* Z_Construct_UClass_UAssetTagsSubsystem_NoRegister();
	ASSETTAGS_API UClass* Z_Construct_UClass_UAssetTagsSubsystem();
	ENGINE_API UClass* Z_Construct_UClass_UEngineSubsystem();
	ASSETREGISTRY_API UScriptStruct* Z_Construct_UScriptStruct_FAssetData();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	static UEnum* ECollectionScriptingShareType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AssetTags_ECollectionScriptingShareType, Z_Construct_UPackage__Script_AssetTags(), TEXT("ECollectionScriptingShareType"));
		}
		return Singleton;
	}
	template<> ASSETTAGS_API UEnum* StaticEnum<ECollectionScriptingShareType>()
	{
		return ECollectionScriptingShareType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ECollectionScriptingShareType(ECollectionScriptingShareType_StaticEnum, TEXT("/Script/AssetTags"), TEXT("ECollectionScriptingShareType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AssetTags_ECollectionScriptingShareType_Hash() { return 23810929U; }
	UEnum* Z_Construct_UEnum_AssetTags_ECollectionScriptingShareType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AssetTags();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ECollectionScriptingShareType"), 0, Get_Z_Construct_UEnum_AssetTags_ECollectionScriptingShareType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ECollectionScriptingShareType::Local", (int64)ECollectionScriptingShareType::Local },
				{ "ECollectionScriptingShareType::Private", (int64)ECollectionScriptingShareType::Private },
				{ "ECollectionScriptingShareType::Shared", (int64)ECollectionScriptingShareType::Shared },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "DisplayName", "Collection Share Type" },
				{ "Local.Comment", "/** This collection is only visible to you and is not in source control. */" },
				{ "Local.Name", "ECollectionScriptingShareType::Local" },
				{ "Local.ToolTip", "This collection is only visible to you and is not in source control." },
				{ "ModuleRelativePath", "Public/AssetTagsSubsystem.h" },
				{ "Private.Comment", "/** This collection is only visible to you. */" },
				{ "Private.Name", "ECollectionScriptingShareType::Private" },
				{ "Private.ToolTip", "This collection is only visible to you." },
				{ "ScriptName", "CollectionShareType" },
				{ "Shared.Comment", "/** This collection is visible to everyone. */" },
				{ "Shared.Name", "ECollectionScriptingShareType::Shared" },
				{ "Shared.ToolTip", "This collection is visible to everyone." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AssetTags,
				nullptr,
				"ECollectionScriptingShareType",
				"ECollectionScriptingShareType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	DEFINE_FUNCTION(UAssetTagsSubsystem::execGetCollectionsContainingAssetPtr)
	{
		P_GET_OBJECT(UObject,Z_Param_AssetPtr);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FName>*)Z_Param__Result=P_THIS->GetCollectionsContainingAssetPtr(Z_Param_AssetPtr);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAssetTagsSubsystem::execGetCollectionsContainingAssetData)
	{
		P_GET_STRUCT_REF(FAssetData,Z_Param_Out_AssetData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FName>*)Z_Param__Result=P_THIS->GetCollectionsContainingAssetData(Z_Param_Out_AssetData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAssetTagsSubsystem::execGetCollectionsContainingAsset)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_AssetPathName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FName>*)Z_Param__Result=P_THIS->GetCollectionsContainingAsset(Z_Param_AssetPathName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAssetTagsSubsystem::execGetAssetsInCollection)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_Name);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FAssetData>*)Z_Param__Result=P_THIS->GetAssetsInCollection(Z_Param_Name);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAssetTagsSubsystem::execGetCollections)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FName>*)Z_Param__Result=P_THIS->GetCollections();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAssetTagsSubsystem::execCollectionExists)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_Name);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CollectionExists(Z_Param_Name);
		P_NATIVE_END;
	}
#if WITH_EDITOR
	DEFINE_FUNCTION(UAssetTagsSubsystem::execRemoveAssetPtrsFromCollection)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_Name);
		P_GET_TARRAY_REF(UObject*,Z_Param_Out_AssetPtrs);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RemoveAssetPtrsFromCollection(Z_Param_Name,Z_Param_Out_AssetPtrs);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAssetTagsSubsystem::execRemoveAssetDatasFromCollection)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_Name);
		P_GET_TARRAY_REF(FAssetData,Z_Param_Out_AssetDatas);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RemoveAssetDatasFromCollection(Z_Param_Name,Z_Param_Out_AssetDatas);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAssetTagsSubsystem::execRemoveAssetsFromCollection)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_Name);
		P_GET_TARRAY_REF(FName,Z_Param_Out_AssetPathNames);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RemoveAssetsFromCollection(Z_Param_Name,Z_Param_Out_AssetPathNames);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAssetTagsSubsystem::execRemoveAssetPtrFromCollection)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_Name);
		P_GET_OBJECT(UObject,Z_Param_AssetPtr);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RemoveAssetPtrFromCollection(Z_Param_Name,Z_Param_AssetPtr);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAssetTagsSubsystem::execRemoveAssetDataFromCollection)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_Name);
		P_GET_STRUCT_REF(FAssetData,Z_Param_Out_AssetData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RemoveAssetDataFromCollection(Z_Param_Name,Z_Param_Out_AssetData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAssetTagsSubsystem::execRemoveAssetFromCollection)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_Name);
		P_GET_PROPERTY(FNameProperty,Z_Param_AssetPathName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RemoveAssetFromCollection(Z_Param_Name,Z_Param_AssetPathName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAssetTagsSubsystem::execAddAssetPtrsToCollection)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_Name);
		P_GET_TARRAY_REF(UObject*,Z_Param_Out_AssetPtrs);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->AddAssetPtrsToCollection(Z_Param_Name,Z_Param_Out_AssetPtrs);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAssetTagsSubsystem::execAddAssetDatasToCollection)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_Name);
		P_GET_TARRAY_REF(FAssetData,Z_Param_Out_AssetDatas);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->AddAssetDatasToCollection(Z_Param_Name,Z_Param_Out_AssetDatas);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAssetTagsSubsystem::execAddAssetsToCollection)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_Name);
		P_GET_TARRAY_REF(FName,Z_Param_Out_AssetPathNames);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->AddAssetsToCollection(Z_Param_Name,Z_Param_Out_AssetPathNames);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAssetTagsSubsystem::execAddAssetPtrToCollection)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_Name);
		P_GET_OBJECT(UObject,Z_Param_AssetPtr);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->AddAssetPtrToCollection(Z_Param_Name,Z_Param_AssetPtr);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAssetTagsSubsystem::execAddAssetDataToCollection)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_Name);
		P_GET_STRUCT_REF(FAssetData,Z_Param_Out_AssetData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->AddAssetDataToCollection(Z_Param_Name,Z_Param_Out_AssetData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAssetTagsSubsystem::execAddAssetToCollection)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_Name);
		P_GET_PROPERTY(FNameProperty,Z_Param_AssetPathName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->AddAssetToCollection(Z_Param_Name,Z_Param_AssetPathName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAssetTagsSubsystem::execEmptyCollection)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_Name);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->EmptyCollection(Z_Param_Name);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAssetTagsSubsystem::execReparentCollection)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_Name);
		P_GET_PROPERTY(FNameProperty,Z_Param_NewParentName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ReparentCollection(Z_Param_Name,Z_Param_NewParentName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAssetTagsSubsystem::execRenameCollection)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_Name);
		P_GET_PROPERTY(FNameProperty,Z_Param_NewName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RenameCollection(Z_Param_Name,Z_Param_NewName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAssetTagsSubsystem::execDestroyCollection)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_Name);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->DestroyCollection(Z_Param_Name);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAssetTagsSubsystem::execCreateCollection)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_Name);
		P_GET_ENUM(ECollectionScriptingShareType,Z_Param_ShareType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CreateCollection(Z_Param_Name,ECollectionScriptingShareType(Z_Param_ShareType));
		P_NATIVE_END;
	}
#endif //WITH_EDITOR
	void UAssetTagsSubsystem::StaticRegisterNativesUAssetTagsSubsystem()
	{
		UClass* Class = UAssetTagsSubsystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
#if WITH_EDITOR
			{ "AddAssetDatasToCollection", &UAssetTagsSubsystem::execAddAssetDatasToCollection },
			{ "AddAssetDataToCollection", &UAssetTagsSubsystem::execAddAssetDataToCollection },
			{ "AddAssetPtrsToCollection", &UAssetTagsSubsystem::execAddAssetPtrsToCollection },
			{ "AddAssetPtrToCollection", &UAssetTagsSubsystem::execAddAssetPtrToCollection },
			{ "AddAssetsToCollection", &UAssetTagsSubsystem::execAddAssetsToCollection },
			{ "AddAssetToCollection", &UAssetTagsSubsystem::execAddAssetToCollection },
#endif // WITH_EDITOR
			{ "CollectionExists", &UAssetTagsSubsystem::execCollectionExists },
#if WITH_EDITOR
			{ "CreateCollection", &UAssetTagsSubsystem::execCreateCollection },
			{ "DestroyCollection", &UAssetTagsSubsystem::execDestroyCollection },
			{ "EmptyCollection", &UAssetTagsSubsystem::execEmptyCollection },
#endif // WITH_EDITOR
			{ "GetAssetsInCollection", &UAssetTagsSubsystem::execGetAssetsInCollection },
			{ "GetCollections", &UAssetTagsSubsystem::execGetCollections },
			{ "GetCollectionsContainingAsset", &UAssetTagsSubsystem::execGetCollectionsContainingAsset },
			{ "GetCollectionsContainingAssetData", &UAssetTagsSubsystem::execGetCollectionsContainingAssetData },
			{ "GetCollectionsContainingAssetPtr", &UAssetTagsSubsystem::execGetCollectionsContainingAssetPtr },
#if WITH_EDITOR
			{ "RemoveAssetDataFromCollection", &UAssetTagsSubsystem::execRemoveAssetDataFromCollection },
			{ "RemoveAssetDatasFromCollection", &UAssetTagsSubsystem::execRemoveAssetDatasFromCollection },
			{ "RemoveAssetFromCollection", &UAssetTagsSubsystem::execRemoveAssetFromCollection },
			{ "RemoveAssetPtrFromCollection", &UAssetTagsSubsystem::execRemoveAssetPtrFromCollection },
			{ "RemoveAssetPtrsFromCollection", &UAssetTagsSubsystem::execRemoveAssetPtrsFromCollection },
			{ "RemoveAssetsFromCollection", &UAssetTagsSubsystem::execRemoveAssetsFromCollection },
			{ "RenameCollection", &UAssetTagsSubsystem::execRenameCollection },
			{ "ReparentCollection", &UAssetTagsSubsystem::execReparentCollection },
#endif // WITH_EDITOR
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
#if WITH_EDITOR
	struct Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetDatasToCollection_Statics
	{
		struct AssetTagsSubsystem_eventAddAssetDatasToCollection_Parms
		{
			FName Name;
			TArray<FAssetData> AssetDatas;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetDatas_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AssetDatas;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AssetDatas_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetDatasToCollection_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AssetTagsSubsystem_eventAddAssetDatasToCollection_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetDatasToCollection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AssetTagsSubsystem_eventAddAssetDatasToCollection_Parms), &Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetDatasToCollection_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetDatasToCollection_Statics::NewProp_AssetDatas_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetDatasToCollection_Statics::NewProp_AssetDatas = { "AssetDatas", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AssetTagsSubsystem_eventAddAssetDatasToCollection_Parms, AssetDatas), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetDatasToCollection_Statics::NewProp_AssetDatas_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetDatasToCollection_Statics::NewProp_AssetDatas_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetDatasToCollection_Statics::NewProp_AssetDatas_Inner = { "AssetDatas", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAssetData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetDatasToCollection_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetDatasToCollection_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AssetTagsSubsystem_eventAddAssetDatasToCollection_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetDatasToCollection_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetDatasToCollection_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetDatasToCollection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetDatasToCollection_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetDatasToCollection_Statics::NewProp_AssetDatas,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetDatasToCollection_Statics::NewProp_AssetDatas_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetDatasToCollection_Statics::NewProp_Name,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetDatasToCollection_Statics::Function_MetaDataParams[] = {
		{ "Category", "AssetTags" },
		{ "Comment", "/**\n\x09 * Add the given assets to the given collection.\n\x09 *\n\x09 * @param Name Name of the collection to modify.\n\x09 * @param AssetDatas Assets to add.\n\x09 *\n\x09 * @return True if the collection was modified, false otherwise (see the output log for details on error).\n\x09 */" },
		{ "ModuleRelativePath", "Public/AssetTagsSubsystem.h" },
		{ "ToolTip", "Add the given assets to the given collection.\n\n@param Name Name of the collection to modify.\n@param AssetDatas Assets to add.\n\n@return True if the collection was modified, false otherwise (see the output log for details on error)." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetDatasToCollection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssetTagsSubsystem, nullptr, "AddAssetDatasToCollection", nullptr, nullptr, sizeof(AssetTagsSubsystem_eventAddAssetDatasToCollection_Parms), Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetDatasToCollection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetDatasToCollection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x24420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetDatasToCollection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetDatasToCollection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetDatasToCollection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetDatasToCollection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
#if WITH_EDITOR
	struct Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetDataToCollection_Statics
	{
		struct AssetTagsSubsystem_eventAddAssetDataToCollection_Parms
		{
			FName Name;
			FAssetData AssetData;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AssetData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetDataToCollection_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AssetTagsSubsystem_eventAddAssetDataToCollection_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetDataToCollection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AssetTagsSubsystem_eventAddAssetDataToCollection_Parms), &Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetDataToCollection_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetDataToCollection_Statics::NewProp_AssetData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetDataToCollection_Statics::NewProp_AssetData = { "AssetData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AssetTagsSubsystem_eventAddAssetDataToCollection_Parms, AssetData), Z_Construct_UScriptStruct_FAssetData, METADATA_PARAMS(Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetDataToCollection_Statics::NewProp_AssetData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetDataToCollection_Statics::NewProp_AssetData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetDataToCollection_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetDataToCollection_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AssetTagsSubsystem_eventAddAssetDataToCollection_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetDataToCollection_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetDataToCollection_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetDataToCollection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetDataToCollection_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetDataToCollection_Statics::NewProp_AssetData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetDataToCollection_Statics::NewProp_Name,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetDataToCollection_Statics::Function_MetaDataParams[] = {
		{ "Category", "AssetTags" },
		{ "Comment", "/**\n\x09 * Add the given asset to the given collection.\n\x09 *\n\x09 * @param Name Name of the collection to modify.\n\x09 * @param AssetData Asset to add.\n\x09 *\n\x09 * @return True if the collection was modified, false otherwise (see the output log for details on error).\n\x09 */" },
		{ "ModuleRelativePath", "Public/AssetTagsSubsystem.h" },
		{ "ToolTip", "Add the given asset to the given collection.\n\n@param Name Name of the collection to modify.\n@param AssetData Asset to add.\n\n@return True if the collection was modified, false otherwise (see the output log for details on error)." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetDataToCollection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssetTagsSubsystem, nullptr, "AddAssetDataToCollection", nullptr, nullptr, sizeof(AssetTagsSubsystem_eventAddAssetDataToCollection_Parms), Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetDataToCollection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetDataToCollection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x24420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetDataToCollection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetDataToCollection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetDataToCollection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetDataToCollection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
#if WITH_EDITOR
	struct Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetPtrsToCollection_Statics
	{
		struct AssetTagsSubsystem_eventAddAssetPtrsToCollection_Parms
		{
			FName Name;
			TArray<UObject*> AssetPtrs;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetPtrs_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AssetPtrs;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AssetPtrs_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetPtrsToCollection_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AssetTagsSubsystem_eventAddAssetPtrsToCollection_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetPtrsToCollection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AssetTagsSubsystem_eventAddAssetPtrsToCollection_Parms), &Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetPtrsToCollection_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetPtrsToCollection_Statics::NewProp_AssetPtrs_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetPtrsToCollection_Statics::NewProp_AssetPtrs = { "AssetPtrs", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AssetTagsSubsystem_eventAddAssetPtrsToCollection_Parms, AssetPtrs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetPtrsToCollection_Statics::NewProp_AssetPtrs_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetPtrsToCollection_Statics::NewProp_AssetPtrs_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetPtrsToCollection_Statics::NewProp_AssetPtrs_Inner = { "AssetPtrs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetPtrsToCollection_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetPtrsToCollection_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AssetTagsSubsystem_eventAddAssetPtrsToCollection_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetPtrsToCollection_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetPtrsToCollection_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetPtrsToCollection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetPtrsToCollection_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetPtrsToCollection_Statics::NewProp_AssetPtrs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetPtrsToCollection_Statics::NewProp_AssetPtrs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetPtrsToCollection_Statics::NewProp_Name,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetPtrsToCollection_Statics::Function_MetaDataParams[] = {
		{ "Category", "AssetTags" },
		{ "Comment", "/**\n\x09 * Add the given assets to the given collection.\n\x09 *\n\x09 * @param Name Name of the collection to modify.\n\x09 * @param AssetPtrs Assets to add.\n\x09 *\n\x09 * @return True if the collection was modified, false otherwise (see the output log for details on error).\n\x09 */" },
		{ "ModuleRelativePath", "Public/AssetTagsSubsystem.h" },
		{ "ToolTip", "Add the given assets to the given collection.\n\n@param Name Name of the collection to modify.\n@param AssetPtrs Assets to add.\n\n@return True if the collection was modified, false otherwise (see the output log for details on error)." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetPtrsToCollection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssetTagsSubsystem, nullptr, "AddAssetPtrsToCollection", nullptr, nullptr, sizeof(AssetTagsSubsystem_eventAddAssetPtrsToCollection_Parms), Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetPtrsToCollection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetPtrsToCollection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x24420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetPtrsToCollection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetPtrsToCollection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetPtrsToCollection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetPtrsToCollection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
#if WITH_EDITOR
	struct Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetPtrToCollection_Statics
	{
		struct AssetTagsSubsystem_eventAddAssetPtrToCollection_Parms
		{
			FName Name;
			const UObject* AssetPtr;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetPtr_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AssetPtr;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetPtrToCollection_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AssetTagsSubsystem_eventAddAssetPtrToCollection_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetPtrToCollection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AssetTagsSubsystem_eventAddAssetPtrToCollection_Parms), &Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetPtrToCollection_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetPtrToCollection_Statics::NewProp_AssetPtr_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetPtrToCollection_Statics::NewProp_AssetPtr = { "AssetPtr", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AssetTagsSubsystem_eventAddAssetPtrToCollection_Parms, AssetPtr), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetPtrToCollection_Statics::NewProp_AssetPtr_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetPtrToCollection_Statics::NewProp_AssetPtr_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetPtrToCollection_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetPtrToCollection_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AssetTagsSubsystem_eventAddAssetPtrToCollection_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetPtrToCollection_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetPtrToCollection_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetPtrToCollection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetPtrToCollection_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetPtrToCollection_Statics::NewProp_AssetPtr,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetPtrToCollection_Statics::NewProp_Name,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetPtrToCollection_Statics::Function_MetaDataParams[] = {
		{ "Category", "AssetTags" },
		{ "Comment", "/**\n\x09 * Add the given asset to the given collection.\n\x09 *\n\x09 * @param Name Name of the collection to modify.\n\x09 * @param AssetPtr Asset to add.\n\x09 *\n\x09 * @return True if the collection was modified, false otherwise (see the output log for details on error).\n\x09 */" },
		{ "ModuleRelativePath", "Public/AssetTagsSubsystem.h" },
		{ "ToolTip", "Add the given asset to the given collection.\n\n@param Name Name of the collection to modify.\n@param AssetPtr Asset to add.\n\n@return True if the collection was modified, false otherwise (see the output log for details on error)." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetPtrToCollection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssetTagsSubsystem, nullptr, "AddAssetPtrToCollection", nullptr, nullptr, sizeof(AssetTagsSubsystem_eventAddAssetPtrToCollection_Parms), Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetPtrToCollection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetPtrToCollection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x24020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetPtrToCollection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetPtrToCollection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetPtrToCollection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetPtrToCollection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
#if WITH_EDITOR
	struct Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetsToCollection_Statics
	{
		struct AssetTagsSubsystem_eventAddAssetsToCollection_Parms
		{
			FName Name;
			TArray<FName> AssetPathNames;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetPathNames_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AssetPathNames;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_AssetPathNames_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetsToCollection_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AssetTagsSubsystem_eventAddAssetsToCollection_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetsToCollection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AssetTagsSubsystem_eventAddAssetsToCollection_Parms), &Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetsToCollection_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetsToCollection_Statics::NewProp_AssetPathNames_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetsToCollection_Statics::NewProp_AssetPathNames = { "AssetPathNames", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AssetTagsSubsystem_eventAddAssetsToCollection_Parms, AssetPathNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetsToCollection_Statics::NewProp_AssetPathNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetsToCollection_Statics::NewProp_AssetPathNames_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetsToCollection_Statics::NewProp_AssetPathNames_Inner = { "AssetPathNames", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetsToCollection_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetsToCollection_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AssetTagsSubsystem_eventAddAssetsToCollection_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetsToCollection_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetsToCollection_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetsToCollection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetsToCollection_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetsToCollection_Statics::NewProp_AssetPathNames,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetsToCollection_Statics::NewProp_AssetPathNames_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetsToCollection_Statics::NewProp_Name,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetsToCollection_Statics::Function_MetaDataParams[] = {
		{ "Category", "AssetTags" },
		{ "Comment", "/**\n\x09 * Add the given assets to the given collection.\n\x09 *\n\x09 * @param Name Name of the collection to modify.\n\x09 * @param AssetPathNames Assets to add (their path names, eg) /Game/MyFolder/MyAsset.MyAsset).\n\x09 *\n\x09 * @return True if the collection was modified, false otherwise (see the output log for details on error).\n\x09 */" },
		{ "ModuleRelativePath", "Public/AssetTagsSubsystem.h" },
		{ "ToolTip", "Add the given assets to the given collection.\n\n@param Name Name of the collection to modify.\n@param AssetPathNames Assets to add (their path names, eg) /Game/MyFolder/MyAsset.MyAsset).\n\n@return True if the collection was modified, false otherwise (see the output log for details on error)." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetsToCollection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssetTagsSubsystem, nullptr, "AddAssetsToCollection", nullptr, nullptr, sizeof(AssetTagsSubsystem_eventAddAssetsToCollection_Parms), Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetsToCollection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetsToCollection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x24420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetsToCollection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetsToCollection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetsToCollection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetsToCollection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
#if WITH_EDITOR
	struct Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetToCollection_Statics
	{
		struct AssetTagsSubsystem_eventAddAssetToCollection_Parms
		{
			FName Name;
			FName AssetPathName;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetPathName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_AssetPathName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetToCollection_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AssetTagsSubsystem_eventAddAssetToCollection_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetToCollection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AssetTagsSubsystem_eventAddAssetToCollection_Parms), &Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetToCollection_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetToCollection_Statics::NewProp_AssetPathName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetToCollection_Statics::NewProp_AssetPathName = { "AssetPathName", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AssetTagsSubsystem_eventAddAssetToCollection_Parms, AssetPathName), METADATA_PARAMS(Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetToCollection_Statics::NewProp_AssetPathName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetToCollection_Statics::NewProp_AssetPathName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetToCollection_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetToCollection_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AssetTagsSubsystem_eventAddAssetToCollection_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetToCollection_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetToCollection_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetToCollection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetToCollection_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetToCollection_Statics::NewProp_AssetPathName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetToCollection_Statics::NewProp_Name,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetToCollection_Statics::Function_MetaDataParams[] = {
		{ "Category", "AssetTags" },
		{ "Comment", "/**\n\x09 * Add the given asset to the given collection.\n\x09 * \n\x09 * @param Name Name of the collection to modify.\n\x09 * @param AssetPathName Asset to add (its path name, eg) /Game/MyFolder/MyAsset.MyAsset).\n\x09 *\n\x09 * @return True if the collection was modified, false otherwise (see the output log for details on error).\n\x09 */" },
		{ "ModuleRelativePath", "Public/AssetTagsSubsystem.h" },
		{ "ToolTip", "Add the given asset to the given collection.\n\n@param Name Name of the collection to modify.\n@param AssetPathName Asset to add (its path name, eg) /Game/MyFolder/MyAsset.MyAsset).\n\n@return True if the collection was modified, false otherwise (see the output log for details on error)." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetToCollection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssetTagsSubsystem, nullptr, "AddAssetToCollection", nullptr, nullptr, sizeof(AssetTagsSubsystem_eventAddAssetToCollection_Parms), Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetToCollection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetToCollection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x24020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetToCollection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetToCollection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetToCollection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetToCollection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
	struct Z_Construct_UFunction_UAssetTagsSubsystem_CollectionExists_Statics
	{
		struct AssetTagsSubsystem_eventCollectionExists_Parms
		{
			FName Name;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAssetTagsSubsystem_CollectionExists_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AssetTagsSubsystem_eventCollectionExists_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAssetTagsSubsystem_CollectionExists_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AssetTagsSubsystem_eventCollectionExists_Parms), &Z_Construct_UFunction_UAssetTagsSubsystem_CollectionExists_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetTagsSubsystem_CollectionExists_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAssetTagsSubsystem_CollectionExists_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AssetTagsSubsystem_eventCollectionExists_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_UAssetTagsSubsystem_CollectionExists_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetTagsSubsystem_CollectionExists_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssetTagsSubsystem_CollectionExists_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTagsSubsystem_CollectionExists_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTagsSubsystem_CollectionExists_Statics::NewProp_Name,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetTagsSubsystem_CollectionExists_Statics::Function_MetaDataParams[] = {
		{ "Category", "AssetTags" },
		{ "Comment", "/**\n\x09 * Check whether the given collection exists.\n\x09 *\n\x09 * @param Name Name of the collection to test.\n\x09 *\n\x09 * @return True if the collection exists, false otherwise.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AssetTagsSubsystem.h" },
		{ "ToolTip", "Check whether the given collection exists.\n\n@param Name Name of the collection to test.\n\n@return True if the collection exists, false otherwise." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssetTagsSubsystem_CollectionExists_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssetTagsSubsystem, nullptr, "CollectionExists", nullptr, nullptr, sizeof(AssetTagsSubsystem_eventCollectionExists_Parms), Z_Construct_UFunction_UAssetTagsSubsystem_CollectionExists_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetTagsSubsystem_CollectionExists_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAssetTagsSubsystem_CollectionExists_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetTagsSubsystem_CollectionExists_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAssetTagsSubsystem_CollectionExists()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAssetTagsSubsystem_CollectionExists_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#if WITH_EDITOR
	struct Z_Construct_UFunction_UAssetTagsSubsystem_CreateCollection_Statics
	{
		struct AssetTagsSubsystem_eventCreateCollection_Parms
		{
			FName Name;
			ECollectionScriptingShareType ShareType;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShareType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ShareType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ShareType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAssetTagsSubsystem_CreateCollection_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AssetTagsSubsystem_eventCreateCollection_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAssetTagsSubsystem_CreateCollection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AssetTagsSubsystem_eventCreateCollection_Parms), &Z_Construct_UFunction_UAssetTagsSubsystem_CreateCollection_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetTagsSubsystem_CreateCollection_Statics::NewProp_ShareType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAssetTagsSubsystem_CreateCollection_Statics::NewProp_ShareType = { "ShareType", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AssetTagsSubsystem_eventCreateCollection_Parms, ShareType), Z_Construct_UEnum_AssetTags_ECollectionScriptingShareType, METADATA_PARAMS(Z_Construct_UFunction_UAssetTagsSubsystem_CreateCollection_Statics::NewProp_ShareType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetTagsSubsystem_CreateCollection_Statics::NewProp_ShareType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAssetTagsSubsystem_CreateCollection_Statics::NewProp_ShareType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetTagsSubsystem_CreateCollection_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAssetTagsSubsystem_CreateCollection_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AssetTagsSubsystem_eventCreateCollection_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_UAssetTagsSubsystem_CreateCollection_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetTagsSubsystem_CreateCollection_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssetTagsSubsystem_CreateCollection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTagsSubsystem_CreateCollection_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTagsSubsystem_CreateCollection_Statics::NewProp_ShareType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTagsSubsystem_CreateCollection_Statics::NewProp_ShareType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTagsSubsystem_CreateCollection_Statics::NewProp_Name,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetTagsSubsystem_CreateCollection_Statics::Function_MetaDataParams[] = {
		{ "Category", "AssetTags" },
		{ "Comment", "/**\n\x09 * Create a new collection with the given name and share type.\n\x09 *\n\x09 * @param Name Name to give to the collection.\n\x09 * @param ShareType Whether the collection should be local, private, or shared?\n\x09 *\n\x09 * @return True if the collection was created, false otherwise (see the output log for details on error).\n\x09 */" },
		{ "ModuleRelativePath", "Public/AssetTagsSubsystem.h" },
		{ "ToolTip", "Create a new collection with the given name and share type.\n\n@param Name Name to give to the collection.\n@param ShareType Whether the collection should be local, private, or shared?\n\n@return True if the collection was created, false otherwise (see the output log for details on error)." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssetTagsSubsystem_CreateCollection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssetTagsSubsystem, nullptr, "CreateCollection", nullptr, nullptr, sizeof(AssetTagsSubsystem_eventCreateCollection_Parms), Z_Construct_UFunction_UAssetTagsSubsystem_CreateCollection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetTagsSubsystem_CreateCollection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x24020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAssetTagsSubsystem_CreateCollection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetTagsSubsystem_CreateCollection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAssetTagsSubsystem_CreateCollection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAssetTagsSubsystem_CreateCollection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
#if WITH_EDITOR
	struct Z_Construct_UFunction_UAssetTagsSubsystem_DestroyCollection_Statics
	{
		struct AssetTagsSubsystem_eventDestroyCollection_Parms
		{
			FName Name;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAssetTagsSubsystem_DestroyCollection_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AssetTagsSubsystem_eventDestroyCollection_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAssetTagsSubsystem_DestroyCollection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AssetTagsSubsystem_eventDestroyCollection_Parms), &Z_Construct_UFunction_UAssetTagsSubsystem_DestroyCollection_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetTagsSubsystem_DestroyCollection_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAssetTagsSubsystem_DestroyCollection_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AssetTagsSubsystem_eventDestroyCollection_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_UAssetTagsSubsystem_DestroyCollection_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetTagsSubsystem_DestroyCollection_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssetTagsSubsystem_DestroyCollection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTagsSubsystem_DestroyCollection_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTagsSubsystem_DestroyCollection_Statics::NewProp_Name,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetTagsSubsystem_DestroyCollection_Statics::Function_MetaDataParams[] = {
		{ "Category", "AssetTags" },
		{ "Comment", "/**\n\x09 * Destroy the given collection.\n\x09 *\n\x09 * @param Name Name of the collection to destroy.\n\x09 *\n\x09 * @return True if the collection was destroyed, false otherwise (see the output log for details on error).\n\x09 */" },
		{ "ModuleRelativePath", "Public/AssetTagsSubsystem.h" },
		{ "ToolTip", "Destroy the given collection.\n\n@param Name Name of the collection to destroy.\n\n@return True if the collection was destroyed, false otherwise (see the output log for details on error)." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssetTagsSubsystem_DestroyCollection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssetTagsSubsystem, nullptr, "DestroyCollection", nullptr, nullptr, sizeof(AssetTagsSubsystem_eventDestroyCollection_Parms), Z_Construct_UFunction_UAssetTagsSubsystem_DestroyCollection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetTagsSubsystem_DestroyCollection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x24020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAssetTagsSubsystem_DestroyCollection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetTagsSubsystem_DestroyCollection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAssetTagsSubsystem_DestroyCollection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAssetTagsSubsystem_DestroyCollection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
#if WITH_EDITOR
	struct Z_Construct_UFunction_UAssetTagsSubsystem_EmptyCollection_Statics
	{
		struct AssetTagsSubsystem_eventEmptyCollection_Parms
		{
			FName Name;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAssetTagsSubsystem_EmptyCollection_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AssetTagsSubsystem_eventEmptyCollection_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAssetTagsSubsystem_EmptyCollection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AssetTagsSubsystem_eventEmptyCollection_Parms), &Z_Construct_UFunction_UAssetTagsSubsystem_EmptyCollection_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetTagsSubsystem_EmptyCollection_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAssetTagsSubsystem_EmptyCollection_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AssetTagsSubsystem_eventEmptyCollection_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_UAssetTagsSubsystem_EmptyCollection_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetTagsSubsystem_EmptyCollection_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssetTagsSubsystem_EmptyCollection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTagsSubsystem_EmptyCollection_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTagsSubsystem_EmptyCollection_Statics::NewProp_Name,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetTagsSubsystem_EmptyCollection_Statics::Function_MetaDataParams[] = {
		{ "Category", "AssetTags" },
		{ "Comment", "/**\n\x09 * Remove all assets from the given collection.\n\x09 *\n\x09 * @param Name Name of the collection to modify.\n\x09 *\n\x09 * @return True if the collection was modified, false otherwise (see the output log for details on error).\n\x09 */" },
		{ "ModuleRelativePath", "Public/AssetTagsSubsystem.h" },
		{ "ToolTip", "Remove all assets from the given collection.\n\n@param Name Name of the collection to modify.\n\n@return True if the collection was modified, false otherwise (see the output log for details on error)." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssetTagsSubsystem_EmptyCollection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssetTagsSubsystem, nullptr, "EmptyCollection", nullptr, nullptr, sizeof(AssetTagsSubsystem_eventEmptyCollection_Parms), Z_Construct_UFunction_UAssetTagsSubsystem_EmptyCollection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetTagsSubsystem_EmptyCollection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x24020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAssetTagsSubsystem_EmptyCollection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetTagsSubsystem_EmptyCollection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAssetTagsSubsystem_EmptyCollection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAssetTagsSubsystem_EmptyCollection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
	struct Z_Construct_UFunction_UAssetTagsSubsystem_GetAssetsInCollection_Statics
	{
		struct AssetTagsSubsystem_eventGetAssetsInCollection_Parms
		{
			FName Name;
			TArray<FAssetData> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAssetTagsSubsystem_GetAssetsInCollection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AssetTagsSubsystem_eventGetAssetsInCollection_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAssetTagsSubsystem_GetAssetsInCollection_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAssetData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetTagsSubsystem_GetAssetsInCollection_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAssetTagsSubsystem_GetAssetsInCollection_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AssetTagsSubsystem_eventGetAssetsInCollection_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_UAssetTagsSubsystem_GetAssetsInCollection_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetTagsSubsystem_GetAssetsInCollection_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssetTagsSubsystem_GetAssetsInCollection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTagsSubsystem_GetAssetsInCollection_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTagsSubsystem_GetAssetsInCollection_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTagsSubsystem_GetAssetsInCollection_Statics::NewProp_Name,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetTagsSubsystem_GetAssetsInCollection_Statics::Function_MetaDataParams[] = {
		{ "Category", "AssetTags" },
		{ "Comment", "/**\n\x09 * Get the assets in the given collection.\n\x09 * \n\x09 * @param Name Name of the collection to test.\n\x09 *\n\x09 * @return Assets in the given collection.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AssetTagsSubsystem.h" },
		{ "ToolTip", "Get the assets in the given collection.\n\n@param Name Name of the collection to test.\n\n@return Assets in the given collection." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssetTagsSubsystem_GetAssetsInCollection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssetTagsSubsystem, nullptr, "GetAssetsInCollection", nullptr, nullptr, sizeof(AssetTagsSubsystem_eventGetAssetsInCollection_Parms), Z_Construct_UFunction_UAssetTagsSubsystem_GetAssetsInCollection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetTagsSubsystem_GetAssetsInCollection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAssetTagsSubsystem_GetAssetsInCollection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetTagsSubsystem_GetAssetsInCollection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAssetTagsSubsystem_GetAssetsInCollection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAssetTagsSubsystem_GetAssetsInCollection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAssetTagsSubsystem_GetCollections_Statics
	{
		struct AssetTagsSubsystem_eventGetCollections_Parms
		{
			TArray<FName> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAssetTagsSubsystem_GetCollections_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AssetTagsSubsystem_eventGetCollections_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAssetTagsSubsystem_GetCollections_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssetTagsSubsystem_GetCollections_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTagsSubsystem_GetCollections_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTagsSubsystem_GetCollections_Statics::NewProp_ReturnValue_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetTagsSubsystem_GetCollections_Statics::Function_MetaDataParams[] = {
		{ "Category", "AssetTags" },
		{ "Comment", "/**\n\x09 * Get the names of all available collections.\n\x09 *\n\x09 * @return Names of all available collections.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AssetTagsSubsystem.h" },
		{ "ToolTip", "Get the names of all available collections.\n\n@return Names of all available collections." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssetTagsSubsystem_GetCollections_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssetTagsSubsystem, nullptr, "GetCollections", nullptr, nullptr, sizeof(AssetTagsSubsystem_eventGetCollections_Parms), Z_Construct_UFunction_UAssetTagsSubsystem_GetCollections_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetTagsSubsystem_GetCollections_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAssetTagsSubsystem_GetCollections_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetTagsSubsystem_GetCollections_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAssetTagsSubsystem_GetCollections()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAssetTagsSubsystem_GetCollections_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAssetTagsSubsystem_GetCollectionsContainingAsset_Statics
	{
		struct AssetTagsSubsystem_eventGetCollectionsContainingAsset_Parms
		{
			FName AssetPathName;
			TArray<FName> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetPathName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_AssetPathName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAssetTagsSubsystem_GetCollectionsContainingAsset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AssetTagsSubsystem_eventGetCollectionsContainingAsset_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAssetTagsSubsystem_GetCollectionsContainingAsset_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetTagsSubsystem_GetCollectionsContainingAsset_Statics::NewProp_AssetPathName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAssetTagsSubsystem_GetCollectionsContainingAsset_Statics::NewProp_AssetPathName = { "AssetPathName", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AssetTagsSubsystem_eventGetCollectionsContainingAsset_Parms, AssetPathName), METADATA_PARAMS(Z_Construct_UFunction_UAssetTagsSubsystem_GetCollectionsContainingAsset_Statics::NewProp_AssetPathName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetTagsSubsystem_GetCollectionsContainingAsset_Statics::NewProp_AssetPathName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssetTagsSubsystem_GetCollectionsContainingAsset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTagsSubsystem_GetCollectionsContainingAsset_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTagsSubsystem_GetCollectionsContainingAsset_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTagsSubsystem_GetCollectionsContainingAsset_Statics::NewProp_AssetPathName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetTagsSubsystem_GetCollectionsContainingAsset_Statics::Function_MetaDataParams[] = {
		{ "Category", "AssetTags" },
		{ "Comment", "/**\n\x09 * Get the names of the collections that contain the given asset.\n\x09 * \n\x09 * @param AssetPathName Asset to test (its path name, eg) /Game/MyFolder/MyAsset.MyAsset).\n\x09 *\n\x09 * @return Names of the collections that contain the asset.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AssetTagsSubsystem.h" },
		{ "ToolTip", "Get the names of the collections that contain the given asset.\n\n@param AssetPathName Asset to test (its path name, eg) /Game/MyFolder/MyAsset.MyAsset).\n\n@return Names of the collections that contain the asset." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssetTagsSubsystem_GetCollectionsContainingAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssetTagsSubsystem, nullptr, "GetCollectionsContainingAsset", nullptr, nullptr, sizeof(AssetTagsSubsystem_eventGetCollectionsContainingAsset_Parms), Z_Construct_UFunction_UAssetTagsSubsystem_GetCollectionsContainingAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetTagsSubsystem_GetCollectionsContainingAsset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAssetTagsSubsystem_GetCollectionsContainingAsset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetTagsSubsystem_GetCollectionsContainingAsset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAssetTagsSubsystem_GetCollectionsContainingAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAssetTagsSubsystem_GetCollectionsContainingAsset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAssetTagsSubsystem_GetCollectionsContainingAssetData_Statics
	{
		struct AssetTagsSubsystem_eventGetCollectionsContainingAssetData_Parms
		{
			FAssetData AssetData;
			TArray<FName> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AssetData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAssetTagsSubsystem_GetCollectionsContainingAssetData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AssetTagsSubsystem_eventGetCollectionsContainingAssetData_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAssetTagsSubsystem_GetCollectionsContainingAssetData_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetTagsSubsystem_GetCollectionsContainingAssetData_Statics::NewProp_AssetData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAssetTagsSubsystem_GetCollectionsContainingAssetData_Statics::NewProp_AssetData = { "AssetData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AssetTagsSubsystem_eventGetCollectionsContainingAssetData_Parms, AssetData), Z_Construct_UScriptStruct_FAssetData, METADATA_PARAMS(Z_Construct_UFunction_UAssetTagsSubsystem_GetCollectionsContainingAssetData_Statics::NewProp_AssetData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetTagsSubsystem_GetCollectionsContainingAssetData_Statics::NewProp_AssetData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssetTagsSubsystem_GetCollectionsContainingAssetData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTagsSubsystem_GetCollectionsContainingAssetData_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTagsSubsystem_GetCollectionsContainingAssetData_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTagsSubsystem_GetCollectionsContainingAssetData_Statics::NewProp_AssetData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetTagsSubsystem_GetCollectionsContainingAssetData_Statics::Function_MetaDataParams[] = {
		{ "Category", "AssetTags" },
		{ "Comment", "/**\n\x09 * Get the names of the collections that contain the given asset.\n\x09 * \n\x09 * @param AssetData Asset to test.\n\x09 *\n\x09 * @return Names of the collections that contain the asset.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AssetTagsSubsystem.h" },
		{ "ToolTip", "Get the names of the collections that contain the given asset.\n\n@param AssetData Asset to test.\n\n@return Names of the collections that contain the asset." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssetTagsSubsystem_GetCollectionsContainingAssetData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssetTagsSubsystem, nullptr, "GetCollectionsContainingAssetData", nullptr, nullptr, sizeof(AssetTagsSubsystem_eventGetCollectionsContainingAssetData_Parms), Z_Construct_UFunction_UAssetTagsSubsystem_GetCollectionsContainingAssetData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetTagsSubsystem_GetCollectionsContainingAssetData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAssetTagsSubsystem_GetCollectionsContainingAssetData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetTagsSubsystem_GetCollectionsContainingAssetData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAssetTagsSubsystem_GetCollectionsContainingAssetData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAssetTagsSubsystem_GetCollectionsContainingAssetData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAssetTagsSubsystem_GetCollectionsContainingAssetPtr_Statics
	{
		struct AssetTagsSubsystem_eventGetCollectionsContainingAssetPtr_Parms
		{
			const UObject* AssetPtr;
			TArray<FName> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetPtr_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AssetPtr;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAssetTagsSubsystem_GetCollectionsContainingAssetPtr_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AssetTagsSubsystem_eventGetCollectionsContainingAssetPtr_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAssetTagsSubsystem_GetCollectionsContainingAssetPtr_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetTagsSubsystem_GetCollectionsContainingAssetPtr_Statics::NewProp_AssetPtr_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAssetTagsSubsystem_GetCollectionsContainingAssetPtr_Statics::NewProp_AssetPtr = { "AssetPtr", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AssetTagsSubsystem_eventGetCollectionsContainingAssetPtr_Parms, AssetPtr), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAssetTagsSubsystem_GetCollectionsContainingAssetPtr_Statics::NewProp_AssetPtr_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetTagsSubsystem_GetCollectionsContainingAssetPtr_Statics::NewProp_AssetPtr_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssetTagsSubsystem_GetCollectionsContainingAssetPtr_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTagsSubsystem_GetCollectionsContainingAssetPtr_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTagsSubsystem_GetCollectionsContainingAssetPtr_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTagsSubsystem_GetCollectionsContainingAssetPtr_Statics::NewProp_AssetPtr,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetTagsSubsystem_GetCollectionsContainingAssetPtr_Statics::Function_MetaDataParams[] = {
		{ "Category", "AssetTags" },
		{ "Comment", "/**\n\x09 * Get the names of the collections that contain the given asset.\n\x09 * \n\x09 * @param AssetPtr Asset to test.\n\x09 *\n\x09 * @return Names of the collections that contain the asset.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AssetTagsSubsystem.h" },
		{ "ToolTip", "Get the names of the collections that contain the given asset.\n\n@param AssetPtr Asset to test.\n\n@return Names of the collections that contain the asset." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssetTagsSubsystem_GetCollectionsContainingAssetPtr_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssetTagsSubsystem, nullptr, "GetCollectionsContainingAssetPtr", nullptr, nullptr, sizeof(AssetTagsSubsystem_eventGetCollectionsContainingAssetPtr_Parms), Z_Construct_UFunction_UAssetTagsSubsystem_GetCollectionsContainingAssetPtr_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetTagsSubsystem_GetCollectionsContainingAssetPtr_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAssetTagsSubsystem_GetCollectionsContainingAssetPtr_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetTagsSubsystem_GetCollectionsContainingAssetPtr_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAssetTagsSubsystem_GetCollectionsContainingAssetPtr()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAssetTagsSubsystem_GetCollectionsContainingAssetPtr_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#if WITH_EDITOR
	struct Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetDataFromCollection_Statics
	{
		struct AssetTagsSubsystem_eventRemoveAssetDataFromCollection_Parms
		{
			FName Name;
			FAssetData AssetData;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AssetData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetDataFromCollection_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AssetTagsSubsystem_eventRemoveAssetDataFromCollection_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetDataFromCollection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AssetTagsSubsystem_eventRemoveAssetDataFromCollection_Parms), &Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetDataFromCollection_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetDataFromCollection_Statics::NewProp_AssetData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetDataFromCollection_Statics::NewProp_AssetData = { "AssetData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AssetTagsSubsystem_eventRemoveAssetDataFromCollection_Parms, AssetData), Z_Construct_UScriptStruct_FAssetData, METADATA_PARAMS(Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetDataFromCollection_Statics::NewProp_AssetData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetDataFromCollection_Statics::NewProp_AssetData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetDataFromCollection_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetDataFromCollection_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AssetTagsSubsystem_eventRemoveAssetDataFromCollection_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetDataFromCollection_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetDataFromCollection_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetDataFromCollection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetDataFromCollection_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetDataFromCollection_Statics::NewProp_AssetData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetDataFromCollection_Statics::NewProp_Name,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetDataFromCollection_Statics::Function_MetaDataParams[] = {
		{ "Category", "AssetTags" },
		{ "Comment", "/**\n\x09 * Remove the given asset from the given collection.\n\x09 *\n\x09 * @param Name Name of the collection to modify.\n\x09 * @param AssetData Asset to remove.\n\x09 *\n\x09 * @return True if the collection was modified, false otherwise (see the output log for details on error).\n\x09 */" },
		{ "ModuleRelativePath", "Public/AssetTagsSubsystem.h" },
		{ "ToolTip", "Remove the given asset from the given collection.\n\n@param Name Name of the collection to modify.\n@param AssetData Asset to remove.\n\n@return True if the collection was modified, false otherwise (see the output log for details on error)." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetDataFromCollection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssetTagsSubsystem, nullptr, "RemoveAssetDataFromCollection", nullptr, nullptr, sizeof(AssetTagsSubsystem_eventRemoveAssetDataFromCollection_Parms), Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetDataFromCollection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetDataFromCollection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x24420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetDataFromCollection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetDataFromCollection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetDataFromCollection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetDataFromCollection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
#if WITH_EDITOR
	struct Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetDatasFromCollection_Statics
	{
		struct AssetTagsSubsystem_eventRemoveAssetDatasFromCollection_Parms
		{
			FName Name;
			TArray<FAssetData> AssetDatas;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetDatas_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AssetDatas;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AssetDatas_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetDatasFromCollection_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AssetTagsSubsystem_eventRemoveAssetDatasFromCollection_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetDatasFromCollection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AssetTagsSubsystem_eventRemoveAssetDatasFromCollection_Parms), &Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetDatasFromCollection_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetDatasFromCollection_Statics::NewProp_AssetDatas_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetDatasFromCollection_Statics::NewProp_AssetDatas = { "AssetDatas", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AssetTagsSubsystem_eventRemoveAssetDatasFromCollection_Parms, AssetDatas), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetDatasFromCollection_Statics::NewProp_AssetDatas_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetDatasFromCollection_Statics::NewProp_AssetDatas_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetDatasFromCollection_Statics::NewProp_AssetDatas_Inner = { "AssetDatas", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAssetData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetDatasFromCollection_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetDatasFromCollection_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AssetTagsSubsystem_eventRemoveAssetDatasFromCollection_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetDatasFromCollection_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetDatasFromCollection_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetDatasFromCollection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetDatasFromCollection_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetDatasFromCollection_Statics::NewProp_AssetDatas,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetDatasFromCollection_Statics::NewProp_AssetDatas_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetDatasFromCollection_Statics::NewProp_Name,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetDatasFromCollection_Statics::Function_MetaDataParams[] = {
		{ "Category", "AssetTags" },
		{ "Comment", "/**\n\x09 * Remove the given assets from the given collection.\n\x09 *\n\x09 * @param Name Name of the collection to modify.\n\x09 * @param AssetDatas Assets to remove.\n\x09 *\n\x09 * @return True if the collection was modified, false otherwise (see the output log for details on error).\n\x09 */" },
		{ "ModuleRelativePath", "Public/AssetTagsSubsystem.h" },
		{ "ToolTip", "Remove the given assets from the given collection.\n\n@param Name Name of the collection to modify.\n@param AssetDatas Assets to remove.\n\n@return True if the collection was modified, false otherwise (see the output log for details on error)." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetDatasFromCollection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssetTagsSubsystem, nullptr, "RemoveAssetDatasFromCollection", nullptr, nullptr, sizeof(AssetTagsSubsystem_eventRemoveAssetDatasFromCollection_Parms), Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetDatasFromCollection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetDatasFromCollection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x24420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetDatasFromCollection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetDatasFromCollection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetDatasFromCollection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetDatasFromCollection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
#if WITH_EDITOR
	struct Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetFromCollection_Statics
	{
		struct AssetTagsSubsystem_eventRemoveAssetFromCollection_Parms
		{
			FName Name;
			FName AssetPathName;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetPathName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_AssetPathName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetFromCollection_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AssetTagsSubsystem_eventRemoveAssetFromCollection_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetFromCollection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AssetTagsSubsystem_eventRemoveAssetFromCollection_Parms), &Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetFromCollection_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetFromCollection_Statics::NewProp_AssetPathName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetFromCollection_Statics::NewProp_AssetPathName = { "AssetPathName", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AssetTagsSubsystem_eventRemoveAssetFromCollection_Parms, AssetPathName), METADATA_PARAMS(Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetFromCollection_Statics::NewProp_AssetPathName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetFromCollection_Statics::NewProp_AssetPathName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetFromCollection_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetFromCollection_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AssetTagsSubsystem_eventRemoveAssetFromCollection_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetFromCollection_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetFromCollection_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetFromCollection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetFromCollection_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetFromCollection_Statics::NewProp_AssetPathName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetFromCollection_Statics::NewProp_Name,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetFromCollection_Statics::Function_MetaDataParams[] = {
		{ "Category", "AssetTags" },
		{ "Comment", "/**\n\x09 * Remove the given asset from the given collection.\n\x09 * \n\x09 * @param Name Name of the collection to modify.\n\x09 * @param AssetPathName Asset to remove (its path name, eg) /Game/MyFolder/MyAsset.MyAsset).\n\x09 *\n\x09 * @return True if the collection was modified, false otherwise (see the output log for details on error).\n\x09 */" },
		{ "ModuleRelativePath", "Public/AssetTagsSubsystem.h" },
		{ "ToolTip", "Remove the given asset from the given collection.\n\n@param Name Name of the collection to modify.\n@param AssetPathName Asset to remove (its path name, eg) /Game/MyFolder/MyAsset.MyAsset).\n\n@return True if the collection was modified, false otherwise (see the output log for details on error)." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetFromCollection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssetTagsSubsystem, nullptr, "RemoveAssetFromCollection", nullptr, nullptr, sizeof(AssetTagsSubsystem_eventRemoveAssetFromCollection_Parms), Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetFromCollection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetFromCollection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x24020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetFromCollection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetFromCollection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetFromCollection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetFromCollection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
#if WITH_EDITOR
	struct Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetPtrFromCollection_Statics
	{
		struct AssetTagsSubsystem_eventRemoveAssetPtrFromCollection_Parms
		{
			FName Name;
			const UObject* AssetPtr;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetPtr_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AssetPtr;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetPtrFromCollection_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AssetTagsSubsystem_eventRemoveAssetPtrFromCollection_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetPtrFromCollection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AssetTagsSubsystem_eventRemoveAssetPtrFromCollection_Parms), &Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetPtrFromCollection_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetPtrFromCollection_Statics::NewProp_AssetPtr_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetPtrFromCollection_Statics::NewProp_AssetPtr = { "AssetPtr", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AssetTagsSubsystem_eventRemoveAssetPtrFromCollection_Parms, AssetPtr), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetPtrFromCollection_Statics::NewProp_AssetPtr_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetPtrFromCollection_Statics::NewProp_AssetPtr_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetPtrFromCollection_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetPtrFromCollection_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AssetTagsSubsystem_eventRemoveAssetPtrFromCollection_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetPtrFromCollection_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetPtrFromCollection_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetPtrFromCollection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetPtrFromCollection_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetPtrFromCollection_Statics::NewProp_AssetPtr,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetPtrFromCollection_Statics::NewProp_Name,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetPtrFromCollection_Statics::Function_MetaDataParams[] = {
		{ "Category", "AssetTags" },
		{ "Comment", "/**\n\x09 * Remove the given asset from the given collection.\n\x09 *\n\x09 * @param Name Name of the collection to modify.\n\x09 * @param AssetPtr Asset to remove.\n\x09 *\n\x09 * @return True if the collection was modified, false otherwise (see the output log for details on error).\n\x09 */" },
		{ "ModuleRelativePath", "Public/AssetTagsSubsystem.h" },
		{ "ToolTip", "Remove the given asset from the given collection.\n\n@param Name Name of the collection to modify.\n@param AssetPtr Asset to remove.\n\n@return True if the collection was modified, false otherwise (see the output log for details on error)." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetPtrFromCollection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssetTagsSubsystem, nullptr, "RemoveAssetPtrFromCollection", nullptr, nullptr, sizeof(AssetTagsSubsystem_eventRemoveAssetPtrFromCollection_Parms), Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetPtrFromCollection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetPtrFromCollection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x24020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetPtrFromCollection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetPtrFromCollection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetPtrFromCollection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetPtrFromCollection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
#if WITH_EDITOR
	struct Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetPtrsFromCollection_Statics
	{
		struct AssetTagsSubsystem_eventRemoveAssetPtrsFromCollection_Parms
		{
			FName Name;
			TArray<UObject*> AssetPtrs;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetPtrs_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AssetPtrs;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AssetPtrs_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetPtrsFromCollection_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AssetTagsSubsystem_eventRemoveAssetPtrsFromCollection_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetPtrsFromCollection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AssetTagsSubsystem_eventRemoveAssetPtrsFromCollection_Parms), &Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetPtrsFromCollection_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetPtrsFromCollection_Statics::NewProp_AssetPtrs_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetPtrsFromCollection_Statics::NewProp_AssetPtrs = { "AssetPtrs", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AssetTagsSubsystem_eventRemoveAssetPtrsFromCollection_Parms, AssetPtrs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetPtrsFromCollection_Statics::NewProp_AssetPtrs_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetPtrsFromCollection_Statics::NewProp_AssetPtrs_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetPtrsFromCollection_Statics::NewProp_AssetPtrs_Inner = { "AssetPtrs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetPtrsFromCollection_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetPtrsFromCollection_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AssetTagsSubsystem_eventRemoveAssetPtrsFromCollection_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetPtrsFromCollection_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetPtrsFromCollection_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetPtrsFromCollection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetPtrsFromCollection_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetPtrsFromCollection_Statics::NewProp_AssetPtrs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetPtrsFromCollection_Statics::NewProp_AssetPtrs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetPtrsFromCollection_Statics::NewProp_Name,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetPtrsFromCollection_Statics::Function_MetaDataParams[] = {
		{ "Category", "AssetTags" },
		{ "Comment", "/**\n\x09 * Remove the given assets from the given collection.\n\x09 *\n\x09 * @param Name Name of the collection to modify.\n\x09 * @param AssetPtrs Assets to remove.\n\x09 *\n\x09 * @return True if the collection was modified, false otherwise (see the output log for details on error).\n\x09 */" },
		{ "ModuleRelativePath", "Public/AssetTagsSubsystem.h" },
		{ "ToolTip", "Remove the given assets from the given collection.\n\n@param Name Name of the collection to modify.\n@param AssetPtrs Assets to remove.\n\n@return True if the collection was modified, false otherwise (see the output log for details on error)." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetPtrsFromCollection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssetTagsSubsystem, nullptr, "RemoveAssetPtrsFromCollection", nullptr, nullptr, sizeof(AssetTagsSubsystem_eventRemoveAssetPtrsFromCollection_Parms), Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetPtrsFromCollection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetPtrsFromCollection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x24420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetPtrsFromCollection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetPtrsFromCollection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetPtrsFromCollection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetPtrsFromCollection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
#if WITH_EDITOR
	struct Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetsFromCollection_Statics
	{
		struct AssetTagsSubsystem_eventRemoveAssetsFromCollection_Parms
		{
			FName Name;
			TArray<FName> AssetPathNames;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetPathNames_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AssetPathNames;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_AssetPathNames_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetsFromCollection_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AssetTagsSubsystem_eventRemoveAssetsFromCollection_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetsFromCollection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AssetTagsSubsystem_eventRemoveAssetsFromCollection_Parms), &Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetsFromCollection_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetsFromCollection_Statics::NewProp_AssetPathNames_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetsFromCollection_Statics::NewProp_AssetPathNames = { "AssetPathNames", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AssetTagsSubsystem_eventRemoveAssetsFromCollection_Parms, AssetPathNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetsFromCollection_Statics::NewProp_AssetPathNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetsFromCollection_Statics::NewProp_AssetPathNames_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetsFromCollection_Statics::NewProp_AssetPathNames_Inner = { "AssetPathNames", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetsFromCollection_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetsFromCollection_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AssetTagsSubsystem_eventRemoveAssetsFromCollection_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetsFromCollection_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetsFromCollection_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetsFromCollection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetsFromCollection_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetsFromCollection_Statics::NewProp_AssetPathNames,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetsFromCollection_Statics::NewProp_AssetPathNames_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetsFromCollection_Statics::NewProp_Name,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetsFromCollection_Statics::Function_MetaDataParams[] = {
		{ "Category", "AssetTags" },
		{ "Comment", "/**\n\x09 * Remove the given assets from the given collection.\n\x09 *\n\x09 * @param Name Name of the collection to modify.\n\x09 * @param AssetPathNames Assets to remove (their path names, eg) /Game/MyFolder/MyAsset.MyAsset).\n\x09 *\n\x09 * @return True if the collection was modified, false otherwise (see the output log for details on error).\n\x09 */" },
		{ "ModuleRelativePath", "Public/AssetTagsSubsystem.h" },
		{ "ToolTip", "Remove the given assets from the given collection.\n\n@param Name Name of the collection to modify.\n@param AssetPathNames Assets to remove (their path names, eg) /Game/MyFolder/MyAsset.MyAsset).\n\n@return True if the collection was modified, false otherwise (see the output log for details on error)." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetsFromCollection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssetTagsSubsystem, nullptr, "RemoveAssetsFromCollection", nullptr, nullptr, sizeof(AssetTagsSubsystem_eventRemoveAssetsFromCollection_Parms), Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetsFromCollection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetsFromCollection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x24420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetsFromCollection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetsFromCollection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetsFromCollection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetsFromCollection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
#if WITH_EDITOR
	struct Z_Construct_UFunction_UAssetTagsSubsystem_RenameCollection_Statics
	{
		struct AssetTagsSubsystem_eventRenameCollection_Parms
		{
			FName Name;
			FName NewName;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_NewName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAssetTagsSubsystem_RenameCollection_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AssetTagsSubsystem_eventRenameCollection_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAssetTagsSubsystem_RenameCollection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AssetTagsSubsystem_eventRenameCollection_Parms), &Z_Construct_UFunction_UAssetTagsSubsystem_RenameCollection_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetTagsSubsystem_RenameCollection_Statics::NewProp_NewName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAssetTagsSubsystem_RenameCollection_Statics::NewProp_NewName = { "NewName", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AssetTagsSubsystem_eventRenameCollection_Parms, NewName), METADATA_PARAMS(Z_Construct_UFunction_UAssetTagsSubsystem_RenameCollection_Statics::NewProp_NewName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetTagsSubsystem_RenameCollection_Statics::NewProp_NewName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetTagsSubsystem_RenameCollection_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAssetTagsSubsystem_RenameCollection_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AssetTagsSubsystem_eventRenameCollection_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_UAssetTagsSubsystem_RenameCollection_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetTagsSubsystem_RenameCollection_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssetTagsSubsystem_RenameCollection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTagsSubsystem_RenameCollection_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTagsSubsystem_RenameCollection_Statics::NewProp_NewName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTagsSubsystem_RenameCollection_Statics::NewProp_Name,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetTagsSubsystem_RenameCollection_Statics::Function_MetaDataParams[] = {
		{ "Category", "AssetTags" },
		{ "Comment", "/**\n\x09 * Rename the given collection.\n\x09 *\n\x09 * @param Name Name of the collection to rename.\n\x09 * @param NewName Name to give to the collection.\n\x09 *\n\x09 * @return True if the collection was renamed, false otherwise (see the output log for details on error).\n\x09 */" },
		{ "ModuleRelativePath", "Public/AssetTagsSubsystem.h" },
		{ "ToolTip", "Rename the given collection.\n\n@param Name Name of the collection to rename.\n@param NewName Name to give to the collection.\n\n@return True if the collection was renamed, false otherwise (see the output log for details on error)." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssetTagsSubsystem_RenameCollection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssetTagsSubsystem, nullptr, "RenameCollection", nullptr, nullptr, sizeof(AssetTagsSubsystem_eventRenameCollection_Parms), Z_Construct_UFunction_UAssetTagsSubsystem_RenameCollection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetTagsSubsystem_RenameCollection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x24020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAssetTagsSubsystem_RenameCollection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetTagsSubsystem_RenameCollection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAssetTagsSubsystem_RenameCollection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAssetTagsSubsystem_RenameCollection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
#if WITH_EDITOR
	struct Z_Construct_UFunction_UAssetTagsSubsystem_ReparentCollection_Statics
	{
		struct AssetTagsSubsystem_eventReparentCollection_Parms
		{
			FName Name;
			FName NewParentName;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewParentName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_NewParentName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAssetTagsSubsystem_ReparentCollection_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AssetTagsSubsystem_eventReparentCollection_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAssetTagsSubsystem_ReparentCollection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AssetTagsSubsystem_eventReparentCollection_Parms), &Z_Construct_UFunction_UAssetTagsSubsystem_ReparentCollection_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetTagsSubsystem_ReparentCollection_Statics::NewProp_NewParentName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAssetTagsSubsystem_ReparentCollection_Statics::NewProp_NewParentName = { "NewParentName", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AssetTagsSubsystem_eventReparentCollection_Parms, NewParentName), METADATA_PARAMS(Z_Construct_UFunction_UAssetTagsSubsystem_ReparentCollection_Statics::NewProp_NewParentName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetTagsSubsystem_ReparentCollection_Statics::NewProp_NewParentName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetTagsSubsystem_ReparentCollection_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAssetTagsSubsystem_ReparentCollection_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AssetTagsSubsystem_eventReparentCollection_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_UAssetTagsSubsystem_ReparentCollection_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetTagsSubsystem_ReparentCollection_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssetTagsSubsystem_ReparentCollection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTagsSubsystem_ReparentCollection_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTagsSubsystem_ReparentCollection_Statics::NewProp_NewParentName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTagsSubsystem_ReparentCollection_Statics::NewProp_Name,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetTagsSubsystem_ReparentCollection_Statics::Function_MetaDataParams[] = {
		{ "Category", "AssetTags" },
		{ "Comment", "/**\n\x09 * Re-parent the given collection.\n\x09 *\n\x09 * @param Name Name of the collection to re-parent.\n\x09 * @param NewParentName Name of the new parent collection, or None to have the collection become a root collection.\n\x09 *\n\x09 * @return True if the collection was renamed, false otherwise (see the output log for details on error).\n\x09 */" },
		{ "ModuleRelativePath", "Public/AssetTagsSubsystem.h" },
		{ "ToolTip", "Re-parent the given collection.\n\n@param Name Name of the collection to re-parent.\n@param NewParentName Name of the new parent collection, or None to have the collection become a root collection.\n\n@return True if the collection was renamed, false otherwise (see the output log for details on error)." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssetTagsSubsystem_ReparentCollection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssetTagsSubsystem, nullptr, "ReparentCollection", nullptr, nullptr, sizeof(AssetTagsSubsystem_eventReparentCollection_Parms), Z_Construct_UFunction_UAssetTagsSubsystem_ReparentCollection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetTagsSubsystem_ReparentCollection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x24020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAssetTagsSubsystem_ReparentCollection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetTagsSubsystem_ReparentCollection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAssetTagsSubsystem_ReparentCollection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAssetTagsSubsystem_ReparentCollection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
	UClass* Z_Construct_UClass_UAssetTagsSubsystem_NoRegister()
	{
		return UAssetTagsSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UAssetTagsSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAssetTagsSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEngineSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_AssetTags,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAssetTagsSubsystem_Statics::FuncInfo[] = {
#if WITH_EDITOR
		{ &Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetDatasToCollection, "AddAssetDatasToCollection" }, // 1875765685
#endif //WITH_EDITOR
#if WITH_EDITOR
		{ &Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetDataToCollection, "AddAssetDataToCollection" }, // 1702341481
#endif //WITH_EDITOR
#if WITH_EDITOR
		{ &Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetPtrsToCollection, "AddAssetPtrsToCollection" }, // 3355275771
#endif //WITH_EDITOR
#if WITH_EDITOR
		{ &Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetPtrToCollection, "AddAssetPtrToCollection" }, // 3796111175
#endif //WITH_EDITOR
#if WITH_EDITOR
		{ &Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetsToCollection, "AddAssetsToCollection" }, // 1806049874
#endif //WITH_EDITOR
#if WITH_EDITOR
		{ &Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetToCollection, "AddAssetToCollection" }, // 3407105231
#endif //WITH_EDITOR
		{ &Z_Construct_UFunction_UAssetTagsSubsystem_CollectionExists, "CollectionExists" }, // 1092609231
#if WITH_EDITOR
		{ &Z_Construct_UFunction_UAssetTagsSubsystem_CreateCollection, "CreateCollection" }, // 2995965196
#endif //WITH_EDITOR
#if WITH_EDITOR
		{ &Z_Construct_UFunction_UAssetTagsSubsystem_DestroyCollection, "DestroyCollection" }, // 1204618069
#endif //WITH_EDITOR
#if WITH_EDITOR
		{ &Z_Construct_UFunction_UAssetTagsSubsystem_EmptyCollection, "EmptyCollection" }, // 3767932002
#endif //WITH_EDITOR
		{ &Z_Construct_UFunction_UAssetTagsSubsystem_GetAssetsInCollection, "GetAssetsInCollection" }, // 2531002252
		{ &Z_Construct_UFunction_UAssetTagsSubsystem_GetCollections, "GetCollections" }, // 1591287383
		{ &Z_Construct_UFunction_UAssetTagsSubsystem_GetCollectionsContainingAsset, "GetCollectionsContainingAsset" }, // 1858888141
		{ &Z_Construct_UFunction_UAssetTagsSubsystem_GetCollectionsContainingAssetData, "GetCollectionsContainingAssetData" }, // 671006552
		{ &Z_Construct_UFunction_UAssetTagsSubsystem_GetCollectionsContainingAssetPtr, "GetCollectionsContainingAssetPtr" }, // 1889973823
#if WITH_EDITOR
		{ &Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetDataFromCollection, "RemoveAssetDataFromCollection" }, // 1026309875
#endif //WITH_EDITOR
#if WITH_EDITOR
		{ &Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetDatasFromCollection, "RemoveAssetDatasFromCollection" }, // 4101424202
#endif //WITH_EDITOR
#if WITH_EDITOR
		{ &Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetFromCollection, "RemoveAssetFromCollection" }, // 796668665
#endif //WITH_EDITOR
#if WITH_EDITOR
		{ &Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetPtrFromCollection, "RemoveAssetPtrFromCollection" }, // 2755067514
#endif //WITH_EDITOR
#if WITH_EDITOR
		{ &Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetPtrsFromCollection, "RemoveAssetPtrsFromCollection" }, // 2816268700
#endif //WITH_EDITOR
#if WITH_EDITOR
		{ &Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetsFromCollection, "RemoveAssetsFromCollection" }, // 2669273094
#endif //WITH_EDITOR
#if WITH_EDITOR
		{ &Z_Construct_UFunction_UAssetTagsSubsystem_RenameCollection, "RenameCollection" }, // 2701165488
#endif //WITH_EDITOR
#if WITH_EDITOR
		{ &Z_Construct_UFunction_UAssetTagsSubsystem_ReparentCollection, "ReparentCollection" }, // 3947526407
#endif //WITH_EDITOR
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetTagsSubsystem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AssetTagsSubsystem.h" },
		{ "ModuleRelativePath", "Public/AssetTagsSubsystem.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAssetTagsSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAssetTagsSubsystem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAssetTagsSubsystem_Statics::ClassParams = {
		&UAssetTagsSubsystem::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAssetTagsSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAssetTagsSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAssetTagsSubsystem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAssetTagsSubsystem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAssetTagsSubsystem, 2273356132);
	template<> ASSETTAGS_API UClass* StaticClass<UAssetTagsSubsystem>()
	{
		return UAssetTagsSubsystem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAssetTagsSubsystem(Z_Construct_UClass_UAssetTagsSubsystem, &UAssetTagsSubsystem::StaticClass, TEXT("/Script/AssetTags"), TEXT("UAssetTagsSubsystem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAssetTagsSubsystem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
