// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Materials/MaterialExpressionSkyAtmosphereLightIlluminance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionSkyAtmosphereLightIlluminance() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionSkyAtmosphereLightIlluminance_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionSkyAtmosphereLightIlluminance();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionSkyAtmosphereLightDiskLuminance_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionSkyAtmosphereLightDiskLuminance();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionSkyAtmosphereAerialPerspective_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionSkyAtmosphereAerialPerspective();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionSkyAtmosphereDistantLightScatteredLuminance_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionSkyAtmosphereDistantLightScatteredLuminance();
// End Cross Module References
	void UMaterialExpressionSkyAtmosphereLightIlluminance::StaticRegisterNativesUMaterialExpressionSkyAtmosphereLightIlluminance()
	{
	}
	UClass* Z_Construct_UClass_UMaterialExpressionSkyAtmosphereLightIlluminance_NoRegister()
	{
		return UMaterialExpressionSkyAtmosphereLightIlluminance::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionSkyAtmosphereLightIlluminance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldPosition_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WorldPosition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LightIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LightIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpressionSkyAtmosphereLightIlluminance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionSkyAtmosphereLightIlluminance_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Materials/MaterialExpressionSkyAtmosphereLightIlluminance.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSkyAtmosphereLightIlluminance.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionSkyAtmosphereLightIlluminance_Statics::NewProp_WorldPosition_MetaData[] = {
		{ "Comment", "/** World position of the sample. If not specified, the pixel world position will be used. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSkyAtmosphereLightIlluminance.h" },
		{ "ToolTip", "World position of the sample. If not specified, the pixel world position will be used." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionSkyAtmosphereLightIlluminance_Statics::NewProp_WorldPosition = { "WorldPosition", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionSkyAtmosphereLightIlluminance, WorldPosition), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionSkyAtmosphereLightIlluminance_Statics::NewProp_WorldPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSkyAtmosphereLightIlluminance_Statics::NewProp_WorldPosition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionSkyAtmosphereLightIlluminance_Statics::NewProp_LightIndex_MetaData[] = {
		{ "Category", "MaterialExpressionTextureCoordinate" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Index of the atmosphere light to sample. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSkyAtmosphereLightIlluminance.h" },
		{ "ToolTip", "Index of the atmosphere light to sample." },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMaterialExpressionSkyAtmosphereLightIlluminance_Statics::NewProp_LightIndex = { "LightIndex", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionSkyAtmosphereLightIlluminance, LightIndex), METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionSkyAtmosphereLightIlluminance_Statics::NewProp_LightIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSkyAtmosphereLightIlluminance_Statics::NewProp_LightIndex_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionSkyAtmosphereLightIlluminance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionSkyAtmosphereLightIlluminance_Statics::NewProp_WorldPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionSkyAtmosphereLightIlluminance_Statics::NewProp_LightIndex,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionSkyAtmosphereLightIlluminance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionSkyAtmosphereLightIlluminance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionSkyAtmosphereLightIlluminance_Statics::ClassParams = {
		&UMaterialExpressionSkyAtmosphereLightIlluminance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMaterialExpressionSkyAtmosphereLightIlluminance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSkyAtmosphereLightIlluminance_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionSkyAtmosphereLightIlluminance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSkyAtmosphereLightIlluminance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionSkyAtmosphereLightIlluminance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMaterialExpressionSkyAtmosphereLightIlluminance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMaterialExpressionSkyAtmosphereLightIlluminance, 1774621285);
	template<> ENGINE_API UClass* StaticClass<UMaterialExpressionSkyAtmosphereLightIlluminance>()
	{
		return UMaterialExpressionSkyAtmosphereLightIlluminance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMaterialExpressionSkyAtmosphereLightIlluminance(Z_Construct_UClass_UMaterialExpressionSkyAtmosphereLightIlluminance, &UMaterialExpressionSkyAtmosphereLightIlluminance::StaticClass, TEXT("/Script/Engine"), TEXT("UMaterialExpressionSkyAtmosphereLightIlluminance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionSkyAtmosphereLightIlluminance);
	void UMaterialExpressionSkyAtmosphereLightDiskLuminance::StaticRegisterNativesUMaterialExpressionSkyAtmosphereLightDiskLuminance()
	{
	}
	UClass* Z_Construct_UClass_UMaterialExpressionSkyAtmosphereLightDiskLuminance_NoRegister()
	{
		return UMaterialExpressionSkyAtmosphereLightDiskLuminance::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionSkyAtmosphereLightDiskLuminance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LightIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LightIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpressionSkyAtmosphereLightDiskLuminance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionSkyAtmosphereLightDiskLuminance_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Materials/MaterialExpressionSkyAtmosphereLightIlluminance.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSkyAtmosphereLightIlluminance.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionSkyAtmosphereLightDiskLuminance_Statics::NewProp_LightIndex_MetaData[] = {
		{ "Category", "MaterialExpressionTextureCoordinate" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Index of the atmosphere light to sample. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSkyAtmosphereLightIlluminance.h" },
		{ "ToolTip", "Index of the atmosphere light to sample." },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMaterialExpressionSkyAtmosphereLightDiskLuminance_Statics::NewProp_LightIndex = { "LightIndex", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionSkyAtmosphereLightDiskLuminance, LightIndex), METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionSkyAtmosphereLightDiskLuminance_Statics::NewProp_LightIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSkyAtmosphereLightDiskLuminance_Statics::NewProp_LightIndex_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionSkyAtmosphereLightDiskLuminance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionSkyAtmosphereLightDiskLuminance_Statics::NewProp_LightIndex,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionSkyAtmosphereLightDiskLuminance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionSkyAtmosphereLightDiskLuminance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionSkyAtmosphereLightDiskLuminance_Statics::ClassParams = {
		&UMaterialExpressionSkyAtmosphereLightDiskLuminance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMaterialExpressionSkyAtmosphereLightDiskLuminance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSkyAtmosphereLightDiskLuminance_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionSkyAtmosphereLightDiskLuminance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSkyAtmosphereLightDiskLuminance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionSkyAtmosphereLightDiskLuminance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMaterialExpressionSkyAtmosphereLightDiskLuminance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMaterialExpressionSkyAtmosphereLightDiskLuminance, 3287594422);
	template<> ENGINE_API UClass* StaticClass<UMaterialExpressionSkyAtmosphereLightDiskLuminance>()
	{
		return UMaterialExpressionSkyAtmosphereLightDiskLuminance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMaterialExpressionSkyAtmosphereLightDiskLuminance(Z_Construct_UClass_UMaterialExpressionSkyAtmosphereLightDiskLuminance, &UMaterialExpressionSkyAtmosphereLightDiskLuminance::StaticClass, TEXT("/Script/Engine"), TEXT("UMaterialExpressionSkyAtmosphereLightDiskLuminance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionSkyAtmosphereLightDiskLuminance);
	void UMaterialExpressionSkyAtmosphereAerialPerspective::StaticRegisterNativesUMaterialExpressionSkyAtmosphereAerialPerspective()
	{
	}
	UClass* Z_Construct_UClass_UMaterialExpressionSkyAtmosphereAerialPerspective_NoRegister()
	{
		return UMaterialExpressionSkyAtmosphereAerialPerspective::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionSkyAtmosphereAerialPerspective_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldPosition_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WorldPosition;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpressionSkyAtmosphereAerialPerspective_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionSkyAtmosphereAerialPerspective_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Materials/MaterialExpressionSkyAtmosphereLightIlluminance.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSkyAtmosphereLightIlluminance.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionSkyAtmosphereAerialPerspective_Statics::NewProp_WorldPosition_MetaData[] = {
		{ "Comment", "/** World position of the sample. If not specified, the pixel world position will be used. Larger distance will result in more fog. Please make sure .SkyAtmosphere.AerialPerspectiveLUT.Depth is set far enough to have fog data.\n\x09\x09If you are scaling the sky dome pixel world position, make sure it is centered around the origin.*/" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSkyAtmosphereLightIlluminance.h" },
		{ "ToolTip", "World position of the sample. If not specified, the pixel world position will be used. Larger distance will result in more fog. Please make sure .SkyAtmosphere.AerialPerspectiveLUT.Depth is set far enough to have fog data.\n              If you are scaling the sky dome pixel world position, make sure it is centered around the origin." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionSkyAtmosphereAerialPerspective_Statics::NewProp_WorldPosition = { "WorldPosition", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionSkyAtmosphereAerialPerspective, WorldPosition), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionSkyAtmosphereAerialPerspective_Statics::NewProp_WorldPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSkyAtmosphereAerialPerspective_Statics::NewProp_WorldPosition_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionSkyAtmosphereAerialPerspective_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionSkyAtmosphereAerialPerspective_Statics::NewProp_WorldPosition,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionSkyAtmosphereAerialPerspective_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionSkyAtmosphereAerialPerspective>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionSkyAtmosphereAerialPerspective_Statics::ClassParams = {
		&UMaterialExpressionSkyAtmosphereAerialPerspective::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMaterialExpressionSkyAtmosphereAerialPerspective_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSkyAtmosphereAerialPerspective_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionSkyAtmosphereAerialPerspective_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSkyAtmosphereAerialPerspective_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionSkyAtmosphereAerialPerspective()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMaterialExpressionSkyAtmosphereAerialPerspective_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMaterialExpressionSkyAtmosphereAerialPerspective, 2973583650);
	template<> ENGINE_API UClass* StaticClass<UMaterialExpressionSkyAtmosphereAerialPerspective>()
	{
		return UMaterialExpressionSkyAtmosphereAerialPerspective::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMaterialExpressionSkyAtmosphereAerialPerspective(Z_Construct_UClass_UMaterialExpressionSkyAtmosphereAerialPerspective, &UMaterialExpressionSkyAtmosphereAerialPerspective::StaticClass, TEXT("/Script/Engine"), TEXT("UMaterialExpressionSkyAtmosphereAerialPerspective"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionSkyAtmosphereAerialPerspective);
	void UMaterialExpressionSkyAtmosphereDistantLightScatteredLuminance::StaticRegisterNativesUMaterialExpressionSkyAtmosphereDistantLightScatteredLuminance()
	{
	}
	UClass* Z_Construct_UClass_UMaterialExpressionSkyAtmosphereDistantLightScatteredLuminance_NoRegister()
	{
		return UMaterialExpressionSkyAtmosphereDistantLightScatteredLuminance::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionSkyAtmosphereDistantLightScatteredLuminance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpressionSkyAtmosphereDistantLightScatteredLuminance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionSkyAtmosphereDistantLightScatteredLuminance_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Materials/MaterialExpressionSkyAtmosphereLightIlluminance.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSkyAtmosphereLightIlluminance.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionSkyAtmosphereDistantLightScatteredLuminance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionSkyAtmosphereDistantLightScatteredLuminance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionSkyAtmosphereDistantLightScatteredLuminance_Statics::ClassParams = {
		&UMaterialExpressionSkyAtmosphereDistantLightScatteredLuminance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionSkyAtmosphereDistantLightScatteredLuminance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSkyAtmosphereDistantLightScatteredLuminance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionSkyAtmosphereDistantLightScatteredLuminance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMaterialExpressionSkyAtmosphereDistantLightScatteredLuminance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMaterialExpressionSkyAtmosphereDistantLightScatteredLuminance, 2959579921);
	template<> ENGINE_API UClass* StaticClass<UMaterialExpressionSkyAtmosphereDistantLightScatteredLuminance>()
	{
		return UMaterialExpressionSkyAtmosphereDistantLightScatteredLuminance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMaterialExpressionSkyAtmosphereDistantLightScatteredLuminance(Z_Construct_UClass_UMaterialExpressionSkyAtmosphereDistantLightScatteredLuminance, &UMaterialExpressionSkyAtmosphereDistantLightScatteredLuminance::StaticClass, TEXT("/Script/Engine"), TEXT("UMaterialExpressionSkyAtmosphereDistantLightScatteredLuminance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionSkyAtmosphereDistantLightScatteredLuminance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
