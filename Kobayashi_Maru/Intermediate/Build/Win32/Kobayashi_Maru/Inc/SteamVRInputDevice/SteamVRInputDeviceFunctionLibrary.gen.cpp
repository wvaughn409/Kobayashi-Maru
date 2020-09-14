// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamVRInputDevice/Public/SteamVRInputDeviceFunctionLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamVRInputDeviceFunctionLibrary() {}
// Cross Module References
	STEAMVRINPUTDEVICE_API UEnum* Z_Construct_UEnum_SteamVRInputDevice_ESkeletalSummaryDataType();
	UPackage* Z_Construct_UPackage__Script_SteamVRInputDevice();
	STEAMVRINPUTDEVICE_API UEnum* Z_Construct_UEnum_SteamVRInputDevice_ESteamVRInputStringBits();
	STEAMVRINPUTDEVICE_API UEnum* Z_Construct_UEnum_SteamVRInputDevice_EControllerFidelity();
	STEAMVRINPUTDEVICE_API UEnum* Z_Construct_UEnum_SteamVRInputDevice_EHandSkeleton();
	STEAMVRINPUTDEVICE_API UEnum* Z_Construct_UEnum_SteamVRInputDevice_EHand();
	STEAMVRINPUTDEVICE_API UEnum* Z_Construct_UEnum_SteamVRInputDevice_EMotionRange();
	STEAMVRINPUTDEVICE_API UEnum* Z_Construct_UEnum_SteamVRInputDevice_ESteamVRHand();
	STEAMVRINPUTDEVICE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamVRInputBindingInfo();
	STEAMVRINPUTDEVICE_API UScriptStruct* Z_Construct_UScriptStruct_FUE4RetargettingRefs();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	STEAMVRINPUTDEVICE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamVRInputOriginInfo();
	STEAMVRINPUTDEVICE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamVRActionSet();
	STEAMVRINPUTDEVICE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamVRAction();
	STEAMVRINPUTDEVICE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamVRFingerSplays();
	STEAMVRINPUTDEVICE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamVRFingerCurls();
	STEAMVRINPUTDEVICE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamVRSkeletonTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	STEAMVRINPUTDEVICE_API UClass* Z_Construct_UClass_USteamVRInputDeviceFunctionLibrary_NoRegister();
	STEAMVRINPUTDEVICE_API UClass* Z_Construct_UClass_USteamVRInputDeviceFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
// End Cross Module References
	static UEnum* ESkeletalSummaryDataType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SteamVRInputDevice_ESkeletalSummaryDataType, Z_Construct_UPackage__Script_SteamVRInputDevice(), TEXT("ESkeletalSummaryDataType"));
		}
		return Singleton;
	}
	template<> STEAMVRINPUTDEVICE_API UEnum* StaticEnum<ESkeletalSummaryDataType>()
	{
		return ESkeletalSummaryDataType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESkeletalSummaryDataType(ESkeletalSummaryDataType_StaticEnum, TEXT("/Script/SteamVRInputDevice"), TEXT("ESkeletalSummaryDataType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SteamVRInputDevice_ESkeletalSummaryDataType_Hash() { return 2162792888U; }
	UEnum* Z_Construct_UEnum_SteamVRInputDevice_ESkeletalSummaryDataType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SteamVRInputDevice();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESkeletalSummaryDataType"), 0, Get_Z_Construct_UEnum_SteamVRInputDevice_ESkeletalSummaryDataType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESkeletalSummaryDataType::VR_SummaryType_FromAnimation", (int64)ESkeletalSummaryDataType::VR_SummaryType_FromAnimation },
				{ "ESkeletalSummaryDataType::VR_SummaryType_FromDevice", (int64)ESkeletalSummaryDataType::VR_SummaryType_FromDevice },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/** Input String Values for querying user hardware */" },
				{ "ModuleRelativePath", "Public/SteamVRInputDeviceFunctionLibrary.h" },
				{ "ToolTip", "Input String Values for querying user hardware" },
				{ "VR_SummaryType_FromAnimation.Comment", "// The data should match the animated transforms in the skeleton transforms. This data will probably be smoothed and may be more latent\n" },
				{ "VR_SummaryType_FromAnimation.DisplayName", "From Animation" },
				{ "VR_SummaryType_FromAnimation.Name", "ESkeletalSummaryDataType::VR_SummaryType_FromAnimation" },
				{ "VR_SummaryType_FromAnimation.ToolTip", "The data should match the animated transforms in the skeleton transforms. This data will probably be smoothed and may be more latent" },
				{ "VR_SummaryType_FromDevice.Comment", "// The data should be the unprocessed values from the device when available. This data may include more jitter but may be provided with less latency\n" },
				{ "VR_SummaryType_FromDevice.DisplayName", "From Device" },
				{ "VR_SummaryType_FromDevice.Name", "ESkeletalSummaryDataType::VR_SummaryType_FromDevice" },
				{ "VR_SummaryType_FromDevice.ToolTip", "The data should be the unprocessed values from the device when available. This data may include more jitter but may be provided with less latency" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SteamVRInputDevice,
				nullptr,
				"ESkeletalSummaryDataType",
				"ESkeletalSummaryDataType",
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
	static UEnum* ESteamVRInputStringBits_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SteamVRInputDevice_ESteamVRInputStringBits, Z_Construct_UPackage__Script_SteamVRInputDevice(), TEXT("ESteamVRInputStringBits"));
		}
		return Singleton;
	}
	template<> STEAMVRINPUTDEVICE_API UEnum* StaticEnum<ESteamVRInputStringBits>()
	{
		return ESteamVRInputStringBits_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESteamVRInputStringBits(ESteamVRInputStringBits_StaticEnum, TEXT("/Script/SteamVRInputDevice"), TEXT("ESteamVRInputStringBits"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SteamVRInputDevice_ESteamVRInputStringBits_Hash() { return 1796062948U; }
	UEnum* Z_Construct_UEnum_SteamVRInputDevice_ESteamVRInputStringBits()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SteamVRInputDevice();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESteamVRInputStringBits"), 0, Get_Z_Construct_UEnum_SteamVRInputDevice_ESteamVRInputStringBits_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESteamVRInputStringBits::VR_InputString_Hand", (int64)ESteamVRInputStringBits::VR_InputString_Hand },
				{ "ESteamVRInputStringBits::VR_InputString_ControllerType", (int64)ESteamVRInputStringBits::VR_InputString_ControllerType },
				{ "ESteamVRInputStringBits::VR_InputString_InputSource", (int64)ESteamVRInputStringBits::VR_InputString_InputSource },
				{ "ESteamVRInputStringBits::VR_InputString_All", (int64)ESteamVRInputStringBits::VR_InputString_All },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/** Input String Values for querying user hardware */" },
				{ "ModuleRelativePath", "Public/SteamVRInputDeviceFunctionLibrary.h" },
				{ "ToolTip", "Input String Values for querying user hardware" },
				{ "VR_InputString_All.Comment", "// All of the above. (e.g. \"Left Hand Index Controller Trackpad\")\n" },
				{ "VR_InputString_All.DisplayName", "All" },
				{ "VR_InputString_All.Name", "ESteamVRInputStringBits::VR_InputString_All" },
				{ "VR_InputString_All.ToolTip", "All of the above. (e.g. \"Left Hand Index Controller Trackpad\")" },
				{ "VR_InputString_ControllerType.Comment", "// What kind of controller the user has in that hand (e.g. \"Index Controller\")\n" },
				{ "VR_InputString_ControllerType.DisplayName", "Controller Type" },
				{ "VR_InputString_ControllerType.Name", "ESteamVRInputStringBits::VR_InputString_ControllerType" },
				{ "VR_InputString_ControllerType.ToolTip", "What kind of controller the user has in that hand (e.g. \"Index Controller\")" },
				{ "VR_InputString_Hand.Comment", "// Which hand the origin is in (e.g. \"Left Hand\")\n" },
				{ "VR_InputString_Hand.DisplayName", "Hand" },
				{ "VR_InputString_Hand.Name", "ESteamVRInputStringBits::VR_InputString_Hand" },
				{ "VR_InputString_Hand.ToolTip", "Which hand the origin is in (e.g. \"Left Hand\")" },
				{ "VR_InputString_InputSource.Comment", "// What part of that controller is the origin (e.g. \"Trackpad\")\n" },
				{ "VR_InputString_InputSource.DisplayName", "Input Source" },
				{ "VR_InputString_InputSource.Name", "ESteamVRInputStringBits::VR_InputString_InputSource" },
				{ "VR_InputString_InputSource.ToolTip", "What part of that controller is the origin (e.g. \"Trackpad\")" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SteamVRInputDevice,
				nullptr,
				"ESteamVRInputStringBits",
				"ESteamVRInputStringBits",
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
	static UEnum* EControllerFidelity_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SteamVRInputDevice_EControllerFidelity, Z_Construct_UPackage__Script_SteamVRInputDevice(), TEXT("EControllerFidelity"));
		}
		return Singleton;
	}
	template<> STEAMVRINPUTDEVICE_API UEnum* StaticEnum<EControllerFidelity>()
	{
		return EControllerFidelity_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EControllerFidelity(EControllerFidelity_StaticEnum, TEXT("/Script/SteamVRInputDevice"), TEXT("EControllerFidelity"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SteamVRInputDevice_EControllerFidelity_Hash() { return 1783700560U; }
	UEnum* Z_Construct_UEnum_SteamVRInputDevice_EControllerFidelity()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SteamVRInputDevice();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EControllerFidelity"), 0, Get_Z_Construct_UEnum_SteamVRInputDevice_EControllerFidelity_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EControllerFidelity::VR_ControllerFidelity_Estimated", (int64)EControllerFidelity::VR_ControllerFidelity_Estimated },
				{ "EControllerFidelity::VR_ControllerFidelity_Full", (int64)EControllerFidelity::VR_ControllerFidelity_Full },
				{ "EControllerFidelity::VR_ControllerFidelity_Partial", (int64)EControllerFidelity::VR_ControllerFidelity_Partial },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/** Skeletal Tracking Level of a controller */" },
				{ "ModuleRelativePath", "Public/SteamVRInputDeviceFunctionLibrary.h" },
				{ "ToolTip", "Skeletal Tracking Level of a controller" },
				{ "VR_ControllerFidelity_Estimated.DisplayName", "Controller Fidelity Estimated" },
				{ "VR_ControllerFidelity_Estimated.Name", "EControllerFidelity::VR_ControllerFidelity_Estimated" },
				{ "VR_ControllerFidelity_Full.DisplayName", "Controller Fidelity Full" },
				{ "VR_ControllerFidelity_Full.Name", "EControllerFidelity::VR_ControllerFidelity_Full" },
				{ "VR_ControllerFidelity_Partial.DisplayName", "Controller Fidelity Partial" },
				{ "VR_ControllerFidelity_Partial.Name", "EControllerFidelity::VR_ControllerFidelity_Partial" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SteamVRInputDevice,
				nullptr,
				"EControllerFidelity",
				"EControllerFidelity",
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
	static UEnum* EHandSkeleton_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SteamVRInputDevice_EHandSkeleton, Z_Construct_UPackage__Script_SteamVRInputDevice(), TEXT("EHandSkeleton"));
		}
		return Singleton;
	}
	template<> STEAMVRINPUTDEVICE_API UEnum* StaticEnum<EHandSkeleton>()
	{
		return EHandSkeleton_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EHandSkeleton(EHandSkeleton_StaticEnum, TEXT("/Script/SteamVRInputDevice"), TEXT("EHandSkeleton"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SteamVRInputDevice_EHandSkeleton_Hash() { return 2418852781U; }
	UEnum* Z_Construct_UEnum_SteamVRInputDevice_EHandSkeleton()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SteamVRInputDevice();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EHandSkeleton"), 0, Get_Z_Construct_UEnum_SteamVRInputDevice_EHandSkeleton_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EHandSkeleton::VR_SteamVRHandSkeleton", (int64)EHandSkeleton::VR_SteamVRHandSkeleton },
				{ "EHandSkeleton::VR_UE4HandSkeleton", (int64)EHandSkeleton::VR_UE4HandSkeleton },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/** Types of known skeletons that this animation node can handle */" },
				{ "ModuleRelativePath", "Public/SteamVRInputDeviceFunctionLibrary.h" },
				{ "ToolTip", "Types of known skeletons that this animation node can handle" },
				{ "VR_SteamVRHandSkeleton.DisplayName", "SteamVR Hand Skeleton" },
				{ "VR_SteamVRHandSkeleton.Name", "EHandSkeleton::VR_SteamVRHandSkeleton" },
				{ "VR_UE4HandSkeleton.DisplayName", "UE4 Hand Skeleton" },
				{ "VR_UE4HandSkeleton.Name", "EHandSkeleton::VR_UE4HandSkeleton" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SteamVRInputDevice,
				nullptr,
				"EHandSkeleton",
				"EHandSkeleton",
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
	static UEnum* EHand_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SteamVRInputDevice_EHand, Z_Construct_UPackage__Script_SteamVRInputDevice(), TEXT("EHand"));
		}
		return Singleton;
	}
	template<> STEAMVRINPUTDEVICE_API UEnum* StaticEnum<EHand>()
	{
		return EHand_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EHand(EHand_StaticEnum, TEXT("/Script/SteamVRInputDevice"), TEXT("EHand"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SteamVRInputDevice_EHand_Hash() { return 1815492754U; }
	UEnum* Z_Construct_UEnum_SteamVRInputDevice_EHand()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SteamVRInputDevice();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EHand"), 0, Get_Z_Construct_UEnum_SteamVRInputDevice_EHand_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EHand::VR_LeftHand", (int64)EHand::VR_LeftHand },
				{ "EHand::VR_RightHand", (int64)EHand::VR_RightHand },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/** Valid values for hands thats used for the Skeletal Input System calls */" },
				{ "ModuleRelativePath", "Public/SteamVRInputDeviceFunctionLibrary.h" },
				{ "ToolTip", "Valid values for hands thats used for the Skeletal Input System calls" },
				{ "VR_LeftHand.DisplayName", "Left Hand" },
				{ "VR_LeftHand.Name", "EHand::VR_LeftHand" },
				{ "VR_RightHand.DisplayName", "Right Hand" },
				{ "VR_RightHand.Name", "EHand::VR_RightHand" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SteamVRInputDevice,
				nullptr,
				"EHand",
				"EHand",
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
	static UEnum* EMotionRange_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SteamVRInputDevice_EMotionRange, Z_Construct_UPackage__Script_SteamVRInputDevice(), TEXT("EMotionRange"));
		}
		return Singleton;
	}
	template<> STEAMVRINPUTDEVICE_API UEnum* StaticEnum<EMotionRange>()
	{
		return EMotionRange_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMotionRange(EMotionRange_StaticEnum, TEXT("/Script/SteamVRInputDevice"), TEXT("EMotionRange"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SteamVRInputDevice_EMotionRange_Hash() { return 3270339950U; }
	UEnum* Z_Construct_UEnum_SteamVRInputDevice_EMotionRange()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SteamVRInputDevice();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMotionRange"), 0, Get_Z_Construct_UEnum_SteamVRInputDevice_EMotionRange_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EMotionRange::VR_WithoutController", (int64)EMotionRange::VR_WithoutController },
				{ "EMotionRange::VR_WithController", (int64)EMotionRange::VR_WithController },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/** Valid range of motion for a skeletal animation */" },
				{ "ModuleRelativePath", "Public/SteamVRInputDeviceFunctionLibrary.h" },
				{ "ToolTip", "Valid range of motion for a skeletal animation" },
				{ "VR_WithController.DisplayName", "With Controller" },
				{ "VR_WithController.Name", "EMotionRange::VR_WithController" },
				{ "VR_WithoutController.DisplayName", "Without Controller" },
				{ "VR_WithoutController.Name", "EMotionRange::VR_WithoutController" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SteamVRInputDevice,
				nullptr,
				"EMotionRange",
				"EMotionRange",
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
	static UEnum* ESteamVRHand_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SteamVRInputDevice_ESteamVRHand, Z_Construct_UPackage__Script_SteamVRInputDevice(), TEXT("ESteamVRHand"));
		}
		return Singleton;
	}
	template<> STEAMVRINPUTDEVICE_API UEnum* StaticEnum<ESteamVRHand>()
	{
		return ESteamVRHand_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESteamVRHand(ESteamVRHand_StaticEnum, TEXT("/Script/SteamVRInputDevice"), TEXT("ESteamVRHand"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SteamVRInputDevice_ESteamVRHand_Hash() { return 1758932320U; }
	UEnum* Z_Construct_UEnum_SteamVRInputDevice_ESteamVRHand()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SteamVRInputDevice();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESteamVRHand"), 0, Get_Z_Construct_UEnum_SteamVRInputDevice_ESteamVRHand_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESteamVRHand::VR_Left", (int64)ESteamVRHand::VR_Left },
				{ "ESteamVRHand::VR_Right", (int64)ESteamVRHand::VR_Right },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/** Convenience type for SteamVR Hand designation (Left/Right) */" },
				{ "ModuleRelativePath", "Public/SteamVRInputDeviceFunctionLibrary.h" },
				{ "ToolTip", "Convenience type for SteamVR Hand designation (Left/Right)" },
				{ "VR_Left.DisplayName", "Left" },
				{ "VR_Left.Name", "ESteamVRHand::VR_Left" },
				{ "VR_Right.DisplayName", "Right" },
				{ "VR_Right.Name", "ESteamVRHand::VR_Right" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SteamVRInputDevice,
				nullptr,
				"ESteamVRHand",
				"ESteamVRHand",
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
class UScriptStruct* FSteamVRInputBindingInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STEAMVRINPUTDEVICE_API uint32 Get_Z_Construct_UScriptStruct_FSteamVRInputBindingInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSteamVRInputBindingInfo, Z_Construct_UPackage__Script_SteamVRInputDevice(), TEXT("SteamVRInputBindingInfo"), sizeof(FSteamVRInputBindingInfo), Get_Z_Construct_UScriptStruct_FSteamVRInputBindingInfo_Hash());
	}
	return Singleton;
}
template<> STEAMVRINPUTDEVICE_API UScriptStruct* StaticStruct<FSteamVRInputBindingInfo>()
{
	return FSteamVRInputBindingInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSteamVRInputBindingInfo(FSteamVRInputBindingInfo::StaticStruct, TEXT("/Script/SteamVRInputDevice"), TEXT("SteamVRInputBindingInfo"), false, nullptr, nullptr);
static struct FScriptStruct_SteamVRInputDevice_StaticRegisterNativesFSteamVRInputBindingInfo
{
	FScriptStruct_SteamVRInputDevice_StaticRegisterNativesFSteamVRInputBindingInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SteamVRInputBindingInfo")),new UScriptStruct::TCppStructOps<FSteamVRInputBindingInfo>);
	}
} ScriptStruct_SteamVRInputDevice_StaticRegisterNativesFSteamVRInputBindingInfo;
	struct Z_Construct_UScriptStruct_FSteamVRInputBindingInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SlotName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SlotName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ModeName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ModeName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputPathName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_InputPathName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DevicePathName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_DevicePathName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamVRInputBindingInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Information about the input bindings for an action on currently active controller (i.e device path, input path, mode, slot)  */" },
		{ "ModuleRelativePath", "Public/SteamVRInputDeviceFunctionLibrary.h" },
		{ "ToolTip", "Information about the input bindings for an action on currently active controller (i.e device path, input path, mode, slot)" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSteamVRInputBindingInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSteamVRInputBindingInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamVRInputBindingInfo_Statics::NewProp_SlotName_MetaData[] = {
		{ "Category", "SteamVR Input" },
		{ "ModuleRelativePath", "Public/SteamVRInputDeviceFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSteamVRInputBindingInfo_Statics::NewProp_SlotName = { "SlotName", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSteamVRInputBindingInfo, SlotName), METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamVRInputBindingInfo_Statics::NewProp_SlotName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamVRInputBindingInfo_Statics::NewProp_SlotName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamVRInputBindingInfo_Statics::NewProp_ModeName_MetaData[] = {
		{ "Category", "SteamVR Input" },
		{ "ModuleRelativePath", "Public/SteamVRInputDeviceFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSteamVRInputBindingInfo_Statics::NewProp_ModeName = { "ModeName", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSteamVRInputBindingInfo, ModeName), METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamVRInputBindingInfo_Statics::NewProp_ModeName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamVRInputBindingInfo_Statics::NewProp_ModeName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamVRInputBindingInfo_Statics::NewProp_InputPathName_MetaData[] = {
		{ "Category", "SteamVR Input" },
		{ "ModuleRelativePath", "Public/SteamVRInputDeviceFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSteamVRInputBindingInfo_Statics::NewProp_InputPathName = { "InputPathName", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSteamVRInputBindingInfo, InputPathName), METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamVRInputBindingInfo_Statics::NewProp_InputPathName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamVRInputBindingInfo_Statics::NewProp_InputPathName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamVRInputBindingInfo_Statics::NewProp_DevicePathName_MetaData[] = {
		{ "Category", "SteamVR Input" },
		{ "ModuleRelativePath", "Public/SteamVRInputDeviceFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSteamVRInputBindingInfo_Statics::NewProp_DevicePathName = { "DevicePathName", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSteamVRInputBindingInfo, DevicePathName), METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamVRInputBindingInfo_Statics::NewProp_DevicePathName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamVRInputBindingInfo_Statics::NewProp_DevicePathName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSteamVRInputBindingInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamVRInputBindingInfo_Statics::NewProp_SlotName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamVRInputBindingInfo_Statics::NewProp_ModeName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamVRInputBindingInfo_Statics::NewProp_InputPathName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamVRInputBindingInfo_Statics::NewProp_DevicePathName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSteamVRInputBindingInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamVRInputDevice,
		nullptr,
		&NewStructOps,
		"SteamVRInputBindingInfo",
		sizeof(FSteamVRInputBindingInfo),
		alignof(FSteamVRInputBindingInfo),
		Z_Construct_UScriptStruct_FSteamVRInputBindingInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamVRInputBindingInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamVRInputBindingInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamVRInputBindingInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSteamVRInputBindingInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSteamVRInputBindingInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SteamVRInputDevice();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SteamVRInputBindingInfo"), sizeof(FSteamVRInputBindingInfo), Get_Z_Construct_UScriptStruct_FSteamVRInputBindingInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSteamVRInputBindingInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSteamVRInputBindingInfo_Hash() { return 2703551883U; }
class UScriptStruct* FUE4RetargettingRefs::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STEAMVRINPUTDEVICE_API uint32 Get_Z_Construct_UScriptStruct_FUE4RetargettingRefs_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FUE4RetargettingRefs, Z_Construct_UPackage__Script_SteamVRInputDevice(), TEXT("UE4RetargettingRefs"), sizeof(FUE4RetargettingRefs), Get_Z_Construct_UScriptStruct_FUE4RetargettingRefs_Hash());
	}
	return Singleton;
}
template<> STEAMVRINPUTDEVICE_API UScriptStruct* StaticStruct<FUE4RetargettingRefs>()
{
	return FUE4RetargettingRefs::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FUE4RetargettingRefs(FUE4RetargettingRefs::StaticStruct, TEXT("/Script/SteamVRInputDevice"), TEXT("UE4RetargettingRefs"), false, nullptr, nullptr);
static struct FScriptStruct_SteamVRInputDevice_StaticRegisterNativesFUE4RetargettingRefs
{
	FScriptStruct_SteamVRInputDevice_StaticRegisterNativesFUE4RetargettingRefs()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("UE4RetargettingRefs")),new UScriptStruct::TCppStructOps<FUE4RetargettingRefs>);
	}
} ScriptStruct_SteamVRInputDevice_StaticRegisterNativesFUE4RetargettingRefs;
	struct Z_Construct_UScriptStruct_FUE4RetargettingRefs_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WristForwardLS_UE4_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WristForwardLS_UE4;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WristSideDirectionLS_UE4_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WristSideDirectionLS_UE4;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KnuckleAverageMS_UE4_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_KnuckleAverageMS_UE4;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsRightHanded_MetaData[];
#endif
		static void NewProp_bIsRightHanded_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsRightHanded;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsInitialized_MetaData[];
#endif
		static void NewProp_bIsInitialized_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsInitialized;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUE4RetargettingRefs_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Retargetting information for the SteamVR skeleton to UE4 stock skeleton */" },
		{ "ModuleRelativePath", "Public/SteamVRInputDeviceFunctionLibrary.h" },
		{ "ToolTip", "Retargetting information for the SteamVR skeleton to UE4 stock skeleton" },
	};
