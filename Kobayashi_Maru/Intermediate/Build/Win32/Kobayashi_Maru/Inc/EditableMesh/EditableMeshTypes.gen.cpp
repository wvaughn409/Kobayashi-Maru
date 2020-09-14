// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EditableMesh/Public/EditableMeshTypes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEditableMeshTypes() {}
// Cross Module References
	EDITABLEMESH_API UEnum* Z_Construct_UEnum_EditableMesh_EPolygonEdgeHardness();
	UPackage* Z_Construct_UPackage__Script_EditableMesh();
	EDITABLEMESH_API UEnum* Z_Construct_UEnum_EditableMesh_EMeshElementAttributeType();
	EDITABLEMESH_API UEnum* Z_Construct_UEnum_EditableMesh_EMeshTopologyChange();
	EDITABLEMESH_API UEnum* Z_Construct_UEnum_EditableMesh_EMeshModificationType();
	EDITABLEMESH_API UScriptStruct* Z_Construct_UScriptStruct_FPolygonGroupForPolygon();
	MESHDESCRIPTION_API UScriptStruct* Z_Construct_UScriptStruct_FPolygonGroupID();
	MESHDESCRIPTION_API UScriptStruct* Z_Construct_UScriptStruct_FPolygonID();
	EDITABLEMESH_API UScriptStruct* Z_Construct_UScriptStruct_FPolygonGroupToCreate();
	EDITABLEMESH_API UScriptStruct* Z_Construct_UScriptStruct_FMeshElementAttributeList();
	EDITABLEMESH_API UScriptStruct* Z_Construct_UScriptStruct_FVertexToMove();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	MESHDESCRIPTION_API UScriptStruct* Z_Construct_UScriptStruct_FVertexID();
	EDITABLEMESH_API UScriptStruct* Z_Construct_UScriptStruct_FChangeVertexInstancesForPolygon();
	EDITABLEMESH_API UScriptStruct* Z_Construct_UScriptStruct_FVertexInstancesForPolygonHole();
	EDITABLEMESH_API UScriptStruct* Z_Construct_UScriptStruct_FVertexIndexAndInstanceID();
	MESHDESCRIPTION_API UScriptStruct* Z_Construct_UScriptStruct_FVertexInstanceID();
	EDITABLEMESH_API UScriptStruct* Z_Construct_UScriptStruct_FVertexAttributesForPolygon();
	EDITABLEMESH_API UScriptStruct* Z_Construct_UScriptStruct_FVertexAttributesForPolygonHole();
	EDITABLEMESH_API UScriptStruct* Z_Construct_UScriptStruct_FAttributesForEdge();
	MESHDESCRIPTION_API UScriptStruct* Z_Construct_UScriptStruct_FEdgeID();
	EDITABLEMESH_API UScriptStruct* Z_Construct_UScriptStruct_FAttributesForVertexInstance();
	EDITABLEMESH_API UScriptStruct* Z_Construct_UScriptStruct_FAttributesForVertex();
	EDITABLEMESH_API UScriptStruct* Z_Construct_UScriptStruct_FPolygonToSplit();
	EDITABLEMESH_API UScriptStruct* Z_Construct_UScriptStruct_FVertexPair();
	EDITABLEMESH_API UScriptStruct* Z_Construct_UScriptStruct_FPolygonToCreate();
	EDITABLEMESH_API UScriptStruct* Z_Construct_UScriptStruct_FVertexAndAttributes();
	EDITABLEMESH_API UScriptStruct* Z_Construct_UScriptStruct_FEdgeToCreate();
	EDITABLEMESH_API UScriptStruct* Z_Construct_UScriptStruct_FVertexInstanceToCreate();
	EDITABLEMESH_API UScriptStruct* Z_Construct_UScriptStruct_FVertexToCreate();
	EDITABLEMESH_API UScriptStruct* Z_Construct_UScriptStruct_FMeshElementAttributeData();
	EDITABLEMESH_API UScriptStruct* Z_Construct_UScriptStruct_FMeshElementAttributeValue();
	EDITABLEMESH_API UScriptStruct* Z_Construct_UScriptStruct_FSubdivisionLimitData();
	EDITABLEMESH_API UScriptStruct* Z_Construct_UScriptStruct_FSubdividedWireEdge();
	EDITABLEMESH_API UScriptStruct* Z_Construct_UScriptStruct_FSubdivisionLimitSection();
	EDITABLEMESH_API UScriptStruct* Z_Construct_UScriptStruct_FSubdividedQuad();
	EDITABLEMESH_API UScriptStruct* Z_Construct_UScriptStruct_FSubdividedQuadVertex();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
