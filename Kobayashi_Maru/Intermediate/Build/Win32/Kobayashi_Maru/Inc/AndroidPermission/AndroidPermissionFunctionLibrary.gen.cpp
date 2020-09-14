// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AndroidPermission/Classes/AndroidPermissionFunctionLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAndroidPermissionFunctionLibrary() {}
// Cross Module References
	ANDROIDPERMISSION_API UClass* Z_Construct_UClass_UAndroidPermissionFunctionLibrary_NoRegister();
	ANDROIDPERMISSION_API UClass* Z_Construct_UClass_UAndroidPermissionFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_AndroidPermission();
	ANDROIDPERMISSION_API UClass* Z_Construct_UClass_UAndroidPermissionCallbackProxy_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UAndroidPermissionFunctionLibrary::execAcquirePermissions)
	{
		P_GET_TARRAY_REF(FString,Z_Param_Out_permissions);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAndroidPermissionCallbackProxy**)Z_Param__Result=UAndroidPermissionFunctionLibrary::AcquirePermissions(Z_Param_Out_permissions);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAndroidPermissionFunctionLibrary::execCheckPermission)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_permission);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UAndroidPermissionFunctionLibrary::CheckPermission(Z_Param_permission);
		P_NATIVE_END;
	}
	void UAndroidPermissionFunctionLibrary::StaticRegisterNativesUAndroidPermissionFunctionLibrary()
	{
		UClass* Class = UAndroidPermissionFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AcquirePermissions", &UAndroidPermissionFunctionLibrary::execAcquirePermissions },
			{ "CheckPermission", &UAndroidPermissionFunctionLibrary::execCheckPermission },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAndroidPermissionFunctionLibrary_AcquirePermissions_Statics
	{
		struct AndroidPermissionFunctionLibrary_eventAcquirePermissions_Parms
		{
			TArray<FString> permissions;
			UAndroidPermissionCallbackProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_permissions_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_permissions;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_permissions_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAndroidPermissionFunctionLibrary_AcquirePermissions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AndroidPermissionFunctionLibrary_eventAcquirePermissions_Parms, ReturnValue), Z_Construct_UClass_UAndroidPermissionCallbackProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAndroidPermissionFunctionLibrary_AcquirePermissions_Statics::NewProp_permissions_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAndroidPermissionFunctionLibrary_AcquirePermissions_Statics::NewProp_permissions = { "permissions", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AndroidPermissionFunctionLibrary_eventAcquirePermissions_Parms, permissions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UAndroidPermissionFunctionLibrary_AcquirePermissions_Statics::NewProp_permissions_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidPermissionFunctionLibrary_AcquirePermissions_Statics::NewProp_permissions_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAndroidPermissionFunctionLibrary_AcquirePermissions_Statics::NewProp_permissions_Inner = { "permissions", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAndroidPermissionFunctionLibrary_AcquirePermissions_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidPermissionFunctionLibrary_AcquirePermissions_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidPermissionFunctionLibrary_AcquirePermissions_Statics::NewProp_permissions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidPermissionFunctionLibrary_AcquirePermissions_Statics::NewProp_permissions_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAndroidPermissionFunctionLibrary_AcquirePermissions_Statics::Function_MetaDataParams[] = {
		{ "Category", "AndroidPermission" },
		{ "Comment", "/** try to acquire permissions and return a singleton callback proxy object containing OnPermissionsGranted delegate */" },
		{ "DisplayName", "Request Android Permissions" },
		{ "ModuleRelativePath", "Classes/AndroidPermissionFunctionLibrary.h" },
		{ "ToolTip", "try to acquire permissions and return a singleton callback proxy object containing OnPermissionsGranted delegate" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAndroidPermissionFunctionLibrary_AcquirePermissions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAndroidPermissionFunctionLibrary, nullptr, "AcquirePermissions", nullptr, nullptr, sizeof(AndroidPermissionFunctionLibrary_eventAcquirePermissions_Parms), Z_Construct_UFunction_UAndroidPermissionFunctionLibrary_AcquirePermissions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidPermissionFunctionLibrary_AcquirePermissions_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAndroidPermissionFunctionLibrary_AcquirePermissions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidPermissionFunctionLibrary_AcquirePermissions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAndroidPermissionFunctionLibrary_AcquirePermissions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAndroidPermissionFunctionLibrary_AcquirePermissions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAndroidPermissionFunctionLibrary_CheckPermission_Statics
	{
		struct AndroidPermissionFunctionLibrary_eventCheckPermission_Parms
		{
			FString permission;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_permission_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_permission;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAndroidPermissionFunctionLibrary_CheckPermission_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AndroidPermissionFunctionLibrary_eventCheckPermission_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAndroidPermissionFunctionLibrary_CheckPermission_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AndroidPermissionFunctionLibrary_eventCheckPermission_Parms), &Z_Construct_UFunction_UAndroidPermissionFunctionLibrary_CheckPermission_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAndroidPermissionFunctionLibrary_CheckPermission_Statics::NewProp_permission_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAndroidPermissionFunctionLibrary_CheckPermission_Statics::NewProp_permission = { "permission", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AndroidPermissionFunctionLibrary_eventCheckPermission_Parms, permission), METADATA_PARAMS(Z_Construct_UFunction_UAndroidPermissionFunctionLibrary_CheckPermission_Statics::NewProp_permission_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidPermissionFunctionLibrary_CheckPermission_Statics::NewProp_permission_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAndroidPermissionFunctionLibrary_CheckPermission_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidPermissionFunctionLibrary_CheckPermission_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidPermissionFunctionLibrary_CheckPermission_Statics::NewProp_permission,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAndroidPermissionFunctionLibrary_CheckPermission_Statics::Function_MetaDataParams[] = {
		{ "Category", "AndroidPermission" },
		{ "Comment", "/** check if the permission is already granted */" },
		{ "DisplayName", "Check Android Permission" },
		{ "ModuleRelativePath", "Classes/AndroidPermissionFunctionLibrary.h" },
		{ "ToolTip", "check if the permission is already granted" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAndroidPermissionFunctionLibrary_CheckPermission_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAndroidPermissionFunctionLibrary, nullptr, "CheckPermission", nullptr, nullptr, sizeof(AndroidPermissionFunctionLibrary_eventCheckPermission_Parms), Z_Construct_UFunction_UAndroidPermissionFunctionLibrary_CheckPermission_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidPermissionFunctionLibrary_CheckPermission_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAndroidPermissionFunctionLibrary_CheckPermission_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidPermissionFunctionLibrary_CheckPermission_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAndroidPermissionFunctionLibrary_CheckPermission()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAndroidPermissionFunctionLibrary_CheckPermission_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAndroidPermissionFunctionLibrary_NoRegister()
	{
		return UAndroidPermissionFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UAndroidPermissionFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAndroidPermissionFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_AndroidPermission,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAndroidPermissionFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAndroidPermissionFunctionLibrary_AcquirePermissions, "AcquirePermissions" }, // 1882695717
		{ &Z_Construct_UFunction_UAndroidPermissionFunctionLibrary_CheckPermission, "CheckPermission" }, // 3914275216
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidPermissionFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AndroidPermissionFunctionLibrary.h" },
		{ "ModuleRelativePath", "Classes/AndroidPermissionFunctionLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAndroidPermissionFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAndroidPermissionFunctionLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAndroidPermissionFunctionLibrary_Statics::ClassParams = {
		&UAndroidPermissionFunctionLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAndroidPermissionFunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidPermissionFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAndroidPermissionFunctionLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAndroidPermissionFunctionLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAndroidPermissionFunctionLibrary, 735078144);
	template<> ANDROIDPERMISSION_API UClass* StaticClass<UAndroidPermissionFunctionLibrary>()
	{
		return UAndroidPermissionFunctionLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAndroidPermissionFunctionLibrary(Z_Construct_UClass_UAndroidPermissionFunctionLibrary, &UAndroidPermissionFunctionLibrary::StaticClass, TEXT("/Script/AndroidPermission"), TEXT("UAndroidPermissionFunctionLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAndroidPermissionFunctionLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
