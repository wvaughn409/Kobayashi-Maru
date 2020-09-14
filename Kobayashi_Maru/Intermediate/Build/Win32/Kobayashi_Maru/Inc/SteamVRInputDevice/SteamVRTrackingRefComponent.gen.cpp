// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamVRInputDevice/Public/SteamVRTrackingRefComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamVRTrackingRefComponent() {}
// Cross Module References
	STEAMVRINPUTDEVICE_API UFunction* Z_Construct_UDelegateFunction_SteamVRInputDevice_ComponentTrackingDeactivatedSignature__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_SteamVRInputDevice();
	STEAMVRINPUTDEVICE_API UFunction* Z_Construct_UDelegateFunction_SteamVRInputDevice_ComponentTrackingActivatedSignature__DelegateSignature();
	STEAMVRINPUTDEVICE_API UClass* Z_Construct_UClass_USteamVRTrackingReferences_NoRegister();
	STEAMVRINPUTDEVICE_API UClass* Z_Construct_UClass_USteamVRTrackingReferences();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_SteamVRInputDevice_ComponentTrackingDeactivatedSignature__DelegateSignature_Statics
	{
		struct _Script_SteamVRInputDevice_eventComponentTrackingDeactivatedSignature_Parms
		{
			int32 DeviceID;
			FName DeviceClass;
			FString DeviceModel;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DeviceModel;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_DeviceClass;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DeviceID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_SteamVRInputDevice_ComponentTrackingDeactivatedSignature__DelegateSignature_Statics::NewProp_DeviceModel = { "DeviceModel", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_SteamVRInputDevice_eventComponentTrackingDeactivatedSignature_Parms, DeviceModel), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UDelegateFunction_SteamVRInputDevice_ComponentTrackingDeactivatedSignature__DelegateSignature_Statics::NewProp_DeviceClass = { "DeviceClass", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_SteamVRInputDevice_eventComponentTrackingDeactivatedSignature_Parms, DeviceClass), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_SteamVRInputDevice_ComponentTrackingDeactivatedSignature__DelegateSignature_Statics::NewProp_DeviceID = { "DeviceID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_SteamVRInputDevice_eventComponentTrackingDeactivatedSignature_Parms, DeviceID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamVRInputDevice_ComponentTrackingDeactivatedSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamVRInputDevice_ComponentTrackingDeactivatedSignature__DelegateSignature_Statics::NewProp_DeviceModel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamVRInputDevice_ComponentTrackingDeactivatedSignature__DelegateSignature_Statics::NewProp_DeviceClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamVRInputDevice_ComponentTrackingDeactivatedSignature__DelegateSignature_Statics::NewProp_DeviceID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamVRInputDevice_ComponentTrackingDeactivatedSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamVRTrackingRefComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamVRInputDevice_ComponentTrackingDeactivatedSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamVRInputDevice, nullptr, "ComponentTrackingDeactivatedSignature__DelegateSignature", nullptr, nullptr, sizeof(_Script_SteamVRInputDevice_eventComponentTrackingDeactivatedSignature_Parms), Z_Construct_UDelegateFunction_SteamVRInputDevice_ComponentTrackingDeactivatedSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamVRInputDevice_ComponentTrackingDeactivatedSignature__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamVRInputDevice_ComponentTrackingDeactivatedSignature__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamVRInputDevice_ComponentTrackingDeactivatedSignature__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamVRInputDevice_ComponentTrackingDeactivatedSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_SteamVRInputDevice_ComponentTrackingDeactivatedSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_SteamVRInputDevice_ComponentTrackingActivatedSignature__DelegateSignature_Statics
	{
		struct _Script_SteamVRInputDevice_eventComponentTrackingActivatedSignature_Parms
		{
			int32 DeviceID;
			FName DeviceClass;
			FString DeviceModel;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DeviceModel;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_DeviceClass;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DeviceID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_SteamVRInputDevice_ComponentTrackingActivatedSignature__DelegateSignature_Statics::NewProp_DeviceModel = { "DeviceModel", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_SteamVRInputDevice_eventComponentTrackingActivatedSignature_Parms, DeviceModel), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UDelegateFunction_SteamVRInputDevice_ComponentTrackingActivatedSignature__DelegateSignature_Statics::NewProp_DeviceClass = { "DeviceClass", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_SteamVRInputDevice_eventComponentTrackingActivatedSignature_Parms, DeviceClass), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_SteamVRInputDevice_ComponentTrackingActivatedSignature__DelegateSignature_Statics::NewProp_DeviceID = { "DeviceID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_SteamVRInputDevice_eventComponentTrackingActivatedSignature_Parms, DeviceID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamVRInputDevice_ComponentTrackingActivatedSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamVRInputDevice_ComponentTrackingActivatedSignature__DelegateSignature_Statics::NewProp_DeviceModel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamVRInputDevice_ComponentTrackingActivatedSignature__DelegateSignature_Statics::NewProp_DeviceClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamVRInputDevice_ComponentTrackingActivatedSignature__DelegateSignature_Statics::NewProp_DeviceID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamVRInputDevice_ComponentTrackingActivatedSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Delegates\n" },
		{ "ModuleRelativePath", "Public/SteamVRTrackingRefComponent.h" },
		{ "ToolTip", "Delegates" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamVRInputDevice_ComponentTrackingActivatedSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamVRInputDevice, nullptr, "ComponentTrackingActivatedSignature__DelegateSignature", nullptr, nullptr, sizeof(_Script_SteamVRInputDevice_eventComponentTrackingActivatedSignature_Parms), Z_Construct_UDelegateFunction_SteamVRInputDevice_ComponentTrackingActivatedSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamVRInputDevice_ComponentTrackingActivatedSignature__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamVRInputDevice_ComponentTrackingActivatedSignature__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamVRInputDevice_ComponentTrackingActivatedSignature__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamVRInputDevice_ComponentTrackingActivatedSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_SteamVRInputDevice_ComponentTrackingActivatedSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(USteamVRTrackingReferences::execHideTrackingReferences)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HideTrackingReferences();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamVRTrackingReferences::execShowTrackingReferences)
	{
		P_GET_OBJECT(UStaticMesh,Z_Param_TrackingReferenceMesh);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ShowTrackingReferences(Z_Param_TrackingReferenceMesh);
		P_NATIVE_END;
	}
	void USteamVRTrackingReferences::StaticRegisterNativesUSteamVRTrackingReferences()
	{
		UClass* Class = USteamVRTrackingReferences::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HideTrackingReferences", &USteamVRTrackingReferences::execHideTrackingReferences },
			{ "ShowTrackingReferences", &USteamVRTrackingReferences::execShowTrackingReferences },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USteamVRTrackingReferences_HideTrackingReferences_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamVRTrackingReferences_HideTrackingReferences_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamVR Input" },
		{ "Comment", "/** Remove Tracking References in-world */" },
		{ "ModuleRelativePath", "Public/SteamVRTrackingRefComponent.h" },
		{ "ToolTip", "Remove Tracking References in-world" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamVRTrackingReferences_HideTrackingReferences_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamVRTrackingReferences, nullptr, "HideTrackingReferences", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamVRTrackingReferences_HideTrackingReferences_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamVRTrackingReferences_HideTrackingReferences_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamVRTrackingReferences_HideTrackingReferences()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamVRTrackingReferences_HideTrackingReferences_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamVRTrackingReferences_ShowTrackingReferences_Statics
	{
		struct SteamVRTrackingReferences_eventShowTrackingReferences_Parms
		{
			UStaticMesh* TrackingReferenceMesh;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TrackingReferenceMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USteamVRTrackingReferences_ShowTrackingReferences_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SteamVRTrackingReferences_eventShowTrackingReferences_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamVRTrackingReferences_ShowTrackingReferences_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SteamVRTrackingReferences_eventShowTrackingReferences_Parms), &Z_Construct_UFunction_USteamVRTrackingReferences_ShowTrackingReferences_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamVRTrackingReferences_ShowTrackingReferences_Statics::NewProp_TrackingReferenceMesh = { "TrackingReferenceMesh", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamVRTrackingReferences_eventShowTrackingReferences_Parms, TrackingReferenceMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamVRTrackingReferences_ShowTrackingReferences_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamVRTrackingReferences_ShowTrackingReferences_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamVRTrackingReferences_ShowTrackingReferences_Statics::NewProp_TrackingReferenceMesh,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamVRTrackingReferences_ShowTrackingReferences_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamVR Input" },
		{ "Comment", "/** Display Tracking References in-world */" },
		{ "ModuleRelativePath", "Public/SteamVRTrackingRefComponent.h" },
		{ "ToolTip", "Display Tracking References in-world" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamVRTrackingReferences_ShowTrackingReferences_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamVRTrackingReferences, nullptr, "ShowTrackingReferences", nullptr, nullptr, sizeof(SteamVRTrackingReferences_eventShowTrackingReferences_Parms), Z_Construct_UFunction_USteamVRTrackingReferences_ShowTrackingReferences_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamVRTrackingReferences_ShowTrackingReferences_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamVRTrackingReferences_ShowTrackingReferences_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamVRTrackingReferences_ShowTrackingReferences_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamVRTrackingReferences_ShowTrackingReferences()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamVRTrackingReferences_ShowTrackingReferences_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USteamVRTrackingReferences_NoRegister()
	{
		return USteamVRTrackingReferences::StaticClass();
	}
	struct Z_Construct_UClass_USteamVRTrackingReferences_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrackingReferences_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TrackingReferences;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TrackingReferences_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrackingReferenceScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TrackingReferenceScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActiveDevicePollFrequency_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ActiveDevicePollFrequency;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnTrackedDeviceDeactivated_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTrackedDeviceDeactivated;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnTrackedDeviceActivated_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTrackedDeviceActivated;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USteamVRTrackingReferences_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamVRInputDevice,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USteamVRTrackingReferences_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamVRTrackingReferences_HideTrackingReferences, "HideTrackingReferences" }, // 2298457812
		{ &Z_Construct_UFunction_USteamVRTrackingReferences_ShowTrackingReferences, "ShowTrackingReferences" }, // 1899093891
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamVRTrackingReferences_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "SteamVRTrackingRefComponent.h" },
		{ "ModuleRelativePath", "Public/SteamVRTrackingRefComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamVRTrackingReferences_Statics::NewProp_TrackingReferences_MetaData[] = {
		{ "Category", "SteamVR Input" },
		{ "Comment", "/** Currently displayed Tracking References in-world */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SteamVRTrackingRefComponent.h" },
		{ "ToolTip", "Currently displayed Tracking References in-world" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USteamVRTrackingReferences_Statics::NewProp_TrackingReferences = { "TrackingReferences", nullptr, (EPropertyFlags)0x001000800000001c, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USteamVRTrackingReferences, TrackingReferences), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USteamVRTrackingReferences_Statics::NewProp_TrackingReferences_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USteamVRTrackingReferences_Statics::NewProp_TrackingReferences_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USteamVRTrackingReferences_Statics::NewProp_TrackingReferences_Inner = { "TrackingReferences", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamVRTrackingReferences_Statics::NewProp_TrackingReferenceScale_MetaData[] = {
		{ "Category", "SteamVR Input" },
		{ "Comment", "/** Scale to apply to the tracking reference mesh */" },
		{ "ModuleRelativePath", "Public/SteamVRTrackingRefComponent.h" },
		{ "ToolTip", "Scale to apply to the tracking reference mesh" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USteamVRTrackingReferences_Statics::NewProp_TrackingReferenceScale = { "TrackingReferenceScale", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USteamVRTrackingReferences, TrackingReferenceScale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_USteamVRTrackingReferences_Statics::NewProp_TrackingReferenceScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USteamVRTrackingReferences_Statics::NewProp_TrackingReferenceScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamVRTrackingReferences_Statics::NewProp_ActiveDevicePollFrequency_MetaData[] = {
		{ "Category", "SteamVR Input" },
		{ "Comment", "/** Scale to apply to the tracking reference mesh */" },
		{ "ModuleRelativePath", "Public/SteamVRTrackingRefComponent.h" },
		{ "ToolTip", "Scale to apply to the tracking reference mesh" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USteamVRTrackingReferences_Statics::NewProp_ActiveDevicePollFrequency = { "ActiveDevicePollFrequency", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USteamVRTrackingReferences, ActiveDevicePollFrequency), METADATA_PARAMS(Z_Construct_UClass_USteamVRTrackingReferences_Statics::NewProp_ActiveDevicePollFrequency_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USteamVRTrackingReferences_Statics::NewProp_ActiveDevicePollFrequency_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamVRTrackingReferences_Statics::NewProp_OnTrackedDeviceDeactivated_MetaData[] = {
		{ "Category", "VR" },
		{ "Comment", "/** When an active device gets deactivated */" },
		{ "ModuleRelativePath", "Public/SteamVRTrackingRefComponent.h" },
		{ "ToolTip", "When an active device gets deactivated" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamVRTrackingReferences_Statics::NewProp_OnTrackedDeviceDeactivated = { "OnTrackedDeviceDeactivated", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USteamVRTrackingReferences, OnTrackedDeviceDeactivated), Z_Construct_UDelegateFunction_SteamVRInputDevice_ComponentTrackingDeactivatedSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USteamVRTrackingReferences_Statics::NewProp_OnTrackedDeviceDeactivated_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USteamVRTrackingReferences_Statics::NewProp_OnTrackedDeviceDeactivated_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamVRTrackingReferences_Statics::NewProp_OnTrackedDeviceActivated_MetaData[] = {
		{ "Category", "VR" },
		{ "Comment", "/** Blueprint event - When a new active device is recognized */" },
		{ "ModuleRelativePath", "Public/SteamVRTrackingRefComponent.h" },
		{ "ToolTip", "Blueprint event - When a new active device is recognized" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamVRTrackingReferences_Statics::NewProp_OnTrackedDeviceActivated = { "OnTrackedDeviceActivated", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USteamVRTrackingReferences, OnTrackedDeviceActivated), Z_Construct_UDelegateFunction_SteamVRInputDevice_ComponentTrackingActivatedSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USteamVRTrackingReferences_Statics::NewProp_OnTrackedDeviceActivated_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USteamVRTrackingReferences_Statics::NewProp_OnTrackedDeviceActivated_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USteamVRTrackingReferences_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamVRTrackingReferences_Statics::NewProp_TrackingReferences,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamVRTrackingReferences_Statics::NewProp_TrackingReferences_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamVRTrackingReferences_Statics::NewProp_TrackingReferenceScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamVRTrackingReferences_Statics::NewProp_ActiveDevicePollFrequency,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamVRTrackingReferences_Statics::NewProp_OnTrackedDeviceDeactivated,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamVRTrackingReferences_Statics::NewProp_OnTrackedDeviceActivated,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USteamVRTrackingReferences_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamVRTrackingReferences>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USteamVRTrackingReferences_Statics::ClassParams = {
		&USteamVRTrackingReferences::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USteamVRTrackingReferences_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USteamVRTrackingReferences_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USteamVRTrackingReferences_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USteamVRTrackingReferences_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USteamVRTrackingReferences()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USteamVRTrackingReferences_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USteamVRTrackingReferences, 2379840);
	template<> STEAMVRINPUTDEVICE_API UClass* StaticClass<USteamVRTrackingReferences>()
	{
		return USteamVRTrackingReferences::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USteamVRTrackingReferences(Z_Construct_UClass_USteamVRTrackingReferences, &USteamVRTrackingReferences::StaticClass, TEXT("/Script/SteamVRInputDevice"), TEXT("USteamVRTrackingReferences"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USteamVRTrackingReferences);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
