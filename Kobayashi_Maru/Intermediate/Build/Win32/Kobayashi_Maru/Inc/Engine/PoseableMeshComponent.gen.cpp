// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Components/PoseableMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePoseableMeshComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UPoseableMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPoseableMeshComponent();
	ENGINE_API UClass* Z_Construct_UClass_USkinnedMeshComponent();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EBoneSpaces();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
// End Cross Module References
	DEFINE_FUNCTION(UPoseableMeshComponent::execCopyPoseFromSkeletalComponent)
	{
		P_GET_OBJECT(USkeletalMeshComponent,Z_Param_InComponentToCopy);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CopyPoseFromSkeletalComponent(Z_Param_InComponentToCopy);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPoseableMeshComponent::execResetBoneTransformByName)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_BoneName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetBoneTransformByName(Z_Param_BoneName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPoseableMeshComponent::execGetBoneScaleByName)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_BoneName);
		P_GET_PROPERTY(FByteProperty,Z_Param_BoneSpace);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetBoneScaleByName(Z_Param_BoneName,EBoneSpaces::Type(Z_Param_BoneSpace));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPoseableMeshComponent::execGetBoneRotationByName)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_BoneName);
		P_GET_PROPERTY(FByteProperty,Z_Param_BoneSpace);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FRotator*)Z_Param__Result=P_THIS->GetBoneRotationByName(Z_Param_BoneName,EBoneSpaces::Type(Z_Param_BoneSpace));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPoseableMeshComponent::execGetBoneLocationByName)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_BoneName);
		P_GET_PROPERTY(FByteProperty,Z_Param_BoneSpace);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetBoneLocationByName(Z_Param_BoneName,EBoneSpaces::Type(Z_Param_BoneSpace));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPoseableMeshComponent::execGetBoneTransformByName)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_BoneName);
		P_GET_PROPERTY(FByteProperty,Z_Param_BoneSpace);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTransform*)Z_Param__Result=P_THIS->GetBoneTransformByName(Z_Param_BoneName,EBoneSpaces::Type(Z_Param_BoneSpace));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPoseableMeshComponent::execSetBoneScaleByName)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_BoneName);
		P_GET_STRUCT(FVector,Z_Param_InScale3D);
		P_GET_PROPERTY(FByteProperty,Z_Param_BoneSpace);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBoneScaleByName(Z_Param_BoneName,Z_Param_InScale3D,EBoneSpaces::Type(Z_Param_BoneSpace));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPoseableMeshComponent::execSetBoneRotationByName)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_BoneName);
		P_GET_STRUCT(FRotator,Z_Param_InRotation);
		P_GET_PROPERTY(FByteProperty,Z_Param_BoneSpace);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBoneRotationByName(Z_Param_BoneName,Z_Param_InRotation,EBoneSpaces::Type(Z_Param_BoneSpace));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPoseableMeshComponent::execSetBoneLocationByName)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_BoneName);
		P_GET_STRUCT(FVector,Z_Param_InLocation);
		P_GET_PROPERTY(FByteProperty,Z_Param_BoneSpace);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBoneLocationByName(Z_Param_BoneName,Z_Param_InLocation,EBoneSpaces::Type(Z_Param_BoneSpace));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPoseableMeshComponent::execSetBoneTransformByName)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_BoneName);
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_InTransform);
		P_GET_PROPERTY(FByteProperty,Z_Param_BoneSpace);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBoneTransformByName(Z_Param_BoneName,Z_Param_Out_InTransform,EBoneSpaces::Type(Z_Param_BoneSpace));
		P_NATIVE_END;
	}
	void UPoseableMeshComponent::StaticRegisterNativesUPoseableMeshComponent()
	{
		UClass* Class = UPoseableMeshComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CopyPoseFromSkeletalComponent", &UPoseableMeshComponent::execCopyPoseFromSkeletalComponent },
			{ "GetBoneLocationByName", &UPoseableMeshComponent::execGetBoneLocationByName },
			{ "GetBoneRotationByName", &UPoseableMeshComponent::execGetBoneRotationByName },
			{ "GetBoneScaleByName", &UPoseableMeshComponent::execGetBoneScaleByName },
			{ "GetBoneTransformByName", &UPoseableMeshComponent::execGetBoneTransformByName },
			{ "ResetBoneTransformByName", &UPoseableMeshComponent::execResetBoneTransformByName },
			{ "SetBoneLocationByName", &UPoseableMeshComponent::execSetBoneLocationByName },
			{ "SetBoneRotationByName", &UPoseableMeshComponent::execSetBoneRotationByName },
			{ "SetBoneScaleByName", &UPoseableMeshComponent::execSetBoneScaleByName },
			{ "SetBoneTransformByName", &UPoseableMeshComponent::execSetBoneTransformByName },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPoseableMeshComponent_CopyPoseFromSkeletalComponent_Statics
	{
		struct PoseableMeshComponent_eventCopyPoseFromSkeletalComponent_Parms
		{
			USkeletalMeshComponent* InComponentToCopy;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InComponentToCopy_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InComponentToCopy;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPoseableMeshComponent_CopyPoseFromSkeletalComponent_Statics::NewProp_InComponentToCopy_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPoseableMeshComponent_CopyPoseFromSkeletalComponent_Statics::NewProp_InComponentToCopy = { "InComponentToCopy", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PoseableMeshComponent_eventCopyPoseFromSkeletalComponent_Parms, InComponentToCopy), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPoseableMeshComponent_CopyPoseFromSkeletalComponent_Statics::NewProp_InComponentToCopy_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPoseableMeshComponent_CopyPoseFromSkeletalComponent_Statics::NewProp_InComponentToCopy_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPoseableMeshComponent_CopyPoseFromSkeletalComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPoseableMeshComponent_CopyPoseFromSkeletalComponent_Statics::NewProp_InComponentToCopy,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPoseableMeshComponent_CopyPoseFromSkeletalComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|PoseableMesh" },
		{ "ModuleRelativePath", "Classes/Components/PoseableMeshComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPoseableMeshComponent_CopyPoseFromSkeletalComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPoseableMeshComponent, nullptr, "CopyPoseFromSkeletalComponent", nullptr, nullptr, sizeof(PoseableMeshComponent_eventCopyPoseFromSkeletalComponent_Parms), Z_Construct_UFunction_UPoseableMeshComponent_CopyPoseFromSkeletalComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPoseableMeshComponent_CopyPoseFromSkeletalComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPoseableMeshComponent_CopyPoseFromSkeletalComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPoseableMeshComponent_CopyPoseFromSkeletalComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPoseableMeshComponent_CopyPoseFromSkeletalComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPoseableMeshComponent_CopyPoseFromSkeletalComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPoseableMeshComponent_GetBoneLocationByName_Statics
	{
		struct PoseableMeshComponent_eventGetBoneLocationByName_Parms
		{
			FName BoneName;
			TEnumAsByte<EBoneSpaces::Type> BoneSpace;
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_BoneSpace;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_BoneName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPoseableMeshComponent_GetBoneLocationByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PoseableMeshComponent_eventGetBoneLocationByName_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPoseableMeshComponent_GetBoneLocationByName_Statics::NewProp_BoneSpace = { "BoneSpace", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PoseableMeshComponent_eventGetBoneLocationByName_Parms, BoneSpace), Z_Construct_UEnum_Engine_EBoneSpaces, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPoseableMeshComponent_GetBoneLocationByName_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PoseableMeshComponent_eventGetBoneLocationByName_Parms, BoneName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPoseableMeshComponent_GetBoneLocationByName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPoseableMeshComponent_GetBoneLocationByName_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPoseableMeshComponent_GetBoneLocationByName_Statics::NewProp_BoneSpace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPoseableMeshComponent_GetBoneLocationByName_Statics::NewProp_BoneName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPoseableMeshComponent_GetBoneLocationByName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|PoseableMesh" },
		{ "ModuleRelativePath", "Classes/Components/PoseableMeshComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPoseableMeshComponent_GetBoneLocationByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPoseableMeshComponent, nullptr, "GetBoneLocationByName", nullptr, nullptr, sizeof(PoseableMeshComponent_eventGetBoneLocationByName_Parms), Z_Construct_UFunction_UPoseableMeshComponent_GetBoneLocationByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPoseableMeshComponent_GetBoneLocationByName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPoseableMeshComponent_GetBoneLocationByName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPoseableMeshComponent_GetBoneLocationByName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPoseableMeshComponent_GetBoneLocationByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPoseableMeshComponent_GetBoneLocationByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPoseableMeshComponent_GetBoneRotationByName_Statics
	{
		struct PoseableMeshComponent_eventGetBoneRotationByName_Parms
		{
			FName BoneName;
			TEnumAsByte<EBoneSpaces::Type> BoneSpace;
			FRotator ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_BoneSpace;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_BoneName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPoseableMeshComponent_GetBoneRotationByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PoseableMeshComponent_eventGetBoneRotationByName_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPoseableMeshComponent_GetBoneRotationByName_Statics::NewProp_BoneSpace = { "BoneSpace", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PoseableMeshComponent_eventGetBoneRotationByName_Parms, BoneSpace), Z_Construct_UEnum_Engine_EBoneSpaces, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPoseableMeshComponent_GetBoneRotationByName_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PoseableMeshComponent_eventGetBoneRotationByName_Parms, BoneName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPoseableMeshComponent_GetBoneRotationByName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPoseableMeshComponent_GetBoneRotationByName_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPoseableMeshComponent_GetBoneRotationByName_Statics::NewProp_BoneSpace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPoseableMeshComponent_GetBoneRotationByName_Statics::NewProp_BoneName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPoseableMeshComponent_GetBoneRotationByName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|PoseableMesh" },
		{ "ModuleRelativePath", "Classes/Components/PoseableMeshComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPoseableMeshComponent_GetBoneRotationByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPoseableMeshComponent, nullptr, "GetBoneRotationByName", nullptr, nullptr, sizeof(PoseableMeshComponent_eventGetBoneRotationByName_Parms), Z_Construct_UFunction_UPoseableMeshComponent_GetBoneRotationByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPoseableMeshComponent_GetBoneRotationByName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPoseableMeshComponent_GetBoneRotationByName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPoseableMeshComponent_GetBoneRotationByName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPoseableMeshComponent_GetBoneRotationByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPoseableMeshComponent_GetBoneRotationByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPoseableMeshComponent_GetBoneScaleByName_Statics
	{
		struct PoseableMeshComponent_eventGetBoneScaleByName_Parms
		{
			FName BoneName;
			TEnumAsByte<EBoneSpaces::Type> BoneSpace;
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_BoneSpace;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_BoneName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPoseableMeshComponent_GetBoneScaleByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PoseableMeshComponent_eventGetBoneScaleByName_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPoseableMeshComponent_GetBoneScaleByName_Statics::NewProp_BoneSpace = { "BoneSpace", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PoseableMeshComponent_eventGetBoneScaleByName_Parms, BoneSpace), Z_Construct_UEnum_Engine_EBoneSpaces, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPoseableMeshComponent_GetBoneScaleByName_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PoseableMeshComponent_eventGetBoneScaleByName_Parms, BoneName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPoseableMeshComponent_GetBoneScaleByName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPoseableMeshComponent_GetBoneScaleByName_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPoseableMeshComponent_GetBoneScaleByName_Statics::NewProp_BoneSpace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPoseableMeshComponent_GetBoneScaleByName_Statics::NewProp_BoneName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPoseableMeshComponent_GetBoneScaleByName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|PoseableMesh" },
		{ "ModuleRelativePath", "Classes/Components/PoseableMeshComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPoseableMeshComponent_GetBoneScaleByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPoseableMeshComponent, nullptr, "GetBoneScaleByName", nullptr, nullptr, sizeof(PoseableMeshComponent_eventGetBoneScaleByName_Parms), Z_Construct_UFunction_UPoseableMeshComponent_GetBoneScaleByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPoseableMeshComponent_GetBoneScaleByName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPoseableMeshComponent_GetBoneScaleByName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPoseableMeshComponent_GetBoneScaleByName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPoseableMeshComponent_GetBoneScaleByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPoseableMeshComponent_GetBoneScaleByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPoseableMeshComponent_GetBoneTransformByName_Statics
	{
		struct PoseableMeshComponent_eventGetBoneTransformByName_Parms
		{
			FName BoneName;
			TEnumAsByte<EBoneSpaces::Type> BoneSpace;
			FTransform ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_BoneSpace;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_BoneName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPoseableMeshComponent_GetBoneTransformByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PoseableMeshComponent_eventGetBoneTransformByName_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPoseableMeshComponent_GetBoneTransformByName_Statics::NewProp_BoneSpace = { "BoneSpace", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PoseableMeshComponent_eventGetBoneTransformByName_Parms, BoneSpace), Z_Construct_UEnum_Engine_EBoneSpaces, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPoseableMeshComponent_GetBoneTransformByName_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PoseableMeshComponent_eventGetBoneTransformByName_Parms, BoneName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPoseableMeshComponent_GetBoneTransformByName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPoseableMeshComponent_GetBoneTransformByName_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPoseableMeshComponent_GetBoneTransformByName_Statics::NewProp_BoneSpace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPoseableMeshComponent_GetBoneTransformByName_Statics::NewProp_BoneName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPoseableMeshComponent_GetBoneTransformByName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|PoseableMesh" },
		{ "ModuleRelativePath", "Classes/Components/PoseableMeshComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPoseableMeshComponent_GetBoneTransformByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPoseableMeshComponent, nullptr, "GetBoneTransformByName", nullptr, nullptr, sizeof(PoseableMeshComponent_eventGetBoneTransformByName_Parms), Z_Construct_UFunction_UPoseableMeshComponent_GetBoneTransformByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPoseableMeshComponent_GetBoneTransformByName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPoseableMeshComponent_GetBoneTransformByName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPoseableMeshComponent_GetBoneTransformByName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPoseableMeshComponent_GetBoneTransformByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPoseableMeshComponent_GetBoneTransformByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPoseableMeshComponent_ResetBoneTransformByName_Statics
	{
		struct PoseableMeshComponent_eventResetBoneTransformByName_Parms
		{
			FName BoneName;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_BoneName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPoseableMeshComponent_ResetBoneTransformByName_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PoseableMeshComponent_eventResetBoneTransformByName_Parms, BoneName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPoseableMeshComponent_ResetBoneTransformByName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPoseableMeshComponent_ResetBoneTransformByName_Statics::NewProp_BoneName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPoseableMeshComponent_ResetBoneTransformByName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|PoseableMesh" },
		{ "ModuleRelativePath", "Classes/Components/PoseableMeshComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPoseableMeshComponent_ResetBoneTransformByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPoseableMeshComponent, nullptr, "ResetBoneTransformByName", nullptr, nullptr, sizeof(PoseableMeshComponent_eventResetBoneTransformByName_Parms), Z_Construct_UFunction_UPoseableMeshComponent_ResetBoneTransformByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPoseableMeshComponent_ResetBoneTransformByName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPoseableMeshComponent_ResetBoneTransformByName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPoseableMeshComponent_ResetBoneTransformByName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPoseableMeshComponent_ResetBoneTransformByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPoseableMeshComponent_ResetBoneTransformByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPoseableMeshComponent_SetBoneLocationByName_Statics
	{
		struct PoseableMeshComponent_eventSetBoneLocationByName_Parms
		{
			FName BoneName;
			FVector InLocation;
			TEnumAsByte<EBoneSpaces::Type> BoneSpace;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_BoneSpace;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InLocation;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_BoneName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPoseableMeshComponent_SetBoneLocationByName_Statics::NewProp_BoneSpace = { "BoneSpace", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PoseableMeshComponent_eventSetBoneLocationByName_Parms, BoneSpace), Z_Construct_UEnum_Engine_EBoneSpaces, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPoseableMeshComponent_SetBoneLocationByName_Statics::NewProp_InLocation = { "InLocation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PoseableMeshComponent_eventSetBoneLocationByName_Parms, InLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPoseableMeshComponent_SetBoneLocationByName_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PoseableMeshComponent_eventSetBoneLocationByName_Parms, BoneName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPoseableMeshComponent_SetBoneLocationByName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPoseableMeshComponent_SetBoneLocationByName_Statics::NewProp_BoneSpace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPoseableMeshComponent_SetBoneLocationByName_Statics::NewProp_InLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPoseableMeshComponent_SetBoneLocationByName_Statics::NewProp_BoneName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPoseableMeshComponent_SetBoneLocationByName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|PoseableMesh" },
		{ "ModuleRelativePath", "Classes/Components/PoseableMeshComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPoseableMeshComponent_SetBoneLocationByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPoseableMeshComponent, nullptr, "SetBoneLocationByName", nullptr, nullptr, sizeof(PoseableMeshComponent_eventSetBoneLocationByName_Parms), Z_Construct_UFunction_UPoseableMeshComponent_SetBoneLocationByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPoseableMeshComponent_SetBoneLocationByName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPoseableMeshComponent_SetBoneLocationByName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPoseableMeshComponent_SetBoneLocationByName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPoseableMeshComponent_SetBoneLocationByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPoseableMeshComponent_SetBoneLocationByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPoseableMeshComponent_SetBoneRotationByName_Statics
	{
		struct PoseableMeshComponent_eventSetBoneRotationByName_Parms
		{
			FName BoneName;
			FRotator InRotation;
			TEnumAsByte<EBoneSpaces::Type> BoneSpace;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_BoneSpace;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InRotation;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_BoneName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPoseableMeshComponent_SetBoneRotationByName_Statics::NewProp_BoneSpace = { "BoneSpace", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PoseableMeshComponent_eventSetBoneRotationByName_Parms, BoneSpace), Z_Construct_UEnum_Engine_EBoneSpaces, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPoseableMeshComponent_SetBoneRotationByName_Statics::NewProp_InRotation = { "InRotation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PoseableMeshComponent_eventSetBoneRotationByName_Parms, InRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPoseableMeshComponent_SetBoneRotationByName_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PoseableMeshComponent_eventSetBoneRotationByName_Parms, BoneName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPoseableMeshComponent_SetBoneRotationByName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPoseableMeshComponent_SetBoneRotationByName_Statics::NewProp_BoneSpace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPoseableMeshComponent_SetBoneRotationByName_Statics::NewProp_InRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPoseableMeshComponent_SetBoneRotationByName_Statics::NewProp_BoneName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPoseableMeshComponent_SetBoneRotationByName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|PoseableMesh" },
		{ "ModuleRelativePath", "Classes/Components/PoseableMeshComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPoseableMeshComponent_SetBoneRotationByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPoseableMeshComponent, nullptr, "SetBoneRotationByName", nullptr, nullptr, sizeof(PoseableMeshComponent_eventSetBoneRotationByName_Parms), Z_Construct_UFunction_UPoseableMeshComponent_SetBoneRotationByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPoseableMeshComponent_SetBoneRotationByName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPoseableMeshComponent_SetBoneRotationByName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPoseableMeshComponent_SetBoneRotationByName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPoseableMeshComponent_SetBoneRotationByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPoseableMeshComponent_SetBoneRotationByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPoseableMeshComponent_SetBoneScaleByName_Statics
	{
		struct PoseableMeshComponent_eventSetBoneScaleByName_Parms
		{
			FName BoneName;
			FVector InScale3D;
			TEnumAsByte<EBoneSpaces::Type> BoneSpace;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_BoneSpace;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InScale3D;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_BoneName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPoseableMeshComponent_SetBoneScaleByName_Statics::NewProp_BoneSpace = { "BoneSpace", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PoseableMeshComponent_eventSetBoneScaleByName_Parms, BoneSpace), Z_Construct_UEnum_Engine_EBoneSpaces, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPoseableMeshComponent_SetBoneScaleByName_Statics::NewProp_InScale3D = { "InScale3D", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PoseableMeshComponent_eventSetBoneScaleByName_Parms, InScale3D), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPoseableMeshComponent_SetBoneScaleByName_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PoseableMeshComponent_eventSetBoneScaleByName_Parms, BoneName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPoseableMeshComponent_SetBoneScaleByName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPoseableMeshComponent_SetBoneScaleByName_Statics::NewProp_BoneSpace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPoseableMeshComponent_SetBoneScaleByName_Statics::NewProp_InScale3D,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPoseableMeshComponent_SetBoneScaleByName_Statics::NewProp_BoneName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPoseableMeshComponent_SetBoneScaleByName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|PoseableMesh" },
		{ "ModuleRelativePath", "Classes/Components/PoseableMeshComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPoseableMeshComponent_SetBoneScaleByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPoseableMeshComponent, nullptr, "SetBoneScaleByName", nullptr, nullptr, sizeof(PoseableMeshComponent_eventSetBoneScaleByName_Parms), Z_Construct_UFunction_UPoseableMeshComponent_SetBoneScaleByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPoseableMeshComponent_SetBoneScaleByName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPoseableMeshComponent_SetBoneScaleByName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPoseableMeshComponent_SetBoneScaleByName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPoseableMeshComponent_SetBoneScaleByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPoseableMeshComponent_SetBoneScaleByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPoseableMeshComponent_SetBoneTransformByName_Statics
	{
		struct PoseableMeshComponent_eventSetBoneTransformByName_Parms
		{
			FName BoneName;
			FTransform InTransform;
			TEnumAsByte<EBoneSpaces::Type> BoneSpace;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_BoneSpace;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InTransform;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_BoneName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPoseableMeshComponent_SetBoneTransformByName_Statics::NewProp_BoneSpace = { "BoneSpace", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PoseableMeshComponent_eventSetBoneTransformByName_Parms, BoneSpace), Z_Construct_UEnum_Engine_EBoneSpaces, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPoseableMeshComponent_SetBoneTransformByName_Statics::NewProp_InTransform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPoseableMeshComponent_SetBoneTransformByName_Statics::NewProp_InTransform = { "InTransform", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PoseableMeshComponent_eventSetBoneTransformByName_Parms, InTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_UPoseableMeshComponent_SetBoneTransformByName_Statics::NewProp_InTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPoseableMeshComponent_SetBoneTransformByName_Statics::NewProp_InTransform_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPoseableMeshComponent_SetBoneTransformByName_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PoseableMeshComponent_eventSetBoneTransformByName_Parms, BoneName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPoseableMeshComponent_SetBoneTransformByName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPoseableMeshComponent_SetBoneTransformByName_Statics::NewProp_BoneSpace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPoseableMeshComponent_SetBoneTransformByName_Statics::NewProp_InTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPoseableMeshComponent_SetBoneTransformByName_Statics::NewProp_BoneName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPoseableMeshComponent_SetBoneTransformByName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|PoseableMesh" },
		{ "ModuleRelativePath", "Classes/Components/PoseableMeshComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPoseableMeshComponent_SetBoneTransformByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPoseableMeshComponent, nullptr, "SetBoneTransformByName", nullptr, nullptr, sizeof(PoseableMeshComponent_eventSetBoneTransformByName_Parms), Z_Construct_UFunction_UPoseableMeshComponent_SetBoneTransformByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPoseableMeshComponent_SetBoneTransformByName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPoseableMeshComponent_SetBoneTransformByName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPoseableMeshComponent_SetBoneTransformByName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPoseableMeshComponent_SetBoneTransformByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPoseableMeshComponent_SetBoneTransformByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPoseableMeshComponent_NoRegister()
	{
		return UPoseableMeshComponent::StaticClass();
	}
	struct Z_Construct_UClass_UPoseableMeshComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPoseableMeshComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USkinnedMeshComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPoseableMeshComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPoseableMeshComponent_CopyPoseFromSkeletalComponent, "CopyPoseFromSkeletalComponent" }, // 2189468921
		{ &Z_Construct_UFunction_UPoseableMeshComponent_GetBoneLocationByName, "GetBoneLocationByName" }, // 3249046159
		{ &Z_Construct_UFunction_UPoseableMeshComponent_GetBoneRotationByName, "GetBoneRotationByName" }, // 2324096331
		{ &Z_Construct_UFunction_UPoseableMeshComponent_GetBoneScaleByName, "GetBoneScaleByName" }, // 3426884722
		{ &Z_Construct_UFunction_UPoseableMeshComponent_GetBoneTransformByName, "GetBoneTransformByName" }, // 734385552
		{ &Z_Construct_UFunction_UPoseableMeshComponent_ResetBoneTransformByName, "ResetBoneTransformByName" }, // 4062273039
		{ &Z_Construct_UFunction_UPoseableMeshComponent_SetBoneLocationByName, "SetBoneLocationByName" }, // 196018963
		{ &Z_Construct_UFunction_UPoseableMeshComponent_SetBoneRotationByName, "SetBoneRotationByName" }, // 3098963698
		{ &Z_Construct_UFunction_UPoseableMeshComponent_SetBoneScaleByName, "SetBoneScaleByName" }, // 891451539
		{ &Z_Construct_UFunction_UPoseableMeshComponent_SetBoneTransformByName, "SetBoneTransformByName" }, // 910659747
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseableMeshComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Rendering" },
		{ "Comment", "/**\n *\x09UPoseableMeshComponent that allows bone transforms to be driven by blueprint.\n */" },
		{ "HideCategories", "Object Physics Object Mobility Trigger" },
		{ "IncludePath", "Components/PoseableMeshComponent.h" },
		{ "ModuleRelativePath", "Classes/Components/PoseableMeshComponent.h" },
		{ "ToolTip", "UPoseableMeshComponent that allows bone transforms to be driven by blueprint." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPoseableMeshComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPoseableMeshComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPoseableMeshComponent_Statics::ClassParams = {
		&UPoseableMeshComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UPoseableMeshComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPoseableMeshComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPoseableMeshComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPoseableMeshComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPoseableMeshComponent, 3416212344);
	template<> ENGINE_API UClass* StaticClass<UPoseableMeshComponent>()
	{
		return UPoseableMeshComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPoseableMeshComponent(Z_Construct_UClass_UPoseableMeshComponent, &UPoseableMeshComponent::StaticClass, TEXT("/Script/Engine"), TEXT("UPoseableMeshComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPoseableMeshComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
