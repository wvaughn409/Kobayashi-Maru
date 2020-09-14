// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Niagara/Public/NiagaraMeshRendererProperties.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraMeshRendererProperties() {}
// Cross Module References
	NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraMeshLockedAxisSpace();
	UPackage* Z_Construct_UPackage__Script_Niagara();
	NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraMeshFacingMode();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraMeshMaterialOverride();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraUserParameterBinding();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraMeshRendererProperties_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraMeshRendererProperties();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraRendererProperties();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraSortMode();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
// End Cross Module References
	static UEnum* ENiagaraMeshLockedAxisSpace_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraMeshLockedAxisSpace, Z_Construct_UPackage__Script_Niagara(), TEXT("ENiagaraMeshLockedAxisSpace"));
		}
		return Singleton;
	}
	template<> NIAGARA_API UEnum* StaticEnum<ENiagaraMeshLockedAxisSpace>()
	{
		return ENiagaraMeshLockedAxisSpace_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ENiagaraMeshLockedAxisSpace(ENiagaraMeshLockedAxisSpace_StaticEnum, TEXT("/Script/Niagara"), TEXT("ENiagaraMeshLockedAxisSpace"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Niagara_ENiagaraMeshLockedAxisSpace_Hash() { return 48574937U; }
	UEnum* Z_Construct_UEnum_Niagara_ENiagaraMeshLockedAxisSpace()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Niagara();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ENiagaraMeshLockedAxisSpace"), 0, Get_Z_Construct_UEnum_Niagara_ENiagaraMeshLockedAxisSpace_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ENiagaraMeshLockedAxisSpace::Simulation", (int64)ENiagaraMeshLockedAxisSpace::Simulation },
				{ "ENiagaraMeshLockedAxisSpace::World", (int64)ENiagaraMeshLockedAxisSpace::World },
				{ "ENiagaraMeshLockedAxisSpace::Local", (int64)ENiagaraMeshLockedAxisSpace::Local },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Local.Comment", "/** The locked axis is in the emitter's local space */" },
				{ "Local.Name", "ENiagaraMeshLockedAxisSpace::Local" },
				{ "Local.ToolTip", "The locked axis is in the emitter's local space" },
				{ "ModuleRelativePath", "Public/NiagaraMeshRendererProperties.h" },
				{ "Simulation.Comment", "/** The locked axis is in the emitter's local space if the emitter is marked as local-space, or in world space otherwise */" },
				{ "Simulation.Name", "ENiagaraMeshLockedAxisSpace::Simulation" },
				{ "Simulation.ToolTip", "The locked axis is in the emitter's local space if the emitter is marked as local-space, or in world space otherwise" },
				{ "World.Comment", "/** The locked axis is in world space */" },
				{ "World.Name", "ENiagaraMeshLockedAxisSpace::World" },
				{ "World.ToolTip", "The locked axis is in world space" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Niagara,
				nullptr,
				"ENiagaraMeshLockedAxisSpace",
				"ENiagaraMeshLockedAxisSpace",
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
	static UEnum* ENiagaraMeshFacingMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraMeshFacingMode, Z_Construct_UPackage__Script_Niagara(), TEXT("ENiagaraMeshFacingMode"));
		}
		return Singleton;
	}
	template<> NIAGARA_API UEnum* StaticEnum<ENiagaraMeshFacingMode>()
	{
		return ENiagaraMeshFacingMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ENiagaraMeshFacingMode(ENiagaraMeshFacingMode_StaticEnum, TEXT("/Script/Niagara"), TEXT("ENiagaraMeshFacingMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Niagara_ENiagaraMeshFacingMode_Hash() { return 950027065U; }
	UEnum* Z_Construct_UEnum_Niagara_ENiagaraMeshFacingMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Niagara();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ENiagaraMeshFacingMode"), 0, Get_Z_Construct_UEnum_Niagara_ENiagaraMeshFacingMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ENiagaraMeshFacingMode::Default", (int64)ENiagaraMeshFacingMode::Default },
				{ "ENiagaraMeshFacingMode::Velocity", (int64)ENiagaraMeshFacingMode::Velocity },
				{ "ENiagaraMeshFacingMode::CameraPosition", (int64)ENiagaraMeshFacingMode::CameraPosition },
				{ "ENiagaraMeshFacingMode::CameraPlane", (int64)ENiagaraMeshFacingMode::CameraPlane },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "CameraPlane.Comment", "/** Has the mesh local-space X-axis point towards the closest point on the camera view plane.*/" },
				{ "CameraPlane.Name", "ENiagaraMeshFacingMode::CameraPlane" },
				{ "CameraPlane.ToolTip", "Has the mesh local-space X-axis point towards the closest point on the camera view plane." },
				{ "CameraPosition.Comment", "/** Has the mesh local-space X-axis point towards the camera's position.*/" },
				{ "CameraPosition.Name", "ENiagaraMeshFacingMode::CameraPosition" },
				{ "CameraPosition.ToolTip", "Has the mesh local-space X-axis point towards the camera's position." },
				{ "Comment", "/** This enum decides how a mesh particle will orient its \"facing\" axis relative to camera. Must keep these in sync with NiagaraMeshVertexFactory.ush*/" },
				{ "Default.Comment", "/** Ignores the camera altogether. The mesh aligns its local-space X-axis with the particles' local-space X-axis, after transforming by the Particles.Transform vector (if it exists).*/" },
				{ "Default.Name", "ENiagaraMeshFacingMode::Default" },
				{ "Default.ToolTip", "Ignores the camera altogether. The mesh aligns its local-space X-axis with the particles' local-space X-axis, after transforming by the Particles.Transform vector (if it exists)." },
				{ "ModuleRelativePath", "Public/NiagaraMeshRendererProperties.h" },
				{ "ToolTip", "This enum decides how a mesh particle will orient its \"facing\" axis relative to camera. Must keep these in sync with NiagaraMeshVertexFactory.ush" },
				{ "Velocity.Comment", "/** The mesh aligns it's local-space X-axis with the particle's Particles.Velocity vector.*/" },
				{ "Velocity.Name", "ENiagaraMeshFacingMode::Velocity" },
				{ "Velocity.ToolTip", "The mesh aligns it's local-space X-axis with the particle's Particles.Velocity vector." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Niagara,
				nullptr,
				"ENiagaraMeshFacingMode",
				"ENiagaraMeshFacingMode",
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
class UScriptStruct* FNiagaraMeshMaterialOverride::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern NIAGARA_API uint32 Get_Z_Construct_UScriptStruct_FNiagaraMeshMaterialOverride_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraMeshMaterialOverride, Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraMeshMaterialOverride"), sizeof(FNiagaraMeshMaterialOverride), Get_Z_Construct_UScriptStruct_FNiagaraMeshMaterialOverride_Hash());
	}
	return Singleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraMeshMaterialOverride>()
{
	return FNiagaraMeshMaterialOverride::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNiagaraMeshMaterialOverride(FNiagaraMeshMaterialOverride::StaticStruct, TEXT("/Script/Niagara"), TEXT("NiagaraMeshMaterialOverride"), false, nullptr, nullptr);
static struct FScriptStruct_Niagara_StaticRegisterNativesFNiagaraMeshMaterialOverride
{
	FScriptStruct_Niagara_StaticRegisterNativesFNiagaraMeshMaterialOverride()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("NiagaraMeshMaterialOverride")),new UScriptStruct::TCppStructOps<FNiagaraMeshMaterialOverride>);
	}
} ScriptStruct_Niagara_StaticRegisterNativesFNiagaraMeshMaterialOverride;
	struct Z_Construct_UScriptStruct_FNiagaraMeshMaterialOverride_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserParamBinding_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UserParamBinding;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExplicitMat_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ExplicitMat;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraMeshMaterialOverride_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NiagaraMeshRendererProperties.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraMeshMaterialOverride_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraMeshMaterialOverride>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraMeshMaterialOverride_Statics::NewProp_UserParamBinding_MetaData[] = {
		{ "Category", "Mesh Rendering" },
		{ "Comment", "/** Use the UMaterialInterface bound to this user variable if it is set to a valid value. If this is bound to a valid value and ExplicitMat is also set, UserParamBinding wins.*/" },
		{ "ModuleRelativePath", "Public/NiagaraMeshRendererProperties.h" },
		{ "ToolTip", "Use the UMaterialInterface bound to this user variable if it is set to a valid value. If this is bound to a valid value and ExplicitMat is also set, UserParamBinding wins." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraMeshMaterialOverride_Statics::NewProp_UserParamBinding = { "UserParamBinding", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraMeshMaterialOverride, UserParamBinding), Z_Construct_UScriptStruct_FNiagaraUserParameterBinding, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraMeshMaterialOverride_Statics::NewProp_UserParamBinding_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraMeshMaterialOverride_Statics::NewProp_UserParamBinding_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraMeshMaterialOverride_Statics::NewProp_ExplicitMat_MetaData[] = {
		{ "Category", "Mesh Rendering" },
		{ "Comment", "/** Use this UMaterialInterface if set to a valid value. This will be subordinate to UserParamBinding if it is set to a valid user variable.*/" },
		{ "ModuleRelativePath", "Public/NiagaraMeshRendererProperties.h" },
		{ "ToolTip", "Use this UMaterialInterface if set to a valid value. This will be subordinate to UserParamBinding if it is set to a valid user variable." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FNiagaraMeshMaterialOverride_Statics::NewProp_ExplicitMat = { "ExplicitMat", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraMeshMaterialOverride, ExplicitMat), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraMeshMaterialOverride_Statics::NewProp_ExplicitMat_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraMeshMaterialOverride_Statics::NewProp_ExplicitMat_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraMeshMaterialOverride_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraMeshMaterialOverride_Statics::NewProp_UserParamBinding,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraMeshMaterialOverride_Statics::NewProp_ExplicitMat,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraMeshMaterialOverride_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"NiagaraMeshMaterialOverride",
		sizeof(FNiagaraMeshMaterialOverride),
		alignof(FNiagaraMeshMaterialOverride),
		Z_Construct_UScriptStruct_FNiagaraMeshMaterialOverride_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraMeshMaterialOverride_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraMeshMaterialOverride_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraMeshMaterialOverride_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraMeshMaterialOverride()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNiagaraMeshMaterialOverride_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Niagara();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NiagaraMeshMaterialOverride"), sizeof(FNiagaraMeshMaterialOverride), Get_Z_Construct_UScriptStruct_FNiagaraMeshMaterialOverride_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FNiagaraMeshMaterialOverride_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNiagaraMeshMaterialOverride_Hash() { return 3416950520U; }
	void UNiagaraMeshRendererProperties::StaticRegisterNativesUNiagaraMeshRendererProperties()
	{
	}
	UClass* Z_Construct_UClass_UNiagaraMeshRendererProperties_NoRegister()
	{
		return UNiagaraMeshRendererProperties::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraOffsetBinding_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CameraOffsetBinding;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NormalizedAgeBinding_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NormalizedAgeBinding;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomSortingBinding_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CustomSortingBinding;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaterialRandomBinding_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MaterialRandomBinding;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DynamicMaterial3Binding_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DynamicMaterial3Binding;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DynamicMaterial2Binding_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DynamicMaterial2Binding;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DynamicMaterial1Binding_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DynamicMaterial1Binding;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DynamicMaterialBinding_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DynamicMaterialBinding;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SubImageIndexBinding_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SubImageIndexBinding;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScaleBinding_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ScaleBinding;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshOrientationBinding_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MeshOrientationBinding;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VelocityBinding_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VelocityBinding;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ColorBinding_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ColorBinding;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PositionBinding_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PositionBinding;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LockedAxisSpace_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_LockedAxisSpace;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LockedAxisSpace_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LockedAxis_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LockedAxis;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLockedAxisEnable_MetaData[];
#endif
		static void NewProp_bLockedAxisEnable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLockedAxisEnable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FacingMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_FacingMode;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_FacingMode_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSubImageBlend_MetaData[];
#endif
		static void NewProp_bSubImageBlend_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSubImageBlend;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SubImageSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SubImageSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverrideMaterials_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OverrideMaterials;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OverrideMaterials_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSortOnlyWhenTranslucent_MetaData[];
#endif
		static void NewProp_bSortOnlyWhenTranslucent_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSortOnlyWhenTranslucent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverrideMaterials_MetaData[];
#endif
		static void NewProp_bOverrideMaterials_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverrideMaterials;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SortMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SortMode;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SortMode_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParticleMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ParticleMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNiagaraRendererProperties,
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Mesh Renderer" },
		{ "IncludePath", "NiagaraMeshRendererProperties.h" },
		{ "ModuleRelativePath", "Public/NiagaraMeshRendererProperties.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_CameraOffsetBinding_MetaData[] = {
		{ "Category", "Bindings" },
		{ "Comment", "/** Which attribute should we use for camera offset when rendering meshes?*/" },
		{ "ModuleRelativePath", "Public/NiagaraMeshRendererProperties.h" },
		{ "ToolTip", "Which attribute should we use for camera offset when rendering meshes?" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_CameraOffsetBinding = { "CameraOffsetBinding", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraMeshRendererProperties, CameraOffsetBinding), Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding, METADATA_PARAMS(Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_CameraOffsetBinding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_CameraOffsetBinding_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_NormalizedAgeBinding_MetaData[] = {
		{ "Category", "Bindings" },
		{ "Comment", "/** Which attribute should we use for Normalized Age? */" },
		{ "ModuleRelativePath", "Public/NiagaraMeshRendererProperties.h" },
		{ "ToolTip", "Which attribute should we use for Normalized Age?" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_NormalizedAgeBinding = { "NormalizedAgeBinding", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraMeshRendererProperties, NormalizedAgeBinding), Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding, METADATA_PARAMS(Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_NormalizedAgeBinding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_NormalizedAgeBinding_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_CustomSortingBinding_MetaData[] = {
		{ "Category", "Bindings" },
		{ "Comment", "/** Which attribute should we use custom sorting of particles in this emitter. */" },
		{ "ModuleRelativePath", "Public/NiagaraMeshRendererProperties.h" },
		{ "ToolTip", "Which attribute should we use custom sorting of particles in this emitter." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_CustomSortingBinding = { "CustomSortingBinding", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraMeshRendererProperties, CustomSortingBinding), Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding, METADATA_PARAMS(Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_CustomSortingBinding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_CustomSortingBinding_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_MaterialRandomBinding_MetaData[] = {
		{ "Category", "Bindings" },
		{ "Comment", "/** Which attribute should we use for material randoms when generating instanced meshes?*/" },
		{ "ModuleRelativePath", "Public/NiagaraMeshRendererProperties.h" },
		{ "ToolTip", "Which attribute should we use for material randoms when generating instanced meshes?" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_MaterialRandomBinding = { "MaterialRandomBinding", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraMeshRendererProperties, MaterialRandomBinding), Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding, METADATA_PARAMS(Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_MaterialRandomBinding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_MaterialRandomBinding_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_DynamicMaterial3Binding_MetaData[] = {
		{ "Category", "Bindings" },
		{ "Comment", "/** Which attribute should we use for dynamic material parameters when generating instanced meshes?*/" },
		{ "ModuleRelativePath", "Public/NiagaraMeshRendererProperties.h" },
		{ "ToolTip", "Which attribute should we use for dynamic material parameters when generating instanced meshes?" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_DynamicMaterial3Binding = { "DynamicMaterial3Binding", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraMeshRendererProperties, DynamicMaterial3Binding), Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding, METADATA_PARAMS(Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_DynamicMaterial3Binding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_DynamicMaterial3Binding_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_DynamicMaterial2Binding_MetaData[] = {
		{ "Category", "Bindings" },
		{ "Comment", "/** Which attribute should we use for dynamic material parameters when generating instanced meshes?*/" },
		{ "ModuleRelativePath", "Public/NiagaraMeshRendererProperties.h" },
		{ "ToolTip", "Which attribute should we use for dynamic material parameters when generating instanced meshes?" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_DynamicMaterial2Binding = { "DynamicMaterial2Binding", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraMeshRendererProperties, DynamicMaterial2Binding), Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding, METADATA_PARAMS(Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_DynamicMaterial2Binding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_DynamicMaterial2Binding_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_DynamicMaterial1Binding_MetaData[] = {
		{ "Category", "Bindings" },
		{ "Comment", "/** Which attribute should we use for dynamic material parameters when generating instanced meshes?*/" },
		{ "ModuleRelativePath", "Public/NiagaraMeshRendererProperties.h" },
		{ "ToolTip", "Which attribute should we use for dynamic material parameters when generating instanced meshes?" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_DynamicMaterial1Binding = { "DynamicMaterial1Binding", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraMeshRendererProperties, DynamicMaterial1Binding), Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding, METADATA_PARAMS(Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_DynamicMaterial1Binding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_DynamicMaterial1Binding_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_DynamicMaterialBinding_MetaData[] = {
		{ "Category", "Bindings" },
		{ "Comment", "/** Which attribute should we use for dynamic material parameters when generating instanced meshes?*/" },
		{ "ModuleRelativePath", "Public/NiagaraMeshRendererProperties.h" },
		{ "ToolTip", "Which attribute should we use for dynamic material parameters when generating instanced meshes?" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_DynamicMaterialBinding = { "DynamicMaterialBinding", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraMeshRendererProperties, DynamicMaterialBinding), Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding, METADATA_PARAMS(Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_DynamicMaterialBinding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_DynamicMaterialBinding_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_SubImageIndexBinding_MetaData[] = {
		{ "Category", "Bindings" },
		{ "Comment", "/** Which attribute should we use for sprite sub-image indexing when generating sprites?*/" },
		{ "ModuleRelativePath", "Public/NiagaraMeshRendererProperties.h" },
		{ "ToolTip", "Which attribute should we use for sprite sub-image indexing when generating sprites?" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_SubImageIndexBinding = { "SubImageIndexBinding", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraMeshRendererProperties, SubImageIndexBinding), Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding, METADATA_PARAMS(Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_SubImageIndexBinding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_SubImageIndexBinding_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_ScaleBinding_MetaData[] = {
		{ "Category", "Bindings" },
		{ "Comment", "/** Which attribute should we use for scale when generating instanced meshes?*/" },
		{ "ModuleRelativePath", "Public/NiagaraMeshRendererProperties.h" },
		{ "ToolTip", "Which attribute should we use for scale when generating instanced meshes?" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_ScaleBinding = { "ScaleBinding", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraMeshRendererProperties, ScaleBinding), Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding, METADATA_PARAMS(Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_ScaleBinding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_ScaleBinding_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_MeshOrientationBinding_MetaData[] = {
		{ "Category", "Bindings" },
		{ "Comment", "/** Which attribute should we use for orienting meshes when generating instanced meshes?*/" },
		{ "ModuleRelativePath", "Public/NiagaraMeshRendererProperties.h" },
		{ "ToolTip", "Which attribute should we use for orienting meshes when generating instanced meshes?" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_MeshOrientationBinding = { "MeshOrientationBinding", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraMeshRendererProperties, MeshOrientationBinding), Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding, METADATA_PARAMS(Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_MeshOrientationBinding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_MeshOrientationBinding_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_VelocityBinding_MetaData[] = {
		{ "Category", "Bindings" },
		{ "Comment", "/** Which attribute should we use for velocity when generating instanced meshes?*/" },
		{ "ModuleRelativePath", "Public/NiagaraMeshRendererProperties.h" },
		{ "ToolTip", "Which attribute should we use for velocity when generating instanced meshes?" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_VelocityBinding = { "VelocityBinding", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraMeshRendererProperties, VelocityBinding), Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding, METADATA_PARAMS(Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_VelocityBinding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_VelocityBinding_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_ColorBinding_MetaData[] = {
		{ "Category", "Bindings" },
		{ "Comment", "/** Which attribute should we use for color when generating instanced meshes?*/" },
		{ "ModuleRelativePath", "Public/NiagaraMeshRendererProperties.h" },
		{ "ToolTip", "Which attribute should we use for color when generating instanced meshes?" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_ColorBinding = { "ColorBinding", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraMeshRendererProperties, ColorBinding), Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding, METADATA_PARAMS(Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_ColorBinding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_ColorBinding_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_PositionBinding_MetaData[] = {
		{ "Category", "Bindings" },
		{ "Comment", "/** Which attribute should we use for position when generating instanced meshes?*/" },
		{ "ModuleRelativePath", "Public/NiagaraMeshRendererProperties.h" },
		{ "ToolTip", "Which attribute should we use for position when generating instanced meshes?" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_PositionBinding = { "PositionBinding", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraMeshRendererProperties, PositionBinding), Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding, METADATA_PARAMS(Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_PositionBinding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_PositionBinding_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_LockedAxisSpace_MetaData[] = {
		{ "Category", "Mesh Rendering" },
		{ "Comment", "/** Specifies what space the locked axis is in */" },
		{ "EditCondition", "bLockedAxisEnable" },
		{ "ModuleRelativePath", "Public/NiagaraMeshRendererProperties.h" },
		{ "ToolTip", "Specifies what space the locked axis is in" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_LockedAxisSpace = { "LockedAxisSpace", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraMeshRendererProperties, LockedAxisSpace), Z_Construct_UEnum_Niagara_ENiagaraMeshLockedAxisSpace, METADATA_PARAMS(Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_LockedAxisSpace_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_LockedAxisSpace_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_LockedAxisSpace_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_LockedAxis_MetaData[] = {
		{ "Category", "Mesh Rendering" },
		{ "Comment", "/** Arbitrary axis by which to lock facing rotations */" },
		{ "EditCondition", "bLockedAxisEnable" },
		{ "ModuleRelativePath", "Public/NiagaraMeshRendererProperties.h" },
		{ "ToolTip", "Arbitrary axis by which to lock facing rotations" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_LockedAxis = { "LockedAxis", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraMeshRendererProperties, LockedAxis), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_LockedAxis_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_LockedAxis_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_bLockedAxisEnable_MetaData[] = {
		{ "Category", "Mesh Rendering" },
		{ "Comment", "/** If true and in a non-default facing mode, will lock facing direction to an arbitrary plane of rotation */" },
		{ "ModuleRelativePath", "Public/NiagaraMeshRendererProperties.h" },
		{ "ToolTip", "If true and in a non-default facing mode, will lock facing direction to an arbitrary plane of rotation" },
	};
#endif
	void Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_bLockedAxisEnable_SetBit(void* Obj)
	{
		((UNiagaraMeshRendererProperties*)Obj)->bLockedAxisEnable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_bLockedAxisEnable = { "bLockedAxisEnable", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UNiagaraMeshRendererProperties), &Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_bLockedAxisEnable_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_bLockedAxisEnable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_bLockedAxisEnable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_FacingMode_MetaData[] = {
		{ "Category", "Mesh Rendering" },
		{ "Comment", "/** Determines how the mesh orients itself relative to the camera.*/" },
		{ "ModuleRelativePath", "Public/NiagaraMeshRendererProperties.h" },
		{ "ToolTip", "Determines how the mesh orients itself relative to the camera." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_FacingMode = { "FacingMode", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraMeshRendererProperties, FacingMode), Z_Construct_UEnum_Niagara_ENiagaraMeshFacingMode, METADATA_PARAMS(Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_FacingMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_FacingMode_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_FacingMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_bSubImageBlend_MetaData[] = {
		{ "Category", "SubUV" },
		{ "Comment", "/** If true, blends the sub-image UV lookup with its next adjacent member using the fractional part of the SubImageIndex float value as the linear interpolation factor.*/" },
		{ "DisplayName", "Sub UV Blending Enabled" },
		{ "ModuleRelativePath", "Public/NiagaraMeshRendererProperties.h" },
		{ "ToolTip", "If true, blends the sub-image UV lookup with its next adjacent member using the fractional part of the SubImageIndex float value as the linear interpolation factor." },
	};
#endif
	void Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_bSubImageBlend_SetBit(void* Obj)
	{
		((UNiagaraMeshRendererProperties*)Obj)->bSubImageBlend = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_bSubImageBlend = { "bSubImageBlend", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UNiagaraMeshRendererProperties), &Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_bSubImageBlend_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_bSubImageBlend_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_bSubImageBlend_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_SubImageSize_MetaData[] = {
		{ "Category", "SubUV" },
		{ "Comment", "/** When using SubImage lookups for particles, this variable contains the number of columns in X and the number of rows in Y.*/" },
		{ "ModuleRelativePath", "Public/NiagaraMeshRendererProperties.h" },
		{ "ToolTip", "When using SubImage lookups for particles, this variable contains the number of columns in X and the number of rows in Y." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_SubImageSize = { "SubImageSize", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraMeshRendererProperties, SubImageSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_SubImageSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_SubImageSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_OverrideMaterials_MetaData[] = {
		{ "Category", "Mesh Rendering" },
		{ "Comment", "/** The materials to be used instead of the StaticMesh's materials. Note that each material must have the Niagara Mesh Particles flag checked. If the ParticleMesh \n\x09requires more materials than exist in this array or any entry in this array is set to None, we will use the ParticleMesh's existing Material instead.*/" },
		{ "EditCondition", "bOverrideMaterials" },
		{ "ModuleRelativePath", "Public/NiagaraMeshRendererProperties.h" },
		{ "ToolTip", "The materials to be used instead of the StaticMesh's materials. Note that each material must have the Niagara Mesh Particles flag checked. If the ParticleMesh\n      requires more materials than exist in this array or any entry in this array is set to None, we will use the ParticleMesh's existing Material instead." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_OverrideMaterials = { "OverrideMaterials", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraMeshRendererProperties, OverrideMaterials), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_OverrideMaterials_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_OverrideMaterials_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_OverrideMaterials_Inner = { "OverrideMaterials", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FNiagaraMeshMaterialOverride, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_bSortOnlyWhenTranslucent_MetaData[] = {
		{ "Category", "Sorting" },
		{ "Comment", "/** If true, the particles are only sorted when using a translucent material. */" },
		{ "ModuleRelativePath", "Public/NiagaraMeshRendererProperties.h" },
		{ "ToolTip", "If true, the particles are only sorted when using a translucent material." },
	};
#endif
	void Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_bSortOnlyWhenTranslucent_SetBit(void* Obj)
	{
		((UNiagaraMeshRendererProperties*)Obj)->bSortOnlyWhenTranslucent = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_bSortOnlyWhenTranslucent = { "bSortOnlyWhenTranslucent", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UNiagaraMeshRendererProperties), &Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_bSortOnlyWhenTranslucent_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_bSortOnlyWhenTranslucent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_bSortOnlyWhenTranslucent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_bOverrideMaterials_MetaData[] = {
		{ "Category", "Mesh Rendering" },
		{ "Comment", "/** Whether or not to use the OverrideMaterials array instead of the mesh's existing materials.*/" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/NiagaraMeshRendererProperties.h" },
		{ "ToolTip", "Whether or not to use the OverrideMaterials array instead of the mesh's existing materials." },
	};
#endif
	void Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_bOverrideMaterials_SetBit(void* Obj)
	{
		((UNiagaraMeshRendererProperties*)Obj)->bOverrideMaterials = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_bOverrideMaterials = { "bOverrideMaterials", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UNiagaraMeshRendererProperties), &Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_bOverrideMaterials_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_bOverrideMaterials_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_bOverrideMaterials_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_SortMode_MetaData[] = {
		{ "Category", "Sorting" },
		{ "Comment", "/** Determines how we sort the particles prior to rendering.*/" },
		{ "ModuleRelativePath", "Public/NiagaraMeshRendererProperties.h" },
		{ "ToolTip", "Determines how we sort the particles prior to rendering." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_SortMode = { "SortMode", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraMeshRendererProperties, SortMode), Z_Construct_UEnum_Niagara_ENiagaraSortMode, METADATA_PARAMS(Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_SortMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_SortMode_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_SortMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_ParticleMesh_MetaData[] = {
		{ "Category", "Mesh Rendering" },
		{ "Comment", "/** The static mesh to be instanced when rendering mesh particles. If OverrideMaterial is not specified, the mesh's material is used. Note that the material must have the Niagara Mesh Particles flag checked.*/" },
		{ "ModuleRelativePath", "Public/NiagaraMeshRendererProperties.h" },
		{ "ToolTip", "The static mesh to be instanced when rendering mesh particles. If OverrideMaterial is not specified, the mesh's material is used. Note that the material must have the Niagara Mesh Particles flag checked." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_ParticleMesh = { "ParticleMesh", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraMeshRendererProperties, ParticleMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_ParticleMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_ParticleMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_CameraOffsetBinding,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_NormalizedAgeBinding,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_CustomSortingBinding,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_MaterialRandomBinding,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_DynamicMaterial3Binding,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_DynamicMaterial2Binding,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_DynamicMaterial1Binding,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_DynamicMaterialBinding,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_SubImageIndexBinding,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_ScaleBinding,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_MeshOrientationBinding,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_VelocityBinding,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_ColorBinding,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_PositionBinding,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_LockedAxisSpace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_LockedAxisSpace_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_LockedAxis,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_bLockedAxisEnable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_FacingMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_FacingMode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_bSubImageBlend,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_SubImageSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_OverrideMaterials,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_OverrideMaterials_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_bSortOnlyWhenTranslucent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_bOverrideMaterials,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_SortMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_SortMode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_ParticleMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraMeshRendererProperties>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::ClassParams = {
		&UNiagaraMeshRendererProperties::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::PropPointers),
		0,
		0x000010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraMeshRendererProperties()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UNiagaraMeshRendererProperties, 3520993283);
	template<> NIAGARA_API UClass* StaticClass<UNiagaraMeshRendererProperties>()
	{
		return UNiagaraMeshRendererProperties::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNiagaraMeshRendererProperties(Z_Construct_UClass_UNiagaraMeshRendererProperties, &UNiagaraMeshRendererProperties::StaticClass, TEXT("/Script/Niagara"), TEXT("UNiagaraMeshRendererProperties"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraMeshRendererProperties);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UNiagaraMeshRendererProperties)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
