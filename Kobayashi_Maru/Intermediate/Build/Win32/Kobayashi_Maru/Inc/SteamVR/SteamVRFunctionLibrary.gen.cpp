// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamVR/Classes/SteamVRFunctionLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamVRFunctionLibrary() {}
// Cross Module References
	STEAMVR_API UEnum* Z_Construct_UEnum_SteamVR_ESteamVRTrackedDeviceType();
	UPackage* Z_Construct_UPackage__Script_SteamVR();
	STEAMVR_API UClass* Z_Construct_UClass_USteamVRFunctionLibrary_NoRegister();
	STEAMVR_API UClass* Z_Construct_UClass_USteamVRFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	INPUTCORE_API UEnum* Z_Construct_UEnum_InputCore_EControllerHand();
// End Cross Module References
	static UEnum* ESteamVRTrackedDeviceType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SteamVR_ESteamVRTrackedDeviceType, Z_Construct_UPackage__Script_SteamVR(), TEXT("ESteamVRTrackedDeviceType"));
		}
		return Singleton;
	}
	template<> STEAMVR_API UEnum* StaticEnum<ESteamVRTrackedDeviceType>()
	{
		return ESteamVRTrackedDeviceType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESteamVRTrackedDeviceType(ESteamVRTrackedDeviceType_StaticEnum, TEXT("/Script/SteamVR"), TEXT("ESteamVRTrackedDeviceType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SteamVR_ESteamVRTrackedDeviceType_Hash() { return 726212991U; }
	UEnum* Z_Construct_UEnum_SteamVR_ESteamVRTrackedDeviceType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SteamVR();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESteamVRTrackedDeviceType"), 0, Get_Z_Construct_UEnum_SteamVR_ESteamVRTrackedDeviceType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESteamVRTrackedDeviceType::Controller", (int64)ESteamVRTrackedDeviceType::Controller },
				{ "ESteamVRTrackedDeviceType::TrackingReference", (int64)ESteamVRTrackedDeviceType::TrackingReference },
				{ "ESteamVRTrackedDeviceType::Other", (int64)ESteamVRTrackedDeviceType::Other },
				{ "ESteamVRTrackedDeviceType::Invalid", (int64)ESteamVRTrackedDeviceType::Invalid },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/** Defines the class of tracked devices in SteamVR*/" },
				{ "Controller.Comment", "/** Represents a Steam VR Controller */" },
				{ "Controller.Name", "ESteamVRTrackedDeviceType::Controller" },
				{ "Controller.ToolTip", "Represents a Steam VR Controller" },
				{ "Invalid.Comment", "/** DeviceId is invalid */" },
				{ "Invalid.Name", "ESteamVRTrackedDeviceType::Invalid" },
				{ "Invalid.ToolTip", "DeviceId is invalid" },
				{ "ModuleRelativePath", "Classes/SteamVRFunctionLibrary.h" },
				{ "Other.Comment", "/** Misc. device types, for future expansion */" },
				{ "Other.Name", "ESteamVRTrackedDeviceType::Other" },
				{ "Other.ToolTip", "Misc. device types, for future expansion" },
				{ "ToolTip", "Defines the class of tracked devices in SteamVR" },
				{ "TrackingReference.Comment", "/** Represents a static tracking reference device, such as a Lighthouse or tracking camera */" },
				{ "TrackingReference.Name", "ESteamVRTrackedDeviceType::TrackingReference" },
				{ "TrackingReference.ToolTip", "Represents a static tracking reference device, such as a Lighthouse or tracking camera" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SteamVR,
				nullptr,
				"ESteamVRTrackedDeviceType",
				"ESteamVRTrackedDeviceType",
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
	DEFINE_FUNCTION(USteamVRFunctionLibrary::execGetHandPositionAndOrientation)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_ControllerIndex);
		P_GET_ENUM(EControllerHand,Z_Param_Hand);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_OutPosition);
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_OutOrientation);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USteamVRFunctionLibrary::GetHandPositionAndOrientation(Z_Param_ControllerIndex,EControllerHand(Z_Param_Hand),Z_Param_Out_OutPosition,Z_Param_Out_OutOrientation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamVRFunctionLibrary::execGetTrackedDevicePositionAndOrientation)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_DeviceId);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_OutPosition);
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_OutOrientation);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USteamVRFunctionLibrary::GetTrackedDevicePositionAndOrientation(Z_Param_DeviceId,Z_Param_Out_OutPosition,Z_Param_Out_OutOrientation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamVRFunctionLibrary::execGetValidTrackedDeviceIds)
	{
		P_GET_ENUM(ESteamVRTrackedDeviceType,Z_Param_DeviceType);
		P_GET_TARRAY_REF(int32,Z_Param_Out_OutTrackedDeviceIds);
		P_FINISH;
		P_NATIVE_BEGIN;
		USteamVRFunctionLibrary::GetValidTrackedDeviceIds(ESteamVRTrackedDeviceType(Z_Param_DeviceType),Z_Param_Out_OutTrackedDeviceIds);
		P_NATIVE_END;
	}
	void USteamVRFunctionLibrary::StaticRegisterNativesUSteamVRFunctionLibrary()
	{
		UClass* Class = USteamVRFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetHandPositionAndOrientation", &USteamVRFunctionLibrary::execGetHandPositionAndOrientation },
			{ "GetTrackedDevicePositionAndOrientation", &USteamVRFunctionLibrary::execGetTrackedDevicePositionAndOrientation },
			{ "GetValidTrackedDeviceIds", &USteamVRFunctionLibrary::execGetValidTrackedDeviceIds },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USteamVRFunctionLibrary_GetHandPositionAndOrientation_Statics
	{
		struct SteamVRFunctionLibrary_eventGetHandPositionAndOrientation_Parms
		{
			int32 ControllerIndex;
			EControllerHand Hand;
			FVector OutPosition;
			FRotator OutOrientation;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutOrientation;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutPosition;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Hand;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Hand_Underlying;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ControllerIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USteamVRFunctionLibrary_GetHandPositionAndOrientation_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SteamVRFunctionLibrary_eventGetHandPositionAndOrientation_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamVRFunctionLibrary_GetHandPositionAndOrientation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SteamVRFunctionLibrary_eventGetHandPositionAndOrientation_Parms), &Z_Construct_UFunction_USteamVRFunctionLibrary_GetHandPositionAndOrientation_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamVRFunctionLibrary_GetHandPositionAndOrientation_Statics::NewProp_OutOrientation = { "OutOrientation", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamVRFunctionLibrary_eventGetHandPositionAndOrientation_Parms, OutOrientation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamVRFunctionLibrary_GetHandPositionAndOrientation_Statics::NewProp_OutPosition = { "OutPosition", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamVRFunctionLibrary_eventGetHandPositionAndOrientation_Parms, OutPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USteamVRFunctionLibrary_GetHandPositionAndOrientation_Statics::NewProp_Hand = { "Hand", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamVRFunctionLibrary_eventGetHandPositionAndOrientation_Parms, Hand), Z_Construct_UEnum_InputCore_EControllerHand, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamVRFunctionLibrary_GetHandPositionAndOrientation_Statics::NewProp_Hand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamVRFunctionLibrary_GetHandPositionAndOrientation_Statics::NewProp_ControllerIndex = { "ControllerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamVRFunctionLibrary_eventGetHandPositionAndOrientation_Parms, ControllerIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamVRFunctionLibrary_GetHandPositionAndOrientation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamVRFunctionLibrary_GetHandPositionAndOrientation_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamVRFunctionLibrary_GetHandPositionAndOrientation_Statics::NewProp_OutOrientation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamVRFunctionLibrary_GetHandPositionAndOrientation_Statics::NewProp_OutPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamVRFunctionLibrary_GetHandPositionAndOrientation_Statics::NewProp_Hand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamVRFunctionLibrary_GetHandPositionAndOrientation_Statics::NewProp_Hand_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamVRFunctionLibrary_GetHandPositionAndOrientation_Statics::NewProp_ControllerIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamVRFunctionLibrary_GetHandPositionAndOrientation_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamVR" },
		{ "Comment", "/**\n\x09 * Given a controller index and a hand, returns the position and orientation of the controller\n\x09 *\n\x09 * @param\x09""ControllerIndex\x09Index of the controller to get the tracked device ID for\n\x09 * @param\x09Hand\x09\x09\x09Which hand's controller to get the position and orientation for\n\x09 * @param\x09OutPosition\x09\x09(out) Current position of the device\n\x09 * @param\x09OutRotation\x09\x09(out) Current rotation of the device\n\x09 * @return\x09True if the specified controller index has a valid tracked device ID\n\x09 */" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Use motion controller components instead" },
		{ "ModuleRelativePath", "Classes/SteamVRFunctionLibrary.h" },
		{ "ToolTip", "Given a controller index and a hand, returns the position and orientation of the controller\n\n@param       ControllerIndex Index of the controller to get the tracked device ID for\n@param       Hand                    Which hand's controller to get the position and orientation for\n@param       OutPosition             (out) Current position of the device\n@param       OutRotation             (out) Current rotation of the device\n@return      True if the specified controller index has a valid tracked device ID" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamVRFunctionLibrary_GetHandPositionAndOrientation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamVRFunctionLibrary, nullptr, "GetHandPositionAndOrientation", nullptr, nullptr, sizeof(SteamVRFunctionLibrary_eventGetHandPositionAndOrientation_Parms), Z_Construct_UFunction_USteamVRFunctionLibrary_GetHandPositionAndOrientation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamVRFunctionLibrary_GetHandPositionAndOrientation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamVRFunctionLibrary_GetHandPositionAndOrientation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamVRFunctionLibrary_GetHandPositionAndOrientation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamVRFunctionLibrary_GetHandPositionAndOrientation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamVRFunctionLibrary_GetHandPositionAndOrientation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamVRFunctionLibrary_GetTrackedDevicePositionAndOrientation_Statics
	{
		struct SteamVRFunctionLibrary_eventGetTrackedDevicePositionAndOrientation_Parms
		{
			int32 DeviceId;
			FVector OutPosition;
			FRotator OutOrientation;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutOrientation;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutPosition;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DeviceId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USteamVRFunctionLibrary_GetTrackedDevicePositionAndOrientation_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SteamVRFunctionLibrary_eventGetTrackedDevicePositionAndOrientation_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamVRFunctionLibrary_GetTrackedDevicePositionAndOrientation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SteamVRFunctionLibrary_eventGetTrackedDevicePositionAndOrientation_Parms), &Z_Construct_UFunction_USteamVRFunctionLibrary_GetTrackedDevicePositionAndOrientation_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamVRFunctionLibrary_GetTrackedDevicePositionAndOrientation_Statics::NewProp_OutOrientation = { "OutOrientation", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamVRFunctionLibrary_eventGetTrackedDevicePositionAndOrientation_Parms, OutOrientation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamVRFunctionLibrary_GetTrackedDevicePositionAndOrientation_Statics::NewProp_OutPosition = { "OutPosition", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamVRFunctionLibrary_eventGetTrackedDevicePositionAndOrientation_Parms, OutPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamVRFunctionLibrary_GetTrackedDevicePositionAndOrientation_Statics::NewProp_DeviceId = { "DeviceId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamVRFunctionLibrary_eventGetTrackedDevicePositionAndOrientation_Parms, DeviceId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamVRFunctionLibrary_GetTrackedDevicePositionAndOrientation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamVRFunctionLibrary_GetTrackedDevicePositionAndOrientation_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamVRFunctionLibrary_GetTrackedDevicePositionAndOrientation_Statics::NewProp_OutOrientation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamVRFunctionLibrary_GetTrackedDevicePositionAndOrientation_Statics::NewProp_OutPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamVRFunctionLibrary_GetTrackedDevicePositionAndOrientation_Statics::NewProp_DeviceId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamVRFunctionLibrary_GetTrackedDevicePositionAndOrientation_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamVR" },
		{ "Comment", "/**\n\x09 * Gets the orientation and position (in device space) of the device with the specified ID\n\x09 *\n\x09 * @param\x09""DeviceId\x09\x09Id of the device to get tracking info for\n\x09 * @param\x09OutPosition\x09\x09(out) Current position of the device\n\x09 * @param\x09OutOrientation\x09(out) Current orientation of the device\n\x09 * @return\x09True if the specified device id had a valid tracking pose this frame, false otherwise\n\x09 */" },
		{ "ModuleRelativePath", "Classes/SteamVRFunctionLibrary.h" },
		{ "ToolTip", "Gets the orientation and position (in device space) of the device with the specified ID\n\n@param       DeviceId                Id of the device to get tracking info for\n@param       OutPosition             (out) Current position of the device\n@param       OutOrientation  (out) Current orientation of the device\n@return      True if the specified device id had a valid tracking pose this frame, false otherwise" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamVRFunctionLibrary_GetTrackedDevicePositionAndOrientation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamVRFunctionLibrary, nullptr, "GetTrackedDevicePositionAndOrientation", nullptr, nullptr, sizeof(SteamVRFunctionLibrary_eventGetTrackedDevicePositionAndOrientation_Parms), Z_Construct_UFunction_USteamVRFunctionLibrary_GetTrackedDevicePositionAndOrientation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamVRFunctionLibrary_GetTrackedDevicePositionAndOrientation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamVRFunctionLibrary_GetTrackedDevicePositionAndOrientation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamVRFunctionLibrary_GetTrackedDevicePositionAndOrientation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamVRFunctionLibrary_GetTrackedDevicePositionAndOrientation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamVRFunctionLibrary_GetTrackedDevicePositionAndOrientation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamVRFunctionLibrary_GetValidTrackedDeviceIds_Statics
	{
		struct SteamVRFunctionLibrary_eventGetValidTrackedDeviceIds_Parms
		{
			ESteamVRTrackedDeviceType DeviceType;
			TArray<int32> OutTrackedDeviceIds;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutTrackedDeviceIds;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OutTrackedDeviceIds_Inner;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DeviceType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DeviceType_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamVRFunctionLibrary_GetValidTrackedDeviceIds_Statics::NewProp_OutTrackedDeviceIds = { "OutTrackedDeviceIds", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamVRFunctionLibrary_eventGetValidTrackedDeviceIds_Parms, OutTrackedDeviceIds), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamVRFunctionLibrary_GetValidTrackedDeviceIds_Statics::NewProp_OutTrackedDeviceIds_Inner = { "OutTrackedDeviceIds", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USteamVRFunctionLibrary_GetValidTrackedDeviceIds_Statics::NewProp_DeviceType = { "DeviceType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamVRFunctionLibrary_eventGetValidTrackedDeviceIds_Parms, DeviceType), Z_Construct_UEnum_SteamVR_ESteamVRTrackedDeviceType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamVRFunctionLibrary_GetValidTrackedDeviceIds_Statics::NewProp_DeviceType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamVRFunctionLibrary_GetValidTrackedDeviceIds_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamVRFunctionLibrary_GetValidTrackedDeviceIds_Statics::NewProp_OutTrackedDeviceIds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamVRFunctionLibrary_GetValidTrackedDeviceIds_Statics::NewProp_OutTrackedDeviceIds_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamVRFunctionLibrary_GetValidTrackedDeviceIds_Statics::NewProp_DeviceType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamVRFunctionLibrary_GetValidTrackedDeviceIds_Statics::NewProp_DeviceType_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamVRFunctionLibrary_GetValidTrackedDeviceIds_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamVR" },
		{ "Comment", "/**\n\x09 * Returns an array of the currently tracked device IDs\n\x09 *\n\x09 * @param\x09""DeviceType\x09Which class of device (e.g. controller, tracking devices) to get Device Ids for\n\x09 * @param\x09OutTrackedDeviceIds\x09(out) Array containing the ID of each device that's currently tracked\n\x09 */" },
		{ "ModuleRelativePath", "Classes/SteamVRFunctionLibrary.h" },
		{ "ToolTip", "Returns an array of the currently tracked device IDs\n\n@param       DeviceType      Which class of device (e.g. controller, tracking devices) to get Device Ids for\n@param       OutTrackedDeviceIds     (out) Array containing the ID of each device that's currently tracked" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamVRFunctionLibrary_GetValidTrackedDeviceIds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamVRFunctionLibrary, nullptr, "GetValidTrackedDeviceIds", nullptr, nullptr, sizeof(SteamVRFunctionLibrary_eventGetValidTrackedDeviceIds_Parms), Z_Construct_UFunction_USteamVRFunctionLibrary_GetValidTrackedDeviceIds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamVRFunctionLibrary_GetValidTrackedDeviceIds_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamVRFunctionLibrary_GetValidTrackedDeviceIds_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamVRFunctionLibrary_GetValidTrackedDeviceIds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamVRFunctionLibrary_GetValidTrackedDeviceIds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamVRFunctionLibrary_GetValidTrackedDeviceIds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USteamVRFunctionLibrary_NoRegister()
	{
		return USteamVRFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_USteamVRFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USteamVRFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamVR,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USteamVRFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamVRFunctionLibrary_GetHandPositionAndOrientation, "GetHandPositionAndOrientation" }, // 1377340474
		{ &Z_Construct_UFunction_USteamVRFunctionLibrary_GetTrackedDevicePositionAndOrientation, "GetTrackedDevicePositionAndOrientation" }, // 142996292
		{ &Z_Construct_UFunction_USteamVRFunctionLibrary_GetValidTrackedDeviceIds, "GetValidTrackedDeviceIds" }, // 64629922
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamVRFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * SteamVR Extensions Function Library\n */" },
		{ "IncludePath", "SteamVRFunctionLibrary.h" },
		{ "ModuleRelativePath", "Classes/SteamVRFunctionLibrary.h" },
		{ "ToolTip", "SteamVR Extensions Function Library" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USteamVRFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamVRFunctionLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USteamVRFunctionLibrary_Statics::ClassParams = {
		&USteamVRFunctionLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USteamVRFunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USteamVRFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USteamVRFunctionLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USteamVRFunctionLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USteamVRFunctionLibrary, 2484863929);
	template<> STEAMVR_API UClass* StaticClass<USteamVRFunctionLibrary>()
	{
		return USteamVRFunctionLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USteamVRFunctionLibrary(Z_Construct_UClass_USteamVRFunctionLibrary, &USteamVRFunctionLibrary::StaticClass, TEXT("/Script/SteamVR"), TEXT("USteamVRFunctionLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USteamVRFunctionLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
