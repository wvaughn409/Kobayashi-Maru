// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OculusHMD/Public/OculusFunctionLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOculusFunctionLibrary() {}
// Cross Module References
	OCULUSHMD_API UEnum* Z_Construct_UEnum_OculusHMD_EBoundaryType();
	UPackage* Z_Construct_UPackage__Script_OculusHMD();
	OCULUSHMD_API UEnum* Z_Construct_UEnum_OculusHMD_EFixedFoveatedRenderingLevel();
	OCULUSHMD_API UEnum* Z_Construct_UEnum_OculusHMD_ETrackedDeviceType();
	OCULUSHMD_API UScriptStruct* Z_Construct_UScriptStruct_FGuardianTestResult();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	OCULUSHMD_API UScriptStruct* Z_Construct_UScriptStruct_FHmdUserProfile();
	OCULUSHMD_API UScriptStruct* Z_Construct_UScriptStruct_FHmdUserProfileField();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	OCULUSHMD_API UClass* Z_Construct_UClass_UOculusFunctionLibrary_NoRegister();
	OCULUSHMD_API UClass* Z_Construct_UClass_UOculusFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	HEADMOUNTEDDISPLAY_API UEnum* Z_Construct_UEnum_HeadMountedDisplay_EOrientPositionSelector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
// End Cross Module References
	static UEnum* EBoundaryType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_OculusHMD_EBoundaryType, Z_Construct_UPackage__Script_OculusHMD(), TEXT("EBoundaryType"));
		}
		return Singleton;
	}
	template<> OCULUSHMD_API UEnum* StaticEnum<EBoundaryType>()
	{
		return EBoundaryType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EBoundaryType(EBoundaryType_StaticEnum, TEXT("/Script/OculusHMD"), TEXT("EBoundaryType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_OculusHMD_EBoundaryType_Hash() { return 2361528868U; }
	UEnum* Z_Construct_UEnum_OculusHMD_EBoundaryType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_OculusHMD();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EBoundaryType"), 0, Get_Z_Construct_UEnum_OculusHMD_EBoundaryType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EBoundaryType::Boundary_Outer", (int64)EBoundaryType::Boundary_Outer },
				{ "EBoundaryType::Boundary_PlayArea", (int64)EBoundaryType::Boundary_PlayArea },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Boundary_Outer.DisplayName", "Outer Boundary" },
				{ "Boundary_Outer.Name", "EBoundaryType::Boundary_Outer" },
				{ "Boundary_PlayArea.DisplayName", "Play Area" },
				{ "Boundary_PlayArea.Name", "EBoundaryType::Boundary_PlayArea" },
				{ "Comment", "/* Guardian boundary types*/" },
				{ "ModuleRelativePath", "Public/OculusFunctionLibrary.h" },
				{ "ToolTip", "Guardian boundary types" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_OculusHMD,
				nullptr,
				"EBoundaryType",
				"EBoundaryType",
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
	static UEnum* EFixedFoveatedRenderingLevel_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_OculusHMD_EFixedFoveatedRenderingLevel, Z_Construct_UPackage__Script_OculusHMD(), TEXT("EFixedFoveatedRenderingLevel"));
		}
		return Singleton;
	}
	template<> OCULUSHMD_API UEnum* StaticEnum<EFixedFoveatedRenderingLevel>()
	{
		return EFixedFoveatedRenderingLevel_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EFixedFoveatedRenderingLevel(EFixedFoveatedRenderingLevel_StaticEnum, TEXT("/Script/OculusHMD"), TEXT("EFixedFoveatedRenderingLevel"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_OculusHMD_EFixedFoveatedRenderingLevel_Hash() { return 594563036U; }
	UEnum* Z_Construct_UEnum_OculusHMD_EFixedFoveatedRenderingLevel()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_OculusHMD();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EFixedFoveatedRenderingLevel"), 0, Get_Z_Construct_UEnum_OculusHMD_EFixedFoveatedRenderingLevel_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EFixedFoveatedRenderingLevel::FFR_Off", (int64)EFixedFoveatedRenderingLevel::FFR_Off },
				{ "EFixedFoveatedRenderingLevel::FFR_Low", (int64)EFixedFoveatedRenderingLevel::FFR_Low },
				{ "EFixedFoveatedRenderingLevel::FFR_Medium", (int64)EFixedFoveatedRenderingLevel::FFR_Medium },
				{ "EFixedFoveatedRenderingLevel::FFR_High", (int64)EFixedFoveatedRenderingLevel::FFR_High },
				{ "EFixedFoveatedRenderingLevel::FFR_HighTop", (int64)EFixedFoveatedRenderingLevel::FFR_HighTop },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "FFR_High.Name", "EFixedFoveatedRenderingLevel::FFR_High" },
				{ "FFR_HighTop.Comment", "// High foveation setting with more detail toward the bottom of the view and more foveation near the top (Same as High on Oculus Go)\n" },
				{ "FFR_HighTop.Name", "EFixedFoveatedRenderingLevel::FFR_HighTop" },
				{ "FFR_HighTop.ToolTip", "High foveation setting with more detail toward the bottom of the view and more foveation near the top (Same as High on Oculus Go)" },
				{ "FFR_Low.Name", "EFixedFoveatedRenderingLevel::FFR_Low" },
				{ "FFR_Medium.Name", "EFixedFoveatedRenderingLevel::FFR_Medium" },
				{ "FFR_Off.Name", "EFixedFoveatedRenderingLevel::FFR_Off" },
				{ "ModuleRelativePath", "Public/OculusFunctionLibrary.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_OculusHMD,
				nullptr,
				"EFixedFoveatedRenderingLevel",
				"EFixedFoveatedRenderingLevel",
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
	static UEnum* ETrackedDeviceType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_OculusHMD_ETrackedDeviceType, Z_Construct_UPackage__Script_OculusHMD(), TEXT("ETrackedDeviceType"));
		}
		return Singleton;
	}
	template<> OCULUSHMD_API UEnum* StaticEnum<ETrackedDeviceType>()
	{
		return ETrackedDeviceType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ETrackedDeviceType(ETrackedDeviceType_StaticEnum, TEXT("/Script/OculusHMD"), TEXT("ETrackedDeviceType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_OculusHMD_ETrackedDeviceType_Hash() { return 2886949740U; }
	UEnum* Z_Construct_UEnum_OculusHMD_ETrackedDeviceType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_OculusHMD();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ETrackedDeviceType"), 0, Get_Z_Construct_UEnum_OculusHMD_ETrackedDeviceType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ETrackedDeviceType::None", (int64)ETrackedDeviceType::None },
				{ "ETrackedDeviceType::HMD", (int64)ETrackedDeviceType::HMD },
				{ "ETrackedDeviceType::LTouch", (int64)ETrackedDeviceType::LTouch },
				{ "ETrackedDeviceType::RTouch", (int64)ETrackedDeviceType::RTouch },
				{ "ETrackedDeviceType::Touch", (int64)ETrackedDeviceType::Touch },
				{ "ETrackedDeviceType::DeviceObjectZero", (int64)ETrackedDeviceType::DeviceObjectZero },
				{ "ETrackedDeviceType::All", (int64)ETrackedDeviceType::All },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "All.DisplayName", "All Devices" },
				{ "All.Name", "ETrackedDeviceType::All" },
				{ "BlueprintType", "true" },
				{ "Comment", "/* Tracked device types corresponding to ovrTrackedDeviceType enum*/" },
				{ "DeviceObjectZero.DisplayName", "DeviceObject Zero" },
				{ "DeviceObjectZero.Name", "ETrackedDeviceType::DeviceObjectZero" },
				{ "HMD.DisplayName", "HMD" },
				{ "HMD.Name", "ETrackedDeviceType::HMD" },
				{ "LTouch.DisplayName", "Left Hand" },
				{ "LTouch.Name", "ETrackedDeviceType::LTouch" },
				{ "ModuleRelativePath", "Public/OculusFunctionLibrary.h" },
				{ "None.DisplayName", "No Devices" },
				{ "None.Name", "ETrackedDeviceType::None" },
				{ "RTouch.DisplayName", "Right Hand" },
				{ "RTouch.Name", "ETrackedDeviceType::RTouch" },
				{ "ToolTip", "Tracked device types corresponding to ovrTrackedDeviceType enum" },
				{ "Touch.DisplayName", "All Hands" },
				{ "Touch.Name", "ETrackedDeviceType::Touch" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_OculusHMD,
				nullptr,
				"ETrackedDeviceType",
				"ETrackedDeviceType",
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
class UScriptStruct* FGuardianTestResult::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern OCULUSHMD_API uint32 Get_Z_Construct_UScriptStruct_FGuardianTestResult_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGuardianTestResult, Z_Construct_UPackage__Script_OculusHMD(), TEXT("GuardianTestResult"), sizeof(FGuardianTestResult), Get_Z_Construct_UScriptStruct_FGuardianTestResult_Hash());
	}
	return Singleton;
}
template<> OCULUSHMD_API UScriptStruct* StaticStruct<FGuardianTestResult>()
{
	return FGuardianTestResult::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGuardianTestResult(FGuardianTestResult::StaticStruct, TEXT("/Script/OculusHMD"), TEXT("GuardianTestResult"), false, nullptr, nullptr);
static struct FScriptStruct_OculusHMD_StaticRegisterNativesFGuardianTestResult
{
	FScriptStruct_OculusHMD_StaticRegisterNativesFGuardianTestResult()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("GuardianTestResult")),new UScriptStruct::TCppStructOps<FGuardianTestResult>);
	}
} ScriptStruct_OculusHMD_StaticRegisterNativesFGuardianTestResult;
	struct Z_Construct_UScriptStruct_FGuardianTestResult_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClosestPointNormal_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ClosestPointNormal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClosestPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ClosestPoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClosestDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ClosestDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeviceType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DeviceType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DeviceType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsTriggering_MetaData[];
#endif
		static void NewProp_IsTriggering_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsTriggering;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGuardianTestResult_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/*\n* Information about relationships between a triggered boundary (EBoundaryType::Boundary_Outer or\n* EBoundaryType::Boundary_PlayArea) and a device or point in the world.\n* All dimensions, points, and vectors are returned in Unreal world coordinate space.\n*/" },
		{ "ModuleRelativePath", "Public/OculusFunctionLibrary.h" },
		{ "ToolTip", "* Information about relationships between a triggered boundary (EBoundaryType::Boundary_Outer or\n* EBoundaryType::Boundary_PlayArea) and a device or point in the world.\n* All dimensions, points, and vectors are returned in Unreal world coordinate space." },
	};
