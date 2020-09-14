// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Niagara/Public/NiagaraFunctionLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraFunctionLibrary() {}
// Cross Module References
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraFunctionLibrary_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_Niagara();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraParameterCollectionInstance_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraParameterCollection_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UVolumeTexture_NoRegister();
	NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENCPoolMethod();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSystem_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAttachLocation();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UNiagaraFunctionLibrary::execGetNiagaraParameterCollection)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(UNiagaraParameterCollection,Z_Param_Collection);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UNiagaraParameterCollectionInstance**)Z_Param__Result=UNiagaraFunctionLibrary::GetNiagaraParameterCollection(Z_Param_WorldContextObject,Z_Param_Collection);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraFunctionLibrary::execSetVolumeTextureObject)
	{
		P_GET_OBJECT(UNiagaraComponent,Z_Param_NiagaraSystem);
		P_GET_PROPERTY(FStrProperty,Z_Param_OverrideName);
		P_GET_OBJECT(UVolumeTexture,Z_Param_Texture);
		P_FINISH;
		P_NATIVE_BEGIN;
		UNiagaraFunctionLibrary::SetVolumeTextureObject(Z_Param_NiagaraSystem,Z_Param_OverrideName,Z_Param_Texture);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraFunctionLibrary::execSetTextureObject)
	{
		P_GET_OBJECT(UNiagaraComponent,Z_Param_NiagaraSystem);
		P_GET_PROPERTY(FStrProperty,Z_Param_OverrideName);
		P_GET_OBJECT(UTexture,Z_Param_Texture);
		P_FINISH;
		P_NATIVE_BEGIN;
		UNiagaraFunctionLibrary::SetTextureObject(Z_Param_NiagaraSystem,Z_Param_OverrideName,Z_Param_Texture);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraFunctionLibrary::execOverrideSystemUserVariableSkeletalMeshComponent)
	{
		P_GET_OBJECT(UNiagaraComponent,Z_Param_NiagaraSystem);
		P_GET_PROPERTY(FStrProperty,Z_Param_OverrideName);
		P_GET_OBJECT(USkeletalMeshComponent,Z_Param_SkeletalMeshComponent);
		P_FINISH;
		P_NATIVE_BEGIN;
		UNiagaraFunctionLibrary::OverrideSystemUserVariableSkeletalMeshComponent(Z_Param_NiagaraSystem,Z_Param_OverrideName,Z_Param_SkeletalMeshComponent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraFunctionLibrary::execOverrideSystemUserVariableStaticMesh)
	{
		P_GET_OBJECT(UNiagaraComponent,Z_Param_NiagaraSystem);
		P_GET_PROPERTY(FStrProperty,Z_Param_OverrideName);
		P_GET_OBJECT(UStaticMesh,Z_Param_StaticMesh);
		P_FINISH;
		P_NATIVE_BEGIN;
		UNiagaraFunctionLibrary::OverrideSystemUserVariableStaticMesh(Z_Param_NiagaraSystem,Z_Param_OverrideName,Z_Param_StaticMesh);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraFunctionLibrary::execOverrideSystemUserVariableStaticMeshComponent)
	{
		P_GET_OBJECT(UNiagaraComponent,Z_Param_NiagaraSystem);
		P_GET_PROPERTY(FStrProperty,Z_Param_OverrideName);
		P_GET_OBJECT(UStaticMeshComponent,Z_Param_StaticMeshComponent);
		P_FINISH;
		P_NATIVE_BEGIN;
		UNiagaraFunctionLibrary::OverrideSystemUserVariableStaticMeshComponent(Z_Param_NiagaraSystem,Z_Param_OverrideName,Z_Param_StaticMeshComponent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraFunctionLibrary::execSpawnSystemAttached)
	{
		P_GET_OBJECT(UNiagaraSystem,Z_Param_SystemTemplate);
		P_GET_OBJECT(USceneComponent,Z_Param_AttachToComponent);
		P_GET_PROPERTY(FNameProperty,Z_Param_AttachPointName);
		P_GET_STRUCT(FVector,Z_Param_Location);
		P_GET_STRUCT(FRotator,Z_Param_Rotation);
		P_GET_PROPERTY(FByteProperty,Z_Param_LocationType);
		P_GET_UBOOL(Z_Param_bAutoDestroy);
		P_GET_UBOOL(Z_Param_bAutoActivate);
		P_GET_ENUM(ENCPoolMethod,Z_Param_PoolingMethod);
		P_GET_UBOOL(Z_Param_bPreCullCheck);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UNiagaraComponent**)Z_Param__Result=UNiagaraFunctionLibrary::SpawnSystemAttached(Z_Param_SystemTemplate,Z_Param_AttachToComponent,Z_Param_AttachPointName,Z_Param_Location,Z_Param_Rotation,EAttachLocation::Type(Z_Param_LocationType),Z_Param_bAutoDestroy,Z_Param_bAutoActivate,ENCPoolMethod(Z_Param_PoolingMethod),Z_Param_bPreCullCheck);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraFunctionLibrary::execSpawnSystemAtLocation)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(UNiagaraSystem,Z_Param_SystemTemplate);
		P_GET_STRUCT(FVector,Z_Param_Location);
		P_GET_STRUCT(FRotator,Z_Param_Rotation);
		P_GET_STRUCT(FVector,Z_Param_Scale);
		P_GET_UBOOL(Z_Param_bAutoDestroy);
		P_GET_UBOOL(Z_Param_bAutoActivate);
		P_GET_ENUM(ENCPoolMethod,Z_Param_PoolingMethod);
		P_GET_UBOOL(Z_Param_bPreCullCheck);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UNiagaraComponent**)Z_Param__Result=UNiagaraFunctionLibrary::SpawnSystemAtLocation(Z_Param_WorldContextObject,Z_Param_SystemTemplate,Z_Param_Location,Z_Param_Rotation,Z_Param_Scale,Z_Param_bAutoDestroy,Z_Param_bAutoActivate,ENCPoolMethod(Z_Param_PoolingMethod),Z_Param_bPreCullCheck);
		P_NATIVE_END;
	}
	void UNiagaraFunctionLibrary::StaticRegisterNativesUNiagaraFunctionLibrary()
	{
		UClass* Class = UNiagaraFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetNiagaraParameterCollection", &UNiagaraFunctionLibrary::execGetNiagaraParameterCollection },
			{ "OverrideSystemUserVariableSkeletalMeshComponent", &UNiagaraFunctionLibrary::execOverrideSystemUserVariableSkeletalMeshComponent },
			{ "OverrideSystemUserVariableStaticMesh", &UNiagaraFunctionLibrary::execOverrideSystemUserVariableStaticMesh },
			{ "OverrideSystemUserVariableStaticMeshComponent", &UNiagaraFunctionLibrary::execOverrideSystemUserVariableStaticMeshComponent },
			{ "SetTextureObject", &UNiagaraFunctionLibrary::execSetTextureObject },
			{ "SetVolumeTextureObject", &UNiagaraFunctionLibrary::execSetVolumeTextureObject },
			{ "SpawnSystemAtLocation", &UNiagaraFunctionLibrary::execSpawnSystemAtLocation },
			{ "SpawnSystemAttached", &UNiagaraFunctionLibrary::execSpawnSystemAttached },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UNiagaraFunctionLibrary_GetNiagaraParameterCollection_Statics
	{
		struct NiagaraFunctionLibrary_eventGetNiagaraParameterCollection_Parms
		{
			UObject* WorldContextObject;
			UNiagaraParameterCollection* Collection;
			UNiagaraParameterCollectionInstance* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Collection;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNiagaraFunctionLibrary_GetNiagaraParameterCollection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NiagaraFunctionLibrary_eventGetNiagaraParameterCollection_Parms, ReturnValue), Z_Construct_UClass_UNiagaraParameterCollectionInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNiagaraFunctionLibrary_GetNiagaraParameterCollection_Statics::NewProp_Collection = { "Collection", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NiagaraFunctionLibrary_eventGetNiagaraParameterCollection_Parms, Collection), Z_Construct_UClass_UNiagaraParameterCollection_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNiagaraFunctionLibrary_GetNiagaraParameterCollection_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NiagaraFunctionLibrary_eventGetNiagaraParameterCollection_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraFunctionLibrary_GetNiagaraParameterCollection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraFunctionLibrary_GetNiagaraParameterCollection_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraFunctionLibrary_GetNiagaraParameterCollection_Statics::NewProp_Collection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraFunctionLibrary_GetNiagaraParameterCollection_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraFunctionLibrary_GetNiagaraParameterCollection_Statics::Function_MetaDataParams[] = {
		{ "Category", "Niagara" },
		{ "Comment", "//This is gonna be totally reworked\n// \x09UFUNCTION(BlueprintCallable, Category = Niagara, meta = (Keywords = \"niagara System\", UnsafeDuringActorConstruction = \"true\"))\n// \x09static void SetUpdateScriptConstant(UNiagaraComponent* Component, FName EmitterName, FName ConstantName, FVector Value);\n" },
		{ "Keywords", "niagara parameter collection" },
		{ "ModuleRelativePath", "Public/NiagaraFunctionLibrary.h" },
		{ "ToolTip", "This is gonna be totally reworked\n       UFUNCTION(BlueprintCallable, Category = Niagara, meta = (Keywords = \"niagara System\", UnsafeDuringActorConstruction = \"true\"))\n       static void SetUpdateScriptConstant(UNiagaraComponent* Component, FName EmitterName, FName ConstantName, FVector Value);" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraFunctionLibrary_GetNiagaraParameterCollection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraFunctionLibrary, nullptr, "GetNiagaraParameterCollection", nullptr, nullptr, sizeof(NiagaraFunctionLibrary_eventGetNiagaraParameterCollection_Parms), Z_Construct_UFunction_UNiagaraFunctionLibrary_GetNiagaraParameterCollection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraFunctionLibrary_GetNiagaraParameterCollection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraFunctionLibrary_GetNiagaraParameterCollection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraFunctionLibrary_GetNiagaraParameterCollection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraFunctionLibrary_GetNiagaraParameterCollection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNiagaraFunctionLibrary_GetNiagaraParameterCollection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraFunctionLibrary_OverrideSystemUserVariableSkeletalMeshComponent_Statics
	{
		struct NiagaraFunctionLibrary_eventOverrideSystemUserVariableSkeletalMeshComponent_Parms
		{
			UNiagaraComponent* NiagaraSystem;
			FString OverrideName;
			USkeletalMeshComponent* SkeletalMeshComponent;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkeletalMeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SkeletalMeshComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverrideName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OverrideName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NiagaraSystem_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NiagaraSystem;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraFunctionLibrary_OverrideSystemUserVariableSkeletalMeshComponent_Statics::NewProp_SkeletalMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNiagaraFunctionLibrary_OverrideSystemUserVariableSkeletalMeshComponent_Statics::NewProp_SkeletalMeshComponent = { "SkeletalMeshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NiagaraFunctionLibrary_eventOverrideSystemUserVariableSkeletalMeshComponent_Parms, SkeletalMeshComponent), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraFunctionLibrary_OverrideSystemUserVariableSkeletalMeshComponent_Statics::NewProp_SkeletalMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraFunctionLibrary_OverrideSystemUserVariableSkeletalMeshComponent_Statics::NewProp_SkeletalMeshComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraFunctionLibrary_OverrideSystemUserVariableSkeletalMeshComponent_Statics::NewProp_OverrideName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNiagaraFunctionLibrary_OverrideSystemUserVariableSkeletalMeshComponent_Statics::NewProp_OverrideName = { "OverrideName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NiagaraFunctionLibrary_eventOverrideSystemUserVariableSkeletalMeshComponent_Parms, OverrideName), METADATA_PARAMS(Z_Construct_UFunction_UNiagaraFunctionLibrary_OverrideSystemUserVariableSkeletalMeshComponent_Statics::NewProp_OverrideName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraFunctionLibrary_OverrideSystemUserVariableSkeletalMeshComponent_Statics::NewProp_OverrideName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraFunctionLibrary_OverrideSystemUserVariableSkeletalMeshComponent_Statics::NewProp_NiagaraSystem_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNiagaraFunctionLibrary_OverrideSystemUserVariableSkeletalMeshComponent_Statics::NewProp_NiagaraSystem = { "NiagaraSystem", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NiagaraFunctionLibrary_eventOverrideSystemUserVariableSkeletalMeshComponent_Parms, NiagaraSystem), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraFunctionLibrary_OverrideSystemUserVariableSkeletalMeshComponent_Statics::NewProp_NiagaraSystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraFunctionLibrary_OverrideSystemUserVariableSkeletalMeshComponent_Statics::NewProp_NiagaraSystem_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraFunctionLibrary_OverrideSystemUserVariableSkeletalMeshComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraFunctionLibrary_OverrideSystemUserVariableSkeletalMeshComponent_Statics::NewProp_SkeletalMeshComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraFunctionLibrary_OverrideSystemUserVariableSkeletalMeshComponent_Statics::NewProp_OverrideName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraFunctionLibrary_OverrideSystemUserVariableSkeletalMeshComponent_Statics::NewProp_NiagaraSystem,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraFunctionLibrary_OverrideSystemUserVariableSkeletalMeshComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Niagara" },
		{ "Comment", "/** Sets a Niagara StaticMesh parameter by name, overriding locally if necessary.*/" },
		{ "DisplayName", "Set Niagara Skeletal Mesh Component" },
		{ "ModuleRelativePath", "Public/NiagaraFunctionLibrary.h" },
		{ "ToolTip", "Sets a Niagara StaticMesh parameter by name, overriding locally if necessary." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraFunctionLibrary_OverrideSystemUserVariableSkeletalMeshComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraFunctionLibrary, nullptr, "OverrideSystemUserVariableSkeletalMeshComponent", nullptr, nullptr, sizeof(NiagaraFunctionLibrary_eventOverrideSystemUserVariableSkeletalMeshComponent_Parms), Z_Construct_UFunction_UNiagaraFunctionLibrary_OverrideSystemUserVariableSkeletalMeshComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraFunctionLibrary_OverrideSystemUserVariableSkeletalMeshComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraFunctionLibrary_OverrideSystemUserVariableSkeletalMeshComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraFunctionLibrary_OverrideSystemUserVariableSkeletalMeshComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraFunctionLibrary_OverrideSystemUserVariableSkeletalMeshComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNiagaraFunctionLibrary_OverrideSystemUserVariableSkeletalMeshComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraFunctionLibrary_OverrideSystemUserVariableStaticMesh_Statics
	{
		struct NiagaraFunctionLibrary_eventOverrideSystemUserVariableStaticMesh_Parms
		{
			UNiagaraComponent* NiagaraSystem;
			FString OverrideName;
			UStaticMesh* StaticMesh;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverrideName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OverrideName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NiagaraSystem_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NiagaraSystem;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNiagaraFunctionLibrary_OverrideSystemUserVariableStaticMesh_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NiagaraFunctionLibrary_eventOverrideSystemUserVariableStaticMesh_Parms, StaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraFunctionLibrary_OverrideSystemUserVariableStaticMesh_Statics::NewProp_OverrideName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNiagaraFunctionLibrary_OverrideSystemUserVariableStaticMesh_Statics::NewProp_OverrideName = { "OverrideName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NiagaraFunctionLibrary_eventOverrideSystemUserVariableStaticMesh_Parms, OverrideName), METADATA_PARAMS(Z_Construct_UFunction_UNiagaraFunctionLibrary_OverrideSystemUserVariableStaticMesh_Statics::NewProp_OverrideName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraFunctionLibrary_OverrideSystemUserVariableStaticMesh_Statics::NewProp_OverrideName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraFunctionLibrary_OverrideSystemUserVariableStaticMesh_Statics::NewProp_NiagaraSystem_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNiagaraFunctionLibrary_OverrideSystemUserVariableStaticMesh_Statics::NewProp_NiagaraSystem = { "NiagaraSystem", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NiagaraFunctionLibrary_eventOverrideSystemUserVariableStaticMesh_Parms, NiagaraSystem), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraFunctionLibrary_OverrideSystemUserVariableStaticMesh_Statics::NewProp_NiagaraSystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraFunctionLibrary_OverrideSystemUserVariableStaticMesh_Statics::NewProp_NiagaraSystem_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraFunctionLibrary_OverrideSystemUserVariableStaticMesh_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraFunctionLibrary_OverrideSystemUserVariableStaticMesh_Statics::NewProp_StaticMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraFunctionLibrary_OverrideSystemUserVariableStaticMesh_Statics::NewProp_OverrideName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraFunctionLibrary_OverrideSystemUserVariableStaticMesh_Statics::NewProp_NiagaraSystem,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraFunctionLibrary_OverrideSystemUserVariableStaticMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "Niagara" },
		{ "DisplayName", "Set Niagara Static Mesh Directly" },
		{ "ModuleRelativePath", "Public/NiagaraFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraFunctionLibrary_OverrideSystemUserVariableStaticMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraFunctionLibrary, nullptr, "OverrideSystemUserVariableStaticMesh", nullptr, nullptr, sizeof(NiagaraFunctionLibrary_eventOverrideSystemUserVariableStaticMesh_Parms), Z_Construct_UFunction_UNiagaraFunctionLibrary_OverrideSystemUserVariableStaticMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraFunctionLibrary_OverrideSystemUserVariableStaticMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraFunctionLibrary_OverrideSystemUserVariableStaticMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraFunctionLibrary_OverrideSystemUserVariableStaticMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraFunctionLibrary_OverrideSystemUserVariableStaticMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNiagaraFunctionLibrary_OverrideSystemUserVariableStaticMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraFunctionLibrary_OverrideSystemUserVariableStaticMeshComponent_Statics
	{
		struct NiagaraFunctionLibrary_eventOverrideSystemUserVariableStaticMeshComponent_Parms
		{
			UNiagaraComponent* NiagaraSystem;
			FString OverrideName;
			UStaticMeshComponent* StaticMeshComponent;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StaticMeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StaticMeshComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverrideName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OverrideName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NiagaraSystem_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NiagaraSystem;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraFunctionLibrary_OverrideSystemUserVariableStaticMeshComponent_Statics::NewProp_StaticMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNiagaraFunctionLibrary_OverrideSystemUserVariableStaticMeshComponent_Statics::NewProp_StaticMeshComponent = { "StaticMeshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NiagaraFunctionLibrary_eventOverrideSystemUserVariableStaticMeshComponent_Parms, StaticMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraFunctionLibrary_OverrideSystemUserVariableStaticMeshComponent_Statics::NewProp_StaticMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraFunctionLibrary_OverrideSystemUserVariableStaticMeshComponent_Statics::NewProp_StaticMeshComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraFunctionLibrary_OverrideSystemUserVariableStaticMeshComponent_Statics::NewProp_OverrideName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNiagaraFunctionLibrary_OverrideSystemUserVariableStaticMeshComponent_Statics::NewProp_OverrideName = { "OverrideName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NiagaraFunctionLibrary_eventOverrideSystemUserVariableStaticMeshComponent_Parms, OverrideName), METADATA_PARAMS(Z_Construct_UFunction_UNiagaraFunctionLibrary_OverrideSystemUserVariableStaticMeshComponent_Statics::NewProp_OverrideName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraFunctionLibrary_OverrideSystemUserVariableStaticMeshComponent_Statics::NewProp_OverrideName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraFunctionLibrary_OverrideSystemUserVariableStaticMeshComponent_Statics::NewProp_NiagaraSystem_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNiagaraFunctionLibrary_OverrideSystemUserVariableStaticMeshComponent_Statics::NewProp_NiagaraSystem = { "NiagaraSystem", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NiagaraFunctionLibrary_eventOverrideSystemUserVariableStaticMeshComponent_Parms, NiagaraSystem), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraFunctionLibrary_OverrideSystemUserVariableStaticMeshComponent_Statics::NewProp_NiagaraSystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraFunctionLibrary_OverrideSystemUserVariableStaticMeshComponent_Statics::NewProp_NiagaraSystem_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraFunctionLibrary_OverrideSystemUserVariableStaticMeshComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraFunctionLibrary_OverrideSystemUserVariableStaticMeshComponent_Statics::NewProp_StaticMeshComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraFunctionLibrary_OverrideSystemUserVariableStaticMeshComponent_Statics::NewProp_OverrideName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraFunctionLibrary_OverrideSystemUserVariableStaticMeshComponent_Statics::NewProp_NiagaraSystem,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraFunctionLibrary_OverrideSystemUserVariableStaticMeshComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Niagara" },
		{ "Comment", "/** Sets a Niagara StaticMesh parameter by name, overriding locally if necessary.*/" },
		{ "DisplayName", "Set Niagara Static Mesh Component" },
		{ "ModuleRelativePath", "Public/NiagaraFunctionLibrary.h" },
		{ "ToolTip", "Sets a Niagara StaticMesh parameter by name, overriding locally if necessary." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraFunctionLibrary_OverrideSystemUserVariableStaticMeshComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraFunctionLibrary, nullptr, "OverrideSystemUserVariableStaticMeshComponent", nullptr, nullptr, sizeof(NiagaraFunctionLibrary_eventOverrideSystemUserVariableStaticMeshComponent_Parms), Z_Construct_UFunction_UNiagaraFunctionLibrary_OverrideSystemUserVariableStaticMeshComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraFunctionLibrary_OverrideSystemUserVariableStaticMeshComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraFunctionLibrary_OverrideSystemUserVariableStaticMeshComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraFunctionLibrary_OverrideSystemUserVariableStaticMeshComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraFunctionLibrary_OverrideSystemUserVariableStaticMeshComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNiagaraFunctionLibrary_OverrideSystemUserVariableStaticMeshComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraFunctionLibrary_SetTextureObject_Statics
	{
		struct NiagaraFunctionLibrary_eventSetTextureObject_Parms
		{
			UNiagaraComponent* NiagaraSystem;
			FString OverrideName;
			UTexture* Texture;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Texture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverrideName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OverrideName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NiagaraSystem_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NiagaraSystem;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNiagaraFunctionLibrary_SetTextureObject_Statics::NewProp_Texture = { "Texture", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NiagaraFunctionLibrary_eventSetTextureObject_Parms, Texture), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraFunctionLibrary_SetTextureObject_Statics::NewProp_OverrideName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNiagaraFunctionLibrary_SetTextureObject_Statics::NewProp_OverrideName = { "OverrideName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NiagaraFunctionLibrary_eventSetTextureObject_Parms, OverrideName), METADATA_PARAMS(Z_Construct_UFunction_UNiagaraFunctionLibrary_SetTextureObject_Statics::NewProp_OverrideName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraFunctionLibrary_SetTextureObject_Statics::NewProp_OverrideName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraFunctionLibrary_SetTextureObject_Statics::NewProp_NiagaraSystem_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNiagaraFunctionLibrary_SetTextureObject_Statics::NewProp_NiagaraSystem = { "NiagaraSystem", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NiagaraFunctionLibrary_eventSetTextureObject_Parms, NiagaraSystem), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraFunctionLibrary_SetTextureObject_Statics::NewProp_NiagaraSystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraFunctionLibrary_SetTextureObject_Statics::NewProp_NiagaraSystem_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraFunctionLibrary_SetTextureObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraFunctionLibrary_SetTextureObject_Statics::NewProp_Texture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraFunctionLibrary_SetTextureObject_Statics::NewProp_OverrideName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraFunctionLibrary_SetTextureObject_Statics::NewProp_NiagaraSystem,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraFunctionLibrary_SetTextureObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "Niagara" },
		{ "Comment", "/** Overrides the Texture Object for a Niagara Texture Data Interface User Parameter.*/" },
		{ "ModuleRelativePath", "Public/NiagaraFunctionLibrary.h" },
		{ "ToolTip", "Overrides the Texture Object for a Niagara Texture Data Interface User Parameter." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraFunctionLibrary_SetTextureObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraFunctionLibrary, nullptr, "SetTextureObject", nullptr, nullptr, sizeof(NiagaraFunctionLibrary_eventSetTextureObject_Parms), Z_Construct_UFunction_UNiagaraFunctionLibrary_SetTextureObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraFunctionLibrary_SetTextureObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraFunctionLibrary_SetTextureObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraFunctionLibrary_SetTextureObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraFunctionLibrary_SetTextureObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNiagaraFunctionLibrary_SetTextureObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraFunctionLibrary_SetVolumeTextureObject_Statics
	{
		struct NiagaraFunctionLibrary_eventSetVolumeTextureObject_Parms
		{
			UNiagaraComponent* NiagaraSystem;
			FString OverrideName;
			UVolumeTexture* Texture;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Texture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverrideName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OverrideName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NiagaraSystem_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NiagaraSystem;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNiagaraFunctionLibrary_SetVolumeTextureObject_Statics::NewProp_Texture = { "Texture", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NiagaraFunctionLibrary_eventSetVolumeTextureObject_Parms, Texture), Z_Construct_UClass_UVolumeTexture_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraFunctionLibrary_SetVolumeTextureObject_Statics::NewProp_OverrideName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNiagaraFunctionLibrary_SetVolumeTextureObject_Statics::NewProp_OverrideName = { "OverrideName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NiagaraFunctionLibrary_eventSetVolumeTextureObject_Parms, OverrideName), METADATA_PARAMS(Z_Construct_UFunction_UNiagaraFunctionLibrary_SetVolumeTextureObject_Statics::NewProp_OverrideName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraFunctionLibrary_SetVolumeTextureObject_Statics::NewProp_OverrideName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraFunctionLibrary_SetVolumeTextureObject_Statics::NewProp_NiagaraSystem_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNiagaraFunctionLibrary_SetVolumeTextureObject_Statics::NewProp_NiagaraSystem = { "NiagaraSystem", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NiagaraFunctionLibrary_eventSetVolumeTextureObject_Parms, NiagaraSystem), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraFunctionLibrary_SetVolumeTextureObject_Statics::NewProp_NiagaraSystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraFunctionLibrary_SetVolumeTextureObject_Statics::NewProp_NiagaraSystem_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraFunctionLibrary_SetVolumeTextureObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraFunctionLibrary_SetVolumeTextureObject_Statics::NewProp_Texture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraFunctionLibrary_SetVolumeTextureObject_Statics::NewProp_OverrideName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraFunctionLibrary_SetVolumeTextureObject_Statics::NewProp_NiagaraSystem,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraFunctionLibrary_SetVolumeTextureObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "Niagara" },
		{ "Comment", "/** Overrides the Volume Texture for a Niagara Volume Texture Data Interface User Parameter.*/" },
		{ "ModuleRelativePath", "Public/NiagaraFunctionLibrary.h" },
		{ "ToolTip", "Overrides the Volume Texture for a Niagara Volume Texture Data Interface User Parameter." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraFunctionLibrary_SetVolumeTextureObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraFunctionLibrary, nullptr, "SetVolumeTextureObject", nullptr, nullptr, sizeof(NiagaraFunctionLibrary_eventSetVolumeTextureObject_Parms), Z_Construct_UFunction_UNiagaraFunctionLibrary_SetVolumeTextureObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraFunctionLibrary_SetVolumeTextureObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraFunctionLibrary_SetVolumeTextureObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraFunctionLibrary_SetVolumeTextureObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraFunctionLibrary_SetVolumeTextureObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNiagaraFunctionLibrary_SetVolumeTextureObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraFunctionLibrary_SpawnSystemAtLocation_Statics
	{
		struct NiagaraFunctionLibrary_eventSpawnSystemAtLocation_Parms
		{
			const UObject* WorldContextObject;
			UNiagaraSystem* SystemTemplate;
			FVector Location;
			FRotator Rotation;
			FVector Scale;
			bool bAutoDestroy;
			bool bAutoActivate;
			ENCPoolMethod PoolingMethod;
			bool bPreCullCheck;
			UNiagaraComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static void NewProp_bPreCullCheck_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPreCullCheck;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PoolingMethod;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PoolingMethod_Underlying;
		static void NewProp_bAutoActivate_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutoActivate;
		static void NewProp_bAutoDestroy_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutoDestroy;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Scale;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Rotation;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SystemTemplate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraFunctionLibrary_SpawnSystemAtLocation_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNiagaraFunctionLibrary_SpawnSystemAtLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NiagaraFunctionLibrary_eventSpawnSystemAtLocation_Parms, ReturnValue), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraFunctionLibrary_SpawnSystemAtLocation_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraFunctionLibrary_SpawnSystemAtLocation_Statics::NewProp_ReturnValue_MetaData)) };
	void Z_Construct_UFunction_UNiagaraFunctionLibrary_SpawnSystemAtLocation_Statics::NewProp_bPreCullCheck_SetBit(void* Obj)
	{
		((NiagaraFunctionLibrary_eventSpawnSystemAtLocation_Parms*)Obj)->bPreCullCheck = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNiagaraFunctionLibrary_SpawnSystemAtLocation_Statics::NewProp_bPreCullCheck = { "bPreCullCheck", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(NiagaraFunctionLibrary_eventSpawnSystemAtLocation_Parms), &Z_Construct_UFunction_UNiagaraFunctionLibrary_SpawnSystemAtLocation_Statics::NewProp_bPreCullCheck_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UNiagaraFunctionLibrary_SpawnSystemAtLocation_Statics::NewProp_PoolingMethod = { "PoolingMethod", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NiagaraFunctionLibrary_eventSpawnSystemAtLocation_Parms, PoolingMethod), Z_Construct_UEnum_Niagara_ENCPoolMethod, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UNiagaraFunctionLibrary_SpawnSystemAtLocation_Statics::NewProp_PoolingMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UNiagaraFunctionLibrary_SpawnSystemAtLocation_Statics::NewProp_bAutoActivate_SetBit(void* Obj)
	{
		((NiagaraFunctionLibrary_eventSpawnSystemAtLocation_Parms*)Obj)->bAutoActivate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNiagaraFunctionLibrary_SpawnSystemAtLocation_Statics::NewProp_bAutoActivate = { "bAutoActivate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(NiagaraFunctionLibrary_eventSpawnSystemAtLocation_Parms), &Z_Construct_UFunction_UNiagaraFunctionLibrary_SpawnSystemAtLocation_Statics::NewProp_bAutoActivate_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UNiagaraFunctionLibrary_SpawnSystemAtLocation_Statics::NewProp_bAutoDestroy_SetBit(void* Obj)
	{
		((NiagaraFunctionLibrary_eventSpawnSystemAtLocation_Parms*)Obj)->bAutoDestroy = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNiagaraFunctionLibrary_SpawnSystemAtLocation_Statics::NewProp_bAutoDestroy = { "bAutoDestroy", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(NiagaraFunctionLibrary_eventSpawnSystemAtLocation_Parms), &Z_Construct_UFunction_UNiagaraFunctionLibrary_SpawnSystemAtLocation_Statics::NewProp_bAutoDestroy_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNiagaraFunctionLibrary_SpawnSystemAtLocation_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NiagaraFunctionLibrary_eventSpawnSystemAtLocation_Parms, Scale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNiagaraFunctionLibrary_SpawnSystemAtLocation_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NiagaraFunctionLibrary_eventSpawnSystemAtLocation_Parms, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNiagaraFunctionLibrary_SpawnSystemAtLocation_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NiagaraFunctionLibrary_eventSpawnSystemAtLocation_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNiagaraFunctionLibrary_SpawnSystemAtLocation_Statics::NewProp_SystemTemplate = { "SystemTemplate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NiagaraFunctionLibrary_eventSpawnSystemAtLocation_Parms, SystemTemplate), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraFunctionLibrary_SpawnSystemAtLocation_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNiagaraFunctionLibrary_SpawnSystemAtLocation_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NiagaraFunctionLibrary_eventSpawnSystemAtLocation_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraFunctionLibrary_SpawnSystemAtLocation_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraFunctionLibrary_SpawnSystemAtLocation_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraFunctionLibrary_SpawnSystemAtLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraFunctionLibrary_SpawnSystemAtLocation_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraFunctionLibrary_SpawnSystemAtLocation_Statics::NewProp_bPreCullCheck,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraFunctionLibrary_SpawnSystemAtLocation_Statics::NewProp_PoolingMethod,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraFunctionLibrary_SpawnSystemAtLocation_Statics::NewProp_PoolingMethod_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraFunctionLibrary_SpawnSystemAtLocation_Statics::NewProp_bAutoActivate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraFunctionLibrary_SpawnSystemAtLocation_Statics::NewProp_bAutoDestroy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraFunctionLibrary_SpawnSystemAtLocation_Statics::NewProp_Scale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraFunctionLibrary_SpawnSystemAtLocation_Statics::NewProp_Rotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraFunctionLibrary_SpawnSystemAtLocation_Statics::NewProp_Location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraFunctionLibrary_SpawnSystemAtLocation_Statics::NewProp_SystemTemplate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraFunctionLibrary_SpawnSystemAtLocation_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraFunctionLibrary_SpawnSystemAtLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Niagara" },
		{ "Comment", "/**\n\x09* Spawns a Niagara System at the specified world location/rotation\n\x09* @return\x09\x09\x09The spawned UNiagaraComponent\n\x09*/" },
		{ "CPP_Default_bAutoActivate", "true" },
		{ "CPP_Default_bAutoDestroy", "true" },
		{ "CPP_Default_bPreCullCheck", "true" },
		{ "CPP_Default_PoolingMethod", "None" },
		{ "CPP_Default_Rotation", "" },
		{ "CPP_Default_Scale", "1.000000,1.000000,1.000000" },
		{ "Keywords", "niagara System" },
		{ "ModuleRelativePath", "Public/NiagaraFunctionLibrary.h" },
		{ "ToolTip", "Spawns a Niagara System at the specified world location/rotation\n@return                       The spawned UNiagaraComponent" },
		{ "UnsafeDuringActorConstruction", "true" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraFunctionLibrary_SpawnSystemAtLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraFunctionLibrary, nullptr, "SpawnSystemAtLocation", nullptr, nullptr, sizeof(NiagaraFunctionLibrary_eventSpawnSystemAtLocation_Parms), Z_Construct_UFunction_UNiagaraFunctionLibrary_SpawnSystemAtLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraFunctionLibrary_SpawnSystemAtLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraFunctionLibrary_SpawnSystemAtLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraFunctionLibrary_SpawnSystemAtLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraFunctionLibrary_SpawnSystemAtLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNiagaraFunctionLibrary_SpawnSystemAtLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraFunctionLibrary_SpawnSystemAttached_Statics
	{
		struct NiagaraFunctionLibrary_eventSpawnSystemAttached_Parms
		{
			UNiagaraSystem* SystemTemplate;
			USceneComponent* AttachToComponent;
			FName AttachPointName;
			FVector Location;
			FRotator Rotation;
			TEnumAsByte<EAttachLocation::Type> LocationType;
			bool bAutoDestroy;
			bool bAutoActivate;
			ENCPoolMethod PoolingMethod;
			bool bPreCullCheck;
			UNiagaraComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static void NewProp_bPreCullCheck_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPreCullCheck;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PoolingMethod;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PoolingMethod_Underlying;
		static void NewProp_bAutoActivate_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutoActivate;
		static void NewProp_bAutoDestroy_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutoDestroy;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LocationType;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Rotation;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_AttachPointName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttachToComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AttachToComponent;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SystemTemplate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraFunctionLibrary_SpawnSystemAttached_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNiagaraFunctionLibrary_SpawnSystemAttached_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NiagaraFunctionLibrary_eventSpawnSystemAttached_Parms, ReturnValue), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraFunctionLibrary_SpawnSystemAttached_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraFunctionLibrary_SpawnSystemAttached_Statics::NewProp_ReturnValue_MetaData)) };
	void Z_Construct_UFunction_UNiagaraFunctionLibrary_SpawnSystemAttached_Statics::NewProp_bPreCullCheck_SetBit(void* Obj)
	{
		((NiagaraFunctionLibrary_eventSpawnSystemAttached_Parms*)Obj)->bPreCullCheck = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNiagaraFunctionLibrary_SpawnSystemAttached_Statics::NewProp_bPreCullCheck = { "bPreCullCheck", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(NiagaraFunctionLibrary_eventSpawnSystemAttached_Parms), &Z_Construct_UFunction_UNiagaraFunctionLibrary_SpawnSystemAttached_Statics::NewProp_bPreCullCheck_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UNiagaraFunctionLibrary_SpawnSystemAttached_Statics::NewProp_PoolingMethod = { "PoolingMethod", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NiagaraFunctionLibrary_eventSpawnSystemAttached_Parms, PoolingMethod), Z_Construct_UEnum_Niagara_ENCPoolMethod, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UNiagaraFunctionLibrary_SpawnSystemAttached_Statics::NewProp_PoolingMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UNiagaraFunctionLibrary_SpawnSystemAttached_Statics::NewProp_bAutoActivate_SetBit(void* Obj)
	{
		((NiagaraFunctionLibrary_eventSpawnSystemAttached_Parms*)Obj)->bAutoActivate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNiagaraFunctionLibrary_SpawnSystemAttached_Statics::NewProp_bAutoActivate = { "bAutoActivate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(NiagaraFunctionLibrary_eventSpawnSystemAttached_Parms), &Z_Construct_UFunction_UNiagaraFunctionLibrary_SpawnSystemAttached_Statics::NewProp_bAutoActivate_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UNiagaraFunctionLibrary_SpawnSystemAttached_Statics::NewProp_bAutoDestroy_SetBit(void* Obj)
	{
		((NiagaraFunctionLibrary_eventSpawnSystemAttached_Parms*)Obj)->bAutoDestroy = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNiagaraFunctionLibrary_SpawnSystemAttached_Statics::NewProp_bAutoDestroy = { "bAutoDestroy", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(NiagaraFunctionLibrary_eventSpawnSystemAttached_Parms), &Z_Construct_UFunction_UNiagaraFunctionLibrary_SpawnSystemAttached_Statics::NewProp_bAutoDestroy_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UNiagaraFunctionLibrary_SpawnSystemAttached_Statics::NewProp_LocationType = { "LocationType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NiagaraFunctionLibrary_eventSpawnSystemAttached_Parms, LocationType), Z_Construct_UEnum_Engine_EAttachLocation, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNiagaraFunctionLibrary_SpawnSystemAttached_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NiagaraFunctionLibrary_eventSpawnSystemAttached_Parms, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNiagaraFunctionLibrary_SpawnSystemAttached_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NiagaraFunctionLibrary_eventSpawnSystemAttached_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNiagaraFunctionLibrary_SpawnSystemAttached_Statics::NewProp_AttachPointName = { "AttachPointName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NiagaraFunctionLibrary_eventSpawnSystemAttached_Parms, AttachPointName), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraFunctionLibrary_SpawnSystemAttached_Statics::NewProp_AttachToComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNiagaraFunctionLibrary_SpawnSystemAttached_Statics::NewProp_AttachToComponent = { "AttachToComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NiagaraFunctionLibrary_eventSpawnSystemAttached_Parms, AttachToComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraFunctionLibrary_SpawnSystemAttached_Statics::NewProp_AttachToComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraFunctionLibrary_SpawnSystemAttached_Statics::NewProp_AttachToComponent_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNiagaraFunctionLibrary_SpawnSystemAttached_Statics::NewProp_SystemTemplate = { "SystemTemplate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NiagaraFunctionLibrary_eventSpawnSystemAttached_Parms, SystemTemplate), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraFunctionLibrary_SpawnSystemAttached_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraFunctionLibrary_SpawnSystemAttached_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraFunctionLibrary_SpawnSystemAttached_Statics::NewProp_bPreCullCheck,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraFunctionLibrary_SpawnSystemAttached_Statics::NewProp_PoolingMethod,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraFunctionLibrary_SpawnSystemAttached_Statics::NewProp_PoolingMethod_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraFunctionLibrary_SpawnSystemAttached_Statics::NewProp_bAutoActivate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraFunctionLibrary_SpawnSystemAttached_Statics::NewProp_bAutoDestroy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraFunctionLibrary_SpawnSystemAttached_Statics::NewProp_LocationType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraFunctionLibrary_SpawnSystemAttached_Statics::NewProp_Rotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraFunctionLibrary_SpawnSystemAttached_Statics::NewProp_Location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraFunctionLibrary_SpawnSystemAttached_Statics::NewProp_AttachPointName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraFunctionLibrary_SpawnSystemAttached_Statics::NewProp_AttachToComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraFunctionLibrary_SpawnSystemAttached_Statics::NewProp_SystemTemplate,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraFunctionLibrary_SpawnSystemAttached_Statics::Function_MetaDataParams[] = {
		{ "Category", "Niagara" },
		{ "CPP_Default_bAutoActivate", "true" },
		{ "CPP_Default_bPreCullCheck", "true" },
		{ "CPP_Default_PoolingMethod", "None" },
		{ "Keywords", "niagara System" },
		{ "ModuleRelativePath", "Public/NiagaraFunctionLibrary.h" },
		{ "UnsafeDuringActorConstruction", "true" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraFunctionLibrary_SpawnSystemAttached_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraFunctionLibrary, nullptr, "SpawnSystemAttached", nullptr, nullptr, sizeof(NiagaraFunctionLibrary_eventSpawnSystemAttached_Parms), Z_Construct_UFunction_UNiagaraFunctionLibrary_SpawnSystemAttached_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraFunctionLibrary_SpawnSystemAttached_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraFunctionLibrary_SpawnSystemAttached_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraFunctionLibrary_SpawnSystemAttached_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraFunctionLibrary_SpawnSystemAttached()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNiagaraFunctionLibrary_SpawnSystemAttached_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UNiagaraFunctionLibrary_NoRegister()
	{
		return UNiagaraFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UNiagaraFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UNiagaraFunctionLibrary_GetNiagaraParameterCollection, "GetNiagaraParameterCollection" }, // 705154004
		{ &Z_Construct_UFunction_UNiagaraFunctionLibrary_OverrideSystemUserVariableSkeletalMeshComponent, "OverrideSystemUserVariableSkeletalMeshComponent" }, // 1238868216
		{ &Z_Construct_UFunction_UNiagaraFunctionLibrary_OverrideSystemUserVariableStaticMesh, "OverrideSystemUserVariableStaticMesh" }, // 3549990449
		{ &Z_Construct_UFunction_UNiagaraFunctionLibrary_OverrideSystemUserVariableStaticMeshComponent, "OverrideSystemUserVariableStaticMeshComponent" }, // 3420240960
		{ &Z_Construct_UFunction_UNiagaraFunctionLibrary_SetTextureObject, "SetTextureObject" }, // 2098222698
		{ &Z_Construct_UFunction_UNiagaraFunctionLibrary_SetVolumeTextureObject, "SetVolumeTextureObject" }, // 3281787613
		{ &Z_Construct_UFunction_UNiagaraFunctionLibrary_SpawnSystemAtLocation, "SpawnSystemAtLocation" }, // 1316345088
		{ &Z_Construct_UFunction_UNiagaraFunctionLibrary_SpawnSystemAttached, "SpawnSystemAttached" }, // 585672201
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n* A C++ and Blueprint accessible library of utility functions for accessing Niagara simulations\n* All positions & orientations are returned in Unreal reference frame & units, assuming the Leap device is located at the origin.\n*/" },
		{ "IncludePath", "NiagaraFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/NiagaraFunctionLibrary.h" },
		{ "ToolTip", "A C++ and Blueprint accessible library of utility functions for accessing Niagara simulations\nAll positions & orientations are returned in Unreal reference frame & units, assuming the Leap device is located at the origin." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraFunctionLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraFunctionLibrary_Statics::ClassParams = {
		&UNiagaraFunctionLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraFunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraFunctionLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UNiagaraFunctionLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UNiagaraFunctionLibrary, 2156306791);
	template<> NIAGARA_API UClass* StaticClass<UNiagaraFunctionLibrary>()
	{
		return UNiagaraFunctionLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNiagaraFunctionLibrary(Z_Construct_UClass_UNiagaraFunctionLibrary, &UNiagaraFunctionLibrary::StaticClass, TEXT("/Script/Niagara"), TEXT("UNiagaraFunctionLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraFunctionLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
