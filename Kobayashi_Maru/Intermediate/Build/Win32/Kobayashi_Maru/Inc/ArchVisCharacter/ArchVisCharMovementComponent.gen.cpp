// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArchVisCharacter/Public/ArchVisCharMovementComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArchVisCharMovementComponent() {}
// Cross Module References
	ARCHVISCHARACTER_API UClass* Z_Construct_UClass_UArchVisCharMovementComponent_NoRegister();
	ARCHVISCHARACTER_API UClass* Z_Construct_UClass_UArchVisCharMovementComponent();
	ENGINE_API UClass* Z_Construct_UClass_UCharacterMovementComponent();
	UPackage* Z_Construct_UPackage__Script_ArchVisCharacter();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
// End Cross Module References
	void UArchVisCharMovementComponent::StaticRegisterNativesUArchVisCharMovementComponent()
	{
	}
	UClass* Z_Construct_UClass_UArchVisCharMovementComponent_NoRegister()
	{
		return UArchVisCharMovementComponent::StaticClass();
	}
	struct Z_Construct_UClass_UArchVisCharMovementComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WalkingAcceleration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WalkingAcceleration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WalkingSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WalkingSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WalkingFriction_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WalkingFriction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxPitch_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxPitch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinPitch_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinPitch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxRotationalVelocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MaxRotationalVelocity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RotationalDeceleration_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RotationalDeceleration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RotationalAcceleration_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RotationalAcceleration;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UArchVisCharMovementComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCharacterMovementComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_ArchVisCharacter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArchVisCharMovementComponent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ArchVisCharMovementComponent.h" },
		{ "ModuleRelativePath", "Public/ArchVisCharMovementComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArchVisCharMovementComponent_Statics::NewProp_WalkingAcceleration_MetaData[] = {
		{ "Category", "ArchVis Controls" },
		{ "Comment", "/** How fast the character accelerates. */" },
		{ "ModuleRelativePath", "Public/ArchVisCharMovementComponent.h" },
		{ "ToolTip", "How fast the character accelerates." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UArchVisCharMovementComponent_Statics::NewProp_WalkingAcceleration = { "WalkingAcceleration", nullptr, (EPropertyFlags)0x0010000000010015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UArchVisCharMovementComponent, WalkingAcceleration), METADATA_PARAMS(Z_Construct_UClass_UArchVisCharMovementComponent_Statics::NewProp_WalkingAcceleration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UArchVisCharMovementComponent_Statics::NewProp_WalkingAcceleration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArchVisCharMovementComponent_Statics::NewProp_WalkingSpeed_MetaData[] = {
		{ "Category", "ArchVis Controls" },
		{ "Comment", "/** How fast the character can walk. */" },
		{ "ModuleRelativePath", "Public/ArchVisCharMovementComponent.h" },
		{ "ToolTip", "How fast the character can walk." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UArchVisCharMovementComponent_Statics::NewProp_WalkingSpeed = { "WalkingSpeed", nullptr, (EPropertyFlags)0x0010000000010015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UArchVisCharMovementComponent, WalkingSpeed), METADATA_PARAMS(Z_Construct_UClass_UArchVisCharMovementComponent_Statics::NewProp_WalkingSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UArchVisCharMovementComponent_Statics::NewProp_WalkingSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArchVisCharMovementComponent_Statics::NewProp_WalkingFriction_MetaData[] = {
		{ "Category", "ArchVis Controls" },
		{ "Comment", "/** Controls walking deceleration. */" },
		{ "ModuleRelativePath", "Public/ArchVisCharMovementComponent.h" },
		{ "ToolTip", "Controls walking deceleration." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UArchVisCharMovementComponent_Statics::NewProp_WalkingFriction = { "WalkingFriction", nullptr, (EPropertyFlags)0x0010000000010015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UArchVisCharMovementComponent, WalkingFriction), METADATA_PARAMS(Z_Construct_UClass_UArchVisCharMovementComponent_Statics::NewProp_WalkingFriction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UArchVisCharMovementComponent_Statics::NewProp_WalkingFriction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArchVisCharMovementComponent_Statics::NewProp_MaxPitch_MetaData[] = {
		{ "Category", "ArchVis Controls" },
		{ "Comment", "/** Controls how far up you can look */" },
		{ "ModuleRelativePath", "Public/ArchVisCharMovementComponent.h" },
		{ "ToolTip", "Controls how far up you can look" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UArchVisCharMovementComponent_Statics::NewProp_MaxPitch = { "MaxPitch", nullptr, (EPropertyFlags)0x0010000000010015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UArchVisCharMovementComponent, MaxPitch), METADATA_PARAMS(Z_Construct_UClass_UArchVisCharMovementComponent_Statics::NewProp_MaxPitch_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UArchVisCharMovementComponent_Statics::NewProp_MaxPitch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArchVisCharMovementComponent_Statics::NewProp_MinPitch_MetaData[] = {
		{ "Category", "ArchVis Controls" },
		{ "Comment", "/** Controls how far down you can look */" },
		{ "ModuleRelativePath", "Public/ArchVisCharMovementComponent.h" },
		{ "ToolTip", "Controls how far down you can look" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UArchVisCharMovementComponent_Statics::NewProp_MinPitch = { "MinPitch", nullptr, (EPropertyFlags)0x0010000000010015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UArchVisCharMovementComponent, MinPitch), METADATA_PARAMS(Z_Construct_UClass_UArchVisCharMovementComponent_Statics::NewProp_MinPitch_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UArchVisCharMovementComponent_Statics::NewProp_MinPitch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArchVisCharMovementComponent_Statics::NewProp_MaxRotationalVelocity_MetaData[] = {
		{ "Category", "ArchVis Controls" },
		{ "Comment", "/** Fastest possible turn rate */" },
		{ "ModuleRelativePath", "Public/ArchVisCharMovementComponent.h" },
		{ "ToolTip", "Fastest possible turn rate" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UArchVisCharMovementComponent_Statics::NewProp_MaxRotationalVelocity = { "MaxRotationalVelocity", nullptr, (EPropertyFlags)0x0010000000010015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UArchVisCharMovementComponent, MaxRotationalVelocity), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UArchVisCharMovementComponent_Statics::NewProp_MaxRotationalVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UArchVisCharMovementComponent_Statics::NewProp_MaxRotationalVelocity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArchVisCharMovementComponent_Statics::NewProp_RotationalDeceleration_MetaData[] = {
		{ "Category", "ArchVis Controls" },
		{ "Comment", "/** Controls how fast the character's turn rate decelerates to 0 when user stops turning */" },
		{ "ModuleRelativePath", "Public/ArchVisCharMovementComponent.h" },
		{ "ToolTip", "Controls how fast the character's turn rate decelerates to 0 when user stops turning" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UArchVisCharMovementComponent_Statics::NewProp_RotationalDeceleration = { "RotationalDeceleration", nullptr, (EPropertyFlags)0x0010000000010015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UArchVisCharMovementComponent, RotationalDeceleration), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UArchVisCharMovementComponent_Statics::NewProp_RotationalDeceleration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UArchVisCharMovementComponent_Statics::NewProp_RotationalDeceleration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArchVisCharMovementComponent_Statics::NewProp_RotationalAcceleration_MetaData[] = {
		{ "Category", "ArchVis Controls" },
		{ "Comment", "/** Controls how fast the character's turn rate accelerates when rotating and looking up/down */" },
		{ "ModuleRelativePath", "Public/ArchVisCharMovementComponent.h" },
		{ "ToolTip", "Controls how fast the character's turn rate accelerates when rotating and looking up/down" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UArchVisCharMovementComponent_Statics::NewProp_RotationalAcceleration = { "RotationalAcceleration", nullptr, (EPropertyFlags)0x0010000000010015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UArchVisCharMovementComponent, RotationalAcceleration), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UArchVisCharMovementComponent_Statics::NewProp_RotationalAcceleration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UArchVisCharMovementComponent_Statics::NewProp_RotationalAcceleration_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UArchVisCharMovementComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArchVisCharMovementComponent_Statics::NewProp_WalkingAcceleration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArchVisCharMovementComponent_Statics::NewProp_WalkingSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArchVisCharMovementComponent_Statics::NewProp_WalkingFriction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArchVisCharMovementComponent_Statics::NewProp_MaxPitch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArchVisCharMovementComponent_Statics::NewProp_MinPitch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArchVisCharMovementComponent_Statics::NewProp_MaxRotationalVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArchVisCharMovementComponent_Statics::NewProp_RotationalDeceleration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArchVisCharMovementComponent_Statics::NewProp_RotationalAcceleration,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UArchVisCharMovementComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UArchVisCharMovementComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UArchVisCharMovementComponent_Statics::ClassParams = {
		&UArchVisCharMovementComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UArchVisCharMovementComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UArchVisCharMovementComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UArchVisCharMovementComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UArchVisCharMovementComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UArchVisCharMovementComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UArchVisCharMovementComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UArchVisCharMovementComponent, 2261566373);
	template<> ARCHVISCHARACTER_API UClass* StaticClass<UArchVisCharMovementComponent>()
	{
		return UArchVisCharMovementComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UArchVisCharMovementComponent(Z_Construct_UClass_UArchVisCharMovementComponent, &UArchVisCharMovementComponent::StaticClass, TEXT("/Script/ArchVisCharacter"), TEXT("UArchVisCharMovementComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UArchVisCharMovementComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
