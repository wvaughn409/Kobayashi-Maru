// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArchVisCharacter/Public/ArchVisCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArchVisCharacter() {}
// Cross Module References
	ARCHVISCHARACTER_API UClass* Z_Construct_UClass_AArchVisCharacter_NoRegister();
	ARCHVISCHARACTER_API UClass* Z_Construct_UClass_AArchVisCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_ArchVisCharacter();
// End Cross Module References
	void AArchVisCharacter::StaticRegisterNativesAArchVisCharacter()
	{
	}
	UClass* Z_Construct_UClass_AArchVisCharacter_NoRegister()
	{
		return AArchVisCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AArchVisCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MouseSensitivityScale_Yaw_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MouseSensitivityScale_Yaw;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MouseSensitivityScale_Pitch_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MouseSensitivityScale_Pitch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MoveRightAxisName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MoveRightAxisName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MoveForwardAxisName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MoveForwardAxisName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TurnAtRateAxisName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TurnAtRateAxisName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TurnAxisName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TurnAxisName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LookUpAtRateAxisName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LookUpAtRateAxisName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LookUpAxisName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LookUpAxisName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AArchVisCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_ArchVisCharacter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AArchVisCharacter_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "ArchVisCharacter.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ArchVisCharacter.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AArchVisCharacter_Statics::NewProp_MouseSensitivityScale_Yaw_MetaData[] = {
		{ "Category", "ArchVis Controls" },
		{ "Comment", "/** Controls how aggressively mouse motion translates to character rotation in the yaw axis. */" },
		{ "ModuleRelativePath", "Public/ArchVisCharacter.h" },
		{ "ToolTip", "Controls how aggressively mouse motion translates to character rotation in the yaw axis." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AArchVisCharacter_Statics::NewProp_MouseSensitivityScale_Yaw = { "MouseSensitivityScale_Yaw", nullptr, (EPropertyFlags)0x0010000000010015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AArchVisCharacter, MouseSensitivityScale_Yaw), METADATA_PARAMS(Z_Construct_UClass_AArchVisCharacter_Statics::NewProp_MouseSensitivityScale_Yaw_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AArchVisCharacter_Statics::NewProp_MouseSensitivityScale_Yaw_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AArchVisCharacter_Statics::NewProp_MouseSensitivityScale_Pitch_MetaData[] = {
		{ "Category", "ArchVis Controls" },
		{ "Comment", "/** Controls how aggressively mouse motion translates to character rotation in the pitch axis. */" },
		{ "ModuleRelativePath", "Public/ArchVisCharacter.h" },
		{ "ToolTip", "Controls how aggressively mouse motion translates to character rotation in the pitch axis." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AArchVisCharacter_Statics::NewProp_MouseSensitivityScale_Pitch = { "MouseSensitivityScale_Pitch", nullptr, (EPropertyFlags)0x0010000000010015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AArchVisCharacter, MouseSensitivityScale_Pitch), METADATA_PARAMS(Z_Construct_UClass_AArchVisCharacter_Statics::NewProp_MouseSensitivityScale_Pitch_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AArchVisCharacter_Statics::NewProp_MouseSensitivityScale_Pitch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AArchVisCharacter_Statics::NewProp_MoveRightAxisName_MetaData[] = {
		{ "Category", "ArchVis Controls" },
		{ "Comment", "/** Axis name for \"move left/right\" control. This should match an Axis Binding in your input settings */" },
		{ "ModuleRelativePath", "Public/ArchVisCharacter.h" },
		{ "ToolTip", "Axis name for \"move left/right\" control. This should match an Axis Binding in your input settings" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_AArchVisCharacter_Statics::NewProp_MoveRightAxisName = { "MoveRightAxisName", nullptr, (EPropertyFlags)0x0010000000010015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AArchVisCharacter, MoveRightAxisName), METADATA_PARAMS(Z_Construct_UClass_AArchVisCharacter_Statics::NewProp_MoveRightAxisName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AArchVisCharacter_Statics::NewProp_MoveRightAxisName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AArchVisCharacter_Statics::NewProp_MoveForwardAxisName_MetaData[] = {
		{ "Category", "ArchVis Controls" },
		{ "Comment", "/** Axis name for \"move forward/back\" control. This should match an Axis Binding in your input settings */" },
		{ "ModuleRelativePath", "Public/ArchVisCharacter.h" },
		{ "ToolTip", "Axis name for \"move forward/back\" control. This should match an Axis Binding in your input settings" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_AArchVisCharacter_Statics::NewProp_MoveForwardAxisName = { "MoveForwardAxisName", nullptr, (EPropertyFlags)0x0010000000010015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AArchVisCharacter, MoveForwardAxisName), METADATA_PARAMS(Z_Construct_UClass_AArchVisCharacter_Statics::NewProp_MoveForwardAxisName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AArchVisCharacter_Statics::NewProp_MoveForwardAxisName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AArchVisCharacter_Statics::NewProp_TurnAtRateAxisName_MetaData[] = {
		{ "Category", "ArchVis Controls" },
		{ "Comment", "/** Axis name for rate-based turn left/right inputs (e.g. joystick). This should match an Axis Binding in your input settings */" },
		{ "ModuleRelativePath", "Public/ArchVisCharacter.h" },
		{ "ToolTip", "Axis name for rate-based turn left/right inputs (e.g. joystick). This should match an Axis Binding in your input settings" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_AArchVisCharacter_Statics::NewProp_TurnAtRateAxisName = { "TurnAtRateAxisName", nullptr, (EPropertyFlags)0x0010000000010015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AArchVisCharacter, TurnAtRateAxisName), METADATA_PARAMS(Z_Construct_UClass_AArchVisCharacter_Statics::NewProp_TurnAtRateAxisName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AArchVisCharacter_Statics::NewProp_TurnAtRateAxisName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AArchVisCharacter_Statics::NewProp_TurnAxisName_MetaData[] = {
		{ "Category", "ArchVis Controls" },
		{ "Comment", "/** Axis name for direct turn left/right inputs (e.g. mouse). This should match an Axis Binding in your input settings */" },
		{ "ModuleRelativePath", "Public/ArchVisCharacter.h" },
		{ "ToolTip", "Axis name for direct turn left/right inputs (e.g. mouse). This should match an Axis Binding in your input settings" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_AArchVisCharacter_Statics::NewProp_TurnAxisName = { "TurnAxisName", nullptr, (EPropertyFlags)0x0010000000010015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AArchVisCharacter, TurnAxisName), METADATA_PARAMS(Z_Construct_UClass_AArchVisCharacter_Statics::NewProp_TurnAxisName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AArchVisCharacter_Statics::NewProp_TurnAxisName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AArchVisCharacter_Statics::NewProp_LookUpAtRateAxisName_MetaData[] = {
		{ "Category", "ArchVis Controls" },
		{ "Comment", "/** Axis name for rate-based look up/down inputs (e.g. joystick). This should match an Axis Binding in your input settings */" },
		{ "ModuleRelativePath", "Public/ArchVisCharacter.h" },
		{ "ToolTip", "Axis name for rate-based look up/down inputs (e.g. joystick). This should match an Axis Binding in your input settings" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_AArchVisCharacter_Statics::NewProp_LookUpAtRateAxisName = { "LookUpAtRateAxisName", nullptr, (EPropertyFlags)0x0010000000010015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AArchVisCharacter, LookUpAtRateAxisName), METADATA_PARAMS(Z_Construct_UClass_AArchVisCharacter_Statics::NewProp_LookUpAtRateAxisName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AArchVisCharacter_Statics::NewProp_LookUpAtRateAxisName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AArchVisCharacter_Statics::NewProp_LookUpAxisName_MetaData[] = {
		{ "Category", "ArchVis Controls" },
		{ "Comment", "/** Axis name for direct look up/down inputs (e.g. mouse). This should match an Axis Binding in your input settings */" },
		{ "ModuleRelativePath", "Public/ArchVisCharacter.h" },
		{ "ToolTip", "Axis name for direct look up/down inputs (e.g. mouse). This should match an Axis Binding in your input settings" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_AArchVisCharacter_Statics::NewProp_LookUpAxisName = { "LookUpAxisName", nullptr, (EPropertyFlags)0x0010000000010015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AArchVisCharacter, LookUpAxisName), METADATA_PARAMS(Z_Construct_UClass_AArchVisCharacter_Statics::NewProp_LookUpAxisName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AArchVisCharacter_Statics::NewProp_LookUpAxisName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AArchVisCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArchVisCharacter_Statics::NewProp_MouseSensitivityScale_Yaw,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArchVisCharacter_Statics::NewProp_MouseSensitivityScale_Pitch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArchVisCharacter_Statics::NewProp_MoveRightAxisName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArchVisCharacter_Statics::NewProp_MoveForwardAxisName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArchVisCharacter_Statics::NewProp_TurnAtRateAxisName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArchVisCharacter_Statics::NewProp_TurnAxisName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArchVisCharacter_Statics::NewProp_LookUpAtRateAxisName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArchVisCharacter_Statics::NewProp_LookUpAxisName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AArchVisCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AArchVisCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AArchVisCharacter_Statics::ClassParams = {
		&AArchVisCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AArchVisCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AArchVisCharacter_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AArchVisCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AArchVisCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AArchVisCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AArchVisCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AArchVisCharacter, 447051297);
	template<> ARCHVISCHARACTER_API UClass* StaticClass<AArchVisCharacter>()
	{
		return AArchVisCharacter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AArchVisCharacter(Z_Construct_UClass_AArchVisCharacter, &AArchVisCharacter::StaticClass, TEXT("/Script/ArchVisCharacter"), TEXT("AArchVisCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AArchVisCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
