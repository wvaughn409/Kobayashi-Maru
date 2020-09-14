// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LocationServicesBPLibrary/Classes/LocationServicesBPLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLocationServicesBPLibrary() {}
// Cross Module References
	LOCATIONSERVICESBPLIBRARY_API UFunction* Z_Construct_UDelegateFunction_LocationServicesBPLibrary_LocationServicesData_OnLocationChanged__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_LocationServicesBPLibrary();
	LOCATIONSERVICESBPLIBRARY_API UScriptStruct* Z_Construct_UScriptStruct_FLocationServicesData();
	LOCATIONSERVICESBPLIBRARY_API UEnum* Z_Construct_UEnum_LocationServicesBPLibrary_ELocationAccuracy();
	LOCATIONSERVICESBPLIBRARY_API UClass* Z_Construct_UClass_ULocationServices_NoRegister();
	LOCATIONSERVICESBPLIBRARY_API UClass* Z_Construct_UClass_ULocationServices();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	LOCATIONSERVICESBPLIBRARY_API UClass* Z_Construct_UClass_ULocationServicesImpl_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_LocationServicesBPLibrary_LocationServicesData_OnLocationChanged__DelegateSignature_Statics
	{
		struct _Script_LocationServicesBPLibrary_eventLocationServicesData_OnLocationChanged_Parms
		{
			FLocationServicesData LocationData;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LocationData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_LocationServicesBPLibrary_LocationServicesData_OnLocationChanged__DelegateSignature_Statics::NewProp_LocationData = { "LocationData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_LocationServicesBPLibrary_eventLocationServicesData_OnLocationChanged_Parms, LocationData), Z_Construct_UScriptStruct_FLocationServicesData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_LocationServicesBPLibrary_LocationServicesData_OnLocationChanged__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LocationServicesBPLibrary_LocationServicesData_OnLocationChanged__DelegateSignature_Statics::NewProp_LocationData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_LocationServicesBPLibrary_LocationServicesData_OnLocationChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/LocationServicesBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_LocationServicesBPLibrary_LocationServicesData_OnLocationChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_LocationServicesBPLibrary, nullptr, "LocationServicesData_OnLocationChanged__DelegateSignature", nullptr, nullptr, sizeof(_Script_LocationServicesBPLibrary_eventLocationServicesData_OnLocationChanged_Parms), Z_Construct_UDelegateFunction_LocationServicesBPLibrary_LocationServicesData_OnLocationChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LocationServicesBPLibrary_LocationServicesData_OnLocationChanged__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_LocationServicesBPLibrary_LocationServicesData_OnLocationChanged__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LocationServicesBPLibrary_LocationServicesData_OnLocationChanged__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_LocationServicesBPLibrary_LocationServicesData_OnLocationChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_LocationServicesBPLibrary_LocationServicesData_OnLocationChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	static UEnum* ELocationAccuracy_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_LocationServicesBPLibrary_ELocationAccuracy, Z_Construct_UPackage__Script_LocationServicesBPLibrary(), TEXT("ELocationAccuracy"));
		}
		return Singleton;
	}
	template<> LOCATIONSERVICESBPLIBRARY_API UEnum* StaticEnum<ELocationAccuracy>()
	{
		return ELocationAccuracy_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ELocationAccuracy(ELocationAccuracy_StaticEnum, TEXT("/Script/LocationServicesBPLibrary"), TEXT("ELocationAccuracy"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_LocationServicesBPLibrary_ELocationAccuracy_Hash() { return 625953379U; }
	UEnum* Z_Construct_UEnum_LocationServicesBPLibrary_ELocationAccuracy()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_LocationServicesBPLibrary();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ELocationAccuracy"), 0, Get_Z_Construct_UEnum_LocationServicesBPLibrary_ELocationAccuracy_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ELocationAccuracy::LA_ThreeKilometers", (int64)ELocationAccuracy::LA_ThreeKilometers },
				{ "ELocationAccuracy::LA_OneKilometer", (int64)ELocationAccuracy::LA_OneKilometer },
				{ "ELocationAccuracy::LA_HundredMeters", (int64)ELocationAccuracy::LA_HundredMeters },
				{ "ELocationAccuracy::LA_TenMeters", (int64)ELocationAccuracy::LA_TenMeters },
				{ "ELocationAccuracy::LA_Best", (int64)ELocationAccuracy::LA_Best },
				{ "ELocationAccuracy::LA_Navigation", (int64)ELocationAccuracy::LA_Navigation },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/*\nEnum used to determine what accuracy the Location Services should be run with. Based off the iOS kCLLocationAccuracy\nenums since those were the most restrictive (but convienently also had descriptive names)\n*/" },
				{ "LA_Best.DisplayName", "Best" },
				{ "LA_Best.Name", "ELocationAccuracy::LA_Best" },
				{ "LA_HundredMeters.DisplayName", "One Hundred Meters" },
				{ "LA_HundredMeters.Name", "ELocationAccuracy::LA_HundredMeters" },
				{ "LA_Navigation.DisplayName", "Best for Navigation" },
				{ "LA_Navigation.Name", "ELocationAccuracy::LA_Navigation" },
				{ "LA_OneKilometer.DisplayName", "One Kilometer" },
				{ "LA_OneKilometer.Name", "ELocationAccuracy::LA_OneKilometer" },
				{ "LA_TenMeters.DisplayName", "Ten Meters" },
				{ "LA_TenMeters.Name", "ELocationAccuracy::LA_TenMeters" },
				{ "LA_ThreeKilometers.DisplayName", "Three Kilometers" },
				{ "LA_ThreeKilometers.Name", "ELocationAccuracy::LA_ThreeKilometers" },
				{ "ModuleRelativePath", "Classes/LocationServicesBPLibrary.h" },
				{ "ToolTip", "Enum used to determine what accuracy the Location Services should be run with. Based off the iOS kCLLocationAccuracy\nenums since those were the most restrictive (but convienently also had descriptive names)" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_LocationServicesBPLibrary,
				nullptr,
				"ELocationAccuracy",
				"ELocationAccuracy",
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
class UScriptStruct* FLocationServicesData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LOCATIONSERVICESBPLIBRARY_API uint32 Get_Z_Construct_UScriptStruct_FLocationServicesData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLocationServicesData, Z_Construct_UPackage__Script_LocationServicesBPLibrary(), TEXT("LocationServicesData"), sizeof(FLocationServicesData), Get_Z_Construct_UScriptStruct_FLocationServicesData_Hash());
	}
	return Singleton;
}
template<> LOCATIONSERVICESBPLIBRARY_API UScriptStruct* StaticStruct<FLocationServicesData>()
{
	return FLocationServicesData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLocationServicesData(FLocationServicesData::StaticStruct, TEXT("/Script/LocationServicesBPLibrary"), TEXT("LocationServicesData"), false, nullptr, nullptr);
static struct FScriptStruct_LocationServicesBPLibrary_StaticRegisterNativesFLocationServicesData
{
	FScriptStruct_LocationServicesBPLibrary_StaticRegisterNativesFLocationServicesData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LocationServicesData")),new UScriptStruct::TCppStructOps<FLocationServicesData>);
	}
} ScriptStruct_LocationServicesBPLibrary_StaticRegisterNativesFLocationServicesData;
	struct Z_Construct_UScriptStruct_FLocationServicesData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Altitude_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Altitude;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VerticalAccuracy_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VerticalAccuracy;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HorizontalAccuracy_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HorizontalAccuracy;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Latitude_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Latitude;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Longitude_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Longitude;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Timestamp_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Timestamp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLocationServicesData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/*\nStruct to hold relevant location data retrieved from the mobile implementation's Location Service\n*/" },
		{ "ModuleRelativePath", "Classes/LocationServicesBPLibrary.h" },
		{ "ToolTip", "Struct to hold relevant location data retrieved from the mobile implementation's Location Service" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLocationServicesData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLocationServicesData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLocationServicesData_Statics::NewProp_Altitude_MetaData[] = {
		{ "Category", "Location Data Struct" },
		{ "Comment", "/* In meters, if provided with the result */" },
		{ "ModuleRelativePath", "Classes/LocationServicesBPLibrary.h" },
		{ "ToolTip", "In meters, if provided with the result" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLocationServicesData_Statics::NewProp_Altitude = { "Altitude", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLocationServicesData, Altitude), METADATA_PARAMS(Z_Construct_UScriptStruct_FLocationServicesData_Statics::NewProp_Altitude_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLocationServicesData_Statics::NewProp_Altitude_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLocationServicesData_Statics::NewProp_VerticalAccuracy_MetaData[] = {
		{ "Category", "Location Data Struct" },
		{ "Comment", "/* Estimated accuracy of the result, in meters (iOS only) */" },
		{ "ModuleRelativePath", "Classes/LocationServicesBPLibrary.h" },
		{ "ToolTip", "Estimated accuracy of the result, in meters (iOS only)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLocationServicesData_Statics::NewProp_VerticalAccuracy = { "VerticalAccuracy", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLocationServicesData, VerticalAccuracy), METADATA_PARAMS(Z_Construct_UScriptStruct_FLocationServicesData_Statics::NewProp_VerticalAccuracy_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLocationServicesData_Statics::NewProp_VerticalAccuracy_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLocationServicesData_Statics::NewProp_HorizontalAccuracy_MetaData[] = {
		{ "Category", "Location Data Struct" },
		{ "Comment", "/* Estimated horizontal (Android: overall) accuracy of the result, in meters */" },
		{ "ModuleRelativePath", "Classes/LocationServicesBPLibrary.h" },
		{ "ToolTip", "Estimated horizontal (Android: overall) accuracy of the result, in meters" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLocationServicesData_Statics::NewProp_HorizontalAccuracy = { "HorizontalAccuracy", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLocationServicesData, HorizontalAccuracy), METADATA_PARAMS(Z_Construct_UScriptStruct_FLocationServicesData_Statics::NewProp_HorizontalAccuracy_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLocationServicesData_Statics::NewProp_HorizontalAccuracy_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLocationServicesData_Statics::NewProp_Latitude_MetaData[] = {
		{ "Category", "Location Data Struct" },
		{ "ModuleRelativePath", "Classes/LocationServicesBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLocationServicesData_Statics::NewProp_Latitude = { "Latitude", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLocationServicesData, Latitude), METADATA_PARAMS(Z_Construct_UScriptStruct_FLocationServicesData_Statics::NewProp_Latitude_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLocationServicesData_Statics::NewProp_Latitude_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLocationServicesData_Statics::NewProp_Longitude_MetaData[] = {
		{ "Category", "Location Data Struct" },
		{ "ModuleRelativePath", "Classes/LocationServicesBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLocationServicesData_Statics::NewProp_Longitude = { "Longitude", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLocationServicesData, Longitude), METADATA_PARAMS(Z_Construct_UScriptStruct_FLocationServicesData_Statics::NewProp_Longitude_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLocationServicesData_Statics::NewProp_Longitude_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLocationServicesData_Statics::NewProp_Timestamp_MetaData[] = {
		{ "Category", "Location Data Struct" },
		{ "Comment", "/* Timestamp from when this location data was taken (UTC time in milliseconds since 1 January 1970) */" },
		{ "ModuleRelativePath", "Classes/LocationServicesBPLibrary.h" },
		{ "ToolTip", "Timestamp from when this location data was taken (UTC time in milliseconds since 1 January 1970)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLocationServicesData_Statics::NewProp_Timestamp = { "Timestamp", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLocationServicesData, Timestamp), METADATA_PARAMS(Z_Construct_UScriptStruct_FLocationServicesData_Statics::NewProp_Timestamp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLocationServicesData_Statics::NewProp_Timestamp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLocationServicesData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLocationServicesData_Statics::NewProp_Altitude,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLocationServicesData_Statics::NewProp_VerticalAccuracy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLocationServicesData_Statics::NewProp_HorizontalAccuracy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLocationServicesData_Statics::NewProp_Latitude,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLocationServicesData_Statics::NewProp_Longitude,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLocationServicesData_Statics::NewProp_Timestamp,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLocationServicesData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LocationServicesBPLibrary,
		nullptr,
		&NewStructOps,
		"LocationServicesData",
		sizeof(FLocationServicesData),
		alignof(FLocationServicesData),
		Z_Construct_UScriptStruct_FLocationServicesData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLocationServicesData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLocationServicesData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLocationServicesData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLocationServicesData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLocationServicesData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_LocationServicesBPLibrary();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LocationServicesData"), sizeof(FLocationServicesData), Get_Z_Construct_UScriptStruct_FLocationServicesData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLocationServicesData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLocationServicesData_Hash() { return 3649801700U; }
	DEFINE_FUNCTION(ULocationServices::execGetLocationServicesImpl)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ULocationServicesImpl**)Z_Param__Result=ULocationServices::GetLocationServicesImpl();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULocationServices::execIsLocationAccuracyAvailable)
	{
		P_GET_ENUM(ELocationAccuracy,Z_Param_Accuracy);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=ULocationServices::IsLocationAccuracyAvailable(ELocationAccuracy(Z_Param_Accuracy));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULocationServices::execAreLocationServicesEnabled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=ULocationServices::AreLocationServicesEnabled();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULocationServices::execGetLastKnownLocation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FLocationServicesData*)Z_Param__Result=ULocationServices::GetLastKnownLocation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULocationServices::execStopLocationServices)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=ULocationServices::StopLocationServices();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULocationServices::execStartLocationServices)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=ULocationServices::StartLocationServices();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULocationServices::execInitLocationServices)
	{
		P_GET_ENUM(ELocationAccuracy,Z_Param_Accuracy);
		P_GET_PROPERTY(FFloatProperty,Z_Param_UpdateFrequency);
		P_GET_PROPERTY(FFloatProperty,Z_Param_MinDistanceFilter);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=ULocationServices::InitLocationServices(ELocationAccuracy(Z_Param_Accuracy),Z_Param_UpdateFrequency,Z_Param_MinDistanceFilter);
		P_NATIVE_END;
	}
	void ULocationServices::StaticRegisterNativesULocationServices()
	{
		UClass* Class = ULocationServices::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AreLocationServicesEnabled", &ULocationServices::execAreLocationServicesEnabled },
			{ "GetLastKnownLocation", &ULocationServices::execGetLastKnownLocation },
			{ "GetLocationServicesImpl", &ULocationServices::execGetLocationServicesImpl },
			{ "InitLocationServices", &ULocationServices::execInitLocationServices },
			{ "IsLocationAccuracyAvailable", &ULocationServices::execIsLocationAccuracyAvailable },
			{ "StartLocationServices", &ULocationServices::execStartLocationServices },
			{ "StopLocationServices", &ULocationServices::execStopLocationServices },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULocationServices_AreLocationServicesEnabled_Statics
	{
		struct LocationServices_eventAreLocationServicesEnabled_Parms
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
	void Z_Construct_UFunction_ULocationServices_AreLocationServicesEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LocationServices_eventAreLocationServicesEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULocationServices_AreLocationServicesEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LocationServices_eventAreLocationServicesEnabled_Parms), &Z_Construct_UFunction_ULocationServices_AreLocationServicesEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULocationServices_AreLocationServicesEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULocationServices_AreLocationServicesEnabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULocationServices_AreLocationServicesEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "Services|Mobile|Location" },
		{ "Comment", "/**\n\x09* Checks if the Location Services on the mobile device are enabled for this application\n\x09* @return - true if the mobile device has enabled the appropriate service for the app \n\x09*/" },
		{ "ModuleRelativePath", "Classes/LocationServicesBPLibrary.h" },
		{ "ToolTip", "Checks if the Location Services on the mobile device are enabled for this application\n@return - true if the mobile device has enabled the appropriate service for the app" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULocationServices_AreLocationServicesEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULocationServices, nullptr, "AreLocationServicesEnabled", nullptr, nullptr, sizeof(LocationServices_eventAreLocationServicesEnabled_Parms), Z_Construct_UFunction_ULocationServices_AreLocationServicesEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULocationServices_AreLocationServicesEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULocationServices_AreLocationServicesEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULocationServices_AreLocationServicesEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULocationServices_AreLocationServicesEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULocationServices_AreLocationServicesEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULocationServices_GetLastKnownLocation_Statics
	{
		struct LocationServices_eventGetLastKnownLocation_Parms
		{
			FLocationServicesData ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULocationServices_GetLastKnownLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LocationServices_eventGetLastKnownLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FLocationServicesData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULocationServices_GetLastKnownLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULocationServices_GetLastKnownLocation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULocationServices_GetLastKnownLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Services|Mobile|Location" },
		{ "Comment", "/**\n\x09* Returns the last location information returned by the location service. If no location update has been made, will return\n\x09* a default-value-filled struct. \n\x09* @return - the last known location from updates \n\x09*/" },
		{ "ModuleRelativePath", "Classes/LocationServicesBPLibrary.h" },
		{ "ToolTip", "Returns the last location information returned by the location service. If no location update has been made, will return\na default-value-filled struct.\n@return - the last known location from updates" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULocationServices_GetLastKnownLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULocationServices, nullptr, "GetLastKnownLocation", nullptr, nullptr, sizeof(LocationServices_eventGetLastKnownLocation_Parms), Z_Construct_UFunction_ULocationServices_GetLastKnownLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULocationServices_GetLastKnownLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULocationServices_GetLastKnownLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULocationServices_GetLastKnownLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULocationServices_GetLastKnownLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULocationServices_GetLastKnownLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULocationServices_GetLocationServicesImpl_Statics
	{
		struct LocationServices_eventGetLocationServicesImpl_Parms
		{
			ULocationServicesImpl* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULocationServices_GetLocationServicesImpl_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LocationServices_eventGetLocationServicesImpl_Parms, ReturnValue), Z_Construct_UClass_ULocationServicesImpl_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULocationServices_GetLocationServicesImpl_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULocationServices_GetLocationServicesImpl_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULocationServices_GetLocationServicesImpl_Statics::Function_MetaDataParams[] = {
		{ "Category", "Services|Mobile|Location" },
		{ "Comment", "/*\n\x09* Returns the Location Services implementation object. Intended to be used to set up the FLocationServicesData_OnLocationChanged\n\x09* delegate in Blueprints.\n\x09* @return - the Android or IOS impl object\n\x09*/" },
		{ "ModuleRelativePath", "Classes/LocationServicesBPLibrary.h" },
		{ "ToolTip", "* Returns the Location Services implementation object. Intended to be used to set up the FLocationServicesData_OnLocationChanged\n* delegate in Blueprints.\n* @return - the Android or IOS impl object" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULocationServices_GetLocationServicesImpl_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULocationServices, nullptr, "GetLocationServicesImpl", nullptr, nullptr, sizeof(LocationServices_eventGetLocationServicesImpl_Parms), Z_Construct_UFunction_ULocationServices_GetLocationServicesImpl_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULocationServices_GetLocationServicesImpl_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULocationServices_GetLocationServicesImpl_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULocationServices_GetLocationServicesImpl_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULocationServices_GetLocationServicesImpl()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULocationServices_GetLocationServicesImpl_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULocationServices_InitLocationServices_Statics
	{
		struct LocationServices_eventInitLocationServices_Parms
		{
			ELocationAccuracy Accuracy;
			float UpdateFrequency;
			float MinDistanceFilter;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinDistanceFilter;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_UpdateFrequency;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Accuracy;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Accuracy_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ULocationServices_InitLocationServices_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LocationServices_eventInitLocationServices_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULocationServices_InitLocationServices_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LocationServices_eventInitLocationServices_Parms), &Z_Construct_UFunction_ULocationServices_InitLocationServices_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULocationServices_InitLocationServices_Statics::NewProp_MinDistanceFilter = { "MinDistanceFilter", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LocationServices_eventInitLocationServices_Parms, MinDistanceFilter), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULocationServices_InitLocationServices_Statics::NewProp_UpdateFrequency = { "UpdateFrequency", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LocationServices_eventInitLocationServices_Parms, UpdateFrequency), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ULocationServices_InitLocationServices_Statics::NewProp_Accuracy = { "Accuracy", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LocationServices_eventInitLocationServices_Parms, Accuracy), Z_Construct_UEnum_LocationServicesBPLibrary_ELocationAccuracy, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULocationServices_InitLocationServices_Statics::NewProp_Accuracy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULocationServices_InitLocationServices_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULocationServices_InitLocationServices_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULocationServices_InitLocationServices_Statics::NewProp_MinDistanceFilter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULocationServices_InitLocationServices_Statics::NewProp_UpdateFrequency,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULocationServices_InitLocationServices_Statics::NewProp_Accuracy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULocationServices_InitLocationServices_Statics::NewProp_Accuracy_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULocationServices_InitLocationServices_Statics::Function_MetaDataParams[] = {
		{ "Category", "Services|Mobile|Location" },
		{ "Comment", "/** \n\x09 * Called to set up the Location Service before use\n\x09 * \n\x09 * @param Accuracy - as seen in the enum above\n\x09 * @param UpdateFrequency - in milliseconds. (Android only)\n\x09 * @param MinDistance - minDistance before a location update, in meters. 0 here means \"update asap\"\n\x09 * @return - true if Initialization was succesful\n\x09 */" },
		{ "ModuleRelativePath", "Classes/LocationServicesBPLibrary.h" },
		{ "ToolTip", "Called to set up the Location Service before use\n\n@param Accuracy - as seen in the enum above\n@param UpdateFrequency - in milliseconds. (Android only)\n@param MinDistance - minDistance before a location update, in meters. 0 here means \"update asap\"\n@return - true if Initialization was succesful" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULocationServices_InitLocationServices_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULocationServices, nullptr, "InitLocationServices", nullptr, nullptr, sizeof(LocationServices_eventInitLocationServices_Parms), Z_Construct_UFunction_ULocationServices_InitLocationServices_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULocationServices_InitLocationServices_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULocationServices_InitLocationServices_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULocationServices_InitLocationServices_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULocationServices_InitLocationServices()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULocationServices_InitLocationServices_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULocationServices_IsLocationAccuracyAvailable_Statics
	{
		struct LocationServices_eventIsLocationAccuracyAvailable_Parms
		{
			ELocationAccuracy Accuracy;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Accuracy;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Accuracy_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ULocationServices_IsLocationAccuracyAvailable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LocationServices_eventIsLocationAccuracyAvailable_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULocationServices_IsLocationAccuracyAvailable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LocationServices_eventIsLocationAccuracyAvailable_Parms), &Z_Construct_UFunction_ULocationServices_IsLocationAccuracyAvailable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ULocationServices_IsLocationAccuracyAvailable_Statics::NewProp_Accuracy = { "Accuracy", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LocationServices_eventIsLocationAccuracyAvailable_Parms, Accuracy), Z_Construct_UEnum_LocationServicesBPLibrary_ELocationAccuracy, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULocationServices_IsLocationAccuracyAvailable_Statics::NewProp_Accuracy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULocationServices_IsLocationAccuracyAvailable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULocationServices_IsLocationAccuracyAvailable_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULocationServices_IsLocationAccuracyAvailable_Statics::NewProp_Accuracy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULocationServices_IsLocationAccuracyAvailable_Statics::NewProp_Accuracy_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULocationServices_IsLocationAccuracyAvailable_Statics::Function_MetaDataParams[] = {
		{ "Category", "Services|Mobile|Location" },
		{ "Comment", "/**\n\x09* Checks if the supplied Accuracy is available on the current device.\n\x09* @param Accuracy - the accuracy to check\n\x09* @return - true if the mobile device can support the Accuracy, false if it will use a different accuracy\n\x09*/" },
		{ "ModuleRelativePath", "Classes/LocationServicesBPLibrary.h" },
		{ "ToolTip", "Checks if the supplied Accuracy is available on the current device.\n@param Accuracy - the accuracy to check\n@return - true if the mobile device can support the Accuracy, false if it will use a different accuracy" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULocationServices_IsLocationAccuracyAvailable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULocationServices, nullptr, "IsLocationAccuracyAvailable", nullptr, nullptr, sizeof(LocationServices_eventIsLocationAccuracyAvailable_Parms), Z_Construct_UFunction_ULocationServices_IsLocationAccuracyAvailable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULocationServices_IsLocationAccuracyAvailable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULocationServices_IsLocationAccuracyAvailable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULocationServices_IsLocationAccuracyAvailable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULocationServices_IsLocationAccuracyAvailable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULocationServices_IsLocationAccuracyAvailable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULocationServices_StartLocationServices_Statics
	{
		struct LocationServices_eventStartLocationServices_Parms
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
	void Z_Construct_UFunction_ULocationServices_StartLocationServices_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LocationServices_eventStartLocationServices_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULocationServices_StartLocationServices_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LocationServices_eventStartLocationServices_Parms), &Z_Construct_UFunction_ULocationServices_StartLocationServices_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULocationServices_StartLocationServices_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULocationServices_StartLocationServices_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULocationServices_StartLocationServices_Statics::Function_MetaDataParams[] = {
		{ "Category", "Services|Mobile|Location" },
		{ "Comment", "/** \n\x09 * Starts requesting location updates from the appropriate Location Service\n\x09 * @return - true if startup successful\n\x09 */" },
		{ "ModuleRelativePath", "Classes/LocationServicesBPLibrary.h" },
		{ "ToolTip", "Starts requesting location updates from the appropriate Location Service\n@return - true if startup successful" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULocationServices_StartLocationServices_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULocationServices, nullptr, "StartLocationServices", nullptr, nullptr, sizeof(LocationServices_eventStartLocationServices_Parms), Z_Construct_UFunction_ULocationServices_StartLocationServices_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULocationServices_StartLocationServices_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULocationServices_StartLocationServices_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULocationServices_StartLocationServices_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULocationServices_StartLocationServices()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULocationServices_StartLocationServices_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULocationServices_StopLocationServices_Statics
	{
		struct LocationServices_eventStopLocationServices_Parms
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
	void Z_Construct_UFunction_ULocationServices_StopLocationServices_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LocationServices_eventStopLocationServices_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULocationServices_StopLocationServices_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LocationServices_eventStopLocationServices_Parms), &Z_Construct_UFunction_ULocationServices_StopLocationServices_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULocationServices_StopLocationServices_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULocationServices_StopLocationServices_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULocationServices_StopLocationServices_Statics::Function_MetaDataParams[] = {
		{ "Category", "Services|Mobile|Location" },
		{ "Comment", "/** \n\x09* Stops the updates of location from the Location Service that was started with StartLocationService\n\x09* @return - true if stop is successful\n\x09*/" },
		{ "ModuleRelativePath", "Classes/LocationServicesBPLibrary.h" },
		{ "ToolTip", "Stops the updates of location from the Location Service that was started with StartLocationService\n@return - true if stop is successful" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULocationServices_StopLocationServices_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULocationServices, nullptr, "StopLocationServices", nullptr, nullptr, sizeof(LocationServices_eventStopLocationServices_Parms), Z_Construct_UFunction_ULocationServices_StopLocationServices_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULocationServices_StopLocationServices_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULocationServices_StopLocationServices_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULocationServices_StopLocationServices_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULocationServices_StopLocationServices()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULocationServices_StopLocationServices_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ULocationServices_NoRegister()
	{
		return ULocationServices::StaticClass();
	}
	struct Z_Construct_UClass_ULocationServices_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULocationServices_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_LocationServicesBPLibrary,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULocationServices_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULocationServices_AreLocationServicesEnabled, "AreLocationServicesEnabled" }, // 1360039938
		{ &Z_Construct_UFunction_ULocationServices_GetLastKnownLocation, "GetLastKnownLocation" }, // 2195364819
		{ &Z_Construct_UFunction_ULocationServices_GetLocationServicesImpl, "GetLocationServicesImpl" }, // 4046625019
		{ &Z_Construct_UFunction_ULocationServices_InitLocationServices, "InitLocationServices" }, // 1307214149
		{ &Z_Construct_UFunction_ULocationServices_IsLocationAccuracyAvailable, "IsLocationAccuracyAvailable" }, // 496131375
		{ &Z_Construct_UFunction_ULocationServices_StartLocationServices, "StartLocationServices" }, // 1809264201
		{ &Z_Construct_UFunction_ULocationServices_StopLocationServices, "StopLocationServices" }, // 406238159
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULocationServices_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "LocationServicesBPLibrary.h" },
		{ "ModuleRelativePath", "Classes/LocationServicesBPLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULocationServices_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULocationServices>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULocationServices_Statics::ClassParams = {
		&ULocationServices::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ULocationServices_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULocationServices_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULocationServices()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULocationServices_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULocationServices, 2670685641);
	template<> LOCATIONSERVICESBPLIBRARY_API UClass* StaticClass<ULocationServices>()
	{
		return ULocationServices::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULocationServices(Z_Construct_UClass_ULocationServices, &ULocationServices::StaticClass, TEXT("/Script/LocationServicesBPLibrary"), TEXT("ULocationServices"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULocationServices);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
