// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Niagara/Classes/NiagaraCollision.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraCollision() {}
// Cross Module References
	NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraCollisionMode();
	UPackage* Z_Construct_UPackage__Script_Niagara();
// End Cross Module References
	static UEnum* ENiagaraCollisionMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraCollisionMode, Z_Construct_UPackage__Script_Niagara(), TEXT("ENiagaraCollisionMode"));
		}
		return Singleton;
	}
	template<> NIAGARA_API UEnum* StaticEnum<ENiagaraCollisionMode>()
	{
		return ENiagaraCollisionMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ENiagaraCollisionMode(ENiagaraCollisionMode_StaticEnum, TEXT("/Script/Niagara"), TEXT("ENiagaraCollisionMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Niagara_ENiagaraCollisionMode_Hash() { return 574903013U; }
	UEnum* Z_Construct_UEnum_Niagara_ENiagaraCollisionMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Niagara();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ENiagaraCollisionMode"), 0, Get_Z_Construct_UEnum_Niagara_ENiagaraCollisionMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ENiagaraCollisionMode::None", (int64)ENiagaraCollisionMode::None },
				{ "ENiagaraCollisionMode::SceneGeometry", (int64)ENiagaraCollisionMode::SceneGeometry },
				{ "ENiagaraCollisionMode::DepthBuffer", (int64)ENiagaraCollisionMode::DepthBuffer },
				{ "ENiagaraCollisionMode::DistanceField", (int64)ENiagaraCollisionMode::DistanceField },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "DepthBuffer.Name", "ENiagaraCollisionMode::DepthBuffer" },
				{ "DistanceField.Name", "ENiagaraCollisionMode::DistanceField" },
				{ "ModuleRelativePath", "Classes/NiagaraCollision.h" },
				{ "None.Name", "ENiagaraCollisionMode::None" },
				{ "SceneGeometry.Name", "ENiagaraCollisionMode::SceneGeometry" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Niagara,
				nullptr,
				"ENiagaraCollisionMode",
				"ENiagaraCollisionMode",
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
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