#endif
	void* Z_Construct_UScriptStruct_FUE4RetargettingRefs_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUE4RetargettingRefs>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUE4RetargettingRefs_Statics::NewProp_WristForwardLS_UE4_MetaData[] = {
		{ "Category", "SteamVR Input" },
		{ "ModuleRelativePath", "Public/SteamVRInputDeviceFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FUE4RetargettingRefs_Statics::NewProp_WristForwardLS_UE4 = { "WristForwardLS_UE4", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUE4RetargettingRefs, WristForwardLS_UE4), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FUE4RetargettingRefs_Statics::NewProp_WristForwardLS_UE4_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUE4RetargettingRefs_Statics::NewProp_WristForwardLS_UE4_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUE4RetargettingRefs_Statics::NewProp_WristSideDirectionLS_UE4_MetaData[] = {
		{ "Category", "SteamVR Input" },
		{ "ModuleRelativePath", "Public/SteamVRInputDeviceFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FUE4RetargettingRefs_Statics::NewProp_WristSideDirectionLS_UE4 = { "WristSideDirectionLS_UE4", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUE4RetargettingRefs, WristSideDirectionLS_UE4), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FUE4RetargettingRefs_Statics::NewProp_WristSideDirectionLS_UE4_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUE4RetargettingRefs_Statics::NewProp_WristSideDirectionLS_UE4_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUE4RetargettingRefs_Statics::NewProp_KnuckleAverageMS_UE4_MetaData[] = {
		{ "Category", "SteamVR Input" },
		{ "ModuleRelativePath", "Public/SteamVRInputDeviceFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FUE4RetargettingRefs_Statics::NewProp_KnuckleAverageMS_UE4 = { "KnuckleAverageMS_UE4", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUE4RetargettingRefs, KnuckleAverageMS_UE4), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FUE4RetargettingRefs_Statics::NewProp_KnuckleAverageMS_UE4_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUE4RetargettingRefs_Statics::NewProp_KnuckleAverageMS_UE4_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUE4RetargettingRefs_Statics::NewProp_bIsRightHanded_MetaData[] = {
		{ "Category", "SteamVR Input" },
		{ "ModuleRelativePath", "Public/SteamVRInputDeviceFunctionLibrary.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FUE4RetargettingRefs_Statics::NewProp_bIsRightHanded_SetBit(void* Obj)
	{
		((FUE4RetargettingRefs*)Obj)->bIsRightHanded = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FUE4RetargettingRefs_Statics::NewProp_bIsRightHanded = { "bIsRightHanded", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FUE4RetargettingRefs), &Z_Construct_UScriptStruct_FUE4RetargettingRefs_Statics::NewProp_bIsRightHanded_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FUE4RetargettingRefs_Statics::NewProp_bIsRightHanded_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUE4RetargettingRefs_Statics::NewProp_bIsRightHanded_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUE4RetargettingRefs_Statics::NewProp_bIsInitialized_MetaData[] = {
		{ "Category", "SteamVR Input" },
		{ "ModuleRelativePath", "Public/SteamVRInputDeviceFunctionLibrary.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FUE4RetargettingRefs_Statics::NewProp_bIsInitialized_SetBit(void* Obj)
	{
		((FUE4RetargettingRefs*)Obj)->bIsInitialized = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FUE4RetargettingRefs_Statics::NewProp_bIsInitialized = { "bIsInitialized", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FUE4RetargettingRefs), &Z_Construct_UScriptStruct_FUE4RetargettingRefs_Statics::NewProp_bIsInitialized_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FUE4RetargettingRefs_Statics::NewProp_bIsInitialized_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUE4RetargettingRefs_Statics::NewProp_bIsInitialized_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUE4RetargettingRefs_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUE4RetargettingRefs_Statics::NewProp_WristForwardLS_UE4,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUE4RetargettingRefs_Statics::NewProp_WristSideDirectionLS_UE4,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUE4RetargettingRefs_Statics::NewProp_KnuckleAverageMS_UE4,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUE4RetargettingRefs_Statics::NewProp_bIsRightHanded,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUE4RetargettingRefs_Statics::NewProp_bIsInitialized,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUE4RetargettingRefs_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamVRInputDevice,
		nullptr,
		&NewStructOps,
		"UE4RetargettingRefs",
		sizeof(FUE4RetargettingRefs),
		alignof(FUE4RetargettingRefs),
		Z_Construct_UScriptStruct_FUE4RetargettingRefs_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUE4RetargettingRefs_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FUE4RetargettingRefs_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUE4RetargettingRefs_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FUE4RetargettingRefs()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FUE4RetargettingRefs_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SteamVRInputDevice();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("UE4RetargettingRefs"), sizeof(FUE4RetargettingRefs), Get_Z_Construct_UScriptStruct_FUE4RetargettingRefs_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FUE4RetargettingRefs_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FUE4RetargettingRefs_Hash() { return 3534715210U; }
class UScriptStruct* FSteamVRInputOriginInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STEAMVRINPUTDEVICE_API uint32 Get_Z_Construct_UScriptStruct_FSteamVRInputOriginInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSteamVRInputOriginInfo, Z_Construct_UPackage__Script_SteamVRInputDevice(), TEXT("SteamVRInputOriginInfo"), sizeof(FSteamVRInputOriginInfo), Get_Z_Construct_UScriptStruct_FSteamVRInputOriginInfo_Hash());
	}
	return Singleton;
}
template<> STEAMVRINPUTDEVICE_API UScriptStruct* StaticStruct<FSteamVRInputOriginInfo>()
{
	return FSteamVRInputOriginInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSteamVRInputOriginInfo(FSteamVRInputOriginInfo::StaticStruct, TEXT("/Script/SteamVRInputDevice"), TEXT("SteamVRInputOriginInfo"), false, nullptr, nullptr);
static struct FScriptStruct_SteamVRInputDevice_StaticRegisterNativesFSteamVRInputOriginInfo
{
	FScriptStruct_SteamVRInputDevice_StaticRegisterNativesFSteamVRInputOriginInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SteamVRInputOriginInfo")),new UScriptStruct::TCppStructOps<FSteamVRInputOriginInfo>);
	}
} ScriptStruct_SteamVRInputDevice_StaticRegisterNativesFSteamVRInputOriginInfo;
	struct Z_Construct_UScriptStruct_FSteamVRInputOriginInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrackedDeviceModel_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TrackedDeviceModel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RenderModelComponentName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_RenderModelComponentName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrackedDeviceIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TrackedDeviceIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamVRInputOriginInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Information about the tracked device associated from the input source */" },
		{ "ModuleRelativePath", "Public/SteamVRInputDeviceFunctionLibrary.h" },
		{ "ToolTip", "Information about the tracked device associated from the input source" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSteamVRInputOriginInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSteamVRInputOriginInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamVRInputOriginInfo_Statics::NewProp_TrackedDeviceModel_MetaData[] = {
		{ "Category", "SteamVR Input" },
		{ "Comment", "//  The tracked device's model info\n" },
		{ "ModuleRelativePath", "Public/SteamVRInputDeviceFunctionLibrary.h" },
		{ "ToolTip", "The tracked device's model info" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSteamVRInputOriginInfo_Statics::NewProp_TrackedDeviceModel = { "TrackedDeviceModel", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSteamVRInputOriginInfo, TrackedDeviceModel), METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamVRInputOriginInfo_Statics::NewProp_TrackedDeviceModel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamVRInputOriginInfo_Statics::NewProp_TrackedDeviceModel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamVRInputOriginInfo_Statics::NewProp_RenderModelComponentName_MetaData[] = {
		{ "Category", "SteamVR Input" },
		{ "Comment", "//  The name of the component of the tracked device's render model that represents this input source, or an empty string if there is no associated render model component.\n" },
		{ "ModuleRelativePath", "Public/SteamVRInputDeviceFunctionLibrary.h" },
		{ "ToolTip", "The name of the component of the tracked device's render model that represents this input source, or an empty string if there is no associated render model component." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSteamVRInputOriginInfo_Statics::NewProp_RenderModelComponentName = { "RenderModelComponentName", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSteamVRInputOriginInfo, RenderModelComponentName), METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamVRInputOriginInfo_Statics::NewProp_RenderModelComponentName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamVRInputOriginInfo_Statics::NewProp_RenderModelComponentName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamVRInputOriginInfo_Statics::NewProp_TrackedDeviceIndex_MetaData[] = {
		{ "Category", "SteamVR Input" },
		{ "Comment", "// The tracked device index for the device or k_unTrackedDeviceInvalid (0xFFFFFFFF)\n" },
		{ "ModuleRelativePath", "Public/SteamVRInputDeviceFunctionLibrary.h" },
		{ "ToolTip", "The tracked device index for the device or k_unTrackedDeviceInvalid (0xFFFFFFFF)" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSteamVRInputOriginInfo_Statics::NewProp_TrackedDeviceIndex = { "TrackedDeviceIndex", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSteamVRInputOriginInfo, TrackedDeviceIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamVRInputOriginInfo_Statics::NewProp_TrackedDeviceIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamVRInputOriginInfo_Statics::NewProp_TrackedDeviceIndex_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSteamVRInputOriginInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamVRInputOriginInfo_Statics::NewProp_TrackedDeviceModel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamVRInputOriginInfo_Statics::NewProp_RenderModelComponentName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamVRInputOriginInfo_Statics::NewProp_TrackedDeviceIndex,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSteamVRInputOriginInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamVRInputDevice,
		nullptr,
		&NewStructOps,
		"SteamVRInputOriginInfo",
		sizeof(FSteamVRInputOriginInfo),
		alignof(FSteamVRInputOriginInfo),
		Z_Construct_UScriptStruct_FSteamVRInputOriginInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamVRInputOriginInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamVRInputOriginInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamVRInputOriginInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSteamVRInputOriginInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSteamVRInputOriginInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SteamVRInputDevice();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SteamVRInputOriginInfo"), sizeof(FSteamVRInputOriginInfo), Get_Z_Construct_UScriptStruct_FSteamVRInputOriginInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSteamVRInputOriginInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSteamVRInputOriginInfo_Hash() { return 858196273U; }
class UScriptStruct* FSteamVRActionSet::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STEAMVRINPUTDEVICE_API uint32 Get_Z_Construct_UScriptStruct_FSteamVRActionSet_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSteamVRActionSet, Z_Construct_UPackage__Script_SteamVRInputDevice(), TEXT("SteamVRActionSet"), sizeof(FSteamVRActionSet), Get_Z_Construct_UScriptStruct_FSteamVRActionSet_Hash());
	}
	return Singleton;
}
template<> STEAMVRINPUTDEVICE_API UScriptStruct* StaticStruct<FSteamVRActionSet>()
{
	return FSteamVRActionSet::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSteamVRActionSet(FSteamVRActionSet::StaticStruct, TEXT("/Script/SteamVRInputDevice"), TEXT("SteamVRActionSet"), false, nullptr, nullptr);
static struct FScriptStruct_SteamVRInputDevice_StaticRegisterNativesFSteamVRActionSet
{
	FScriptStruct_SteamVRInputDevice_StaticRegisterNativesFSteamVRActionSet()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SteamVRActionSet")),new UScriptStruct::TCppStructOps<FSteamVRActionSet>);
	}
} ScriptStruct_SteamVRInputDevice_StaticRegisterNativesFSteamVRActionSet;
	struct Z_Construct_UScriptStruct_FSteamVRActionSet_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Path_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Path;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamVRActionSet_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** SteamVR action set as defined by the developer */" },
		{ "ModuleRelativePath", "Public/SteamVRInputDeviceFunctionLibrary.h" },
		{ "ToolTip", "SteamVR action set as defined by the developer" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSteamVRActionSet_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSteamVRActionSet>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamVRActionSet_Statics::NewProp_Path_MetaData[] = {
		{ "Category", "SteamVR Input" },
		{ "Comment", "// The path defined for this action set (e.g. /actions/main)\n" },
		{ "ModuleRelativePath", "Public/SteamVRInputDeviceFunctionLibrary.h" },
		{ "ToolTip", "The path defined for this action set (e.g. /actions/main)" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSteamVRActionSet_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSteamVRActionSet, Path), METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamVRActionSet_Statics::NewProp_Path_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamVRActionSet_Statics::NewProp_Path_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSteamVRActionSet_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamVRActionSet_Statics::NewProp_Path,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSteamVRActionSet_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamVRInputDevice,
		nullptr,
		&NewStructOps,
		"SteamVRActionSet",
		sizeof(FSteamVRActionSet),
		alignof(FSteamVRActionSet),
		Z_Construct_UScriptStruct_FSteamVRActionSet_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamVRActionSet_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamVRActionSet_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamVRActionSet_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSteamVRActionSet()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSteamVRActionSet_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SteamVRInputDevice();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SteamVRActionSet"), sizeof(FSteamVRActionSet), Get_Z_Construct_UScriptStruct_FSteamVRActionSet_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSteamVRActionSet_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSteamVRActionSet_Hash() { return 1331033686U; }
class UScriptStruct* FSteamVRAction::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STEAMVRINPUTDEVICE_API uint32 Get_Z_Construct_UScriptStruct_FSteamVRAction_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSteamVRAction, Z_Construct_UPackage__Script_SteamVRInputDevice(), TEXT("SteamVRAction"), sizeof(FSteamVRAction), Get_Z_Construct_UScriptStruct_FSteamVRAction_Hash());
	}
	return Singleton;
}
template<> STEAMVRINPUTDEVICE_API UScriptStruct* StaticStruct<FSteamVRAction>()
{
	return FSteamVRAction::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSteamVRAction(FSteamVRAction::StaticStruct, TEXT("/Script/SteamVRInputDevice"), TEXT("SteamVRAction"), false, nullptr, nullptr);
static struct FScriptStruct_SteamVRInputDevice_StaticRegisterNativesFSteamVRAction
{
	FScriptStruct_SteamVRInputDevice_StaticRegisterNativesFSteamVRAction()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SteamVRAction")),new UScriptStruct::TCppStructOps<FSteamVRAction>);
	}
} ScriptStruct_SteamVRInputDevice_StaticRegisterNativesFSteamVRAction;
	struct Z_Construct_UScriptStruct_FSteamVRAction_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Path_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Path;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamVRAction_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** SteamVR actions as defined by the developer */" },
		{ "ModuleRelativePath", "Public/SteamVRInputDeviceFunctionLibrary.h" },
		{ "ToolTip", "SteamVR actions as defined by the developer" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSteamVRAction_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSteamVRAction>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamVRAction_Statics::NewProp_Path_MetaData[] = {
		{ "Category", "SteamVR Input" },
		{ "Comment", "// The path defined for the action (e.g. main/in/{ActionName})\n" },
		{ "ModuleRelativePath", "Public/SteamVRInputDeviceFunctionLibrary.h" },
		{ "ToolTip", "The path defined for the action (e.g. main/in/{ActionName})" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSteamVRAction_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSteamVRAction, Path), METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamVRAction_Statics::NewProp_Path_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamVRAction_Statics::NewProp_Path_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamVRAction_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "SteamVR Input" },
		{ "Comment", "// The SteamVR name of the action (e.g. Teleport, OpenConsole)\n" },
		{ "ModuleRelativePath", "Public/SteamVRInputDeviceFunctionLibrary.h" },
		{ "ToolTip", "The SteamVR name of the action (e.g. Teleport, OpenConsole)" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSteamVRAction_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSteamVRAction, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamVRAction_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamVRAction_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSteamVRAction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamVRAction_Statics::NewProp_Path,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamVRAction_Statics::NewProp_Name,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSteamVRAction_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamVRInputDevice,
		nullptr,
		&NewStructOps,
		"SteamVRAction",
		sizeof(FSteamVRAction),
		alignof(FSteamVRAction),
		Z_Construct_UScriptStruct_FSteamVRAction_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamVRAction_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamVRAction_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamVRAction_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSteamVRAction()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSteamVRAction_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SteamVRInputDevice();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SteamVRAction"), sizeof(FSteamVRAction), Get_Z_Construct_UScriptStruct_FSteamVRAction_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSteamVRAction_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSteamVRAction_Hash() { return 2757860536U; }
class UScriptStruct* FSteamVRFingerSplays::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STEAMVRINPUTDEVICE_API uint32 Get_Z_Construct_UScriptStruct_FSteamVRFingerSplays_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSteamVRFingerSplays, Z_Construct_UPackage__Script_SteamVRInputDevice(), TEXT("SteamVRFingerSplays"), sizeof(FSteamVRFingerSplays), Get_Z_Construct_UScriptStruct_FSteamVRFingerSplays_Hash());
	}
	return Singleton;
}
template<> STEAMVRINPUTDEVICE_API UScriptStruct* StaticStruct<FSteamVRFingerSplays>()
{
	return FSteamVRFingerSplays::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSteamVRFingerSplays(FSteamVRFingerSplays::StaticStruct, TEXT("/Script/SteamVRInputDevice"), TEXT("SteamVRFingerSplays"), false, nullptr, nullptr);
static struct FScriptStruct_SteamVRInputDevice_StaticRegisterNativesFSteamVRFingerSplays
{
	FScriptStruct_SteamVRInputDevice_StaticRegisterNativesFSteamVRFingerSplays()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SteamVRFingerSplays")),new UScriptStruct::TCppStructOps<FSteamVRFingerSplays>);
	}
} ScriptStruct_SteamVRInputDevice_StaticRegisterNativesFSteamVRFingerSplays;
	struct Z_Construct_UScriptStruct_FSteamVRFingerSplays_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Ring_Pinky_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Ring_Pinky;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Middle_Ring_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Middle_Ring;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Index_Middle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Index_Middle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Thumb_Index_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Thumb_Index;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamVRFingerSplays_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** SteamVR finger splays */" },
		{ "ModuleRelativePath", "Public/SteamVRInputDeviceFunctionLibrary.h" },
		{ "ToolTip", "SteamVR finger splays" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSteamVRFingerSplays_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSteamVRFingerSplays>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamVRFingerSplays_Statics::NewProp_Ring_Pinky_MetaData[] = {
		{ "Category", "SteamVR Input" },
		{ "ModuleRelativePath", "Public/SteamVRInputDeviceFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSteamVRFingerSplays_Statics::NewProp_Ring_Pinky = { "Ring_Pinky", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSteamVRFingerSplays, Ring_Pinky), METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamVRFingerSplays_Statics::NewProp_Ring_Pinky_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamVRFingerSplays_Statics::NewProp_Ring_Pinky_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamVRFingerSplays_Statics::NewProp_Middle_Ring_MetaData[] = {
		{ "Category", "SteamVR Input" },
		{ "ModuleRelativePath", "Public/SteamVRInputDeviceFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSteamVRFingerSplays_Statics::NewProp_Middle_Ring = { "Middle_Ring", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSteamVRFingerSplays, Middle_Ring), METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamVRFingerSplays_Statics::NewProp_Middle_Ring_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamVRFingerSplays_Statics::NewProp_Middle_Ring_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamVRFingerSplays_Statics::NewProp_Index_Middle_MetaData[] = {
		{ "Category", "SteamVR Input" },
		{ "ModuleRelativePath", "Public/SteamVRInputDeviceFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSteamVRFingerSplays_Statics::NewProp_Index_Middle = { "Index_Middle", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSteamVRFingerSplays, Index_Middle), METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamVRFingerSplays_Statics::NewProp_Index_Middle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamVRFingerSplays_Statics::NewProp_Index_Middle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamVRFingerSplays_Statics::NewProp_Thumb_Index_MetaData[] = {
		{ "Category", "SteamVR Input" },
		{ "ModuleRelativePath", "Public/SteamVRInputDeviceFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSteamVRFingerSplays_Statics::NewProp_Thumb_Index = { "Thumb_Index", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSteamVRFingerSplays, Thumb_Index), METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamVRFingerSplays_Statics::NewProp_Thumb_Index_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamVRFingerSplays_Statics::NewProp_Thumb_Index_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSteamVRFingerSplays_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamVRFingerSplays_Statics::NewProp_Ring_Pinky,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamVRFingerSplays_Statics::NewProp_Middle_Ring,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamVRFingerSplays_Statics::NewProp_Index_Middle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamVRFingerSplays_Statics::NewProp_Thumb_Index,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSteamVRFingerSplays_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamVRInputDevice,
		nullptr,
		&NewStructOps,
		"SteamVRFingerSplays",
		sizeof(FSteamVRFingerSplays),
		alignof(FSteamVRFingerSplays),
		Z_Construct_UScriptStruct_FSteamVRFingerSplays_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamVRFingerSplays_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamVRFingerSplays_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamVRFingerSplays_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSteamVRFingerSplays()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSteamVRFingerSplays_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SteamVRInputDevice();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SteamVRFingerSplays"), sizeof(FSteamVRFingerSplays), Get_Z_Construct_UScriptStruct_FSteamVRFingerSplays_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSteamVRFingerSplays_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSteamVRFingerSplays_Hash() { return 1088812205U; }
class UScriptStruct* FSteamVRFingerCurls::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STEAMVRINPUTDEVICE_API uint32 Get_Z_Construct_UScriptStruct_FSteamVRFingerCurls_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSteamVRFingerCurls, Z_Construct_UPackage__Script_SteamVRInputDevice(), TEXT("SteamVRFingerCurls"), sizeof(FSteamVRFingerCurls), Get_Z_Construct_UScriptStruct_FSteamVRFingerCurls_Hash());
	}
	return Singleton;
}
template<> STEAMVRINPUTDEVICE_API UScriptStruct* StaticStruct<FSteamVRFingerCurls>()
{
	return FSteamVRFingerCurls::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSteamVRFingerCurls(FSteamVRFingerCurls::StaticStruct, TEXT("/Script/SteamVRInputDevice"), TEXT("SteamVRFingerCurls"), false, nullptr, nullptr);
static struct FScriptStruct_SteamVRInputDevice_StaticRegisterNativesFSteamVRFingerCurls
{
	FScriptStruct_SteamVRInputDevice_StaticRegisterNativesFSteamVRFingerCurls()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SteamVRFingerCurls")),new UScriptStruct::TCppStructOps<FSteamVRFingerCurls>);
	}
} ScriptStruct_SteamVRInputDevice_StaticRegisterNativesFSteamVRFingerCurls;
	struct Z_Construct_UScriptStruct_FSteamVRFingerCurls_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Pinky_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Pinky;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Ring_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Ring;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Middle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Middle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Index;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Thumb_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Thumb;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamVRFingerCurls_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** SteamVR finger curls */" },
		{ "ModuleRelativePath", "Public/SteamVRInputDeviceFunctionLibrary.h" },
		{ "ToolTip", "SteamVR finger curls" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSteamVRFingerCurls_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSteamVRFingerCurls>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamVRFingerCurls_Statics::NewProp_Pinky_MetaData[] = {
		{ "Category", "SteamVR Input" },
		{ "ModuleRelativePath", "Public/SteamVRInputDeviceFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSteamVRFingerCurls_Statics::NewProp_Pinky = { "Pinky", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSteamVRFingerCurls, Pinky), METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamVRFingerCurls_Statics::NewProp_Pinky_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamVRFingerCurls_Statics::NewProp_Pinky_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamVRFingerCurls_Statics::NewProp_Ring_MetaData[] = {
		{ "Category", "SteamVR Input" },
		{ "ModuleRelativePath", "Public/SteamVRInputDeviceFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSteamVRFingerCurls_Statics::NewProp_Ring = { "Ring", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSteamVRFingerCurls, Ring), METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamVRFingerCurls_Statics::NewProp_Ring_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamVRFingerCurls_Statics::NewProp_Ring_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamVRFingerCurls_Statics::NewProp_Middle_MetaData[] = {
		{ "Category", "SteamVR Input" },
		{ "ModuleRelativePath", "Public/SteamVRInputDeviceFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSteamVRFingerCurls_Statics::NewProp_Middle = { "Middle", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSteamVRFingerCurls, Middle), METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamVRFingerCurls_Statics::NewProp_Middle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamVRFingerCurls_Statics::NewProp_Middle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamVRFingerCurls_Statics::NewProp_Index_MetaData[] = {
		{ "Category", "SteamVR Input" },
		{ "ModuleRelativePath", "Public/SteamVRInputDeviceFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSteamVRFingerCurls_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSteamVRFingerCurls, Index), METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamVRFingerCurls_Statics::NewProp_Index_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamVRFingerCurls_Statics::NewProp_Index_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamVRFingerCurls_Statics::NewProp_Thumb_MetaData[] = {
		{ "Category", "SteamVR Input" },
		{ "ModuleRelativePath", "Public/SteamVRInputDeviceFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSteamVRFingerCurls_Statics::NewProp_Thumb = { "Thumb", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSteamVRFingerCurls, Thumb), METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamVRFingerCurls_Statics::NewProp_Thumb_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamVRFingerCurls_Statics::NewProp_Thumb_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSteamVRFingerCurls_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamVRFingerCurls_Statics::NewProp_Pinky,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamVRFingerCurls_Statics::NewProp_Ring,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamVRFingerCurls_Statics::NewProp_Middle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamVRFingerCurls_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamVRFingerCurls_Statics::NewProp_Thumb,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSteamVRFingerCurls_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamVRInputDevice,
		nullptr,
		&NewStructOps,
		"SteamVRFingerCurls",
		sizeof(FSteamVRFingerCurls),
		alignof(FSteamVRFingerCurls),
		Z_Construct_UScriptStruct_FSteamVRFingerCurls_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamVRFingerCurls_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamVRFingerCurls_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamVRFingerCurls_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSteamVRFingerCurls()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSteamVRFingerCurls_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SteamVRInputDevice();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SteamVRFingerCurls"), sizeof(FSteamVRFingerCurls), Get_Z_Construct_UScriptStruct_FSteamVRFingerCurls_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSteamVRFingerCurls_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSteamVRFingerCurls_Hash() { return 403226462U; }
class UScriptStruct* FSteamVRSkeletonTransform::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STEAMVRINPUTDEVICE_API uint32 Get_Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSteamVRSkeletonTransform, Z_Construct_UPackage__Script_SteamVRInputDevice(), TEXT("SteamVRSkeletonTransform"), sizeof(FSteamVRSkeletonTransform), Get_Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Hash());
	}
	return Singleton;
}
template<> STEAMVRINPUTDEVICE_API UScriptStruct* StaticStruct<FSteamVRSkeletonTransform>()
{
	return FSteamVRSkeletonTransform::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSteamVRSkeletonTransform(FSteamVRSkeletonTransform::StaticStruct, TEXT("/Script/SteamVRInputDevice"), TEXT("SteamVRSkeletonTransform"), false, nullptr, nullptr);
static struct FScriptStruct_SteamVRInputDevice_StaticRegisterNativesFSteamVRSkeletonTransform
{
	FScriptStruct_SteamVRInputDevice_StaticRegisterNativesFSteamVRSkeletonTransform()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SteamVRSkeletonTransform")),new UScriptStruct::TCppStructOps<FSteamVRSkeletonTransform>);
	}
} ScriptStruct_SteamVRInputDevice_StaticRegisterNativesFSteamVRSkeletonTransform;
	struct Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Aux_Pinky_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Aux_Pinky;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Aux_Ring_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Aux_Ring;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Aux_Middle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Aux_Middle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Aux_Index_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Aux_Index;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Aux_Thumb_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Aux_Thumb;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Pinky_4_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Pinky_4;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Pinky_3_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Pinky_3;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Pinky_2_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Pinky_2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Pinky_1_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Pinky_1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Pinky_0_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Pinky_0;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Ring_4_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Ring_4;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Ring_3_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Ring_3;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Ring_2_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Ring_2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Ring_1_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Ring_1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Ring_0_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Ring_0;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Middle_4_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Middle_4;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Middle_3_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Middle_3;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Middle_2_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Middle_2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Middle_1_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Middle_1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Middle_0_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Middle_0;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Index_4_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Index_4;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Index_3_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Index_3;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Index_2_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Index_2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Index_1_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Index_1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Index_0_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Index_0;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Thumb_3_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Thumb_3;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Thumb_2_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Thumb_2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Thumb_1_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Thumb_1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Thumb_0_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Thumb_0;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Wrist_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Wrist;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Root_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Root;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** UE4 Bone definition of the SteamVR Skeleton */" },
		{ "ModuleRelativePath", "Public/SteamVRInputDeviceFunctionLibrary.h" },
		{ "ToolTip", "UE4 Bone definition of the SteamVR Skeleton" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSteamVRSkeletonTransform>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Aux_Pinky_MetaData[] = {
		{ "Category", "SteamVR Input" },
		{ "ModuleRelativePath", "Public/SteamVRInputDeviceFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Aux_Pinky = { "Aux_Pinky", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSteamVRSkeletonTransform, Aux_Pinky), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Aux_Pinky_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Aux_Pinky_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Aux_Ring_MetaData[] = {
		{ "Category", "SteamVR Input" },
		{ "ModuleRelativePath", "Public/SteamVRInputDeviceFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Aux_Ring = { "Aux_Ring", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSteamVRSkeletonTransform, Aux_Ring), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Aux_Ring_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Aux_Ring_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Aux_Middle_MetaData[] = {
		{ "Category", "SteamVR Input" },
		{ "ModuleRelativePath", "Public/SteamVRInputDeviceFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Aux_Middle = { "Aux_Middle", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSteamVRSkeletonTransform, Aux_Middle), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Aux_Middle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Aux_Middle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Aux_Index_MetaData[] = {
		{ "Category", "SteamVR Input" },
		{ "ModuleRelativePath", "Public/SteamVRInputDeviceFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Aux_Index = { "Aux_Index", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSteamVRSkeletonTransform, Aux_Index), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Aux_Index_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Aux_Index_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Aux_Thumb_MetaData[] = {
		{ "Category", "SteamVR Input" },
		{ "ModuleRelativePath", "Public/SteamVRInputDeviceFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Aux_Thumb = { "Aux_Thumb", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSteamVRSkeletonTransform, Aux_Thumb), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Aux_Thumb_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Aux_Thumb_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Pinky_4_MetaData[] = {
		{ "Category", "SteamVR Input" },
		{ "ModuleRelativePath", "Public/SteamVRInputDeviceFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Pinky_4 = { "Pinky_4", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSteamVRSkeletonTransform, Pinky_4), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Pinky_4_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Pinky_4_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Pinky_3_MetaData[] = {
		{ "Category", "SteamVR Input" },
		{ "ModuleRelativePath", "Public/SteamVRInputDeviceFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Pinky_3 = { "Pinky_3", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSteamVRSkeletonTransform, Pinky_3), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Pinky_3_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Pinky_3_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Pinky_2_MetaData[] = {
		{ "Category", "SteamVR Input" },
		{ "ModuleRelativePath", "Public/SteamVRInputDeviceFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Pinky_2 = { "Pinky_2", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSteamVRSkeletonTransform, Pinky_2), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Pinky_2_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Pinky_2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Pinky_1_MetaData[] = {
		{ "Category", "SteamVR Input" },
		{ "ModuleRelativePath", "Public/SteamVRInputDeviceFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Pinky_1 = { "Pinky_1", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSteamVRSkeletonTransform, Pinky_1), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Pinky_1_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Pinky_1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Pinky_0_MetaData[] = {
		{ "Category", "SteamVR Input" },
		{ "ModuleRelativePath", "Public/SteamVRInputDeviceFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Pinky_0 = { "Pinky_0", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSteamVRSkeletonTransform, Pinky_0), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Pinky_0_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Pinky_0_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Ring_4_MetaData[] = {
		{ "Category", "SteamVR Input" },
		{ "ModuleRelativePath", "Public/SteamVRInputDeviceFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Ring_4 = { "Ring_4", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSteamVRSkeletonTransform, Ring_4), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Ring_4_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Ring_4_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Ring_3_MetaData[] = {
		{ "Category", "SteamVR Input" },
		{ "ModuleRelativePath", "Public/SteamVRInputDeviceFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Ring_3 = { "Ring_3", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSteamVRSkeletonTransform, Ring_3), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Ring_3_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Ring_3_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Ring_2_MetaData[] = {
		{ "Category", "SteamVR Input" },
		{ "ModuleRelativePath", "Public/SteamVRInputDeviceFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Ring_2 = { "Ring_2", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSteamVRSkeletonTransform, Ring_2), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Ring_2_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Ring_2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Ring_1_MetaData[] = {
		{ "Category", "SteamVR Input" },
		{ "ModuleRelativePath", "Public/SteamVRInputDeviceFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Ring_1 = { "Ring_1", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSteamVRSkeletonTransform, Ring_1), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Ring_1_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Ring_1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Ring_0_MetaData[] = {
		{ "Category", "SteamVR Input" },
		{ "ModuleRelativePath", "Public/SteamVRInputDeviceFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Ring_0 = { "Ring_0", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSteamVRSkeletonTransform, Ring_0), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Ring_0_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Ring_0_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Middle_4_MetaData[] = {
		{ "Category", "SteamVR Input" },
		{ "ModuleRelativePath", "Public/SteamVRInputDeviceFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Middle_4 = { "Middle_4", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSteamVRSkeletonTransform, Middle_4), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Middle_4_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Middle_4_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Middle_3_MetaData[] = {
		{ "Category", "SteamVR Input" },
		{ "ModuleRelativePath", "Public/SteamVRInputDeviceFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Middle_3 = { "Middle_3", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSteamVRSkeletonTransform, Middle_3), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Middle_3_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Middle_3_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Middle_2_MetaData[] = {
		{ "Category", "SteamVR Input" },
		{ "ModuleRelativePath", "Public/SteamVRInputDeviceFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Middle_2 = { "Middle_2", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSteamVRSkeletonTransform, Middle_2), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Middle_2_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Middle_2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Middle_1_MetaData[] = {
		{ "Category", "SteamVR Input" },
		{ "ModuleRelativePath", "Public/SteamVRInputDeviceFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Middle_1 = { "Middle_1", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSteamVRSkeletonTransform, Middle_1), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Middle_1_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Middle_1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Middle_0_MetaData[] = {
		{ "Category", "SteamVR Input" },
		{ "ModuleRelativePath", "Public/SteamVRInputDeviceFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Middle_0 = { "Middle_0", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSteamVRSkeletonTransform, Middle_0), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Middle_0_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Middle_0_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Index_4_MetaData[] = {
		{ "Category", "SteamVR Input" },
		{ "ModuleRelativePath", "Public/SteamVRInputDeviceFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Index_4 = { "Index_4", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSteamVRSkeletonTransform, Index_4), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Index_4_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Index_4_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Index_3_MetaData[] = {
		{ "Category", "SteamVR Input" },
		{ "ModuleRelativePath", "Public/SteamVRInputDeviceFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Index_3 = { "Index_3", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSteamVRSkeletonTransform, Index_3), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Index_3_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Index_3_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Index_2_MetaData[] = {
		{ "Category", "SteamVR Input" },
		{ "ModuleRelativePath", "Public/SteamVRInputDeviceFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Index_2 = { "Index_2", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSteamVRSkeletonTransform, Index_2), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Index_2_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Index_2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Index_1_MetaData[] = {
		{ "Category", "SteamVR Input" },
		{ "ModuleRelativePath", "Public/SteamVRInputDeviceFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Index_1 = { "Index_1", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSteamVRSkeletonTransform, Index_1), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Index_1_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Index_1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Index_0_MetaData[] = {
		{ "Category", "SteamVR Input" },
		{ "ModuleRelativePath", "Public/SteamVRInputDeviceFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Index_0 = { "Index_0", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSteamVRSkeletonTransform, Index_0), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Index_0_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Index_0_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Thumb_3_MetaData[] = {
		{ "Category", "SteamVR Input" },
		{ "ModuleRelativePath", "Public/SteamVRInputDeviceFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Thumb_3 = { "Thumb_3", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSteamVRSkeletonTransform, Thumb_3), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Thumb_3_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Thumb_3_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Thumb_2_MetaData[] = {
		{ "Category", "SteamVR Input" },
		{ "ModuleRelativePath", "Public/SteamVRInputDeviceFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Thumb_2 = { "Thumb_2", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSteamVRSkeletonTransform, Thumb_2), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Thumb_2_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Thumb_2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Thumb_1_MetaData[] = {
		{ "Category", "SteamVR Input" },
		{ "ModuleRelativePath", "Public/SteamVRInputDeviceFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Thumb_1 = { "Thumb_1", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSteamVRSkeletonTransform, Thumb_1), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Thumb_1_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Thumb_1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Thumb_0_MetaData[] = {
		{ "Category", "SteamVR Input" },
		{ "ModuleRelativePath", "Public/SteamVRInputDeviceFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Thumb_0 = { "Thumb_0", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSteamVRSkeletonTransform, Thumb_0), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Thumb_0_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Thumb_0_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Wrist_MetaData[] = {
		{ "Category", "SteamVR Input" },
		{ "ModuleRelativePath", "Public/SteamVRInputDeviceFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Wrist = { "Wrist", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSteamVRSkeletonTransform, Wrist), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Wrist_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Wrist_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Root_MetaData[] = {
		{ "Category", "SteamVR Input" },
		{ "ModuleRelativePath", "Public/SteamVRInputDeviceFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Root = { "Root", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSteamVRSkeletonTransform, Root), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Root_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Root_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Aux_Pinky,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Aux_Ring,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Aux_Middle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Aux_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Aux_Thumb,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Pinky_4,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Pinky_3,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Pinky_2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Pinky_1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Pinky_0,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Ring_4,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Ring_3,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Ring_2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Ring_1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Ring_0,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Middle_4,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Middle_3,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Middle_2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Middle_1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Middle_0,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Index_4,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Index_3,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Index_2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Index_1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Index_0,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Thumb_3,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Thumb_2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Thumb_1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Thumb_0,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Wrist,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Root,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamVRInputDevice,
		nullptr,
		&NewStructOps,
		"SteamVRSkeletonTransform",
		sizeof(FSteamVRSkeletonTransform),
		alignof(FSteamVRSkeletonTransform),
		Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSteamVRSkeletonTransform()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SteamVRInputDevice();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SteamVRSkeletonTransform"), sizeof(FSteamVRSkeletonTransform), Get_Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Hash() { return 3657362988U; }
	DEFINE_FUNCTION(USteamVRInputDeviceFunctionLibrary::execGetUserIPD)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=USteamVRInputDeviceFunctionLibrary::GetUserIPD();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamVRInputDeviceFunctionLibrary::execResetSeatedPosition)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USteamVRInputDeviceFunctionLibrary::ResetSeatedPosition();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamVRInputDeviceFunctionLibrary::execFindSteamVR_InputBindingInfo)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_ActionName);
		P_GET_PROPERTY(FNameProperty,Z_Param_ActionSet);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FSteamVRInputBindingInfo>*)Z_Param__Result=USteamVRInputDeviceFunctionLibrary::FindSteamVR_InputBindingInfo(Z_Param_ActionName,Z_Param_ActionSet);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamVRInputDeviceFunctionLibrary::execGetSteamVR_InputBindingInfo)
	{
		P_GET_STRUCT(FSteamVRAction,Z_Param_SteamVRActionHandle);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FSteamVRInputBindingInfo>*)Z_Param__Result=USteamVRInputDeviceFunctionLibrary::GetSteamVR_InputBindingInfo(Z_Param_SteamVRActionHandle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamVRInputDeviceFunctionLibrary::execShowAllSteamVR_ActionOrigins)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		USteamVRInputDeviceFunctionLibrary::ShowAllSteamVR_ActionOrigins();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamVRInputDeviceFunctionLibrary::execSetSteamVR_GlobalPredictedSecondsFromNow)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=USteamVRInputDeviceFunctionLibrary::SetSteamVR_GlobalPredictedSecondsFromNow(Z_Param_NewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamVRInputDeviceFunctionLibrary::execGetSteamVR_GlobalPredictedSecondsFromNow)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=USteamVRInputDeviceFunctionLibrary::GetSteamVR_GlobalPredictedSecondsFromNow();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamVRInputDeviceFunctionLibrary::execGetSteamVR_HandPoseRelativeToNow)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Position);
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_Orientation);
		P_GET_ENUM(ESteamVRHand,Z_Param_Hand);
		P_GET_PROPERTY(FFloatProperty,Z_Param_PredictedSecondsFromNow);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USteamVRInputDeviceFunctionLibrary::GetSteamVR_HandPoseRelativeToNow(Z_Param_Out_Position,Z_Param_Out_Orientation,ESteamVRHand(Z_Param_Hand),Z_Param_PredictedSecondsFromNow);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamVRInputDeviceFunctionLibrary::execFindSteamVR_ActionOrigin)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_ActionName);
		P_GET_PROPERTY(FNameProperty,Z_Param_ActionSet);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USteamVRInputDeviceFunctionLibrary::FindSteamVR_ActionOrigin(Z_Param_ActionName,Z_Param_ActionSet);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamVRInputDeviceFunctionLibrary::execShowSteamVR_ActionOrigin)
	{
		P_GET_STRUCT(FSteamVRAction,Z_Param_SteamVRAction);
		P_GET_STRUCT(FSteamVRActionSet,Z_Param_SteamVRActionSet);
		P_FINISH;
		P_NATIVE_BEGIN;
		USteamVRInputDeviceFunctionLibrary::ShowSteamVR_ActionOrigin(Z_Param_SteamVRAction,Z_Param_SteamVRActionSet);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamVRInputDeviceFunctionLibrary::execGetSteamVR_OriginLocalizedName)
	{
		P_GET_STRUCT(FSteamVRAction,Z_Param_SteamVRAction);
		P_GET_TARRAY(ESteamVRInputStringBits,Z_Param_LocalizedParts);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OriginLocalizedName);
		P_FINISH;
		P_NATIVE_BEGIN;
		USteamVRInputDeviceFunctionLibrary::GetSteamVR_OriginLocalizedName(Z_Param_SteamVRAction,Z_Param_LocalizedParts,Z_Param_Out_OriginLocalizedName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamVRInputDeviceFunctionLibrary::execFindSteamVR_OriginTrackedDeviceInfo)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_ActionName);
		P_GET_UBOOL_REF(Z_Param_Out_bResult);
		P_GET_STRUCT_REF(FSteamVRInputOriginInfo,Z_Param_Out_InputOriginInfo);
		P_GET_PROPERTY(FNameProperty,Z_Param_ActionSet);
		P_FINISH;
		P_NATIVE_BEGIN;
		USteamVRInputDeviceFunctionLibrary::FindSteamVR_OriginTrackedDeviceInfo(Z_Param_ActionName,Z_Param_Out_bResult,Z_Param_Out_InputOriginInfo,Z_Param_ActionSet);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamVRInputDeviceFunctionLibrary::execGetSteamVR_OriginTrackedDeviceInfo)
	{
		P_GET_STRUCT(FSteamVRAction,Z_Param_SteamVRAction);
		P_GET_STRUCT_REF(FSteamVRInputOriginInfo,Z_Param_Out_InputOriginInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USteamVRInputDeviceFunctionLibrary::GetSteamVR_OriginTrackedDeviceInfo(Z_Param_SteamVRAction,Z_Param_Out_InputOriginInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamVRInputDeviceFunctionLibrary::execGetSteamVR_ActionSetArray)
	{
		P_GET_TARRAY_REF(FSteamVRActionSet,Z_Param_Out_SteamVRActionSets);
		P_FINISH;
		P_NATIVE_BEGIN;
		USteamVRInputDeviceFunctionLibrary::GetSteamVR_ActionSetArray(Z_Param_Out_SteamVRActionSets);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamVRInputDeviceFunctionLibrary::execFindSteamVR_Action)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_ActionName);
		P_GET_UBOOL_REF(Z_Param_Out_bResult);
		P_GET_STRUCT_REF(FSteamVRAction,Z_Param_Out_FoundAction);
		P_GET_STRUCT_REF(FSteamVRActionSet,Z_Param_Out_FoundActionSet);
		P_GET_PROPERTY(FNameProperty,Z_Param_ActionSet);
		P_FINISH;
		P_NATIVE_BEGIN;
		USteamVRInputDeviceFunctionLibrary::FindSteamVR_Action(Z_Param_ActionName,Z_Param_Out_bResult,Z_Param_Out_FoundAction,Z_Param_Out_FoundActionSet,Z_Param_ActionSet);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamVRInputDeviceFunctionLibrary::execGetSteamVR_ActionArray)
	{
		P_GET_TARRAY_REF(FSteamVRAction,Z_Param_Out_SteamVRActions);
		P_FINISH;
		P_NATIVE_BEGIN;
		USteamVRInputDeviceFunctionLibrary::GetSteamVR_ActionArray(Z_Param_Out_SteamVRActions);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamVRInputDeviceFunctionLibrary::execGetRightHandPoseData)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Position);
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_Orientation);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_AngularVelocity);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Velocity);
		P_FINISH;
		P_NATIVE_BEGIN;
		USteamVRInputDeviceFunctionLibrary::GetRightHandPoseData(Z_Param_Out_Position,Z_Param_Out_Orientation,Z_Param_Out_AngularVelocity,Z_Param_Out_Velocity);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamVRInputDeviceFunctionLibrary::execGetLeftHandPoseData)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Position);
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_Orientation);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_AngularVelocity);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Velocity);
		P_FINISH;
		P_NATIVE_BEGIN;
		USteamVRInputDeviceFunctionLibrary::GetLeftHandPoseData(Z_Param_Out_Position,Z_Param_Out_Orientation,Z_Param_Out_AngularVelocity,Z_Param_Out_Velocity);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamVRInputDeviceFunctionLibrary::execGetSkeletalTransform)
	{
		P_GET_STRUCT_REF(FSteamVRSkeletonTransform,Z_Param_Out_LeftHand);
		P_GET_STRUCT_REF(FSteamVRSkeletonTransform,Z_Param_Out_RightHand);
		P_GET_UBOOL(Z_Param_bWithController);
		P_FINISH;
		P_NATIVE_BEGIN;
		USteamVRInputDeviceFunctionLibrary::GetSkeletalTransform(Z_Param_Out_LeftHand,Z_Param_Out_RightHand,Z_Param_bWithController);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamVRInputDeviceFunctionLibrary::execSetPoseSource)
	{
		P_GET_UBOOL(Z_Param_bUseSkeletonPose);
		P_FINISH;
		P_NATIVE_BEGIN;
		USteamVRInputDeviceFunctionLibrary::SetPoseSource(Z_Param_bUseSkeletonPose);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamVRInputDeviceFunctionLibrary::execGetPoseSource)
	{
		P_GET_UBOOL_REF(Z_Param_Out_bUsingSkeletonPose);
		P_FINISH;
		P_NATIVE_BEGIN;
		USteamVRInputDeviceFunctionLibrary::GetPoseSource(Z_Param_Out_bUsingSkeletonPose);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamVRInputDeviceFunctionLibrary::execSetCurlsAndSplaysState)
	{
		P_GET_UBOOL(Z_Param_NewLeftHandState);
		P_GET_UBOOL(Z_Param_NewRightHandState);
		P_FINISH;
		P_NATIVE_BEGIN;
		USteamVRInputDeviceFunctionLibrary::SetCurlsAndSplaysState(Z_Param_NewLeftHandState,Z_Param_NewRightHandState);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamVRInputDeviceFunctionLibrary::execGetControllerFidelity)
	{
		P_GET_ENUM_REF(EControllerFidelity,Z_Param_Out_LeftControllerFidelity);
		P_GET_ENUM_REF(EControllerFidelity,Z_Param_Out_RightControllerFidelity);
		P_FINISH;
		P_NATIVE_BEGIN;
		USteamVRInputDeviceFunctionLibrary::GetControllerFidelity((EControllerFidelity&)(Z_Param_Out_LeftControllerFidelity),(EControllerFidelity&)(Z_Param_Out_RightControllerFidelity));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamVRInputDeviceFunctionLibrary::execGetSkeletalState)
	{
		P_GET_UBOOL_REF(Z_Param_Out_LeftHandState);
		P_GET_UBOOL_REF(Z_Param_Out_RightHandState);
		P_FINISH;
		P_NATIVE_BEGIN;
		USteamVRInputDeviceFunctionLibrary::GetSkeletalState(Z_Param_Out_LeftHandState,Z_Param_Out_RightHandState);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamVRInputDeviceFunctionLibrary::execGetCurlsAndSplaysState)
	{
		P_GET_UBOOL_REF(Z_Param_Out_LeftHandState);
		P_GET_UBOOL_REF(Z_Param_Out_RightHandState);
		P_FINISH;
		P_NATIVE_BEGIN;
		USteamVRInputDeviceFunctionLibrary::GetCurlsAndSplaysState(Z_Param_Out_LeftHandState,Z_Param_Out_RightHandState);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamVRInputDeviceFunctionLibrary::execPlaySteamVR_HapticFeedback)
	{
		P_GET_ENUM(ESteamVRHand,Z_Param_Hand);
		P_GET_PROPERTY(FFloatProperty,Z_Param_StartSecondsFromNow);
		P_GET_PROPERTY(FFloatProperty,Z_Param_DurationSeconds);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Frequency);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Amplitude);
		P_FINISH;
		P_NATIVE_BEGIN;
		USteamVRInputDeviceFunctionLibrary::PlaySteamVR_HapticFeedback(ESteamVRHand(Z_Param_Hand),Z_Param_StartSecondsFromNow,Z_Param_DurationSeconds,Z_Param_Frequency,Z_Param_Amplitude);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamVRInputDeviceFunctionLibrary::execGetFingerCurlsAndSplays)
	{
		P_GET_ENUM(EHand,Z_Param_Hand);
		P_GET_STRUCT_REF(FSteamVRFingerCurls,Z_Param_Out_FingerCurls);
		P_GET_STRUCT_REF(FSteamVRFingerSplays,Z_Param_Out_FingerSplays);
		P_GET_ENUM(ESkeletalSummaryDataType,Z_Param_SummaryDataType);
		P_FINISH;
		P_NATIVE_BEGIN;
		USteamVRInputDeviceFunctionLibrary::GetFingerCurlsAndSplays(EHand(Z_Param_Hand),Z_Param_Out_FingerCurls,Z_Param_Out_FingerSplays,ESkeletalSummaryDataType(Z_Param_SummaryDataType));
		P_NATIVE_END;
	}
	void USteamVRInputDeviceFunctionLibrary::StaticRegisterNativesUSteamVRInputDeviceFunctionLibrary()
	{
		UClass* Class = USteamVRInputDeviceFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FindSteamVR_Action", &USteamVRInputDeviceFunctionLibrary::execFindSteamVR_Action },
			{ "FindSteamVR_ActionOrigin", &USteamVRInputDeviceFunctionLibrary::execFindSteamVR_ActionOrigin },
			{ "FindSteamVR_InputBindingInfo", &USteamVRInputDeviceFunctionLibrary::execFindSteamVR_InputBindingInfo },
			{ "FindSteamVR_OriginTrackedDeviceInfo", &USteamVRInputDeviceFunctionLibrary::execFindSteamVR_OriginTrackedDeviceInfo },
			{ "GetControllerFidelity", &USteamVRInputDeviceFunctionLibrary::execGetControllerFidelity },
			{ "GetCurlsAndSplaysState", &USteamVRInputDeviceFunctionLibrary::execGetCurlsAndSplaysState },
			{ "GetFingerCurlsAndSplays", &USteamVRInputDeviceFunctionLibrary::execGetFingerCurlsAndSplays },
			{ "GetLeftHandPoseData", &USteamVRInputDeviceFunctionLibrary::execGetLeftHandPoseData },
			{ "GetPoseSource", &USteamVRInputDeviceFunctionLibrary::execGetPoseSource },
			{ "GetRightHandPoseData", &USteamVRInputDeviceFunctionLibrary::execGetRightHandPoseData },
			{ "GetSkeletalState", &USteamVRInputDeviceFunctionLibrary::execGetSkeletalState },
			{ "GetSkeletalTransform", &USteamVRInputDeviceFunctionLibrary::execGetSkeletalTransform },
			{ "GetSteamVR_ActionArray", &USteamVRInputDeviceFunctionLibrary::execGetSteamVR_ActionArray },
			{ "GetSteamVR_ActionSetArray", &USteamVRInputDeviceFunctionLibrary::execGetSteamVR_ActionSetArray },
			{ "GetSteamVR_GlobalPredictedSecondsFromNow", &USteamVRInputDeviceFunctionLibrary::execGetSteamVR_GlobalPredictedSecondsFromNow },
			{ "GetSteamVR_HandPoseRelativeToNow", &USteamVRInputDeviceFunctionLibrary::execGetSteamVR_HandPoseRelativeToNow },
			{ "GetSteamVR_InputBindingInfo", &USteamVRInputDeviceFunctionLibrary::execGetSteamVR_InputBindingInfo },
			{ "GetSteamVR_OriginLocalizedName", &USteamVRInputDeviceFunctionLibrary::execGetSteamVR_OriginLocalizedName },
			{ "GetSteamVR_OriginTrackedDeviceInfo", &USteamVRInputDeviceFunctionLibrary::execGetSteamVR_OriginTrackedDeviceInfo },
			{ "GetUserIPD", &USteamVRInputDeviceFunctionLibrary::execGetUserIPD },
			{ "PlaySteamVR_HapticFeedback", &USteamVRInputDeviceFunctionLibrary::execPlaySteamVR_HapticFeedback },
			{ "ResetSeatedPosition", &USteamVRInputDeviceFunctionLibrary::execResetSeatedPosition },
			{ "SetCurlsAndSplaysState", &USteamVRInputDeviceFunctionLibrary::execSetCurlsAndSplaysState },
			{ "SetPoseSource", &USteamVRInputDeviceFunctionLibrary::execSetPoseSource },
			{ "SetSteamVR_GlobalPredictedSecondsFromNow", &USteamVRInputDeviceFunctionLibrary::execSetSteamVR_GlobalPredictedSecondsFromNow },
			{ "ShowAllSteamVR_ActionOrigins", &USteamVRInputDeviceFunctionLibrary::execShowAllSteamVR_ActionOrigins },
			{ "ShowSteamVR_ActionOrigin", &USteamVRInputDeviceFunctionLibrary::execShowSteamVR_ActionOrigin },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_FindSteamVR_Action_Statics
	{
		struct SteamVRInputDeviceFunctionLibrary_eventFindSteamVR_Action_Parms
		{
			FName ActionName;
			bool bResult;
			FSteamVRAction FoundAction;
			FSteamVRActionSet FoundActionSet;
			FName ActionSet;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ActionSet;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FoundActionSet;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FoundAction;
		static void NewProp_bResult_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bResult;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ActionName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_FindSteamVR_Action_Statics::NewProp_ActionSet = { "ActionSet", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamVRInputDeviceFunctionLibrary_eventFindSteamVR_Action_Parms, ActionSet), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_FindSteamVR_Action_Statics::NewProp_FoundActionSet = { "FoundActionSet", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamVRInputDeviceFunctionLibrary_eventFindSteamVR_Action_Parms, FoundActionSet), Z_Construct_UScriptStruct_FSteamVRActionSet, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_FindSteamVR_Action_Statics::NewProp_FoundAction = { "FoundAction", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamVRInputDeviceFunctionLibrary_eventFindSteamVR_Action_Parms, FoundAction), Z_Construct_UScriptStruct_FSteamVRAction, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_FindSteamVR_Action_Statics::NewProp_bResult_SetBit(void* Obj)
	{
		((SteamVRInputDeviceFunctionLibrary_eventFindSteamVR_Action_Parms*)Obj)->bResult = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_FindSteamVR_Action_Statics::NewProp_bResult = { "bResult", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SteamVRInputDeviceFunctionLibrary_eventFindSteamVR_Action_Parms), &Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_FindSteamVR_Action_Statics::NewProp_bResult_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_FindSteamVR_Action_Statics::NewProp_ActionName = { "ActionName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamVRInputDeviceFunctionLibrary_eventFindSteamVR_Action_Parms, ActionName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_FindSteamVR_Action_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_FindSteamVR_Action_Statics::NewProp_ActionSet,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_FindSteamVR_Action_Statics::NewProp_FoundActionSet,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_FindSteamVR_Action_Statics::NewProp_FoundAction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_FindSteamVR_Action_Statics::NewProp_bResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_FindSteamVR_Action_Statics::NewProp_ActionName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_FindSteamVR_Action_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamVR Input" },
		{ "Comment", "/**\n\x09* Search for a valid action matching the given action name and action set\n\x09* @param ActionName - The name of the action to look for (e.g. TeleportLeft)\n\x09* @param ActionSet - The name of the action set that the action belongs to (e.g. main). Default is \"main\"\n\x09* @return bresult - The result of the search\n\x09* @return FoundAction - The action if found\n\x09* @return FoundActionSet - The action set if found\n\x09*/" },
		{ "CPP_Default_ActionSet", "main" },
		{ "ModuleRelativePath", "Public/SteamVRInputDeviceFunctionLibrary.h" },
		{ "ToolTip", "Search for a valid action matching the given action name and action set\n@param ActionName - The name of the action to look for (e.g. TeleportLeft)\n@param ActionSet - The name of the action set that the action belongs to (e.g. main). Default is \"main\"\n@return bresult - The result of the search\n@return FoundAction - The action if found\n@return FoundActionSet - The action set if found" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_FindSteamVR_Action_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamVRInputDeviceFunctionLibrary, nullptr, "FindSteamVR_Action", nullptr, nullptr, sizeof(SteamVRInputDeviceFunctionLibrary_eventFindSteamVR_Action_Parms), Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_FindSteamVR_Action_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_FindSteamVR_Action_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_FindSteamVR_Action_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_FindSteamVR_Action_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_FindSteamVR_Action()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_FindSteamVR_Action_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_FindSteamVR_ActionOrigin_Statics
	{
		struct SteamVRInputDeviceFunctionLibrary_eventFindSteamVR_ActionOrigin_Parms
		{
			FName ActionName;
			FName ActionSet;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ActionSet;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ActionName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_FindSteamVR_ActionOrigin_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SteamVRInputDeviceFunctionLibrary_eventFindSteamVR_ActionOrigin_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_FindSteamVR_ActionOrigin_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SteamVRInputDeviceFunctionLibrary_eventFindSteamVR_ActionOrigin_Parms), &Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_FindSteamVR_ActionOrigin_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_FindSteamVR_ActionOrigin_Statics::NewProp_ActionSet = { "ActionSet", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamVRInputDeviceFunctionLibrary_eventFindSteamVR_ActionOrigin_Parms, ActionSet), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_FindSteamVR_ActionOrigin_Statics::NewProp_ActionName = { "ActionName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamVRInputDeviceFunctionLibrary_eventFindSteamVR_ActionOrigin_Parms, ActionName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_FindSteamVR_ActionOrigin_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_FindSteamVR_ActionOrigin_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_FindSteamVR_ActionOrigin_Statics::NewProp_ActionSet,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_FindSteamVR_ActionOrigin_Statics::NewProp_ActionName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_FindSteamVR_ActionOrigin_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamVR Input" },
		{ "Comment", "/**\n\x09* Search and show the current binding of a provided action name and action set in the user's HMD\n\x09* @param SteamVRAction - The action that we will lookup the current binding for\n\x09* @param SteamVRActionSet - The action set that the action belongs to. Defaults to \"main\"\n\x09*/" },
		{ "CPP_Default_ActionSet", "main" },
		{ "ModuleRelativePath", "Public/SteamVRInputDeviceFunctionLibrary.h" },
		{ "ToolTip", "Search and show the current binding of a provided action name and action set in the user's HMD\n@param SteamVRAction - The action that we will lookup the current binding for\n@param SteamVRActionSet - The action set that the action belongs to. Defaults to \"main\"" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_FindSteamVR_ActionOrigin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamVRInputDeviceFunctionLibrary, nullptr, "FindSteamVR_ActionOrigin", nullptr, nullptr, sizeof(SteamVRInputDeviceFunctionLibrary_eventFindSteamVR_ActionOrigin_Parms), Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_FindSteamVR_ActionOrigin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_FindSteamVR_ActionOrigin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_FindSteamVR_ActionOrigin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_FindSteamVR_ActionOrigin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_FindSteamVR_ActionOrigin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_FindSteamVR_ActionOrigin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_FindSteamVR_InputBindingInfo_Statics
	{
		struct SteamVRInputDeviceFunctionLibrary_eventFindSteamVR_InputBindingInfo_Parms
		{
			FName ActionName;
			FName ActionSet;
			TArray<FSteamVRInputBindingInfo> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ActionSet;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ActionName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_FindSteamVR_InputBindingInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamVRInputDeviceFunctionLibrary_eventFindSteamVR_InputBindingInfo_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_FindSteamVR_InputBindingInfo_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSteamVRInputBindingInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_FindSteamVR_InputBindingInfo_Statics::NewProp_ActionSet = { "ActionSet", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamVRInputDeviceFunctionLibrary_eventFindSteamVR_InputBindingInfo_Parms, ActionSet), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_FindSteamVR_InputBindingInfo_Statics::NewProp_ActionName = { "ActionName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamVRInputDeviceFunctionLibrary_eventFindSteamVR_InputBindingInfo_Parms, ActionName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_FindSteamVR_InputBindingInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_FindSteamVR_InputBindingInfo_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_FindSteamVR_InputBindingInfo_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_FindSteamVR_InputBindingInfo_Statics::NewProp_ActionSet,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_FindSteamVR_InputBindingInfo_Statics::NewProp_ActionName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_FindSteamVR_InputBindingInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamVR Input" },
		{ "Comment", "/**\n\x09* Retrieves useful information about the SteamVR input bindings with a given action name and action set.\n\x09* @param ActionName - The name of the action that binding info will be retrieved for the currently active controller\n\x09* @param ActionSet - The name of the action set that the action belongs in\n\x09* @return SteamVRInputBindingInfo - Array of binding info for an action with the currently active controller\n\x09*/" },
		{ "CPP_Default_ActionSet", "main" },
		{ "ModuleRelativePath", "Public/SteamVRInputDeviceFunctionLibrary.h" },
		{ "ToolTip", "Retrieves useful information about the SteamVR input bindings with a given action name and action set.\n@param ActionName - The name of the action that binding info will be retrieved for the currently active controller\n@param ActionSet - The name of the action set that the action belongs in\n@return SteamVRInputBindingInfo - Array of binding info for an action with the currently active controller" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_FindSteamVR_InputBindingInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamVRInputDeviceFunctionLibrary, nullptr, "FindSteamVR_InputBindingInfo", nullptr, nullptr, sizeof(SteamVRInputDeviceFunctionLibrary_eventFindSteamVR_InputBindingInfo_Parms), Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_FindSteamVR_InputBindingInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_FindSteamVR_InputBindingInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_FindSteamVR_InputBindingInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_FindSteamVR_InputBindingInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_FindSteamVR_InputBindingInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_FindSteamVR_InputBindingInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_FindSteamVR_OriginTrackedDeviceInfo_Statics
	{
		struct SteamVRInputDeviceFunctionLibrary_eventFindSteamVR_OriginTrackedDeviceInfo_Parms
		{
			FName ActionName;
			bool bResult;
			FSteamVRInputOriginInfo InputOriginInfo;
			FName ActionSet;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ActionSet;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InputOriginInfo;
		static void NewProp_bResult_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bResult;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ActionName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_FindSteamVR_OriginTrackedDeviceInfo_Statics::NewProp_ActionSet = { "ActionSet", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamVRInputDeviceFunctionLibrary_eventFindSteamVR_OriginTrackedDeviceInfo_Parms, ActionSet), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_FindSteamVR_OriginTrackedDeviceInfo_Statics::NewProp_InputOriginInfo = { "InputOriginInfo", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamVRInputDeviceFunctionLibrary_eventFindSteamVR_OriginTrackedDeviceInfo_Parms, InputOriginInfo), Z_Construct_UScriptStruct_FSteamVRInputOriginInfo, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_FindSteamVR_OriginTrackedDeviceInfo_Statics::NewProp_bResult_SetBit(void* Obj)
	{
		((SteamVRInputDeviceFunctionLibrary_eventFindSteamVR_OriginTrackedDeviceInfo_Parms*)Obj)->bResult = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_FindSteamVR_OriginTrackedDeviceInfo_Statics::NewProp_bResult = { "bResult", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SteamVRInputDeviceFunctionLibrary_eventFindSteamVR_OriginTrackedDeviceInfo_Parms), &Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_FindSteamVR_OriginTrackedDeviceInfo_Statics::NewProp_bResult_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_FindSteamVR_OriginTrackedDeviceInfo_Statics::NewProp_ActionName = { "ActionName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamVRInputDeviceFunctionLibrary_eventFindSteamVR_OriginTrackedDeviceInfo_Parms, ActionName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_FindSteamVR_OriginTrackedDeviceInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_FindSteamVR_OriginTrackedDeviceInfo_Statics::NewProp_ActionSet,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_FindSteamVR_OriginTrackedDeviceInfo_Statics::NewProp_InputOriginInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_FindSteamVR_OriginTrackedDeviceInfo_Statics::NewProp_bResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_FindSteamVR_OriginTrackedDeviceInfo_Statics::NewProp_ActionName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_FindSteamVR_OriginTrackedDeviceInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamVR Input" },
		{ "Comment", "/**\n\x09* Find and return information about the tracked device associated from the input source.\n\x09* @param SteamVRAction - The action that's the source of the input\n\x09* @return InputOriginInfo - The origin info of the action\n\x09* @return bool - whether the operation is successful or not\n\x09*/" },
		{ "CPP_Default_ActionSet", "main" },
		{ "ModuleRelativePath", "Public/SteamVRInputDeviceFunctionLibrary.h" },
		{ "ToolTip", "Find and return information about the tracked device associated from the input source.\n@param SteamVRAction - The action that's the source of the input\n@return InputOriginInfo - The origin info of the action\n@return bool - whether the operation is successful or not" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_FindSteamVR_OriginTrackedDeviceInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamVRInputDeviceFunctionLibrary, nullptr, "FindSteamVR_OriginTrackedDeviceInfo", nullptr, nullptr, sizeof(SteamVRInputDeviceFunctionLibrary_eventFindSteamVR_OriginTrackedDeviceInfo_Parms), Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_FindSteamVR_OriginTrackedDeviceInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_FindSteamVR_OriginTrackedDeviceInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_FindSteamVR_OriginTrackedDeviceInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_FindSteamVR_OriginTrackedDeviceInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_FindSteamVR_OriginTrackedDeviceInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_FindSteamVR_OriginTrackedDeviceInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetControllerFidelity_Statics
	{
		struct SteamVRInputDeviceFunctionLibrary_eventGetControllerFidelity_Parms
		{
			EControllerFidelity LeftControllerFidelity;
			EControllerFidelity RightControllerFidelity;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_RightControllerFidelity;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_RightControllerFidelity_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_LeftControllerFidelity;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LeftControllerFidelity_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetControllerFidelity_Statics::NewProp_RightControllerFidelity = { "RightControllerFidelity", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamVRInputDeviceFunctionLibrary_eventGetControllerFidelity_Parms, RightControllerFidelity), Z_Construct_UEnum_SteamVRInputDevice_EControllerFidelity, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetControllerFidelity_Statics::NewProp_RightControllerFidelity_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetControllerFidelity_Statics::NewProp_LeftControllerFidelity = { "LeftControllerFidelity", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamVRInputDeviceFunctionLibrary_eventGetControllerFidelity_Parms, LeftControllerFidelity), Z_Construct_UEnum_SteamVRInputDevice_EControllerFidelity, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetControllerFidelity_Statics::NewProp_LeftControllerFidelity_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetControllerFidelity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetControllerFidelity_Statics::NewProp_RightControllerFidelity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetControllerFidelity_Statics::NewProp_RightControllerFidelity_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetControllerFidelity_Statics::NewProp_LeftControllerFidelity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetControllerFidelity_Statics::NewProp_LeftControllerFidelity_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetControllerFidelity_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamVR Input" },
		{ "Comment", "/** \n\x09* Retrieve skeletal tracking level for all controllers \n\x09* @return LeftControllerFidelity - The skeletal tracking level of the left controller\n\x09* @return RightControllerFidelity -  The skeletal tracking level of the right controller\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamVRInputDeviceFunctionLibrary.h" },
		{ "ToolTip", "Retrieve skeletal tracking level for all controllers\n@return LeftControllerFidelity - The skeletal tracking level of the left controller\n@return RightControllerFidelity -  The skeletal tracking level of the right controller" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetControllerFidelity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamVRInputDeviceFunctionLibrary, nullptr, "GetControllerFidelity", nullptr, nullptr, sizeof(SteamVRInputDeviceFunctionLibrary_eventGetControllerFidelity_Parms), Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetControllerFidelity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetControllerFidelity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetControllerFidelity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetControllerFidelity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetControllerFidelity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetControllerFidelity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetCurlsAndSplaysState_Statics
	{
		struct SteamVRInputDeviceFunctionLibrary_eventGetCurlsAndSplaysState_Parms
		{
			bool LeftHandState;
			bool RightHandState;
		};
		static void NewProp_RightHandState_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_RightHandState;
		static void NewProp_LeftHandState_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_LeftHandState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetCurlsAndSplaysState_Statics::NewProp_RightHandState_SetBit(void* Obj)
	{
		((SteamVRInputDeviceFunctionLibrary_eventGetCurlsAndSplaysState_Parms*)Obj)->RightHandState = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetCurlsAndSplaysState_Statics::NewProp_RightHandState = { "RightHandState", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SteamVRInputDeviceFunctionLibrary_eventGetCurlsAndSplaysState_Parms), &Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetCurlsAndSplaysState_Statics::NewProp_RightHandState_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetCurlsAndSplaysState_Statics::NewProp_LeftHandState_SetBit(void* Obj)
	{
		((SteamVRInputDeviceFunctionLibrary_eventGetCurlsAndSplaysState_Parms*)Obj)->LeftHandState = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetCurlsAndSplaysState_Statics::NewProp_LeftHandState = { "LeftHandState", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SteamVRInputDeviceFunctionLibrary_eventGetCurlsAndSplaysState_Parms), &Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetCurlsAndSplaysState_Statics::NewProp_LeftHandState_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetCurlsAndSplaysState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetCurlsAndSplaysState_Statics::NewProp_RightHandState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetCurlsAndSplaysState_Statics::NewProp_LeftHandState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetCurlsAndSplaysState_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamVR Input" },
		{ "Comment", "/**\n\x09* Check Whether or not Curls and Splay values are being retrieved per frame from the SteamVR Input System\n\x09* @return LeftHandState - Whether or not curls and splay values are being retrieved from the left hand\n\x09* @return RightHandState -  Whether or not curls and splay values are being retrieved from the right hand\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamVRInputDeviceFunctionLibrary.h" },
		{ "ToolTip", "Check Whether or not Curls and Splay values are being retrieved per frame from the SteamVR Input System\n@return LeftHandState - Whether or not curls and splay values are being retrieved from the left hand\n@return RightHandState -  Whether or not curls and splay values are being retrieved from the right hand" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetCurlsAndSplaysState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamVRInputDeviceFunctionLibrary, nullptr, "GetCurlsAndSplaysState", nullptr, nullptr, sizeof(SteamVRInputDeviceFunctionLibrary_eventGetCurlsAndSplaysState_Parms), Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetCurlsAndSplaysState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetCurlsAndSplaysState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetCurlsAndSplaysState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetCurlsAndSplaysState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetCurlsAndSplaysState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetCurlsAndSplaysState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetFingerCurlsAndSplays_Statics
	{
		struct SteamVRInputDeviceFunctionLibrary_eventGetFingerCurlsAndSplays_Parms
		{
			EHand Hand;
			FSteamVRFingerCurls FingerCurls;
			FSteamVRFingerSplays FingerSplays;
			ESkeletalSummaryDataType SummaryDataType;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SummaryDataType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SummaryDataType_Underlying;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FingerSplays;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FingerCurls;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Hand;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Hand_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetFingerCurlsAndSplays_Statics::NewProp_SummaryDataType = { "SummaryDataType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamVRInputDeviceFunctionLibrary_eventGetFingerCurlsAndSplays_Parms, SummaryDataType), Z_Construct_UEnum_SteamVRInputDevice_ESkeletalSummaryDataType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetFingerCurlsAndSplays_Statics::NewProp_SummaryDataType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetFingerCurlsAndSplays_Statics::NewProp_FingerSplays = { "FingerSplays", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamVRInputDeviceFunctionLibrary_eventGetFingerCurlsAndSplays_Parms, FingerSplays), Z_Construct_UScriptStruct_FSteamVRFingerSplays, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetFingerCurlsAndSplays_Statics::NewProp_FingerCurls = { "FingerCurls", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamVRInputDeviceFunctionLibrary_eventGetFingerCurlsAndSplays_Parms, FingerCurls), Z_Construct_UScriptStruct_FSteamVRFingerCurls, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetFingerCurlsAndSplays_Statics::NewProp_Hand = { "Hand", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamVRInputDeviceFunctionLibrary_eventGetFingerCurlsAndSplays_Parms, Hand), Z_Construct_UEnum_SteamVRInputDevice_EHand, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetFingerCurlsAndSplays_Statics::NewProp_Hand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetFingerCurlsAndSplays_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetFingerCurlsAndSplays_Statics::NewProp_SummaryDataType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetFingerCurlsAndSplays_Statics::NewProp_SummaryDataType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetFingerCurlsAndSplays_Statics::NewProp_FingerSplays,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetFingerCurlsAndSplays_Statics::NewProp_FingerCurls,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetFingerCurlsAndSplays_Statics::NewProp_Hand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetFingerCurlsAndSplays_Statics::NewProp_Hand_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetFingerCurlsAndSplays_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamVR Input" },
		{ "Comment", "/**\n\x09* Get the finger curl and splay for a give hand in the current frame\n\x09* @param Hand - Which hand to get the finger curls and splay values for\n\x09* @param FingerCurls - Curl values for each finger pair this frame\n\x09*/" },
		{ "CPP_Default_SummaryDataType", "VR_SummaryType_FromAnimation" },
		{ "ModuleRelativePath", "Public/SteamVRInputDeviceFunctionLibrary.h" },
		{ "ToolTip", "Get the finger curl and splay for a give hand in the current frame\n@param Hand - Which hand to get the finger curls and splay values for\n@param FingerCurls - Curl values for each finger pair this frame" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetFingerCurlsAndSplays_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamVRInputDeviceFunctionLibrary, nullptr, "GetFingerCurlsAndSplays", nullptr, nullptr, sizeof(SteamVRInputDeviceFunctionLibrary_eventGetFingerCurlsAndSplays_Parms), Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetFingerCurlsAndSplays_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetFingerCurlsAndSplays_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetFingerCurlsAndSplays_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetFingerCurlsAndSplays_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetFingerCurlsAndSplays()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetFingerCurlsAndSplays_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetLeftHandPoseData_Statics
	{
		struct SteamVRInputDeviceFunctionLibrary_eventGetLeftHandPoseData_Parms
		{
			FVector Position;
			FRotator Orientation;
			FVector AngularVelocity;
			FVector Velocity;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Velocity;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AngularVelocity;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Orientation;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Position;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetLeftHandPoseData_Statics::NewProp_Velocity = { "Velocity", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamVRInputDeviceFunctionLibrary_eventGetLeftHandPoseData_Parms, Velocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetLeftHandPoseData_Statics::NewProp_AngularVelocity = { "AngularVelocity", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamVRInputDeviceFunctionLibrary_eventGetLeftHandPoseData_Parms, AngularVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetLeftHandPoseData_Statics::NewProp_Orientation = { "Orientation", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamVRInputDeviceFunctionLibrary_eventGetLeftHandPoseData_Parms, Orientation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetLeftHandPoseData_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamVRInputDeviceFunctionLibrary_eventGetLeftHandPoseData_Parms, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetLeftHandPoseData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetLeftHandPoseData_Statics::NewProp_Velocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetLeftHandPoseData_Statics::NewProp_AngularVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetLeftHandPoseData_Statics::NewProp_Orientation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetLeftHandPoseData_Statics::NewProp_Position,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetLeftHandPoseData_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamVR Input" },
		{ "Comment", "/**\n\x09* Retrieve the left hand pose information - position, orientation and velocities\n\x09* @return Position - Translation from the pose data matrix in UE coordinates\n\x09* @return Orientation - Orientation derived from the pose data matrix in UE coordinates\n\x09* @return AngularVelocity - The angular velocity of the hand this frame\n\x09* @return Velocity - The velocity of the hand this frame\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamVRInputDeviceFunctionLibrary.h" },
		{ "ToolTip", "Retrieve the left hand pose information - position, orientation and velocities\n@return Position - Translation from the pose data matrix in UE coordinates\n@return Orientation - Orientation derived from the pose data matrix in UE coordinates\n@return AngularVelocity - The angular velocity of the hand this frame\n@return Velocity - The velocity of the hand this frame" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetLeftHandPoseData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamVRInputDeviceFunctionLibrary, nullptr, "GetLeftHandPoseData", nullptr, nullptr, sizeof(SteamVRInputDeviceFunctionLibrary_eventGetLeftHandPoseData_Parms), Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetLeftHandPoseData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetLeftHandPoseData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetLeftHandPoseData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetLeftHandPoseData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetLeftHandPoseData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetLeftHandPoseData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetPoseSource_Statics
	{
		struct SteamVRInputDeviceFunctionLibrary_eventGetPoseSource_Parms
		{
			bool bUsingSkeletonPose;
		};
		static void NewProp_bUsingSkeletonPose_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUsingSkeletonPose;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetPoseSource_Statics::NewProp_bUsingSkeletonPose_SetBit(void* Obj)
	{
		((SteamVRInputDeviceFunctionLibrary_eventGetPoseSource_Parms*)Obj)->bUsingSkeletonPose = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetPoseSource_Statics::NewProp_bUsingSkeletonPose = { "bUsingSkeletonPose", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SteamVRInputDeviceFunctionLibrary_eventGetPoseSource_Parms), &Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetPoseSource_Statics::NewProp_bUsingSkeletonPose_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetPoseSource_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetPoseSource_Statics::NewProp_bUsingSkeletonPose,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetPoseSource_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamVR Input" },
		{ "Comment", "/**\n\x09* Check whether we are using a skeleton pose or the raw controller pose for the orientation and position of the motion controller\n\x09* @param bUseSkeletonPose - Whether or not we are using the skeleton pose instead of the controller raw pose\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamVRInputDeviceFunctionLibrary.h" },
		{ "ToolTip", "Check whether we are using a skeleton pose or the raw controller pose for the orientation and position of the motion controller\n@param bUseSkeletonPose - Whether or not we are using the skeleton pose instead of the controller raw pose" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetPoseSource_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamVRInputDeviceFunctionLibrary, nullptr, "GetPoseSource", nullptr, nullptr, sizeof(SteamVRInputDeviceFunctionLibrary_eventGetPoseSource_Parms), Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetPoseSource_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetPoseSource_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetPoseSource_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetPoseSource_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetPoseSource()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetPoseSource_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetRightHandPoseData_Statics
	{
		struct SteamVRInputDeviceFunctionLibrary_eventGetRightHandPoseData_Parms
		{
			FVector Position;
			FRotator Orientation;
			FVector AngularVelocity;
			FVector Velocity;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Velocity;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AngularVelocity;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Orientation;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Position;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetRightHandPoseData_Statics::NewProp_Velocity = { "Velocity", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamVRInputDeviceFunctionLibrary_eventGetRightHandPoseData_Parms, Velocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetRightHandPoseData_Statics::NewProp_AngularVelocity = { "AngularVelocity", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamVRInputDeviceFunctionLibrary_eventGetRightHandPoseData_Parms, AngularVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetRightHandPoseData_Statics::NewProp_Orientation = { "Orientation", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamVRInputDeviceFunctionLibrary_eventGetRightHandPoseData_Parms, Orientation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetRightHandPoseData_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamVRInputDeviceFunctionLibrary_eventGetRightHandPoseData_Parms, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetRightHandPoseData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetRightHandPoseData_Statics::NewProp_Velocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetRightHandPoseData_Statics::NewProp_AngularVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetRightHandPoseData_Statics::NewProp_Orientation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetRightHandPoseData_Statics::NewProp_Position,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetRightHandPoseData_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamVR Input" },
		{ "Comment", "/**\n\x09* Retrieve the right hand pose information - position, orientation and velocities\n\x09* @return Position - Translation from the pose data matrix in UE coordinates\n\x09* @return Orientation - Orientation derived from the pose data matrix in UE coordinates\n\x09* @return AngularVelocity - The angular velocity of the hand this frame\n\x09* @return Velocity - The velocity of the hand this frame\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamVRInputDeviceFunctionLibrary.h" },
		{ "ToolTip", "Retrieve the right hand pose information - position, orientation and velocities\n@return Position - Translation from the pose data matrix in UE coordinates\n@return Orientation - Orientation derived from the pose data matrix in UE coordinates\n@return AngularVelocity - The angular velocity of the hand this frame\n@return Velocity - The velocity of the hand this frame" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetRightHandPoseData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamVRInputDeviceFunctionLibrary, nullptr, "GetRightHandPoseData", nullptr, nullptr, sizeof(SteamVRInputDeviceFunctionLibrary_eventGetRightHandPoseData_Parms), Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetRightHandPoseData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetRightHandPoseData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetRightHandPoseData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetRightHandPoseData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetRightHandPoseData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetRightHandPoseData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetSkeletalState_Statics
	{
		struct SteamVRInputDeviceFunctionLibrary_eventGetSkeletalState_Parms
		{
			bool LeftHandState;
			bool RightHandState;
		};
		static void NewProp_RightHandState_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_RightHandState;
		static void NewProp_LeftHandState_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_LeftHandState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetSkeletalState_Statics::NewProp_RightHandState_SetBit(void* Obj)
	{
		((SteamVRInputDeviceFunctionLibrary_eventGetSkeletalState_Parms*)Obj)->RightHandState = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetSkeletalState_Statics::NewProp_RightHandState = { "RightHandState", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SteamVRInputDeviceFunctionLibrary_eventGetSkeletalState_Parms), &Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetSkeletalState_Statics::NewProp_RightHandState_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetSkeletalState_Statics::NewProp_LeftHandState_SetBit(void* Obj)
	{
		((SteamVRInputDeviceFunctionLibrary_eventGetSkeletalState_Parms*)Obj)->LeftHandState = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetSkeletalState_Statics::NewProp_LeftHandState = { "LeftHandState", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SteamVRInputDeviceFunctionLibrary_eventGetSkeletalState_Parms), &Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetSkeletalState_Statics::NewProp_LeftHandState_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetSkeletalState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetSkeletalState_Statics::NewProp_RightHandState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetSkeletalState_Statics::NewProp_LeftHandState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetSkeletalState_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamVR Input" },
		{ "Comment", "/**\n\x09* Check Whether or not controllers attached to either hand have Skeletal Input support\n\x09* @return LeftHandState - Whether or not the controller attached to the player's left hand have skeletal input support\n\x09* @return RightHandState -  Whether or not the controller attached to the player's right hand have skeletal input support\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamVRInputDeviceFunctionLibrary.h" },
		{ "ToolTip", "Check Whether or not controllers attached to either hand have Skeletal Input support\n@return LeftHandState - Whether or not the controller attached to the player's left hand have skeletal input support\n@return RightHandState -  Whether or not the controller attached to the player's right hand have skeletal input support" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetSkeletalState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamVRInputDeviceFunctionLibrary, nullptr, "GetSkeletalState", nullptr, nullptr, sizeof(SteamVRInputDeviceFunctionLibrary_eventGetSkeletalState_Parms), Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetSkeletalState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetSkeletalState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetSkeletalState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetSkeletalState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetSkeletalState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetSkeletalState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetSkeletalTransform_Statics
	{
		struct SteamVRInputDeviceFunctionLibrary_eventGetSkeletalTransform_Parms
		{
			FSteamVRSkeletonTransform LeftHand;
			FSteamVRSkeletonTransform RightHand;
			bool bWithController;
		};
		static void NewProp_bWithController_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWithController;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RightHand;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LeftHand;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetSkeletalTransform_Statics::NewProp_bWithController_SetBit(void* Obj)
	{
		((SteamVRInputDeviceFunctionLibrary_eventGetSkeletalTransform_Parms*)Obj)->bWithController = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetSkeletalTransform_Statics::NewProp_bWithController = { "bWithController", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SteamVRInputDeviceFunctionLibrary_eventGetSkeletalTransform_Parms), &Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetSkeletalTransform_Statics::NewProp_bWithController_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetSkeletalTransform_Statics::NewProp_RightHand = { "RightHand", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamVRInputDeviceFunctionLibrary_eventGetSkeletalTransform_Parms, RightHand), Z_Construct_UScriptStruct_FSteamVRSkeletonTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetSkeletalTransform_Statics::NewProp_LeftHand = { "LeftHand", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamVRInputDeviceFunctionLibrary_eventGetSkeletalTransform_Parms, LeftHand), Z_Construct_UScriptStruct_FSteamVRSkeletonTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetSkeletalTransform_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetSkeletalTransform_Statics::NewProp_bWithController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetSkeletalTransform_Statics::NewProp_RightHand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetSkeletalTransform_Statics::NewProp_LeftHand,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetSkeletalTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamVR Input" },
		{ "Comment", "/**\n\x09* Retrieve the live skeletal input bone values from SteamVR\n\x09* @return LeftHand - Per bone transform values for the left hand skeleton\n\x09* @return RightHand - Per bone transform values for the right hand skeleton\n\x09* @param bWithController - Whether or not retrieve skeletal input values with controller\n\x09* @param bXAxisForward - Whether or not the Skeleton has the X axis facing forward\n\x09*/" },
		{ "CPP_Default_bWithController", "false" },
		{ "ModuleRelativePath", "Public/SteamVRInputDeviceFunctionLibrary.h" },
		{ "ToolTip", "Retrieve the live skeletal input bone values from SteamVR\n@return LeftHand - Per bone transform values for the left hand skeleton\n@return RightHand - Per bone transform values for the right hand skeleton\n@param bWithController - Whether or not retrieve skeletal input values with controller\n@param bXAxisForward - Whether or not the Skeleton has the X axis facing forward" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetSkeletalTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamVRInputDeviceFunctionLibrary, nullptr, "GetSkeletalTransform", nullptr, nullptr, sizeof(SteamVRInputDeviceFunctionLibrary_eventGetSkeletalTransform_Parms), Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetSkeletalTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetSkeletalTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetSkeletalTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetSkeletalTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetSkeletalTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetSkeletalTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetSteamVR_ActionArray_Statics
	{
		struct SteamVRInputDeviceFunctionLibrary_eventGetSteamVR_ActionArray_Parms
		{
			TArray<FSteamVRAction> SteamVRActions;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SteamVRActions;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteamVRActions_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetSteamVR_ActionArray_Statics::NewProp_SteamVRActions = { "SteamVRActions", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamVRInputDeviceFunctionLibrary_eventGetSteamVR_ActionArray_Parms, SteamVRActions), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetSteamVR_ActionArray_Statics::NewProp_SteamVRActions_Inner = { "SteamVRActions", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSteamVRAction, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetSteamVR_ActionArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetSteamVR_ActionArray_Statics::NewProp_SteamVRActions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetSteamVR_ActionArray_Statics::NewProp_SteamVRActions_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetSteamVR_ActionArray_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamVR Input" },
		{ "Comment", "/**\n\x09* Retrieve the input actions for this project\n\x09* @return SteamVRActions - Input actions defined in this project\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamVRInputDeviceFunctionLibrary.h" },
		{ "ToolTip", "Retrieve the input actions for this project\n@return SteamVRActions - Input actions defined in this project" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetSteamVR_ActionArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamVRInputDeviceFunctionLibrary, nullptr, "GetSteamVR_ActionArray", nullptr, nullptr, sizeof(SteamVRInputDeviceFunctionLibrary_eventGetSteamVR_ActionArray_Parms), Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetSteamVR_ActionArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetSteamVR_ActionArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetSteamVR_ActionArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetSteamVR_ActionArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetSteamVR_ActionArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetSteamVR_ActionArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetSteamVR_ActionSetArray_Statics
	{
		struct SteamVRInputDeviceFunctionLibrary_eventGetSteamVR_ActionSetArray_Parms
		{
			TArray<FSteamVRActionSet> SteamVRActionSets;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SteamVRActionSets;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteamVRActionSets_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetSteamVR_ActionSetArray_Statics::NewProp_SteamVRActionSets = { "SteamVRActionSets", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamVRInputDeviceFunctionLibrary_eventGetSteamVR_ActionSetArray_Parms, SteamVRActionSets), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetSteamVR_ActionSetArray_Statics::NewProp_SteamVRActionSets_Inner = { "SteamVRActionSets", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSteamVRActionSet, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetSteamVR_ActionSetArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetSteamVR_ActionSetArray_Statics::NewProp_SteamVRActionSets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetSteamVR_ActionSetArray_Statics::NewProp_SteamVRActionSets_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetSteamVR_ActionSetArray_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamVR Input" },
		{ "Comment", "/**\n\x09* Retrieve the input action sets for this project\n\x09* @return SteamVRActionSets - Input action sets defined in this project\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamVRInputDeviceFunctionLibrary.h" },
		{ "ToolTip", "Retrieve the input action sets for this project\n@return SteamVRActionSets - Input action sets defined in this project" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetSteamVR_ActionSetArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamVRInputDeviceFunctionLibrary, nullptr, "GetSteamVR_ActionSetArray", nullptr, nullptr, sizeof(SteamVRInputDeviceFunctionLibrary_eventGetSteamVR_ActionSetArray_Parms), Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetSteamVR_ActionSetArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetSteamVR_ActionSetArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetSteamVR_ActionSetArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetSteamVR_ActionSetArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetSteamVR_ActionSetArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetSteamVR_ActionSetArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetSteamVR_GlobalPredictedSecondsFromNow_Statics
	{
		struct SteamVRInputDeviceFunctionLibrary_eventGetSteamVR_GlobalPredictedSecondsFromNow_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetSteamVR_GlobalPredictedSecondsFromNow_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamVRInputDeviceFunctionLibrary_eventGetSteamVR_GlobalPredictedSecondsFromNow_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetSteamVR_GlobalPredictedSecondsFromNow_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetSteamVR_GlobalPredictedSecondsFromNow_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetSteamVR_GlobalPredictedSecondsFromNow_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamVR Input" },
		{ "Comment", "/**\n\x09* Returns the the current value of the global PredictedSecondsFromNow use in any Get Pose Action Data calls (i.e. Getting controller transform)\n\x09* A value of -9999.f triggers a GetPoseActionDataForNextFrame, otherwise GetPoseActionRelativeToNow is called with this value\n\x09* @return float - The current Predicted Seconds From Now from the SteamVRInput device\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamVRInputDeviceFunctionLibrary.h" },
		{ "ToolTip", "Returns the the current value of the global PredictedSecondsFromNow use in any Get Pose Action Data calls (i.e. Getting controller transform)\nA value of -9999.f triggers a GetPoseActionDataForNextFrame, otherwise GetPoseActionRelativeToNow is called with this value\n@return float - The current Predicted Seconds From Now from the SteamVRInput device" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetSteamVR_GlobalPredictedSecondsFromNow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamVRInputDeviceFunctionLibrary, nullptr, "GetSteamVR_GlobalPredictedSecondsFromNow", nullptr, nullptr, sizeof(SteamVRInputDeviceFunctionLibrary_eventGetSteamVR_GlobalPredictedSecondsFromNow_Parms), Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetSteamVR_GlobalPredictedSecondsFromNow_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetSteamVR_GlobalPredictedSecondsFromNow_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetSteamVR_GlobalPredictedSecondsFromNow_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetSteamVR_GlobalPredictedSecondsFromNow_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetSteamVR_GlobalPredictedSecondsFromNow()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetSteamVR_GlobalPredictedSecondsFromNow_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetSteamVR_HandPoseRelativeToNow_Statics
	{
		struct SteamVRInputDeviceFunctionLibrary_eventGetSteamVR_HandPoseRelativeToNow_Parms
		{
			FVector Position;
			FRotator Orientation;
			ESteamVRHand Hand;
			float PredictedSecondsFromNow;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PredictedSecondsFromNow;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Hand;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Hand_Underlying;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Orientation;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Position;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetSteamVR_HandPoseRelativeToNow_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SteamVRInputDeviceFunctionLibrary_eventGetSteamVR_HandPoseRelativeToNow_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetSteamVR_HandPoseRelativeToNow_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SteamVRInputDeviceFunctionLibrary_eventGetSteamVR_HandPoseRelativeToNow_Parms), &Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetSteamVR_HandPoseRelativeToNow_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetSteamVR_HandPoseRelativeToNow_Statics::NewProp_PredictedSecondsFromNow = { "PredictedSecondsFromNow", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamVRInputDeviceFunctionLibrary_eventGetSteamVR_HandPoseRelativeToNow_Parms, PredictedSecondsFromNow), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetSteamVR_HandPoseRelativeToNow_Statics::NewProp_Hand = { "Hand", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamVRInputDeviceFunctionLibrary_eventGetSteamVR_HandPoseRelativeToNow_Parms, Hand), Z_Construct_UEnum_SteamVRInputDevice_ESteamVRHand, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetSteamVR_HandPoseRelativeToNow_Statics::NewProp_Hand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetSteamVR_HandPoseRelativeToNow_Statics::NewProp_Orientation = { "Orientation", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamVRInputDeviceFunctionLibrary_eventGetSteamVR_HandPoseRelativeToNow_Parms, Orientation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetSteamVR_HandPoseRelativeToNow_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamVRInputDeviceFunctionLibrary_eventGetSteamVR_HandPoseRelativeToNow_Parms, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetSteamVR_HandPoseRelativeToNow_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetSteamVR_HandPoseRelativeToNow_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetSteamVR_HandPoseRelativeToNow_Statics::NewProp_PredictedSecondsFromNow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetSteamVR_HandPoseRelativeToNow_Statics::NewProp_Hand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetSteamVR_HandPoseRelativeToNow_Statics::NewProp_Hand_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetSteamVR_HandPoseRelativeToNow_Statics::NewProp_Orientation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetSteamVR_HandPoseRelativeToNow_Statics::NewProp_Position,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetSteamVR_HandPoseRelativeToNow_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamVR Input" },
		{ "Comment", "/**\n\x09* Returns the data for the hand transform at any point in time from current time, given a relative number of seconds\n\x09* @param Hand - The hand that we're going to retrieve the transform for\n\x09* @return Position - The position of the hand at the point in time, given a relative number of seconds, from the current time\n\x09* @return Orientation - The rotation of the hand at the point in time, given a relative number of seconds, from the current time\n\x09* @return bool - Whether or not the call was succesful\n\x09*/" },
		{ "CPP_Default_Hand", "VR_Left" },
		{ "CPP_Default_PredictedSecondsFromNow", "0.000000" },
		{ "ModuleRelativePath", "Public/SteamVRInputDeviceFunctionLibrary.h" },
		{ "ToolTip", "Returns the data for the hand transform at any point in time from current time, given a relative number of seconds\n@param Hand - The hand that we're going to retrieve the transform for\n@return Position - The position of the hand at the point in time, given a relative number of seconds, from the current time\n@return Orientation - The rotation of the hand at the point in time, given a relative number of seconds, from the current time\n@return bool - Whether or not the call was succesful" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetSteamVR_HandPoseRelativeToNow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamVRInputDeviceFunctionLibrary, nullptr, "GetSteamVR_HandPoseRelativeToNow", nullptr, nullptr, sizeof(SteamVRInputDeviceFunctionLibrary_eventGetSteamVR_HandPoseRelativeToNow_Parms), Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetSteamVR_HandPoseRelativeToNow_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetSteamVR_HandPoseRelativeToNow_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetSteamVR_HandPoseRelativeToNow_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetSteamVR_HandPoseRelativeToNow_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetSteamVR_HandPoseRelativeToNow()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetSteamVR_HandPoseRelativeToNow_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetSteamVR_InputBindingInfo_Statics
	{
		struct SteamVRInputDeviceFunctionLibrary_eventGetSteamVR_InputBindingInfo_Parms
		{
			FSteamVRAction SteamVRActionHandle;
			TArray<FSteamVRInputBindingInfo> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteamVRActionHandle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetSteamVR_InputBindingInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamVRInputDeviceFunctionLibrary_eventGetSteamVR_InputBindingInfo_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetSteamVR_InputBindingInfo_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSteamVRInputBindingInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetSteamVR_InputBindingInfo_Statics::NewProp_SteamVRActionHandle = { "SteamVRActionHandle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamVRInputDeviceFunctionLibrary_eventGetSteamVR_InputBindingInfo_Parms, SteamVRActionHandle), Z_Construct_UScriptStruct_FSteamVRAction, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetSteamVR_InputBindingInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetSteamVR_InputBindingInfo_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetSteamVR_InputBindingInfo_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetSteamVR_InputBindingInfo_Statics::NewProp_SteamVRActionHandle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetSteamVR_InputBindingInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamVR Input" },
		{ "Comment", "/**\n\x09* Retrieves useful information about the SteamVR input bindings for an action.\n\x09* @param SteamVRActionHandle - The action handle of the action that binding info will be retrieved for the currently active controller. Use Find SteamVRAction node to get a handle\n\x09* @return SteamVRInputBindingInfo - Array of binding info for an action with the currently active controller\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamVRInputDeviceFunctionLibrary.h" },
		{ "ToolTip", "Retrieves useful information about the SteamVR input bindings for an action.\n@param SteamVRActionHandle - The action handle of the action that binding info will be retrieved for the currently active controller. Use Find SteamVRAction node to get a handle\n@return SteamVRInputBindingInfo - Array of binding info for an action with the currently active controller" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetSteamVR_InputBindingInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamVRInputDeviceFunctionLibrary, nullptr, "GetSteamVR_InputBindingInfo", nullptr, nullptr, sizeof(SteamVRInputDeviceFunctionLibrary_eventGetSteamVR_InputBindingInfo_Parms), Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetSteamVR_InputBindingInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetSteamVR_InputBindingInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetSteamVR_InputBindingInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetSteamVR_InputBindingInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetSteamVR_InputBindingInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetSteamVR_InputBindingInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetSteamVR_OriginLocalizedName_Statics
	{
		struct SteamVRInputDeviceFunctionLibrary_eventGetSteamVR_OriginLocalizedName_Parms
		{
			FSteamVRAction SteamVRAction;
			TArray<ESteamVRInputStringBits> LocalizedParts;
			FString OriginLocalizedName;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OriginLocalizedName;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LocalizedParts;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_LocalizedParts_Inner;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LocalizedParts_Inner_Underlying;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteamVRAction;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetSteamVR_OriginLocalizedName_Statics::NewProp_OriginLocalizedName = { "OriginLocalizedName", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamVRInputDeviceFunctionLibrary_eventGetSteamVR_OriginLocalizedName_Parms, OriginLocalizedName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetSteamVR_OriginLocalizedName_Statics::NewProp_LocalizedParts = { "LocalizedParts", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamVRInputDeviceFunctionLibrary_eventGetSteamVR_OriginLocalizedName_Parms, LocalizedParts), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetSteamVR_OriginLocalizedName_Statics::NewProp_LocalizedParts_Inner = { "LocalizedParts", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_SteamVRInputDevice_ESteamVRInputStringBits, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetSteamVR_OriginLocalizedName_Statics::NewProp_LocalizedParts_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetSteamVR_OriginLocalizedName_Statics::NewProp_SteamVRAction = { "SteamVRAction", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamVRInputDeviceFunctionLibrary_eventGetSteamVR_OriginLocalizedName_Parms, SteamVRAction), Z_Construct_UScriptStruct_FSteamVRAction, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetSteamVR_OriginLocalizedName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetSteamVR_OriginLocalizedName_Statics::NewProp_OriginLocalizedName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetSteamVR_OriginLocalizedName_Statics::NewProp_LocalizedParts,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetSteamVR_OriginLocalizedName_Statics::NewProp_LocalizedParts_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetSteamVR_OriginLocalizedName_Statics::NewProp_LocalizedParts_Inner_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetSteamVR_OriginLocalizedName_Statics::NewProp_SteamVRAction,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetSteamVR_OriginLocalizedName_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamVR Input" },
		{ "Comment", "/**\n\x09* Retrieve the localized name of the origin of a given action (e.g. \"Left Hand Index Controller Trackpad\")\n\x09* @param SteamVRAction - The action that we will lookup the last active origin for\n\x09* @param LocalizedParts - Bitfields to specify which origin parts to return\n\x09* @return OriginLocalizedName -  The localized name of the origin of a given action (e.g. \"Left Hand Index Controller Trackpad\")\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamVRInputDeviceFunctionLibrary.h" },
		{ "ToolTip", "Retrieve the localized name of the origin of a given action (e.g. \"Left Hand Index Controller Trackpad\")\n@param SteamVRAction - The action that we will lookup the last active origin for\n@param LocalizedParts - Bitfields to specify which origin parts to return\n@return OriginLocalizedName -  The localized name of the origin of a given action (e.g. \"Left Hand Index Controller Trackpad\")" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetSteamVR_OriginLocalizedName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamVRInputDeviceFunctionLibrary, nullptr, "GetSteamVR_OriginLocalizedName", nullptr, nullptr, sizeof(SteamVRInputDeviceFunctionLibrary_eventGetSteamVR_OriginLocalizedName_Parms), Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetSteamVR_OriginLocalizedName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetSteamVR_OriginLocalizedName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetSteamVR_OriginLocalizedName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetSteamVR_OriginLocalizedName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetSteamVR_OriginLocalizedName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetSteamVR_OriginLocalizedName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetSteamVR_OriginTrackedDeviceInfo_Statics
	{
		struct SteamVRInputDeviceFunctionLibrary_eventGetSteamVR_OriginTrackedDeviceInfo_Parms
		{
			FSteamVRAction SteamVRAction;
			FSteamVRInputOriginInfo InputOriginInfo;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InputOriginInfo;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteamVRAction;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetSteamVR_OriginTrackedDeviceInfo_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SteamVRInputDeviceFunctionLibrary_eventGetSteamVR_OriginTrackedDeviceInfo_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetSteamVR_OriginTrackedDeviceInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SteamVRInputDeviceFunctionLibrary_eventGetSteamVR_OriginTrackedDeviceInfo_Parms), &Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetSteamVR_OriginTrackedDeviceInfo_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetSteamVR_OriginTrackedDeviceInfo_Statics::NewProp_InputOriginInfo = { "InputOriginInfo", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamVRInputDeviceFunctionLibrary_eventGetSteamVR_OriginTrackedDeviceInfo_Parms, InputOriginInfo), Z_Construct_UScriptStruct_FSteamVRInputOriginInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetSteamVR_OriginTrackedDeviceInfo_Statics::NewProp_SteamVRAction = { "SteamVRAction", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamVRInputDeviceFunctionLibrary_eventGetSteamVR_OriginTrackedDeviceInfo_Parms, SteamVRAction), Z_Construct_UScriptStruct_FSteamVRAction, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetSteamVR_OriginTrackedDeviceInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetSteamVR_OriginTrackedDeviceInfo_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetSteamVR_OriginTrackedDeviceInfo_Statics::NewProp_InputOriginInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetSteamVR_OriginTrackedDeviceInfo_Statics::NewProp_SteamVRAction,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetSteamVR_OriginTrackedDeviceInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamVR Input" },
		{ "Comment", "/**\n\x09* Returns information about the tracked device associated from the input source.\n\x09* @param SteamVRAction - The action that's the source of the input\n\x09* @return InputOriginInfo - The origin info of the action\n\x09* @return bool - whether the operation is successful or not\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamVRInputDeviceFunctionLibrary.h" },
		{ "ToolTip", "Returns information about the tracked device associated from the input source.\n@param SteamVRAction - The action that's the source of the input\n@return InputOriginInfo - The origin info of the action\n@return bool - whether the operation is successful or not" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetSteamVR_OriginTrackedDeviceInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamVRInputDeviceFunctionLibrary, nullptr, "GetSteamVR_OriginTrackedDeviceInfo", nullptr, nullptr, sizeof(SteamVRInputDeviceFunctionLibrary_eventGetSteamVR_OriginTrackedDeviceInfo_Parms), Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetSteamVR_OriginTrackedDeviceInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetSteamVR_OriginTrackedDeviceInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetSteamVR_OriginTrackedDeviceInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetSteamVR_OriginTrackedDeviceInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetSteamVR_OriginTrackedDeviceInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetSteamVR_OriginTrackedDeviceInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetUserIPD_Statics
	{
		struct SteamVRInputDeviceFunctionLibrary_eventGetUserIPD_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetUserIPD_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamVRInputDeviceFunctionLibrary_eventGetUserIPD_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetUserIPD_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetUserIPD_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetUserIPD_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamVR Input" },
		{ "Comment", "/**\n\x09* Returns the user's HMD's current IPD (interpupillary distance) setting in millimetres.\n\x09* @return float - The current IPD setting of the user's headset in millimetres\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamVRInputDeviceFunctionLibrary.h" },
		{ "ToolTip", "Returns the user's HMD's current IPD (interpupillary distance) setting in millimetres.\n@return float - The current IPD setting of the user's headset in millimetres" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetUserIPD_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamVRInputDeviceFunctionLibrary, nullptr, "GetUserIPD", nullptr, nullptr, sizeof(SteamVRInputDeviceFunctionLibrary_eventGetUserIPD_Parms), Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetUserIPD_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetUserIPD_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetUserIPD_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetUserIPD_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetUserIPD()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetUserIPD_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_PlaySteamVR_HapticFeedback_Statics
	{
		struct SteamVRInputDeviceFunctionLibrary_eventPlaySteamVR_HapticFeedback_Parms
		{
			ESteamVRHand Hand;
			float StartSecondsFromNow;
			float DurationSeconds;
			float Frequency;
			float Amplitude;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Amplitude;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Frequency;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DurationSeconds;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StartSecondsFromNow;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Hand;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Hand_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_PlaySteamVR_HapticFeedback_Statics::NewProp_Amplitude = { "Amplitude", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamVRInputDeviceFunctionLibrary_eventPlaySteamVR_HapticFeedback_Parms, Amplitude), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_PlaySteamVR_HapticFeedback_Statics::NewProp_Frequency = { "Frequency", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamVRInputDeviceFunctionLibrary_eventPlaySteamVR_HapticFeedback_Parms, Frequency), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_PlaySteamVR_HapticFeedback_Statics::NewProp_DurationSeconds = { "DurationSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamVRInputDeviceFunctionLibrary_eventPlaySteamVR_HapticFeedback_Parms, DurationSeconds), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_PlaySteamVR_HapticFeedback_Statics::NewProp_StartSecondsFromNow = { "StartSecondsFromNow", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamVRInputDeviceFunctionLibrary_eventPlaySteamVR_HapticFeedback_Parms, StartSecondsFromNow), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_PlaySteamVR_HapticFeedback_Statics::NewProp_Hand = { "Hand", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamVRInputDeviceFunctionLibrary_eventPlaySteamVR_HapticFeedback_Parms, Hand), Z_Construct_UEnum_SteamVRInputDevice_ESteamVRHand, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_PlaySteamVR_HapticFeedback_Statics::NewProp_Hand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_PlaySteamVR_HapticFeedback_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_PlaySteamVR_HapticFeedback_Statics::NewProp_Amplitude,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_PlaySteamVR_HapticFeedback_Statics::NewProp_Frequency,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_PlaySteamVR_HapticFeedback_Statics::NewProp_DurationSeconds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_PlaySteamVR_HapticFeedback_Statics::NewProp_StartSecondsFromNow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_PlaySteamVR_HapticFeedback_Statics::NewProp_Hand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_PlaySteamVR_HapticFeedback_Statics::NewProp_Hand_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_PlaySteamVR_HapticFeedback_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamVR Input" },
		{ "Comment", "/**\n\x09* Generate haptic feedback in the requested controller\n\x09* @param Hand - Which hand to send the controller feedback to\n\x09* @param StartSecondsFromNow - When to start the haptic feedback\n\x09* @param DurationSeconds - How long to have the haptic feedback active\n\x09* @param Frequency - Frequency used in the haptic feedback\n\x09* @param Amplitude - Amplitude used in the haptic feedback\n\x09*/" },
		{ "CPP_Default_Amplitude", "0.500000" },
		{ "CPP_Default_DurationSeconds", "1.000000" },
		{ "CPP_Default_Frequency", "1.000000" },
		{ "ModuleRelativePath", "Public/SteamVRInputDeviceFunctionLibrary.h" },
		{ "ToolTip", "Generate haptic feedback in the requested controller\n@param Hand - Which hand to send the controller feedback to\n@param StartSecondsFromNow - When to start the haptic feedback\n@param DurationSeconds - How long to have the haptic feedback active\n@param Frequency - Frequency used in the haptic feedback\n@param Amplitude - Amplitude used in the haptic feedback" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_PlaySteamVR_HapticFeedback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamVRInputDeviceFunctionLibrary, nullptr, "PlaySteamVR_HapticFeedback", nullptr, nullptr, sizeof(SteamVRInputDeviceFunctionLibrary_eventPlaySteamVR_HapticFeedback_Parms), Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_PlaySteamVR_HapticFeedback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_PlaySteamVR_HapticFeedback_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_PlaySteamVR_HapticFeedback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_PlaySteamVR_HapticFeedback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_PlaySteamVR_HapticFeedback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_PlaySteamVR_HapticFeedback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_ResetSeatedPosition_Statics
	{
		struct SteamVRInputDeviceFunctionLibrary_eventResetSeatedPosition_Parms
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
	void Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_ResetSeatedPosition_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SteamVRInputDeviceFunctionLibrary_eventResetSeatedPosition_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_ResetSeatedPosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SteamVRInputDeviceFunctionLibrary_eventResetSeatedPosition_Parms), &Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_ResetSeatedPosition_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_ResetSeatedPosition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_ResetSeatedPosition_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_ResetSeatedPosition_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamVR Input" },
		{ "Comment", "/**\n\x09* Sets the zero pose for the seated tracker coordinate system to the current position and yaw of the HMD. \n\x09* After this call, calls that pass TrackingUniverseSeated as the origin will be relative to this new zero pose.\n\x09*\n\x09* NOTE: This function overrides the user's previously saved seated zero pose and should only be called as the result of a user action.\n\x09* Users are also able to set their seated zero pose via the SteamVR Dashboard.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamVRInputDeviceFunctionLibrary.h" },
		{ "ToolTip", "Sets the zero pose for the seated tracker coordinate system to the current position and yaw of the HMD.\nAfter this call, calls that pass TrackingUniverseSeated as the origin will be relative to this new zero pose.\n\nNOTE: This function overrides the user's previously saved seated zero pose and should only be called as the result of a user action.\nUsers are also able to set their seated zero pose via the SteamVR Dashboard." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_ResetSeatedPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamVRInputDeviceFunctionLibrary, nullptr, "ResetSeatedPosition", nullptr, nullptr, sizeof(SteamVRInputDeviceFunctionLibrary_eventResetSeatedPosition_Parms), Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_ResetSeatedPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_ResetSeatedPosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_ResetSeatedPosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_ResetSeatedPosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_ResetSeatedPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_ResetSeatedPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_SetCurlsAndSplaysState_Statics
	{
		struct SteamVRInputDeviceFunctionLibrary_eventSetCurlsAndSplaysState_Parms
		{
			bool NewLeftHandState;
			bool NewRightHandState;
		};
		static void NewProp_NewRightHandState_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_NewRightHandState;
		static void NewProp_NewLeftHandState_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_NewLeftHandState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_SetCurlsAndSplaysState_Statics::NewProp_NewRightHandState_SetBit(void* Obj)
	{
		((SteamVRInputDeviceFunctionLibrary_eventSetCurlsAndSplaysState_Parms*)Obj)->NewRightHandState = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_SetCurlsAndSplaysState_Statics::NewProp_NewRightHandState = { "NewRightHandState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SteamVRInputDeviceFunctionLibrary_eventSetCurlsAndSplaysState_Parms), &Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_SetCurlsAndSplaysState_Statics::NewProp_NewRightHandState_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_SetCurlsAndSplaysState_Statics::NewProp_NewLeftHandState_SetBit(void* Obj)
	{
		((SteamVRInputDeviceFunctionLibrary_eventSetCurlsAndSplaysState_Parms*)Obj)->NewLeftHandState = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_SetCurlsAndSplaysState_Statics::NewProp_NewLeftHandState = { "NewLeftHandState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SteamVRInputDeviceFunctionLibrary_eventSetCurlsAndSplaysState_Parms), &Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_SetCurlsAndSplaysState_Statics::NewProp_NewLeftHandState_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_SetCurlsAndSplaysState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_SetCurlsAndSplaysState_Statics::NewProp_NewRightHandState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_SetCurlsAndSplaysState_Statics::NewProp_NewLeftHandState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_SetCurlsAndSplaysState_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamVR Input" },
		{ "Comment", "/**\n\x09* Tell SteamVR Whether or not to retrieve Curls and Splay values per frame\n\x09* @param NewLeftHandState - Whether or not curls and splay values will be retrieved for the left hand\n\x09* @param NewRightHandState -  Whether or not curls and splay values will be retrieved for the right hand\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamVRInputDeviceFunctionLibrary.h" },
		{ "ToolTip", "Tell SteamVR Whether or not to retrieve Curls and Splay values per frame\n@param NewLeftHandState - Whether or not curls and splay values will be retrieved for the left hand\n@param NewRightHandState -  Whether or not curls and splay values will be retrieved for the right hand" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_SetCurlsAndSplaysState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamVRInputDeviceFunctionLibrary, nullptr, "SetCurlsAndSplaysState", nullptr, nullptr, sizeof(SteamVRInputDeviceFunctionLibrary_eventSetCurlsAndSplaysState_Parms), Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_SetCurlsAndSplaysState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_SetCurlsAndSplaysState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_SetCurlsAndSplaysState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_SetCurlsAndSplaysState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_SetCurlsAndSplaysState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_SetCurlsAndSplaysState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_SetPoseSource_Statics
	{
		struct SteamVRInputDeviceFunctionLibrary_eventSetPoseSource_Parms
		{
			bool bUseSkeletonPose;
		};
		static void NewProp_bUseSkeletonPose_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseSkeletonPose;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_SetPoseSource_Statics::NewProp_bUseSkeletonPose_SetBit(void* Obj)
	{
		((SteamVRInputDeviceFunctionLibrary_eventSetPoseSource_Parms*)Obj)->bUseSkeletonPose = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_SetPoseSource_Statics::NewProp_bUseSkeletonPose = { "bUseSkeletonPose", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SteamVRInputDeviceFunctionLibrary_eventSetPoseSource_Parms), &Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_SetPoseSource_Statics::NewProp_bUseSkeletonPose_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_SetPoseSource_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_SetPoseSource_Statics::NewProp_bUseSkeletonPose,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_SetPoseSource_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamVR Input" },
		{ "Comment", "/**\n\x09* Set whether to use skeleton pose or the raw controller pose for the orientation and position of the motion controller\n\x09* @param bUseSkeletonPose - Whether or not to use the skeleton pose instead of the controller raw pose\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamVRInputDeviceFunctionLibrary.h" },
		{ "ToolTip", "Set whether to use skeleton pose or the raw controller pose for the orientation and position of the motion controller\n@param bUseSkeletonPose - Whether or not to use the skeleton pose instead of the controller raw pose" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_SetPoseSource_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamVRInputDeviceFunctionLibrary, nullptr, "SetPoseSource", nullptr, nullptr, sizeof(SteamVRInputDeviceFunctionLibrary_eventSetPoseSource_Parms), Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_SetPoseSource_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_SetPoseSource_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_SetPoseSource_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_SetPoseSource_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_SetPoseSource()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_SetPoseSource_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_SetSteamVR_GlobalPredictedSecondsFromNow_Statics
	{
		struct SteamVRInputDeviceFunctionLibrary_eventSetSteamVR_GlobalPredictedSecondsFromNow_Parms
		{
			float NewValue;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_SetSteamVR_GlobalPredictedSecondsFromNow_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamVRInputDeviceFunctionLibrary_eventSetSteamVR_GlobalPredictedSecondsFromNow_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_SetSteamVR_GlobalPredictedSecondsFromNow_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamVRInputDeviceFunctionLibrary_eventSetSteamVR_GlobalPredictedSecondsFromNow_Parms, NewValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_SetSteamVR_GlobalPredictedSecondsFromNow_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_SetSteamVR_GlobalPredictedSecondsFromNow_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_SetSteamVR_GlobalPredictedSecondsFromNow_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_SetSteamVR_GlobalPredictedSecondsFromNow_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamVR Input" },
		{ "Comment", "/**\n\x09* Sets the the current value of the global PredictedSecondsFromNow to use in any Get Pose Action Data calls (i.e. Getting controller transform)\n\x09* A value of -9999.f will trigger a GetPoseActionDataForNextFrame, otherwise GetPoseActionRelativeToNow will be called with this value\n\x09* @param NewValue - The value for PredictedSecondsFromNow that will be used by the SteamVRInput device for Get Action Pose Data calls \n\x09* @return float - The current Predicted Seconds From Now from the SteamVRInput device\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamVRInputDeviceFunctionLibrary.h" },
		{ "ToolTip", "Sets the the current value of the global PredictedSecondsFromNow to use in any Get Pose Action Data calls (i.e. Getting controller transform)\nA value of -9999.f will trigger a GetPoseActionDataForNextFrame, otherwise GetPoseActionRelativeToNow will be called with this value\n@param NewValue - The value for PredictedSecondsFromNow that will be used by the SteamVRInput device for Get Action Pose Data calls\n@return float - The current Predicted Seconds From Now from the SteamVRInput device" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_SetSteamVR_GlobalPredictedSecondsFromNow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamVRInputDeviceFunctionLibrary, nullptr, "SetSteamVR_GlobalPredictedSecondsFromNow", nullptr, nullptr, sizeof(SteamVRInputDeviceFunctionLibrary_eventSetSteamVR_GlobalPredictedSecondsFromNow_Parms), Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_SetSteamVR_GlobalPredictedSecondsFromNow_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_SetSteamVR_GlobalPredictedSecondsFromNow_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_SetSteamVR_GlobalPredictedSecondsFromNow_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_SetSteamVR_GlobalPredictedSecondsFromNow_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_SetSteamVR_GlobalPredictedSecondsFromNow()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_SetSteamVR_GlobalPredictedSecondsFromNow_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_ShowAllSteamVR_ActionOrigins_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_ShowAllSteamVR_ActionOrigins_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamVR Input" },
		{ "Comment", "/**\n\x09* Shows all current bindings for the current controller in the user's headset\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamVRInputDeviceFunctionLibrary.h" },
		{ "ToolTip", "Shows all current bindings for the current controller in the user's headset" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_ShowAllSteamVR_ActionOrigins_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamVRInputDeviceFunctionLibrary, nullptr, "ShowAllSteamVR_ActionOrigins", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_ShowAllSteamVR_ActionOrigins_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_ShowAllSteamVR_ActionOrigins_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_ShowAllSteamVR_ActionOrigins()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_ShowAllSteamVR_ActionOrigins_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_ShowSteamVR_ActionOrigin_Statics
	{
		struct SteamVRInputDeviceFunctionLibrary_eventShowSteamVR_ActionOrigin_Parms
		{
			FSteamVRAction SteamVRAction;
			FSteamVRActionSet SteamVRActionSet;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteamVRActionSet;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteamVRAction;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_ShowSteamVR_ActionOrigin_Statics::NewProp_SteamVRActionSet = { "SteamVRActionSet", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamVRInputDeviceFunctionLibrary_eventShowSteamVR_ActionOrigin_Parms, SteamVRActionSet), Z_Construct_UScriptStruct_FSteamVRActionSet, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_ShowSteamVR_ActionOrigin_Statics::NewProp_SteamVRAction = { "SteamVRAction", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamVRInputDeviceFunctionLibrary_eventShowSteamVR_ActionOrigin_Parms, SteamVRAction), Z_Construct_UScriptStruct_FSteamVRAction, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_ShowSteamVR_ActionOrigin_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_ShowSteamVR_ActionOrigin_Statics::NewProp_SteamVRActionSet,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_ShowSteamVR_ActionOrigin_Statics::NewProp_SteamVRAction,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_ShowSteamVR_ActionOrigin_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamVR Input" },
		{ "Comment", "/**\n\x09* Show the current binding of a given action in the user's HMD\n\x09* @param SteamVRAction - The action that we will lookup the current binding for\n\x09* @param SteamVRActionSet - The action set that the action belongs to\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamVRInputDeviceFunctionLibrary.h" },
		{ "ToolTip", "Show the current binding of a given action in the user's HMD\n@param SteamVRAction - The action that we will lookup the current binding for\n@param SteamVRActionSet - The action set that the action belongs to" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_ShowSteamVR_ActionOrigin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamVRInputDeviceFunctionLibrary, nullptr, "ShowSteamVR_ActionOrigin", nullptr, nullptr, sizeof(SteamVRInputDeviceFunctionLibrary_eventShowSteamVR_ActionOrigin_Parms), Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_ShowSteamVR_ActionOrigin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_ShowSteamVR_ActionOrigin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_ShowSteamVR_ActionOrigin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_ShowSteamVR_ActionOrigin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_ShowSteamVR_ActionOrigin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_ShowSteamVR_ActionOrigin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USteamVRInputDeviceFunctionLibrary_NoRegister()
	{
		return USteamVRInputDeviceFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_USteamVRInputDeviceFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USteamVRInputDeviceFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamVRInputDevice,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USteamVRInputDeviceFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_FindSteamVR_Action, "FindSteamVR_Action" }, // 4250647210
		{ &Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_FindSteamVR_ActionOrigin, "FindSteamVR_ActionOrigin" }, // 3715303223
		{ &Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_FindSteamVR_InputBindingInfo, "FindSteamVR_InputBindingInfo" }, // 1744651446
		{ &Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_FindSteamVR_OriginTrackedDeviceInfo, "FindSteamVR_OriginTrackedDeviceInfo" }, // 3157403454
		{ &Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetControllerFidelity, "GetControllerFidelity" }, // 3846837436
		{ &Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetCurlsAndSplaysState, "GetCurlsAndSplaysState" }, // 3214192040
		{ &Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetFingerCurlsAndSplays, "GetFingerCurlsAndSplays" }, // 3260008699
		{ &Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetLeftHandPoseData, "GetLeftHandPoseData" }, // 2766835392
		{ &Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetPoseSource, "GetPoseSource" }, // 3462851249
		{ &Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetRightHandPoseData, "GetRightHandPoseData" }, // 451389529
		{ &Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetSkeletalState, "GetSkeletalState" }, // 3320357648
		{ &Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetSkeletalTransform, "GetSkeletalTransform" }, // 2275272592
		{ &Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetSteamVR_ActionArray, "GetSteamVR_ActionArray" }, // 3357891762
		{ &Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetSteamVR_ActionSetArray, "GetSteamVR_ActionSetArray" }, // 3024473552
		{ &Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetSteamVR_GlobalPredictedSecondsFromNow, "GetSteamVR_GlobalPredictedSecondsFromNow" }, // 1921979397
		{ &Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetSteamVR_HandPoseRelativeToNow, "GetSteamVR_HandPoseRelativeToNow" }, // 304705413
		{ &Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetSteamVR_InputBindingInfo, "GetSteamVR_InputBindingInfo" }, // 1924644106
		{ &Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetSteamVR_OriginLocalizedName, "GetSteamVR_OriginLocalizedName" }, // 2861382368
		{ &Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetSteamVR_OriginTrackedDeviceInfo, "GetSteamVR_OriginTrackedDeviceInfo" }, // 1588945238
		{ &Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_GetUserIPD, "GetUserIPD" }, // 2709542841
		{ &Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_PlaySteamVR_HapticFeedback, "PlaySteamVR_HapticFeedback" }, // 2696399267
		{ &Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_ResetSeatedPosition, "ResetSeatedPosition" }, // 639891278
		{ &Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_SetCurlsAndSplaysState, "SetCurlsAndSplaysState" }, // 1963156276
		{ &Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_SetPoseSource, "SetPoseSource" }, // 1602654941
		{ &Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_SetSteamVR_GlobalPredictedSecondsFromNow, "SetSteamVR_GlobalPredictedSecondsFromNow" }, // 903510883
		{ &Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_ShowAllSteamVR_ActionOrigins, "ShowAllSteamVR_ActionOrigins" }, // 1523702417
		{ &Z_Construct_UFunction_USteamVRInputDeviceFunctionLibrary_ShowSteamVR_ActionOrigin, "ShowSteamVR_ActionOrigin" }, // 4178295660
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamVRInputDeviceFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/*\n * SteamVR Input Extended Functions\n * Functions and properties defined here are safe for developer use\n */" },
		{ "IncludePath", "SteamVRInputDeviceFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/SteamVRInputDeviceFunctionLibrary.h" },
		{ "ToolTip", "* SteamVR Input Extended Functions\n* Functions and properties defined here are safe for developer use" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USteamVRInputDeviceFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamVRInputDeviceFunctionLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USteamVRInputDeviceFunctionLibrary_Statics::ClassParams = {
		&USteamVRInputDeviceFunctionLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USteamVRInputDeviceFunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USteamVRInputDeviceFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USteamVRInputDeviceFunctionLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USteamVRInputDeviceFunctionLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USteamVRInputDeviceFunctionLibrary, 582901985);
	template<> STEAMVRINPUTDEVICE_API UClass* StaticClass<USteamVRInputDeviceFunctionLibrary>()
	{
		return USteamVRInputDeviceFunctionLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USteamVRInputDeviceFunctionLibrary(Z_Construct_UClass_USteamVRInputDeviceFunctionLibrary, &USteamVRInputDeviceFunctionLibrary::StaticClass, TEXT("/Script/SteamVRInputDevice"), TEXT("USteamVRInputDeviceFunctionLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USteamVRInputDeviceFunctionLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