// End Cross Module References
	static UEnum* EPolygonEdgeHardness_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_EditableMesh_EPolygonEdgeHardness, Z_Construct_UPackage__Script_EditableMesh(), TEXT("EPolygonEdgeHardness"));
		}
		return Singleton;
	}
	template<> EDITABLEMESH_API UEnum* StaticEnum<EPolygonEdgeHardness>()
	{
		return EPolygonEdgeHardness_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPolygonEdgeHardness(EPolygonEdgeHardness_StaticEnum, TEXT("/Script/EditableMesh"), TEXT("EPolygonEdgeHardness"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_EditableMesh_EPolygonEdgeHardness_Hash() { return 1992733343U; }
	UEnum* Z_Construct_UEnum_EditableMesh_EPolygonEdgeHardness()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_EditableMesh();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPolygonEdgeHardness"), 0, Get_Z_Construct_UEnum_EditableMesh_EPolygonEdgeHardness_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPolygonEdgeHardness::NewEdgesSoft", (int64)EPolygonEdgeHardness::NewEdgesSoft },
				{ "EPolygonEdgeHardness::NewEdgesHard", (int64)EPolygonEdgeHardness::NewEdgesHard },
				{ "EPolygonEdgeHardness::AllEdgesSoft", (int64)EPolygonEdgeHardness::AllEdgesSoft },
				{ "EPolygonEdgeHardness::AllEdgesHard", (int64)EPolygonEdgeHardness::AllEdgesHard },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AllEdgesHard.Comment", "/** Set all edges as hard, overriding edge hardness on existing edges */" },
				{ "AllEdgesHard.Name", "EPolygonEdgeHardness::AllEdgesHard" },
				{ "AllEdgesHard.ToolTip", "Set all edges as hard, overriding edge hardness on existing edges" },
				{ "AllEdgesSoft.Comment", "/** Set all edges as soft, overriding edge hardness on existing edges */" },
				{ "AllEdgesSoft.Name", "EPolygonEdgeHardness::AllEdgesSoft" },
				{ "AllEdgesSoft.ToolTip", "Set all edges as soft, overriding edge hardness on existing edges" },
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/EditableMeshTypes.h" },
				{ "NewEdgesHard.Comment", "/** Create any new edges required by the polygon as hard, leaving existing edges as they are */" },
				{ "NewEdgesHard.Name", "EPolygonEdgeHardness::NewEdgesHard" },
				{ "NewEdgesHard.ToolTip", "Create any new edges required by the polygon as hard, leaving existing edges as they are" },
				{ "NewEdgesSoft.Comment", "/** Create any new edges required by the polygon as soft, leaving existing edges as they are */" },
				{ "NewEdgesSoft.Name", "EPolygonEdgeHardness::NewEdgesSoft" },
				{ "NewEdgesSoft.ToolTip", "Create any new edges required by the polygon as soft, leaving existing edges as they are" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_EditableMesh,
				nullptr,
				"EPolygonEdgeHardness",
				"EPolygonEdgeHardness",
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
	static UEnum* EMeshElementAttributeType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_EditableMesh_EMeshElementAttributeType, Z_Construct_UPackage__Script_EditableMesh(), TEXT("EMeshElementAttributeType"));
		}
		return Singleton;
	}
	template<> EDITABLEMESH_API UEnum* StaticEnum<EMeshElementAttributeType>()
	{
		return EMeshElementAttributeType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMeshElementAttributeType(EMeshElementAttributeType_StaticEnum, TEXT("/Script/EditableMesh"), TEXT("EMeshElementAttributeType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_EditableMesh_EMeshElementAttributeType_Hash() { return 1526986209U; }
	UEnum* Z_Construct_UEnum_EditableMesh_EMeshElementAttributeType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_EditableMesh();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMeshElementAttributeType"), 0, Get_Z_Construct_UEnum_EditableMesh_EMeshElementAttributeType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EMeshElementAttributeType::None", (int64)EMeshElementAttributeType::None },
				{ "EMeshElementAttributeType::FVector4", (int64)EMeshElementAttributeType::FVector4 },
				{ "EMeshElementAttributeType::FVector", (int64)EMeshElementAttributeType::FVector },
				{ "EMeshElementAttributeType::FVector2D", (int64)EMeshElementAttributeType::FVector2D },
				{ "EMeshElementAttributeType::Float", (int64)EMeshElementAttributeType::Float },
				{ "EMeshElementAttributeType::Int", (int64)EMeshElementAttributeType::Int },
				{ "EMeshElementAttributeType::Bool", (int64)EMeshElementAttributeType::Bool },
				{ "EMeshElementAttributeType::FName", (int64)EMeshElementAttributeType::FName },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Bool.Name", "EMeshElementAttributeType::Bool" },
				{ "Float.Name", "EMeshElementAttributeType::Float" },
				{ "FName.Name", "EMeshElementAttributeType::FName" },
				{ "FVector.Name", "EMeshElementAttributeType::FVector" },
				{ "FVector2D.Name", "EMeshElementAttributeType::FVector2D" },
				{ "FVector4.Name", "EMeshElementAttributeType::FVector4" },
				{ "Int.Name", "EMeshElementAttributeType::Int" },
				{ "ModuleRelativePath", "Public/EditableMeshTypes.h" },
				{ "None.Name", "EMeshElementAttributeType::None" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_EditableMesh,
				nullptr,
				"EMeshElementAttributeType",
				"EMeshElementAttributeType",
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
	static UEnum* EMeshTopologyChange_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_EditableMesh_EMeshTopologyChange, Z_Construct_UPackage__Script_EditableMesh(), TEXT("EMeshTopologyChange"));
		}
		return Singleton;
	}
	template<> EDITABLEMESH_API UEnum* StaticEnum<EMeshTopologyChange>()
	{
		return EMeshTopologyChange_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMeshTopologyChange(EMeshTopologyChange_StaticEnum, TEXT("/Script/EditableMesh"), TEXT("EMeshTopologyChange"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_EditableMesh_EMeshTopologyChange_Hash() { return 3419869602U; }
	UEnum* Z_Construct_UEnum_EditableMesh_EMeshTopologyChange()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_EditableMesh();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMeshTopologyChange"), 0, Get_Z_Construct_UEnum_EditableMesh_EMeshTopologyChange_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EMeshTopologyChange::NoTopologyChange", (int64)EMeshTopologyChange::NoTopologyChange },
				{ "EMeshTopologyChange::TopologyChange", (int64)EMeshTopologyChange::TopologyChange },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/EditableMeshTypes.h" },
				{ "NoTopologyChange.Comment", "/** We won't be changing the mesh topology, but values could be changed (vertex positions, UVs, colors, etc.) */" },
				{ "NoTopologyChange.Name", "EMeshTopologyChange::NoTopologyChange" },
				{ "NoTopologyChange.ToolTip", "We won't be changing the mesh topology, but values could be changed (vertex positions, UVs, colors, etc.)" },
				{ "TopologyChange.Comment", "/** Topology is changing with this edit, potentially along with other changes */" },
				{ "TopologyChange.Name", "EMeshTopologyChange::TopologyChange" },
				{ "TopologyChange.ToolTip", "Topology is changing with this edit, potentially along with other changes" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_EditableMesh,
				nullptr,
				"EMeshTopologyChange",
				"EMeshTopologyChange",
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
	static UEnum* EMeshModificationType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_EditableMesh_EMeshModificationType, Z_Construct_UPackage__Script_EditableMesh(), TEXT("EMeshModificationType"));
		}
		return Singleton;
	}
	template<> EDITABLEMESH_API UEnum* StaticEnum<EMeshModificationType>()
	{
		return EMeshModificationType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMeshModificationType(EMeshModificationType_StaticEnum, TEXT("/Script/EditableMesh"), TEXT("EMeshModificationType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_EditableMesh_EMeshModificationType_Hash() { return 2372854657U; }
	UEnum* Z_Construct_UEnum_EditableMesh_EMeshModificationType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_EditableMesh();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMeshModificationType"), 0, Get_Z_Construct_UEnum_EditableMesh_EMeshModificationType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EMeshModificationType::FirstInterim", (int64)EMeshModificationType::FirstInterim },
				{ "EMeshModificationType::Interim", (int64)EMeshModificationType::Interim },
				{ "EMeshModificationType::Final", (int64)EMeshModificationType::Final },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Final.Comment", "/** User has finished their current interaction with this mesh, and everything needs to be finalized at this time */" },
				{ "Final.Name", "EMeshModificationType::Final" },
				{ "Final.ToolTip", "User has finished their current interaction with this mesh, and everything needs to be finalized at this time" },
				{ "FirstInterim.Comment", "/** The first Interim change since the last Final change.  This must be followed by either an Interim change or a Final change */" },
				{ "FirstInterim.Name", "EMeshModificationType::FirstInterim" },
				{ "FirstInterim.ToolTip", "The first Interim change since the last Final change.  This must be followed by either an Interim change or a Final change" },
				{ "Interim.Comment", "/** User is still in the middle of their interaction.  More changes to come, so don't bother finalizing everything yet (smoother performance) */" },
				{ "Interim.Name", "EMeshModificationType::Interim" },
				{ "Interim.ToolTip", "User is still in the middle of their interaction.  More changes to come, so don't bother finalizing everything yet (smoother performance)" },
				{ "ModuleRelativePath", "Public/EditableMeshTypes.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_EditableMesh,
				nullptr,
				"EMeshModificationType",
				"EMeshModificationType",
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
class UScriptStruct* FPolygonGroupForPolygon::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern EDITABLEMESH_API uint32 Get_Z_Construct_UScriptStruct_FPolygonGroupForPolygon_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPolygonGroupForPolygon, Z_Construct_UPackage__Script_EditableMesh(), TEXT("PolygonGroupForPolygon"), sizeof(FPolygonGroupForPolygon), Get_Z_Construct_UScriptStruct_FPolygonGroupForPolygon_Hash());
	}
	return Singleton;
}
template<> EDITABLEMESH_API UScriptStruct* StaticStruct<FPolygonGroupForPolygon>()
{
	return FPolygonGroupForPolygon::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPolygonGroupForPolygon(FPolygonGroupForPolygon::StaticStruct, TEXT("/Script/EditableMesh"), TEXT("PolygonGroupForPolygon"), false, nullptr, nullptr);
static struct FScriptStruct_EditableMesh_StaticRegisterNativesFPolygonGroupForPolygon
{
	FScriptStruct_EditableMesh_StaticRegisterNativesFPolygonGroupForPolygon()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PolygonGroupForPolygon")),new UScriptStruct::TCppStructOps<FPolygonGroupForPolygon>);
	}
} ScriptStruct_EditableMesh_StaticRegisterNativesFPolygonGroupForPolygon;
	struct Z_Construct_UScriptStruct_FPolygonGroupForPolygon_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PolygonGroupID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PolygonGroupID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PolygonID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PolygonID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPolygonGroupForPolygon_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/EditableMeshTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPolygonGroupForPolygon_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPolygonGroupForPolygon>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPolygonGroupForPolygon_Statics::NewProp_PolygonGroupID_MetaData[] = {
		{ "Category", "Editable Mesh" },
		{ "Comment", "/** Polygon group to assign polygon to */" },
		{ "ModuleRelativePath", "Public/EditableMeshTypes.h" },
		{ "ToolTip", "Polygon group to assign polygon to" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPolygonGroupForPolygon_Statics::NewProp_PolygonGroupID = { "PolygonGroupID", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPolygonGroupForPolygon, PolygonGroupID), Z_Construct_UScriptStruct_FPolygonGroupID, METADATA_PARAMS(Z_Construct_UScriptStruct_FPolygonGroupForPolygon_Statics::NewProp_PolygonGroupID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPolygonGroupForPolygon_Statics::NewProp_PolygonGroupID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPolygonGroupForPolygon_Statics::NewProp_PolygonID_MetaData[] = {
		{ "Category", "Editable Mesh" },
		{ "Comment", "/** Polygon to assign to a new group */" },
		{ "ModuleRelativePath", "Public/EditableMeshTypes.h" },
		{ "ToolTip", "Polygon to assign to a new group" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPolygonGroupForPolygon_Statics::NewProp_PolygonID = { "PolygonID", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPolygonGroupForPolygon, PolygonID), Z_Construct_UScriptStruct_FPolygonID, METADATA_PARAMS(Z_Construct_UScriptStruct_FPolygonGroupForPolygon_Statics::NewProp_PolygonID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPolygonGroupForPolygon_Statics::NewProp_PolygonID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPolygonGroupForPolygon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPolygonGroupForPolygon_Statics::NewProp_PolygonGroupID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPolygonGroupForPolygon_Statics::NewProp_PolygonID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPolygonGroupForPolygon_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EditableMesh,
		nullptr,
		&NewStructOps,
		"PolygonGroupForPolygon",
		sizeof(FPolygonGroupForPolygon),
		alignof(FPolygonGroupForPolygon),
		Z_Construct_UScriptStruct_FPolygonGroupForPolygon_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPolygonGroupForPolygon_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPolygonGroupForPolygon_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPolygonGroupForPolygon_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPolygonGroupForPolygon()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPolygonGroupForPolygon_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_EditableMesh();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PolygonGroupForPolygon"), sizeof(FPolygonGroupForPolygon), Get_Z_Construct_UScriptStruct_FPolygonGroupForPolygon_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPolygonGroupForPolygon_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPolygonGroupForPolygon_Hash() { return 497508822U; }
class UScriptStruct* FPolygonGroupToCreate::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern EDITABLEMESH_API uint32 Get_Z_Construct_UScriptStruct_FPolygonGroupToCreate_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPolygonGroupToCreate, Z_Construct_UPackage__Script_EditableMesh(), TEXT("PolygonGroupToCreate"), sizeof(FPolygonGroupToCreate), Get_Z_Construct_UScriptStruct_FPolygonGroupToCreate_Hash());
	}
	return Singleton;
}
template<> EDITABLEMESH_API UScriptStruct* StaticStruct<FPolygonGroupToCreate>()
{
	return FPolygonGroupToCreate::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPolygonGroupToCreate(FPolygonGroupToCreate::StaticStruct, TEXT("/Script/EditableMesh"), TEXT("PolygonGroupToCreate"), false, nullptr, nullptr);
static struct FScriptStruct_EditableMesh_StaticRegisterNativesFPolygonGroupToCreate
{
	FScriptStruct_EditableMesh_StaticRegisterNativesFPolygonGroupToCreate()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PolygonGroupToCreate")),new UScriptStruct::TCppStructOps<FPolygonGroupToCreate>);
	}
} ScriptStruct_EditableMesh_StaticRegisterNativesFPolygonGroupToCreate;
	struct Z_Construct_UScriptStruct_FPolygonGroupToCreate_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OriginalPolygonGroupID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OriginalPolygonGroupID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PolygonGroupAttributes_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PolygonGroupAttributes;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPolygonGroupToCreate_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/EditableMeshTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPolygonGroupToCreate_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPolygonGroupToCreate>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPolygonGroupToCreate_Statics::NewProp_OriginalPolygonGroupID_MetaData[] = {
		{ "Category", "Editable Mesh" },
		{ "Comment", "/** The original ID of the polygon group.  Should only be used by the undo system. */" },
		{ "ModuleRelativePath", "Public/EditableMeshTypes.h" },
		{ "ToolTip", "The original ID of the polygon group.  Should only be used by the undo system." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPolygonGroupToCreate_Statics::NewProp_OriginalPolygonGroupID = { "OriginalPolygonGroupID", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPolygonGroupToCreate, OriginalPolygonGroupID), Z_Construct_UScriptStruct_FPolygonGroupID, METADATA_PARAMS(Z_Construct_UScriptStruct_FPolygonGroupToCreate_Statics::NewProp_OriginalPolygonGroupID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPolygonGroupToCreate_Statics::NewProp_OriginalPolygonGroupID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPolygonGroupToCreate_Statics::NewProp_PolygonGroupAttributes_MetaData[] = {
		{ "Category", "Editable Mesh" },
		{ "Comment", "/** Attributes of this polygon group */" },
		{ "ModuleRelativePath", "Public/EditableMeshTypes.h" },
		{ "ToolTip", "Attributes of this polygon group" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPolygonGroupToCreate_Statics::NewProp_PolygonGroupAttributes = { "PolygonGroupAttributes", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPolygonGroupToCreate, PolygonGroupAttributes), Z_Construct_UScriptStruct_FMeshElementAttributeList, METADATA_PARAMS(Z_Construct_UScriptStruct_FPolygonGroupToCreate_Statics::NewProp_PolygonGroupAttributes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPolygonGroupToCreate_Statics::NewProp_PolygonGroupAttributes_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPolygonGroupToCreate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPolygonGroupToCreate_Statics::NewProp_OriginalPolygonGroupID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPolygonGroupToCreate_Statics::NewProp_PolygonGroupAttributes,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPolygonGroupToCreate_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EditableMesh,
		nullptr,
		&NewStructOps,
		"PolygonGroupToCreate",
		sizeof(FPolygonGroupToCreate),
		alignof(FPolygonGroupToCreate),
		Z_Construct_UScriptStruct_FPolygonGroupToCreate_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPolygonGroupToCreate_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPolygonGroupToCreate_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPolygonGroupToCreate_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPolygonGroupToCreate()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPolygonGroupToCreate_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_EditableMesh();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PolygonGroupToCreate"), sizeof(FPolygonGroupToCreate), Get_Z_Construct_UScriptStruct_FPolygonGroupToCreate_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPolygonGroupToCreate_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPolygonGroupToCreate_Hash() { return 1832657359U; }
class UScriptStruct* FVertexToMove::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern EDITABLEMESH_API uint32 Get_Z_Construct_UScriptStruct_FVertexToMove_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FVertexToMove, Z_Construct_UPackage__Script_EditableMesh(), TEXT("VertexToMove"), sizeof(FVertexToMove), Get_Z_Construct_UScriptStruct_FVertexToMove_Hash());
	}
	return Singleton;
}
template<> EDITABLEMESH_API UScriptStruct* StaticStruct<FVertexToMove>()
{
	return FVertexToMove::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FVertexToMove(FVertexToMove::StaticStruct, TEXT("/Script/EditableMesh"), TEXT("VertexToMove"), false, nullptr, nullptr);
static struct FScriptStruct_EditableMesh_StaticRegisterNativesFVertexToMove
{
	FScriptStruct_EditableMesh_StaticRegisterNativesFVertexToMove()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("VertexToMove")),new UScriptStruct::TCppStructOps<FVertexToMove>);
	}
} ScriptStruct_EditableMesh_StaticRegisterNativesFVertexToMove;
	struct Z_Construct_UScriptStruct_FVertexToMove_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewVertexPosition_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewVertexPosition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VertexID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VertexID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexToMove_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/EditableMeshTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVertexToMove_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVertexToMove>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexToMove_Statics::NewProp_NewVertexPosition_MetaData[] = {
		{ "Category", "Editable Mesh" },
		{ "Comment", "/** The new position of the vertex */" },
		{ "ModuleRelativePath", "Public/EditableMeshTypes.h" },
		{ "ToolTip", "The new position of the vertex" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVertexToMove_Statics::NewProp_NewVertexPosition = { "NewVertexPosition", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVertexToMove, NewVertexPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FVertexToMove_Statics::NewProp_NewVertexPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexToMove_Statics::NewProp_NewVertexPosition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexToMove_Statics::NewProp_VertexID_MetaData[] = {
		{ "Category", "Editable Mesh" },
		{ "Comment", "/** The vertex we'll be moving around */" },
		{ "ModuleRelativePath", "Public/EditableMeshTypes.h" },
		{ "ToolTip", "The vertex we'll be moving around" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVertexToMove_Statics::NewProp_VertexID = { "VertexID", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVertexToMove, VertexID), Z_Construct_UScriptStruct_FVertexID, METADATA_PARAMS(Z_Construct_UScriptStruct_FVertexToMove_Statics::NewProp_VertexID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexToMove_Statics::NewProp_VertexID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVertexToMove_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexToMove_Statics::NewProp_NewVertexPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexToMove_Statics::NewProp_VertexID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVertexToMove_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EditableMesh,
		nullptr,
		&NewStructOps,
		"VertexToMove",
		sizeof(FVertexToMove),
		alignof(FVertexToMove),
		Z_Construct_UScriptStruct_FVertexToMove_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexToMove_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVertexToMove_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexToMove_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVertexToMove()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FVertexToMove_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_EditableMesh();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("VertexToMove"), sizeof(FVertexToMove), Get_Z_Construct_UScriptStruct_FVertexToMove_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FVertexToMove_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVertexToMove_Hash() { return 191993642U; }
class UScriptStruct* FChangeVertexInstancesForPolygon::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern EDITABLEMESH_API uint32 Get_Z_Construct_UScriptStruct_FChangeVertexInstancesForPolygon_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FChangeVertexInstancesForPolygon, Z_Construct_UPackage__Script_EditableMesh(), TEXT("ChangeVertexInstancesForPolygon"), sizeof(FChangeVertexInstancesForPolygon), Get_Z_Construct_UScriptStruct_FChangeVertexInstancesForPolygon_Hash());
	}
	return Singleton;
}
template<> EDITABLEMESH_API UScriptStruct* StaticStruct<FChangeVertexInstancesForPolygon>()
{
	return FChangeVertexInstancesForPolygon::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FChangeVertexInstancesForPolygon(FChangeVertexInstancesForPolygon::StaticStruct, TEXT("/Script/EditableMesh"), TEXT("ChangeVertexInstancesForPolygon"), false, nullptr, nullptr);
static struct FScriptStruct_EditableMesh_StaticRegisterNativesFChangeVertexInstancesForPolygon
{
	FScriptStruct_EditableMesh_StaticRegisterNativesFChangeVertexInstancesForPolygon()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ChangeVertexInstancesForPolygon")),new UScriptStruct::TCppStructOps<FChangeVertexInstancesForPolygon>);
	}
} ScriptStruct_EditableMesh_StaticRegisterNativesFChangeVertexInstancesForPolygon;
	struct Z_Construct_UScriptStruct_FChangeVertexInstancesForPolygon_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VertexIndicesAndInstanceIDsForEachHole_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_VertexIndicesAndInstanceIDsForEachHole;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VertexIndicesAndInstanceIDsForEachHole_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PerimeterVertexIndicesAndInstanceIDs_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PerimeterVertexIndicesAndInstanceIDs;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PerimeterVertexIndicesAndInstanceIDs_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PolygonID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PolygonID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChangeVertexInstancesForPolygon_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/EditableMeshTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FChangeVertexInstancesForPolygon_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FChangeVertexInstancesForPolygon>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChangeVertexInstancesForPolygon_Statics::NewProp_VertexIndicesAndInstanceIDsForEachHole_MetaData[] = {
		{ "Category", "Editable Mesh" },
		{ "Comment", "/** A list of vertex instance IDs for each hole. */" },
		{ "ModuleRelativePath", "Public/EditableMeshTypes.h" },
		{ "ToolTip", "A list of vertex instance IDs for each hole." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FChangeVertexInstancesForPolygon_Statics::NewProp_VertexIndicesAndInstanceIDsForEachHole = { "VertexIndicesAndInstanceIDsForEachHole", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChangeVertexInstancesForPolygon, VertexIndicesAndInstanceIDsForEachHole), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FChangeVertexInstancesForPolygon_Statics::NewProp_VertexIndicesAndInstanceIDsForEachHole_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChangeVertexInstancesForPolygon_Statics::NewProp_VertexIndicesAndInstanceIDsForEachHole_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChangeVertexInstancesForPolygon_Statics::NewProp_VertexIndicesAndInstanceIDsForEachHole_Inner = { "VertexIndicesAndInstanceIDsForEachHole", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVertexInstancesForPolygonHole, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChangeVertexInstancesForPolygon_Statics::NewProp_PerimeterVertexIndicesAndInstanceIDs_MetaData[] = {
		{ "Category", "Editable Mesh" },
		{ "Comment", "/** A list of vertex numbers and vertex instance IDs to change for the polygon perimeter. */" },
		{ "ModuleRelativePath", "Public/EditableMeshTypes.h" },
		{ "ToolTip", "A list of vertex numbers and vertex instance IDs to change for the polygon perimeter." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FChangeVertexInstancesForPolygon_Statics::NewProp_PerimeterVertexIndicesAndInstanceIDs = { "PerimeterVertexIndicesAndInstanceIDs", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChangeVertexInstancesForPolygon, PerimeterVertexIndicesAndInstanceIDs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FChangeVertexInstancesForPolygon_Statics::NewProp_PerimeterVertexIndicesAndInstanceIDs_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChangeVertexInstancesForPolygon_Statics::NewProp_PerimeterVertexIndicesAndInstanceIDs_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChangeVertexInstancesForPolygon_Statics::NewProp_PerimeterVertexIndicesAndInstanceIDs_Inner = { "PerimeterVertexIndicesAndInstanceIDs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVertexIndexAndInstanceID, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChangeVertexInstancesForPolygon_Statics::NewProp_PolygonID_MetaData[] = {
		{ "Category", "Editable Mesh" },
		{ "Comment", "/** The polygon to set vertex instances on */" },
		{ "ModuleRelativePath", "Public/EditableMeshTypes.h" },
		{ "ToolTip", "The polygon to set vertex instances on" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChangeVertexInstancesForPolygon_Statics::NewProp_PolygonID = { "PolygonID", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChangeVertexInstancesForPolygon, PolygonID), Z_Construct_UScriptStruct_FPolygonID, METADATA_PARAMS(Z_Construct_UScriptStruct_FChangeVertexInstancesForPolygon_Statics::NewProp_PolygonID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChangeVertexInstancesForPolygon_Statics::NewProp_PolygonID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FChangeVertexInstancesForPolygon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChangeVertexInstancesForPolygon_Statics::NewProp_VertexIndicesAndInstanceIDsForEachHole,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChangeVertexInstancesForPolygon_Statics::NewProp_VertexIndicesAndInstanceIDsForEachHole_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChangeVertexInstancesForPolygon_Statics::NewProp_PerimeterVertexIndicesAndInstanceIDs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChangeVertexInstancesForPolygon_Statics::NewProp_PerimeterVertexIndicesAndInstanceIDs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChangeVertexInstancesForPolygon_Statics::NewProp_PolygonID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FChangeVertexInstancesForPolygon_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EditableMesh,
		nullptr,
		&NewStructOps,
		"ChangeVertexInstancesForPolygon",
		sizeof(FChangeVertexInstancesForPolygon),
		alignof(FChangeVertexInstancesForPolygon),
		Z_Construct_UScriptStruct_FChangeVertexInstancesForPolygon_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChangeVertexInstancesForPolygon_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FChangeVertexInstancesForPolygon_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChangeVertexInstancesForPolygon_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FChangeVertexInstancesForPolygon()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FChangeVertexInstancesForPolygon_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_EditableMesh();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ChangeVertexInstancesForPolygon"), sizeof(FChangeVertexInstancesForPolygon), Get_Z_Construct_UScriptStruct_FChangeVertexInstancesForPolygon_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FChangeVertexInstancesForPolygon_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FChangeVertexInstancesForPolygon_Hash() { return 1247728909U; }
class UScriptStruct* FVertexInstancesForPolygonHole::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern EDITABLEMESH_API uint32 Get_Z_Construct_UScriptStruct_FVertexInstancesForPolygonHole_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FVertexInstancesForPolygonHole, Z_Construct_UPackage__Script_EditableMesh(), TEXT("VertexInstancesForPolygonHole"), sizeof(FVertexInstancesForPolygonHole), Get_Z_Construct_UScriptStruct_FVertexInstancesForPolygonHole_Hash());
	}
	return Singleton;
}
template<> EDITABLEMESH_API UScriptStruct* StaticStruct<FVertexInstancesForPolygonHole>()
{
	return FVertexInstancesForPolygonHole::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FVertexInstancesForPolygonHole(FVertexInstancesForPolygonHole::StaticStruct, TEXT("/Script/EditableMesh"), TEXT("VertexInstancesForPolygonHole"), false, nullptr, nullptr);
static struct FScriptStruct_EditableMesh_StaticRegisterNativesFVertexInstancesForPolygonHole
{
	FScriptStruct_EditableMesh_StaticRegisterNativesFVertexInstancesForPolygonHole()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("VertexInstancesForPolygonHole")),new UScriptStruct::TCppStructOps<FVertexInstancesForPolygonHole>);
	}
} ScriptStruct_EditableMesh_StaticRegisterNativesFVertexInstancesForPolygonHole;
	struct Z_Construct_UScriptStruct_FVertexInstancesForPolygonHole_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VertexIndicesAndInstanceIDs_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_VertexIndicesAndInstanceIDs;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VertexIndicesAndInstanceIDs_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexInstancesForPolygonHole_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/EditableMeshTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVertexInstancesForPolygonHole_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVertexInstancesForPolygonHole>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexInstancesForPolygonHole_Statics::NewProp_VertexIndicesAndInstanceIDs_MetaData[] = {
		{ "Category", "Editable Mesh" },
		{ "Comment", "/** A list of vertex instance IDs for a polygon hole. */" },
		{ "ModuleRelativePath", "Public/EditableMeshTypes.h" },
		{ "ToolTip", "A list of vertex instance IDs for a polygon hole." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FVertexInstancesForPolygonHole_Statics::NewProp_VertexIndicesAndInstanceIDs = { "VertexIndicesAndInstanceIDs", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVertexInstancesForPolygonHole, VertexIndicesAndInstanceIDs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FVertexInstancesForPolygonHole_Statics::NewProp_VertexIndicesAndInstanceIDs_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexInstancesForPolygonHole_Statics::NewProp_VertexIndicesAndInstanceIDs_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVertexInstancesForPolygonHole_Statics::NewProp_VertexIndicesAndInstanceIDs_Inner = { "VertexIndicesAndInstanceIDs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVertexIndexAndInstanceID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVertexInstancesForPolygonHole_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexInstancesForPolygonHole_Statics::NewProp_VertexIndicesAndInstanceIDs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexInstancesForPolygonHole_Statics::NewProp_VertexIndicesAndInstanceIDs_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVertexInstancesForPolygonHole_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EditableMesh,
		nullptr,
		&NewStructOps,
		"VertexInstancesForPolygonHole",
		sizeof(FVertexInstancesForPolygonHole),
		alignof(FVertexInstancesForPolygonHole),
		Z_Construct_UScriptStruct_FVertexInstancesForPolygonHole_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexInstancesForPolygonHole_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVertexInstancesForPolygonHole_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexInstancesForPolygonHole_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVertexInstancesForPolygonHole()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FVertexInstancesForPolygonHole_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_EditableMesh();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("VertexInstancesForPolygonHole"), sizeof(FVertexInstancesForPolygonHole), Get_Z_Construct_UScriptStruct_FVertexInstancesForPolygonHole_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FVertexInstancesForPolygonHole_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVertexInstancesForPolygonHole_Hash() { return 418423347U; }
class UScriptStruct* FVertexIndexAndInstanceID::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern EDITABLEMESH_API uint32 Get_Z_Construct_UScriptStruct_FVertexIndexAndInstanceID_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FVertexIndexAndInstanceID, Z_Construct_UPackage__Script_EditableMesh(), TEXT("VertexIndexAndInstanceID"), sizeof(FVertexIndexAndInstanceID), Get_Z_Construct_UScriptStruct_FVertexIndexAndInstanceID_Hash());
	}
	return Singleton;
}
template<> EDITABLEMESH_API UScriptStruct* StaticStruct<FVertexIndexAndInstanceID>()
{
	return FVertexIndexAndInstanceID::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FVertexIndexAndInstanceID(FVertexIndexAndInstanceID::StaticStruct, TEXT("/Script/EditableMesh"), TEXT("VertexIndexAndInstanceID"), false, nullptr, nullptr);
static struct FScriptStruct_EditableMesh_StaticRegisterNativesFVertexIndexAndInstanceID
{
	FScriptStruct_EditableMesh_StaticRegisterNativesFVertexIndexAndInstanceID()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("VertexIndexAndInstanceID")),new UScriptStruct::TCppStructOps<FVertexIndexAndInstanceID>);
	}
} ScriptStruct_EditableMesh_StaticRegisterNativesFVertexIndexAndInstanceID;
	struct Z_Construct_UScriptStruct_FVertexIndexAndInstanceID_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VertexInstanceID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VertexInstanceID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ContourIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ContourIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexIndexAndInstanceID_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/EditableMeshTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVertexIndexAndInstanceID_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVertexIndexAndInstanceID>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexIndexAndInstanceID_Statics::NewProp_VertexInstanceID_MetaData[] = {
		{ "Category", "Editable Mesh" },
		{ "Comment", "/** New vertex instance ID to assign */" },
		{ "ModuleRelativePath", "Public/EditableMeshTypes.h" },
		{ "ToolTip", "New vertex instance ID to assign" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVertexIndexAndInstanceID_Statics::NewProp_VertexInstanceID = { "VertexInstanceID", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVertexIndexAndInstanceID, VertexInstanceID), Z_Construct_UScriptStruct_FVertexInstanceID, METADATA_PARAMS(Z_Construct_UScriptStruct_FVertexIndexAndInstanceID_Statics::NewProp_VertexInstanceID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexIndexAndInstanceID_Statics::NewProp_VertexInstanceID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexIndexAndInstanceID_Statics::NewProp_ContourIndex_MetaData[] = {
		{ "Category", "Editable Mesh" },
		{ "Comment", "/** Contour index of the vertex to change */" },
		{ "ModuleRelativePath", "Public/EditableMeshTypes.h" },
		{ "ToolTip", "Contour index of the vertex to change" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FVertexIndexAndInstanceID_Statics::NewProp_ContourIndex = { "ContourIndex", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVertexIndexAndInstanceID, ContourIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FVertexIndexAndInstanceID_Statics::NewProp_ContourIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexIndexAndInstanceID_Statics::NewProp_ContourIndex_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVertexIndexAndInstanceID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexIndexAndInstanceID_Statics::NewProp_VertexInstanceID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexIndexAndInstanceID_Statics::NewProp_ContourIndex,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVertexIndexAndInstanceID_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EditableMesh,
		nullptr,
		&NewStructOps,
		"VertexIndexAndInstanceID",
		sizeof(FVertexIndexAndInstanceID),
		alignof(FVertexIndexAndInstanceID),
		Z_Construct_UScriptStruct_FVertexIndexAndInstanceID_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexIndexAndInstanceID_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVertexIndexAndInstanceID_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexIndexAndInstanceID_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVertexIndexAndInstanceID()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FVertexIndexAndInstanceID_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_EditableMesh();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("VertexIndexAndInstanceID"), sizeof(FVertexIndexAndInstanceID), Get_Z_Construct_UScriptStruct_FVertexIndexAndInstanceID_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FVertexIndexAndInstanceID_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVertexIndexAndInstanceID_Hash() { return 1760704537U; }
class UScriptStruct* FVertexAttributesForPolygon::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern EDITABLEMESH_API uint32 Get_Z_Construct_UScriptStruct_FVertexAttributesForPolygon_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FVertexAttributesForPolygon, Z_Construct_UPackage__Script_EditableMesh(), TEXT("VertexAttributesForPolygon"), sizeof(FVertexAttributesForPolygon), Get_Z_Construct_UScriptStruct_FVertexAttributesForPolygon_Hash());
	}
	return Singleton;
}
template<> EDITABLEMESH_API UScriptStruct* StaticStruct<FVertexAttributesForPolygon>()
{
	return FVertexAttributesForPolygon::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FVertexAttributesForPolygon(FVertexAttributesForPolygon::StaticStruct, TEXT("/Script/EditableMesh"), TEXT("VertexAttributesForPolygon"), false, nullptr, nullptr);
static struct FScriptStruct_EditableMesh_StaticRegisterNativesFVertexAttributesForPolygon
{
	FScriptStruct_EditableMesh_StaticRegisterNativesFVertexAttributesForPolygon()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("VertexAttributesForPolygon")),new UScriptStruct::TCppStructOps<FVertexAttributesForPolygon>);
	}
} ScriptStruct_EditableMesh_StaticRegisterNativesFVertexAttributesForPolygon;
	struct Z_Construct_UScriptStruct_FVertexAttributesForPolygon_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VertexAttributeListsForEachHole_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_VertexAttributeListsForEachHole;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VertexAttributeListsForEachHole_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PerimeterVertexAttributeLists_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PerimeterVertexAttributeLists;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PerimeterVertexAttributeLists_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PolygonID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PolygonID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexAttributesForPolygon_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/EditableMeshTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVertexAttributesForPolygon_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVertexAttributesForPolygon>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexAttributesForPolygon_Statics::NewProp_VertexAttributeListsForEachHole_MetaData[] = {
		{ "Category", "Editable Mesh" },
		{ "Comment", "/** For each hole vertex, a list of attributes for that vertex.  Can be left empty if you don't want to set any attributes.  Also\n\x09    you can leave a given array empty for a specific hole index if you don't want to set attributes for select holes. */" },
		{ "ModuleRelativePath", "Public/EditableMeshTypes.h" },
		{ "ToolTip", "For each hole vertex, a list of attributes for that vertex.  Can be left empty if you don't want to set any attributes.  Also\n          you can leave a given array empty for a specific hole index if you don't want to set attributes for select holes." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FVertexAttributesForPolygon_Statics::NewProp_VertexAttributeListsForEachHole = { "VertexAttributeListsForEachHole", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVertexAttributesForPolygon, VertexAttributeListsForEachHole), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FVertexAttributesForPolygon_Statics::NewProp_VertexAttributeListsForEachHole_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexAttributesForPolygon_Statics::NewProp_VertexAttributeListsForEachHole_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVertexAttributesForPolygon_Statics::NewProp_VertexAttributeListsForEachHole_Inner = { "VertexAttributeListsForEachHole", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVertexAttributesForPolygonHole, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexAttributesForPolygon_Statics::NewProp_PerimeterVertexAttributeLists_MetaData[] = {
		{ "Category", "Editable Mesh" },
		{ "Comment", "/** For each polygon vertex, a list of attributes for that vertex.  Can be left empty if you don't want to set any attributes. */" },
		{ "ModuleRelativePath", "Public/EditableMeshTypes.h" },
		{ "ToolTip", "For each polygon vertex, a list of attributes for that vertex.  Can be left empty if you don't want to set any attributes." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FVertexAttributesForPolygon_Statics::NewProp_PerimeterVertexAttributeLists = { "PerimeterVertexAttributeLists", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVertexAttributesForPolygon, PerimeterVertexAttributeLists), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FVertexAttributesForPolygon_Statics::NewProp_PerimeterVertexAttributeLists_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexAttributesForPolygon_Statics::NewProp_PerimeterVertexAttributeLists_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVertexAttributesForPolygon_Statics::NewProp_PerimeterVertexAttributeLists_Inner = { "PerimeterVertexAttributeLists", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FMeshElementAttributeList, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexAttributesForPolygon_Statics::NewProp_PolygonID_MetaData[] = {
		{ "Category", "Editable Mesh" },
		{ "Comment", "/** The polygon to set vertex attributes on */" },
		{ "ModuleRelativePath", "Public/EditableMeshTypes.h" },
		{ "ToolTip", "The polygon to set vertex attributes on" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVertexAttributesForPolygon_Statics::NewProp_PolygonID = { "PolygonID", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVertexAttributesForPolygon, PolygonID), Z_Construct_UScriptStruct_FPolygonID, METADATA_PARAMS(Z_Construct_UScriptStruct_FVertexAttributesForPolygon_Statics::NewProp_PolygonID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexAttributesForPolygon_Statics::NewProp_PolygonID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVertexAttributesForPolygon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexAttributesForPolygon_Statics::NewProp_VertexAttributeListsForEachHole,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexAttributesForPolygon_Statics::NewProp_VertexAttributeListsForEachHole_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexAttributesForPolygon_Statics::NewProp_PerimeterVertexAttributeLists,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexAttributesForPolygon_Statics::NewProp_PerimeterVertexAttributeLists_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexAttributesForPolygon_Statics::NewProp_PolygonID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVertexAttributesForPolygon_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EditableMesh,
		nullptr,
		&NewStructOps,
		"VertexAttributesForPolygon",
		sizeof(FVertexAttributesForPolygon),
		alignof(FVertexAttributesForPolygon),
		Z_Construct_UScriptStruct_FVertexAttributesForPolygon_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexAttributesForPolygon_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVertexAttributesForPolygon_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexAttributesForPolygon_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVertexAttributesForPolygon()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FVertexAttributesForPolygon_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_EditableMesh();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("VertexAttributesForPolygon"), sizeof(FVertexAttributesForPolygon), Get_Z_Construct_UScriptStruct_FVertexAttributesForPolygon_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FVertexAttributesForPolygon_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVertexAttributesForPolygon_Hash() { return 3154127617U; }
class UScriptStruct* FVertexAttributesForPolygonHole::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern EDITABLEMESH_API uint32 Get_Z_Construct_UScriptStruct_FVertexAttributesForPolygonHole_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FVertexAttributesForPolygonHole, Z_Construct_UPackage__Script_EditableMesh(), TEXT("VertexAttributesForPolygonHole"), sizeof(FVertexAttributesForPolygonHole), Get_Z_Construct_UScriptStruct_FVertexAttributesForPolygonHole_Hash());
	}
	return Singleton;
}
template<> EDITABLEMESH_API UScriptStruct* StaticStruct<FVertexAttributesForPolygonHole>()
{
	return FVertexAttributesForPolygonHole::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FVertexAttributesForPolygonHole(FVertexAttributesForPolygonHole::StaticStruct, TEXT("/Script/EditableMesh"), TEXT("VertexAttributesForPolygonHole"), false, nullptr, nullptr);
static struct FScriptStruct_EditableMesh_StaticRegisterNativesFVertexAttributesForPolygonHole
{
	FScriptStruct_EditableMesh_StaticRegisterNativesFVertexAttributesForPolygonHole()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("VertexAttributesForPolygonHole")),new UScriptStruct::TCppStructOps<FVertexAttributesForPolygonHole>);
	}
} ScriptStruct_EditableMesh_StaticRegisterNativesFVertexAttributesForPolygonHole;
	struct Z_Construct_UScriptStruct_FVertexAttributesForPolygonHole_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VertexAttributeList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_VertexAttributeList;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VertexAttributeList_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexAttributesForPolygonHole_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/EditableMeshTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVertexAttributesForPolygonHole_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVertexAttributesForPolygonHole>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexAttributesForPolygonHole_Statics::NewProp_VertexAttributeList_MetaData[] = {
		{ "Category", "Editable Mesh" },
		{ "Comment", "/** For each hole vertex, a list of attributes for that vertex.  You can leave a given array empty for \n\x09    a specific hole index if you don't want to set attributes for select holes. */" },
		{ "ModuleRelativePath", "Public/EditableMeshTypes.h" },
		{ "ToolTip", "For each hole vertex, a list of attributes for that vertex.  You can leave a given array empty for\n          a specific hole index if you don't want to set attributes for select holes." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FVertexAttributesForPolygonHole_Statics::NewProp_VertexAttributeList = { "VertexAttributeList", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVertexAttributesForPolygonHole, VertexAttributeList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FVertexAttributesForPolygonHole_Statics::NewProp_VertexAttributeList_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexAttributesForPolygonHole_Statics::NewProp_VertexAttributeList_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVertexAttributesForPolygonHole_Statics::NewProp_VertexAttributeList_Inner = { "VertexAttributeList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FMeshElementAttributeList, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVertexAttributesForPolygonHole_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexAttributesForPolygonHole_Statics::NewProp_VertexAttributeList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexAttributesForPolygonHole_Statics::NewProp_VertexAttributeList_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVertexAttributesForPolygonHole_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EditableMesh,
		nullptr,
		&NewStructOps,
		"VertexAttributesForPolygonHole",
		sizeof(FVertexAttributesForPolygonHole),
		alignof(FVertexAttributesForPolygonHole),
		Z_Construct_UScriptStruct_FVertexAttributesForPolygonHole_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexAttributesForPolygonHole_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVertexAttributesForPolygonHole_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexAttributesForPolygonHole_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVertexAttributesForPolygonHole()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FVertexAttributesForPolygonHole_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_EditableMesh();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("VertexAttributesForPolygonHole"), sizeof(FVertexAttributesForPolygonHole), Get_Z_Construct_UScriptStruct_FVertexAttributesForPolygonHole_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FVertexAttributesForPolygonHole_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVertexAttributesForPolygonHole_Hash() { return 961819051U; }
class UScriptStruct* FAttributesForEdge::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern EDITABLEMESH_API uint32 Get_Z_Construct_UScriptStruct_FAttributesForEdge_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAttributesForEdge, Z_Construct_UPackage__Script_EditableMesh(), TEXT("AttributesForEdge"), sizeof(FAttributesForEdge), Get_Z_Construct_UScriptStruct_FAttributesForEdge_Hash());
	}
	return Singleton;
}
template<> EDITABLEMESH_API UScriptStruct* StaticStruct<FAttributesForEdge>()
{
	return FAttributesForEdge::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAttributesForEdge(FAttributesForEdge::StaticStruct, TEXT("/Script/EditableMesh"), TEXT("AttributesForEdge"), false, nullptr, nullptr);
static struct FScriptStruct_EditableMesh_StaticRegisterNativesFAttributesForEdge
{
	FScriptStruct_EditableMesh_StaticRegisterNativesFAttributesForEdge()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AttributesForEdge")),new UScriptStruct::TCppStructOps<FAttributesForEdge>);
	}
} ScriptStruct_EditableMesh_StaticRegisterNativesFAttributesForEdge;
	struct Z_Construct_UScriptStruct_FAttributesForEdge_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EdgeAttributes_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EdgeAttributes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EdgeID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EdgeID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttributesForEdge_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/EditableMeshTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAttributesForEdge_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAttributesForEdge>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttributesForEdge_Statics::NewProp_EdgeAttributes_MetaData[] = {
		{ "Category", "Editable Mesh" },
		{ "Comment", "/** A list of attributes to set for the edge */" },
		{ "ModuleRelativePath", "Public/EditableMeshTypes.h" },
		{ "ToolTip", "A list of attributes to set for the edge" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAttributesForEdge_Statics::NewProp_EdgeAttributes = { "EdgeAttributes", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAttributesForEdge, EdgeAttributes), Z_Construct_UScriptStruct_FMeshElementAttributeList, METADATA_PARAMS(Z_Construct_UScriptStruct_FAttributesForEdge_Statics::NewProp_EdgeAttributes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttributesForEdge_Statics::NewProp_EdgeAttributes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttributesForEdge_Statics::NewProp_EdgeID_MetaData[] = {
		{ "Category", "Editable Mesh" },
		{ "Comment", "/** The edge ID to set attributes on */" },
		{ "ModuleRelativePath", "Public/EditableMeshTypes.h" },
		{ "ToolTip", "The edge ID to set attributes on" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAttributesForEdge_Statics::NewProp_EdgeID = { "EdgeID", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAttributesForEdge, EdgeID), Z_Construct_UScriptStruct_FEdgeID, METADATA_PARAMS(Z_Construct_UScriptStruct_FAttributesForEdge_Statics::NewProp_EdgeID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttributesForEdge_Statics::NewProp_EdgeID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAttributesForEdge_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttributesForEdge_Statics::NewProp_EdgeAttributes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttributesForEdge_Statics::NewProp_EdgeID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAttributesForEdge_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EditableMesh,
		nullptr,
		&NewStructOps,
		"AttributesForEdge",
		sizeof(FAttributesForEdge),
		alignof(FAttributesForEdge),
		Z_Construct_UScriptStruct_FAttributesForEdge_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttributesForEdge_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAttributesForEdge_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttributesForEdge_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAttributesForEdge()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAttributesForEdge_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_EditableMesh();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AttributesForEdge"), sizeof(FAttributesForEdge), Get_Z_Construct_UScriptStruct_FAttributesForEdge_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAttributesForEdge_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAttributesForEdge_Hash() { return 3272936952U; }
class UScriptStruct* FAttributesForVertexInstance::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern EDITABLEMESH_API uint32 Get_Z_Construct_UScriptStruct_FAttributesForVertexInstance_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAttributesForVertexInstance, Z_Construct_UPackage__Script_EditableMesh(), TEXT("AttributesForVertexInstance"), sizeof(FAttributesForVertexInstance), Get_Z_Construct_UScriptStruct_FAttributesForVertexInstance_Hash());
	}
	return Singleton;
}
template<> EDITABLEMESH_API UScriptStruct* StaticStruct<FAttributesForVertexInstance>()
{
	return FAttributesForVertexInstance::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAttributesForVertexInstance(FAttributesForVertexInstance::StaticStruct, TEXT("/Script/EditableMesh"), TEXT("AttributesForVertexInstance"), false, nullptr, nullptr);
static struct FScriptStruct_EditableMesh_StaticRegisterNativesFAttributesForVertexInstance
{
	FScriptStruct_EditableMesh_StaticRegisterNativesFAttributesForVertexInstance()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AttributesForVertexInstance")),new UScriptStruct::TCppStructOps<FAttributesForVertexInstance>);
	}
} ScriptStruct_EditableMesh_StaticRegisterNativesFAttributesForVertexInstance;
	struct Z_Construct_UScriptStruct_FAttributesForVertexInstance_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VertexInstanceAttributes_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VertexInstanceAttributes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VertexInstanceID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VertexInstanceID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttributesForVertexInstance_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/EditableMeshTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAttributesForVertexInstance_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAttributesForVertexInstance>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttributesForVertexInstance_Statics::NewProp_VertexInstanceAttributes_MetaData[] = {
		{ "Category", "Editable Mesh" },
		{ "Comment", "/** A list of attributes to set for the vertex instance */" },
		{ "ModuleRelativePath", "Public/EditableMeshTypes.h" },
		{ "ToolTip", "A list of attributes to set for the vertex instance" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAttributesForVertexInstance_Statics::NewProp_VertexInstanceAttributes = { "VertexInstanceAttributes", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAttributesForVertexInstance, VertexInstanceAttributes), Z_Construct_UScriptStruct_FMeshElementAttributeList, METADATA_PARAMS(Z_Construct_UScriptStruct_FAttributesForVertexInstance_Statics::NewProp_VertexInstanceAttributes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttributesForVertexInstance_Statics::NewProp_VertexInstanceAttributes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttributesForVertexInstance_Statics::NewProp_VertexInstanceID_MetaData[] = {
		{ "Category", "Editable Mesh" },
		{ "Comment", "/** The vertex instance ID to set attributes on */" },
		{ "ModuleRelativePath", "Public/EditableMeshTypes.h" },
		{ "ToolTip", "The vertex instance ID to set attributes on" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAttributesForVertexInstance_Statics::NewProp_VertexInstanceID = { "VertexInstanceID", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAttributesForVertexInstance, VertexInstanceID), Z_Construct_UScriptStruct_FVertexInstanceID, METADATA_PARAMS(Z_Construct_UScriptStruct_FAttributesForVertexInstance_Statics::NewProp_VertexInstanceID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttributesForVertexInstance_Statics::NewProp_VertexInstanceID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAttributesForVertexInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttributesForVertexInstance_Statics::NewProp_VertexInstanceAttributes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttributesForVertexInstance_Statics::NewProp_VertexInstanceID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAttributesForVertexInstance_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EditableMesh,
		nullptr,
		&NewStructOps,
		"AttributesForVertexInstance",
		sizeof(FAttributesForVertexInstance),
		alignof(FAttributesForVertexInstance),
		Z_Construct_UScriptStruct_FAttributesForVertexInstance_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttributesForVertexInstance_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAttributesForVertexInstance_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttributesForVertexInstance_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAttributesForVertexInstance()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAttributesForVertexInstance_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_EditableMesh();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AttributesForVertexInstance"), sizeof(FAttributesForVertexInstance), Get_Z_Construct_UScriptStruct_FAttributesForVertexInstance_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAttributesForVertexInstance_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAttributesForVertexInstance_Hash() { return 468511885U; }
class UScriptStruct* FAttributesForVertex::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern EDITABLEMESH_API uint32 Get_Z_Construct_UScriptStruct_FAttributesForVertex_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAttributesForVertex, Z_Construct_UPackage__Script_EditableMesh(), TEXT("AttributesForVertex"), sizeof(FAttributesForVertex), Get_Z_Construct_UScriptStruct_FAttributesForVertex_Hash());
	}
	return Singleton;
}
template<> EDITABLEMESH_API UScriptStruct* StaticStruct<FAttributesForVertex>()
{
	return FAttributesForVertex::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAttributesForVertex(FAttributesForVertex::StaticStruct, TEXT("/Script/EditableMesh"), TEXT("AttributesForVertex"), false, nullptr, nullptr);
static struct FScriptStruct_EditableMesh_StaticRegisterNativesFAttributesForVertex
{
	FScriptStruct_EditableMesh_StaticRegisterNativesFAttributesForVertex()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AttributesForVertex")),new UScriptStruct::TCppStructOps<FAttributesForVertex>);
	}
} ScriptStruct_EditableMesh_StaticRegisterNativesFAttributesForVertex;
	struct Z_Construct_UScriptStruct_FAttributesForVertex_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VertexAttributes_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VertexAttributes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VertexID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VertexID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttributesForVertex_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/EditableMeshTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAttributesForVertex_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAttributesForVertex>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttributesForVertex_Statics::NewProp_VertexAttributes_MetaData[] = {
		{ "Category", "Editable Mesh" },
		{ "Comment", "/** A list of attributes to set for the vertex */" },
		{ "ModuleRelativePath", "Public/EditableMeshTypes.h" },
		{ "ToolTip", "A list of attributes to set for the vertex" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAttributesForVertex_Statics::NewProp_VertexAttributes = { "VertexAttributes", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAttributesForVertex, VertexAttributes), Z_Construct_UScriptStruct_FMeshElementAttributeList, METADATA_PARAMS(Z_Construct_UScriptStruct_FAttributesForVertex_Statics::NewProp_VertexAttributes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttributesForVertex_Statics::NewProp_VertexAttributes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttributesForVertex_Statics::NewProp_VertexID_MetaData[] = {
		{ "Category", "Editable Mesh" },
		{ "Comment", "/** The vertex ID to set attributes on */" },
		{ "ModuleRelativePath", "Public/EditableMeshTypes.h" },
		{ "ToolTip", "The vertex ID to set attributes on" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAttributesForVertex_Statics::NewProp_VertexID = { "VertexID", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAttributesForVertex, VertexID), Z_Construct_UScriptStruct_FVertexID, METADATA_PARAMS(Z_Construct_UScriptStruct_FAttributesForVertex_Statics::NewProp_VertexID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttributesForVertex_Statics::NewProp_VertexID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAttributesForVertex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttributesForVertex_Statics::NewProp_VertexAttributes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttributesForVertex_Statics::NewProp_VertexID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAttributesForVertex_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EditableMesh,
		nullptr,
		&NewStructOps,
		"AttributesForVertex",
		sizeof(FAttributesForVertex),
		alignof(FAttributesForVertex),
		Z_Construct_UScriptStruct_FAttributesForVertex_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttributesForVertex_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAttributesForVertex_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttributesForVertex_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAttributesForVertex()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAttributesForVertex_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_EditableMesh();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AttributesForVertex"), sizeof(FAttributesForVertex), Get_Z_Construct_UScriptStruct_FAttributesForVertex_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAttributesForVertex_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAttributesForVertex_Hash() { return 2843759123U; }
class UScriptStruct* FPolygonToSplit::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern EDITABLEMESH_API uint32 Get_Z_Construct_UScriptStruct_FPolygonToSplit_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPolygonToSplit, Z_Construct_UPackage__Script_EditableMesh(), TEXT("PolygonToSplit"), sizeof(FPolygonToSplit), Get_Z_Construct_UScriptStruct_FPolygonToSplit_Hash());
	}
	return Singleton;
}
template<> EDITABLEMESH_API UScriptStruct* StaticStruct<FPolygonToSplit>()
{
	return FPolygonToSplit::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPolygonToSplit(FPolygonToSplit::StaticStruct, TEXT("/Script/EditableMesh"), TEXT("PolygonToSplit"), false, nullptr, nullptr);
static struct FScriptStruct_EditableMesh_StaticRegisterNativesFPolygonToSplit
{
	FScriptStruct_EditableMesh_StaticRegisterNativesFPolygonToSplit()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PolygonToSplit")),new UScriptStruct::TCppStructOps<FPolygonToSplit>);
	}
} ScriptStruct_EditableMesh_StaticRegisterNativesFPolygonToSplit;
	struct Z_Construct_UScriptStruct_FPolygonToSplit_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VertexPairsToSplitAt_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_VertexPairsToSplitAt;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VertexPairsToSplitAt_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PolygonID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PolygonID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPolygonToSplit_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/EditableMeshTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPolygonToSplit_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPolygonToSplit>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPolygonToSplit_Statics::NewProp_VertexPairsToSplitAt_MetaData[] = {
		{ "Category", "Editable Mesh" },
		{ "Comment", "/** A list of pairs of vertices that new edges will be created at.  The pairs must be ordered, and the vertices\n\x09    must already exist and be connected to the polygon */" },
		{ "ModuleRelativePath", "Public/EditableMeshTypes.h" },
		{ "ToolTip", "A list of pairs of vertices that new edges will be created at.  The pairs must be ordered, and the vertices\n          must already exist and be connected to the polygon" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPolygonToSplit_Statics::NewProp_VertexPairsToSplitAt = { "VertexPairsToSplitAt", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPolygonToSplit, VertexPairsToSplitAt), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FPolygonToSplit_Statics::NewProp_VertexPairsToSplitAt_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPolygonToSplit_Statics::NewProp_VertexPairsToSplitAt_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPolygonToSplit_Statics::NewProp_VertexPairsToSplitAt_Inner = { "VertexPairsToSplitAt", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVertexPair, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPolygonToSplit_Statics::NewProp_PolygonID_MetaData[] = {
		{ "Category", "Editable Mesh" },
		{ "Comment", "/** The polygon that we'll be splitting */" },
		{ "ModuleRelativePath", "Public/EditableMeshTypes.h" },
		{ "ToolTip", "The polygon that we'll be splitting" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPolygonToSplit_Statics::NewProp_PolygonID = { "PolygonID", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPolygonToSplit, PolygonID), Z_Construct_UScriptStruct_FPolygonID, METADATA_PARAMS(Z_Construct_UScriptStruct_FPolygonToSplit_Statics::NewProp_PolygonID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPolygonToSplit_Statics::NewProp_PolygonID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPolygonToSplit_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPolygonToSplit_Statics::NewProp_VertexPairsToSplitAt,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPolygonToSplit_Statics::NewProp_VertexPairsToSplitAt_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPolygonToSplit_Statics::NewProp_PolygonID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPolygonToSplit_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EditableMesh,
		nullptr,
		&NewStructOps,
		"PolygonToSplit",
		sizeof(FPolygonToSplit),
		alignof(FPolygonToSplit),
		Z_Construct_UScriptStruct_FPolygonToSplit_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPolygonToSplit_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPolygonToSplit_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPolygonToSplit_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPolygonToSplit()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPolygonToSplit_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_EditableMesh();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PolygonToSplit"), sizeof(FPolygonToSplit), Get_Z_Construct_UScriptStruct_FPolygonToSplit_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPolygonToSplit_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPolygonToSplit_Hash() { return 386854075U; }
class UScriptStruct* FVertexPair::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern EDITABLEMESH_API uint32 Get_Z_Construct_UScriptStruct_FVertexPair_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FVertexPair, Z_Construct_UPackage__Script_EditableMesh(), TEXT("VertexPair"), sizeof(FVertexPair), Get_Z_Construct_UScriptStruct_FVertexPair_Hash());
	}
	return Singleton;
}
template<> EDITABLEMESH_API UScriptStruct* StaticStruct<FVertexPair>()
{
	return FVertexPair::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FVertexPair(FVertexPair::StaticStruct, TEXT("/Script/EditableMesh"), TEXT("VertexPair"), false, nullptr, nullptr);
static struct FScriptStruct_EditableMesh_StaticRegisterNativesFVertexPair
{
	FScriptStruct_EditableMesh_StaticRegisterNativesFVertexPair()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("VertexPair")),new UScriptStruct::TCppStructOps<FVertexPair>);
	}
} ScriptStruct_EditableMesh_StaticRegisterNativesFVertexPair;
	struct Z_Construct_UScriptStruct_FVertexPair_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VertexID1_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VertexID1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VertexID0_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VertexID0;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexPair_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/EditableMeshTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVertexPair_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVertexPair>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexPair_Statics::NewProp_VertexID1_MetaData[] = {
		{ "Category", "Editable Mesh" },
		{ "Comment", "/** The second vertex ID in this pair */" },
		{ "ModuleRelativePath", "Public/EditableMeshTypes.h" },
		{ "ToolTip", "The second vertex ID in this pair" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVertexPair_Statics::NewProp_VertexID1 = { "VertexID1", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVertexPair, VertexID1), Z_Construct_UScriptStruct_FVertexID, METADATA_PARAMS(Z_Construct_UScriptStruct_FVertexPair_Statics::NewProp_VertexID1_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexPair_Statics::NewProp_VertexID1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexPair_Statics::NewProp_VertexID0_MetaData[] = {
		{ "Category", "Editable Mesh" },
		{ "Comment", "/** The first vertex ID in this pair */" },
		{ "ModuleRelativePath", "Public/EditableMeshTypes.h" },
		{ "ToolTip", "The first vertex ID in this pair" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVertexPair_Statics::NewProp_VertexID0 = { "VertexID0", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVertexPair, VertexID0), Z_Construct_UScriptStruct_FVertexID, METADATA_PARAMS(Z_Construct_UScriptStruct_FVertexPair_Statics::NewProp_VertexID0_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexPair_Statics::NewProp_VertexID0_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVertexPair_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexPair_Statics::NewProp_VertexID1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexPair_Statics::NewProp_VertexID0,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVertexPair_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EditableMesh,
		nullptr,
		&NewStructOps,
		"VertexPair",
		sizeof(FVertexPair),
		alignof(FVertexPair),
		Z_Construct_UScriptStruct_FVertexPair_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexPair_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVertexPair_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexPair_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVertexPair()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FVertexPair_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_EditableMesh();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("VertexPair"), sizeof(FVertexPair), Get_Z_Construct_UScriptStruct_FVertexPair_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FVertexPair_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVertexPair_Hash() { return 1983390864U; }
class UScriptStruct* FPolygonToCreate::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern EDITABLEMESH_API uint32 Get_Z_Construct_UScriptStruct_FPolygonToCreate_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPolygonToCreate, Z_Construct_UPackage__Script_EditableMesh(), TEXT("PolygonToCreate"), sizeof(FPolygonToCreate), Get_Z_Construct_UScriptStruct_FPolygonToCreate_Hash());
	}
	return Singleton;
}
template<> EDITABLEMESH_API UScriptStruct* StaticStruct<FPolygonToCreate>()
{
	return FPolygonToCreate::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPolygonToCreate(FPolygonToCreate::StaticStruct, TEXT("/Script/EditableMesh"), TEXT("PolygonToCreate"), false, nullptr, nullptr);
static struct FScriptStruct_EditableMesh_StaticRegisterNativesFPolygonToCreate
{
	FScriptStruct_EditableMesh_StaticRegisterNativesFPolygonToCreate()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PolygonToCreate")),new UScriptStruct::TCppStructOps<FPolygonToCreate>);
	}
} ScriptStruct_EditableMesh_StaticRegisterNativesFPolygonToCreate;
	struct Z_Construct_UScriptStruct_FPolygonToCreate_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PolygonEdgeHardness_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PolygonEdgeHardness;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PolygonEdgeHardness_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OriginalPolygonID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OriginalPolygonID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PerimeterVertices_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PerimeterVertices;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PerimeterVertices_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PolygonGroupID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PolygonGroupID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPolygonToCreate_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/EditableMeshTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPolygonToCreate_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPolygonToCreate>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPolygonToCreate_Statics::NewProp_PolygonEdgeHardness_MetaData[] = {
		{ "Category", "Editable Mesh" },
		{ "Comment", "/** Whether to create a hard-edged polygon */" },
		{ "ModuleRelativePath", "Public/EditableMeshTypes.h" },
		{ "ToolTip", "Whether to create a hard-edged polygon" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPolygonToCreate_Statics::NewProp_PolygonEdgeHardness = { "PolygonEdgeHardness", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPolygonToCreate, PolygonEdgeHardness), Z_Construct_UEnum_EditableMesh_EPolygonEdgeHardness, METADATA_PARAMS(Z_Construct_UScriptStruct_FPolygonToCreate_Statics::NewProp_PolygonEdgeHardness_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPolygonToCreate_Statics::NewProp_PolygonEdgeHardness_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPolygonToCreate_Statics::NewProp_PolygonEdgeHardness_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPolygonToCreate_Statics::NewProp_OriginalPolygonID_MetaData[] = {
		{ "Category", "Editable Mesh" },
		{ "Comment", "/** The original ID of the polygon.  Should only be used by the undo system. */" },
		{ "ModuleRelativePath", "Public/EditableMeshTypes.h" },
		{ "ToolTip", "The original ID of the polygon.  Should only be used by the undo system." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPolygonToCreate_Statics::NewProp_OriginalPolygonID = { "OriginalPolygonID", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPolygonToCreate, OriginalPolygonID), Z_Construct_UScriptStruct_FPolygonID, METADATA_PARAMS(Z_Construct_UScriptStruct_FPolygonToCreate_Statics::NewProp_OriginalPolygonID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPolygonToCreate_Statics::NewProp_OriginalPolygonID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPolygonToCreate_Statics::NewProp_PerimeterVertices_MetaData[] = {
		{ "Category", "Editable Mesh" },
		{ "Comment", "/** Ordered list of vertices that defines the polygon's perimeter, along with the polygon vertex attributes to set for each vertex */" },
		{ "ModuleRelativePath", "Public/EditableMeshTypes.h" },
		{ "ToolTip", "Ordered list of vertices that defines the polygon's perimeter, along with the polygon vertex attributes to set for each vertex" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPolygonToCreate_Statics::NewProp_PerimeterVertices = { "PerimeterVertices", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPolygonToCreate, PerimeterVertices), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FPolygonToCreate_Statics::NewProp_PerimeterVertices_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPolygonToCreate_Statics::NewProp_PerimeterVertices_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPolygonToCreate_Statics::NewProp_PerimeterVertices_Inner = { "PerimeterVertices", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVertexAndAttributes, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPolygonToCreate_Statics::NewProp_PolygonGroupID_MetaData[] = {
		{ "Category", "Editable Mesh" },
		{ "Comment", "/** The group the polygon will be added to */" },
		{ "ModuleRelativePath", "Public/EditableMeshTypes.h" },
		{ "ToolTip", "The group the polygon will be added to" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPolygonToCreate_Statics::NewProp_PolygonGroupID = { "PolygonGroupID", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPolygonToCreate, PolygonGroupID), Z_Construct_UScriptStruct_FPolygonGroupID, METADATA_PARAMS(Z_Construct_UScriptStruct_FPolygonToCreate_Statics::NewProp_PolygonGroupID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPolygonToCreate_Statics::NewProp_PolygonGroupID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPolygonToCreate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPolygonToCreate_Statics::NewProp_PolygonEdgeHardness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPolygonToCreate_Statics::NewProp_PolygonEdgeHardness_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPolygonToCreate_Statics::NewProp_OriginalPolygonID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPolygonToCreate_Statics::NewProp_PerimeterVertices,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPolygonToCreate_Statics::NewProp_PerimeterVertices_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPolygonToCreate_Statics::NewProp_PolygonGroupID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPolygonToCreate_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EditableMesh,
		nullptr,
		&NewStructOps,
		"PolygonToCreate",
		sizeof(FPolygonToCreate),
		alignof(FPolygonToCreate),
		Z_Construct_UScriptStruct_FPolygonToCreate_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPolygonToCreate_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPolygonToCreate_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPolygonToCreate_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPolygonToCreate()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPolygonToCreate_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_EditableMesh();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PolygonToCreate"), sizeof(FPolygonToCreate), Get_Z_Construct_UScriptStruct_FPolygonToCreate_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPolygonToCreate_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPolygonToCreate_Hash() { return 1430149207U; }
class UScriptStruct* FVertexAndAttributes::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern EDITABLEMESH_API uint32 Get_Z_Construct_UScriptStruct_FVertexAndAttributes_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FVertexAndAttributes, Z_Construct_UPackage__Script_EditableMesh(), TEXT("VertexAndAttributes"), sizeof(FVertexAndAttributes), Get_Z_Construct_UScriptStruct_FVertexAndAttributes_Hash());
	}
	return Singleton;
}
template<> EDITABLEMESH_API UScriptStruct* StaticStruct<FVertexAndAttributes>()
{
	return FVertexAndAttributes::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FVertexAndAttributes(FVertexAndAttributes::StaticStruct, TEXT("/Script/EditableMesh"), TEXT("VertexAndAttributes"), false, nullptr, nullptr);
static struct FScriptStruct_EditableMesh_StaticRegisterNativesFVertexAndAttributes
{
	FScriptStruct_EditableMesh_StaticRegisterNativesFVertexAndAttributes()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("VertexAndAttributes")),new UScriptStruct::TCppStructOps<FVertexAndAttributes>);
	}
} ScriptStruct_EditableMesh_StaticRegisterNativesFVertexAndAttributes;
	struct Z_Construct_UScriptStruct_FVertexAndAttributes_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PolygonVertexAttributes_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PolygonVertexAttributes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VertexID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VertexID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VertexInstanceID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VertexInstanceID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexAndAttributes_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/EditableMeshTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVertexAndAttributes_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVertexAndAttributes>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexAndAttributes_Statics::NewProp_PolygonVertexAttributes_MetaData[] = {
		{ "Category", "Editable Mesh" },
		{ "Comment", "/** A list of polygon attributes to set for the vertex on the polygon we're inserting it into, if no valid vertex instance ID was supplied. */" },
		{ "ModuleRelativePath", "Public/EditableMeshTypes.h" },
		{ "ToolTip", "A list of polygon attributes to set for the vertex on the polygon we're inserting it into, if no valid vertex instance ID was supplied." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVertexAndAttributes_Statics::NewProp_PolygonVertexAttributes = { "PolygonVertexAttributes", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVertexAndAttributes, PolygonVertexAttributes), Z_Construct_UScriptStruct_FMeshElementAttributeList, METADATA_PARAMS(Z_Construct_UScriptStruct_FVertexAndAttributes_Statics::NewProp_PolygonVertexAttributes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexAndAttributes_Statics::NewProp_PolygonVertexAttributes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexAndAttributes_Statics::NewProp_VertexID_MetaData[] = {
		{ "Category", "Editable Mesh" },
		{ "Comment", "/** The vertex ID to insert into the polygon, if no valid vertex instance ID was supplied. */" },
		{ "ModuleRelativePath", "Public/EditableMeshTypes.h" },
		{ "ToolTip", "The vertex ID to insert into the polygon, if no valid vertex instance ID was supplied." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVertexAndAttributes_Statics::NewProp_VertexID = { "VertexID", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVertexAndAttributes, VertexID), Z_Construct_UScriptStruct_FVertexID, METADATA_PARAMS(Z_Construct_UScriptStruct_FVertexAndAttributes_Statics::NewProp_VertexID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexAndAttributes_Statics::NewProp_VertexID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexAndAttributes_Statics::NewProp_VertexInstanceID_MetaData[] = {
		{ "Category", "Editable Mesh" },
		{ "Comment", "/** The vertex instance ID to insert into the polygon, or FVertexInstanceID::Invalid to create a new vertex instance with the given attributes */" },
		{ "ModuleRelativePath", "Public/EditableMeshTypes.h" },
		{ "ToolTip", "The vertex instance ID to insert into the polygon, or FVertexInstanceID::Invalid to create a new vertex instance with the given attributes" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVertexAndAttributes_Statics::NewProp_VertexInstanceID = { "VertexInstanceID", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVertexAndAttributes, VertexInstanceID), Z_Construct_UScriptStruct_FVertexInstanceID, METADATA_PARAMS(Z_Construct_UScriptStruct_FVertexAndAttributes_Statics::NewProp_VertexInstanceID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexAndAttributes_Statics::NewProp_VertexInstanceID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVertexAndAttributes_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexAndAttributes_Statics::NewProp_PolygonVertexAttributes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexAndAttributes_Statics::NewProp_VertexID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexAndAttributes_Statics::NewProp_VertexInstanceID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVertexAndAttributes_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EditableMesh,
		nullptr,
		&NewStructOps,
		"VertexAndAttributes",
		sizeof(FVertexAndAttributes),
		alignof(FVertexAndAttributes),
		Z_Construct_UScriptStruct_FVertexAndAttributes_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexAndAttributes_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVertexAndAttributes_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexAndAttributes_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVertexAndAttributes()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FVertexAndAttributes_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_EditableMesh();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("VertexAndAttributes"), sizeof(FVertexAndAttributes), Get_Z_Construct_UScriptStruct_FVertexAndAttributes_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FVertexAndAttributes_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVertexAndAttributes_Hash() { return 2995994023U; }
class UScriptStruct* FEdgeToCreate::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern EDITABLEMESH_API uint32 Get_Z_Construct_UScriptStruct_FEdgeToCreate_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEdgeToCreate, Z_Construct_UPackage__Script_EditableMesh(), TEXT("EdgeToCreate"), sizeof(FEdgeToCreate), Get_Z_Construct_UScriptStruct_FEdgeToCreate_Hash());
	}
	return Singleton;
}
template<> EDITABLEMESH_API UScriptStruct* StaticStruct<FEdgeToCreate>()
{
	return FEdgeToCreate::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEdgeToCreate(FEdgeToCreate::StaticStruct, TEXT("/Script/EditableMesh"), TEXT("EdgeToCreate"), false, nullptr, nullptr);
static struct FScriptStruct_EditableMesh_StaticRegisterNativesFEdgeToCreate
{
	FScriptStruct_EditableMesh_StaticRegisterNativesFEdgeToCreate()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("EdgeToCreate")),new UScriptStruct::TCppStructOps<FEdgeToCreate>);
	}
} ScriptStruct_EditableMesh_StaticRegisterNativesFEdgeToCreate;
	struct Z_Construct_UScriptStruct_FEdgeToCreate_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OriginalEdgeID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OriginalEdgeID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EdgeAttributes_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EdgeAttributes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VertexID1_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VertexID1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VertexID0_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VertexID0;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEdgeToCreate_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/EditableMeshTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEdgeToCreate_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEdgeToCreate>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEdgeToCreate_Statics::NewProp_OriginalEdgeID_MetaData[] = {
		{ "Category", "Editable Mesh" },
		{ "Comment", "/** The original ID of the edge.  Should only be used by the undo system. */" },
		{ "ModuleRelativePath", "Public/EditableMeshTypes.h" },
		{ "ToolTip", "The original ID of the edge.  Should only be used by the undo system." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEdgeToCreate_Statics::NewProp_OriginalEdgeID = { "OriginalEdgeID", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEdgeToCreate, OriginalEdgeID), Z_Construct_UScriptStruct_FEdgeID, METADATA_PARAMS(Z_Construct_UScriptStruct_FEdgeToCreate_Statics::NewProp_OriginalEdgeID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEdgeToCreate_Statics::NewProp_OriginalEdgeID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEdgeToCreate_Statics::NewProp_EdgeAttributes_MetaData[] = {
		{ "Category", "Editable Mesh" },
		{ "Comment", "/** Attributes of this edge itself */" },
		{ "ModuleRelativePath", "Public/EditableMeshTypes.h" },
		{ "ToolTip", "Attributes of this edge itself" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEdgeToCreate_Statics::NewProp_EdgeAttributes = { "EdgeAttributes", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEdgeToCreate, EdgeAttributes), Z_Construct_UScriptStruct_FMeshElementAttributeList, METADATA_PARAMS(Z_Construct_UScriptStruct_FEdgeToCreate_Statics::NewProp_EdgeAttributes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEdgeToCreate_Statics::NewProp_EdgeAttributes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEdgeToCreate_Statics::NewProp_VertexID1_MetaData[] = {
		{ "Category", "Editable Mesh" },
		{ "Comment", "/** The second vertex this edge connects */" },
		{ "ModuleRelativePath", "Public/EditableMeshTypes.h" },
		{ "ToolTip", "The second vertex this edge connects" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEdgeToCreate_Statics::NewProp_VertexID1 = { "VertexID1", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEdgeToCreate, VertexID1), Z_Construct_UScriptStruct_FVertexID, METADATA_PARAMS(Z_Construct_UScriptStruct_FEdgeToCreate_Statics::NewProp_VertexID1_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEdgeToCreate_Statics::NewProp_VertexID1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEdgeToCreate_Statics::NewProp_VertexID0_MetaData[] = {
		{ "Category", "Editable Mesh" },
		{ "Comment", "/** The first vertex this edge connects */" },
		{ "ModuleRelativePath", "Public/EditableMeshTypes.h" },
		{ "ToolTip", "The first vertex this edge connects" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEdgeToCreate_Statics::NewProp_VertexID0 = { "VertexID0", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEdgeToCreate, VertexID0), Z_Construct_UScriptStruct_FVertexID, METADATA_PARAMS(Z_Construct_UScriptStruct_FEdgeToCreate_Statics::NewProp_VertexID0_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEdgeToCreate_Statics::NewProp_VertexID0_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEdgeToCreate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEdgeToCreate_Statics::NewProp_OriginalEdgeID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEdgeToCreate_Statics::NewProp_EdgeAttributes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEdgeToCreate_Statics::NewProp_VertexID1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEdgeToCreate_Statics::NewProp_VertexID0,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEdgeToCreate_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EditableMesh,
		nullptr,
		&NewStructOps,
		"EdgeToCreate",
		sizeof(FEdgeToCreate),
		alignof(FEdgeToCreate),
		Z_Construct_UScriptStruct_FEdgeToCreate_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEdgeToCreate_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEdgeToCreate_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEdgeToCreate_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEdgeToCreate()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEdgeToCreate_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_EditableMesh();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EdgeToCreate"), sizeof(FEdgeToCreate), Get_Z_Construct_UScriptStruct_FEdgeToCreate_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FEdgeToCreate_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEdgeToCreate_Hash() { return 2378938455U; }
class UScriptStruct* FVertexInstanceToCreate::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern EDITABLEMESH_API uint32 Get_Z_Construct_UScriptStruct_FVertexInstanceToCreate_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FVertexInstanceToCreate, Z_Construct_UPackage__Script_EditableMesh(), TEXT("VertexInstanceToCreate"), sizeof(FVertexInstanceToCreate), Get_Z_Construct_UScriptStruct_FVertexInstanceToCreate_Hash());
	}
	return Singleton;
}
template<> EDITABLEMESH_API UScriptStruct* StaticStruct<FVertexInstanceToCreate>()
{
	return FVertexInstanceToCreate::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FVertexInstanceToCreate(FVertexInstanceToCreate::StaticStruct, TEXT("/Script/EditableMesh"), TEXT("VertexInstanceToCreate"), false, nullptr, nullptr);
static struct FScriptStruct_EditableMesh_StaticRegisterNativesFVertexInstanceToCreate
{
	FScriptStruct_EditableMesh_StaticRegisterNativesFVertexInstanceToCreate()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("VertexInstanceToCreate")),new UScriptStruct::TCppStructOps<FVertexInstanceToCreate>);
	}
} ScriptStruct_EditableMesh_StaticRegisterNativesFVertexInstanceToCreate;
	struct Z_Construct_UScriptStruct_FVertexInstanceToCreate_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OriginalVertexInstanceID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OriginalVertexInstanceID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VertexInstanceAttributes_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VertexInstanceAttributes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VertexID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VertexID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexInstanceToCreate_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/EditableMeshTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVertexInstanceToCreate_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVertexInstanceToCreate>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexInstanceToCreate_Statics::NewProp_OriginalVertexInstanceID_MetaData[] = {
		{ "Comment", "/** The original ID of the vertex instance.  Should only be used by the undo system. */" },
		{ "ModuleRelativePath", "Public/EditableMeshTypes.h" },
		{ "ToolTip", "The original ID of the vertex instance.  Should only be used by the undo system." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVertexInstanceToCreate_Statics::NewProp_OriginalVertexInstanceID = { "OriginalVertexInstanceID", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVertexInstanceToCreate, OriginalVertexInstanceID), Z_Construct_UScriptStruct_FVertexInstanceID, METADATA_PARAMS(Z_Construct_UScriptStruct_FVertexInstanceToCreate_Statics::NewProp_OriginalVertexInstanceID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexInstanceToCreate_Statics::NewProp_OriginalVertexInstanceID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexInstanceToCreate_Statics::NewProp_VertexInstanceAttributes_MetaData[] = {
		{ "Category", "Editable Mesh" },
		{ "Comment", "/** Attributes of this vertex instance */" },
		{ "ModuleRelativePath", "Public/EditableMeshTypes.h" },
		{ "ToolTip", "Attributes of this vertex instance" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVertexInstanceToCreate_Statics::NewProp_VertexInstanceAttributes = { "VertexInstanceAttributes", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVertexInstanceToCreate, VertexInstanceAttributes), Z_Construct_UScriptStruct_FMeshElementAttributeList, METADATA_PARAMS(Z_Construct_UScriptStruct_FVertexInstanceToCreate_Statics::NewProp_VertexInstanceAttributes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexInstanceToCreate_Statics::NewProp_VertexInstanceAttributes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexInstanceToCreate_Statics::NewProp_VertexID_MetaData[] = {
		{ "Category", "Editable Mesh" },
		{ "Comment", "/** Vertex ID which is being instanced */" },
		{ "ModuleRelativePath", "Public/EditableMeshTypes.h" },
		{ "ToolTip", "Vertex ID which is being instanced" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVertexInstanceToCreate_Statics::NewProp_VertexID = { "VertexID", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVertexInstanceToCreate, VertexID), Z_Construct_UScriptStruct_FVertexID, METADATA_PARAMS(Z_Construct_UScriptStruct_FVertexInstanceToCreate_Statics::NewProp_VertexID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexInstanceToCreate_Statics::NewProp_VertexID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVertexInstanceToCreate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexInstanceToCreate_Statics::NewProp_OriginalVertexInstanceID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexInstanceToCreate_Statics::NewProp_VertexInstanceAttributes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexInstanceToCreate_Statics::NewProp_VertexID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVertexInstanceToCreate_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EditableMesh,
		nullptr,
		&NewStructOps,
		"VertexInstanceToCreate",
		sizeof(FVertexInstanceToCreate),
		alignof(FVertexInstanceToCreate),
		Z_Construct_UScriptStruct_FVertexInstanceToCreate_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexInstanceToCreate_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVertexInstanceToCreate_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexInstanceToCreate_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVertexInstanceToCreate()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FVertexInstanceToCreate_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_EditableMesh();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("VertexInstanceToCreate"), sizeof(FVertexInstanceToCreate), Get_Z_Construct_UScriptStruct_FVertexInstanceToCreate_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FVertexInstanceToCreate_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVertexInstanceToCreate_Hash() { return 3855478065U; }
class UScriptStruct* FVertexToCreate::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern EDITABLEMESH_API uint32 Get_Z_Construct_UScriptStruct_FVertexToCreate_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FVertexToCreate, Z_Construct_UPackage__Script_EditableMesh(), TEXT("VertexToCreate"), sizeof(FVertexToCreate), Get_Z_Construct_UScriptStruct_FVertexToCreate_Hash());
	}
	return Singleton;
}
template<> EDITABLEMESH_API UScriptStruct* StaticStruct<FVertexToCreate>()
{
	return FVertexToCreate::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FVertexToCreate(FVertexToCreate::StaticStruct, TEXT("/Script/EditableMesh"), TEXT("VertexToCreate"), false, nullptr, nullptr);
static struct FScriptStruct_EditableMesh_StaticRegisterNativesFVertexToCreate
{
	FScriptStruct_EditableMesh_StaticRegisterNativesFVertexToCreate()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("VertexToCreate")),new UScriptStruct::TCppStructOps<FVertexToCreate>);
	}
} ScriptStruct_EditableMesh_StaticRegisterNativesFVertexToCreate;
	struct Z_Construct_UScriptStruct_FVertexToCreate_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OriginalVertexID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OriginalVertexID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VertexAttributes_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VertexAttributes;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexToCreate_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/EditableMeshTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVertexToCreate_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVertexToCreate>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexToCreate_Statics::NewProp_OriginalVertexID_MetaData[] = {
		{ "Comment", "/** The original ID of the vertex.  Should only be used by the undo system. */" },
		{ "ModuleRelativePath", "Public/EditableMeshTypes.h" },
		{ "ToolTip", "The original ID of the vertex.  Should only be used by the undo system." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVertexToCreate_Statics::NewProp_OriginalVertexID = { "OriginalVertexID", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVertexToCreate, OriginalVertexID), Z_Construct_UScriptStruct_FVertexID, METADATA_PARAMS(Z_Construct_UScriptStruct_FVertexToCreate_Statics::NewProp_OriginalVertexID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexToCreate_Statics::NewProp_OriginalVertexID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexToCreate_Statics::NewProp_VertexAttributes_MetaData[] = {
		{ "Category", "Editable Mesh" },
		{ "Comment", "/** Attributes of this vertex itself */" },
		{ "ModuleRelativePath", "Public/EditableMeshTypes.h" },
		{ "ToolTip", "Attributes of this vertex itself" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVertexToCreate_Statics::NewProp_VertexAttributes = { "VertexAttributes", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVertexToCreate, VertexAttributes), Z_Construct_UScriptStruct_FMeshElementAttributeList, METADATA_PARAMS(Z_Construct_UScriptStruct_FVertexToCreate_Statics::NewProp_VertexAttributes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexToCreate_Statics::NewProp_VertexAttributes_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVertexToCreate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexToCreate_Statics::NewProp_OriginalVertexID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexToCreate_Statics::NewProp_VertexAttributes,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVertexToCreate_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EditableMesh,
		nullptr,
		&NewStructOps,
		"VertexToCreate",
		sizeof(FVertexToCreate),
		alignof(FVertexToCreate),
		Z_Construct_UScriptStruct_FVertexToCreate_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexToCreate_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVertexToCreate_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexToCreate_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVertexToCreate()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FVertexToCreate_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_EditableMesh();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("VertexToCreate"), sizeof(FVertexToCreate), Get_Z_Construct_UScriptStruct_FVertexToCreate_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FVertexToCreate_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVertexToCreate_Hash() { return 4281952263U; }
class UScriptStruct* FMeshElementAttributeList::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern EDITABLEMESH_API uint32 Get_Z_Construct_UScriptStruct_FMeshElementAttributeList_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMeshElementAttributeList, Z_Construct_UPackage__Script_EditableMesh(), TEXT("MeshElementAttributeList"), sizeof(FMeshElementAttributeList), Get_Z_Construct_UScriptStruct_FMeshElementAttributeList_Hash());
	}
	return Singleton;
}
template<> EDITABLEMESH_API UScriptStruct* StaticStruct<FMeshElementAttributeList>()
{
	return FMeshElementAttributeList::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMeshElementAttributeList(FMeshElementAttributeList::StaticStruct, TEXT("/Script/EditableMesh"), TEXT("MeshElementAttributeList"), false, nullptr, nullptr);
static struct FScriptStruct_EditableMesh_StaticRegisterNativesFMeshElementAttributeList
{
	FScriptStruct_EditableMesh_StaticRegisterNativesFMeshElementAttributeList()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MeshElementAttributeList")),new UScriptStruct::TCppStructOps<FMeshElementAttributeList>);
	}
} ScriptStruct_EditableMesh_StaticRegisterNativesFMeshElementAttributeList;
	struct Z_Construct_UScriptStruct_FMeshElementAttributeList_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Attributes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Attributes;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Attributes_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshElementAttributeList_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/EditableMeshTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMeshElementAttributeList_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMeshElementAttributeList>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshElementAttributeList_Statics::NewProp_Attributes_MetaData[] = {
		{ "Category", "Editable Mesh" },
		{ "Comment", "/** List of attributes to apply to a mesh element */" },
		{ "ModuleRelativePath", "Public/EditableMeshTypes.h" },
		{ "ToolTip", "List of attributes to apply to a mesh element" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMeshElementAttributeList_Statics::NewProp_Attributes = { "Attributes", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMeshElementAttributeList, Attributes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshElementAttributeList_Statics::NewProp_Attributes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshElementAttributeList_Statics::NewProp_Attributes_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMeshElementAttributeList_Statics::NewProp_Attributes_Inner = { "Attributes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FMeshElementAttributeData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMeshElementAttributeList_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshElementAttributeList_Statics::NewProp_Attributes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshElementAttributeList_Statics::NewProp_Attributes_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMeshElementAttributeList_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EditableMesh,
		nullptr,
		&NewStructOps,
		"MeshElementAttributeList",
		sizeof(FMeshElementAttributeList),
		alignof(FMeshElementAttributeList),
		Z_Construct_UScriptStruct_FMeshElementAttributeList_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshElementAttributeList_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshElementAttributeList_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshElementAttributeList_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMeshElementAttributeList()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMeshElementAttributeList_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_EditableMesh();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MeshElementAttributeList"), sizeof(FMeshElementAttributeList), Get_Z_Construct_UScriptStruct_FMeshElementAttributeList_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMeshElementAttributeList_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMeshElementAttributeList_Hash() { return 1376797048U; }
class UScriptStruct* FMeshElementAttributeData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern EDITABLEMESH_API uint32 Get_Z_Construct_UScriptStruct_FMeshElementAttributeData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMeshElementAttributeData, Z_Construct_UPackage__Script_EditableMesh(), TEXT("MeshElementAttributeData"), sizeof(FMeshElementAttributeData), Get_Z_Construct_UScriptStruct_FMeshElementAttributeData_Hash());
	}
	return Singleton;
}
template<> EDITABLEMESH_API UScriptStruct* StaticStruct<FMeshElementAttributeData>()
{
	return FMeshElementAttributeData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMeshElementAttributeData(FMeshElementAttributeData::StaticStruct, TEXT("/Script/EditableMesh"), TEXT("MeshElementAttributeData"), false, nullptr, nullptr);
static struct FScriptStruct_EditableMesh_StaticRegisterNativesFMeshElementAttributeData
{
	FScriptStruct_EditableMesh_StaticRegisterNativesFMeshElementAttributeData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MeshElementAttributeData")),new UScriptStruct::TCppStructOps<FMeshElementAttributeData>);
	}
} ScriptStruct_EditableMesh_StaticRegisterNativesFMeshElementAttributeData;
	struct Z_Construct_UScriptStruct_FMeshElementAttributeData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttributeValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AttributeValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttributeIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AttributeIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttributeName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_AttributeName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshElementAttributeData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/EditableMeshTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMeshElementAttributeData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMeshElementAttributeData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshElementAttributeData_Statics::NewProp_AttributeValue_MetaData[] = {
		{ "Category", "Editable Mesh" },
		{ "Comment", "/** The value of this attribute */" },
		{ "ModuleRelativePath", "Public/EditableMeshTypes.h" },
		{ "ToolTip", "The value of this attribute" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMeshElementAttributeData_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMeshElementAttributeData, AttributeValue), Z_Construct_UScriptStruct_FMeshElementAttributeValue, METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshElementAttributeData_Statics::NewProp_AttributeValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshElementAttributeData_Statics::NewProp_AttributeValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshElementAttributeData_Statics::NewProp_AttributeIndex_MetaData[] = {
		{ "Category", "Editable Mesh" },
		{ "Comment", "/** Index of the attribute */" },
		{ "ModuleRelativePath", "Public/EditableMeshTypes.h" },
		{ "ToolTip", "Index of the attribute" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMeshElementAttributeData_Statics::NewProp_AttributeIndex = { "AttributeIndex", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMeshElementAttributeData, AttributeIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshElementAttributeData_Statics::NewProp_AttributeIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshElementAttributeData_Statics::NewProp_AttributeIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshElementAttributeData_Statics::NewProp_AttributeName_MetaData[] = {
		{ "Category", "Editable Mesh" },
		{ "Comment", "/** Name of the attribute */" },
		{ "ModuleRelativePath", "Public/EditableMeshTypes.h" },
		{ "ToolTip", "Name of the attribute" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FMeshElementAttributeData_Statics::NewProp_AttributeName = { "AttributeName", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMeshElementAttributeData, AttributeName), METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshElementAttributeData_Statics::NewProp_AttributeName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshElementAttributeData_Statics::NewProp_AttributeName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMeshElementAttributeData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshElementAttributeData_Statics::NewProp_AttributeValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshElementAttributeData_Statics::NewProp_AttributeIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshElementAttributeData_Statics::NewProp_AttributeName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMeshElementAttributeData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EditableMesh,
		nullptr,
		&NewStructOps,
		"MeshElementAttributeData",
		sizeof(FMeshElementAttributeData),
		alignof(FMeshElementAttributeData),
		Z_Construct_UScriptStruct_FMeshElementAttributeData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshElementAttributeData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshElementAttributeData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshElementAttributeData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMeshElementAttributeData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMeshElementAttributeData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_EditableMesh();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MeshElementAttributeData"), sizeof(FMeshElementAttributeData), Get_Z_Construct_UScriptStruct_FMeshElementAttributeData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMeshElementAttributeData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMeshElementAttributeData_Hash() { return 1215436240U; }
class UScriptStruct* FMeshElementAttributeValue::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern EDITABLEMESH_API uint32 Get_Z_Construct_UScriptStruct_FMeshElementAttributeValue_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMeshElementAttributeValue, Z_Construct_UPackage__Script_EditableMesh(), TEXT("MeshElementAttributeValue"), sizeof(FMeshElementAttributeValue), Get_Z_Construct_UScriptStruct_FMeshElementAttributeValue_Hash());
	}
	return Singleton;
}
template<> EDITABLEMESH_API UScriptStruct* StaticStruct<FMeshElementAttributeValue>()
{
	return FMeshElementAttributeValue::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMeshElementAttributeValue(FMeshElementAttributeValue::StaticStruct, TEXT("/Script/EditableMesh"), TEXT("MeshElementAttributeValue"), false, nullptr, nullptr);
static struct FScriptStruct_EditableMesh_StaticRegisterNativesFMeshElementAttributeValue
{
	FScriptStruct_EditableMesh_StaticRegisterNativesFMeshElementAttributeValue()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MeshElementAttributeValue")),new UScriptStruct::TCppStructOps<FMeshElementAttributeValue>);
	}
} ScriptStruct_EditableMesh_StaticRegisterNativesFMeshElementAttributeValue;
	struct Z_Construct_UScriptStruct_FMeshElementAttributeValue_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshElementAttributeValue_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/EditableMeshTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMeshElementAttributeValue_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMeshElementAttributeValue>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMeshElementAttributeValue_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EditableMesh,
		nullptr,
		&NewStructOps,
		"MeshElementAttributeValue",
		sizeof(FMeshElementAttributeValue),
		alignof(FMeshElementAttributeValue),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshElementAttributeValue_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshElementAttributeValue_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMeshElementAttributeValue()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMeshElementAttributeValue_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_EditableMesh();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MeshElementAttributeValue"), sizeof(FMeshElementAttributeValue), Get_Z_Construct_UScriptStruct_FMeshElementAttributeValue_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMeshElementAttributeValue_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMeshElementAttributeValue_Hash() { return 525881528U; }
class UScriptStruct* FSubdivisionLimitData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern EDITABLEMESH_API uint32 Get_Z_Construct_UScriptStruct_FSubdivisionLimitData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSubdivisionLimitData, Z_Construct_UPackage__Script_EditableMesh(), TEXT("SubdivisionLimitData"), sizeof(FSubdivisionLimitData), Get_Z_Construct_UScriptStruct_FSubdivisionLimitData_Hash());
	}
	return Singleton;
}
template<> EDITABLEMESH_API UScriptStruct* StaticStruct<FSubdivisionLimitData>()
{
	return FSubdivisionLimitData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSubdivisionLimitData(FSubdivisionLimitData::StaticStruct, TEXT("/Script/EditableMesh"), TEXT("SubdivisionLimitData"), false, nullptr, nullptr);
static struct FScriptStruct_EditableMesh_StaticRegisterNativesFSubdivisionLimitData
{
	FScriptStruct_EditableMesh_StaticRegisterNativesFSubdivisionLimitData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SubdivisionLimitData")),new UScriptStruct::TCppStructOps<FSubdivisionLimitData>);
	}
} ScriptStruct_EditableMesh_StaticRegisterNativesFSubdivisionLimitData;
	struct Z_Construct_UScriptStruct_FSubdivisionLimitData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SubdividedWireEdges_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SubdividedWireEdges;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SubdividedWireEdges_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Sections_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Sections;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Sections_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VertexPositions_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_VertexPositions;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VertexPositions_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubdivisionLimitData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/EditableMeshTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSubdivisionLimitData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSubdivisionLimitData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubdivisionLimitData_Statics::NewProp_SubdividedWireEdges_MetaData[] = {
		{ "Category", "Editable Mesh" },
		{ "Comment", "/** All of the wire edges in the entire mesh (for all sections) */" },
		{ "ModuleRelativePath", "Public/EditableMeshTypes.h" },
		{ "ToolTip", "All of the wire edges in the entire mesh (for all sections)" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSubdivisionLimitData_Statics::NewProp_SubdividedWireEdges = { "SubdividedWireEdges", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSubdivisionLimitData, SubdividedWireEdges), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSubdivisionLimitData_Statics::NewProp_SubdividedWireEdges_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubdivisionLimitData_Statics::NewProp_SubdividedWireEdges_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSubdivisionLimitData_Statics::NewProp_SubdividedWireEdges_Inner = { "SubdividedWireEdges", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSubdividedWireEdge, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubdivisionLimitData_Statics::NewProp_Sections_MetaData[] = {
		{ "Category", "Editable Mesh" },
		{ "Comment", "/** Data for each of the sections in the mesh.  This array will have the same number of elements as the editable mesh's \n\x09    section list (not necessarily the same indices though, due to sparseness). */" },
		{ "ModuleRelativePath", "Public/EditableMeshTypes.h" },
		{ "ToolTip", "Data for each of the sections in the mesh.  This array will have the same number of elements as the editable mesh's\n          section list (not necessarily the same indices though, due to sparseness)." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSubdivisionLimitData_Statics::NewProp_Sections = { "Sections", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSubdivisionLimitData, Sections), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSubdivisionLimitData_Statics::NewProp_Sections_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubdivisionLimitData_Statics::NewProp_Sections_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSubdivisionLimitData_Statics::NewProp_Sections_Inner = { "Sections", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSubdivisionLimitSection, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubdivisionLimitData_Statics::NewProp_VertexPositions_MetaData[] = {
		{ "Category", "Editable Mesh" },
		{ "Comment", "/** Positions of all of the vertices for this subdivision level.  Many vertex positions may be shared between subdivided quads. */" },
		{ "ModuleRelativePath", "Public/EditableMeshTypes.h" },
		{ "ToolTip", "Positions of all of the vertices for this subdivision level.  Many vertex positions may be shared between subdivided quads." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSubdivisionLimitData_Statics::NewProp_VertexPositions = { "VertexPositions", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSubdivisionLimitData, VertexPositions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSubdivisionLimitData_Statics::NewProp_VertexPositions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubdivisionLimitData_Statics::NewProp_VertexPositions_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSubdivisionLimitData_Statics::NewProp_VertexPositions_Inner = { "VertexPositions", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSubdivisionLimitData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubdivisionLimitData_Statics::NewProp_SubdividedWireEdges,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubdivisionLimitData_Statics::NewProp_SubdividedWireEdges_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubdivisionLimitData_Statics::NewProp_Sections,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubdivisionLimitData_Statics::NewProp_Sections_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubdivisionLimitData_Statics::NewProp_VertexPositions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubdivisionLimitData_Statics::NewProp_VertexPositions_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSubdivisionLimitData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EditableMesh,
		nullptr,
		&NewStructOps,
		"SubdivisionLimitData",
		sizeof(FSubdivisionLimitData),
		alignof(FSubdivisionLimitData),
		Z_Construct_UScriptStruct_FSubdivisionLimitData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubdivisionLimitData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSubdivisionLimitData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubdivisionLimitData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSubdivisionLimitData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSubdivisionLimitData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_EditableMesh();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SubdivisionLimitData"), sizeof(FSubdivisionLimitData), Get_Z_Construct_UScriptStruct_FSubdivisionLimitData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSubdivisionLimitData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSubdivisionLimitData_Hash() { return 517868566U; }
class UScriptStruct* FSubdivisionLimitSection::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern EDITABLEMESH_API uint32 Get_Z_Construct_UScriptStruct_FSubdivisionLimitSection_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSubdivisionLimitSection, Z_Construct_UPackage__Script_EditableMesh(), TEXT("SubdivisionLimitSection"), sizeof(FSubdivisionLimitSection), Get_Z_Construct_UScriptStruct_FSubdivisionLimitSection_Hash());
	}
	return Singleton;
}
template<> EDITABLEMESH_API UScriptStruct* StaticStruct<FSubdivisionLimitSection>()
{
	return FSubdivisionLimitSection::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSubdivisionLimitSection(FSubdivisionLimitSection::StaticStruct, TEXT("/Script/EditableMesh"), TEXT("SubdivisionLimitSection"), false, nullptr, nullptr);
static struct FScriptStruct_EditableMesh_StaticRegisterNativesFSubdivisionLimitSection
{
	FScriptStruct_EditableMesh_StaticRegisterNativesFSubdivisionLimitSection()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SubdivisionLimitSection")),new UScriptStruct::TCppStructOps<FSubdivisionLimitSection>);
	}
} ScriptStruct_EditableMesh_StaticRegisterNativesFSubdivisionLimitSection;
	struct Z_Construct_UScriptStruct_FSubdivisionLimitSection_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SubdividedQuads_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SubdividedQuads;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SubdividedQuads_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubdivisionLimitSection_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/EditableMeshTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSubdivisionLimitSection_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSubdivisionLimitSection>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubdivisionLimitSection_Statics::NewProp_SubdividedQuads_MetaData[] = {
		{ "Category", "Editable Mesh" },
		{ "Comment", "/** All of the quads in this section, as a result from subdividing the mesh */" },
		{ "ModuleRelativePath", "Public/EditableMeshTypes.h" },
		{ "ToolTip", "All of the quads in this section, as a result from subdividing the mesh" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSubdivisionLimitSection_Statics::NewProp_SubdividedQuads = { "SubdividedQuads", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSubdivisionLimitSection, SubdividedQuads), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSubdivisionLimitSection_Statics::NewProp_SubdividedQuads_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubdivisionLimitSection_Statics::NewProp_SubdividedQuads_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSubdivisionLimitSection_Statics::NewProp_SubdividedQuads_Inner = { "SubdividedQuads", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSubdividedQuad, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSubdivisionLimitSection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubdivisionLimitSection_Statics::NewProp_SubdividedQuads,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubdivisionLimitSection_Statics::NewProp_SubdividedQuads_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSubdivisionLimitSection_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EditableMesh,
		nullptr,
		&NewStructOps,
		"SubdivisionLimitSection",
		sizeof(FSubdivisionLimitSection),
		alignof(FSubdivisionLimitSection),
		Z_Construct_UScriptStruct_FSubdivisionLimitSection_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubdivisionLimitSection_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSubdivisionLimitSection_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubdivisionLimitSection_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSubdivisionLimitSection()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSubdivisionLimitSection_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_EditableMesh();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SubdivisionLimitSection"), sizeof(FSubdivisionLimitSection), Get_Z_Construct_UScriptStruct_FSubdivisionLimitSection_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSubdivisionLimitSection_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSubdivisionLimitSection_Hash() { return 402262407U; }
class UScriptStruct* FSubdividedWireEdge::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern EDITABLEMESH_API uint32 Get_Z_Construct_UScriptStruct_FSubdividedWireEdge_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSubdividedWireEdge, Z_Construct_UPackage__Script_EditableMesh(), TEXT("SubdividedWireEdge"), sizeof(FSubdividedWireEdge), Get_Z_Construct_UScriptStruct_FSubdividedWireEdge_Hash());
	}
	return Singleton;
}
template<> EDITABLEMESH_API UScriptStruct* StaticStruct<FSubdividedWireEdge>()
{
	return FSubdividedWireEdge::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSubdividedWireEdge(FSubdividedWireEdge::StaticStruct, TEXT("/Script/EditableMesh"), TEXT("SubdividedWireEdge"), false, nullptr, nullptr);
static struct FScriptStruct_EditableMesh_StaticRegisterNativesFSubdividedWireEdge
{
	FScriptStruct_EditableMesh_StaticRegisterNativesFSubdividedWireEdge()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SubdividedWireEdge")),new UScriptStruct::TCppStructOps<FSubdividedWireEdge>);
	}
} ScriptStruct_EditableMesh_StaticRegisterNativesFSubdividedWireEdge;
	struct Z_Construct_UScriptStruct_FSubdividedWireEdge_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EdgeVertex1PositionIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_EdgeVertex1PositionIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EdgeVertex0PositionIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_EdgeVertex0PositionIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubdividedWireEdge_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/EditableMeshTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSubdividedWireEdge_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSubdividedWireEdge>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubdividedWireEdge_Statics::NewProp_EdgeVertex1PositionIndex_MetaData[] = {
		{ "Category", "Editable Mesh" },
		{ "ModuleRelativePath", "Public/EditableMeshTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSubdividedWireEdge_Statics::NewProp_EdgeVertex1PositionIndex = { "EdgeVertex1PositionIndex", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSubdividedWireEdge, EdgeVertex1PositionIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FSubdividedWireEdge_Statics::NewProp_EdgeVertex1PositionIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubdividedWireEdge_Statics::NewProp_EdgeVertex1PositionIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubdividedWireEdge_Statics::NewProp_EdgeVertex0PositionIndex_MetaData[] = {
		{ "Category", "Editable Mesh" },
		{ "Comment", "/** The vertex indices for the two corners of this quad */" },
		{ "ModuleRelativePath", "Public/EditableMeshTypes.h" },
		{ "ToolTip", "The vertex indices for the two corners of this quad" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSubdividedWireEdge_Statics::NewProp_EdgeVertex0PositionIndex = { "EdgeVertex0PositionIndex", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSubdividedWireEdge, EdgeVertex0PositionIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FSubdividedWireEdge_Statics::NewProp_EdgeVertex0PositionIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubdividedWireEdge_Statics::NewProp_EdgeVertex0PositionIndex_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSubdividedWireEdge_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubdividedWireEdge_Statics::NewProp_EdgeVertex1PositionIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubdividedWireEdge_Statics::NewProp_EdgeVertex0PositionIndex,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSubdividedWireEdge_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EditableMesh,
		nullptr,
		&NewStructOps,
		"SubdividedWireEdge",
		sizeof(FSubdividedWireEdge),
		alignof(FSubdividedWireEdge),
		Z_Construct_UScriptStruct_FSubdividedWireEdge_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubdividedWireEdge_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSubdividedWireEdge_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubdividedWireEdge_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSubdividedWireEdge()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSubdividedWireEdge_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_EditableMesh();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SubdividedWireEdge"), sizeof(FSubdividedWireEdge), Get_Z_Construct_UScriptStruct_FSubdividedWireEdge_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSubdividedWireEdge_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSubdividedWireEdge_Hash() { return 453869288U; }
class UScriptStruct* FSubdividedQuad::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern EDITABLEMESH_API uint32 Get_Z_Construct_UScriptStruct_FSubdividedQuad_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSubdividedQuad, Z_Construct_UPackage__Script_EditableMesh(), TEXT("SubdividedQuad"), sizeof(FSubdividedQuad), Get_Z_Construct_UScriptStruct_FSubdividedQuad_Hash());
	}
	return Singleton;
}
template<> EDITABLEMESH_API UScriptStruct* StaticStruct<FSubdividedQuad>()
{
	return FSubdividedQuad::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSubdividedQuad(FSubdividedQuad::StaticStruct, TEXT("/Script/EditableMesh"), TEXT("SubdividedQuad"), false, nullptr, nullptr);
static struct FScriptStruct_EditableMesh_StaticRegisterNativesFSubdividedQuad
{
	FScriptStruct_EditableMesh_StaticRegisterNativesFSubdividedQuad()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SubdividedQuad")),new UScriptStruct::TCppStructOps<FSubdividedQuad>);
	}
} ScriptStruct_EditableMesh_StaticRegisterNativesFSubdividedQuad;
	struct Z_Construct_UScriptStruct_FSubdividedQuad_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QuadVertex3_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_QuadVertex3;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QuadVertex2_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_QuadVertex2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QuadVertex1_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_QuadVertex1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QuadVertex0_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_QuadVertex0;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubdividedQuad_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/EditableMeshTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSubdividedQuad_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSubdividedQuad>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubdividedQuad_Statics::NewProp_QuadVertex3_MetaData[] = {
		{ "Category", "Editable Mesh" },
		{ "ModuleRelativePath", "Public/EditableMeshTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSubdividedQuad_Statics::NewProp_QuadVertex3 = { "QuadVertex3", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSubdividedQuad, QuadVertex3), Z_Construct_UScriptStruct_FSubdividedQuadVertex, METADATA_PARAMS(Z_Construct_UScriptStruct_FSubdividedQuad_Statics::NewProp_QuadVertex3_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubdividedQuad_Statics::NewProp_QuadVertex3_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubdividedQuad_Statics::NewProp_QuadVertex2_MetaData[] = {
		{ "Category", "Editable Mesh" },
		{ "ModuleRelativePath", "Public/EditableMeshTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSubdividedQuad_Statics::NewProp_QuadVertex2 = { "QuadVertex2", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSubdividedQuad, QuadVertex2), Z_Construct_UScriptStruct_FSubdividedQuadVertex, METADATA_PARAMS(Z_Construct_UScriptStruct_FSubdividedQuad_Statics::NewProp_QuadVertex2_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubdividedQuad_Statics::NewProp_QuadVertex2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubdividedQuad_Statics::NewProp_QuadVertex1_MetaData[] = {
		{ "Category", "Editable Mesh" },
		{ "ModuleRelativePath", "Public/EditableMeshTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSubdividedQuad_Statics::NewProp_QuadVertex1 = { "QuadVertex1", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSubdividedQuad, QuadVertex1), Z_Construct_UScriptStruct_FSubdividedQuadVertex, METADATA_PARAMS(Z_Construct_UScriptStruct_FSubdividedQuad_Statics::NewProp_QuadVertex1_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubdividedQuad_Statics::NewProp_QuadVertex1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubdividedQuad_Statics::NewProp_QuadVertex0_MetaData[] = {
		{ "Category", "Editable Mesh" },
		{ "Comment", "/** The vertices for the four corners of this quad */" },
		{ "ModuleRelativePath", "Public/EditableMeshTypes.h" },
		{ "ToolTip", "The vertices for the four corners of this quad" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSubdividedQuad_Statics::NewProp_QuadVertex0 = { "QuadVertex0", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSubdividedQuad, QuadVertex0), Z_Construct_UScriptStruct_FSubdividedQuadVertex, METADATA_PARAMS(Z_Construct_UScriptStruct_FSubdividedQuad_Statics::NewProp_QuadVertex0_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubdividedQuad_Statics::NewProp_QuadVertex0_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSubdividedQuad_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubdividedQuad_Statics::NewProp_QuadVertex3,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubdividedQuad_Statics::NewProp_QuadVertex2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubdividedQuad_Statics::NewProp_QuadVertex1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubdividedQuad_Statics::NewProp_QuadVertex0,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSubdividedQuad_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EditableMesh,
		nullptr,
		&NewStructOps,
		"SubdividedQuad",
		sizeof(FSubdividedQuad),
		alignof(FSubdividedQuad),
		Z_Construct_UScriptStruct_FSubdividedQuad_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubdividedQuad_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSubdividedQuad_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubdividedQuad_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSubdividedQuad()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSubdividedQuad_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_EditableMesh();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SubdividedQuad"), sizeof(FSubdividedQuad), Get_Z_Construct_UScriptStruct_FSubdividedQuad_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSubdividedQuad_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSubdividedQuad_Hash() { return 2138672197U; }
class UScriptStruct* FSubdividedQuadVertex::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern EDITABLEMESH_API uint32 Get_Z_Construct_UScriptStruct_FSubdividedQuadVertex_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSubdividedQuadVertex, Z_Construct_UPackage__Script_EditableMesh(), TEXT("SubdividedQuadVertex"), sizeof(FSubdividedQuadVertex), Get_Z_Construct_UScriptStruct_FSubdividedQuadVertex_Hash());
	}
	return Singleton;
}
template<> EDITABLEMESH_API UScriptStruct* StaticStruct<FSubdividedQuadVertex>()
{
	return FSubdividedQuadVertex::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSubdividedQuadVertex(FSubdividedQuadVertex::StaticStruct, TEXT("/Script/EditableMesh"), TEXT("SubdividedQuadVertex"), false, nullptr, nullptr);
static struct FScriptStruct_EditableMesh_StaticRegisterNativesFSubdividedQuadVertex
{
	FScriptStruct_EditableMesh_StaticRegisterNativesFSubdividedQuadVertex()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SubdividedQuadVertex")),new UScriptStruct::TCppStructOps<FSubdividedQuadVertex>);
	}
} ScriptStruct_EditableMesh_StaticRegisterNativesFSubdividedQuadVertex;
	struct Z_Construct_UScriptStruct_FSubdividedQuadVertex_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VertexBinormalSign_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VertexBinormalSign;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VertexTangent_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VertexTangent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VertexNormal_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VertexNormal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VertexColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VertexColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextureCoordinate1_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TextureCoordinate1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextureCoordinate0_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TextureCoordinate0;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VertexPositionIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_VertexPositionIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubdividedQuadVertex_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/EditableMeshTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSubdividedQuadVertex_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSubdividedQuadVertex>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubdividedQuadVertex_Statics::NewProp_VertexBinormalSign_MetaData[] = {
		{ "Category", "Editable Mesh" },
		{ "Comment", "/** Quad vertex binormal sign (-1.0 or 1.0)*/" },
		{ "ModuleRelativePath", "Public/EditableMeshTypes.h" },
		{ "ToolTip", "Quad vertex binormal sign (-1.0 or 1.0)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSubdividedQuadVertex_Statics::NewProp_VertexBinormalSign = { "VertexBinormalSign", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSubdividedQuadVertex, VertexBinormalSign), METADATA_PARAMS(Z_Construct_UScriptStruct_FSubdividedQuadVertex_Statics::NewProp_VertexBinormalSign_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubdividedQuadVertex_Statics::NewProp_VertexBinormalSign_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubdividedQuadVertex_Statics::NewProp_VertexTangent_MetaData[] = {
		{ "Category", "Editable Mesh" },
		{ "Comment", "/** Quad vertex tangent */" },
		{ "ModuleRelativePath", "Public/EditableMeshTypes.h" },
		{ "ToolTip", "Quad vertex tangent" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSubdividedQuadVertex_Statics::NewProp_VertexTangent = { "VertexTangent", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSubdividedQuadVertex, VertexTangent), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FSubdividedQuadVertex_Statics::NewProp_VertexTangent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubdividedQuadVertex_Statics::NewProp_VertexTangent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubdividedQuadVertex_Statics::NewProp_VertexNormal_MetaData[] = {
		{ "Category", "Editable Mesh" },
		{ "Comment", "/** Quad vertex normal */" },
		{ "ModuleRelativePath", "Public/EditableMeshTypes.h" },
		{ "ToolTip", "Quad vertex normal" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSubdividedQuadVertex_Statics::NewProp_VertexNormal = { "VertexNormal", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSubdividedQuadVertex, VertexNormal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FSubdividedQuadVertex_Statics::NewProp_VertexNormal_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubdividedQuadVertex_Statics::NewProp_VertexNormal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubdividedQuadVertex_Statics::NewProp_VertexColor_MetaData[] = {
		{ "Category", "Editable Mesh" },
		{ "Comment", "/** Vertex color */" },
		{ "ModuleRelativePath", "Public/EditableMeshTypes.h" },
		{ "ToolTip", "Vertex color" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSubdividedQuadVertex_Statics::NewProp_VertexColor = { "VertexColor", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSubdividedQuadVertex, VertexColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FSubdividedQuadVertex_Statics::NewProp_VertexColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubdividedQuadVertex_Statics::NewProp_VertexColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubdividedQuadVertex_Statics::NewProp_TextureCoordinate1_MetaData[] = {
		{ "Category", "Editable Mesh" },
		{ "ModuleRelativePath", "Public/EditableMeshTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSubdividedQuadVertex_Statics::NewProp_TextureCoordinate1 = { "TextureCoordinate1", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSubdividedQuadVertex, TextureCoordinate1), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FSubdividedQuadVertex_Statics::NewProp_TextureCoordinate1_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubdividedQuadVertex_Statics::NewProp_TextureCoordinate1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubdividedQuadVertex_Statics::NewProp_TextureCoordinate0_MetaData[] = {
		{ "Category", "Editable Mesh" },
		{ "Comment", "/** Texture coordinates for this vertex.  We only support up to two, for now. (Just to avoid TArrays/allocations) */" },
		{ "ModuleRelativePath", "Public/EditableMeshTypes.h" },
		{ "ToolTip", "Texture coordinates for this vertex.  We only support up to two, for now. (Just to avoid TArrays/allocations)" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSubdividedQuadVertex_Statics::NewProp_TextureCoordinate0 = { "TextureCoordinate0", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSubdividedQuadVertex, TextureCoordinate0), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FSubdividedQuadVertex_Statics::NewProp_TextureCoordinate0_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubdividedQuadVertex_Statics::NewProp_TextureCoordinate0_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubdividedQuadVertex_Statics::NewProp_VertexPositionIndex_MetaData[] = {
		{ "Category", "Editable Mesh" },
		{ "Comment", "/** The index of the vertex position (into the FSubdivisionLimitData's VertexPositions array) used for this vertex */" },
		{ "ModuleRelativePath", "Public/EditableMeshTypes.h" },
		{ "ToolTip", "The index of the vertex position (into the FSubdivisionLimitData's VertexPositions array) used for this vertex" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSubdividedQuadVertex_Statics::NewProp_VertexPositionIndex = { "VertexPositionIndex", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSubdividedQuadVertex, VertexPositionIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FSubdividedQuadVertex_Statics::NewProp_VertexPositionIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubdividedQuadVertex_Statics::NewProp_VertexPositionIndex_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSubdividedQuadVertex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubdividedQuadVertex_Statics::NewProp_VertexBinormalSign,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubdividedQuadVertex_Statics::NewProp_VertexTangent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubdividedQuadVertex_Statics::NewProp_VertexNormal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubdividedQuadVertex_Statics::NewProp_VertexColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubdividedQuadVertex_Statics::NewProp_TextureCoordinate1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubdividedQuadVertex_Statics::NewProp_TextureCoordinate0,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubdividedQuadVertex_Statics::NewProp_VertexPositionIndex,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSubdividedQuadVertex_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EditableMesh,
		nullptr,
		&NewStructOps,
		"SubdividedQuadVertex",
		sizeof(FSubdividedQuadVertex),
		alignof(FSubdividedQuadVertex),
		Z_Construct_UScriptStruct_FSubdividedQuadVertex_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubdividedQuadVertex_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSubdividedQuadVertex_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubdividedQuadVertex_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSubdividedQuadVertex()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSubdividedQuadVertex_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_EditableMesh();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SubdividedQuadVertex"), sizeof(FSubdividedQuadVertex), Get_Z_Construct_UScriptStruct_FSubdividedQuadVertex_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSubdividedQuadVertex_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSubdividedQuadVertex_Hash() { return 1420117326U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
