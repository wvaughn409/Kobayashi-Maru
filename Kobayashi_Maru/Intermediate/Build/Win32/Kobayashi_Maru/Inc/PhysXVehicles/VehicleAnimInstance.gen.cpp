// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PhysXVehicles/Public/VehicleAnimInstance.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVehicleAnimInstance() {}
// Cross Module References
	PHYSXVEHICLES_API UScriptStruct* Z_Construct_UScriptStruct_FVehicleAnimInstanceProxy();
	UPackage* Z_Construct_UPackage__Script_PhysXVehicles();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimInstanceProxy();
	PHYSXVEHICLES_API UClass* Z_Construct_UClass_UVehicleAnimInstance_NoRegister();
	PHYSXVEHICLES_API UClass* Z_Construct_UClass_UVehicleAnimInstance();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
	PHYSXVEHICLES_API UClass* Z_Construct_UClass_AWheeledVehicle_NoRegister();
	PHYSXVEHICLES_API UClass* Z_Construct_UClass_UWheeledVehicleMovementComponent_NoRegister();
// End Cross Module References
class UScriptStruct* FVehicleAnimInstanceProxy::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PHYSXVEHICLES_API uint32 Get_Z_Construct_UScriptStruct_FVehicleAnimInstanceProxy_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FVehicleAnimInstanceProxy, Z_Construct_UPackage__Script_PhysXVehicles(), TEXT("VehicleAnimInstanceProxy"), sizeof(FVehicleAnimInstanceProxy), Get_Z_Construct_UScriptStruct_FVehicleAnimInstanceProxy_Hash());
	}
	return Singleton;
}
template<> PHYSXVEHICLES_API UScriptStruct* StaticStruct<FVehicleAnimInstanceProxy>()
{
	return FVehicleAnimInstanceProxy::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FVehicleAnimInstanceProxy(FVehicleAnimInstanceProxy::StaticStruct, TEXT("/Script/PhysXVehicles"), TEXT("VehicleAnimInstanceProxy"), false, nullptr, nullptr);
static struct FScriptStruct_PhysXVehicles_StaticRegisterNativesFVehicleAnimInstanceProxy
{
	FScriptStruct_PhysXVehicles_StaticRegisterNativesFVehicleAnimInstanceProxy()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("VehicleAnimInstanceProxy")),new UScriptStruct::TCppStructOps<FVehicleAnimInstanceProxy>);
	}
} ScriptStruct_PhysXVehicles_StaticRegisterNativesFVehicleAnimInstanceProxy;
	struct Z_Construct_UScriptStruct_FVehicleAnimInstanceProxy_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleAnimInstanceProxy_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Proxy override for this UAnimInstance-derived class */" },
		{ "ModuleRelativePath", "Public/VehicleAnimInstance.h" },
		{ "ToolTip", "Proxy override for this UAnimInstance-derived class" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVehicleAnimInstanceProxy_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVehicleAnimInstanceProxy>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVehicleAnimInstanceProxy_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PhysXVehicles,
		Z_Construct_UScriptStruct_FAnimInstanceProxy,
		&NewStructOps,
		"VehicleAnimInstanceProxy",
		sizeof(FVehicleAnimInstanceProxy),
		alignof(FVehicleAnimInstanceProxy),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVehicleAnimInstanceProxy_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleAnimInstanceProxy_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVehicleAnimInstanceProxy()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FVehicleAnimInstanceProxy_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PhysXVehicles();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("VehicleAnimInstanceProxy"), sizeof(FVehicleAnimInstanceProxy), Get_Z_Construct_UScriptStruct_FVehicleAnimInstanceProxy_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FVehicleAnimInstanceProxy_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVehicleAnimInstanceProxy_Hash() { return 2420611289U; }
	DEFINE_FUNCTION(UVehicleAnimInstance::execGetVehicle)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AWheeledVehicle**)Z_Param__Result=P_THIS->GetVehicle();
		P_NATIVE_END;
	}
	void UVehicleAnimInstance::StaticRegisterNativesUVehicleAnimInstance()
	{
		UClass* Class = UVehicleAnimInstance::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetVehicle", &UVehicleAnimInstance::execGetVehicle },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVehicleAnimInstance_GetVehicle_Statics
	{
		struct VehicleAnimInstance_eventGetVehicle_Parms
		{
			AWheeledVehicle* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVehicleAnimInstance_GetVehicle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VehicleAnimInstance_eventGetVehicle_Parms, ReturnValue), Z_Construct_UClass_AWheeledVehicle_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVehicleAnimInstance_GetVehicle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVehicleAnimInstance_GetVehicle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVehicleAnimInstance_GetVehicle_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animation" },
		{ "Comment", "/** Makes a montage jump to the end of a named section. */" },
		{ "ModuleRelativePath", "Public/VehicleAnimInstance.h" },
		{ "ToolTip", "Makes a montage jump to the end of a named section." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVehicleAnimInstance_GetVehicle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVehicleAnimInstance, nullptr, "GetVehicle", nullptr, nullptr, sizeof(VehicleAnimInstance_eventGetVehicle_Parms), Z_Construct_UFunction_UVehicleAnimInstance_GetVehicle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVehicleAnimInstance_GetVehicle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVehicleAnimInstance_GetVehicle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVehicleAnimInstance_GetVehicle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVehicleAnimInstance_GetVehicle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVehicleAnimInstance_GetVehicle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UVehicleAnimInstance_NoRegister()
	{
		return UVehicleAnimInstance::StaticClass();
	}
	struct Z_Construct_UClass_UVehicleAnimInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WheeledVehicleMovementComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WheeledVehicleMovementComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVehicleAnimInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_PhysXVehicles,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UVehicleAnimInstance_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVehicleAnimInstance_GetVehicle, "GetVehicle" }, // 2364346931
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVehicleAnimInstance_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "VehicleAnimInstance.h" },
		{ "ModuleRelativePath", "Public/VehicleAnimInstance.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVehicleAnimInstance_Statics::NewProp_WheeledVehicleMovementComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/VehicleAnimInstance.h" },
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVehicleAnimInstance_Statics::NewProp_WheeledVehicleMovementComponent = { "WheeledVehicleMovementComponent", nullptr, (EPropertyFlags)0x0040000000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVehicleAnimInstance, WheeledVehicleMovementComponent), Z_Construct_UClass_UWheeledVehicleMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVehicleAnimInstance_Statics::NewProp_WheeledVehicleMovementComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVehicleAnimInstance_Statics::NewProp_WheeledVehicleMovementComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVehicleAnimInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVehicleAnimInstance_Statics::NewProp_WheeledVehicleMovementComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVehicleAnimInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVehicleAnimInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVehicleAnimInstance_Statics::ClassParams = {
		&UVehicleAnimInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UVehicleAnimInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UVehicleAnimInstance_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UVehicleAnimInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVehicleAnimInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVehicleAnimInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVehicleAnimInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVehicleAnimInstance, 396137749);
	template<> PHYSXVEHICLES_API UClass* StaticClass<UVehicleAnimInstance>()
	{
		return UVehicleAnimInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVehicleAnimInstance(Z_Construct_UClass_UVehicleAnimInstance, &UVehicleAnimInstance::StaticClass, TEXT("/Script/PhysXVehicles"), TEXT("UVehicleAnimInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVehicleAnimInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
