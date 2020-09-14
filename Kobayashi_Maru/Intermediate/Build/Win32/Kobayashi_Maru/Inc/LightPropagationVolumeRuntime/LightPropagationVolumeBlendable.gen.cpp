// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LightPropagationVolumeRuntime/Public/LightPropagationVolumeBlendable.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLightPropagationVolumeBlendable() {}
// Cross Module References
	LIGHTPROPAGATIONVOLUMERUNTIME_API UClass* Z_Construct_UClass_ULightPropagationVolumeBlendable_NoRegister();
	LIGHTPROPAGATIONVOLUMERUNTIME_API UClass* Z_Construct_UClass_ULightPropagationVolumeBlendable();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_LightPropagationVolumeRuntime();
	RENDERER_API UScriptStruct* Z_Construct_UScriptStruct_FLightPropagationVolumeSettings();
	ENGINE_API UClass* Z_Construct_UClass_UBlendableInterface_NoRegister();
// End Cross Module References
	void ULightPropagationVolumeBlendable::StaticRegisterNativesULightPropagationVolumeBlendable()
	{
	}
	UClass* Z_Construct_UClass_ULightPropagationVolumeBlendable_NoRegister()
	{
		return ULightPropagationVolumeBlendable::StaticClass();
	}
	struct Z_Construct_UClass_ULightPropagationVolumeBlendable_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlendWeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BlendWeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Settings;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULightPropagationVolumeBlendable_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_LightPropagationVolumeRuntime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULightPropagationVolumeBlendable_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// BlueprintType to make the object spawnable in blueprint\n" },
		{ "IncludePath", "LightPropagationVolumeBlendable.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/LightPropagationVolumeBlendable.h" },
		{ "ToolTip", "BlueprintType to make the object spawnable in blueprint" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULightPropagationVolumeBlendable_Statics::NewProp_BlendWeight_MetaData[] = {
		{ "Category", "LightPropagationVolumeBlendable" },
		{ "Comment", "/** 0:no effect, 1:full effect */" },
		{ "ModuleRelativePath", "Public/LightPropagationVolumeBlendable.h" },
		{ "ToolTip", "0:no effect, 1:full effect" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULightPropagationVolumeBlendable_Statics::NewProp_BlendWeight = { "BlendWeight", nullptr, (EPropertyFlags)0x0010000200000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULightPropagationVolumeBlendable, BlendWeight), METADATA_PARAMS(Z_Construct_UClass_ULightPropagationVolumeBlendable_Statics::NewProp_BlendWeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULightPropagationVolumeBlendable_Statics::NewProp_BlendWeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULightPropagationVolumeBlendable_Statics::NewProp_Settings_MetaData[] = {
		{ "Category", "LightPropagationVolumeBlendable" },
		{ "ModuleRelativePath", "Public/LightPropagationVolumeBlendable.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULightPropagationVolumeBlendable_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000200000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULightPropagationVolumeBlendable, Settings), Z_Construct_UScriptStruct_FLightPropagationVolumeSettings, METADATA_PARAMS(Z_Construct_UClass_ULightPropagationVolumeBlendable_Statics::NewProp_Settings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULightPropagationVolumeBlendable_Statics::NewProp_Settings_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULightPropagationVolumeBlendable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightPropagationVolumeBlendable_Statics::NewProp_BlendWeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightPropagationVolumeBlendable_Statics::NewProp_Settings,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ULightPropagationVolumeBlendable_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UBlendableInterface_NoRegister, (int32)VTABLE_OFFSET(ULightPropagationVolumeBlendable, IBlendableInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULightPropagationVolumeBlendable_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULightPropagationVolumeBlendable>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULightPropagationVolumeBlendable_Statics::ClassParams = {
		&ULightPropagationVolumeBlendable::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULightPropagationVolumeBlendable_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULightPropagationVolumeBlendable_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULightPropagationVolumeBlendable_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULightPropagationVolumeBlendable_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULightPropagationVolumeBlendable()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULightPropagationVolumeBlendable_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULightPropagationVolumeBlendable, 3400472376);
	template<> LIGHTPROPAGATIONVOLUMERUNTIME_API UClass* StaticClass<ULightPropagationVolumeBlendable>()
	{
		return ULightPropagationVolumeBlendable::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULightPropagationVolumeBlendable(Z_Construct_UClass_ULightPropagationVolumeBlendable, &ULightPropagationVolumeBlendable::StaticClass, TEXT("/Script/LightPropagationVolumeRuntime"), TEXT("ULightPropagationVolumeBlendable"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULightPropagationVolumeBlendable);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
