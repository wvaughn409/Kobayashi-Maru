// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FacialAnimation/Public/AudioCurveSourceComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAudioCurveSourceComponent() {}
// Cross Module References
	FACIALANIMATION_API UClass* Z_Construct_UClass_UAudioCurveSourceComponent_NoRegister();
	FACIALANIMATION_API UClass* Z_Construct_UClass_UAudioCurveSourceComponent();
	ENGINE_API UClass* Z_Construct_UClass_UAudioComponent();
	UPackage* Z_Construct_UPackage__Script_FacialAnimation();
	ENGINE_API UClass* Z_Construct_UClass_UCurveSourceInterface_NoRegister();
// End Cross Module References
	void UAudioCurveSourceComponent::StaticRegisterNativesUAudioCurveSourceComponent()
	{
	}
	UClass* Z_Construct_UClass_UAudioCurveSourceComponent_NoRegister()
	{
		return UAudioCurveSourceComponent::StaticClass();
	}
	struct Z_Construct_UClass_UAudioCurveSourceComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurveSyncOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CurveSyncOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurveSourceBindingName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_CurveSourceBindingName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAudioCurveSourceComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAudioComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_FacialAnimation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioCurveSourceComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Audio" },
		{ "Comment", "/** An audio component that also provides curves to drive animation */" },
		{ "DevelopmentStatus", "Experimental" },
		{ "HideCategories", "Object ActorComponent Physics Rendering Mobility LOD PhysicsVolume" },
		{ "IncludePath", "AudioCurveSourceComponent.h" },
		{ "ModuleRelativePath", "Public/AudioCurveSourceComponent.h" },
		{ "ToolTip", "An audio component that also provides curves to drive animation" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioCurveSourceComponent_Statics::NewProp_CurveSyncOffset_MetaData[] = {
		{ "Category", "Curves" },
		{ "Comment", "/** Offset in time applied to audio position when evaluating curves */" },
		{ "ModuleRelativePath", "Public/AudioCurveSourceComponent.h" },
		{ "ToolTip", "Offset in time applied to audio position when evaluating curves" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAudioCurveSourceComponent_Statics::NewProp_CurveSyncOffset = { "CurveSyncOffset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAudioCurveSourceComponent, CurveSyncOffset), METADATA_PARAMS(Z_Construct_UClass_UAudioCurveSourceComponent_Statics::NewProp_CurveSyncOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioCurveSourceComponent_Statics::NewProp_CurveSyncOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioCurveSourceComponent_Statics::NewProp_CurveSourceBindingName_MetaData[] = {
		{ "Category", "Curves" },
		{ "Comment", "/** \n\x09 * Get the name that this curve source can be bound to by.\n\x09 * Clients of this curve source will use this name to identify this source.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AudioCurveSourceComponent.h" },
		{ "ToolTip", "Get the name that this curve source can be bound to by.\nClients of this curve source will use this name to identify this source." },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAudioCurveSourceComponent_Statics::NewProp_CurveSourceBindingName = { "CurveSourceBindingName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAudioCurveSourceComponent, CurveSourceBindingName), METADATA_PARAMS(Z_Construct_UClass_UAudioCurveSourceComponent_Statics::NewProp_CurveSourceBindingName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioCurveSourceComponent_Statics::NewProp_CurveSourceBindingName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAudioCurveSourceComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioCurveSourceComponent_Statics::NewProp_CurveSyncOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioCurveSourceComponent_Statics::NewProp_CurveSourceBindingName,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UAudioCurveSourceComponent_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UCurveSourceInterface_NoRegister, (int32)VTABLE_OFFSET(UAudioCurveSourceComponent, ICurveSourceInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAudioCurveSourceComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAudioCurveSourceComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAudioCurveSourceComponent_Statics::ClassParams = {
		&UAudioCurveSourceComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAudioCurveSourceComponent_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAudioCurveSourceComponent_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAudioCurveSourceComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioCurveSourceComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAudioCurveSourceComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAudioCurveSourceComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAudioCurveSourceComponent, 2227825732);
	template<> FACIALANIMATION_API UClass* StaticClass<UAudioCurveSourceComponent>()
	{
		return UAudioCurveSourceComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAudioCurveSourceComponent(Z_Construct_UClass_UAudioCurveSourceComponent, &UAudioCurveSourceComponent::StaticClass, TEXT("/Script/FacialAnimation"), TEXT("UAudioCurveSourceComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAudioCurveSourceComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