#endif
	void* Z_Construct_UScriptStruct_FGuardianTestResult_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGuardianTestResult>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGuardianTestResult_Statics::NewProp_ClosestPointNormal_MetaData[] = {
		{ "Category", "Boundary Test Result" },
		{ "Comment", "/** Normal of closest point */" },
		{ "ModuleRelativePath", "Public/OculusFunctionLibrary.h" },
		{ "ToolTip", "Normal of closest point" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGuardianTestResult_Statics::NewProp_ClosestPointNormal = { "ClosestPointNormal", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGuardianTestResult, ClosestPointNormal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FGuardianTestResult_Statics::NewProp_ClosestPointNormal_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGuardianTestResult_Statics::NewProp_ClosestPointNormal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGuardianTestResult_Statics::NewProp_ClosestPoint_MetaData[] = {
		{ "Category", "Boundary Test Result" },
		{ "Comment", "/** Closest point on surface corresponding to specified boundary */" },
		{ "ModuleRelativePath", "Public/OculusFunctionLibrary.h" },
		{ "ToolTip", "Closest point on surface corresponding to specified boundary" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGuardianTestResult_Statics::NewProp_ClosestPoint = { "ClosestPoint", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGuardianTestResult, ClosestPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FGuardianTestResult_Statics::NewProp_ClosestPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGuardianTestResult_Statics::NewProp_ClosestPoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGuardianTestResult_Statics::NewProp_ClosestDistance_MetaData[] = {
		{ "Category", "Boundary Test Result" },
		{ "Comment", "/** Distance of device/point to surface of boundary specified by BoundaryType */" },
		{ "ModuleRelativePath", "Public/OculusFunctionLibrary.h" },
		{ "ToolTip", "Distance of device/point to surface of boundary specified by BoundaryType" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGuardianTestResult_Statics::NewProp_ClosestDistance = { "ClosestDistance", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGuardianTestResult, ClosestDistance), METADATA_PARAMS(Z_Construct_UScriptStruct_FGuardianTestResult_Statics::NewProp_ClosestDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGuardianTestResult_Statics::NewProp_ClosestDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGuardianTestResult_Statics::NewProp_DeviceType_MetaData[] = {
		{ "Category", "Boundary Test Result" },
		{ "Comment", "/** Device type triggering boundary (ETrackedDeviceType::None if BoundaryTestResult corresponds to a point rather than a device) */" },
		{ "ModuleRelativePath", "Public/OculusFunctionLibrary.h" },
		{ "ToolTip", "Device type triggering boundary (ETrackedDeviceType::None if BoundaryTestResult corresponds to a point rather than a device)" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGuardianTestResult_Statics::NewProp_DeviceType = { "DeviceType", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGuardianTestResult, DeviceType), Z_Construct_UEnum_OculusHMD_ETrackedDeviceType, METADATA_PARAMS(Z_Construct_UScriptStruct_FGuardianTestResult_Statics::NewProp_DeviceType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGuardianTestResult_Statics::NewProp_DeviceType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGuardianTestResult_Statics::NewProp_DeviceType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGuardianTestResult_Statics::NewProp_IsTriggering_MetaData[] = {
		{ "Category", "Boundary Test Result" },
		{ "Comment", "/** Is there a triggering interaction between the device/point and specified boundary? */" },
		{ "ModuleRelativePath", "Public/OculusFunctionLibrary.h" },
		{ "ToolTip", "Is there a triggering interaction between the device/point and specified boundary?" },
	};
#endif
	void Z_Construct_UScriptStruct_FGuardianTestResult_Statics::NewProp_IsTriggering_SetBit(void* Obj)
	{
		((FGuardianTestResult*)Obj)->IsTriggering = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGuardianTestResult_Statics::NewProp_IsTriggering = { "IsTriggering", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGuardianTestResult), &Z_Construct_UScriptStruct_FGuardianTestResult_Statics::NewProp_IsTriggering_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGuardianTestResult_Statics::NewProp_IsTriggering_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGuardianTestResult_Statics::NewProp_IsTriggering_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGuardianTestResult_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGuardianTestResult_Statics::NewProp_ClosestPointNormal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGuardianTestResult_Statics::NewProp_ClosestPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGuardianTestResult_Statics::NewProp_ClosestDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGuardianTestResult_Statics::NewProp_DeviceType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGuardianTestResult_Statics::NewProp_DeviceType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGuardianTestResult_Statics::NewProp_IsTriggering,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGuardianTestResult_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OculusHMD,
		nullptr,
		&NewStructOps,
		"GuardianTestResult",
		sizeof(FGuardianTestResult),
		alignof(FGuardianTestResult),
		Z_Construct_UScriptStruct_FGuardianTestResult_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGuardianTestResult_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGuardianTestResult_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGuardianTestResult_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGuardianTestResult()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGuardianTestResult_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_OculusHMD();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GuardianTestResult"), sizeof(FGuardianTestResult), Get_Z_Construct_UScriptStruct_FGuardianTestResult_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGuardianTestResult_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGuardianTestResult_Hash() { return 1422815665U; }
class UScriptStruct* FHmdUserProfile::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern OCULUSHMD_API uint32 Get_Z_Construct_UScriptStruct_FHmdUserProfile_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FHmdUserProfile, Z_Construct_UPackage__Script_OculusHMD(), TEXT("HmdUserProfile"), sizeof(FHmdUserProfile), Get_Z_Construct_UScriptStruct_FHmdUserProfile_Hash());
	}
	return Singleton;
}
template<> OCULUSHMD_API UScriptStruct* StaticStruct<FHmdUserProfile>()
{
	return FHmdUserProfile::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FHmdUserProfile(FHmdUserProfile::StaticStruct, TEXT("/Script/OculusHMD"), TEXT("HmdUserProfile"), false, nullptr, nullptr);
static struct FScriptStruct_OculusHMD_StaticRegisterNativesFHmdUserProfile
{
	FScriptStruct_OculusHMD_StaticRegisterNativesFHmdUserProfile()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("HmdUserProfile")),new UScriptStruct::TCppStructOps<FHmdUserProfile>);
	}
} ScriptStruct_OculusHMD_StaticRegisterNativesFHmdUserProfile;
	struct Z_Construct_UScriptStruct_FHmdUserProfile_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExtraFields_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ExtraFields;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ExtraFields_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NeckToEyeDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NeckToEyeDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IPD_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_IPD;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EyeHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EyeHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PlayerHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Gender_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Gender;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHmdUserProfile_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisplayName", "HMD User Profile Data" },
		{ "ModuleRelativePath", "Public/OculusFunctionLibrary.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FHmdUserProfile_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHmdUserProfile>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHmdUserProfile_Statics::NewProp_ExtraFields_MetaData[] = {
		{ "Category", "Input|HeadMountedDisplay" },
		{ "ModuleRelativePath", "Public/OculusFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FHmdUserProfile_Statics::NewProp_ExtraFields = { "ExtraFields", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHmdUserProfile, ExtraFields), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FHmdUserProfile_Statics::NewProp_ExtraFields_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHmdUserProfile_Statics::NewProp_ExtraFields_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHmdUserProfile_Statics::NewProp_ExtraFields_Inner = { "ExtraFields", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FHmdUserProfileField, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHmdUserProfile_Statics::NewProp_NeckToEyeDistance_MetaData[] = {
		{ "Category", "Input|HeadMountedDisplay" },
		{ "Comment", "/** Neck-to-eye distance, in meters. X - horizontal, Y - vertical. */" },
		{ "ModuleRelativePath", "Public/OculusFunctionLibrary.h" },
		{ "ToolTip", "Neck-to-eye distance, in meters. X - horizontal, Y - vertical." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHmdUserProfile_Statics::NewProp_NeckToEyeDistance = { "NeckToEyeDistance", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHmdUserProfile, NeckToEyeDistance), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FHmdUserProfile_Statics::NewProp_NeckToEyeDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHmdUserProfile_Statics::NewProp_NeckToEyeDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHmdUserProfile_Statics::NewProp_IPD_MetaData[] = {
		{ "Category", "Input|HeadMountedDisplay" },
		{ "Comment", "/** Interpupillary distance of the player, in meters */" },
		{ "ModuleRelativePath", "Public/OculusFunctionLibrary.h" },
		{ "ToolTip", "Interpupillary distance of the player, in meters" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FHmdUserProfile_Statics::NewProp_IPD = { "IPD", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHmdUserProfile, IPD), METADATA_PARAMS(Z_Construct_UScriptStruct_FHmdUserProfile_Statics::NewProp_IPD_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHmdUserProfile_Statics::NewProp_IPD_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHmdUserProfile_Statics::NewProp_EyeHeight_MetaData[] = {
		{ "Category", "Input|HeadMountedDisplay" },
		{ "Comment", "/** Height of the player, in meters */" },
		{ "ModuleRelativePath", "Public/OculusFunctionLibrary.h" },
		{ "ToolTip", "Height of the player, in meters" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FHmdUserProfile_Statics::NewProp_EyeHeight = { "EyeHeight", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHmdUserProfile, EyeHeight), METADATA_PARAMS(Z_Construct_UScriptStruct_FHmdUserProfile_Statics::NewProp_EyeHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHmdUserProfile_Statics::NewProp_EyeHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHmdUserProfile_Statics::NewProp_PlayerHeight_MetaData[] = {
		{ "Category", "Input|HeadMountedDisplay" },
		{ "Comment", "/** Height of the player, in meters */" },
		{ "ModuleRelativePath", "Public/OculusFunctionLibrary.h" },
		{ "ToolTip", "Height of the player, in meters" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FHmdUserProfile_Statics::NewProp_PlayerHeight = { "PlayerHeight", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHmdUserProfile, PlayerHeight), METADATA_PARAMS(Z_Construct_UScriptStruct_FHmdUserProfile_Statics::NewProp_PlayerHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHmdUserProfile_Statics::NewProp_PlayerHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHmdUserProfile_Statics::NewProp_Gender_MetaData[] = {
		{ "Category", "Input|HeadMountedDisplay" },
		{ "Comment", "/** Gender of the user (\"male\", \"female\", etc). */" },
		{ "ModuleRelativePath", "Public/OculusFunctionLibrary.h" },
		{ "ToolTip", "Gender of the user (\"male\", \"female\", etc)." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHmdUserProfile_Statics::NewProp_Gender = { "Gender", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHmdUserProfile, Gender), METADATA_PARAMS(Z_Construct_UScriptStruct_FHmdUserProfile_Statics::NewProp_Gender_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHmdUserProfile_Statics::NewProp_Gender_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHmdUserProfile_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Input|HeadMountedDisplay" },
		{ "Comment", "/** Name of the user's profile. */" },
		{ "ModuleRelativePath", "Public/OculusFunctionLibrary.h" },
		{ "ToolTip", "Name of the user's profile." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHmdUserProfile_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHmdUserProfile, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FHmdUserProfile_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHmdUserProfile_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHmdUserProfile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHmdUserProfile_Statics::NewProp_ExtraFields,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHmdUserProfile_Statics::NewProp_ExtraFields_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHmdUserProfile_Statics::NewProp_NeckToEyeDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHmdUserProfile_Statics::NewProp_IPD,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHmdUserProfile_Statics::NewProp_EyeHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHmdUserProfile_Statics::NewProp_PlayerHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHmdUserProfile_Statics::NewProp_Gender,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHmdUserProfile_Statics::NewProp_Name,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHmdUserProfile_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OculusHMD,
		nullptr,
		&NewStructOps,
		"HmdUserProfile",
		sizeof(FHmdUserProfile),
		alignof(FHmdUserProfile),
		Z_Construct_UScriptStruct_FHmdUserProfile_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHmdUserProfile_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FHmdUserProfile_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHmdUserProfile_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FHmdUserProfile()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FHmdUserProfile_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_OculusHMD();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("HmdUserProfile"), sizeof(FHmdUserProfile), Get_Z_Construct_UScriptStruct_FHmdUserProfile_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FHmdUserProfile_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FHmdUserProfile_Hash() { return 3172088757U; }
class UScriptStruct* FHmdUserProfileField::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern OCULUSHMD_API uint32 Get_Z_Construct_UScriptStruct_FHmdUserProfileField_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FHmdUserProfileField, Z_Construct_UPackage__Script_OculusHMD(), TEXT("HmdUserProfileField"), sizeof(FHmdUserProfileField), Get_Z_Construct_UScriptStruct_FHmdUserProfileField_Hash());
	}
	return Singleton;
}
template<> OCULUSHMD_API UScriptStruct* StaticStruct<FHmdUserProfileField>()
{
	return FHmdUserProfileField::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FHmdUserProfileField(FHmdUserProfileField::StaticStruct, TEXT("/Script/OculusHMD"), TEXT("HmdUserProfileField"), false, nullptr, nullptr);
static struct FScriptStruct_OculusHMD_StaticRegisterNativesFHmdUserProfileField
{
	FScriptStruct_OculusHMD_StaticRegisterNativesFHmdUserProfileField()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("HmdUserProfileField")),new UScriptStruct::TCppStructOps<FHmdUserProfileField>);
	}
} ScriptStruct_OculusHMD_StaticRegisterNativesFHmdUserProfileField;
	struct Z_Construct_UScriptStruct_FHmdUserProfileField_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FieldValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FieldValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FieldName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHmdUserProfileField_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisplayName", "HMD User Profile Data Field" },
		{ "ModuleRelativePath", "Public/OculusFunctionLibrary.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FHmdUserProfileField_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHmdUserProfileField>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHmdUserProfileField_Statics::NewProp_FieldValue_MetaData[] = {
		{ "Category", "Input|HeadMountedDisplay" },
		{ "ModuleRelativePath", "Public/OculusFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHmdUserProfileField_Statics::NewProp_FieldValue = { "FieldValue", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHmdUserProfileField, FieldValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FHmdUserProfileField_Statics::NewProp_FieldValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHmdUserProfileField_Statics::NewProp_FieldValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHmdUserProfileField_Statics::NewProp_FieldName_MetaData[] = {
		{ "Category", "Input|HeadMountedDisplay" },
		{ "ModuleRelativePath", "Public/OculusFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHmdUserProfileField_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHmdUserProfileField, FieldName), METADATA_PARAMS(Z_Construct_UScriptStruct_FHmdUserProfileField_Statics::NewProp_FieldName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHmdUserProfileField_Statics::NewProp_FieldName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHmdUserProfileField_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHmdUserProfileField_Statics::NewProp_FieldValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHmdUserProfileField_Statics::NewProp_FieldName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHmdUserProfileField_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OculusHMD,
		nullptr,
		&NewStructOps,
		"HmdUserProfileField",
		sizeof(FHmdUserProfileField),
		alignof(FHmdUserProfileField),
		Z_Construct_UScriptStruct_FHmdUserProfileField_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHmdUserProfileField_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FHmdUserProfileField_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHmdUserProfileField_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FHmdUserProfileField()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FHmdUserProfileField_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_OculusHMD();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("HmdUserProfileField"), sizeof(FHmdUserProfileField), Get_Z_Construct_UScriptStruct_FHmdUserProfileField_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FHmdUserProfileField_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FHmdUserProfileField_Hash() { return 2012944484U; }
	DEFINE_FUNCTION(UOculusFunctionLibrary::execSetGuardianVisibility)
	{
		P_GET_UBOOL(Z_Param_GuardianVisible);
		P_FINISH;
		P_NATIVE_BEGIN;
		UOculusFunctionLibrary::SetGuardianVisibility(Z_Param_GuardianVisible);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOculusFunctionLibrary::execGetNodeGuardianIntersection)
	{
		P_GET_ENUM(ETrackedDeviceType,Z_Param_DeviceType);
		P_GET_ENUM(EBoundaryType,Z_Param_BoundaryType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGuardianTestResult*)Z_Param__Result=UOculusFunctionLibrary::GetNodeGuardianIntersection(ETrackedDeviceType(Z_Param_DeviceType),EBoundaryType(Z_Param_BoundaryType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOculusFunctionLibrary::execGetPointGuardianIntersection)
	{
		P_GET_STRUCT(FVector,Z_Param_Point);
		P_GET_ENUM(EBoundaryType,Z_Param_BoundaryType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGuardianTestResult*)Z_Param__Result=UOculusFunctionLibrary::GetPointGuardianIntersection(Z_Param_Point,EBoundaryType(Z_Param_BoundaryType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOculusFunctionLibrary::execGetPlayAreaTransform)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTransform*)Z_Param__Result=UOculusFunctionLibrary::GetPlayAreaTransform();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOculusFunctionLibrary::execGetGuardianDimensions)
	{
		P_GET_ENUM(EBoundaryType,Z_Param_BoundaryType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=UOculusFunctionLibrary::GetGuardianDimensions(EBoundaryType(Z_Param_BoundaryType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOculusFunctionLibrary::execGetGuardianPoints)
	{
		P_GET_ENUM(EBoundaryType,Z_Param_BoundaryType);
		P_GET_UBOOL(Z_Param_UsePawnSpace);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FVector>*)Z_Param__Result=UOculusFunctionLibrary::GetGuardianPoints(EBoundaryType(Z_Param_BoundaryType),Z_Param_UsePawnSpace);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOculusFunctionLibrary::execIsGuardianConfigured)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UOculusFunctionLibrary::IsGuardianConfigured();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOculusFunctionLibrary::execIsGuardianDisplayed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UOculusFunctionLibrary::IsGuardianDisplayed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOculusFunctionLibrary::execSetColorScaleAndOffset)
	{
		P_GET_STRUCT(FLinearColor,Z_Param_ColorScale);
		P_GET_STRUCT(FLinearColor,Z_Param_ColorOffset);
		P_GET_UBOOL(Z_Param_bApplyToAllLayers);
		P_FINISH;
		P_NATIVE_BEGIN;
		UOculusFunctionLibrary::SetColorScaleAndOffset(Z_Param_ColorScale,Z_Param_ColorOffset,Z_Param_bApplyToAllLayers);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOculusFunctionLibrary::execEnableOrientationTracking)
	{
		P_GET_UBOOL(Z_Param_bOrientationTracking);
		P_FINISH;
		P_NATIVE_BEGIN;
		UOculusFunctionLibrary::EnableOrientationTracking(Z_Param_bOrientationTracking);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOculusFunctionLibrary::execEnablePositionTracking)
	{
		P_GET_UBOOL(Z_Param_bPositionTracking);
		P_FINISH;
		P_NATIVE_BEGIN;
		UOculusFunctionLibrary::EnablePositionTracking(Z_Param_bPositionTracking);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOculusFunctionLibrary::execSetDisplayFrequency)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_RequestedFrequency);
		P_FINISH;
		P_NATIVE_BEGIN;
		UOculusFunctionLibrary::SetDisplayFrequency(Z_Param_RequestedFrequency);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOculusFunctionLibrary::execGetCurrentDisplayFrequency)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UOculusFunctionLibrary::GetCurrentDisplayFrequency();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOculusFunctionLibrary::execGetAvailableDisplayFrequencies)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<float>*)Z_Param__Result=UOculusFunctionLibrary::GetAvailableDisplayFrequencies();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOculusFunctionLibrary::execGetDeviceName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UOculusFunctionLibrary::GetDeviceName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOculusFunctionLibrary::execSetFixedFoveatedRenderingLevel)
	{
		P_GET_ENUM(EFixedFoveatedRenderingLevel,Z_Param_level);
		P_FINISH;
		P_NATIVE_BEGIN;
		UOculusFunctionLibrary::SetFixedFoveatedRenderingLevel(EFixedFoveatedRenderingLevel(Z_Param_level));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOculusFunctionLibrary::execGetFixedFoveatedRenderingLevel)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EFixedFoveatedRenderingLevel*)Z_Param__Result=UOculusFunctionLibrary::GetFixedFoveatedRenderingLevel();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOculusFunctionLibrary::execGetGPUFrameTime)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UOculusFunctionLibrary::GetGPUFrameTime();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOculusFunctionLibrary::execGetGPUUtilization)
	{
		P_GET_UBOOL_REF(Z_Param_Out_IsGPUAvailable);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_GPUUtilization);
		P_FINISH;
		P_NATIVE_BEGIN;
		UOculusFunctionLibrary::GetGPUUtilization(Z_Param_Out_IsGPUAvailable,Z_Param_Out_GPUUtilization);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOculusFunctionLibrary::execHasSystemOverlayPresent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UOculusFunctionLibrary::HasSystemOverlayPresent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOculusFunctionLibrary::execHasInputFocus)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UOculusFunctionLibrary::HasInputFocus();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOculusFunctionLibrary::execGetLoadingSplashParams)
	{
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_TexturePath);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_DistanceInMeters);
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_SizeInMeters);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_RotationAxis);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_RotationDeltaInDeg);
		P_FINISH;
		P_NATIVE_BEGIN;
		UOculusFunctionLibrary::GetLoadingSplashParams(Z_Param_Out_TexturePath,Z_Param_Out_DistanceInMeters,Z_Param_Out_SizeInMeters,Z_Param_Out_RotationAxis,Z_Param_Out_RotationDeltaInDeg);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOculusFunctionLibrary::execSetLoadingSplashParams)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_TexturePath);
		P_GET_STRUCT(FVector,Z_Param_DistanceInMeters);
		P_GET_STRUCT(FVector2D,Z_Param_SizeInMeters);
		P_GET_STRUCT(FVector,Z_Param_RotationAxis);
		P_GET_PROPERTY(FFloatProperty,Z_Param_RotationDeltaInDeg);
		P_FINISH;
		P_NATIVE_BEGIN;
		UOculusFunctionLibrary::SetLoadingSplashParams(Z_Param_TexturePath,Z_Param_DistanceInMeters,Z_Param_SizeInMeters,Z_Param_RotationAxis,Z_Param_RotationDeltaInDeg);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOculusFunctionLibrary::execIsLoadingIconEnabled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UOculusFunctionLibrary::IsLoadingIconEnabled();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOculusFunctionLibrary::execHideLoadingIcon)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UOculusFunctionLibrary::HideLoadingIcon();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOculusFunctionLibrary::execShowLoadingIcon)
	{
		P_GET_OBJECT(UTexture2D,Z_Param_Texture);
		P_FINISH;
		P_NATIVE_BEGIN;
		UOculusFunctionLibrary::ShowLoadingIcon(Z_Param_Texture);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOculusFunctionLibrary::execIsAutoLoadingSplashScreenEnabled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UOculusFunctionLibrary::IsAutoLoadingSplashScreenEnabled();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOculusFunctionLibrary::execEnableAutoLoadingSplashScreen)
	{
		P_GET_UBOOL(Z_Param_bAutoShowEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		UOculusFunctionLibrary::EnableAutoLoadingSplashScreen(Z_Param_bAutoShowEnabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOculusFunctionLibrary::execHideLoadingSplashScreen)
	{
		P_GET_UBOOL(Z_Param_bClear);
		P_FINISH;
		P_NATIVE_BEGIN;
		UOculusFunctionLibrary::HideLoadingSplashScreen(Z_Param_bClear);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOculusFunctionLibrary::execShowLoadingSplashScreen)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UOculusFunctionLibrary::ShowLoadingSplashScreen();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOculusFunctionLibrary::execClearLoadingSplashScreens)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UOculusFunctionLibrary::ClearLoadingSplashScreens();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOculusFunctionLibrary::execAddLoadingSplashScreen)
	{
		P_GET_OBJECT(UTexture2D,Z_Param_Texture);
		P_GET_STRUCT(FVector,Z_Param_TranslationInMeters);
		P_GET_STRUCT(FRotator,Z_Param_Rotation);
		P_GET_STRUCT(FVector2D,Z_Param_SizeInMeters);
		P_GET_STRUCT(FRotator,Z_Param_DeltaRotation);
		P_GET_UBOOL(Z_Param_bClearBeforeAdd);
		P_FINISH;
		P_NATIVE_BEGIN;
		UOculusFunctionLibrary::AddLoadingSplashScreen(Z_Param_Texture,Z_Param_TranslationInMeters,Z_Param_Rotation,Z_Param_SizeInMeters,Z_Param_DeltaRotation,Z_Param_bClearBeforeAdd);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOculusFunctionLibrary::execGetBaseRotationAndPositionOffset)
	{
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_OutRot);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_OutPosOffset);
		P_FINISH;
		P_NATIVE_BEGIN;
		UOculusFunctionLibrary::GetBaseRotationAndPositionOffset(Z_Param_Out_OutRot,Z_Param_Out_OutPosOffset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOculusFunctionLibrary::execSetBaseRotationAndPositionOffset)
	{
		P_GET_STRUCT(FRotator,Z_Param_BaseRot);
		P_GET_STRUCT(FVector,Z_Param_PosOffset);
		P_GET_PROPERTY(FByteProperty,Z_Param_Options);
		P_FINISH;
		P_NATIVE_BEGIN;
		UOculusFunctionLibrary::SetBaseRotationAndPositionOffset(Z_Param_BaseRot,Z_Param_PosOffset,EOrientPositionSelector::Type(Z_Param_Options));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOculusFunctionLibrary::execSetPositionScale3D)
	{
		P_GET_STRUCT(FVector,Z_Param_PosScale3D);
		P_FINISH;
		P_NATIVE_BEGIN;
		UOculusFunctionLibrary::SetPositionScale3D(Z_Param_PosScale3D);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOculusFunctionLibrary::execGetBaseRotationAndBaseOffsetInMeters)
	{
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_OutRotation);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_OutBaseOffsetInMeters);
		P_FINISH;
		P_NATIVE_BEGIN;
		UOculusFunctionLibrary::GetBaseRotationAndBaseOffsetInMeters(Z_Param_Out_OutRotation,Z_Param_Out_OutBaseOffsetInMeters);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOculusFunctionLibrary::execSetBaseRotationAndBaseOffsetInMeters)
	{
		P_GET_STRUCT(FRotator,Z_Param_Rotation);
		P_GET_STRUCT(FVector,Z_Param_BaseOffsetInMeters);
		P_GET_PROPERTY(FByteProperty,Z_Param_Options);
		P_FINISH;
		P_NATIVE_BEGIN;
		UOculusFunctionLibrary::SetBaseRotationAndBaseOffsetInMeters(Z_Param_Rotation,Z_Param_BaseOffsetInMeters,EOrientPositionSelector::Type(Z_Param_Options));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOculusFunctionLibrary::execGetUserProfile)
	{
		P_GET_STRUCT_REF(FHmdUserProfile,Z_Param_Out_Profile);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UOculusFunctionLibrary::GetUserProfile(Z_Param_Out_Profile);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOculusFunctionLibrary::execSetReorientHMDOnControllerRecenter)
	{
		P_GET_UBOOL(Z_Param_recenterMode);
		P_FINISH;
		P_NATIVE_BEGIN;
		UOculusFunctionLibrary::SetReorientHMDOnControllerRecenter(Z_Param_recenterMode);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOculusFunctionLibrary::execSetCPUAndGPULevels)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_CPULevel);
		P_GET_PROPERTY(FIntProperty,Z_Param_GPULevel);
		P_FINISH;
		P_NATIVE_BEGIN;
		UOculusFunctionLibrary::SetCPUAndGPULevels(Z_Param_CPULevel,Z_Param_GPULevel);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOculusFunctionLibrary::execIsDeviceTracked)
	{
		P_GET_ENUM(ETrackedDeviceType,Z_Param_DeviceType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UOculusFunctionLibrary::IsDeviceTracked(ETrackedDeviceType(Z_Param_DeviceType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOculusFunctionLibrary::execGetRawSensorData)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_AngularAcceleration);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_LinearAcceleration);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_AngularVelocity);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_LinearVelocity);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_TimeInSeconds);
		P_GET_ENUM(ETrackedDeviceType,Z_Param_DeviceType);
		P_FINISH;
		P_NATIVE_BEGIN;
		UOculusFunctionLibrary::GetRawSensorData(Z_Param_Out_AngularAcceleration,Z_Param_Out_LinearAcceleration,Z_Param_Out_AngularVelocity,Z_Param_Out_LinearVelocity,Z_Param_Out_TimeInSeconds,ETrackedDeviceType(Z_Param_DeviceType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOculusFunctionLibrary::execGetPose)
	{
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_DeviceRotation);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_DevicePosition);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_NeckPosition);
		P_GET_UBOOL(Z_Param_bUseOrienationForPlayerCamera);
		P_GET_UBOOL(Z_Param_bUsePositionForPlayerCamera);
		P_GET_STRUCT(FVector,Z_Param_PositionScale);
		P_FINISH;
		P_NATIVE_BEGIN;
		UOculusFunctionLibrary::GetPose(Z_Param_Out_DeviceRotation,Z_Param_Out_DevicePosition,Z_Param_Out_NeckPosition,Z_Param_bUseOrienationForPlayerCamera,Z_Param_bUsePositionForPlayerCamera,Z_Param_PositionScale);
		P_NATIVE_END;
	}
	void UOculusFunctionLibrary::StaticRegisterNativesUOculusFunctionLibrary()
	{
		UClass* Class = UOculusFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddLoadingSplashScreen", &UOculusFunctionLibrary::execAddLoadingSplashScreen },
			{ "ClearLoadingSplashScreens", &UOculusFunctionLibrary::execClearLoadingSplashScreens },
			{ "EnableAutoLoadingSplashScreen", &UOculusFunctionLibrary::execEnableAutoLoadingSplashScreen },
			{ "EnableOrientationTracking", &UOculusFunctionLibrary::execEnableOrientationTracking },
			{ "EnablePositionTracking", &UOculusFunctionLibrary::execEnablePositionTracking },
			{ "GetAvailableDisplayFrequencies", &UOculusFunctionLibrary::execGetAvailableDisplayFrequencies },
			{ "GetBaseRotationAndBaseOffsetInMeters", &UOculusFunctionLibrary::execGetBaseRotationAndBaseOffsetInMeters },
			{ "GetBaseRotationAndPositionOffset", &UOculusFunctionLibrary::execGetBaseRotationAndPositionOffset },
			{ "GetCurrentDisplayFrequency", &UOculusFunctionLibrary::execGetCurrentDisplayFrequency },
			{ "GetDeviceName", &UOculusFunctionLibrary::execGetDeviceName },
			{ "GetFixedFoveatedRenderingLevel", &UOculusFunctionLibrary::execGetFixedFoveatedRenderingLevel },
			{ "GetGPUFrameTime", &UOculusFunctionLibrary::execGetGPUFrameTime },
			{ "GetGPUUtilization", &UOculusFunctionLibrary::execGetGPUUtilization },
			{ "GetGuardianDimensions", &UOculusFunctionLibrary::execGetGuardianDimensions },
			{ "GetGuardianPoints", &UOculusFunctionLibrary::execGetGuardianPoints },
			{ "GetLoadingSplashParams", &UOculusFunctionLibrary::execGetLoadingSplashParams },
			{ "GetNodeGuardianIntersection", &UOculusFunctionLibrary::execGetNodeGuardianIntersection },
			{ "GetPlayAreaTransform", &UOculusFunctionLibrary::execGetPlayAreaTransform },
			{ "GetPointGuardianIntersection", &UOculusFunctionLibrary::execGetPointGuardianIntersection },
			{ "GetPose", &UOculusFunctionLibrary::execGetPose },
			{ "GetRawSensorData", &UOculusFunctionLibrary::execGetRawSensorData },
			{ "GetUserProfile", &UOculusFunctionLibrary::execGetUserProfile },
			{ "HasInputFocus", &UOculusFunctionLibrary::execHasInputFocus },
			{ "HasSystemOverlayPresent", &UOculusFunctionLibrary::execHasSystemOverlayPresent },
			{ "HideLoadingIcon", &UOculusFunctionLibrary::execHideLoadingIcon },
			{ "HideLoadingSplashScreen", &UOculusFunctionLibrary::execHideLoadingSplashScreen },
			{ "IsAutoLoadingSplashScreenEnabled", &UOculusFunctionLibrary::execIsAutoLoadingSplashScreenEnabled },
			{ "IsDeviceTracked", &UOculusFunctionLibrary::execIsDeviceTracked },
			{ "IsGuardianConfigured", &UOculusFunctionLibrary::execIsGuardianConfigured },
			{ "IsGuardianDisplayed", &UOculusFunctionLibrary::execIsGuardianDisplayed },
			{ "IsLoadingIconEnabled", &UOculusFunctionLibrary::execIsLoadingIconEnabled },
			{ "SetBaseRotationAndBaseOffsetInMeters", &UOculusFunctionLibrary::execSetBaseRotationAndBaseOffsetInMeters },
			{ "SetBaseRotationAndPositionOffset", &UOculusFunctionLibrary::execSetBaseRotationAndPositionOffset },
			{ "SetColorScaleAndOffset", &UOculusFunctionLibrary::execSetColorScaleAndOffset },
			{ "SetCPUAndGPULevels", &UOculusFunctionLibrary::execSetCPUAndGPULevels },
			{ "SetDisplayFrequency", &UOculusFunctionLibrary::execSetDisplayFrequency },
			{ "SetFixedFoveatedRenderingLevel", &UOculusFunctionLibrary::execSetFixedFoveatedRenderingLevel },
			{ "SetGuardianVisibility", &UOculusFunctionLibrary::execSetGuardianVisibility },
			{ "SetLoadingSplashParams", &UOculusFunctionLibrary::execSetLoadingSplashParams },
			{ "SetPositionScale3D", &UOculusFunctionLibrary::execSetPositionScale3D },
			{ "SetReorientHMDOnControllerRecenter", &UOculusFunctionLibrary::execSetReorientHMDOnControllerRecenter },
			{ "ShowLoadingIcon", &UOculusFunctionLibrary::execShowLoadingIcon },
			{ "ShowLoadingSplashScreen", &UOculusFunctionLibrary::execShowLoadingSplashScreen },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOculusFunctionLibrary_AddLoadingSplashScreen_Statics
	{
		struct OculusFunctionLibrary_eventAddLoadingSplashScreen_Parms
		{
			UTexture2D* Texture;
			FVector TranslationInMeters;
			FRotator Rotation;
			FVector2D SizeInMeters;
			FRotator DeltaRotation;
			bool bClearBeforeAdd;
		};
		static void NewProp_bClearBeforeAdd_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bClearBeforeAdd;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DeltaRotation;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SizeInMeters;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Rotation;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TranslationInMeters;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Texture;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UOculusFunctionLibrary_AddLoadingSplashScreen_Statics::NewProp_bClearBeforeAdd_SetBit(void* Obj)
	{
		((OculusFunctionLibrary_eventAddLoadingSplashScreen_Parms*)Obj)->bClearBeforeAdd = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOculusFunctionLibrary_AddLoadingSplashScreen_Statics::NewProp_bClearBeforeAdd = { "bClearBeforeAdd", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(OculusFunctionLibrary_eventAddLoadingSplashScreen_Parms), &Z_Construct_UFunction_UOculusFunctionLibrary_AddLoadingSplashScreen_Statics::NewProp_bClearBeforeAdd_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOculusFunctionLibrary_AddLoadingSplashScreen_Statics::NewProp_DeltaRotation = { "DeltaRotation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OculusFunctionLibrary_eventAddLoadingSplashScreen_Parms, DeltaRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOculusFunctionLibrary_AddLoadingSplashScreen_Statics::NewProp_SizeInMeters = { "SizeInMeters", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OculusFunctionLibrary_eventAddLoadingSplashScreen_Parms, SizeInMeters), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOculusFunctionLibrary_AddLoadingSplashScreen_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OculusFunctionLibrary_eventAddLoadingSplashScreen_Parms, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOculusFunctionLibrary_AddLoadingSplashScreen_Statics::NewProp_TranslationInMeters = { "TranslationInMeters", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OculusFunctionLibrary_eventAddLoadingSplashScreen_Parms, TranslationInMeters), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOculusFunctionLibrary_AddLoadingSplashScreen_Statics::NewProp_Texture = { "Texture", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OculusFunctionLibrary_eventAddLoadingSplashScreen_Parms, Texture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusFunctionLibrary_AddLoadingSplashScreen_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusFunctionLibrary_AddLoadingSplashScreen_Statics::NewProp_bClearBeforeAdd,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusFunctionLibrary_AddLoadingSplashScreen_Statics::NewProp_DeltaRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusFunctionLibrary_AddLoadingSplashScreen_Statics::NewProp_SizeInMeters,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusFunctionLibrary_AddLoadingSplashScreen_Statics::NewProp_Rotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusFunctionLibrary_AddLoadingSplashScreen_Statics::NewProp_TranslationInMeters,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusFunctionLibrary_AddLoadingSplashScreen_Statics::NewProp_Texture,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusFunctionLibrary_AddLoadingSplashScreen_Statics::Function_MetaDataParams[] = {
		{ "Category", "OculusLibrary" },
		{ "Comment", "/**\n\x09 * Adds loading splash screen with parameters\n\x09 *\n\x09 * @param Texture\x09\x09\x09(in) A texture asset to be used for the splash. Gear VR uses it as a path for loading icon; all other params are currently ignored by Gear VR.\n\x09 * @param TranslationInMeters (in) Initial translation of the center of the splash screen (in meters).\n\x09 * @param Rotation\x09\x09\x09(in) Initial rotation of the splash screen, with the origin at the center of the splash screen.\n\x09 * @param SizeInMeters\x09\x09(in) Size, in meters, of the quad with the splash screen.\n\x09 * @param DeltaRotation\x09\x09(in) Incremental rotation, that is added each 2nd frame to the quad transform. The quad is rotated around the center of the quad.\n\x09 * @param bClearBeforeAdd\x09(in) If true, clears splashes before adding a new one.\n\x09 */" },
		{ "CPP_Default_bClearBeforeAdd", "false" },
		{ "CPP_Default_DeltaRotation", "" },
		{ "CPP_Default_SizeInMeters", "(X=1.000,Y=1.000)" },
		{ "ModuleRelativePath", "Public/OculusFunctionLibrary.h" },
		{ "ToolTip", "Adds loading splash screen with parameters\n\n@param Texture                       (in) A texture asset to be used for the splash. Gear VR uses it as a path for loading icon; all other params are currently ignored by Gear VR.\n@param TranslationInMeters (in) Initial translation of the center of the splash screen (in meters).\n@param Rotation                      (in) Initial rotation of the splash screen, with the origin at the center of the splash screen.\n@param SizeInMeters          (in) Size, in meters, of the quad with the splash screen.\n@param DeltaRotation         (in) Incremental rotation, that is added each 2nd frame to the quad transform. The quad is rotated around the center of the quad.\n@param bClearBeforeAdd       (in) If true, clears splashes before adding a new one." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusFunctionLibrary_AddLoadingSplashScreen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOculusFunctionLibrary, nullptr, "AddLoadingSplashScreen", nullptr, nullptr, sizeof(OculusFunctionLibrary_eventAddLoadingSplashScreen_Parms), Z_Construct_UFunction_UOculusFunctionLibrary_AddLoadingSplashScreen_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusFunctionLibrary_AddLoadingSplashScreen_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOculusFunctionLibrary_AddLoadingSplashScreen_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusFunctionLibrary_AddLoadingSplashScreen_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOculusFunctionLibrary_AddLoadingSplashScreen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOculusFunctionLibrary_AddLoadingSplashScreen_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOculusFunctionLibrary_ClearLoadingSplashScreens_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusFunctionLibrary_ClearLoadingSplashScreens_Statics::Function_MetaDataParams[] = {
		{ "Category", "OculusLibrary" },
		{ "Comment", "/**\n\x09 * Removes all the splash screens.\n\x09 */" },
		{ "ModuleRelativePath", "Public/OculusFunctionLibrary.h" },
		{ "ToolTip", "Removes all the splash screens." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusFunctionLibrary_ClearLoadingSplashScreens_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOculusFunctionLibrary, nullptr, "ClearLoadingSplashScreens", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOculusFunctionLibrary_ClearLoadingSplashScreens_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusFunctionLibrary_ClearLoadingSplashScreens_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOculusFunctionLibrary_ClearLoadingSplashScreens()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOculusFunctionLibrary_ClearLoadingSplashScreens_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOculusFunctionLibrary_EnableAutoLoadingSplashScreen_Statics
	{
		struct OculusFunctionLibrary_eventEnableAutoLoadingSplashScreen_Parms
		{
			bool bAutoShowEnabled;
		};
		static void NewProp_bAutoShowEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutoShowEnabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UOculusFunctionLibrary_EnableAutoLoadingSplashScreen_Statics::NewProp_bAutoShowEnabled_SetBit(void* Obj)
	{
		((OculusFunctionLibrary_eventEnableAutoLoadingSplashScreen_Parms*)Obj)->bAutoShowEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOculusFunctionLibrary_EnableAutoLoadingSplashScreen_Statics::NewProp_bAutoShowEnabled = { "bAutoShowEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(OculusFunctionLibrary_eventEnableAutoLoadingSplashScreen_Parms), &Z_Construct_UFunction_UOculusFunctionLibrary_EnableAutoLoadingSplashScreen_Statics::NewProp_bAutoShowEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusFunctionLibrary_EnableAutoLoadingSplashScreen_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusFunctionLibrary_EnableAutoLoadingSplashScreen_Statics::NewProp_bAutoShowEnabled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusFunctionLibrary_EnableAutoLoadingSplashScreen_Statics::Function_MetaDataParams[] = {
		{ "Category", "OculusLibrary" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "UOculusFunctionLibrary::EnableAutoLoadingSplashScreen has been deprecated and no longer functions as before.  Use the generic UStereoLayerFunctionLibrary::EnableAutoLoadingSplashScreen instead" },
		{ "ModuleRelativePath", "Public/OculusFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusFunctionLibrary_EnableAutoLoadingSplashScreen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOculusFunctionLibrary, nullptr, "EnableAutoLoadingSplashScreen", nullptr, nullptr, sizeof(OculusFunctionLibrary_eventEnableAutoLoadingSplashScreen_Parms), Z_Construct_UFunction_UOculusFunctionLibrary_EnableAutoLoadingSplashScreen_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusFunctionLibrary_EnableAutoLoadingSplashScreen_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOculusFunctionLibrary_EnableAutoLoadingSplashScreen_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusFunctionLibrary_EnableAutoLoadingSplashScreen_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOculusFunctionLibrary_EnableAutoLoadingSplashScreen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOculusFunctionLibrary_EnableAutoLoadingSplashScreen_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOculusFunctionLibrary_EnableOrientationTracking_Statics
	{
		struct OculusFunctionLibrary_eventEnableOrientationTracking_Parms
		{
			bool bOrientationTracking;
		};
		static void NewProp_bOrientationTracking_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOrientationTracking;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UOculusFunctionLibrary_EnableOrientationTracking_Statics::NewProp_bOrientationTracking_SetBit(void* Obj)
	{
		((OculusFunctionLibrary_eventEnableOrientationTracking_Parms*)Obj)->bOrientationTracking = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOculusFunctionLibrary_EnableOrientationTracking_Statics::NewProp_bOrientationTracking = { "bOrientationTracking", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(OculusFunctionLibrary_eventEnableOrientationTracking_Parms), &Z_Construct_UFunction_UOculusFunctionLibrary_EnableOrientationTracking_Statics::NewProp_bOrientationTracking_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusFunctionLibrary_EnableOrientationTracking_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusFunctionLibrary_EnableOrientationTracking_Statics::NewProp_bOrientationTracking,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusFunctionLibrary_EnableOrientationTracking_Statics::Function_MetaDataParams[] = {
		{ "Category", "OculusLibrary" },
		{ "Comment", "/**\n\x09* Enables/disables orientation tracking on devices that support it.\n\x09*/" },
		{ "ModuleRelativePath", "Public/OculusFunctionLibrary.h" },
		{ "ToolTip", "Enables/disables orientation tracking on devices that support it." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusFunctionLibrary_EnableOrientationTracking_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOculusFunctionLibrary, nullptr, "EnableOrientationTracking", nullptr, nullptr, sizeof(OculusFunctionLibrary_eventEnableOrientationTracking_Parms), Z_Construct_UFunction_UOculusFunctionLibrary_EnableOrientationTracking_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusFunctionLibrary_EnableOrientationTracking_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOculusFunctionLibrary_EnableOrientationTracking_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusFunctionLibrary_EnableOrientationTracking_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOculusFunctionLibrary_EnableOrientationTracking()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOculusFunctionLibrary_EnableOrientationTracking_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOculusFunctionLibrary_EnablePositionTracking_Statics
	{
		struct OculusFunctionLibrary_eventEnablePositionTracking_Parms
		{
			bool bPositionTracking;
		};
		static void NewProp_bPositionTracking_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPositionTracking;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UOculusFunctionLibrary_EnablePositionTracking_Statics::NewProp_bPositionTracking_SetBit(void* Obj)
	{
		((OculusFunctionLibrary_eventEnablePositionTracking_Parms*)Obj)->bPositionTracking = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOculusFunctionLibrary_EnablePositionTracking_Statics::NewProp_bPositionTracking = { "bPositionTracking", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(OculusFunctionLibrary_eventEnablePositionTracking_Parms), &Z_Construct_UFunction_UOculusFunctionLibrary_EnablePositionTracking_Statics::NewProp_bPositionTracking_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusFunctionLibrary_EnablePositionTracking_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusFunctionLibrary_EnablePositionTracking_Statics::NewProp_bPositionTracking,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusFunctionLibrary_EnablePositionTracking_Statics::Function_MetaDataParams[] = {
		{ "Category", "OculusLibrary" },
		{ "Comment", "/**\n\x09* Enables/disables positional tracking on devices that support it.\n\x09*/" },
		{ "ModuleRelativePath", "Public/OculusFunctionLibrary.h" },
		{ "ToolTip", "Enables/disables positional tracking on devices that support it." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusFunctionLibrary_EnablePositionTracking_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOculusFunctionLibrary, nullptr, "EnablePositionTracking", nullptr, nullptr, sizeof(OculusFunctionLibrary_eventEnablePositionTracking_Parms), Z_Construct_UFunction_UOculusFunctionLibrary_EnablePositionTracking_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusFunctionLibrary_EnablePositionTracking_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOculusFunctionLibrary_EnablePositionTracking_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusFunctionLibrary_EnablePositionTracking_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOculusFunctionLibrary_EnablePositionTracking()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOculusFunctionLibrary_EnablePositionTracking_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOculusFunctionLibrary_GetAvailableDisplayFrequencies_Statics
	{
		struct OculusFunctionLibrary_eventGetAvailableDisplayFrequencies_Parms
		{
			TArray<float> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOculusFunctionLibrary_GetAvailableDisplayFrequencies_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OculusFunctionLibrary_eventGetAvailableDisplayFrequencies_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOculusFunctionLibrary_GetAvailableDisplayFrequencies_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusFunctionLibrary_GetAvailableDisplayFrequencies_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusFunctionLibrary_GetAvailableDisplayFrequencies_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusFunctionLibrary_GetAvailableDisplayFrequencies_Statics::NewProp_ReturnValue_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusFunctionLibrary_GetAvailableDisplayFrequencies_Statics::Function_MetaDataParams[] = {
		{ "Category", "OculusLibrary" },
		{ "Comment", "/**\n\x09* Returns the current available frequencies\n\x09*/" },
		{ "ModuleRelativePath", "Public/OculusFunctionLibrary.h" },
		{ "ToolTip", "Returns the current available frequencies" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusFunctionLibrary_GetAvailableDisplayFrequencies_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOculusFunctionLibrary, nullptr, "GetAvailableDisplayFrequencies", nullptr, nullptr, sizeof(OculusFunctionLibrary_eventGetAvailableDisplayFrequencies_Parms), Z_Construct_UFunction_UOculusFunctionLibrary_GetAvailableDisplayFrequencies_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusFunctionLibrary_GetAvailableDisplayFrequencies_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOculusFunctionLibrary_GetAvailableDisplayFrequencies_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusFunctionLibrary_GetAvailableDisplayFrequencies_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOculusFunctionLibrary_GetAvailableDisplayFrequencies()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOculusFunctionLibrary_GetAvailableDisplayFrequencies_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOculusFunctionLibrary_GetBaseRotationAndBaseOffsetInMeters_Statics
	{
		struct OculusFunctionLibrary_eventGetBaseRotationAndBaseOffsetInMeters_Parms
		{
			FRotator OutRotation;
			FVector OutBaseOffsetInMeters;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutBaseOffsetInMeters;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutRotation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOculusFunctionLibrary_GetBaseRotationAndBaseOffsetInMeters_Statics::NewProp_OutBaseOffsetInMeters = { "OutBaseOffsetInMeters", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OculusFunctionLibrary_eventGetBaseRotationAndBaseOffsetInMeters_Parms, OutBaseOffsetInMeters), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOculusFunctionLibrary_GetBaseRotationAndBaseOffsetInMeters_Statics::NewProp_OutRotation = { "OutRotation", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OculusFunctionLibrary_eventGetBaseRotationAndBaseOffsetInMeters_Parms, OutRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusFunctionLibrary_GetBaseRotationAndBaseOffsetInMeters_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusFunctionLibrary_GetBaseRotationAndBaseOffsetInMeters_Statics::NewProp_OutBaseOffsetInMeters,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusFunctionLibrary_GetBaseRotationAndBaseOffsetInMeters_Statics::NewProp_OutRotation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusFunctionLibrary_GetBaseRotationAndBaseOffsetInMeters_Statics::Function_MetaDataParams[] = {
		{ "Category", "OculusLibrary" },
		{ "Comment", "/**\n\x09* Returns current base rotation and base offset.\n\x09* The base offset is currently used base position offset, previously set by the\n\x09* ResetPosition or SetBasePositionOffset calls. It represents a vector that translates the HMD's position\n\x09* into (0,0,0) point, in meters.\n\x09* The axis of the vector are the same as in Unreal: X - forward, Y - right, Z - up.\n\x09*\n\x09* @param OutRotation\x09\x09\x09(out) Rotator object with base rotation\n\x09* @param OutBaseOffsetInMeters\x09(out) base position offset, vector, in meters.\n\x09*/" },
		{ "ModuleRelativePath", "Public/OculusFunctionLibrary.h" },
		{ "ToolTip", "Returns current base rotation and base offset.\nThe base offset is currently used base position offset, previously set by the\nResetPosition or SetBasePositionOffset calls. It represents a vector that translates the HMD's position\ninto (0,0,0) point, in meters.\nThe axis of the vector are the same as in Unreal: X - forward, Y - right, Z - up.\n\n@param OutRotation                    (out) Rotator object with base rotation\n@param OutBaseOffsetInMeters  (out) base position offset, vector, in meters." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusFunctionLibrary_GetBaseRotationAndBaseOffsetInMeters_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOculusFunctionLibrary, nullptr, "GetBaseRotationAndBaseOffsetInMeters", nullptr, nullptr, sizeof(OculusFunctionLibrary_eventGetBaseRotationAndBaseOffsetInMeters_Parms), Z_Construct_UFunction_UOculusFunctionLibrary_GetBaseRotationAndBaseOffsetInMeters_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusFunctionLibrary_GetBaseRotationAndBaseOffsetInMeters_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOculusFunctionLibrary_GetBaseRotationAndBaseOffsetInMeters_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusFunctionLibrary_GetBaseRotationAndBaseOffsetInMeters_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOculusFunctionLibrary_GetBaseRotationAndBaseOffsetInMeters()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOculusFunctionLibrary_GetBaseRotationAndBaseOffsetInMeters_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOculusFunctionLibrary_GetBaseRotationAndPositionOffset_Statics
	{
		struct OculusFunctionLibrary_eventGetBaseRotationAndPositionOffset_Parms
		{
			FRotator OutRot;
			FVector OutPosOffset;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutPosOffset;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutRot;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOculusFunctionLibrary_GetBaseRotationAndPositionOffset_Statics::NewProp_OutPosOffset = { "OutPosOffset", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OculusFunctionLibrary_eventGetBaseRotationAndPositionOffset_Parms, OutPosOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOculusFunctionLibrary_GetBaseRotationAndPositionOffset_Statics::NewProp_OutRot = { "OutRot", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OculusFunctionLibrary_eventGetBaseRotationAndPositionOffset_Parms, OutRot), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusFunctionLibrary_GetBaseRotationAndPositionOffset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusFunctionLibrary_GetBaseRotationAndPositionOffset_Statics::NewProp_OutPosOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusFunctionLibrary_GetBaseRotationAndPositionOffset_Statics::NewProp_OutRot,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusFunctionLibrary_GetBaseRotationAndPositionOffset_Statics::Function_MetaDataParams[] = {
		{ "Category", "OculusLibrary" },
		{ "Comment", "/**\n\x09 * Returns current base rotation and position offset.\n\x09 *\n\x09 * @param OutRot\x09\x09\x09(out) Rotator object with base rotation\n\x09 * @param OutPosOffset\x09\x09(out) the vector with previously set position offset.\n\x09 */" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "A hack, proper camera positioning should be used" },
		{ "ModuleRelativePath", "Public/OculusFunctionLibrary.h" },
		{ "ToolTip", "Returns current base rotation and position offset.\n\n@param OutRot                        (out) Rotator object with base rotation\n@param OutPosOffset          (out) the vector with previously set position offset." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusFunctionLibrary_GetBaseRotationAndPositionOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOculusFunctionLibrary, nullptr, "GetBaseRotationAndPositionOffset", nullptr, nullptr, sizeof(OculusFunctionLibrary_eventGetBaseRotationAndPositionOffset_Parms), Z_Construct_UFunction_UOculusFunctionLibrary_GetBaseRotationAndPositionOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusFunctionLibrary_GetBaseRotationAndPositionOffset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOculusFunctionLibrary_GetBaseRotationAndPositionOffset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusFunctionLibrary_GetBaseRotationAndPositionOffset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOculusFunctionLibrary_GetBaseRotationAndPositionOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOculusFunctionLibrary_GetBaseRotationAndPositionOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOculusFunctionLibrary_GetCurrentDisplayFrequency_Statics
	{
		struct OculusFunctionLibrary_eventGetCurrentDisplayFrequency_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOculusFunctionLibrary_GetCurrentDisplayFrequency_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OculusFunctionLibrary_eventGetCurrentDisplayFrequency_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusFunctionLibrary_GetCurrentDisplayFrequency_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusFunctionLibrary_GetCurrentDisplayFrequency_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusFunctionLibrary_GetCurrentDisplayFrequency_Statics::Function_MetaDataParams[] = {
		{ "Category", "OculusLibrary" },
		{ "Comment", "/**\n\x09* Returns the current display frequency\n\x09*/" },
		{ "ModuleRelativePath", "Public/OculusFunctionLibrary.h" },
		{ "ToolTip", "Returns the current display frequency" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusFunctionLibrary_GetCurrentDisplayFrequency_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOculusFunctionLibrary, nullptr, "GetCurrentDisplayFrequency", nullptr, nullptr, sizeof(OculusFunctionLibrary_eventGetCurrentDisplayFrequency_Parms), Z_Construct_UFunction_UOculusFunctionLibrary_GetCurrentDisplayFrequency_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusFunctionLibrary_GetCurrentDisplayFrequency_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOculusFunctionLibrary_GetCurrentDisplayFrequency_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusFunctionLibrary_GetCurrentDisplayFrequency_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOculusFunctionLibrary_GetCurrentDisplayFrequency()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOculusFunctionLibrary_GetCurrentDisplayFrequency_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOculusFunctionLibrary_GetDeviceName_Statics
	{
		struct OculusFunctionLibrary_eventGetDeviceName_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOculusFunctionLibrary_GetDeviceName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OculusFunctionLibrary_eventGetDeviceName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusFunctionLibrary_GetDeviceName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusFunctionLibrary_GetDeviceName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusFunctionLibrary_GetDeviceName_Statics::Function_MetaDataParams[] = {
		{ "Category", "OculusLibrary" },
		{ "Comment", "/**\n\x09* Returns the current device's name\n\x09*/" },
		{ "ModuleRelativePath", "Public/OculusFunctionLibrary.h" },
		{ "ToolTip", "Returns the current device's name" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusFunctionLibrary_GetDeviceName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOculusFunctionLibrary, nullptr, "GetDeviceName", nullptr, nullptr, sizeof(OculusFunctionLibrary_eventGetDeviceName_Parms), Z_Construct_UFunction_UOculusFunctionLibrary_GetDeviceName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusFunctionLibrary_GetDeviceName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOculusFunctionLibrary_GetDeviceName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusFunctionLibrary_GetDeviceName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOculusFunctionLibrary_GetDeviceName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOculusFunctionLibrary_GetDeviceName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOculusFunctionLibrary_GetFixedFoveatedRenderingLevel_Statics
	{
		struct OculusFunctionLibrary_eventGetFixedFoveatedRenderingLevel_Parms
		{
			EFixedFoveatedRenderingLevel ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOculusFunctionLibrary_GetFixedFoveatedRenderingLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OculusFunctionLibrary_eventGetFixedFoveatedRenderingLevel_Parms, ReturnValue), Z_Construct_UEnum_OculusHMD_EFixedFoveatedRenderingLevel, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOculusFunctionLibrary_GetFixedFoveatedRenderingLevel_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusFunctionLibrary_GetFixedFoveatedRenderingLevel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusFunctionLibrary_GetFixedFoveatedRenderingLevel_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusFunctionLibrary_GetFixedFoveatedRenderingLevel_Statics::NewProp_ReturnValue_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusFunctionLibrary_GetFixedFoveatedRenderingLevel_Statics::Function_MetaDataParams[] = {
		{ "Category", "OculusLibrary" },
		{ "Comment", "/**\n\x09* Returns the current multiresolution level\n\x09*/" },
		{ "ModuleRelativePath", "Public/OculusFunctionLibrary.h" },
		{ "ToolTip", "Returns the current multiresolution level" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusFunctionLibrary_GetFixedFoveatedRenderingLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOculusFunctionLibrary, nullptr, "GetFixedFoveatedRenderingLevel", nullptr, nullptr, sizeof(OculusFunctionLibrary_eventGetFixedFoveatedRenderingLevel_Parms), Z_Construct_UFunction_UOculusFunctionLibrary_GetFixedFoveatedRenderingLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusFunctionLibrary_GetFixedFoveatedRenderingLevel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOculusFunctionLibrary_GetFixedFoveatedRenderingLevel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusFunctionLibrary_GetFixedFoveatedRenderingLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOculusFunctionLibrary_GetFixedFoveatedRenderingLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOculusFunctionLibrary_GetFixedFoveatedRenderingLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOculusFunctionLibrary_GetGPUFrameTime_Statics
	{
		struct OculusFunctionLibrary_eventGetGPUFrameTime_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOculusFunctionLibrary_GetGPUFrameTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OculusFunctionLibrary_eventGetGPUFrameTime_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusFunctionLibrary_GetGPUFrameTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusFunctionLibrary_GetGPUFrameTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusFunctionLibrary_GetGPUFrameTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "OculusLibrary" },
		{ "Comment", "/**\n\x09* Returns the GPU frame time on supported mobile platforms (Go for now)\n\x09*/" },
		{ "ModuleRelativePath", "Public/OculusFunctionLibrary.h" },
		{ "ToolTip", "Returns the GPU frame time on supported mobile platforms (Go for now)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusFunctionLibrary_GetGPUFrameTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOculusFunctionLibrary, nullptr, "GetGPUFrameTime", nullptr, nullptr, sizeof(OculusFunctionLibrary_eventGetGPUFrameTime_Parms), Z_Construct_UFunction_UOculusFunctionLibrary_GetGPUFrameTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusFunctionLibrary_GetGPUFrameTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOculusFunctionLibrary_GetGPUFrameTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusFunctionLibrary_GetGPUFrameTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOculusFunctionLibrary_GetGPUFrameTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOculusFunctionLibrary_GetGPUFrameTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOculusFunctionLibrary_GetGPUUtilization_Statics
	{
		struct OculusFunctionLibrary_eventGetGPUUtilization_Parms
		{
			bool IsGPUAvailable;
			float GPUUtilization;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_GPUUtilization;
		static void NewProp_IsGPUAvailable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsGPUAvailable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOculusFunctionLibrary_GetGPUUtilization_Statics::NewProp_GPUUtilization = { "GPUUtilization", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OculusFunctionLibrary_eventGetGPUUtilization_Parms, GPUUtilization), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UOculusFunctionLibrary_GetGPUUtilization_Statics::NewProp_IsGPUAvailable_SetBit(void* Obj)
	{
		((OculusFunctionLibrary_eventGetGPUUtilization_Parms*)Obj)->IsGPUAvailable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOculusFunctionLibrary_GetGPUUtilization_Statics::NewProp_IsGPUAvailable = { "IsGPUAvailable", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(OculusFunctionLibrary_eventGetGPUUtilization_Parms), &Z_Construct_UFunction_UOculusFunctionLibrary_GetGPUUtilization_Statics::NewProp_IsGPUAvailable_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusFunctionLibrary_GetGPUUtilization_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusFunctionLibrary_GetGPUUtilization_Statics::NewProp_GPUUtilization,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusFunctionLibrary_GetGPUUtilization_Statics::NewProp_IsGPUAvailable,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusFunctionLibrary_GetGPUUtilization_Statics::Function_MetaDataParams[] = {
		{ "Category", "OculusLibrary" },
		{ "Comment", "/**\n\x09* Returns the GPU utilization availability and value\n\x09*/" },
		{ "ModuleRelativePath", "Public/OculusFunctionLibrary.h" },
		{ "ToolTip", "Returns the GPU utilization availability and value" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusFunctionLibrary_GetGPUUtilization_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOculusFunctionLibrary, nullptr, "GetGPUUtilization", nullptr, nullptr, sizeof(OculusFunctionLibrary_eventGetGPUUtilization_Parms), Z_Construct_UFunction_UOculusFunctionLibrary_GetGPUUtilization_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusFunctionLibrary_GetGPUUtilization_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOculusFunctionLibrary_GetGPUUtilization_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusFunctionLibrary_GetGPUUtilization_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOculusFunctionLibrary_GetGPUUtilization()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOculusFunctionLibrary_GetGPUUtilization_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOculusFunctionLibrary_GetGuardianDimensions_Statics
	{
		struct OculusFunctionLibrary_eventGetGuardianDimensions_Parms
		{
			EBoundaryType BoundaryType;
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_BoundaryType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_BoundaryType_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOculusFunctionLibrary_GetGuardianDimensions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OculusFunctionLibrary_eventGetGuardianDimensions_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOculusFunctionLibrary_GetGuardianDimensions_Statics::NewProp_BoundaryType = { "BoundaryType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OculusFunctionLibrary_eventGetGuardianDimensions_Parms, BoundaryType), Z_Construct_UEnum_OculusHMD_EBoundaryType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOculusFunctionLibrary_GetGuardianDimensions_Statics::NewProp_BoundaryType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusFunctionLibrary_GetGuardianDimensions_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusFunctionLibrary_GetGuardianDimensions_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusFunctionLibrary_GetGuardianDimensions_Statics::NewProp_BoundaryType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusFunctionLibrary_GetGuardianDimensions_Statics::NewProp_BoundaryType_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusFunctionLibrary_GetGuardianDimensions_Statics::Function_MetaDataParams[] = {
		{ "Category", "OculusLibrary|Guardian" },
		{ "Comment", "/**\n\x09* Returns the dimensions in UE world space of the requested Boundary Type\n\x09* @param BoundaryType\x09\x09\x09(in) An enum representing the boundary type requested, either Outer Boundary (exact guardian bounds) or PlayArea (rectangle inside the Outer Boundary)\n\x09*/" },
		{ "ModuleRelativePath", "Public/OculusFunctionLibrary.h" },
		{ "ToolTip", "Returns the dimensions in UE world space of the requested Boundary Type\n@param BoundaryType                   (in) An enum representing the boundary type requested, either Outer Boundary (exact guardian bounds) or PlayArea (rectangle inside the Outer Boundary)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusFunctionLibrary_GetGuardianDimensions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOculusFunctionLibrary, nullptr, "GetGuardianDimensions", nullptr, nullptr, sizeof(OculusFunctionLibrary_eventGetGuardianDimensions_Parms), Z_Construct_UFunction_UOculusFunctionLibrary_GetGuardianDimensions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusFunctionLibrary_GetGuardianDimensions_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOculusFunctionLibrary_GetGuardianDimensions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusFunctionLibrary_GetGuardianDimensions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOculusFunctionLibrary_GetGuardianDimensions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOculusFunctionLibrary_GetGuardianDimensions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOculusFunctionLibrary_GetGuardianPoints_Statics
	{
		struct OculusFunctionLibrary_eventGetGuardianPoints_Parms
		{
			EBoundaryType BoundaryType;
			bool UsePawnSpace;
			TArray<FVector> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static void NewProp_UsePawnSpace_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UsePawnSpace;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_BoundaryType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_BoundaryType_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOculusFunctionLibrary_GetGuardianPoints_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OculusFunctionLibrary_eventGetGuardianPoints_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOculusFunctionLibrary_GetGuardianPoints_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UOculusFunctionLibrary_GetGuardianPoints_Statics::NewProp_UsePawnSpace_SetBit(void* Obj)
	{
		((OculusFunctionLibrary_eventGetGuardianPoints_Parms*)Obj)->UsePawnSpace = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOculusFunctionLibrary_GetGuardianPoints_Statics::NewProp_UsePawnSpace = { "UsePawnSpace", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(OculusFunctionLibrary_eventGetGuardianPoints_Parms), &Z_Construct_UFunction_UOculusFunctionLibrary_GetGuardianPoints_Statics::NewProp_UsePawnSpace_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOculusFunctionLibrary_GetGuardianPoints_Statics::NewProp_BoundaryType = { "BoundaryType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OculusFunctionLibrary_eventGetGuardianPoints_Parms, BoundaryType), Z_Construct_UEnum_OculusHMD_EBoundaryType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOculusFunctionLibrary_GetGuardianPoints_Statics::NewProp_BoundaryType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusFunctionLibrary_GetGuardianPoints_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusFunctionLibrary_GetGuardianPoints_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusFunctionLibrary_GetGuardianPoints_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusFunctionLibrary_GetGuardianPoints_Statics::NewProp_UsePawnSpace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusFunctionLibrary_GetGuardianPoints_Statics::NewProp_BoundaryType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusFunctionLibrary_GetGuardianPoints_Statics::NewProp_BoundaryType_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusFunctionLibrary_GetGuardianPoints_Statics::Function_MetaDataParams[] = {
		{ "Category", "OculusLibrary|Guardian" },
		{ "Comment", "/**\n\x09* Returns the list of points in UE world space of the requested Boundary Type \n\x09* @param BoundaryType\x09\x09\x09(in) An enum representing the boundary type requested, either Outer Boundary (exact guardian bounds) or PlayArea (rectangle inside the Outer Boundary)\n\x09* @param UsePawnSpace\x09\x09\x09(in) Boolean indicating to return the points in world space or pawn space\n\x09*/" },
		{ "CPP_Default_UsePawnSpace", "false" },
		{ "ModuleRelativePath", "Public/OculusFunctionLibrary.h" },
		{ "ToolTip", "Returns the list of points in UE world space of the requested Boundary Type\n@param BoundaryType                   (in) An enum representing the boundary type requested, either Outer Boundary (exact guardian bounds) or PlayArea (rectangle inside the Outer Boundary)\n@param UsePawnSpace                   (in) Boolean indicating to return the points in world space or pawn space" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusFunctionLibrary_GetGuardianPoints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOculusFunctionLibrary, nullptr, "GetGuardianPoints", nullptr, nullptr, sizeof(OculusFunctionLibrary_eventGetGuardianPoints_Parms), Z_Construct_UFunction_UOculusFunctionLibrary_GetGuardianPoints_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusFunctionLibrary_GetGuardianPoints_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOculusFunctionLibrary_GetGuardianPoints_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusFunctionLibrary_GetGuardianPoints_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOculusFunctionLibrary_GetGuardianPoints()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOculusFunctionLibrary_GetGuardianPoints_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOculusFunctionLibrary_GetLoadingSplashParams_Statics
	{
		struct OculusFunctionLibrary_eventGetLoadingSplashParams_Parms
		{
			FString TexturePath;
			FVector DistanceInMeters;
			FVector2D SizeInMeters;
			FVector RotationAxis;
			float RotationDeltaInDeg;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RotationDeltaInDeg;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RotationAxis;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SizeInMeters;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DistanceInMeters;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TexturePath;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOculusFunctionLibrary_GetLoadingSplashParams_Statics::NewProp_RotationDeltaInDeg = { "RotationDeltaInDeg", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OculusFunctionLibrary_eventGetLoadingSplashParams_Parms, RotationDeltaInDeg), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOculusFunctionLibrary_GetLoadingSplashParams_Statics::NewProp_RotationAxis = { "RotationAxis", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OculusFunctionLibrary_eventGetLoadingSplashParams_Parms, RotationAxis), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOculusFunctionLibrary_GetLoadingSplashParams_Statics::NewProp_SizeInMeters = { "SizeInMeters", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OculusFunctionLibrary_eventGetLoadingSplashParams_Parms, SizeInMeters), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOculusFunctionLibrary_GetLoadingSplashParams_Statics::NewProp_DistanceInMeters = { "DistanceInMeters", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OculusFunctionLibrary_eventGetLoadingSplashParams_Parms, DistanceInMeters), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOculusFunctionLibrary_GetLoadingSplashParams_Statics::NewProp_TexturePath = { "TexturePath", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OculusFunctionLibrary_eventGetLoadingSplashParams_Parms, TexturePath), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusFunctionLibrary_GetLoadingSplashParams_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusFunctionLibrary_GetLoadingSplashParams_Statics::NewProp_RotationDeltaInDeg,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusFunctionLibrary_GetLoadingSplashParams_Statics::NewProp_RotationAxis,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusFunctionLibrary_GetLoadingSplashParams_Statics::NewProp_SizeInMeters,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusFunctionLibrary_GetLoadingSplashParams_Statics::NewProp_DistanceInMeters,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusFunctionLibrary_GetLoadingSplashParams_Statics::NewProp_TexturePath,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusFunctionLibrary_GetLoadingSplashParams_Statics::Function_MetaDataParams[] = {
		{ "Category", "OculusLibrary" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "UOculusFunctionLibrary::GetLoadingSplashParams has been deprecated and no longer functions as before. Please use the generic UStereoLayerFunctionLibrary instead." },
		{ "ModuleRelativePath", "Public/OculusFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusFunctionLibrary_GetLoadingSplashParams_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOculusFunctionLibrary, nullptr, "GetLoadingSplashParams", nullptr, nullptr, sizeof(OculusFunctionLibrary_eventGetLoadingSplashParams_Parms), Z_Construct_UFunction_UOculusFunctionLibrary_GetLoadingSplashParams_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusFunctionLibrary_GetLoadingSplashParams_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOculusFunctionLibrary_GetLoadingSplashParams_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusFunctionLibrary_GetLoadingSplashParams_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOculusFunctionLibrary_GetLoadingSplashParams()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOculusFunctionLibrary_GetLoadingSplashParams_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOculusFunctionLibrary_GetNodeGuardianIntersection_Statics
	{
		struct OculusFunctionLibrary_eventGetNodeGuardianIntersection_Parms
		{
			ETrackedDeviceType DeviceType;
			EBoundaryType BoundaryType;
			FGuardianTestResult ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_BoundaryType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_BoundaryType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DeviceType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DeviceType_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOculusFunctionLibrary_GetNodeGuardianIntersection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OculusFunctionLibrary_eventGetNodeGuardianIntersection_Parms, ReturnValue), Z_Construct_UScriptStruct_FGuardianTestResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOculusFunctionLibrary_GetNodeGuardianIntersection_Statics::NewProp_BoundaryType = { "BoundaryType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OculusFunctionLibrary_eventGetNodeGuardianIntersection_Parms, BoundaryType), Z_Construct_UEnum_OculusHMD_EBoundaryType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOculusFunctionLibrary_GetNodeGuardianIntersection_Statics::NewProp_BoundaryType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOculusFunctionLibrary_GetNodeGuardianIntersection_Statics::NewProp_DeviceType = { "DeviceType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OculusFunctionLibrary_eventGetNodeGuardianIntersection_Parms, DeviceType), Z_Construct_UEnum_OculusHMD_ETrackedDeviceType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOculusFunctionLibrary_GetNodeGuardianIntersection_Statics::NewProp_DeviceType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusFunctionLibrary_GetNodeGuardianIntersection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusFunctionLibrary_GetNodeGuardianIntersection_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusFunctionLibrary_GetNodeGuardianIntersection_Statics::NewProp_BoundaryType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusFunctionLibrary_GetNodeGuardianIntersection_Statics::NewProp_BoundaryType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusFunctionLibrary_GetNodeGuardianIntersection_Statics::NewProp_DeviceType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusFunctionLibrary_GetNodeGuardianIntersection_Statics::NewProp_DeviceType_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusFunctionLibrary_GetNodeGuardianIntersection_Statics::Function_MetaDataParams[] = {
		{ "Category", "OculusLibrary|Guardian" },
		{ "Comment", "/**\n\x09* Get the intersection result between a tracked device (HMD or controllers) and a guardian boundary\n\x09* @param DeviceType             (in) Tracked Device type to test against guardian boundaries\n\x09* @param BoundaryType\x09\x09\x09(in) An enum representing the boundary type requested, either Outer Boundary (exact guardian bounds) or PlayArea (rectangle inside the Outer Boundary)\n\x09*/" },
		{ "ModuleRelativePath", "Public/OculusFunctionLibrary.h" },
		{ "ToolTip", "Get the intersection result between a tracked device (HMD or controllers) and a guardian boundary\n@param DeviceType             (in) Tracked Device type to test against guardian boundaries\n@param BoundaryType                   (in) An enum representing the boundary type requested, either Outer Boundary (exact guardian bounds) or PlayArea (rectangle inside the Outer Boundary)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusFunctionLibrary_GetNodeGuardianIntersection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOculusFunctionLibrary, nullptr, "GetNodeGuardianIntersection", nullptr, nullptr, sizeof(OculusFunctionLibrary_eventGetNodeGuardianIntersection_Parms), Z_Construct_UFunction_UOculusFunctionLibrary_GetNodeGuardianIntersection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusFunctionLibrary_GetNodeGuardianIntersection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOculusFunctionLibrary_GetNodeGuardianIntersection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusFunctionLibrary_GetNodeGuardianIntersection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOculusFunctionLibrary_GetNodeGuardianIntersection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOculusFunctionLibrary_GetNodeGuardianIntersection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOculusFunctionLibrary_GetPlayAreaTransform_Statics
	{
		struct OculusFunctionLibrary_eventGetPlayAreaTransform_Parms
		{
			FTransform ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOculusFunctionLibrary_GetPlayAreaTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OculusFunctionLibrary_eventGetPlayAreaTransform_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusFunctionLibrary_GetPlayAreaTransform_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusFunctionLibrary_GetPlayAreaTransform_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusFunctionLibrary_GetPlayAreaTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "OculusLibrary|Guardian" },
		{ "Comment", "/**\n\x09* Returns the transform of the play area rectangle, defining its position, rotation and scale to apply to a unit cube to match it with the play area.\n\x09*/" },
		{ "ModuleRelativePath", "Public/OculusFunctionLibrary.h" },
		{ "ToolTip", "Returns the transform of the play area rectangle, defining its position, rotation and scale to apply to a unit cube to match it with the play area." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusFunctionLibrary_GetPlayAreaTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOculusFunctionLibrary, nullptr, "GetPlayAreaTransform", nullptr, nullptr, sizeof(OculusFunctionLibrary_eventGetPlayAreaTransform_Parms), Z_Construct_UFunction_UOculusFunctionLibrary_GetPlayAreaTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusFunctionLibrary_GetPlayAreaTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOculusFunctionLibrary_GetPlayAreaTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusFunctionLibrary_GetPlayAreaTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOculusFunctionLibrary_GetPlayAreaTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOculusFunctionLibrary_GetPlayAreaTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOculusFunctionLibrary_GetPointGuardianIntersection_Statics
	{
		struct OculusFunctionLibrary_eventGetPointGuardianIntersection_Parms
		{
			FVector Point;
			EBoundaryType BoundaryType;
			FGuardianTestResult ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_BoundaryType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_BoundaryType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Point_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Point;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOculusFunctionLibrary_GetPointGuardianIntersection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OculusFunctionLibrary_eventGetPointGuardianIntersection_Parms, ReturnValue), Z_Construct_UScriptStruct_FGuardianTestResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOculusFunctionLibrary_GetPointGuardianIntersection_Statics::NewProp_BoundaryType = { "BoundaryType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OculusFunctionLibrary_eventGetPointGuardianIntersection_Parms, BoundaryType), Z_Construct_UEnum_OculusHMD_EBoundaryType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOculusFunctionLibrary_GetPointGuardianIntersection_Statics::NewProp_BoundaryType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusFunctionLibrary_GetPointGuardianIntersection_Statics::NewProp_Point_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOculusFunctionLibrary_GetPointGuardianIntersection_Statics::NewProp_Point = { "Point", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OculusFunctionLibrary_eventGetPointGuardianIntersection_Parms, Point), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UOculusFunctionLibrary_GetPointGuardianIntersection_Statics::NewProp_Point_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusFunctionLibrary_GetPointGuardianIntersection_Statics::NewProp_Point_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusFunctionLibrary_GetPointGuardianIntersection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusFunctionLibrary_GetPointGuardianIntersection_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusFunctionLibrary_GetPointGuardianIntersection_Statics::NewProp_BoundaryType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusFunctionLibrary_GetPointGuardianIntersection_Statics::NewProp_BoundaryType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusFunctionLibrary_GetPointGuardianIntersection_Statics::NewProp_Point,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusFunctionLibrary_GetPointGuardianIntersection_Statics::Function_MetaDataParams[] = {
		{ "Category", "OculusLibrary|Guardian" },
		{ "Comment", "/**\n\x09* Get the intersection result between a UE4 coordinate and a guardian boundary\n\x09* @param Point\x09\x09\x09\x09\x09(in) Point in UE space to test against guardian boundaries\n\x09* @param BoundaryType\x09\x09\x09(in) An enum representing the boundary type requested, either Outer Boundary (exact guardian bounds) or PlayArea (rectangle inside the Outer Boundary)\n\x09*/" },
		{ "ModuleRelativePath", "Public/OculusFunctionLibrary.h" },
		{ "ToolTip", "Get the intersection result between a UE4 coordinate and a guardian boundary\n@param Point                                  (in) Point in UE space to test against guardian boundaries\n@param BoundaryType                   (in) An enum representing the boundary type requested, either Outer Boundary (exact guardian bounds) or PlayArea (rectangle inside the Outer Boundary)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusFunctionLibrary_GetPointGuardianIntersection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOculusFunctionLibrary, nullptr, "GetPointGuardianIntersection", nullptr, nullptr, sizeof(OculusFunctionLibrary_eventGetPointGuardianIntersection_Parms), Z_Construct_UFunction_UOculusFunctionLibrary_GetPointGuardianIntersection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusFunctionLibrary_GetPointGuardianIntersection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOculusFunctionLibrary_GetPointGuardianIntersection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusFunctionLibrary_GetPointGuardianIntersection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOculusFunctionLibrary_GetPointGuardianIntersection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOculusFunctionLibrary_GetPointGuardianIntersection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOculusFunctionLibrary_GetPose_Statics
	{
		struct OculusFunctionLibrary_eventGetPose_Parms
		{
			FRotator DeviceRotation;
			FVector DevicePosition;
			FVector NeckPosition;
			bool bUseOrienationForPlayerCamera;
			bool bUsePositionForPlayerCamera;
			FVector PositionScale;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PositionScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PositionScale;
		static void NewProp_bUsePositionForPlayerCamera_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUsePositionForPlayerCamera;
		static void NewProp_bUseOrienationForPlayerCamera_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseOrienationForPlayerCamera;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NeckPosition;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DevicePosition;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DeviceRotation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusFunctionLibrary_GetPose_Statics::NewProp_PositionScale_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOculusFunctionLibrary_GetPose_Statics::NewProp_PositionScale = { "PositionScale", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OculusFunctionLibrary_eventGetPose_Parms, PositionScale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UOculusFunctionLibrary_GetPose_Statics::NewProp_PositionScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusFunctionLibrary_GetPose_Statics::NewProp_PositionScale_MetaData)) };
	void Z_Construct_UFunction_UOculusFunctionLibrary_GetPose_Statics::NewProp_bUsePositionForPlayerCamera_SetBit(void* Obj)
	{
		((OculusFunctionLibrary_eventGetPose_Parms*)Obj)->bUsePositionForPlayerCamera = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOculusFunctionLibrary_GetPose_Statics::NewProp_bUsePositionForPlayerCamera = { "bUsePositionForPlayerCamera", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(OculusFunctionLibrary_eventGetPose_Parms), &Z_Construct_UFunction_UOculusFunctionLibrary_GetPose_Statics::NewProp_bUsePositionForPlayerCamera_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UOculusFunctionLibrary_GetPose_Statics::NewProp_bUseOrienationForPlayerCamera_SetBit(void* Obj)
	{
		((OculusFunctionLibrary_eventGetPose_Parms*)Obj)->bUseOrienationForPlayerCamera = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOculusFunctionLibrary_GetPose_Statics::NewProp_bUseOrienationForPlayerCamera = { "bUseOrienationForPlayerCamera", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(OculusFunctionLibrary_eventGetPose_Parms), &Z_Construct_UFunction_UOculusFunctionLibrary_GetPose_Statics::NewProp_bUseOrienationForPlayerCamera_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOculusFunctionLibrary_GetPose_Statics::NewProp_NeckPosition = { "NeckPosition", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OculusFunctionLibrary_eventGetPose_Parms, NeckPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOculusFunctionLibrary_GetPose_Statics::NewProp_DevicePosition = { "DevicePosition", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OculusFunctionLibrary_eventGetPose_Parms, DevicePosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOculusFunctionLibrary_GetPose_Statics::NewProp_DeviceRotation = { "DeviceRotation", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OculusFunctionLibrary_eventGetPose_Parms, DeviceRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusFunctionLibrary_GetPose_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusFunctionLibrary_GetPose_Statics::NewProp_PositionScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusFunctionLibrary_GetPose_Statics::NewProp_bUsePositionForPlayerCamera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusFunctionLibrary_GetPose_Statics::NewProp_bUseOrienationForPlayerCamera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusFunctionLibrary_GetPose_Statics::NewProp_NeckPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusFunctionLibrary_GetPose_Statics::NewProp_DevicePosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusFunctionLibrary_GetPose_Statics::NewProp_DeviceRotation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusFunctionLibrary_GetPose_Statics::Function_MetaDataParams[] = {
		{ "Category", "OculusLibrary" },
		{ "Comment", "/**\n\x09 * Grabs the current orientation and position for the HMD.  If positional tracking is not available, DevicePosition will be a zero vector\n\x09 *\n\x09 * @param DeviceRotation\x09(out) The device's current rotation\n\x09 * @param DevicePosition\x09(out) The device's current position, in its own tracking space\n\x09 * @param NeckPosition\x09\x09(out) The estimated neck position, calculated using NeckToEye vector from User Profile. Same coordinate space as DevicePosition.\n\x09 * @param bUseOrienationForPlayerCamera\x09(in) Should be set to 'true' if the orientation is going to be used to update orientation of the camera manually.\n\x09 * @param bUsePositionForPlayerCamera\x09(in) Should be set to 'true' if the position is going to be used to update position of the camera manually.\n\x09 * @param PositionScale\x09\x09(in) The 3D scale that will be applied to position.\n\x09 */" },
		{ "CPP_Default_bUseOrienationForPlayerCamera", "false" },
		{ "CPP_Default_bUsePositionForPlayerCamera", "false" },
		{ "CPP_Default_PositionScale", "" },
		{ "ModuleRelativePath", "Public/OculusFunctionLibrary.h" },
		{ "ToolTip", "Grabs the current orientation and position for the HMD.  If positional tracking is not available, DevicePosition will be a zero vector\n\n@param DeviceRotation        (out) The device's current rotation\n@param DevicePosition        (out) The device's current position, in its own tracking space\n@param NeckPosition          (out) The estimated neck position, calculated using NeckToEye vector from User Profile. Same coordinate space as DevicePosition.\n@param bUseOrienationForPlayerCamera (in) Should be set to 'true' if the orientation is going to be used to update orientation of the camera manually.\n@param bUsePositionForPlayerCamera   (in) Should be set to 'true' if the position is going to be used to update position of the camera manually.\n@param PositionScale         (in) The 3D scale that will be applied to position." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusFunctionLibrary_GetPose_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOculusFunctionLibrary, nullptr, "GetPose", nullptr, nullptr, sizeof(OculusFunctionLibrary_eventGetPose_Parms), Z_Construct_UFunction_UOculusFunctionLibrary_GetPose_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusFunctionLibrary_GetPose_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOculusFunctionLibrary_GetPose_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusFunctionLibrary_GetPose_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOculusFunctionLibrary_GetPose()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOculusFunctionLibrary_GetPose_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOculusFunctionLibrary_GetRawSensorData_Statics
	{
		struct OculusFunctionLibrary_eventGetRawSensorData_Parms
		{
			FVector AngularAcceleration;
			FVector LinearAcceleration;
			FVector AngularVelocity;
			FVector LinearVelocity;
			float TimeInSeconds;
			ETrackedDeviceType DeviceType;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DeviceType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DeviceType_Underlying;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeInSeconds;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LinearVelocity;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AngularVelocity;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LinearAcceleration;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AngularAcceleration;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOculusFunctionLibrary_GetRawSensorData_Statics::NewProp_DeviceType = { "DeviceType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OculusFunctionLibrary_eventGetRawSensorData_Parms, DeviceType), Z_Construct_UEnum_OculusHMD_ETrackedDeviceType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOculusFunctionLibrary_GetRawSensorData_Statics::NewProp_DeviceType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOculusFunctionLibrary_GetRawSensorData_Statics::NewProp_TimeInSeconds = { "TimeInSeconds", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OculusFunctionLibrary_eventGetRawSensorData_Parms, TimeInSeconds), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOculusFunctionLibrary_GetRawSensorData_Statics::NewProp_LinearVelocity = { "LinearVelocity", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OculusFunctionLibrary_eventGetRawSensorData_Parms, LinearVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOculusFunctionLibrary_GetRawSensorData_Statics::NewProp_AngularVelocity = { "AngularVelocity", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OculusFunctionLibrary_eventGetRawSensorData_Parms, AngularVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOculusFunctionLibrary_GetRawSensorData_Statics::NewProp_LinearAcceleration = { "LinearAcceleration", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OculusFunctionLibrary_eventGetRawSensorData_Parms, LinearAcceleration), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOculusFunctionLibrary_GetRawSensorData_Statics::NewProp_AngularAcceleration = { "AngularAcceleration", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OculusFunctionLibrary_eventGetRawSensorData_Parms, AngularAcceleration), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusFunctionLibrary_GetRawSensorData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusFunctionLibrary_GetRawSensorData_Statics::NewProp_DeviceType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusFunctionLibrary_GetRawSensorData_Statics::NewProp_DeviceType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusFunctionLibrary_GetRawSensorData_Statics::NewProp_TimeInSeconds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusFunctionLibrary_GetRawSensorData_Statics::NewProp_LinearVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusFunctionLibrary_GetRawSensorData_Statics::NewProp_AngularVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusFunctionLibrary_GetRawSensorData_Statics::NewProp_LinearAcceleration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusFunctionLibrary_GetRawSensorData_Statics::NewProp_AngularAcceleration,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusFunctionLibrary_GetRawSensorData_Statics::Function_MetaDataParams[] = {
		{ "Category", "OculusLibrary" },
		{ "Comment", "/**\n\x09* Reports raw sensor data. If HMD doesn't support any of the parameters then it will be set to zero.\n\x09*\n\x09* @param AngularAcceleration\x09(out) Angular acceleration in radians per second per second.\n\x09* @param LinearAcceleration\x09\x09(out) Acceleration in meters per second per second.\n\x09* @param AngularVelocity\x09\x09(out) Angular velocity in radians per second.\n\x09* @param LinearVelocity\x09\x09\x09(out) Velocity in meters per second.\n\x09* @param TimeInSeconds\x09\x09\x09(out) Time when the reported IMU reading took place, in seconds.\n\x09*/" },
		{ "CPP_Default_DeviceType", "HMD" },
		{ "ModuleRelativePath", "Public/OculusFunctionLibrary.h" },
		{ "ToolTip", "Reports raw sensor data. If HMD doesn't support any of the parameters then it will be set to zero.\n\n@param AngularAcceleration    (out) Angular acceleration in radians per second per second.\n@param LinearAcceleration             (out) Acceleration in meters per second per second.\n@param AngularVelocity                (out) Angular velocity in radians per second.\n@param LinearVelocity                 (out) Velocity in meters per second.\n@param TimeInSeconds                  (out) Time when the reported IMU reading took place, in seconds." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusFunctionLibrary_GetRawSensorData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOculusFunctionLibrary, nullptr, "GetRawSensorData", nullptr, nullptr, sizeof(OculusFunctionLibrary_eventGetRawSensorData_Parms), Z_Construct_UFunction_UOculusFunctionLibrary_GetRawSensorData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusFunctionLibrary_GetRawSensorData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOculusFunctionLibrary_GetRawSensorData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusFunctionLibrary_GetRawSensorData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOculusFunctionLibrary_GetRawSensorData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOculusFunctionLibrary_GetRawSensorData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOculusFunctionLibrary_GetUserProfile_Statics
	{
		struct OculusFunctionLibrary_eventGetUserProfile_Parms
		{
			FHmdUserProfile Profile;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Profile;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UOculusFunctionLibrary_GetUserProfile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OculusFunctionLibrary_eventGetUserProfile_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOculusFunctionLibrary_GetUserProfile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(OculusFunctionLibrary_eventGetUserProfile_Parms), &Z_Construct_UFunction_UOculusFunctionLibrary_GetUserProfile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOculusFunctionLibrary_GetUserProfile_Statics::NewProp_Profile = { "Profile", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OculusFunctionLibrary_eventGetUserProfile_Parms, Profile), Z_Construct_UScriptStruct_FHmdUserProfile, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusFunctionLibrary_GetUserProfile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusFunctionLibrary_GetUserProfile_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusFunctionLibrary_GetUserProfile_Statics::NewProp_Profile,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusFunctionLibrary_GetUserProfile_Statics::Function_MetaDataParams[] = {
		{ "Category", "OculusLibrary" },
		{ "Comment", "/**\n\x09* Returns current user profile.\n\x09*\n\x09* @param Profile\x09\x09(out) Structure to hold current user profile.\n\x09* @return (boolean)\x09True, if user profile was acquired.\n\x09*/" },
		{ "ModuleRelativePath", "Public/OculusFunctionLibrary.h" },
		{ "ToolTip", "Returns current user profile.\n\n@param Profile                (out) Structure to hold current user profile.\n@return (boolean)     True, if user profile was acquired." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusFunctionLibrary_GetUserProfile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOculusFunctionLibrary, nullptr, "GetUserProfile", nullptr, nullptr, sizeof(OculusFunctionLibrary_eventGetUserProfile_Parms), Z_Construct_UFunction_UOculusFunctionLibrary_GetUserProfile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusFunctionLibrary_GetUserProfile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOculusFunctionLibrary_GetUserProfile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusFunctionLibrary_GetUserProfile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOculusFunctionLibrary_GetUserProfile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOculusFunctionLibrary_GetUserProfile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOculusFunctionLibrary_HasInputFocus_Statics
	{
		struct OculusFunctionLibrary_eventHasInputFocus_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UOculusFunctionLibrary_HasInputFocus_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OculusFunctionLibrary_eventHasInputFocus_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOculusFunctionLibrary_HasInputFocus_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(OculusFunctionLibrary_eventHasInputFocus_Parms), &Z_Construct_UFunction_UOculusFunctionLibrary_HasInputFocus_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusFunctionLibrary_HasInputFocus_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusFunctionLibrary_HasInputFocus_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusFunctionLibrary_HasInputFocus_Statics::Function_MetaDataParams[] = {
		{ "Category", "OculusLibrary" },
		{ "Comment", "/**\n\x09* Returns true, if the app has input focus.\n\x09*/" },
		{ "ModuleRelativePath", "Public/OculusFunctionLibrary.h" },
		{ "ToolTip", "Returns true, if the app has input focus." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusFunctionLibrary_HasInputFocus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOculusFunctionLibrary, nullptr, "HasInputFocus", nullptr, nullptr, sizeof(OculusFunctionLibrary_eventHasInputFocus_Parms), Z_Construct_UFunction_UOculusFunctionLibrary_HasInputFocus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusFunctionLibrary_HasInputFocus_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOculusFunctionLibrary_HasInputFocus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusFunctionLibrary_HasInputFocus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOculusFunctionLibrary_HasInputFocus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOculusFunctionLibrary_HasInputFocus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOculusFunctionLibrary_HasSystemOverlayPresent_Statics
	{
		struct OculusFunctionLibrary_eventHasSystemOverlayPresent_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UOculusFunctionLibrary_HasSystemOverlayPresent_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OculusFunctionLibrary_eventHasSystemOverlayPresent_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOculusFunctionLibrary_HasSystemOverlayPresent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(OculusFunctionLibrary_eventHasSystemOverlayPresent_Parms), &Z_Construct_UFunction_UOculusFunctionLibrary_HasSystemOverlayPresent_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusFunctionLibrary_HasSystemOverlayPresent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusFunctionLibrary_HasSystemOverlayPresent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusFunctionLibrary_HasSystemOverlayPresent_Statics::Function_MetaDataParams[] = {
		{ "Category", "OculusLibrary" },
		{ "Comment", "/**\n\x09* Returns true, if the system overlay is present.\n\x09*/" },
		{ "ModuleRelativePath", "Public/OculusFunctionLibrary.h" },
		{ "ToolTip", "Returns true, if the system overlay is present." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusFunctionLibrary_HasSystemOverlayPresent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOculusFunctionLibrary, nullptr, "HasSystemOverlayPresent", nullptr, nullptr, sizeof(OculusFunctionLibrary_eventHasSystemOverlayPresent_Parms), Z_Construct_UFunction_UOculusFunctionLibrary_HasSystemOverlayPresent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusFunctionLibrary_HasSystemOverlayPresent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOculusFunctionLibrary_HasSystemOverlayPresent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusFunctionLibrary_HasSystemOverlayPresent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOculusFunctionLibrary_HasSystemOverlayPresent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOculusFunctionLibrary_HasSystemOverlayPresent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOculusFunctionLibrary_HideLoadingIcon_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusFunctionLibrary_HideLoadingIcon_Statics::Function_MetaDataParams[] = {
		{ "Category", "OculusLibrary" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "UOculusFunctionLibrary::HideLoadingIcon has been deprecated and no longer functions as before. Please use the generic UStereoLayerFunctionLibrary instead." },
		{ "ModuleRelativePath", "Public/OculusFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusFunctionLibrary_HideLoadingIcon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOculusFunctionLibrary, nullptr, "HideLoadingIcon", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOculusFunctionLibrary_HideLoadingIcon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusFunctionLibrary_HideLoadingIcon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOculusFunctionLibrary_HideLoadingIcon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOculusFunctionLibrary_HideLoadingIcon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOculusFunctionLibrary_HideLoadingSplashScreen_Statics
	{
		struct OculusFunctionLibrary_eventHideLoadingSplashScreen_Parms
		{
			bool bClear;
		};
		static void NewProp_bClear_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bClear;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UOculusFunctionLibrary_HideLoadingSplashScreen_Statics::NewProp_bClear_SetBit(void* Obj)
	{
		((OculusFunctionLibrary_eventHideLoadingSplashScreen_Parms*)Obj)->bClear = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOculusFunctionLibrary_HideLoadingSplashScreen_Statics::NewProp_bClear = { "bClear", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(OculusFunctionLibrary_eventHideLoadingSplashScreen_Parms), &Z_Construct_UFunction_UOculusFunctionLibrary_HideLoadingSplashScreen_Statics::NewProp_bClear_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusFunctionLibrary_HideLoadingSplashScreen_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusFunctionLibrary_HideLoadingSplashScreen_Statics::NewProp_bClear,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusFunctionLibrary_HideLoadingSplashScreen_Statics::Function_MetaDataParams[] = {
		{ "Category", "OculusLibrary" },
		{ "CPP_Default_bClear", "false" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "UOculusFunctionLibrary::HideLoadingSplashScreen has been deprecated and no longer functions as before.  Use the generic UStereoLayerFunctionLibrary::HideSplashScreen instead" },
		{ "ModuleRelativePath", "Public/OculusFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusFunctionLibrary_HideLoadingSplashScreen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOculusFunctionLibrary, nullptr, "HideLoadingSplashScreen", nullptr, nullptr, sizeof(OculusFunctionLibrary_eventHideLoadingSplashScreen_Parms), Z_Construct_UFunction_UOculusFunctionLibrary_HideLoadingSplashScreen_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusFunctionLibrary_HideLoadingSplashScreen_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOculusFunctionLibrary_HideLoadingSplashScreen_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusFunctionLibrary_HideLoadingSplashScreen_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOculusFunctionLibrary_HideLoadingSplashScreen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOculusFunctionLibrary_HideLoadingSplashScreen_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOculusFunctionLibrary_IsAutoLoadingSplashScreenEnabled_Statics
	{
		struct OculusFunctionLibrary_eventIsAutoLoadingSplashScreenEnabled_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UOculusFunctionLibrary_IsAutoLoadingSplashScreenEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OculusFunctionLibrary_eventIsAutoLoadingSplashScreenEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOculusFunctionLibrary_IsAutoLoadingSplashScreenEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(OculusFunctionLibrary_eventIsAutoLoadingSplashScreenEnabled_Parms), &Z_Construct_UFunction_UOculusFunctionLibrary_IsAutoLoadingSplashScreenEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusFunctionLibrary_IsAutoLoadingSplashScreenEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusFunctionLibrary_IsAutoLoadingSplashScreenEnabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusFunctionLibrary_IsAutoLoadingSplashScreenEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "OculusLibrary" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "UOculusFunctionLibrary::IsAutoLoadingSplashScreenEnabled has been deprecated and no longer functions as before. Please use the generic UStereoLayerFunctionLibrary instead." },
		{ "ModuleRelativePath", "Public/OculusFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusFunctionLibrary_IsAutoLoadingSplashScreenEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOculusFunctionLibrary, nullptr, "IsAutoLoadingSplashScreenEnabled", nullptr, nullptr, sizeof(OculusFunctionLibrary_eventIsAutoLoadingSplashScreenEnabled_Parms), Z_Construct_UFunction_UOculusFunctionLibrary_IsAutoLoadingSplashScreenEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusFunctionLibrary_IsAutoLoadingSplashScreenEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOculusFunctionLibrary_IsAutoLoadingSplashScreenEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusFunctionLibrary_IsAutoLoadingSplashScreenEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOculusFunctionLibrary_IsAutoLoadingSplashScreenEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOculusFunctionLibrary_IsAutoLoadingSplashScreenEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOculusFunctionLibrary_IsDeviceTracked_Statics
	{
		struct OculusFunctionLibrary_eventIsDeviceTracked_Parms
		{
			ETrackedDeviceType DeviceType;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DeviceType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DeviceType_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UOculusFunctionLibrary_IsDeviceTracked_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OculusFunctionLibrary_eventIsDeviceTracked_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOculusFunctionLibrary_IsDeviceTracked_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(OculusFunctionLibrary_eventIsDeviceTracked_Parms), &Z_Construct_UFunction_UOculusFunctionLibrary_IsDeviceTracked_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOculusFunctionLibrary_IsDeviceTracked_Statics::NewProp_DeviceType = { "DeviceType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OculusFunctionLibrary_eventIsDeviceTracked_Parms, DeviceType), Z_Construct_UEnum_OculusHMD_ETrackedDeviceType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOculusFunctionLibrary_IsDeviceTracked_Statics::NewProp_DeviceType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusFunctionLibrary_IsDeviceTracked_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusFunctionLibrary_IsDeviceTracked_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusFunctionLibrary_IsDeviceTracked_Statics::NewProp_DeviceType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusFunctionLibrary_IsDeviceTracked_Statics::NewProp_DeviceType_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusFunctionLibrary_IsDeviceTracked_Statics::Function_MetaDataParams[] = {
		{ "Category", "OculusLibrary" },
		{ "Comment", "/**\n\x09* Returns if the device is currently tracked by the runtime or not.\n\x09*/" },
		{ "ModuleRelativePath", "Public/OculusFunctionLibrary.h" },
		{ "ToolTip", "Returns if the device is currently tracked by the runtime or not." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusFunctionLibrary_IsDeviceTracked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOculusFunctionLibrary, nullptr, "IsDeviceTracked", nullptr, nullptr, sizeof(OculusFunctionLibrary_eventIsDeviceTracked_Parms), Z_Construct_UFunction_UOculusFunctionLibrary_IsDeviceTracked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusFunctionLibrary_IsDeviceTracked_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOculusFunctionLibrary_IsDeviceTracked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusFunctionLibrary_IsDeviceTracked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOculusFunctionLibrary_IsDeviceTracked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOculusFunctionLibrary_IsDeviceTracked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOculusFunctionLibrary_IsGuardianConfigured_Statics
	{
		struct OculusFunctionLibrary_eventIsGuardianConfigured_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UOculusFunctionLibrary_IsGuardianConfigured_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OculusFunctionLibrary_eventIsGuardianConfigured_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOculusFunctionLibrary_IsGuardianConfigured_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(OculusFunctionLibrary_eventIsGuardianConfigured_Parms), &Z_Construct_UFunction_UOculusFunctionLibrary_IsGuardianConfigured_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusFunctionLibrary_IsGuardianConfigured_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusFunctionLibrary_IsGuardianConfigured_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusFunctionLibrary_IsGuardianConfigured_Statics::Function_MetaDataParams[] = {
		{ "Category", "OculusLibrary|Guardian" },
		{ "Comment", "/**\n\x09* Returns true if the Guardian has been set up by the user, false if the user is in \"seated\" mode and has not set up a play space.\n\x09*/" },
		{ "ModuleRelativePath", "Public/OculusFunctionLibrary.h" },
		{ "ToolTip", "Returns true if the Guardian has been set up by the user, false if the user is in \"seated\" mode and has not set up a play space." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusFunctionLibrary_IsGuardianConfigured_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOculusFunctionLibrary, nullptr, "IsGuardianConfigured", nullptr, nullptr, sizeof(OculusFunctionLibrary_eventIsGuardianConfigured_Parms), Z_Construct_UFunction_UOculusFunctionLibrary_IsGuardianConfigured_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusFunctionLibrary_IsGuardianConfigured_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOculusFunctionLibrary_IsGuardianConfigured_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusFunctionLibrary_IsGuardianConfigured_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOculusFunctionLibrary_IsGuardianConfigured()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOculusFunctionLibrary_IsGuardianConfigured_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOculusFunctionLibrary_IsGuardianDisplayed_Statics
	{
		struct OculusFunctionLibrary_eventIsGuardianDisplayed_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UOculusFunctionLibrary_IsGuardianDisplayed_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OculusFunctionLibrary_eventIsGuardianDisplayed_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOculusFunctionLibrary_IsGuardianDisplayed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(OculusFunctionLibrary_eventIsGuardianDisplayed_Parms), &Z_Construct_UFunction_UOculusFunctionLibrary_IsGuardianDisplayed_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusFunctionLibrary_IsGuardianDisplayed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusFunctionLibrary_IsGuardianDisplayed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusFunctionLibrary_IsGuardianDisplayed_Statics::Function_MetaDataParams[] = {
		{ "Category", "OculusLibrary|Guardian" },
		{ "Comment", "/**\n\x09* Returns true if the Guardian Outer Boundary is being displayed\n\x09*/" },
		{ "ModuleRelativePath", "Public/OculusFunctionLibrary.h" },
		{ "ToolTip", "Returns true if the Guardian Outer Boundary is being displayed" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusFunctionLibrary_IsGuardianDisplayed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOculusFunctionLibrary, nullptr, "IsGuardianDisplayed", nullptr, nullptr, sizeof(OculusFunctionLibrary_eventIsGuardianDisplayed_Parms), Z_Construct_UFunction_UOculusFunctionLibrary_IsGuardianDisplayed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusFunctionLibrary_IsGuardianDisplayed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOculusFunctionLibrary_IsGuardianDisplayed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusFunctionLibrary_IsGuardianDisplayed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOculusFunctionLibrary_IsGuardianDisplayed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOculusFunctionLibrary_IsGuardianDisplayed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOculusFunctionLibrary_IsLoadingIconEnabled_Statics
	{
		struct OculusFunctionLibrary_eventIsLoadingIconEnabled_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UOculusFunctionLibrary_IsLoadingIconEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OculusFunctionLibrary_eventIsLoadingIconEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOculusFunctionLibrary_IsLoadingIconEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(OculusFunctionLibrary_eventIsLoadingIconEnabled_Parms), &Z_Construct_UFunction_UOculusFunctionLibrary_IsLoadingIconEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusFunctionLibrary_IsLoadingIconEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusFunctionLibrary_IsLoadingIconEnabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusFunctionLibrary_IsLoadingIconEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "OculusLibrary" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "UOculusFunctionLibrary::IsLoadingIconEnabled has been deprecated and no longer functions as before. Please use the generic UStereoLayerFunctionLibrary instead." },
		{ "ModuleRelativePath", "Public/OculusFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusFunctionLibrary_IsLoadingIconEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOculusFunctionLibrary, nullptr, "IsLoadingIconEnabled", nullptr, nullptr, sizeof(OculusFunctionLibrary_eventIsLoadingIconEnabled_Parms), Z_Construct_UFunction_UOculusFunctionLibrary_IsLoadingIconEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusFunctionLibrary_IsLoadingIconEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOculusFunctionLibrary_IsLoadingIconEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusFunctionLibrary_IsLoadingIconEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOculusFunctionLibrary_IsLoadingIconEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOculusFunctionLibrary_IsLoadingIconEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOculusFunctionLibrary_SetBaseRotationAndBaseOffsetInMeters_Statics
	{
		struct OculusFunctionLibrary_eventSetBaseRotationAndBaseOffsetInMeters_Parms
		{
			FRotator Rotation;
			FVector BaseOffsetInMeters;
			TEnumAsByte<EOrientPositionSelector::Type> Options;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Options;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BaseOffsetInMeters;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Rotation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOculusFunctionLibrary_SetBaseRotationAndBaseOffsetInMeters_Statics::NewProp_Options = { "Options", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OculusFunctionLibrary_eventSetBaseRotationAndBaseOffsetInMeters_Parms, Options), Z_Construct_UEnum_HeadMountedDisplay_EOrientPositionSelector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOculusFunctionLibrary_SetBaseRotationAndBaseOffsetInMeters_Statics::NewProp_BaseOffsetInMeters = { "BaseOffsetInMeters", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OculusFunctionLibrary_eventSetBaseRotationAndBaseOffsetInMeters_Parms, BaseOffsetInMeters), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOculusFunctionLibrary_SetBaseRotationAndBaseOffsetInMeters_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OculusFunctionLibrary_eventSetBaseRotationAndBaseOffsetInMeters_Parms, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusFunctionLibrary_SetBaseRotationAndBaseOffsetInMeters_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusFunctionLibrary_SetBaseRotationAndBaseOffsetInMeters_Statics::NewProp_Options,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusFunctionLibrary_SetBaseRotationAndBaseOffsetInMeters_Statics::NewProp_BaseOffsetInMeters,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusFunctionLibrary_SetBaseRotationAndBaseOffsetInMeters_Statics::NewProp_Rotation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusFunctionLibrary_SetBaseRotationAndBaseOffsetInMeters_Statics::Function_MetaDataParams[] = {
		{ "Category", "OculusLibrary" },
		{ "Comment", "/**\n\x09* Sets 'base rotation' - the rotation that will be subtracted from\n\x09* the actual HMD orientation.\n\x09* Sets base position offset (in meters). The base position offset is the distance from the physical (0, 0, 0) position\n\x09* to current HMD position (bringing the (0, 0, 0) point to the current HMD position)\n\x09* Note, this vector is set by ResetPosition call; use this method with care.\n\x09* The axis of the vector are the same as in Unreal: X - forward, Y - right, Z - up.\n\x09*\n\x09* @param Rotation\x09\x09\x09(in) Rotator object with base rotation\n\x09* @param BaseOffsetInMeters (in) the vector to be set as base offset, in meters.\n\x09* @param Options\x09\x09\x09(in) specifies either position, orientation or both should be set.\n\x09*/" },
		{ "ModuleRelativePath", "Public/OculusFunctionLibrary.h" },
		{ "ToolTip", "Sets 'base rotation' - the rotation that will be subtracted from\nthe actual HMD orientation.\nSets base position offset (in meters). The base position offset is the distance from the physical (0, 0, 0) position\nto current HMD position (bringing the (0, 0, 0) point to the current HMD position)\nNote, this vector is set by ResetPosition call; use this method with care.\nThe axis of the vector are the same as in Unreal: X - forward, Y - right, Z - up.\n\n@param Rotation                       (in) Rotator object with base rotation\n@param BaseOffsetInMeters (in) the vector to be set as base offset, in meters.\n@param Options                        (in) specifies either position, orientation or both should be set." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusFunctionLibrary_SetBaseRotationAndBaseOffsetInMeters_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOculusFunctionLibrary, nullptr, "SetBaseRotationAndBaseOffsetInMeters", nullptr, nullptr, sizeof(OculusFunctionLibrary_eventSetBaseRotationAndBaseOffsetInMeters_Parms), Z_Construct_UFunction_UOculusFunctionLibrary_SetBaseRotationAndBaseOffsetInMeters_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusFunctionLibrary_SetBaseRotationAndBaseOffsetInMeters_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOculusFunctionLibrary_SetBaseRotationAndBaseOffsetInMeters_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusFunctionLibrary_SetBaseRotationAndBaseOffsetInMeters_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOculusFunctionLibrary_SetBaseRotationAndBaseOffsetInMeters()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOculusFunctionLibrary_SetBaseRotationAndBaseOffsetInMeters_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOculusFunctionLibrary_SetBaseRotationAndPositionOffset_Statics
	{
		struct OculusFunctionLibrary_eventSetBaseRotationAndPositionOffset_Parms
		{
			FRotator BaseRot;
			FVector PosOffset;
			TEnumAsByte<EOrientPositionSelector::Type> Options;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Options;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PosOffset;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BaseRot;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOculusFunctionLibrary_SetBaseRotationAndPositionOffset_Statics::NewProp_Options = { "Options", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OculusFunctionLibrary_eventSetBaseRotationAndPositionOffset_Parms, Options), Z_Construct_UEnum_HeadMountedDisplay_EOrientPositionSelector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOculusFunctionLibrary_SetBaseRotationAndPositionOffset_Statics::NewProp_PosOffset = { "PosOffset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OculusFunctionLibrary_eventSetBaseRotationAndPositionOffset_Parms, PosOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOculusFunctionLibrary_SetBaseRotationAndPositionOffset_Statics::NewProp_BaseRot = { "BaseRot", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OculusFunctionLibrary_eventSetBaseRotationAndPositionOffset_Parms, BaseRot), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusFunctionLibrary_SetBaseRotationAndPositionOffset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusFunctionLibrary_SetBaseRotationAndPositionOffset_Statics::NewProp_Options,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusFunctionLibrary_SetBaseRotationAndPositionOffset_Statics::NewProp_PosOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusFunctionLibrary_SetBaseRotationAndPositionOffset_Statics::NewProp_BaseRot,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusFunctionLibrary_SetBaseRotationAndPositionOffset_Statics::Function_MetaDataParams[] = {
		{ "Category", "OculusLibrary" },
		{ "Comment", "/**\n\x09 * Sets 'base rotation' - the rotation that will be subtracted from\n\x09 * the actual HMD orientation.\n\x09 * The position offset might be added to current HMD position,\n\x09 * effectively moving the virtual camera by the specified offset. The addition\n\x09 * occurs after the HMD orientation and position are applied.\n\x09 *\n\x09 * @param BaseRot\x09\x09\x09(in) Rotator object with base rotation\n\x09 * @param PosOffset\x09\x09\x09(in) the vector to be added to HMD position.\n\x09 * @param Options\x09\x09\x09(in) specifies either position, orientation or both should be set.\n\x09 */" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "A hack, proper camera positioning should be used" },
		{ "ModuleRelativePath", "Public/OculusFunctionLibrary.h" },
		{ "ToolTip", "Sets 'base rotation' - the rotation that will be subtracted from\nthe actual HMD orientation.\nThe position offset might be added to current HMD position,\neffectively moving the virtual camera by the specified offset. The addition\noccurs after the HMD orientation and position are applied.\n\n@param BaseRot                       (in) Rotator object with base rotation\n@param PosOffset                     (in) the vector to be added to HMD position.\n@param Options                       (in) specifies either position, orientation or both should be set." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusFunctionLibrary_SetBaseRotationAndPositionOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOculusFunctionLibrary, nullptr, "SetBaseRotationAndPositionOffset", nullptr, nullptr, sizeof(OculusFunctionLibrary_eventSetBaseRotationAndPositionOffset_Parms), Z_Construct_UFunction_UOculusFunctionLibrary_SetBaseRotationAndPositionOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusFunctionLibrary_SetBaseRotationAndPositionOffset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOculusFunctionLibrary_SetBaseRotationAndPositionOffset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusFunctionLibrary_SetBaseRotationAndPositionOffset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOculusFunctionLibrary_SetBaseRotationAndPositionOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOculusFunctionLibrary_SetBaseRotationAndPositionOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOculusFunctionLibrary_SetColorScaleAndOffset_Statics
	{
		struct OculusFunctionLibrary_eventSetColorScaleAndOffset_Parms
		{
			FLinearColor ColorScale;
			FLinearColor ColorOffset;
			bool bApplyToAllLayers;
		};
		static void NewProp_bApplyToAllLayers_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bApplyToAllLayers;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ColorOffset;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ColorScale;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UOculusFunctionLibrary_SetColorScaleAndOffset_Statics::NewProp_bApplyToAllLayers_SetBit(void* Obj)
	{
		((OculusFunctionLibrary_eventSetColorScaleAndOffset_Parms*)Obj)->bApplyToAllLayers = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOculusFunctionLibrary_SetColorScaleAndOffset_Statics::NewProp_bApplyToAllLayers = { "bApplyToAllLayers", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(OculusFunctionLibrary_eventSetColorScaleAndOffset_Parms), &Z_Construct_UFunction_UOculusFunctionLibrary_SetColorScaleAndOffset_Statics::NewProp_bApplyToAllLayers_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOculusFunctionLibrary_SetColorScaleAndOffset_Statics::NewProp_ColorOffset = { "ColorOffset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OculusFunctionLibrary_eventSetColorScaleAndOffset_Parms, ColorOffset), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOculusFunctionLibrary_SetColorScaleAndOffset_Statics::NewProp_ColorScale = { "ColorScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OculusFunctionLibrary_eventSetColorScaleAndOffset_Parms, ColorScale), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusFunctionLibrary_SetColorScaleAndOffset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusFunctionLibrary_SetColorScaleAndOffset_Statics::NewProp_bApplyToAllLayers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusFunctionLibrary_SetColorScaleAndOffset_Statics::NewProp_ColorOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusFunctionLibrary_SetColorScaleAndOffset_Statics::NewProp_ColorScale,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusFunctionLibrary_SetColorScaleAndOffset_Statics::Function_MetaDataParams[] = {
		{ "Category", "OculusLibrary" },
		{ "Comment", "/**\n\x09* Enables/disables orientation tracking on devices that support it.\n\x09*/" },
		{ "CPP_Default_bApplyToAllLayers", "false" },
		{ "ModuleRelativePath", "Public/OculusFunctionLibrary.h" },
		{ "ToolTip", "Enables/disables orientation tracking on devices that support it." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusFunctionLibrary_SetColorScaleAndOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOculusFunctionLibrary, nullptr, "SetColorScaleAndOffset", nullptr, nullptr, sizeof(OculusFunctionLibrary_eventSetColorScaleAndOffset_Parms), Z_Construct_UFunction_UOculusFunctionLibrary_SetColorScaleAndOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusFunctionLibrary_SetColorScaleAndOffset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOculusFunctionLibrary_SetColorScaleAndOffset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusFunctionLibrary_SetColorScaleAndOffset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOculusFunctionLibrary_SetColorScaleAndOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOculusFunctionLibrary_SetColorScaleAndOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOculusFunctionLibrary_SetCPUAndGPULevels_Statics
	{
		struct OculusFunctionLibrary_eventSetCPUAndGPULevels_Parms
		{
			int32 CPULevel;
			int32 GPULevel;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_GPULevel;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_CPULevel;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UOculusFunctionLibrary_SetCPUAndGPULevels_Statics::NewProp_GPULevel = { "GPULevel", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OculusFunctionLibrary_eventSetCPUAndGPULevels_Parms, GPULevel), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UOculusFunctionLibrary_SetCPUAndGPULevels_Statics::NewProp_CPULevel = { "CPULevel", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OculusFunctionLibrary_eventSetCPUAndGPULevels_Parms, CPULevel), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusFunctionLibrary_SetCPUAndGPULevels_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusFunctionLibrary_SetCPUAndGPULevels_Statics::NewProp_GPULevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusFunctionLibrary_SetCPUAndGPULevels_Statics::NewProp_CPULevel,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusFunctionLibrary_SetCPUAndGPULevels_Statics::Function_MetaDataParams[] = {
		{ "Category", "OculusLibrary" },
		{ "Comment", "/**\n\x09* Returns if the device is currently tracked by the runtime or not.\n\x09*/" },
		{ "ModuleRelativePath", "Public/OculusFunctionLibrary.h" },
		{ "ToolTip", "Returns if the device is currently tracked by the runtime or not." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusFunctionLibrary_SetCPUAndGPULevels_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOculusFunctionLibrary, nullptr, "SetCPUAndGPULevels", nullptr, nullptr, sizeof(OculusFunctionLibrary_eventSetCPUAndGPULevels_Parms), Z_Construct_UFunction_UOculusFunctionLibrary_SetCPUAndGPULevels_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusFunctionLibrary_SetCPUAndGPULevels_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOculusFunctionLibrary_SetCPUAndGPULevels_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusFunctionLibrary_SetCPUAndGPULevels_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOculusFunctionLibrary_SetCPUAndGPULevels()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOculusFunctionLibrary_SetCPUAndGPULevels_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOculusFunctionLibrary_SetDisplayFrequency_Statics
	{
		struct OculusFunctionLibrary_eventSetDisplayFrequency_Parms
		{
			float RequestedFrequency;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RequestedFrequency;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOculusFunctionLibrary_SetDisplayFrequency_Statics::NewProp_RequestedFrequency = { "RequestedFrequency", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OculusFunctionLibrary_eventSetDisplayFrequency_Parms, RequestedFrequency), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusFunctionLibrary_SetDisplayFrequency_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusFunctionLibrary_SetDisplayFrequency_Statics::NewProp_RequestedFrequency,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusFunctionLibrary_SetDisplayFrequency_Statics::Function_MetaDataParams[] = {
		{ "Category", "OculusLibrary" },
		{ "Comment", "/**\n\x09* Sets the requested display frequency\n\x09*/" },
		{ "ModuleRelativePath", "Public/OculusFunctionLibrary.h" },
		{ "ToolTip", "Sets the requested display frequency" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusFunctionLibrary_SetDisplayFrequency_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOculusFunctionLibrary, nullptr, "SetDisplayFrequency", nullptr, nullptr, sizeof(OculusFunctionLibrary_eventSetDisplayFrequency_Parms), Z_Construct_UFunction_UOculusFunctionLibrary_SetDisplayFrequency_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusFunctionLibrary_SetDisplayFrequency_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOculusFunctionLibrary_SetDisplayFrequency_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusFunctionLibrary_SetDisplayFrequency_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOculusFunctionLibrary_SetDisplayFrequency()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOculusFunctionLibrary_SetDisplayFrequency_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOculusFunctionLibrary_SetFixedFoveatedRenderingLevel_Statics
	{
		struct OculusFunctionLibrary_eventSetFixedFoveatedRenderingLevel_Parms
		{
			EFixedFoveatedRenderingLevel level;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_level;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_level_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOculusFunctionLibrary_SetFixedFoveatedRenderingLevel_Statics::NewProp_level = { "level", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OculusFunctionLibrary_eventSetFixedFoveatedRenderingLevel_Parms, level), Z_Construct_UEnum_OculusHMD_EFixedFoveatedRenderingLevel, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOculusFunctionLibrary_SetFixedFoveatedRenderingLevel_Statics::NewProp_level_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusFunctionLibrary_SetFixedFoveatedRenderingLevel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusFunctionLibrary_SetFixedFoveatedRenderingLevel_Statics::NewProp_level,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusFunctionLibrary_SetFixedFoveatedRenderingLevel_Statics::NewProp_level_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusFunctionLibrary_SetFixedFoveatedRenderingLevel_Statics::Function_MetaDataParams[] = {
		{ "Category", "OculusLibrary" },
		{ "Comment", "/**\n\x09* Set the requested multiresolution level for the next frame\n\x09*/" },
		{ "ModuleRelativePath", "Public/OculusFunctionLibrary.h" },
		{ "ToolTip", "Set the requested multiresolution level for the next frame" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusFunctionLibrary_SetFixedFoveatedRenderingLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOculusFunctionLibrary, nullptr, "SetFixedFoveatedRenderingLevel", nullptr, nullptr, sizeof(OculusFunctionLibrary_eventSetFixedFoveatedRenderingLevel_Parms), Z_Construct_UFunction_UOculusFunctionLibrary_SetFixedFoveatedRenderingLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusFunctionLibrary_SetFixedFoveatedRenderingLevel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOculusFunctionLibrary_SetFixedFoveatedRenderingLevel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusFunctionLibrary_SetFixedFoveatedRenderingLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOculusFunctionLibrary_SetFixedFoveatedRenderingLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOculusFunctionLibrary_SetFixedFoveatedRenderingLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOculusFunctionLibrary_SetGuardianVisibility_Statics
	{
		struct OculusFunctionLibrary_eventSetGuardianVisibility_Parms
		{
			bool GuardianVisible;
		};
		static void NewProp_GuardianVisible_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_GuardianVisible;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UOculusFunctionLibrary_SetGuardianVisibility_Statics::NewProp_GuardianVisible_SetBit(void* Obj)
	{
		((OculusFunctionLibrary_eventSetGuardianVisibility_Parms*)Obj)->GuardianVisible = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOculusFunctionLibrary_SetGuardianVisibility_Statics::NewProp_GuardianVisible = { "GuardianVisible", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(OculusFunctionLibrary_eventSetGuardianVisibility_Parms), &Z_Construct_UFunction_UOculusFunctionLibrary_SetGuardianVisibility_Statics::NewProp_GuardianVisible_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusFunctionLibrary_SetGuardianVisibility_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusFunctionLibrary_SetGuardianVisibility_Statics::NewProp_GuardianVisible,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusFunctionLibrary_SetGuardianVisibility_Statics::Function_MetaDataParams[] = {
		{ "Category", "OculusLibrary|Guardian" },
		{ "Comment", "/**\n\x09* Forces the runtime to render guardian at all times or not\n\x09* @param GuardianVisible\x09\x09\x09(in) True will display guardian, False will hide it\n\x09*/" },
		{ "ModuleRelativePath", "Public/OculusFunctionLibrary.h" },
		{ "ToolTip", "Forces the runtime to render guardian at all times or not\n@param GuardianVisible                        (in) True will display guardian, False will hide it" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusFunctionLibrary_SetGuardianVisibility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOculusFunctionLibrary, nullptr, "SetGuardianVisibility", nullptr, nullptr, sizeof(OculusFunctionLibrary_eventSetGuardianVisibility_Parms), Z_Construct_UFunction_UOculusFunctionLibrary_SetGuardianVisibility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusFunctionLibrary_SetGuardianVisibility_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOculusFunctionLibrary_SetGuardianVisibility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusFunctionLibrary_SetGuardianVisibility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOculusFunctionLibrary_SetGuardianVisibility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOculusFunctionLibrary_SetGuardianVisibility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOculusFunctionLibrary_SetLoadingSplashParams_Statics
	{
		struct OculusFunctionLibrary_eventSetLoadingSplashParams_Parms
		{
			FString TexturePath;
			FVector DistanceInMeters;
			FVector2D SizeInMeters;
			FVector RotationAxis;
			float RotationDeltaInDeg;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RotationDeltaInDeg;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RotationAxis;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SizeInMeters;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DistanceInMeters;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TexturePath;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOculusFunctionLibrary_SetLoadingSplashParams_Statics::NewProp_RotationDeltaInDeg = { "RotationDeltaInDeg", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OculusFunctionLibrary_eventSetLoadingSplashParams_Parms, RotationDeltaInDeg), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOculusFunctionLibrary_SetLoadingSplashParams_Statics::NewProp_RotationAxis = { "RotationAxis", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OculusFunctionLibrary_eventSetLoadingSplashParams_Parms, RotationAxis), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOculusFunctionLibrary_SetLoadingSplashParams_Statics::NewProp_SizeInMeters = { "SizeInMeters", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OculusFunctionLibrary_eventSetLoadingSplashParams_Parms, SizeInMeters), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOculusFunctionLibrary_SetLoadingSplashParams_Statics::NewProp_DistanceInMeters = { "DistanceInMeters", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OculusFunctionLibrary_eventSetLoadingSplashParams_Parms, DistanceInMeters), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOculusFunctionLibrary_SetLoadingSplashParams_Statics::NewProp_TexturePath = { "TexturePath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OculusFunctionLibrary_eventSetLoadingSplashParams_Parms, TexturePath), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusFunctionLibrary_SetLoadingSplashParams_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusFunctionLibrary_SetLoadingSplashParams_Statics::NewProp_RotationDeltaInDeg,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusFunctionLibrary_SetLoadingSplashParams_Statics::NewProp_RotationAxis,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusFunctionLibrary_SetLoadingSplashParams_Statics::NewProp_SizeInMeters,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusFunctionLibrary_SetLoadingSplashParams_Statics::NewProp_DistanceInMeters,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusFunctionLibrary_SetLoadingSplashParams_Statics::NewProp_TexturePath,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusFunctionLibrary_SetLoadingSplashParams_Statics::Function_MetaDataParams[] = {
		{ "Category", "OculusLibrary" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "UOculusFunctionLibrary::SetLoadingSplashParams has been deprecated and no longer functions as before. Please use the generic UStereoLayerFunctionLibrary instead." },
		{ "ModuleRelativePath", "Public/OculusFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusFunctionLibrary_SetLoadingSplashParams_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOculusFunctionLibrary, nullptr, "SetLoadingSplashParams", nullptr, nullptr, sizeof(OculusFunctionLibrary_eventSetLoadingSplashParams_Parms), Z_Construct_UFunction_UOculusFunctionLibrary_SetLoadingSplashParams_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusFunctionLibrary_SetLoadingSplashParams_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOculusFunctionLibrary_SetLoadingSplashParams_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusFunctionLibrary_SetLoadingSplashParams_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOculusFunctionLibrary_SetLoadingSplashParams()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOculusFunctionLibrary_SetLoadingSplashParams_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOculusFunctionLibrary_SetPositionScale3D_Statics
	{
		struct OculusFunctionLibrary_eventSetPositionScale3D_Parms
		{
			FVector PosScale3D;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PosScale3D;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOculusFunctionLibrary_SetPositionScale3D_Statics::NewProp_PosScale3D = { "PosScale3D", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OculusFunctionLibrary_eventSetPositionScale3D_Parms, PosScale3D), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusFunctionLibrary_SetPositionScale3D_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusFunctionLibrary_SetPositionScale3D_Statics::NewProp_PosScale3D,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusFunctionLibrary_SetPositionScale3D_Statics::Function_MetaDataParams[] = {
		{ "Category", "OculusLibrary" },
		{ "Comment", "/**\n\x09 * Scales the HMD position that gets added to the virtual camera position.\n\x09 *\n\x09 * @param PosScale3D\x09(in) the scale to apply to the HMD position.\n\x09 */" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "This feature is no longer supported." },
		{ "ModuleRelativePath", "Public/OculusFunctionLibrary.h" },
		{ "ToolTip", "Scales the HMD position that gets added to the virtual camera position.\n\n@param PosScale3D    (in) the scale to apply to the HMD position." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusFunctionLibrary_SetPositionScale3D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOculusFunctionLibrary, nullptr, "SetPositionScale3D", nullptr, nullptr, sizeof(OculusFunctionLibrary_eventSetPositionScale3D_Parms), Z_Construct_UFunction_UOculusFunctionLibrary_SetPositionScale3D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusFunctionLibrary_SetPositionScale3D_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOculusFunctionLibrary_SetPositionScale3D_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusFunctionLibrary_SetPositionScale3D_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOculusFunctionLibrary_SetPositionScale3D()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOculusFunctionLibrary_SetPositionScale3D_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOculusFunctionLibrary_SetReorientHMDOnControllerRecenter_Statics
	{
		struct OculusFunctionLibrary_eventSetReorientHMDOnControllerRecenter_Parms
		{
			bool recenterMode;
		};
		static void NewProp_recenterMode_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_recenterMode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UOculusFunctionLibrary_SetReorientHMDOnControllerRecenter_Statics::NewProp_recenterMode_SetBit(void* Obj)
	{
		((OculusFunctionLibrary_eventSetReorientHMDOnControllerRecenter_Parms*)Obj)->recenterMode = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOculusFunctionLibrary_SetReorientHMDOnControllerRecenter_Statics::NewProp_recenterMode = { "recenterMode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(OculusFunctionLibrary_eventSetReorientHMDOnControllerRecenter_Parms), &Z_Construct_UFunction_UOculusFunctionLibrary_SetReorientHMDOnControllerRecenter_Statics::NewProp_recenterMode_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusFunctionLibrary_SetReorientHMDOnControllerRecenter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusFunctionLibrary_SetReorientHMDOnControllerRecenter_Statics::NewProp_recenterMode,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusFunctionLibrary_SetReorientHMDOnControllerRecenter_Statics::Function_MetaDataParams[] = {
		{ "Category", "OculusLibrary" },
		{ "Comment", "/**\n\x09* Sets the HMD recenter behavior to a mode that specifies HMD recentering behavior when a\n\x09* controller recenter is performed. If the recenterMode specified is 1, the HMD will recenter\n\x09* on controller recenter; if it's 0, only the controller will recenter. Returns false if not\n\x09* supported.\n\x09*/" },
		{ "ModuleRelativePath", "Public/OculusFunctionLibrary.h" },
		{ "ToolTip", "Sets the HMD recenter behavior to a mode that specifies HMD recentering behavior when a\ncontroller recenter is performed. If the recenterMode specified is 1, the HMD will recenter\non controller recenter; if it's 0, only the controller will recenter. Returns false if not\nsupported." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusFunctionLibrary_SetReorientHMDOnControllerRecenter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOculusFunctionLibrary, nullptr, "SetReorientHMDOnControllerRecenter", nullptr, nullptr, sizeof(OculusFunctionLibrary_eventSetReorientHMDOnControllerRecenter_Parms), Z_Construct_UFunction_UOculusFunctionLibrary_SetReorientHMDOnControllerRecenter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusFunctionLibrary_SetReorientHMDOnControllerRecenter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOculusFunctionLibrary_SetReorientHMDOnControllerRecenter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusFunctionLibrary_SetReorientHMDOnControllerRecenter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOculusFunctionLibrary_SetReorientHMDOnControllerRecenter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOculusFunctionLibrary_SetReorientHMDOnControllerRecenter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOculusFunctionLibrary_ShowLoadingIcon_Statics
	{
		struct OculusFunctionLibrary_eventShowLoadingIcon_Parms
		{
			UTexture2D* Texture;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Texture;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOculusFunctionLibrary_ShowLoadingIcon_Statics::NewProp_Texture = { "Texture", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OculusFunctionLibrary_eventShowLoadingIcon_Parms, Texture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusFunctionLibrary_ShowLoadingIcon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusFunctionLibrary_ShowLoadingIcon_Statics::NewProp_Texture,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusFunctionLibrary_ShowLoadingIcon_Statics::Function_MetaDataParams[] = {
		{ "Category", "OculusLibrary" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "UOculusFunctionLibrary::ShowLoadingIcon has been deprecated and no longer functions as before. Please use the generic UStereoLayerFunctionLibrary instead." },
		{ "ModuleRelativePath", "Public/OculusFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusFunctionLibrary_ShowLoadingIcon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOculusFunctionLibrary, nullptr, "ShowLoadingIcon", nullptr, nullptr, sizeof(OculusFunctionLibrary_eventShowLoadingIcon_Parms), Z_Construct_UFunction_UOculusFunctionLibrary_ShowLoadingIcon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusFunctionLibrary_ShowLoadingIcon_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOculusFunctionLibrary_ShowLoadingIcon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusFunctionLibrary_ShowLoadingIcon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOculusFunctionLibrary_ShowLoadingIcon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOculusFunctionLibrary_ShowLoadingIcon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOculusFunctionLibrary_ShowLoadingSplashScreen_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusFunctionLibrary_ShowLoadingSplashScreen_Statics::Function_MetaDataParams[] = {
		{ "Category", "OculusLibrary" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "UOculusFunctionLibrary::ShowLoadingSplashScreen has been deprecated and no longer functions as before.  Use the generic UStereoLayerFunctionLibrary::ShowSplashScreen instead" },
		{ "ModuleRelativePath", "Public/OculusFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusFunctionLibrary_ShowLoadingSplashScreen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOculusFunctionLibrary, nullptr, "ShowLoadingSplashScreen", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOculusFunctionLibrary_ShowLoadingSplashScreen_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusFunctionLibrary_ShowLoadingSplashScreen_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOculusFunctionLibrary_ShowLoadingSplashScreen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOculusFunctionLibrary_ShowLoadingSplashScreen_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UOculusFunctionLibrary_NoRegister()
	{
		return UOculusFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UOculusFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOculusFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_OculusHMD,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOculusFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOculusFunctionLibrary_AddLoadingSplashScreen, "AddLoadingSplashScreen" }, // 2982288344
		{ &Z_Construct_UFunction_UOculusFunctionLibrary_ClearLoadingSplashScreens, "ClearLoadingSplashScreens" }, // 2866724789
		{ &Z_Construct_UFunction_UOculusFunctionLibrary_EnableAutoLoadingSplashScreen, "EnableAutoLoadingSplashScreen" }, // 3108024399
		{ &Z_Construct_UFunction_UOculusFunctionLibrary_EnableOrientationTracking, "EnableOrientationTracking" }, // 1078722151
		{ &Z_Construct_UFunction_UOculusFunctionLibrary_EnablePositionTracking, "EnablePositionTracking" }, // 3794112671
		{ &Z_Construct_UFunction_UOculusFunctionLibrary_GetAvailableDisplayFrequencies, "GetAvailableDisplayFrequencies" }, // 3986283277
		{ &Z_Construct_UFunction_UOculusFunctionLibrary_GetBaseRotationAndBaseOffsetInMeters, "GetBaseRotationAndBaseOffsetInMeters" }, // 2469314444
		{ &Z_Construct_UFunction_UOculusFunctionLibrary_GetBaseRotationAndPositionOffset, "GetBaseRotationAndPositionOffset" }, // 3747098429
		{ &Z_Construct_UFunction_UOculusFunctionLibrary_GetCurrentDisplayFrequency, "GetCurrentDisplayFrequency" }, // 897487277
		{ &Z_Construct_UFunction_UOculusFunctionLibrary_GetDeviceName, "GetDeviceName" }, // 1079514146
		{ &Z_Construct_UFunction_UOculusFunctionLibrary_GetFixedFoveatedRenderingLevel, "GetFixedFoveatedRenderingLevel" }, // 3395290753
		{ &Z_Construct_UFunction_UOculusFunctionLibrary_GetGPUFrameTime, "GetGPUFrameTime" }, // 874643675
		{ &Z_Construct_UFunction_UOculusFunctionLibrary_GetGPUUtilization, "GetGPUUtilization" }, // 365482714
		{ &Z_Construct_UFunction_UOculusFunctionLibrary_GetGuardianDimensions, "GetGuardianDimensions" }, // 3980957446
		{ &Z_Construct_UFunction_UOculusFunctionLibrary_GetGuardianPoints, "GetGuardianPoints" }, // 4105802617
		{ &Z_Construct_UFunction_UOculusFunctionLibrary_GetLoadingSplashParams, "GetLoadingSplashParams" }, // 1060502034
		{ &Z_Construct_UFunction_UOculusFunctionLibrary_GetNodeGuardianIntersection, "GetNodeGuardianIntersection" }, // 4106098789
		{ &Z_Construct_UFunction_UOculusFunctionLibrary_GetPlayAreaTransform, "GetPlayAreaTransform" }, // 3232303732
		{ &Z_Construct_UFunction_UOculusFunctionLibrary_GetPointGuardianIntersection, "GetPointGuardianIntersection" }, // 3923519081
		{ &Z_Construct_UFunction_UOculusFunctionLibrary_GetPose, "GetPose" }, // 1729327543
		{ &Z_Construct_UFunction_UOculusFunctionLibrary_GetRawSensorData, "GetRawSensorData" }, // 2132981773
		{ &Z_Construct_UFunction_UOculusFunctionLibrary_GetUserProfile, "GetUserProfile" }, // 2310167140
		{ &Z_Construct_UFunction_UOculusFunctionLibrary_HasInputFocus, "HasInputFocus" }, // 1180951
		{ &Z_Construct_UFunction_UOculusFunctionLibrary_HasSystemOverlayPresent, "HasSystemOverlayPresent" }, // 3205516509
		{ &Z_Construct_UFunction_UOculusFunctionLibrary_HideLoadingIcon, "HideLoadingIcon" }, // 641636635
		{ &Z_Construct_UFunction_UOculusFunctionLibrary_HideLoadingSplashScreen, "HideLoadingSplashScreen" }, // 3390915516
		{ &Z_Construct_UFunction_UOculusFunctionLibrary_IsAutoLoadingSplashScreenEnabled, "IsAutoLoadingSplashScreenEnabled" }, // 4039237701
		{ &Z_Construct_UFunction_UOculusFunctionLibrary_IsDeviceTracked, "IsDeviceTracked" }, // 2557645543
		{ &Z_Construct_UFunction_UOculusFunctionLibrary_IsGuardianConfigured, "IsGuardianConfigured" }, // 2577092280
		{ &Z_Construct_UFunction_UOculusFunctionLibrary_IsGuardianDisplayed, "IsGuardianDisplayed" }, // 2039385434
		{ &Z_Construct_UFunction_UOculusFunctionLibrary_IsLoadingIconEnabled, "IsLoadingIconEnabled" }, // 4272044709
		{ &Z_Construct_UFunction_UOculusFunctionLibrary_SetBaseRotationAndBaseOffsetInMeters, "SetBaseRotationAndBaseOffsetInMeters" }, // 2786186828
		{ &Z_Construct_UFunction_UOculusFunctionLibrary_SetBaseRotationAndPositionOffset, "SetBaseRotationAndPositionOffset" }, // 4193617402
		{ &Z_Construct_UFunction_UOculusFunctionLibrary_SetColorScaleAndOffset, "SetColorScaleAndOffset" }, // 617283000
		{ &Z_Construct_UFunction_UOculusFunctionLibrary_SetCPUAndGPULevels, "SetCPUAndGPULevels" }, // 484585725
		{ &Z_Construct_UFunction_UOculusFunctionLibrary_SetDisplayFrequency, "SetDisplayFrequency" }, // 2419475774
		{ &Z_Construct_UFunction_UOculusFunctionLibrary_SetFixedFoveatedRenderingLevel, "SetFixedFoveatedRenderingLevel" }, // 1054018058
		{ &Z_Construct_UFunction_UOculusFunctionLibrary_SetGuardianVisibility, "SetGuardianVisibility" }, // 3491995007
		{ &Z_Construct_UFunction_UOculusFunctionLibrary_SetLoadingSplashParams, "SetLoadingSplashParams" }, // 1399261558
		{ &Z_Construct_UFunction_UOculusFunctionLibrary_SetPositionScale3D, "SetPositionScale3D" }, // 1612532656
		{ &Z_Construct_UFunction_UOculusFunctionLibrary_SetReorientHMDOnControllerRecenter, "SetReorientHMDOnControllerRecenter" }, // 2172417278
		{ &Z_Construct_UFunction_UOculusFunctionLibrary_ShowLoadingIcon, "ShowLoadingIcon" }, // 406808536
		{ &Z_Construct_UFunction_UOculusFunctionLibrary_ShowLoadingSplashScreen, "ShowLoadingSplashScreen" }, // 1181644069
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "OculusFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/OculusFunctionLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOculusFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOculusFunctionLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UOculusFunctionLibrary_Statics::ClassParams = {
		&UOculusFunctionLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UOculusFunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOculusFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOculusFunctionLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UOculusFunctionLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UOculusFunctionLibrary, 1814686354);
	template<> OCULUSHMD_API UClass* StaticClass<UOculusFunctionLibrary>()
	{
		return UOculusFunctionLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UOculusFunctionLibrary(Z_Construct_UClass_UOculusFunctionLibrary, &UOculusFunctionLibrary::StaticClass, TEXT("/Script/OculusHMD"), TEXT("UOculusFunctionLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOculusFunctionLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
