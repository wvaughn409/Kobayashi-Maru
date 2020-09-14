// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MeshDescription/Public/MeshDescription.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMeshDescription() {}
// Cross Module References
	MESHDESCRIPTION_API UEnum* Z_Construct_UEnum_MeshDescription_EComputeNTBsOptions();
	UPackage* Z_Construct_UPackage__Script_MeshDescription();
	MESHDESCRIPTION_API UClass* Z_Construct_UClass_UDEPRECATED_MeshDescription_NoRegister();
	MESHDESCRIPTION_API UClass* Z_Construct_UClass_UDEPRECATED_MeshDescription();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
	static UEnum* EComputeNTBsOptions_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_MeshDescription_EComputeNTBsOptions, Z_Construct_UPackage__Script_MeshDescription(), TEXT("EComputeNTBsOptions"));
		}
		return Singleton;
	}
	template<> MESHDESCRIPTION_API UEnum* StaticEnum<EComputeNTBsOptions>()
	{
		return EComputeNTBsOptions_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EComputeNTBsOptions(EComputeNTBsOptions_StaticEnum, TEXT("/Script/MeshDescription"), TEXT("EComputeNTBsOptions"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_MeshDescription_EComputeNTBsOptions_Hash() { return 397987738U; }
	UEnum* Z_Construct_UEnum_MeshDescription_EComputeNTBsOptions()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_MeshDescription();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EComputeNTBsOptions"), 0, Get_Z_Construct_UEnum_MeshDescription_EComputeNTBsOptions_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EComputeNTBsOptions::None", (int64)EComputeNTBsOptions::None },
				{ "EComputeNTBsOptions::Normals", (int64)EComputeNTBsOptions::Normals },
				{ "EComputeNTBsOptions::Tangents", (int64)EComputeNTBsOptions::Tangents },
				{ "EComputeNTBsOptions::WeightedNTBs", (int64)EComputeNTBsOptions::WeightedNTBs },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/MeshDescription.h" },
				{ "None.Name", "EComputeNTBsOptions::None" },
				{ "Normals.Comment", "// No flags\n" },
				{ "Normals.Name", "EComputeNTBsOptions::Normals" },
				{ "Normals.ToolTip", "No flags" },
				{ "Tangents.Comment", "//Compute the normals\n" },
				{ "Tangents.Name", "EComputeNTBsOptions::Tangents" },
				{ "Tangents.ToolTip", "Compute the normals" },
				{ "WeightedNTBs.Comment", "//Compute the tangents\n" },
				{ "WeightedNTBs.Name", "EComputeNTBsOptions::WeightedNTBs" },
				{ "WeightedNTBs.ToolTip", "Compute the tangents" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_MeshDescription,
				nullptr,
				"EComputeNTBsOptions",
				"EComputeNTBsOptions",
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
	void UDEPRECATED_MeshDescription::StaticRegisterNativesUDEPRECATED_MeshDescription()
	{
	}
	UClass* Z_Construct_UClass_UDEPRECATED_MeshDescription_NoRegister()
	{
		return UDEPRECATED_MeshDescription::StaticClass();
	}
	struct Z_Construct_UClass_UDEPRECATED_MeshDescription_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDEPRECATED_MeshDescription_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshDescription,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEPRECATED_MeshDescription_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MeshDescription.h" },
		{ "ModuleRelativePath", "Public/MeshDescription.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDEPRECATED_MeshDescription_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDEPRECATED_MeshDescription>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDEPRECATED_MeshDescription_Statics::ClassParams = {
		&UDEPRECATED_MeshDescription::StaticClass,
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
		0x021002A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDEPRECATED_MeshDescription_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_MeshDescription_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDEPRECATED_MeshDescription()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDEPRECATED_MeshDescription_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDEPRECATED_MeshDescription, 4200031610);
	template<> MESHDESCRIPTION_API UClass* StaticClass<UDEPRECATED_MeshDescription>()
	{
		return UDEPRECATED_MeshDescription::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDEPRECATED_MeshDescription(Z_Construct_UClass_UDEPRECATED_MeshDescription, &UDEPRECATED_MeshDescription::StaticClass, TEXT("/Script/MeshDescription"), TEXT("UDEPRECATED_MeshDescription"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDEPRECATED_MeshDescription);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UDEPRECATED_MeshDescription)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
