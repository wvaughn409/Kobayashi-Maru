// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MeshDescription/Public/MeshDescriptionBase.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMeshDescriptionBase() {}
// Cross Module References
	MESHDESCRIPTION_API UClass* Z_Construct_UClass_UMeshDescriptionBase_NoRegister();
	MESHDESCRIPTION_API UClass* Z_Construct_UClass_UMeshDescriptionBase();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_MeshDescription();
	MESHDESCRIPTION_API UScriptStruct* Z_Construct_UScriptStruct_FPolygonID();
	MESHDESCRIPTION_API UScriptStruct* Z_Construct_UScriptStruct_FEdgeID();
	MESHDESCRIPTION_API UScriptStruct* Z_Construct_UScriptStruct_FVertexID();
	MESHDESCRIPTION_API UScriptStruct* Z_Construct_UScriptStruct_FVertexInstanceID();
	MESHDESCRIPTION_API UScriptStruct* Z_Construct_UScriptStruct_FPolygonGroupID();
	MESHDESCRIPTION_API UScriptStruct* Z_Construct_UScriptStruct_FTriangleID();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	DEFINE_FUNCTION(UMeshDescriptionBase::execGetNumPolygonGroupPolygons)
	{
		P_GET_STRUCT(FPolygonGroupID,Z_Param_PolygonGroupID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetNumPolygonGroupPolygons(Z_Param_PolygonGroupID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMeshDescriptionBase::execGetPolygonGroupPolygons)
	{
		P_GET_STRUCT(FPolygonGroupID,Z_Param_PolygonGroupID);
		P_GET_TARRAY_REF(FPolygonID,Z_Param_Out_OutPolygonIDs);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetPolygonGroupPolygons(Z_Param_PolygonGroupID,Z_Param_Out_OutPolygonIDs);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMeshDescriptionBase::execComputePolygonTriangulation)
	{
		P_GET_STRUCT(FPolygonID,Z_Param_PolygonID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ComputePolygonTriangulation(Z_Param_PolygonID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMeshDescriptionBase::execReversePolygonFacing)
	{
		P_GET_STRUCT(FPolygonID,Z_Param_PolygonID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ReversePolygonFacing(Z_Param_PolygonID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMeshDescriptionBase::execSetPolygonPolygonGroup)
	{
		P_GET_STRUCT(FPolygonID,Z_Param_PolygonID);
		P_GET_STRUCT(FPolygonGroupID,Z_Param_PolygonGroupID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPolygonPolygonGroup(Z_Param_PolygonID,Z_Param_PolygonGroupID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMeshDescriptionBase::execSetPolygonVertexInstance)
	{
		P_GET_STRUCT(FPolygonID,Z_Param_PolygonID);
		P_GET_PROPERTY(FIntProperty,Z_Param_PerimeterIndex);
		P_GET_STRUCT(FVertexInstanceID,Z_Param_VertexInstanceID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPolygonVertexInstance(Z_Param_PolygonID,Z_Param_PerimeterIndex,Z_Param_VertexInstanceID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMeshDescriptionBase::execGetVertexInstanceForPolygonVertex)
	{
		P_GET_STRUCT(FPolygonID,Z_Param_PolygonID);
		P_GET_STRUCT(FVertexID,Z_Param_VertexID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVertexInstanceID*)Z_Param__Result=P_THIS->GetVertexInstanceForPolygonVertex(Z_Param_PolygonID,Z_Param_VertexID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMeshDescriptionBase::execGetPolygonPolygonGroup)
	{
		P_GET_STRUCT(FPolygonID,Z_Param_PolygonID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FPolygonGroupID*)Z_Param__Result=P_THIS->GetPolygonPolygonGroup(Z_Param_PolygonID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMeshDescriptionBase::execGetPolygonAdjacentPolygons)
	{
		P_GET_STRUCT(FPolygonID,Z_Param_PolygonID);
		P_GET_TARRAY_REF(FPolygonID,Z_Param_Out_OutPolygonIDs);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetPolygonAdjacentPolygons(Z_Param_PolygonID,Z_Param_Out_OutPolygonIDs);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMeshDescriptionBase::execGetNumPolygonInternalEdges)
	{
		P_GET_STRUCT(FPolygonID,Z_Param_PolygonID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetNumPolygonInternalEdges(Z_Param_PolygonID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMeshDescriptionBase::execGetPolygonInternalEdges)
	{
		P_GET_STRUCT(FPolygonID,Z_Param_PolygonID);
		P_GET_TARRAY_REF(FEdgeID,Z_Param_Out_OutEdgeIDs);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetPolygonInternalEdges(Z_Param_PolygonID,Z_Param_Out_OutEdgeIDs);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMeshDescriptionBase::execGetPolygonPerimeterEdges)
	{
		P_GET_STRUCT(FPolygonID,Z_Param_PolygonID);
		P_GET_TARRAY_REF(FEdgeID,Z_Param_Out_OutEdgeIDs);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetPolygonPerimeterEdges(Z_Param_PolygonID,Z_Param_Out_OutEdgeIDs);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMeshDescriptionBase::execGetPolygonVertices)
	{
		P_GET_STRUCT(FPolygonID,Z_Param_PolygonID);
		P_GET_TARRAY_REF(FVertexID,Z_Param_Out_OutVertexIDs);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetPolygonVertices(Z_Param_PolygonID,Z_Param_Out_OutVertexIDs);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMeshDescriptionBase::execGetNumPolygonVertices)
	{
		P_GET_STRUCT(FPolygonID,Z_Param_PolygonID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetNumPolygonVertices(Z_Param_PolygonID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMeshDescriptionBase::execGetPolygonVertexInstances)
	{
		P_GET_STRUCT(FPolygonID,Z_Param_PolygonID);
		P_GET_TARRAY_REF(FVertexInstanceID,Z_Param_Out_OutVertexInstanceIDs);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetPolygonVertexInstances(Z_Param_PolygonID,Z_Param_Out_OutVertexInstanceIDs);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMeshDescriptionBase::execGetNumPolygonTriangles)
	{
		P_GET_STRUCT(FPolygonID,Z_Param_PolygonID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetNumPolygonTriangles(Z_Param_PolygonID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMeshDescriptionBase::execGetPolygonTriangles)
	{
		P_GET_STRUCT(FPolygonID,Z_Param_PolygonID);
		P_GET_TARRAY_REF(FTriangleID,Z_Param_Out_OutTriangleIDs);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetPolygonTriangles(Z_Param_PolygonID,Z_Param_Out_OutTriangleIDs);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMeshDescriptionBase::execGetVertexInstanceForTriangleVertex)
	{
		P_GET_STRUCT(FTriangleID,Z_Param_TriangleID);
		P_GET_STRUCT(FVertexID,Z_Param_VertexID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVertexInstanceID*)Z_Param__Result=P_THIS->GetVertexInstanceForTriangleVertex(Z_Param_TriangleID,Z_Param_VertexID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMeshDescriptionBase::execGetTriangleAdjacentTriangles)
	{
		P_GET_STRUCT(FTriangleID,Z_Param_TriangleID);
		P_GET_TARRAY_REF(FTriangleID,Z_Param_Out_OutTriangleIDs);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetTriangleAdjacentTriangles(Z_Param_TriangleID,Z_Param_Out_OutTriangleIDs);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMeshDescriptionBase::execGetTriangleEdges)
	{
		P_GET_STRUCT(FTriangleID,Z_Param_TriangleID);
		P_GET_TARRAY_REF(FEdgeID,Z_Param_Out_OutEdgeIDs);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetTriangleEdges(Z_Param_TriangleID,Z_Param_Out_OutEdgeIDs);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMeshDescriptionBase::execGetTriangleVertices)
	{
		P_GET_STRUCT(FTriangleID,Z_Param_TriangleID);
		P_GET_TARRAY_REF(FVertexID,Z_Param_Out_OutVertexIDs);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetTriangleVertices(Z_Param_TriangleID,Z_Param_Out_OutVertexIDs);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMeshDescriptionBase::execGetTriangleVertexInstance)
	{
		P_GET_STRUCT(FTriangleID,Z_Param_TriangleID);
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVertexInstanceID*)Z_Param__Result=P_THIS->GetTriangleVertexInstance(Z_Param_TriangleID,Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMeshDescriptionBase::execGetTriangleVertexInstances)
	{
		P_GET_STRUCT(FTriangleID,Z_Param_TriangleID);
		P_GET_TARRAY_REF(FVertexInstanceID,Z_Param_Out_OutVertexInstanceIDs);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetTriangleVertexInstances(Z_Param_TriangleID,Z_Param_Out_OutVertexInstanceIDs);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMeshDescriptionBase::execIsTrianglePartOfNgon)
	{
		P_GET_STRUCT(FTriangleID,Z_Param_TriangleID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsTrianglePartOfNgon(Z_Param_TriangleID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMeshDescriptionBase::execGetTrianglePolygonGroup)
	{
		P_GET_STRUCT(FTriangleID,Z_Param_TriangleID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FPolygonGroupID*)Z_Param__Result=P_THIS->GetTrianglePolygonGroup(Z_Param_TriangleID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMeshDescriptionBase::execGetTrianglePolygon)
	{
		P_GET_STRUCT(FTriangleID,Z_Param_TriangleID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FPolygonID*)Z_Param__Result=P_THIS->GetTrianglePolygon(Z_Param_TriangleID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMeshDescriptionBase::execGetEdgeVertices)
	{
		P_GET_STRUCT(FEdgeID,Z_Param_EdgeID);
		P_GET_TARRAY_REF(FVertexID,Z_Param_Out_OutVertexIDs);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetEdgeVertices(Z_Param_EdgeID,Z_Param_Out_OutVertexIDs);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMeshDescriptionBase::execGetEdgeVertex)
	{
		P_GET_STRUCT(FEdgeID,Z_Param_EdgeID);
		P_GET_PROPERTY(FIntProperty,Z_Param_VertexNumber);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVertexID*)Z_Param__Result=P_THIS->GetEdgeVertex(Z_Param_EdgeID,Z_Param_VertexNumber);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMeshDescriptionBase::execGetNumEdgeConnectedPolygons)
	{
		P_GET_STRUCT(FEdgeID,Z_Param_EdgeID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetNumEdgeConnectedPolygons(Z_Param_EdgeID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMeshDescriptionBase::execGetEdgeConnectedPolygons)
	{
		P_GET_STRUCT(FEdgeID,Z_Param_EdgeID);
		P_GET_TARRAY_REF(FPolygonID,Z_Param_Out_OutConnectedPolygonIDs);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetEdgeConnectedPolygons(Z_Param_EdgeID,Z_Param_Out_OutConnectedPolygonIDs);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMeshDescriptionBase::execGetNumEdgeConnectedTriangles)
	{
		P_GET_STRUCT(FEdgeID,Z_Param_EdgeID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetNumEdgeConnectedTriangles(Z_Param_EdgeID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMeshDescriptionBase::execGetEdgeConnectedTriangles)
	{
		P_GET_STRUCT(FEdgeID,Z_Param_EdgeID);
		P_GET_TARRAY_REF(FTriangleID,Z_Param_Out_OutConnectedTriangleIDs);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetEdgeConnectedTriangles(Z_Param_EdgeID,Z_Param_Out_OutConnectedTriangleIDs);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMeshDescriptionBase::execIsEdgeInternalToPolygon)
	{
		P_GET_STRUCT(FEdgeID,Z_Param_EdgeID);
		P_GET_STRUCT(FPolygonID,Z_Param_PolygonID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsEdgeInternalToPolygon(Z_Param_EdgeID,Z_Param_PolygonID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMeshDescriptionBase::execIsEdgeInternal)
	{
		P_GET_STRUCT(FEdgeID,Z_Param_EdgeID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsEdgeInternal(Z_Param_EdgeID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMeshDescriptionBase::execGetNumVertexInstanceConnectedPolygons)
	{
		P_GET_STRUCT(FVertexInstanceID,Z_Param_VertexInstanceID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetNumVertexInstanceConnectedPolygons(Z_Param_VertexInstanceID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMeshDescriptionBase::execGetVertexInstanceConnectedPolygons)
	{
		P_GET_STRUCT(FVertexInstanceID,Z_Param_VertexInstanceID);
		P_GET_TARRAY_REF(FPolygonID,Z_Param_Out_OutConnectedPolygonIDs);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetVertexInstanceConnectedPolygons(Z_Param_VertexInstanceID,Z_Param_Out_OutConnectedPolygonIDs);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMeshDescriptionBase::execGetNumVertexInstanceConnectedTriangles)
	{
		P_GET_STRUCT(FVertexInstanceID,Z_Param_VertexInstanceID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetNumVertexInstanceConnectedTriangles(Z_Param_VertexInstanceID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMeshDescriptionBase::execGetVertexInstanceConnectedTriangles)
	{
		P_GET_STRUCT(FVertexInstanceID,Z_Param_VertexInstanceID);
		P_GET_TARRAY_REF(FTriangleID,Z_Param_Out_OutConnectedTriangleIDs);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetVertexInstanceConnectedTriangles(Z_Param_VertexInstanceID,Z_Param_Out_OutConnectedTriangleIDs);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMeshDescriptionBase::execGetVertexInstancePairEdge)
	{
		P_GET_STRUCT(FVertexInstanceID,Z_Param_VertexInstanceID0);
		P_GET_STRUCT(FVertexInstanceID,Z_Param_VertexInstanceID1);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FEdgeID*)Z_Param__Result=P_THIS->GetVertexInstancePairEdge(Z_Param_VertexInstanceID0,Z_Param_VertexInstanceID1);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMeshDescriptionBase::execGetVertexInstanceVertex)
	{
		P_GET_STRUCT(FVertexInstanceID,Z_Param_VertexInstanceID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVertexID*)Z_Param__Result=P_THIS->GetVertexInstanceVertex(Z_Param_VertexInstanceID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMeshDescriptionBase::execSetVertexPosition)
	{
		P_GET_STRUCT(FVertexID,Z_Param_VertexID);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Position);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVertexPosition(Z_Param_VertexID,Z_Param_Out_Position);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMeshDescriptionBase::execGetVertexPosition)
	{
		P_GET_STRUCT(FVertexID,Z_Param_VertexID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetVertexPosition(Z_Param_VertexID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMeshDescriptionBase::execGetVertexAdjacentVertices)
	{
		P_GET_STRUCT(FVertexID,Z_Param_VertexID);
		P_GET_TARRAY_REF(FVertexID,Z_Param_Out_OutAdjacentVertexIDs);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetVertexAdjacentVertices(Z_Param_VertexID,Z_Param_Out_OutAdjacentVertexIDs);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMeshDescriptionBase::execGetNumVertexConnectedPolygons)
	{
		P_GET_STRUCT(FVertexID,Z_Param_VertexID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetNumVertexConnectedPolygons(Z_Param_VertexID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMeshDescriptionBase::execGetVertexConnectedPolygons)
	{
		P_GET_STRUCT(FVertexID,Z_Param_VertexID);
		P_GET_TARRAY_REF(FPolygonID,Z_Param_Out_OutConnectedPolygonIDs);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetVertexConnectedPolygons(Z_Param_VertexID,Z_Param_Out_OutConnectedPolygonIDs);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMeshDescriptionBase::execGetNumVertexConnectedTriangles)
	{
		P_GET_STRUCT(FVertexID,Z_Param_VertexID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetNumVertexConnectedTriangles(Z_Param_VertexID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMeshDescriptionBase::execGetVertexConnectedTriangles)
	{
		P_GET_STRUCT(FVertexID,Z_Param_VertexID);
		P_GET_TARRAY_REF(FTriangleID,Z_Param_Out_OutConnectedTriangleIDs);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetVertexConnectedTriangles(Z_Param_VertexID,Z_Param_Out_OutConnectedTriangleIDs);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMeshDescriptionBase::execGetNumVertexVertexInstances)
	{
		P_GET_STRUCT(FVertexID,Z_Param_VertexID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetNumVertexVertexInstances(Z_Param_VertexID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMeshDescriptionBase::execGetVertexVertexInstances)
	{
		P_GET_STRUCT(FVertexID,Z_Param_VertexID);
		P_GET_TARRAY_REF(FVertexInstanceID,Z_Param_Out_OutVertexInstanceIDs);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetVertexVertexInstances(Z_Param_VertexID,Z_Param_Out_OutVertexInstanceIDs);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMeshDescriptionBase::execGetNumVertexConnectedEdges)
	{
		P_GET_STRUCT(FVertexID,Z_Param_VertexID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetNumVertexConnectedEdges(Z_Param_VertexID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMeshDescriptionBase::execGetVertexConnectedEdges)
	{
		P_GET_STRUCT(FVertexID,Z_Param_VertexID);
		P_GET_TARRAY_REF(FEdgeID,Z_Param_Out_OutEdgeIDs);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetVertexConnectedEdges(Z_Param_VertexID,Z_Param_Out_OutEdgeIDs);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMeshDescriptionBase::execGetVertexPairEdge)
	{
		P_GET_STRUCT(FVertexID,Z_Param_VertexID0);
		P_GET_STRUCT(FVertexID,Z_Param_VertexID1);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FEdgeID*)Z_Param__Result=P_THIS->GetVertexPairEdge(Z_Param_VertexID0,Z_Param_VertexID1);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMeshDescriptionBase::execIsVertexOrphaned)
	{
		P_GET_STRUCT(FVertexID,Z_Param_VertexID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsVertexOrphaned(Z_Param_VertexID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMeshDescriptionBase::execIsPolygonGroupValid)
	{
		P_GET_STRUCT(FPolygonGroupID,Z_Param_PolygonGroupID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsPolygonGroupValid(Z_Param_PolygonGroupID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMeshDescriptionBase::execDeletePolygonGroup)
	{
		P_GET_STRUCT(FPolygonGroupID,Z_Param_PolygonGroupID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DeletePolygonGroup(Z_Param_PolygonGroupID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMeshDescriptionBase::execCreatePolygonGroupWithID)
	{
		P_GET_STRUCT(FPolygonGroupID,Z_Param_PolygonGroupID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CreatePolygonGroupWithID(Z_Param_PolygonGroupID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMeshDescriptionBase::execCreatePolygonGroup)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FPolygonGroupID*)Z_Param__Result=P_THIS->CreatePolygonGroup();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMeshDescriptionBase::execReserveNewPolygonGroups)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_NumberOfNewPolygonGroups);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ReserveNewPolygonGroups(Z_Param_NumberOfNewPolygonGroups);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMeshDescriptionBase::execIsPolygonValid)
	{
		P_GET_STRUCT(FPolygonID,Z_Param_PolygonID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsPolygonValid(Z_Param_PolygonID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMeshDescriptionBase::execDeletePolygon)
	{
		P_GET_STRUCT(FPolygonID,Z_Param_PolygonID);
		P_GET_TARRAY_REF(FEdgeID,Z_Param_Out_OrphanedEdges);
		P_GET_TARRAY_REF(FVertexInstanceID,Z_Param_Out_OrphanedVertexInstances);
		P_GET_TARRAY_REF(FPolygonGroupID,Z_Param_Out_OrphanedPolygonGroups);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DeletePolygon(Z_Param_PolygonID,Z_Param_Out_OrphanedEdges,Z_Param_Out_OrphanedVertexInstances,Z_Param_Out_OrphanedPolygonGroups);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMeshDescriptionBase::execCreatePolygonWithID)
	{
		P_GET_STRUCT(FPolygonID,Z_Param_PolygonID);
		P_GET_STRUCT(FPolygonGroupID,Z_Param_PolygonGroupID);
		P_GET_TARRAY_REF(FVertexInstanceID,Z_Param_Out_VertexInstanceIDs);
		P_GET_TARRAY_REF(FEdgeID,Z_Param_Out_NewEdgeIDs);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CreatePolygonWithID(Z_Param_PolygonID,Z_Param_PolygonGroupID,Z_Param_Out_VertexInstanceIDs,Z_Param_Out_NewEdgeIDs);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMeshDescriptionBase::execCreatePolygon)
	{
		P_GET_STRUCT(FPolygonGroupID,Z_Param_PolygonGroupID);
		P_GET_TARRAY_REF(FVertexInstanceID,Z_Param_Out_VertexInstanceIDs);
		P_GET_TARRAY_REF(FEdgeID,Z_Param_Out_NewEdgeIDs);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FPolygonID*)Z_Param__Result=P_THIS->CreatePolygon(Z_Param_PolygonGroupID,Z_Param_Out_VertexInstanceIDs,Z_Param_Out_NewEdgeIDs);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMeshDescriptionBase::execReserveNewPolygons)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_NumberOfNewPolygons);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ReserveNewPolygons(Z_Param_NumberOfNewPolygons);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMeshDescriptionBase::execIsTriangleValid)
	{
		P_GET_STRUCT(FTriangleID,Z_Param_TriangleID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsTriangleValid(Z_Param_TriangleID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMeshDescriptionBase::execDeleteTriangle)
	{
		P_GET_STRUCT(FTriangleID,Z_Param_TriangleID);
		P_GET_TARRAY_REF(FEdgeID,Z_Param_Out_OrphanedEdges);
		P_GET_TARRAY_REF(FVertexInstanceID,Z_Param_Out_OrphanedVertexInstances);
		P_GET_TARRAY_REF(FPolygonGroupID,Z_Param_Out_OrphanedPolygonGroupsPtr);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DeleteTriangle(Z_Param_TriangleID,Z_Param_Out_OrphanedEdges,Z_Param_Out_OrphanedVertexInstances,Z_Param_Out_OrphanedPolygonGroupsPtr);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMeshDescriptionBase::execCreateTriangleWithID)
	{
		P_GET_STRUCT(FTriangleID,Z_Param_TriangleID);
		P_GET_STRUCT(FPolygonGroupID,Z_Param_PolygonGroupID);
		P_GET_TARRAY_REF(FVertexInstanceID,Z_Param_Out_VertexInstanceIDs);
		P_GET_TARRAY_REF(FEdgeID,Z_Param_Out_NewEdgeIDs);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CreateTriangleWithID(Z_Param_TriangleID,Z_Param_PolygonGroupID,Z_Param_Out_VertexInstanceIDs,Z_Param_Out_NewEdgeIDs);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMeshDescriptionBase::execCreateTriangle)
	{
		P_GET_STRUCT(FPolygonGroupID,Z_Param_PolygonGroupID);
		P_GET_TARRAY_REF(FVertexInstanceID,Z_Param_Out_VertexInstanceIDs);
		P_GET_TARRAY_REF(FEdgeID,Z_Param_Out_NewEdgeIDs);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTriangleID*)Z_Param__Result=P_THIS->CreateTriangle(Z_Param_PolygonGroupID,Z_Param_Out_VertexInstanceIDs,Z_Param_Out_NewEdgeIDs);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMeshDescriptionBase::execReserveNewTriangles)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_NumberOfNewTriangles);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ReserveNewTriangles(Z_Param_NumberOfNewTriangles);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMeshDescriptionBase::execIsEdgeValid)
	{
		P_GET_STRUCT(FEdgeID,Z_Param_EdgeID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsEdgeValid(Z_Param_EdgeID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMeshDescriptionBase::execDeleteEdge)
	{
		P_GET_STRUCT(FEdgeID,Z_Param_EdgeID);
		P_GET_TARRAY_REF(FVertexID,Z_Param_Out_OrphanedVertices);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DeleteEdge(Z_Param_EdgeID,Z_Param_Out_OrphanedVertices);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMeshDescriptionBase::execCreateEdgeWithID)
	{
		P_GET_STRUCT(FEdgeID,Z_Param_EdgeID);
		P_GET_STRUCT(FVertexID,Z_Param_VertexID0);
		P_GET_STRUCT(FVertexID,Z_Param_VertexID1);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CreateEdgeWithID(Z_Param_EdgeID,Z_Param_VertexID0,Z_Param_VertexID1);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMeshDescriptionBase::execCreateEdge)
	{
		P_GET_STRUCT(FVertexID,Z_Param_VertexID0);
		P_GET_STRUCT(FVertexID,Z_Param_VertexID1);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FEdgeID*)Z_Param__Result=P_THIS->CreateEdge(Z_Param_VertexID0,Z_Param_VertexID1);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMeshDescriptionBase::execReserveNewEdges)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_NumberOfNewEdges);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ReserveNewEdges(Z_Param_NumberOfNewEdges);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMeshDescriptionBase::execIsVertexInstanceValid)
	{
		P_GET_STRUCT(FVertexInstanceID,Z_Param_VertexInstanceID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsVertexInstanceValid(Z_Param_VertexInstanceID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMeshDescriptionBase::execDeleteVertexInstance)
	{
		P_GET_STRUCT(FVertexInstanceID,Z_Param_VertexInstanceID);
		P_GET_TARRAY_REF(FVertexID,Z_Param_Out_OrphanedVertices);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DeleteVertexInstance(Z_Param_VertexInstanceID,Z_Param_Out_OrphanedVertices);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMeshDescriptionBase::execCreateVertexInstanceWithID)
	{
		P_GET_STRUCT(FVertexInstanceID,Z_Param_VertexInstanceID);
		P_GET_STRUCT(FVertexID,Z_Param_VertexID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CreateVertexInstanceWithID(Z_Param_VertexInstanceID,Z_Param_VertexID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMeshDescriptionBase::execCreateVertexInstance)
	{
		P_GET_STRUCT(FVertexID,Z_Param_VertexID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVertexInstanceID*)Z_Param__Result=P_THIS->CreateVertexInstance(Z_Param_VertexID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMeshDescriptionBase::execReserveNewVertexInstances)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_NumberOfNewVertexInstances);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ReserveNewVertexInstances(Z_Param_NumberOfNewVertexInstances);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMeshDescriptionBase::execIsVertexValid)
	{
		P_GET_STRUCT(FVertexID,Z_Param_VertexID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsVertexValid(Z_Param_VertexID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMeshDescriptionBase::execDeleteVertex)
	{
		P_GET_STRUCT(FVertexID,Z_Param_VertexID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DeleteVertex(Z_Param_VertexID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMeshDescriptionBase::execCreateVertexWithID)
	{
		P_GET_STRUCT(FVertexID,Z_Param_VertexID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CreateVertexWithID(Z_Param_VertexID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMeshDescriptionBase::execCreateVertex)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVertexID*)Z_Param__Result=P_THIS->CreateVertex();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMeshDescriptionBase::execReserveNewVertices)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_NumberOfNewVertices);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ReserveNewVertices(Z_Param_NumberOfNewVertices);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMeshDescriptionBase::execIsEmpty)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsEmpty();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMeshDescriptionBase::execEmpty)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Empty();
		P_NATIVE_END;
	}
	void UMeshDescriptionBase::StaticRegisterNativesUMeshDescriptionBase()
	{
		UClass* Class = UMeshDescriptionBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ComputePolygonTriangulation", &UMeshDescriptionBase::execComputePolygonTriangulation },
			{ "CreateEdge", &UMeshDescriptionBase::execCreateEdge },
			{ "CreateEdgeWithID", &UMeshDescriptionBase::execCreateEdgeWithID },
			{ "CreatePolygon", &UMeshDescriptionBase::execCreatePolygon },
			{ "CreatePolygonGroup", &UMeshDescriptionBase::execCreatePolygonGroup },
			{ "CreatePolygonGroupWithID", &UMeshDescriptionBase::execCreatePolygonGroupWithID },
			{ "CreatePolygonWithID", &UMeshDescriptionBase::execCreatePolygonWithID },
			{ "CreateTriangle", &UMeshDescriptionBase::execCreateTriangle },
			{ "CreateTriangleWithID", &UMeshDescriptionBase::execCreateTriangleWithID },
			{ "CreateVertex", &UMeshDescriptionBase::execCreateVertex },
			{ "CreateVertexInstance", &UMeshDescriptionBase::execCreateVertexInstance },
			{ "CreateVertexInstanceWithID", &UMeshDescriptionBase::execCreateVertexInstanceWithID },
			{ "CreateVertexWithID", &UMeshDescriptionBase::execCreateVertexWithID },
			{ "DeleteEdge", &UMeshDescriptionBase::execDeleteEdge },
			{ "DeletePolygon", &UMeshDescriptionBase::execDeletePolygon },
			{ "DeletePolygonGroup", &UMeshDescriptionBase::execDeletePolygonGroup },
			{ "DeleteTriangle", &UMeshDescriptionBase::execDeleteTriangle },
			{ "DeleteVertex", &UMeshDescriptionBase::execDeleteVertex },
			{ "DeleteVertexInstance", &UMeshDescriptionBase::execDeleteVertexInstance },
			{ "Empty", &UMeshDescriptionBase::execEmpty },
			{ "GetEdgeConnectedPolygons", &UMeshDescriptionBase::execGetEdgeConnectedPolygons },
			{ "GetEdgeConnectedTriangles", &UMeshDescriptionBase::execGetEdgeConnectedTriangles },
			{ "GetEdgeVertex", &UMeshDescriptionBase::execGetEdgeVertex },
			{ "GetEdgeVertices", &UMeshDescriptionBase::execGetEdgeVertices },
			{ "GetNumEdgeConnectedPolygons", &UMeshDescriptionBase::execGetNumEdgeConnectedPolygons },
			{ "GetNumEdgeConnectedTriangles", &UMeshDescriptionBase::execGetNumEdgeConnectedTriangles },
			{ "GetNumPolygonGroupPolygons", &UMeshDescriptionBase::execGetNumPolygonGroupPolygons },
			{ "GetNumPolygonInternalEdges", &UMeshDescriptionBase::execGetNumPolygonInternalEdges },
			{ "GetNumPolygonTriangles", &UMeshDescriptionBase::execGetNumPolygonTriangles },
			{ "GetNumPolygonVertices", &UMeshDescriptionBase::execGetNumPolygonVertices },
			{ "GetNumVertexConnectedEdges", &UMeshDescriptionBase::execGetNumVertexConnectedEdges },
			{ "GetNumVertexConnectedPolygons", &UMeshDescriptionBase::execGetNumVertexConnectedPolygons },
			{ "GetNumVertexConnectedTriangles", &UMeshDescriptionBase::execGetNumVertexConnectedTriangles },
			{ "GetNumVertexInstanceConnectedPolygons", &UMeshDescriptionBase::execGetNumVertexInstanceConnectedPolygons },
			{ "GetNumVertexInstanceConnectedTriangles", &UMeshDescriptionBase::execGetNumVertexInstanceConnectedTriangles },
			{ "GetNumVertexVertexInstances", &UMeshDescriptionBase::execGetNumVertexVertexInstances },
			{ "GetPolygonAdjacentPolygons", &UMeshDescriptionBase::execGetPolygonAdjacentPolygons },
			{ "GetPolygonGroupPolygons", &UMeshDescriptionBase::execGetPolygonGroupPolygons },
			{ "GetPolygonInternalEdges", &UMeshDescriptionBase::execGetPolygonInternalEdges },
			{ "GetPolygonPerimeterEdges", &UMeshDescriptionBase::execGetPolygonPerimeterEdges },
			{ "GetPolygonPolygonGroup", &UMeshDescriptionBase::execGetPolygonPolygonGroup },
			{ "GetPolygonTriangles", &UMeshDescriptionBase::execGetPolygonTriangles },
			{ "GetPolygonVertexInstances", &UMeshDescriptionBase::execGetPolygonVertexInstances },
			{ "GetPolygonVertices", &UMeshDescriptionBase::execGetPolygonVertices },
			{ "GetTriangleAdjacentTriangles", &UMeshDescriptionBase::execGetTriangleAdjacentTriangles },
			{ "GetTriangleEdges", &UMeshDescriptionBase::execGetTriangleEdges },
			{ "GetTrianglePolygon", &UMeshDescriptionBase::execGetTrianglePolygon },
			{ "GetTrianglePolygonGroup", &UMeshDescriptionBase::execGetTrianglePolygonGroup },
			{ "GetTriangleVertexInstance", &UMeshDescriptionBase::execGetTriangleVertexInstance },
			{ "GetTriangleVertexInstances", &UMeshDescriptionBase::execGetTriangleVertexInstances },
			{ "GetTriangleVertices", &UMeshDescriptionBase::execGetTriangleVertices },
			{ "GetVertexAdjacentVertices", &UMeshDescriptionBase::execGetVertexAdjacentVertices },
			{ "GetVertexConnectedEdges", &UMeshDescriptionBase::execGetVertexConnectedEdges },
			{ "GetVertexConnectedPolygons", &UMeshDescriptionBase::execGetVertexConnectedPolygons },
			{ "GetVertexConnectedTriangles", &UMeshDescriptionBase::execGetVertexConnectedTriangles },
			{ "GetVertexInstanceConnectedPolygons", &UMeshDescriptionBase::execGetVertexInstanceConnectedPolygons },
			{ "GetVertexInstanceConnectedTriangles", &UMeshDescriptionBase::execGetVertexInstanceConnectedTriangles },
			{ "GetVertexInstanceForPolygonVertex", &UMeshDescriptionBase::execGetVertexInstanceForPolygonVertex },
			{ "GetVertexInstanceForTriangleVertex", &UMeshDescriptionBase::execGetVertexInstanceForTriangleVertex },
			{ "GetVertexInstancePairEdge", &UMeshDescriptionBase::execGetVertexInstancePairEdge },
			{ "GetVertexInstanceVertex", &UMeshDescriptionBase::execGetVertexInstanceVertex },
			{ "GetVertexPairEdge", &UMeshDescriptionBase::execGetVertexPairEdge },
			{ "GetVertexPosition", &UMeshDescriptionBase::execGetVertexPosition },
			{ "GetVertexVertexInstances", &UMeshDescriptionBase::execGetVertexVertexInstances },
			{ "IsEdgeInternal", &UMeshDescriptionBase::execIsEdgeInternal },
			{ "IsEdgeInternalToPolygon", &UMeshDescriptionBase::execIsEdgeInternalToPolygon },
			{ "IsEdgeValid", &UMeshDescriptionBase::execIsEdgeValid },
			{ "IsEmpty", &UMeshDescriptionBase::execIsEmpty },
			{ "IsPolygonGroupValid", &UMeshDescriptionBase::execIsPolygonGroupValid },
			{ "IsPolygonValid", &UMeshDescriptionBase::execIsPolygonValid },
			{ "IsTrianglePartOfNgon", &UMeshDescriptionBase::execIsTrianglePartOfNgon },
			{ "IsTriangleValid", &UMeshDescriptionBase::execIsTriangleValid },
			{ "IsVertexInstanceValid", &UMeshDescriptionBase::execIsVertexInstanceValid },
			{ "IsVertexOrphaned", &UMeshDescriptionBase::execIsVertexOrphaned },
			{ "IsVertexValid", &UMeshDescriptionBase::execIsVertexValid },
			{ "ReserveNewEdges", &UMeshDescriptionBase::execReserveNewEdges },
			{ "ReserveNewPolygonGroups", &UMeshDescriptionBase::execReserveNewPolygonGroups },
			{ "ReserveNewPolygons", &UMeshDescriptionBase::execReserveNewPolygons },
			{ "ReserveNewTriangles", &UMeshDescriptionBase::execReserveNewTriangles },
			{ "ReserveNewVertexInstances", &UMeshDescriptionBase::execReserveNewVertexInstances },
			{ "ReserveNewVertices", &UMeshDescriptionBase::execReserveNewVertices },
			{ "ReversePolygonFacing", &UMeshDescriptionBase::execReversePolygonFacing },
			{ "SetPolygonPolygonGroup", &UMeshDescriptionBase::execSetPolygonPolygonGroup },
			{ "SetPolygonVertexInstance", &UMeshDescriptionBase::execSetPolygonVertexInstance },
			{ "SetVertexPosition", &UMeshDescriptionBase::execSetVertexPosition },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMeshDescriptionBase_ComputePolygonTriangulation_Statics
	{
		struct MeshDescriptionBase_eventComputePolygonTriangulation_Parms
		{
			FPolygonID PolygonID;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PolygonID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_ComputePolygonTriangulation_Statics::NewProp_PolygonID = { "PolygonID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MeshDescriptionBase_eventComputePolygonTriangulation_Parms, PolygonID), Z_Construct_UScriptStruct_FPolygonID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeshDescriptionBase_ComputePolygonTriangulation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_ComputePolygonTriangulation_Statics::NewProp_PolygonID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMeshDescriptionBase_ComputePolygonTriangulation_Statics::Function_MetaDataParams[] = {
		{ "Category", "MeshDescription" },
		{ "Comment", "/** Generates triangles and internal edges for the given polygon */" },
		{ "ModuleRelativePath", "Public/MeshDescriptionBase.h" },
		{ "ToolTip", "Generates triangles and internal edges for the given polygon" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshDescriptionBase_ComputePolygonTriangulation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshDescriptionBase, nullptr, "ComputePolygonTriangulation", nullptr, nullptr, sizeof(MeshDescriptionBase_eventComputePolygonTriangulation_Parms), Z_Construct_UFunction_UMeshDescriptionBase_ComputePolygonTriangulation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_ComputePolygonTriangulation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMeshDescriptionBase_ComputePolygonTriangulation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_ComputePolygonTriangulation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMeshDescriptionBase_ComputePolygonTriangulation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMeshDescriptionBase_ComputePolygonTriangulation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMeshDescriptionBase_CreateEdge_Statics
	{
		struct MeshDescriptionBase_eventCreateEdge_Parms
		{
			FVertexID VertexID0;
			FVertexID VertexID1;
			FEdgeID ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VertexID1;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VertexID0;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_CreateEdge_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MeshDescriptionBase_eventCreateEdge_Parms, ReturnValue), Z_Construct_UScriptStruct_FEdgeID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_CreateEdge_Statics::NewProp_VertexID1 = { "VertexID1", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MeshDescriptionBase_eventCreateEdge_Parms, VertexID1), Z_Construct_UScriptStruct_FVertexID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_CreateEdge_Statics::NewProp_VertexID0 = { "VertexID0", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MeshDescriptionBase_eventCreateEdge_Parms, VertexID0), Z_Construct_UScriptStruct_FVertexID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeshDescriptionBase_CreateEdge_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_CreateEdge_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_CreateEdge_Statics::NewProp_VertexID1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_CreateEdge_Statics::NewProp_VertexID0,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMeshDescriptionBase_CreateEdge_Statics::Function_MetaDataParams[] = {
		{ "Category", "MeshDescription" },
		{ "Comment", "/** Adds a new edge to the mesh and returns its ID */" },
		{ "ModuleRelativePath", "Public/MeshDescriptionBase.h" },
		{ "ToolTip", "Adds a new edge to the mesh and returns its ID" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshDescriptionBase_CreateEdge_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshDescriptionBase, nullptr, "CreateEdge", nullptr, nullptr, sizeof(MeshDescriptionBase_eventCreateEdge_Parms), Z_Construct_UFunction_UMeshDescriptionBase_CreateEdge_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_CreateEdge_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMeshDescriptionBase_CreateEdge_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_CreateEdge_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMeshDescriptionBase_CreateEdge()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMeshDescriptionBase_CreateEdge_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMeshDescriptionBase_CreateEdgeWithID_Statics
	{
		struct MeshDescriptionBase_eventCreateEdgeWithID_Parms
		{
			FEdgeID EdgeID;
			FVertexID VertexID0;
			FVertexID VertexID1;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VertexID1;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VertexID0;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EdgeID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_CreateEdgeWithID_Statics::NewProp_VertexID1 = { "VertexID1", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MeshDescriptionBase_eventCreateEdgeWithID_Parms, VertexID1), Z_Construct_UScriptStruct_FVertexID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_CreateEdgeWithID_Statics::NewProp_VertexID0 = { "VertexID0", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MeshDescriptionBase_eventCreateEdgeWithID_Parms, VertexID0), Z_Construct_UScriptStruct_FVertexID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_CreateEdgeWithID_Statics::NewProp_EdgeID = { "EdgeID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MeshDescriptionBase_eventCreateEdgeWithID_Parms, EdgeID), Z_Construct_UScriptStruct_FEdgeID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeshDescriptionBase_CreateEdgeWithID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_CreateEdgeWithID_Statics::NewProp_VertexID1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_CreateEdgeWithID_Statics::NewProp_VertexID0,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_CreateEdgeWithID_Statics::NewProp_EdgeID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMeshDescriptionBase_CreateEdgeWithID_Statics::Function_MetaDataParams[] = {
		{ "Category", "MeshDescription" },
		{ "Comment", "/** Adds a new edge to the mesh with the given ID */" },
		{ "ModuleRelativePath", "Public/MeshDescriptionBase.h" },
		{ "ToolTip", "Adds a new edge to the mesh with the given ID" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshDescriptionBase_CreateEdgeWithID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshDescriptionBase, nullptr, "CreateEdgeWithID", nullptr, nullptr, sizeof(MeshDescriptionBase_eventCreateEdgeWithID_Parms), Z_Construct_UFunction_UMeshDescriptionBase_CreateEdgeWithID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_CreateEdgeWithID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMeshDescriptionBase_CreateEdgeWithID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_CreateEdgeWithID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMeshDescriptionBase_CreateEdgeWithID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMeshDescriptionBase_CreateEdgeWithID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMeshDescriptionBase_CreatePolygon_Statics
	{
		struct MeshDescriptionBase_eventCreatePolygon_Parms
		{
			FPolygonGroupID PolygonGroupID;
			TArray<FVertexInstanceID> VertexInstanceIDs;
			TArray<FEdgeID> NewEdgeIDs;
			FPolygonID ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_NewEdgeIDs;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewEdgeIDs_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_VertexInstanceIDs;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VertexInstanceIDs_Inner;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PolygonGroupID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_CreatePolygon_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MeshDescriptionBase_eventCreatePolygon_Parms, ReturnValue), Z_Construct_UScriptStruct_FPolygonID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_CreatePolygon_Statics::NewProp_NewEdgeIDs = { "NewEdgeIDs", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MeshDescriptionBase_eventCreatePolygon_Parms, NewEdgeIDs), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_CreatePolygon_Statics::NewProp_NewEdgeIDs_Inner = { "NewEdgeIDs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FEdgeID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_CreatePolygon_Statics::NewProp_VertexInstanceIDs = { "VertexInstanceIDs", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MeshDescriptionBase_eventCreatePolygon_Parms, VertexInstanceIDs), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_CreatePolygon_Statics::NewProp_VertexInstanceIDs_Inner = { "VertexInstanceIDs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVertexInstanceID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_CreatePolygon_Statics::NewProp_PolygonGroupID = { "PolygonGroupID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MeshDescriptionBase_eventCreatePolygon_Parms, PolygonGroupID), Z_Construct_UScriptStruct_FPolygonGroupID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeshDescriptionBase_CreatePolygon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_CreatePolygon_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_CreatePolygon_Statics::NewProp_NewEdgeIDs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_CreatePolygon_Statics::NewProp_NewEdgeIDs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_CreatePolygon_Statics::NewProp_VertexInstanceIDs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_CreatePolygon_Statics::NewProp_VertexInstanceIDs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_CreatePolygon_Statics::NewProp_PolygonGroupID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMeshDescriptionBase_CreatePolygon_Statics::Function_MetaDataParams[] = {
		{ "Category", "MeshDescription" },
		{ "Comment", "/** Adds a new polygon to the mesh and returns its ID. This will also make any missing edges, and all constituent triangles. */" },
		{ "ModuleRelativePath", "Public/MeshDescriptionBase.h" },
		{ "ToolTip", "Adds a new polygon to the mesh and returns its ID. This will also make any missing edges, and all constituent triangles." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshDescriptionBase_CreatePolygon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshDescriptionBase, nullptr, "CreatePolygon", nullptr, nullptr, sizeof(MeshDescriptionBase_eventCreatePolygon_Parms), Z_Construct_UFunction_UMeshDescriptionBase_CreatePolygon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_CreatePolygon_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMeshDescriptionBase_CreatePolygon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_CreatePolygon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMeshDescriptionBase_CreatePolygon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMeshDescriptionBase_CreatePolygon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMeshDescriptionBase_CreatePolygonGroup_Statics
	{
		struct MeshDescriptionBase_eventCreatePolygonGroup_Parms
		{
			FPolygonGroupID ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_CreatePolygonGroup_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MeshDescriptionBase_eventCreatePolygonGroup_Parms, ReturnValue), Z_Construct_UScriptStruct_FPolygonGroupID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeshDescriptionBase_CreatePolygonGroup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_CreatePolygonGroup_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMeshDescriptionBase_CreatePolygonGroup_Statics::Function_MetaDataParams[] = {
		{ "Category", "MeshDescription" },
		{ "Comment", "/** Adds a new polygon group to the mesh and returns its ID */" },
		{ "ModuleRelativePath", "Public/MeshDescriptionBase.h" },
		{ "ToolTip", "Adds a new polygon group to the mesh and returns its ID" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshDescriptionBase_CreatePolygonGroup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshDescriptionBase, nullptr, "CreatePolygonGroup", nullptr, nullptr, sizeof(MeshDescriptionBase_eventCreatePolygonGroup_Parms), Z_Construct_UFunction_UMeshDescriptionBase_CreatePolygonGroup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_CreatePolygonGroup_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMeshDescriptionBase_CreatePolygonGroup_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_CreatePolygonGroup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMeshDescriptionBase_CreatePolygonGroup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMeshDescriptionBase_CreatePolygonGroup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMeshDescriptionBase_CreatePolygonGroupWithID_Statics
	{
		struct MeshDescriptionBase_eventCreatePolygonGroupWithID_Parms
		{
			FPolygonGroupID PolygonGroupID;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PolygonGroupID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_CreatePolygonGroupWithID_Statics::NewProp_PolygonGroupID = { "PolygonGroupID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MeshDescriptionBase_eventCreatePolygonGroupWithID_Parms, PolygonGroupID), Z_Construct_UScriptStruct_FPolygonGroupID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeshDescriptionBase_CreatePolygonGroupWithID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_CreatePolygonGroupWithID_Statics::NewProp_PolygonGroupID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMeshDescriptionBase_CreatePolygonGroupWithID_Statics::Function_MetaDataParams[] = {
		{ "Category", "MeshDescription" },
		{ "Comment", "/** Adds a new polygon group to the mesh with the given ID */" },
		{ "ModuleRelativePath", "Public/MeshDescriptionBase.h" },
		{ "ToolTip", "Adds a new polygon group to the mesh with the given ID" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshDescriptionBase_CreatePolygonGroupWithID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshDescriptionBase, nullptr, "CreatePolygonGroupWithID", nullptr, nullptr, sizeof(MeshDescriptionBase_eventCreatePolygonGroupWithID_Parms), Z_Construct_UFunction_UMeshDescriptionBase_CreatePolygonGroupWithID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_CreatePolygonGroupWithID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMeshDescriptionBase_CreatePolygonGroupWithID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_CreatePolygonGroupWithID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMeshDescriptionBase_CreatePolygonGroupWithID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMeshDescriptionBase_CreatePolygonGroupWithID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMeshDescriptionBase_CreatePolygonWithID_Statics
	{
		struct MeshDescriptionBase_eventCreatePolygonWithID_Parms
		{
			FPolygonID PolygonID;
			FPolygonGroupID PolygonGroupID;
			TArray<FVertexInstanceID> VertexInstanceIDs;
			TArray<FEdgeID> NewEdgeIDs;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_NewEdgeIDs;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewEdgeIDs_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_VertexInstanceIDs;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VertexInstanceIDs_Inner;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PolygonGroupID;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PolygonID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_CreatePolygonWithID_Statics::NewProp_NewEdgeIDs = { "NewEdgeIDs", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MeshDescriptionBase_eventCreatePolygonWithID_Parms, NewEdgeIDs), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_CreatePolygonWithID_Statics::NewProp_NewEdgeIDs_Inner = { "NewEdgeIDs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FEdgeID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_CreatePolygonWithID_Statics::NewProp_VertexInstanceIDs = { "VertexInstanceIDs", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MeshDescriptionBase_eventCreatePolygonWithID_Parms, VertexInstanceIDs), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_CreatePolygonWithID_Statics::NewProp_VertexInstanceIDs_Inner = { "VertexInstanceIDs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVertexInstanceID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_CreatePolygonWithID_Statics::NewProp_PolygonGroupID = { "PolygonGroupID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MeshDescriptionBase_eventCreatePolygonWithID_Parms, PolygonGroupID), Z_Construct_UScriptStruct_FPolygonGroupID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_CreatePolygonWithID_Statics::NewProp_PolygonID = { "PolygonID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MeshDescriptionBase_eventCreatePolygonWithID_Parms, PolygonID), Z_Construct_UScriptStruct_FPolygonID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeshDescriptionBase_CreatePolygonWithID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_CreatePolygonWithID_Statics::NewProp_NewEdgeIDs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_CreatePolygonWithID_Statics::NewProp_NewEdgeIDs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_CreatePolygonWithID_Statics::NewProp_VertexInstanceIDs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_CreatePolygonWithID_Statics::NewProp_VertexInstanceIDs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_CreatePolygonWithID_Statics::NewProp_PolygonGroupID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_CreatePolygonWithID_Statics::NewProp_PolygonID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMeshDescriptionBase_CreatePolygonWithID_Statics::Function_MetaDataParams[] = {
		{ "Category", "MeshDescription" },
		{ "Comment", "/** Adds a new polygon to the mesh with the given ID. This will also make any missing edges, and all constituent triangles. */" },
		{ "ModuleRelativePath", "Public/MeshDescriptionBase.h" },
		{ "ToolTip", "Adds a new polygon to the mesh with the given ID. This will also make any missing edges, and all constituent triangles." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshDescriptionBase_CreatePolygonWithID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshDescriptionBase, nullptr, "CreatePolygonWithID", nullptr, nullptr, sizeof(MeshDescriptionBase_eventCreatePolygonWithID_Parms), Z_Construct_UFunction_UMeshDescriptionBase_CreatePolygonWithID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_CreatePolygonWithID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMeshDescriptionBase_CreatePolygonWithID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_CreatePolygonWithID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMeshDescriptionBase_CreatePolygonWithID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMeshDescriptionBase_CreatePolygonWithID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMeshDescriptionBase_CreateTriangle_Statics
	{
		struct MeshDescriptionBase_eventCreateTriangle_Parms
		{
			FPolygonGroupID PolygonGroupID;
			TArray<FVertexInstanceID> VertexInstanceIDs;
			TArray<FEdgeID> NewEdgeIDs;
			FTriangleID ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_NewEdgeIDs;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewEdgeIDs_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VertexInstanceIDs_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_VertexInstanceIDs;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VertexInstanceIDs_Inner;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PolygonGroupID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_CreateTriangle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MeshDescriptionBase_eventCreateTriangle_Parms, ReturnValue), Z_Construct_UScriptStruct_FTriangleID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_CreateTriangle_Statics::NewProp_NewEdgeIDs = { "NewEdgeIDs", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MeshDescriptionBase_eventCreateTriangle_Parms, NewEdgeIDs), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_CreateTriangle_Statics::NewProp_NewEdgeIDs_Inner = { "NewEdgeIDs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FEdgeID, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMeshDescriptionBase_CreateTriangle_Statics::NewProp_VertexInstanceIDs_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_CreateTriangle_Statics::NewProp_VertexInstanceIDs = { "VertexInstanceIDs", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MeshDescriptionBase_eventCreateTriangle_Parms, VertexInstanceIDs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UMeshDescriptionBase_CreateTriangle_Statics::NewProp_VertexInstanceIDs_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_CreateTriangle_Statics::NewProp_VertexInstanceIDs_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_CreateTriangle_Statics::NewProp_VertexInstanceIDs_Inner = { "VertexInstanceIDs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVertexInstanceID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_CreateTriangle_Statics::NewProp_PolygonGroupID = { "PolygonGroupID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MeshDescriptionBase_eventCreateTriangle_Parms, PolygonGroupID), Z_Construct_UScriptStruct_FPolygonGroupID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeshDescriptionBase_CreateTriangle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_CreateTriangle_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_CreateTriangle_Statics::NewProp_NewEdgeIDs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_CreateTriangle_Statics::NewProp_NewEdgeIDs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_CreateTriangle_Statics::NewProp_VertexInstanceIDs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_CreateTriangle_Statics::NewProp_VertexInstanceIDs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_CreateTriangle_Statics::NewProp_PolygonGroupID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMeshDescriptionBase_CreateTriangle_Statics::Function_MetaDataParams[] = {
		{ "Category", "MeshDescription" },
		{ "Comment", "/** Adds a new triangle to the mesh and returns its ID. This will also make an encapsulating polygon, and any missing edges. */" },
		{ "ModuleRelativePath", "Public/MeshDescriptionBase.h" },
		{ "ToolTip", "Adds a new triangle to the mesh and returns its ID. This will also make an encapsulating polygon, and any missing edges." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshDescriptionBase_CreateTriangle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshDescriptionBase, nullptr, "CreateTriangle", nullptr, nullptr, sizeof(MeshDescriptionBase_eventCreateTriangle_Parms), Z_Construct_UFunction_UMeshDescriptionBase_CreateTriangle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_CreateTriangle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMeshDescriptionBase_CreateTriangle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_CreateTriangle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMeshDescriptionBase_CreateTriangle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMeshDescriptionBase_CreateTriangle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMeshDescriptionBase_CreateTriangleWithID_Statics
	{
		struct MeshDescriptionBase_eventCreateTriangleWithID_Parms
		{
			FTriangleID TriangleID;
			FPolygonGroupID PolygonGroupID;
			TArray<FVertexInstanceID> VertexInstanceIDs;
			TArray<FEdgeID> NewEdgeIDs;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_NewEdgeIDs;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewEdgeIDs_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VertexInstanceIDs_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_VertexInstanceIDs;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VertexInstanceIDs_Inner;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PolygonGroupID;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TriangleID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_CreateTriangleWithID_Statics::NewProp_NewEdgeIDs = { "NewEdgeIDs", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MeshDescriptionBase_eventCreateTriangleWithID_Parms, NewEdgeIDs), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_CreateTriangleWithID_Statics::NewProp_NewEdgeIDs_Inner = { "NewEdgeIDs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FEdgeID, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMeshDescriptionBase_CreateTriangleWithID_Statics::NewProp_VertexInstanceIDs_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_CreateTriangleWithID_Statics::NewProp_VertexInstanceIDs = { "VertexInstanceIDs", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MeshDescriptionBase_eventCreateTriangleWithID_Parms, VertexInstanceIDs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UMeshDescriptionBase_CreateTriangleWithID_Statics::NewProp_VertexInstanceIDs_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_CreateTriangleWithID_Statics::NewProp_VertexInstanceIDs_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_CreateTriangleWithID_Statics::NewProp_VertexInstanceIDs_Inner = { "VertexInstanceIDs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVertexInstanceID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_CreateTriangleWithID_Statics::NewProp_PolygonGroupID = { "PolygonGroupID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MeshDescriptionBase_eventCreateTriangleWithID_Parms, PolygonGroupID), Z_Construct_UScriptStruct_FPolygonGroupID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_CreateTriangleWithID_Statics::NewProp_TriangleID = { "TriangleID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MeshDescriptionBase_eventCreateTriangleWithID_Parms, TriangleID), Z_Construct_UScriptStruct_FTriangleID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeshDescriptionBase_CreateTriangleWithID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_CreateTriangleWithID_Statics::NewProp_NewEdgeIDs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_CreateTriangleWithID_Statics::NewProp_NewEdgeIDs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_CreateTriangleWithID_Statics::NewProp_VertexInstanceIDs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_CreateTriangleWithID_Statics::NewProp_VertexInstanceIDs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_CreateTriangleWithID_Statics::NewProp_PolygonGroupID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_CreateTriangleWithID_Statics::NewProp_TriangleID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMeshDescriptionBase_CreateTriangleWithID_Statics::Function_MetaDataParams[] = {
		{ "Category", "MeshDescription" },
		{ "Comment", "/** Adds a new triangle to the mesh with the given ID. This will also make an encapsulating polygon, and any missing edges. */" },
		{ "ModuleRelativePath", "Public/MeshDescriptionBase.h" },
		{ "ToolTip", "Adds a new triangle to the mesh with the given ID. This will also make an encapsulating polygon, and any missing edges." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshDescriptionBase_CreateTriangleWithID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshDescriptionBase, nullptr, "CreateTriangleWithID", nullptr, nullptr, sizeof(MeshDescriptionBase_eventCreateTriangleWithID_Parms), Z_Construct_UFunction_UMeshDescriptionBase_CreateTriangleWithID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_CreateTriangleWithID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMeshDescriptionBase_CreateTriangleWithID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_CreateTriangleWithID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMeshDescriptionBase_CreateTriangleWithID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMeshDescriptionBase_CreateTriangleWithID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMeshDescriptionBase_CreateVertex_Statics
	{
		struct MeshDescriptionBase_eventCreateVertex_Parms
		{
			FVertexID ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_CreateVertex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MeshDescriptionBase_eventCreateVertex_Parms, ReturnValue), Z_Construct_UScriptStruct_FVertexID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeshDescriptionBase_CreateVertex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_CreateVertex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMeshDescriptionBase_CreateVertex_Statics::Function_MetaDataParams[] = {
		{ "Category", "MeshDescription" },
		{ "Comment", "/** Adds a new vertex to the mesh and returns its ID */" },
		{ "ModuleRelativePath", "Public/MeshDescriptionBase.h" },
		{ "ToolTip", "Adds a new vertex to the mesh and returns its ID" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshDescriptionBase_CreateVertex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshDescriptionBase, nullptr, "CreateVertex", nullptr, nullptr, sizeof(MeshDescriptionBase_eventCreateVertex_Parms), Z_Construct_UFunction_UMeshDescriptionBase_CreateVertex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_CreateVertex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMeshDescriptionBase_CreateVertex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_CreateVertex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMeshDescriptionBase_CreateVertex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMeshDescriptionBase_CreateVertex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMeshDescriptionBase_CreateVertexInstance_Statics
	{
		struct MeshDescriptionBase_eventCreateVertexInstance_Parms
		{
			FVertexID VertexID;
			FVertexInstanceID ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VertexID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_CreateVertexInstance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MeshDescriptionBase_eventCreateVertexInstance_Parms, ReturnValue), Z_Construct_UScriptStruct_FVertexInstanceID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_CreateVertexInstance_Statics::NewProp_VertexID = { "VertexID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MeshDescriptionBase_eventCreateVertexInstance_Parms, VertexID), Z_Construct_UScriptStruct_FVertexID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeshDescriptionBase_CreateVertexInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_CreateVertexInstance_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_CreateVertexInstance_Statics::NewProp_VertexID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMeshDescriptionBase_CreateVertexInstance_Statics::Function_MetaDataParams[] = {
		{ "Category", "MeshDescription" },
		{ "Comment", "/** Adds a new vertex instance to the mesh and returns its ID */" },
		{ "ModuleRelativePath", "Public/MeshDescriptionBase.h" },
		{ "ToolTip", "Adds a new vertex instance to the mesh and returns its ID" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshDescriptionBase_CreateVertexInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshDescriptionBase, nullptr, "CreateVertexInstance", nullptr, nullptr, sizeof(MeshDescriptionBase_eventCreateVertexInstance_Parms), Z_Construct_UFunction_UMeshDescriptionBase_CreateVertexInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_CreateVertexInstance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMeshDescriptionBase_CreateVertexInstance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_CreateVertexInstance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMeshDescriptionBase_CreateVertexInstance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMeshDescriptionBase_CreateVertexInstance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMeshDescriptionBase_CreateVertexInstanceWithID_Statics
	{
		struct MeshDescriptionBase_eventCreateVertexInstanceWithID_Parms
		{
			FVertexInstanceID VertexInstanceID;
			FVertexID VertexID;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VertexID;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VertexInstanceID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_CreateVertexInstanceWithID_Statics::NewProp_VertexID = { "VertexID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MeshDescriptionBase_eventCreateVertexInstanceWithID_Parms, VertexID), Z_Construct_UScriptStruct_FVertexID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_CreateVertexInstanceWithID_Statics::NewProp_VertexInstanceID = { "VertexInstanceID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MeshDescriptionBase_eventCreateVertexInstanceWithID_Parms, VertexInstanceID), Z_Construct_UScriptStruct_FVertexInstanceID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeshDescriptionBase_CreateVertexInstanceWithID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_CreateVertexInstanceWithID_Statics::NewProp_VertexID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_CreateVertexInstanceWithID_Statics::NewProp_VertexInstanceID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMeshDescriptionBase_CreateVertexInstanceWithID_Statics::Function_MetaDataParams[] = {
		{ "Category", "MeshDescription" },
		{ "Comment", "/** Adds a new vertex instance to the mesh with the given ID */" },
		{ "ModuleRelativePath", "Public/MeshDescriptionBase.h" },
		{ "ToolTip", "Adds a new vertex instance to the mesh with the given ID" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshDescriptionBase_CreateVertexInstanceWithID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshDescriptionBase, nullptr, "CreateVertexInstanceWithID", nullptr, nullptr, sizeof(MeshDescriptionBase_eventCreateVertexInstanceWithID_Parms), Z_Construct_UFunction_UMeshDescriptionBase_CreateVertexInstanceWithID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_CreateVertexInstanceWithID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMeshDescriptionBase_CreateVertexInstanceWithID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_CreateVertexInstanceWithID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMeshDescriptionBase_CreateVertexInstanceWithID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMeshDescriptionBase_CreateVertexInstanceWithID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMeshDescriptionBase_CreateVertexWithID_Statics
	{
		struct MeshDescriptionBase_eventCreateVertexWithID_Parms
		{
			FVertexID VertexID;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VertexID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_CreateVertexWithID_Statics::NewProp_VertexID = { "VertexID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MeshDescriptionBase_eventCreateVertexWithID_Parms, VertexID), Z_Construct_UScriptStruct_FVertexID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeshDescriptionBase_CreateVertexWithID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_CreateVertexWithID_Statics::NewProp_VertexID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMeshDescriptionBase_CreateVertexWithID_Statics::Function_MetaDataParams[] = {
		{ "Category", "MeshDescription" },
		{ "Comment", "/** Adds a new vertex to the mesh with the given ID */" },
		{ "ModuleRelativePath", "Public/MeshDescriptionBase.h" },
		{ "ToolTip", "Adds a new vertex to the mesh with the given ID" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshDescriptionBase_CreateVertexWithID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshDescriptionBase, nullptr, "CreateVertexWithID", nullptr, nullptr, sizeof(MeshDescriptionBase_eventCreateVertexWithID_Parms), Z_Construct_UFunction_UMeshDescriptionBase_CreateVertexWithID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_CreateVertexWithID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMeshDescriptionBase_CreateVertexWithID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_CreateVertexWithID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMeshDescriptionBase_CreateVertexWithID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMeshDescriptionBase_CreateVertexWithID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMeshDescriptionBase_DeleteEdge_Statics
	{
		struct MeshDescriptionBase_eventDeleteEdge_Parms
		{
			FEdgeID EdgeID;
			TArray<FVertexID> OrphanedVertices;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OrphanedVertices;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OrphanedVertices_Inner;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EdgeID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_DeleteEdge_Statics::NewProp_OrphanedVertices = { "OrphanedVertices", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MeshDescriptionBase_eventDeleteEdge_Parms, OrphanedVertices), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_DeleteEdge_Statics::NewProp_OrphanedVertices_Inner = { "OrphanedVertices", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVertexID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_DeleteEdge_Statics::NewProp_EdgeID = { "EdgeID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MeshDescriptionBase_eventDeleteEdge_Parms, EdgeID), Z_Construct_UScriptStruct_FEdgeID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeshDescriptionBase_DeleteEdge_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_DeleteEdge_Statics::NewProp_OrphanedVertices,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_DeleteEdge_Statics::NewProp_OrphanedVertices_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_DeleteEdge_Statics::NewProp_EdgeID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMeshDescriptionBase_DeleteEdge_Statics::Function_MetaDataParams[] = {
		{ "Category", "MeshDescription" },
		{ "Comment", "/** Deletes an edge from a mesh */" },
		{ "ModuleRelativePath", "Public/MeshDescriptionBase.h" },
		{ "ToolTip", "Deletes an edge from a mesh" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshDescriptionBase_DeleteEdge_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshDescriptionBase, nullptr, "DeleteEdge", nullptr, nullptr, sizeof(MeshDescriptionBase_eventDeleteEdge_Parms), Z_Construct_UFunction_UMeshDescriptionBase_DeleteEdge_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_DeleteEdge_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMeshDescriptionBase_DeleteEdge_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_DeleteEdge_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMeshDescriptionBase_DeleteEdge()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMeshDescriptionBase_DeleteEdge_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMeshDescriptionBase_DeletePolygon_Statics
	{
		struct MeshDescriptionBase_eventDeletePolygon_Parms
		{
			FPolygonID PolygonID;
			TArray<FEdgeID> OrphanedEdges;
			TArray<FVertexInstanceID> OrphanedVertexInstances;
			TArray<FPolygonGroupID> OrphanedPolygonGroups;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OrphanedPolygonGroups;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OrphanedPolygonGroups_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OrphanedVertexInstances;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OrphanedVertexInstances_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OrphanedEdges;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OrphanedEdges_Inner;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PolygonID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_DeletePolygon_Statics::NewProp_OrphanedPolygonGroups = { "OrphanedPolygonGroups", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MeshDescriptionBase_eventDeletePolygon_Parms, OrphanedPolygonGroups), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_DeletePolygon_Statics::NewProp_OrphanedPolygonGroups_Inner = { "OrphanedPolygonGroups", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPolygonGroupID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_DeletePolygon_Statics::NewProp_OrphanedVertexInstances = { "OrphanedVertexInstances", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MeshDescriptionBase_eventDeletePolygon_Parms, OrphanedVertexInstances), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_DeletePolygon_Statics::NewProp_OrphanedVertexInstances_Inner = { "OrphanedVertexInstances", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVertexInstanceID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_DeletePolygon_Statics::NewProp_OrphanedEdges = { "OrphanedEdges", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MeshDescriptionBase_eventDeletePolygon_Parms, OrphanedEdges), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_DeletePolygon_Statics::NewProp_OrphanedEdges_Inner = { "OrphanedEdges", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FEdgeID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_DeletePolygon_Statics::NewProp_PolygonID = { "PolygonID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MeshDescriptionBase_eventDeletePolygon_Parms, PolygonID), Z_Construct_UScriptStruct_FPolygonID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeshDescriptionBase_DeletePolygon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_DeletePolygon_Statics::NewProp_OrphanedPolygonGroups,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_DeletePolygon_Statics::NewProp_OrphanedPolygonGroups_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_DeletePolygon_Statics::NewProp_OrphanedVertexInstances,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_DeletePolygon_Statics::NewProp_OrphanedVertexInstances_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_DeletePolygon_Statics::NewProp_OrphanedEdges,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_DeletePolygon_Statics::NewProp_OrphanedEdges_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_DeletePolygon_Statics::NewProp_PolygonID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMeshDescriptionBase_DeletePolygon_Statics::Function_MetaDataParams[] = {
		{ "Category", "MeshDescription" },
		{ "Comment", "/** Deletes a polygon from the mesh */" },
		{ "ModuleRelativePath", "Public/MeshDescriptionBase.h" },
		{ "ToolTip", "Deletes a polygon from the mesh" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshDescriptionBase_DeletePolygon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshDescriptionBase, nullptr, "DeletePolygon", nullptr, nullptr, sizeof(MeshDescriptionBase_eventDeletePolygon_Parms), Z_Construct_UFunction_UMeshDescriptionBase_DeletePolygon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_DeletePolygon_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMeshDescriptionBase_DeletePolygon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_DeletePolygon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMeshDescriptionBase_DeletePolygon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMeshDescriptionBase_DeletePolygon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMeshDescriptionBase_DeletePolygonGroup_Statics
	{
		struct MeshDescriptionBase_eventDeletePolygonGroup_Parms
		{
			FPolygonGroupID PolygonGroupID;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PolygonGroupID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_DeletePolygonGroup_Statics::NewProp_PolygonGroupID = { "PolygonGroupID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MeshDescriptionBase_eventDeletePolygonGroup_Parms, PolygonGroupID), Z_Construct_UScriptStruct_FPolygonGroupID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeshDescriptionBase_DeletePolygonGroup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_DeletePolygonGroup_Statics::NewProp_PolygonGroupID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMeshDescriptionBase_DeletePolygonGroup_Statics::Function_MetaDataParams[] = {
		{ "Category", "MeshDescription" },
		{ "Comment", "/** Deletes a polygon group from the mesh */" },
		{ "ModuleRelativePath", "Public/MeshDescriptionBase.h" },
		{ "ToolTip", "Deletes a polygon group from the mesh" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshDescriptionBase_DeletePolygonGroup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshDescriptionBase, nullptr, "DeletePolygonGroup", nullptr, nullptr, sizeof(MeshDescriptionBase_eventDeletePolygonGroup_Parms), Z_Construct_UFunction_UMeshDescriptionBase_DeletePolygonGroup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_DeletePolygonGroup_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMeshDescriptionBase_DeletePolygonGroup_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_DeletePolygonGroup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMeshDescriptionBase_DeletePolygonGroup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMeshDescriptionBase_DeletePolygonGroup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMeshDescriptionBase_DeleteTriangle_Statics
	{
		struct MeshDescriptionBase_eventDeleteTriangle_Parms
		{
			FTriangleID TriangleID;
			TArray<FEdgeID> OrphanedEdges;
			TArray<FVertexInstanceID> OrphanedVertexInstances;
			TArray<FPolygonGroupID> OrphanedPolygonGroupsPtr;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OrphanedPolygonGroupsPtr;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OrphanedPolygonGroupsPtr_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OrphanedVertexInstances;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OrphanedVertexInstances_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OrphanedEdges;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OrphanedEdges_Inner;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TriangleID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_DeleteTriangle_Statics::NewProp_OrphanedPolygonGroupsPtr = { "OrphanedPolygonGroupsPtr", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MeshDescriptionBase_eventDeleteTriangle_Parms, OrphanedPolygonGroupsPtr), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_DeleteTriangle_Statics::NewProp_OrphanedPolygonGroupsPtr_Inner = { "OrphanedPolygonGroupsPtr", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPolygonGroupID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_DeleteTriangle_Statics::NewProp_OrphanedVertexInstances = { "OrphanedVertexInstances", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MeshDescriptionBase_eventDeleteTriangle_Parms, OrphanedVertexInstances), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_DeleteTriangle_Statics::NewProp_OrphanedVertexInstances_Inner = { "OrphanedVertexInstances", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVertexInstanceID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_DeleteTriangle_Statics::NewProp_OrphanedEdges = { "OrphanedEdges", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MeshDescriptionBase_eventDeleteTriangle_Parms, OrphanedEdges), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_DeleteTriangle_Statics::NewProp_OrphanedEdges_Inner = { "OrphanedEdges", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FEdgeID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_DeleteTriangle_Statics::NewProp_TriangleID = { "TriangleID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MeshDescriptionBase_eventDeleteTriangle_Parms, TriangleID), Z_Construct_UScriptStruct_FTriangleID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeshDescriptionBase_DeleteTriangle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_DeleteTriangle_Statics::NewProp_OrphanedPolygonGroupsPtr,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_DeleteTriangle_Statics::NewProp_OrphanedPolygonGroupsPtr_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_DeleteTriangle_Statics::NewProp_OrphanedVertexInstances,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_DeleteTriangle_Statics::NewProp_OrphanedVertexInstances_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_DeleteTriangle_Statics::NewProp_OrphanedEdges,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_DeleteTriangle_Statics::NewProp_OrphanedEdges_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_DeleteTriangle_Statics::NewProp_TriangleID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMeshDescriptionBase_DeleteTriangle_Statics::Function_MetaDataParams[] = {
		{ "Category", "MeshDescription" },
		{ "Comment", "/** Deletes a triangle from the mesh */" },
		{ "ModuleRelativePath", "Public/MeshDescriptionBase.h" },
		{ "ToolTip", "Deletes a triangle from the mesh" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshDescriptionBase_DeleteTriangle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshDescriptionBase, nullptr, "DeleteTriangle", nullptr, nullptr, sizeof(MeshDescriptionBase_eventDeleteTriangle_Parms), Z_Construct_UFunction_UMeshDescriptionBase_DeleteTriangle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_DeleteTriangle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMeshDescriptionBase_DeleteTriangle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_DeleteTriangle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMeshDescriptionBase_DeleteTriangle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMeshDescriptionBase_DeleteTriangle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMeshDescriptionBase_DeleteVertex_Statics
	{
		struct MeshDescriptionBase_eventDeleteVertex_Parms
		{
			FVertexID VertexID;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VertexID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_DeleteVertex_Statics::NewProp_VertexID = { "VertexID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MeshDescriptionBase_eventDeleteVertex_Parms, VertexID), Z_Construct_UScriptStruct_FVertexID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeshDescriptionBase_DeleteVertex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_DeleteVertex_Statics::NewProp_VertexID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMeshDescriptionBase_DeleteVertex_Statics::Function_MetaDataParams[] = {
		{ "Category", "MeshDescription" },
		{ "Comment", "/** Deletes a vertex from the mesh */" },
		{ "ModuleRelativePath", "Public/MeshDescriptionBase.h" },
		{ "ToolTip", "Deletes a vertex from the mesh" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshDescriptionBase_DeleteVertex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshDescriptionBase, nullptr, "DeleteVertex", nullptr, nullptr, sizeof(MeshDescriptionBase_eventDeleteVertex_Parms), Z_Construct_UFunction_UMeshDescriptionBase_DeleteVertex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_DeleteVertex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMeshDescriptionBase_DeleteVertex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_DeleteVertex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMeshDescriptionBase_DeleteVertex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMeshDescriptionBase_DeleteVertex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMeshDescriptionBase_DeleteVertexInstance_Statics
	{
		struct MeshDescriptionBase_eventDeleteVertexInstance_Parms
		{
			FVertexInstanceID VertexInstanceID;
			TArray<FVertexID> OrphanedVertices;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OrphanedVertices;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OrphanedVertices_Inner;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VertexInstanceID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_DeleteVertexInstance_Statics::NewProp_OrphanedVertices = { "OrphanedVertices", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MeshDescriptionBase_eventDeleteVertexInstance_Parms, OrphanedVertices), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_DeleteVertexInstance_Statics::NewProp_OrphanedVertices_Inner = { "OrphanedVertices", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVertexID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_DeleteVertexInstance_Statics::NewProp_VertexInstanceID = { "VertexInstanceID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MeshDescriptionBase_eventDeleteVertexInstance_Parms, VertexInstanceID), Z_Construct_UScriptStruct_FVertexInstanceID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeshDescriptionBase_DeleteVertexInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_DeleteVertexInstance_Statics::NewProp_OrphanedVertices,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_DeleteVertexInstance_Statics::NewProp_OrphanedVertices_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_DeleteVertexInstance_Statics::NewProp_VertexInstanceID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMeshDescriptionBase_DeleteVertexInstance_Statics::Function_MetaDataParams[] = {
		{ "Category", "MeshDescription" },
		{ "Comment", "/** Deletes a vertex instance from a mesh */" },
		{ "ModuleRelativePath", "Public/MeshDescriptionBase.h" },
		{ "ToolTip", "Deletes a vertex instance from a mesh" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshDescriptionBase_DeleteVertexInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshDescriptionBase, nullptr, "DeleteVertexInstance", nullptr, nullptr, sizeof(MeshDescriptionBase_eventDeleteVertexInstance_Parms), Z_Construct_UFunction_UMeshDescriptionBase_DeleteVertexInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_DeleteVertexInstance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMeshDescriptionBase_DeleteVertexInstance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_DeleteVertexInstance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMeshDescriptionBase_DeleteVertexInstance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMeshDescriptionBase_DeleteVertexInstance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMeshDescriptionBase_Empty_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMeshDescriptionBase_Empty_Statics::Function_MetaDataParams[] = {
		{ "Category", "MeshDescription" },
		{ "Comment", "/** Empty the mesh description */" },
		{ "ModuleRelativePath", "Public/MeshDescriptionBase.h" },
		{ "ToolTip", "Empty the mesh description" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshDescriptionBase_Empty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshDescriptionBase, nullptr, "Empty", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMeshDescriptionBase_Empty_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_Empty_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMeshDescriptionBase_Empty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMeshDescriptionBase_Empty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMeshDescriptionBase_GetEdgeConnectedPolygons_Statics
	{
		struct MeshDescriptionBase_eventGetEdgeConnectedPolygons_Parms
		{
			FEdgeID EdgeID;
			TArray<FPolygonID> OutConnectedPolygonIDs;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutConnectedPolygonIDs;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutConnectedPolygonIDs_Inner;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EdgeID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_GetEdgeConnectedPolygons_Statics::NewProp_OutConnectedPolygonIDs = { "OutConnectedPolygonIDs", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MeshDescriptionBase_eventGetEdgeConnectedPolygons_Parms, OutConnectedPolygonIDs), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_GetEdgeConnectedPolygons_Statics::NewProp_OutConnectedPolygonIDs_Inner = { "OutConnectedPolygonIDs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPolygonID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_GetEdgeConnectedPolygons_Statics::NewProp_EdgeID = { "EdgeID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MeshDescriptionBase_eventGetEdgeConnectedPolygons_Parms, EdgeID), Z_Construct_UScriptStruct_FEdgeID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeshDescriptionBase_GetEdgeConnectedPolygons_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_GetEdgeConnectedPolygons_Statics::NewProp_OutConnectedPolygonIDs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_GetEdgeConnectedPolygons_Statics::NewProp_OutConnectedPolygonIDs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_GetEdgeConnectedPolygons_Statics::NewProp_EdgeID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMeshDescriptionBase_GetEdgeConnectedPolygons_Statics::Function_MetaDataParams[] = {
		{ "Category", "MeshDescription" },
		{ "Comment", "/** Returns the polygons connected to this edge */" },
		{ "ModuleRelativePath", "Public/MeshDescriptionBase.h" },
		{ "ToolTip", "Returns the polygons connected to this edge" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshDescriptionBase_GetEdgeConnectedPolygons_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshDescriptionBase, nullptr, "GetEdgeConnectedPolygons", nullptr, nullptr, sizeof(MeshDescriptionBase_eventGetEdgeConnectedPolygons_Parms), Z_Construct_UFunction_UMeshDescriptionBase_GetEdgeConnectedPolygons_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_GetEdgeConnectedPolygons_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMeshDescriptionBase_GetEdgeConnectedPolygons_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_GetEdgeConnectedPolygons_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMeshDescriptionBase_GetEdgeConnectedPolygons()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMeshDescriptionBase_GetEdgeConnectedPolygons_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMeshDescriptionBase_GetEdgeConnectedTriangles_Statics
	{
		struct MeshDescriptionBase_eventGetEdgeConnectedTriangles_Parms
		{
			FEdgeID EdgeID;
			TArray<FTriangleID> OutConnectedTriangleIDs;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutConnectedTriangleIDs;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutConnectedTriangleIDs_Inner;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EdgeID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_GetEdgeConnectedTriangles_Statics::NewProp_OutConnectedTriangleIDs = { "OutConnectedTriangleIDs", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MeshDescriptionBase_eventGetEdgeConnectedTriangles_Parms, OutConnectedTriangleIDs), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_GetEdgeConnectedTriangles_Statics::NewProp_OutConnectedTriangleIDs_Inner = { "OutConnectedTriangleIDs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FTriangleID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_GetEdgeConnectedTriangles_Statics::NewProp_EdgeID = { "EdgeID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MeshDescriptionBase_eventGetEdgeConnectedTriangles_Parms, EdgeID), Z_Construct_UScriptStruct_FEdgeID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeshDescriptionBase_GetEdgeConnectedTriangles_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_GetEdgeConnectedTriangles_Statics::NewProp_OutConnectedTriangleIDs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_GetEdgeConnectedTriangles_Statics::NewProp_OutConnectedTriangleIDs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_GetEdgeConnectedTriangles_Statics::NewProp_EdgeID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMeshDescriptionBase_GetEdgeConnectedTriangles_Statics::Function_MetaDataParams[] = {
		{ "Category", "MeshDescription" },
		{ "Comment", "/** Returns reference to an array of triangle IDs connected to this edge */" },
		{ "ModuleRelativePath", "Public/MeshDescriptionBase.h" },
		{ "ToolTip", "Returns reference to an array of triangle IDs connected to this edge" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshDescriptionBase_GetEdgeConnectedTriangles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshDescriptionBase, nullptr, "GetEdgeConnectedTriangles", nullptr, nullptr, sizeof(MeshDescriptionBase_eventGetEdgeConnectedTriangles_Parms), Z_Construct_UFunction_UMeshDescriptionBase_GetEdgeConnectedTriangles_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_GetEdgeConnectedTriangles_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMeshDescriptionBase_GetEdgeConnectedTriangles_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_GetEdgeConnectedTriangles_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMeshDescriptionBase_GetEdgeConnectedTriangles()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMeshDescriptionBase_GetEdgeConnectedTriangles_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMeshDescriptionBase_GetEdgeVertex_Statics
	{
		struct MeshDescriptionBase_eventGetEdgeVertex_Parms
		{
			FEdgeID EdgeID;
			int32 VertexNumber;
			FVertexID ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_VertexNumber;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EdgeID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_GetEdgeVertex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MeshDescriptionBase_eventGetEdgeVertex_Parms, ReturnValue), Z_Construct_UScriptStruct_FVertexID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_GetEdgeVertex_Statics::NewProp_VertexNumber = { "VertexNumber", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MeshDescriptionBase_eventGetEdgeVertex_Parms, VertexNumber), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_GetEdgeVertex_Statics::NewProp_EdgeID = { "EdgeID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MeshDescriptionBase_eventGetEdgeVertex_Parms, EdgeID), Z_Construct_UScriptStruct_FEdgeID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeshDescriptionBase_GetEdgeVertex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_GetEdgeVertex_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_GetEdgeVertex_Statics::NewProp_VertexNumber,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_GetEdgeVertex_Statics::NewProp_EdgeID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMeshDescriptionBase_GetEdgeVertex_Statics::Function_MetaDataParams[] = {
		{ "Category", "MeshDescription" },
		{ "Comment", "/** Returns the vertex ID corresponding to one of the edge endpoints */" },
		{ "ModuleRelativePath", "Public/MeshDescriptionBase.h" },
		{ "ToolTip", "Returns the vertex ID corresponding to one of the edge endpoints" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshDescriptionBase_GetEdgeVertex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshDescriptionBase, nullptr, "GetEdgeVertex", nullptr, nullptr, sizeof(MeshDescriptionBase_eventGetEdgeVertex_Parms), Z_Construct_UFunction_UMeshDescriptionBase_GetEdgeVertex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_GetEdgeVertex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMeshDescriptionBase_GetEdgeVertex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_GetEdgeVertex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMeshDescriptionBase_GetEdgeVertex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMeshDescriptionBase_GetEdgeVertex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMeshDescriptionBase_GetEdgeVertices_Statics
	{
		struct MeshDescriptionBase_eventGetEdgeVertices_Parms
		{
			FEdgeID EdgeID;
			TArray<FVertexID> OutVertexIDs;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutVertexIDs;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutVertexIDs_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EdgeID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EdgeID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_GetEdgeVertices_Statics::NewProp_OutVertexIDs = { "OutVertexIDs", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MeshDescriptionBase_eventGetEdgeVertices_Parms, OutVertexIDs), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_GetEdgeVertices_Statics::NewProp_OutVertexIDs_Inner = { "OutVertexIDs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVertexID, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMeshDescriptionBase_GetEdgeVertices_Statics::NewProp_EdgeID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_GetEdgeVertices_Statics::NewProp_EdgeID = { "EdgeID", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MeshDescriptionBase_eventGetEdgeVertices_Parms, EdgeID), Z_Construct_UScriptStruct_FEdgeID, METADATA_PARAMS(Z_Construct_UFunction_UMeshDescriptionBase_GetEdgeVertices_Statics::NewProp_EdgeID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_GetEdgeVertices_Statics::NewProp_EdgeID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeshDescriptionBase_GetEdgeVertices_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_GetEdgeVertices_Statics::NewProp_OutVertexIDs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_GetEdgeVertices_Statics::NewProp_OutVertexIDs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_GetEdgeVertices_Statics::NewProp_EdgeID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMeshDescriptionBase_GetEdgeVertices_Statics::Function_MetaDataParams[] = {
		{ "Category", "MeshDescription" },
		{ "Comment", "/** Returns a pair of vertex IDs defining the edge */" },
		{ "ModuleRelativePath", "Public/MeshDescriptionBase.h" },
		{ "ToolTip", "Returns a pair of vertex IDs defining the edge" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshDescriptionBase_GetEdgeVertices_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshDescriptionBase, nullptr, "GetEdgeVertices", nullptr, nullptr, sizeof(MeshDescriptionBase_eventGetEdgeVertices_Parms), Z_Construct_UFunction_UMeshDescriptionBase_GetEdgeVertices_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_GetEdgeVertices_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMeshDescriptionBase_GetEdgeVertices_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_GetEdgeVertices_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMeshDescriptionBase_GetEdgeVertices()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMeshDescriptionBase_GetEdgeVertices_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMeshDescriptionBase_GetNumEdgeConnectedPolygons_Statics
	{
		struct MeshDescriptionBase_eventGetNumEdgeConnectedPolygons_Parms
		{
			FEdgeID EdgeID;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EdgeID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_GetNumEdgeConnectedPolygons_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MeshDescriptionBase_eventGetNumEdgeConnectedPolygons_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_GetNumEdgeConnectedPolygons_Statics::NewProp_EdgeID = { "EdgeID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MeshDescriptionBase_eventGetNumEdgeConnectedPolygons_Parms, EdgeID), Z_Construct_UScriptStruct_FEdgeID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeshDescriptionBase_GetNumEdgeConnectedPolygons_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_GetNumEdgeConnectedPolygons_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_GetNumEdgeConnectedPolygons_Statics::NewProp_EdgeID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMeshDescriptionBase_GetNumEdgeConnectedPolygons_Statics::Function_MetaDataParams[] = {
		{ "Category", "MeshDescription" },
		{ "Comment", "/** Returns the number of polygons connected to this edge */" },
		{ "ModuleRelativePath", "Public/MeshDescriptionBase.h" },
		{ "ToolTip", "Returns the number of polygons connected to this edge" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshDescriptionBase_GetNumEdgeConnectedPolygons_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshDescriptionBase, nullptr, "GetNumEdgeConnectedPolygons", nullptr, nullptr, sizeof(MeshDescriptionBase_eventGetNumEdgeConnectedPolygons_Parms), Z_Construct_UFunction_UMeshDescriptionBase_GetNumEdgeConnectedPolygons_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_GetNumEdgeConnectedPolygons_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMeshDescriptionBase_GetNumEdgeConnectedPolygons_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_GetNumEdgeConnectedPolygons_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMeshDescriptionBase_GetNumEdgeConnectedPolygons()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMeshDescriptionBase_GetNumEdgeConnectedPolygons_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMeshDescriptionBase_GetNumEdgeConnectedTriangles_Statics
	{
		struct MeshDescriptionBase_eventGetNumEdgeConnectedTriangles_Parms
		{
			FEdgeID EdgeID;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EdgeID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_GetNumEdgeConnectedTriangles_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MeshDescriptionBase_eventGetNumEdgeConnectedTriangles_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_GetNumEdgeConnectedTriangles_Statics::NewProp_EdgeID = { "EdgeID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MeshDescriptionBase_eventGetNumEdgeConnectedTriangles_Parms, EdgeID), Z_Construct_UScriptStruct_FEdgeID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeshDescriptionBase_GetNumEdgeConnectedTriangles_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_GetNumEdgeConnectedTriangles_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_GetNumEdgeConnectedTriangles_Statics::NewProp_EdgeID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMeshDescriptionBase_GetNumEdgeConnectedTriangles_Statics::Function_MetaDataParams[] = {
		{ "Category", "MeshDescription" },
		{ "Comment", "/** Returns the number of triangles connected to this edge */" },
		{ "ModuleRelativePath", "Public/MeshDescriptionBase.h" },
		{ "ToolTip", "Returns the number of triangles connected to this edge" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshDescriptionBase_GetNumEdgeConnectedTriangles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshDescriptionBase, nullptr, "GetNumEdgeConnectedTriangles", nullptr, nullptr, sizeof(MeshDescriptionBase_eventGetNumEdgeConnectedTriangles_Parms), Z_Construct_UFunction_UMeshDescriptionBase_GetNumEdgeConnectedTriangles_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_GetNumEdgeConnectedTriangles_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMeshDescriptionBase_GetNumEdgeConnectedTriangles_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_GetNumEdgeConnectedTriangles_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMeshDescriptionBase_GetNumEdgeConnectedTriangles()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMeshDescriptionBase_GetNumEdgeConnectedTriangles_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMeshDescriptionBase_GetNumPolygonGroupPolygons_Statics
	{
		struct MeshDescriptionBase_eventGetNumPolygonGroupPolygons_Parms
		{
			FPolygonGroupID PolygonGroupID;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PolygonGroupID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_GetNumPolygonGroupPolygons_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MeshDescriptionBase_eventGetNumPolygonGroupPolygons_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_GetNumPolygonGroupPolygons_Statics::NewProp_PolygonGroupID = { "PolygonGroupID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MeshDescriptionBase_eventGetNumPolygonGroupPolygons_Parms, PolygonGroupID), Z_Construct_UScriptStruct_FPolygonGroupID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeshDescriptionBase_GetNumPolygonGroupPolygons_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_GetNumPolygonGroupPolygons_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_GetNumPolygonGroupPolygons_Statics::NewProp_PolygonGroupID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMeshDescriptionBase_GetNumPolygonGroupPolygons_Statics::Function_MetaDataParams[] = {
		{ "Category", "MeshDescription" },
		{ "Comment", "/** Returns the number of polygons in this polygon group */" },
		{ "ModuleRelativePath", "Public/MeshDescriptionBase.h" },
		{ "ToolTip", "Returns the number of polygons in this polygon group" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshDescriptionBase_GetNumPolygonGroupPolygons_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshDescriptionBase, nullptr, "GetNumPolygonGroupPolygons", nullptr, nullptr, sizeof(MeshDescriptionBase_eventGetNumPolygonGroupPolygons_Parms), Z_Construct_UFunction_UMeshDescriptionBase_GetNumPolygonGroupPolygons_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_GetNumPolygonGroupPolygons_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMeshDescriptionBase_GetNumPolygonGroupPolygons_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_GetNumPolygonGroupPolygons_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMeshDescriptionBase_GetNumPolygonGroupPolygons()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMeshDescriptionBase_GetNumPolygonGroupPolygons_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMeshDescriptionBase_GetNumPolygonInternalEdges_Statics
	{
		struct MeshDescriptionBase_eventGetNumPolygonInternalEdges_Parms
		{
			FPolygonID PolygonID;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PolygonID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_GetNumPolygonInternalEdges_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MeshDescriptionBase_eventGetNumPolygonInternalEdges_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_GetNumPolygonInternalEdges_Statics::NewProp_PolygonID = { "PolygonID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MeshDescriptionBase_eventGetNumPolygonInternalEdges_Parms, PolygonID), Z_Construct_UScriptStruct_FPolygonID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeshDescriptionBase_GetNumPolygonInternalEdges_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_GetNumPolygonInternalEdges_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_GetNumPolygonInternalEdges_Statics::NewProp_PolygonID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMeshDescriptionBase_GetNumPolygonInternalEdges_Statics::Function_MetaDataParams[] = {
		{ "Category", "MeshDescription" },
		{ "Comment", "/** Return the number of internal edges in this polygon */" },
		{ "ModuleRelativePath", "Public/MeshDescriptionBase.h" },
		{ "ToolTip", "Return the number of internal edges in this polygon" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshDescriptionBase_GetNumPolygonInternalEdges_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshDescriptionBase, nullptr, "GetNumPolygonInternalEdges", nullptr, nullptr, sizeof(MeshDescriptionBase_eventGetNumPolygonInternalEdges_Parms), Z_Construct_UFunction_UMeshDescriptionBase_GetNumPolygonInternalEdges_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_GetNumPolygonInternalEdges_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMeshDescriptionBase_GetNumPolygonInternalEdges_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_GetNumPolygonInternalEdges_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMeshDescriptionBase_GetNumPolygonInternalEdges()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMeshDescriptionBase_GetNumPolygonInternalEdges_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMeshDescriptionBase_GetNumPolygonTriangles_Statics
	{
		struct MeshDescriptionBase_eventGetNumPolygonTriangles_Parms
		{
			FPolygonID PolygonID;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PolygonID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_GetNumPolygonTriangles_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MeshDescriptionBase_eventGetNumPolygonTriangles_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_GetNumPolygonTriangles_Statics::NewProp_PolygonID = { "PolygonID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MeshDescriptionBase_eventGetNumPolygonTriangles_Parms, PolygonID), Z_Construct_UScriptStruct_FPolygonID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeshDescriptionBase_GetNumPolygonTriangles_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_GetNumPolygonTriangles_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_GetNumPolygonTriangles_Statics::NewProp_PolygonID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMeshDescriptionBase_GetNumPolygonTriangles_Statics::Function_MetaDataParams[] = {
		{ "Category", "MeshDescription" },
		{ "Comment", "/** Return the number of triangles which comprise this polygon */" },
		{ "ModuleRelativePath", "Public/MeshDescriptionBase.h" },
		{ "ToolTip", "Return the number of triangles which comprise this polygon" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshDescriptionBase_GetNumPolygonTriangles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshDescriptionBase, nullptr, "GetNumPolygonTriangles", nullptr, nullptr, sizeof(MeshDescriptionBase_eventGetNumPolygonTriangles_Parms), Z_Construct_UFunction_UMeshDescriptionBase_GetNumPolygonTriangles_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_GetNumPolygonTriangles_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMeshDescriptionBase_GetNumPolygonTriangles_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_GetNumPolygonTriangles_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMeshDescriptionBase_GetNumPolygonTriangles()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMeshDescriptionBase_GetNumPolygonTriangles_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMeshDescriptionBase_GetNumPolygonVertices_Statics
	{
		struct MeshDescriptionBase_eventGetNumPolygonVertices_Parms
		{
			FPolygonID PolygonID;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PolygonID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_GetNumPolygonVertices_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MeshDescriptionBase_eventGetNumPolygonVertices_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_GetNumPolygonVertices_Statics::NewProp_PolygonID = { "PolygonID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MeshDescriptionBase_eventGetNumPolygonVertices_Parms, PolygonID), Z_Construct_UScriptStruct_FPolygonID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeshDescriptionBase_GetNumPolygonVertices_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_GetNumPolygonVertices_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_GetNumPolygonVertices_Statics::NewProp_PolygonID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMeshDescriptionBase_GetNumPolygonVertices_Statics::Function_MetaDataParams[] = {
		{ "Category", "MeshDescription" },
		{ "Comment", "/** Returns the number of vertices this polygon has */" },
		{ "ModuleRelativePath", "Public/MeshDescriptionBase.h" },
		{ "ToolTip", "Returns the number of vertices this polygon has" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshDescriptionBase_GetNumPolygonVertices_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshDescriptionBase, nullptr, "GetNumPolygonVertices", nullptr, nullptr, sizeof(MeshDescriptionBase_eventGetNumPolygonVertices_Parms), Z_Construct_UFunction_UMeshDescriptionBase_GetNumPolygonVertices_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_GetNumPolygonVertices_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMeshDescriptionBase_GetNumPolygonVertices_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_GetNumPolygonVertices_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMeshDescriptionBase_GetNumPolygonVertices()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMeshDescriptionBase_GetNumPolygonVertices_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMeshDescriptionBase_GetNumVertexConnectedEdges_Statics
	{
		struct MeshDescriptionBase_eventGetNumVertexConnectedEdges_Parms
		{
			FVertexID VertexID;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VertexID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_GetNumVertexConnectedEdges_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MeshDescriptionBase_eventGetNumVertexConnectedEdges_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_GetNumVertexConnectedEdges_Statics::NewProp_VertexID = { "VertexID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MeshDescriptionBase_eventGetNumVertexConnectedEdges_Parms, VertexID), Z_Construct_UScriptStruct_FVertexID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeshDescriptionBase_GetNumVertexConnectedEdges_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_GetNumVertexConnectedEdges_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_GetNumVertexConnectedEdges_Statics::NewProp_VertexID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMeshDescriptionBase_GetNumVertexConnectedEdges_Statics::Function_MetaDataParams[] = {
		{ "Category", "MeshDescription" },
		{ "Comment", "/** Returns number of edges connected to this vertex */" },
		{ "ModuleRelativePath", "Public/MeshDescriptionBase.h" },
		{ "ToolTip", "Returns number of edges connected to this vertex" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshDescriptionBase_GetNumVertexConnectedEdges_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshDescriptionBase, nullptr, "GetNumVertexConnectedEdges", nullptr, nullptr, sizeof(MeshDescriptionBase_eventGetNumVertexConnectedEdges_Parms), Z_Construct_UFunction_UMeshDescriptionBase_GetNumVertexConnectedEdges_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_GetNumVertexConnectedEdges_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMeshDescriptionBase_GetNumVertexConnectedEdges_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_GetNumVertexConnectedEdges_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMeshDescriptionBase_GetNumVertexConnectedEdges()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMeshDescriptionBase_GetNumVertexConnectedEdges_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMeshDescriptionBase_GetNumVertexConnectedPolygons_Statics
	{
		struct MeshDescriptionBase_eventGetNumVertexConnectedPolygons_Parms
		{
			FVertexID VertexID;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VertexID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_GetNumVertexConnectedPolygons_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MeshDescriptionBase_eventGetNumVertexConnectedPolygons_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_GetNumVertexConnectedPolygons_Statics::NewProp_VertexID = { "VertexID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MeshDescriptionBase_eventGetNumVertexConnectedPolygons_Parms, VertexID), Z_Construct_UScriptStruct_FVertexID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeshDescriptionBase_GetNumVertexConnectedPolygons_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_GetNumVertexConnectedPolygons_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_GetNumVertexConnectedPolygons_Statics::NewProp_VertexID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMeshDescriptionBase_GetNumVertexConnectedPolygons_Statics::Function_MetaDataParams[] = {
		{ "Category", "MeshDescription" },
		{ "Comment", "/** Returns the number of polygons connected to this vertex */" },
		{ "ModuleRelativePath", "Public/MeshDescriptionBase.h" },
		{ "ToolTip", "Returns the number of polygons connected to this vertex" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshDescriptionBase_GetNumVertexConnectedPolygons_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshDescriptionBase, nullptr, "GetNumVertexConnectedPolygons", nullptr, nullptr, sizeof(MeshDescriptionBase_eventGetNumVertexConnectedPolygons_Parms), Z_Construct_UFunction_UMeshDescriptionBase_GetNumVertexConnectedPolygons_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_GetNumVertexConnectedPolygons_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMeshDescriptionBase_GetNumVertexConnectedPolygons_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_GetNumVertexConnectedPolygons_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMeshDescriptionBase_GetNumVertexConnectedPolygons()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMeshDescriptionBase_GetNumVertexConnectedPolygons_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMeshDescriptionBase_GetNumVertexConnectedTriangles_Statics
	{
		struct MeshDescriptionBase_eventGetNumVertexConnectedTriangles_Parms
		{
			FVertexID VertexID;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VertexID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_GetNumVertexConnectedTriangles_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MeshDescriptionBase_eventGetNumVertexConnectedTriangles_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_GetNumVertexConnectedTriangles_Statics::NewProp_VertexID = { "VertexID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MeshDescriptionBase_eventGetNumVertexConnectedTriangles_Parms, VertexID), Z_Construct_UScriptStruct_FVertexID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeshDescriptionBase_GetNumVertexConnectedTriangles_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_GetNumVertexConnectedTriangles_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_GetNumVertexConnectedTriangles_Statics::NewProp_VertexID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMeshDescriptionBase_GetNumVertexConnectedTriangles_Statics::Function_MetaDataParams[] = {
		{ "Category", "MeshDescription" },
		{ "Comment", "/** Returns number of triangles connected to this vertex */" },
		{ "ModuleRelativePath", "Public/MeshDescriptionBase.h" },
		{ "ToolTip", "Returns number of triangles connected to this vertex" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshDescriptionBase_GetNumVertexConnectedTriangles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshDescriptionBase, nullptr, "GetNumVertexConnectedTriangles", nullptr, nullptr, sizeof(MeshDescriptionBase_eventGetNumVertexConnectedTriangles_Parms), Z_Construct_UFunction_UMeshDescriptionBase_GetNumVertexConnectedTriangles_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_GetNumVertexConnectedTriangles_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMeshDescriptionBase_GetNumVertexConnectedTriangles_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_GetNumVertexConnectedTriangles_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMeshDescriptionBase_GetNumVertexConnectedTriangles()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMeshDescriptionBase_GetNumVertexConnectedTriangles_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMeshDescriptionBase_GetNumVertexInstanceConnectedPolygons_Statics
	{
		struct MeshDescriptionBase_eventGetNumVertexInstanceConnectedPolygons_Parms
		{
			FVertexInstanceID VertexInstanceID;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VertexInstanceID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_GetNumVertexInstanceConnectedPolygons_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MeshDescriptionBase_eventGetNumVertexInstanceConnectedPolygons_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_GetNumVertexInstanceConnectedPolygons_Statics::NewProp_VertexInstanceID = { "VertexInstanceID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MeshDescriptionBase_eventGetNumVertexInstanceConnectedPolygons_Parms, VertexInstanceID), Z_Construct_UScriptStruct_FVertexInstanceID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeshDescriptionBase_GetNumVertexInstanceConnectedPolygons_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_GetNumVertexInstanceConnectedPolygons_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_GetNumVertexInstanceConnectedPolygons_Statics::NewProp_VertexInstanceID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMeshDescriptionBase_GetNumVertexInstanceConnectedPolygons_Statics::Function_MetaDataParams[] = {
		{ "Category", "MeshDescription" },
		{ "Comment", "/** Returns the number of polygons connected to this vertex instance. */" },
		{ "ModuleRelativePath", "Public/MeshDescriptionBase.h" },
		{ "ToolTip", "Returns the number of polygons connected to this vertex instance." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshDescriptionBase_GetNumVertexInstanceConnectedPolygons_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshDescriptionBase, nullptr, "GetNumVertexInstanceConnectedPolygons", nullptr, nullptr, sizeof(MeshDescriptionBase_eventGetNumVertexInstanceConnectedPolygons_Parms), Z_Construct_UFunction_UMeshDescriptionBase_GetNumVertexInstanceConnectedPolygons_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_GetNumVertexInstanceConnectedPolygons_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMeshDescriptionBase_GetNumVertexInstanceConnectedPolygons_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_GetNumVertexInstanceConnectedPolygons_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMeshDescriptionBase_GetNumVertexInstanceConnectedPolygons()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMeshDescriptionBase_GetNumVertexInstanceConnectedPolygons_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMeshDescriptionBase_GetNumVertexInstanceConnectedTriangles_Statics
	{
		struct MeshDescriptionBase_eventGetNumVertexInstanceConnectedTriangles_Parms
		{
			FVertexInstanceID VertexInstanceID;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VertexInstanceID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_GetNumVertexInstanceConnectedTriangles_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MeshDescriptionBase_eventGetNumVertexInstanceConnectedTriangles_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_GetNumVertexInstanceConnectedTriangles_Statics::NewProp_VertexInstanceID = { "VertexInstanceID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MeshDescriptionBase_eventGetNumVertexInstanceConnectedTriangles_Parms, VertexInstanceID), Z_Construct_UScriptStruct_FVertexInstanceID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeshDescriptionBase_GetNumVertexInstanceConnectedTriangles_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_GetNumVertexInstanceConnectedTriangles_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_GetNumVertexInstanceConnectedTriangles_Statics::NewProp_VertexInstanceID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMeshDescriptionBase_GetNumVertexInstanceConnectedTriangles_Statics::Function_MetaDataParams[] = {
		{ "Category", "MeshDescription" },
		{ "Comment", "/** Returns the number of triangles connected to this vertex instance */" },
		{ "ModuleRelativePath", "Public/MeshDescriptionBase.h" },
		{ "ToolTip", "Returns the number of triangles connected to this vertex instance" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshDescriptionBase_GetNumVertexInstanceConnectedTriangles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshDescriptionBase, nullptr, "GetNumVertexInstanceConnectedTriangles", nullptr, nullptr, sizeof(MeshDescriptionBase_eventGetNumVertexInstanceConnectedTriangles_Parms), Z_Construct_UFunction_UMeshDescriptionBase_GetNumVertexInstanceConnectedTriangles_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_GetNumVertexInstanceConnectedTriangles_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMeshDescriptionBase_GetNumVertexInstanceConnectedTriangles_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_GetNumVertexInstanceConnectedTriangles_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMeshDescriptionBase_GetNumVertexInstanceConnectedTriangles()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMeshDescriptionBase_GetNumVertexInstanceConnectedTriangles_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMeshDescriptionBase_GetNumVertexVertexInstances_Statics
	{
		struct MeshDescriptionBase_eventGetNumVertexVertexInstances_Parms
		{
			FVertexID VertexID;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VertexID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_GetNumVertexVertexInstances_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MeshDescriptionBase_eventGetNumVertexVertexInstances_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_GetNumVertexVertexInstances_Statics::NewProp_VertexID = { "VertexID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MeshDescriptionBase_eventGetNumVertexVertexInstances_Parms, VertexID), Z_Construct_UScriptStruct_FVertexID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeshDescriptionBase_GetNumVertexVertexInstances_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_GetNumVertexVertexInstances_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_GetNumVertexVertexInstances_Statics::NewProp_VertexID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMeshDescriptionBase_GetNumVertexVertexInstances_Statics::Function_MetaDataParams[] = {
		{ "Category", "MeshDescription" },
		{ "Comment", "/** Returns number of vertex instances created from this vertex */" },
		{ "ModuleRelativePath", "Public/MeshDescriptionBase.h" },
		{ "ToolTip", "Returns number of vertex instances created from this vertex" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshDescriptionBase_GetNumVertexVertexInstances_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshDescriptionBase, nullptr, "GetNumVertexVertexInstances", nullptr, nullptr, sizeof(MeshDescriptionBase_eventGetNumVertexVertexInstances_Parms), Z_Construct_UFunction_UMeshDescriptionBase_GetNumVertexVertexInstances_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_GetNumVertexVertexInstances_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMeshDescriptionBase_GetNumVertexVertexInstances_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_GetNumVertexVertexInstances_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMeshDescriptionBase_GetNumVertexVertexInstances()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMeshDescriptionBase_GetNumVertexVertexInstances_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonAdjacentPolygons_Statics
	{
		struct MeshDescriptionBase_eventGetPolygonAdjacentPolygons_Parms
		{
			FPolygonID PolygonID;
			TArray<FPolygonID> OutPolygonIDs;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutPolygonIDs;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutPolygonIDs_Inner;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PolygonID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonAdjacentPolygons_Statics::NewProp_OutPolygonIDs = { "OutPolygonIDs", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MeshDescriptionBase_eventGetPolygonAdjacentPolygons_Parms, OutPolygonIDs), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonAdjacentPolygons_Statics::NewProp_OutPolygonIDs_Inner = { "OutPolygonIDs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPolygonID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonAdjacentPolygons_Statics::NewProp_PolygonID = { "PolygonID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MeshDescriptionBase_eventGetPolygonAdjacentPolygons_Parms, PolygonID), Z_Construct_UScriptStruct_FPolygonID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonAdjacentPolygons_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonAdjacentPolygons_Statics::NewProp_OutPolygonIDs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonAdjacentPolygons_Statics::NewProp_OutPolygonIDs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonAdjacentPolygons_Statics::NewProp_PolygonID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonAdjacentPolygons_Statics::Function_MetaDataParams[] = {
		{ "Category", "MeshDescription" },
		{ "Comment", "/** Populates the passed array with adjacent polygons */" },
		{ "ModuleRelativePath", "Public/MeshDescriptionBase.h" },
		{ "ToolTip", "Populates the passed array with adjacent polygons" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonAdjacentPolygons_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshDescriptionBase, nullptr, "GetPolygonAdjacentPolygons", nullptr, nullptr, sizeof(MeshDescriptionBase_eventGetPolygonAdjacentPolygons_Parms), Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonAdjacentPolygons_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonAdjacentPolygons_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonAdjacentPolygons_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonAdjacentPolygons_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonAdjacentPolygons()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonAdjacentPolygons_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonGroupPolygons_Statics
	{
		struct MeshDescriptionBase_eventGetPolygonGroupPolygons_Parms
		{
			FPolygonGroupID PolygonGroupID;
			TArray<FPolygonID> OutPolygonIDs;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutPolygonIDs;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutPolygonIDs_Inner;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PolygonGroupID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonGroupPolygons_Statics::NewProp_OutPolygonIDs = { "OutPolygonIDs", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MeshDescriptionBase_eventGetPolygonGroupPolygons_Parms, OutPolygonIDs), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonGroupPolygons_Statics::NewProp_OutPolygonIDs_Inner = { "OutPolygonIDs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPolygonID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonGroupPolygons_Statics::NewProp_PolygonGroupID = { "PolygonGroupID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MeshDescriptionBase_eventGetPolygonGroupPolygons_Parms, PolygonGroupID), Z_Construct_UScriptStruct_FPolygonGroupID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonGroupPolygons_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonGroupPolygons_Statics::NewProp_OutPolygonIDs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonGroupPolygons_Statics::NewProp_OutPolygonIDs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonGroupPolygons_Statics::NewProp_PolygonGroupID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonGroupPolygons_Statics::Function_MetaDataParams[] = {
		{ "Category", "MeshDescription" },
		{ "Comment", "/** Returns the polygons associated with the given polygon group */" },
		{ "ModuleRelativePath", "Public/MeshDescriptionBase.h" },
		{ "ToolTip", "Returns the polygons associated with the given polygon group" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonGroupPolygons_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshDescriptionBase, nullptr, "GetPolygonGroupPolygons", nullptr, nullptr, sizeof(MeshDescriptionBase_eventGetPolygonGroupPolygons_Parms), Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonGroupPolygons_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonGroupPolygons_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonGroupPolygons_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonGroupPolygons_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonGroupPolygons()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonGroupPolygons_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonInternalEdges_Statics
	{
		struct MeshDescriptionBase_eventGetPolygonInternalEdges_Parms
		{
			FPolygonID PolygonID;
			TArray<FEdgeID> OutEdgeIDs;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutEdgeIDs;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutEdgeIDs_Inner;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PolygonID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonInternalEdges_Statics::NewProp_OutEdgeIDs = { "OutEdgeIDs", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MeshDescriptionBase_eventGetPolygonInternalEdges_Parms, OutEdgeIDs), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonInternalEdges_Statics::NewProp_OutEdgeIDs_Inner = { "OutEdgeIDs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FEdgeID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonInternalEdges_Statics::NewProp_PolygonID = { "PolygonID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MeshDescriptionBase_eventGetPolygonInternalEdges_Parms, PolygonID), Z_Construct_UScriptStruct_FPolygonID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonInternalEdges_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonInternalEdges_Statics::NewProp_OutEdgeIDs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonInternalEdges_Statics::NewProp_OutEdgeIDs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonInternalEdges_Statics::NewProp_PolygonID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonInternalEdges_Statics::Function_MetaDataParams[] = {
		{ "Category", "MeshDescription" },
		{ "Comment", "/** Populate the provided array with a list of edges which are internal to the polygon, i.e. those which separate\n\x09    constituent triangles. */" },
		{ "ModuleRelativePath", "Public/MeshDescriptionBase.h" },
		{ "ToolTip", "Populate the provided array with a list of edges which are internal to the polygon, i.e. those which separate\n          constituent triangles." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonInternalEdges_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshDescriptionBase, nullptr, "GetPolygonInternalEdges", nullptr, nullptr, sizeof(MeshDescriptionBase_eventGetPolygonInternalEdges_Parms), Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonInternalEdges_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonInternalEdges_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonInternalEdges_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonInternalEdges_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonInternalEdges()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonInternalEdges_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonPerimeterEdges_Statics
	{
		struct MeshDescriptionBase_eventGetPolygonPerimeterEdges_Parms
		{
			FPolygonID PolygonID;
			TArray<FEdgeID> OutEdgeIDs;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutEdgeIDs;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutEdgeIDs_Inner;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PolygonID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonPerimeterEdges_Statics::NewProp_OutEdgeIDs = { "OutEdgeIDs", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MeshDescriptionBase_eventGetPolygonPerimeterEdges_Parms, OutEdgeIDs), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonPerimeterEdges_Statics::NewProp_OutEdgeIDs_Inner = { "OutEdgeIDs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FEdgeID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonPerimeterEdges_Statics::NewProp_PolygonID = { "PolygonID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MeshDescriptionBase_eventGetPolygonPerimeterEdges_Parms, PolygonID), Z_Construct_UScriptStruct_FPolygonID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonPerimeterEdges_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonPerimeterEdges_Statics::NewProp_OutEdgeIDs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonPerimeterEdges_Statics::NewProp_OutEdgeIDs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonPerimeterEdges_Statics::NewProp_PolygonID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonPerimeterEdges_Statics::Function_MetaDataParams[] = {
		{ "Category", "MeshDescription" },
		{ "Comment", "/** Returns the edges which form the polygon perimeter */" },
		{ "ModuleRelativePath", "Public/MeshDescriptionBase.h" },
		{ "ToolTip", "Returns the edges which form the polygon perimeter" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonPerimeterEdges_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshDescriptionBase, nullptr, "GetPolygonPerimeterEdges", nullptr, nullptr, sizeof(MeshDescriptionBase_eventGetPolygonPerimeterEdges_Parms), Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonPerimeterEdges_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonPerimeterEdges_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonPerimeterEdges_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonPerimeterEdges_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonPerimeterEdges()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonPerimeterEdges_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonPolygonGroup_Statics
	{
		struct MeshDescriptionBase_eventGetPolygonPolygonGroup_Parms
		{
			FPolygonID PolygonID;
			FPolygonGroupID ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PolygonID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonPolygonGroup_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MeshDescriptionBase_eventGetPolygonPolygonGroup_Parms, ReturnValue), Z_Construct_UScriptStruct_FPolygonGroupID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonPolygonGroup_Statics::NewProp_PolygonID = { "PolygonID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MeshDescriptionBase_eventGetPolygonPolygonGroup_Parms, PolygonID), Z_Construct_UScriptStruct_FPolygonID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonPolygonGroup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonPolygonGroup_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonPolygonGroup_Statics::NewProp_PolygonID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonPolygonGroup_Statics::Function_MetaDataParams[] = {
		{ "Category", "MeshDescription" },
		{ "Comment", "/** Return the polygon group associated with a polygon */" },
		{ "ModuleRelativePath", "Public/MeshDescriptionBase.h" },
		{ "ToolTip", "Return the polygon group associated with a polygon" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonPolygonGroup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshDescriptionBase, nullptr, "GetPolygonPolygonGroup", nullptr, nullptr, sizeof(MeshDescriptionBase_eventGetPolygonPolygonGroup_Parms), Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonPolygonGroup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonPolygonGroup_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonPolygonGroup_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonPolygonGroup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonPolygonGroup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonPolygonGroup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonTriangles_Statics
	{
		struct MeshDescriptionBase_eventGetPolygonTriangles_Parms
		{
			FPolygonID PolygonID;
			TArray<FTriangleID> OutTriangleIDs;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutTriangleIDs;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutTriangleIDs_Inner;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PolygonID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonTriangles_Statics::NewProp_OutTriangleIDs = { "OutTriangleIDs", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MeshDescriptionBase_eventGetPolygonTriangles_Parms, OutTriangleIDs), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonTriangles_Statics::NewProp_OutTriangleIDs_Inner = { "OutTriangleIDs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FTriangleID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonTriangles_Statics::NewProp_PolygonID = { "PolygonID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MeshDescriptionBase_eventGetPolygonTriangles_Parms, PolygonID), Z_Construct_UScriptStruct_FPolygonID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonTriangles_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonTriangles_Statics::NewProp_OutTriangleIDs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonTriangles_Statics::NewProp_OutTriangleIDs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonTriangles_Statics::NewProp_PolygonID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonTriangles_Statics::Function_MetaDataParams[] = {
		{ "Category", "MeshDescription" },
		{ "Comment", "/** Return reference to an array of triangle IDs which comprise this polygon */" },
		{ "ModuleRelativePath", "Public/MeshDescriptionBase.h" },
		{ "ToolTip", "Return reference to an array of triangle IDs which comprise this polygon" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonTriangles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshDescriptionBase, nullptr, "GetPolygonTriangles", nullptr, nullptr, sizeof(MeshDescriptionBase_eventGetPolygonTriangles_Parms), Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonTriangles_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonTriangles_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonTriangles_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonTriangles_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonTriangles()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonTriangles_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonVertexInstances_Statics
	{
		struct MeshDescriptionBase_eventGetPolygonVertexInstances_Parms
		{
			FPolygonID PolygonID;
			TArray<FVertexInstanceID> OutVertexInstanceIDs;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutVertexInstanceIDs;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutVertexInstanceIDs_Inner;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PolygonID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonVertexInstances_Statics::NewProp_OutVertexInstanceIDs = { "OutVertexInstanceIDs", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MeshDescriptionBase_eventGetPolygonVertexInstances_Parms, OutVertexInstanceIDs), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonVertexInstances_Statics::NewProp_OutVertexInstanceIDs_Inner = { "OutVertexInstanceIDs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVertexInstanceID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonVertexInstances_Statics::NewProp_PolygonID = { "PolygonID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MeshDescriptionBase_eventGetPolygonVertexInstances_Parms, PolygonID), Z_Construct_UScriptStruct_FPolygonID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonVertexInstances_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonVertexInstances_Statics::NewProp_OutVertexInstanceIDs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonVertexInstances_Statics::NewProp_OutVertexInstanceIDs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonVertexInstances_Statics::NewProp_PolygonID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonVertexInstances_Statics::Function_MetaDataParams[] = {
		{ "Category", "MeshDescription" },
		{ "Comment", "/** Returns reference to an array of VertexInstance IDs forming the perimeter of this polygon */" },
		{ "ModuleRelativePath", "Public/MeshDescriptionBase.h" },
		{ "ToolTip", "Returns reference to an array of VertexInstance IDs forming the perimeter of this polygon" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonVertexInstances_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshDescriptionBase, nullptr, "GetPolygonVertexInstances", nullptr, nullptr, sizeof(MeshDescriptionBase_eventGetPolygonVertexInstances_Parms), Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonVertexInstances_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonVertexInstances_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonVertexInstances_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonVertexInstances_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonVertexInstances()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonVertexInstances_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonVertices_Statics
	{
		struct MeshDescriptionBase_eventGetPolygonVertices_Parms
		{
			FPolygonID PolygonID;
			TArray<FVertexID> OutVertexIDs;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutVertexIDs;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutVertexIDs_Inner;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PolygonID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonVertices_Statics::NewProp_OutVertexIDs = { "OutVertexIDs", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MeshDescriptionBase_eventGetPolygonVertices_Parms, OutVertexIDs), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonVertices_Statics::NewProp_OutVertexIDs_Inner = { "OutVertexIDs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVertexID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonVertices_Statics::NewProp_PolygonID = { "PolygonID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MeshDescriptionBase_eventGetPolygonVertices_Parms, PolygonID), Z_Construct_UScriptStruct_FPolygonID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonVertices_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonVertices_Statics::NewProp_OutVertexIDs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonVertices_Statics::NewProp_OutVertexIDs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonVertices_Statics::NewProp_PolygonID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonVertices_Statics::Function_MetaDataParams[] = {
		{ "Category", "MeshDescription" },
		{ "Comment", "/** Returns the vertices which form the polygon perimeter */" },
		{ "ModuleRelativePath", "Public/MeshDescriptionBase.h" },
		{ "ToolTip", "Returns the vertices which form the polygon perimeter" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonVertices_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshDescriptionBase, nullptr, "GetPolygonVertices", nullptr, nullptr, sizeof(MeshDescriptionBase_eventGetPolygonVertices_Parms), Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonVertices_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonVertices_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonVertices_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonVertices_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonVertices()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonVertices_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMeshDescriptionBase_GetTriangleAdjacentTriangles_Statics
	{
		struct MeshDescriptionBase_eventGetTriangleAdjacentTriangles_Parms
		{
			FTriangleID TriangleID;
			TArray<FTriangleID> OutTriangleIDs;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutTriangleIDs;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutTriangleIDs_Inner;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TriangleID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_GetTriangleAdjacentTriangles_Statics::NewProp_OutTriangleIDs = { "OutTriangleIDs", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MeshDescriptionBase_eventGetTriangleAdjacentTriangles_Parms, OutTriangleIDs), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_GetTriangleAdjacentTriangles_Statics::NewProp_OutTriangleIDs_Inner = { "OutTriangleIDs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FTriangleID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_GetTriangleAdjacentTriangles_Statics::NewProp_TriangleID = { "TriangleID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MeshDescriptionBase_eventGetTriangleAdjacentTriangles_Parms, TriangleID), Z_Construct_UScriptStruct_FTriangleID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeshDescriptionBase_GetTriangleAdjacentTriangles_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_GetTriangleAdjacentTriangles_Statics::NewProp_OutTriangleIDs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_GetTriangleAdjacentTriangles_Statics::NewProp_OutTriangleIDs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_GetTriangleAdjacentTriangles_Statics::NewProp_TriangleID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMeshDescriptionBase_GetTriangleAdjacentTriangles_Statics::Function_MetaDataParams[] = {
		{ "Category", "MeshDescription" },
		{ "Comment", "/** Returns the adjacent triangles to this triangle */" },
		{ "ModuleRelativePath", "Public/MeshDescriptionBase.h" },
		{ "ToolTip", "Returns the adjacent triangles to this triangle" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshDescriptionBase_GetTriangleAdjacentTriangles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshDescriptionBase, nullptr, "GetTriangleAdjacentTriangles", nullptr, nullptr, sizeof(MeshDescriptionBase_eventGetTriangleAdjacentTriangles_Parms), Z_Construct_UFunction_UMeshDescriptionBase_GetTriangleAdjacentTriangles_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_GetTriangleAdjacentTriangles_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMeshDescriptionBase_GetTriangleAdjacentTriangles_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_GetTriangleAdjacentTriangles_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMeshDescriptionBase_GetTriangleAdjacentTriangles()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMeshDescriptionBase_GetTriangleAdjacentTriangles_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMeshDescriptionBase_GetTriangleEdges_Statics
	{
		struct MeshDescriptionBase_eventGetTriangleEdges_Parms
		{
			FTriangleID TriangleID;
			TArray<FEdgeID> OutEdgeIDs;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutEdgeIDs;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutEdgeIDs_Inner;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TriangleID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_GetTriangleEdges_Statics::NewProp_OutEdgeIDs = { "OutEdgeIDs", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MeshDescriptionBase_eventGetTriangleEdges_Parms, OutEdgeIDs), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_GetTriangleEdges_Statics::NewProp_OutEdgeIDs_Inner = { "OutEdgeIDs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FEdgeID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_GetTriangleEdges_Statics::NewProp_TriangleID = { "TriangleID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MeshDescriptionBase_eventGetTriangleEdges_Parms, TriangleID), Z_Construct_UScriptStruct_FTriangleID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeshDescriptionBase_GetTriangleEdges_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_GetTriangleEdges_Statics::NewProp_OutEdgeIDs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_GetTriangleEdges_Statics::NewProp_OutEdgeIDs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_GetTriangleEdges_Statics::NewProp_TriangleID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMeshDescriptionBase_GetTriangleEdges_Statics::Function_MetaDataParams[] = {
		{ "Category", "MeshDescription" },
		{ "Comment", "/** Returns the edges which define this triangle */" },
		{ "ModuleRelativePath", "Public/MeshDescriptionBase.h" },
		{ "ToolTip", "Returns the edges which define this triangle" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshDescriptionBase_GetTriangleEdges_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshDescriptionBase, nullptr, "GetTriangleEdges", nullptr, nullptr, sizeof(MeshDescriptionBase_eventGetTriangleEdges_Parms), Z_Construct_UFunction_UMeshDescriptionBase_GetTriangleEdges_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_GetTriangleEdges_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMeshDescriptionBase_GetTriangleEdges_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_GetTriangleEdges_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMeshDescriptionBase_GetTriangleEdges()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMeshDescriptionBase_GetTriangleEdges_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMeshDescriptionBase_GetTrianglePolygon_Statics
	{
		struct MeshDescriptionBase_eventGetTrianglePolygon_Parms
		{
			FTriangleID TriangleID;
			FPolygonID ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TriangleID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_GetTrianglePolygon_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MeshDescriptionBase_eventGetTrianglePolygon_Parms, ReturnValue), Z_Construct_UScriptStruct_FPolygonID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_GetTrianglePolygon_Statics::NewProp_TriangleID = { "TriangleID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MeshDescriptionBase_eventGetTrianglePolygon_Parms, TriangleID), Z_Construct_UScriptStruct_FTriangleID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeshDescriptionBase_GetTrianglePolygon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_GetTrianglePolygon_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_GetTrianglePolygon_Statics::NewProp_TriangleID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMeshDescriptionBase_GetTrianglePolygon_Statics::Function_MetaDataParams[] = {
		{ "Category", "MeshDescription" },
		{ "Comment", "/** Get the polygon which contains this triangle */" },
		{ "ModuleRelativePath", "Public/MeshDescriptionBase.h" },
		{ "ToolTip", "Get the polygon which contains this triangle" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshDescriptionBase_GetTrianglePolygon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshDescriptionBase, nullptr, "GetTrianglePolygon", nullptr, nullptr, sizeof(MeshDescriptionBase_eventGetTrianglePolygon_Parms), Z_Construct_UFunction_UMeshDescriptionBase_GetTrianglePolygon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_GetTrianglePolygon_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMeshDescriptionBase_GetTrianglePolygon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_GetTrianglePolygon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMeshDescriptionBase_GetTrianglePolygon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMeshDescriptionBase_GetTrianglePolygon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMeshDescriptionBase_GetTrianglePolygonGroup_Statics
	{
		struct MeshDescriptionBase_eventGetTrianglePolygonGroup_Parms
		{
			FTriangleID TriangleID;
			FPolygonGroupID ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TriangleID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_GetTrianglePolygonGroup_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MeshDescriptionBase_eventGetTrianglePolygonGroup_Parms, ReturnValue), Z_Construct_UScriptStruct_FPolygonGroupID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_GetTrianglePolygonGroup_Statics::NewProp_TriangleID = { "TriangleID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MeshDescriptionBase_eventGetTrianglePolygonGroup_Parms, TriangleID), Z_Construct_UScriptStruct_FTriangleID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeshDescriptionBase_GetTrianglePolygonGroup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_GetTrianglePolygonGroup_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_GetTrianglePolygonGroup_Statics::NewProp_TriangleID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMeshDescriptionBase_GetTrianglePolygonGroup_Statics::Function_MetaDataParams[] = {
		{ "Category", "MeshDescription" },
		{ "Comment", "/** Get the polygon group which contains this triangle */" },
		{ "ModuleRelativePath", "Public/MeshDescriptionBase.h" },
		{ "ToolTip", "Get the polygon group which contains this triangle" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshDescriptionBase_GetTrianglePolygonGroup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshDescriptionBase, nullptr, "GetTrianglePolygonGroup", nullptr, nullptr, sizeof(MeshDescriptionBase_eventGetTrianglePolygonGroup_Parms), Z_Construct_UFunction_UMeshDescriptionBase_GetTrianglePolygonGroup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_GetTrianglePolygonGroup_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMeshDescriptionBase_GetTrianglePolygonGroup_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_GetTrianglePolygonGroup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMeshDescriptionBase_GetTrianglePolygonGroup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMeshDescriptionBase_GetTrianglePolygonGroup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMeshDescriptionBase_GetTriangleVertexInstance_Statics
	{
		struct MeshDescriptionBase_eventGetTriangleVertexInstance_Parms
		{
			FTriangleID TriangleID;
			int32 Index;
			FVertexInstanceID ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TriangleID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_GetTriangleVertexInstance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MeshDescriptionBase_eventGetTriangleVertexInstance_Parms, ReturnValue), Z_Construct_UScriptStruct_FVertexInstanceID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_GetTriangleVertexInstance_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MeshDescriptionBase_eventGetTriangleVertexInstance_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_GetTriangleVertexInstance_Statics::NewProp_TriangleID = { "TriangleID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MeshDescriptionBase_eventGetTriangleVertexInstance_Parms, TriangleID), Z_Construct_UScriptStruct_FTriangleID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeshDescriptionBase_GetTriangleVertexInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_GetTriangleVertexInstance_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_GetTriangleVertexInstance_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_GetTriangleVertexInstance_Statics::NewProp_TriangleID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMeshDescriptionBase_GetTriangleVertexInstance_Statics::Function_MetaDataParams[] = {
		{ "Category", "MeshDescription" },
		{ "Comment", "/** Get the specified vertex instance by index */" },
		{ "ModuleRelativePath", "Public/MeshDescriptionBase.h" },
		{ "ToolTip", "Get the specified vertex instance by index" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshDescriptionBase_GetTriangleVertexInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshDescriptionBase, nullptr, "GetTriangleVertexInstance", nullptr, nullptr, sizeof(MeshDescriptionBase_eventGetTriangleVertexInstance_Parms), Z_Construct_UFunction_UMeshDescriptionBase_GetTriangleVertexInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_GetTriangleVertexInstance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMeshDescriptionBase_GetTriangleVertexInstance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_GetTriangleVertexInstance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMeshDescriptionBase_GetTriangleVertexInstance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMeshDescriptionBase_GetTriangleVertexInstance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMeshDescriptionBase_GetTriangleVertexInstances_Statics
	{
		struct MeshDescriptionBase_eventGetTriangleVertexInstances_Parms
		{
			FTriangleID TriangleID;
			TArray<FVertexInstanceID> OutVertexInstanceIDs;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutVertexInstanceIDs;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutVertexInstanceIDs_Inner;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TriangleID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_GetTriangleVertexInstances_Statics::NewProp_OutVertexInstanceIDs = { "OutVertexInstanceIDs", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MeshDescriptionBase_eventGetTriangleVertexInstances_Parms, OutVertexInstanceIDs), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_GetTriangleVertexInstances_Statics::NewProp_OutVertexInstanceIDs_Inner = { "OutVertexInstanceIDs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVertexInstanceID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_GetTriangleVertexInstances_Statics::NewProp_TriangleID = { "TriangleID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MeshDescriptionBase_eventGetTriangleVertexInstances_Parms, TriangleID), Z_Construct_UScriptStruct_FTriangleID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeshDescriptionBase_GetTriangleVertexInstances_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_GetTriangleVertexInstances_Statics::NewProp_OutVertexInstanceIDs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_GetTriangleVertexInstances_Statics::NewProp_OutVertexInstanceIDs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_GetTriangleVertexInstances_Statics::NewProp_TriangleID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMeshDescriptionBase_GetTriangleVertexInstances_Statics::Function_MetaDataParams[] = {
		{ "Category", "MeshDescription" },
		{ "Comment", "/** Get the vertex instances which define this triangle */" },
		{ "ModuleRelativePath", "Public/MeshDescriptionBase.h" },
		{ "ToolTip", "Get the vertex instances which define this triangle" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshDescriptionBase_GetTriangleVertexInstances_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshDescriptionBase, nullptr, "GetTriangleVertexInstances", nullptr, nullptr, sizeof(MeshDescriptionBase_eventGetTriangleVertexInstances_Parms), Z_Construct_UFunction_UMeshDescriptionBase_GetTriangleVertexInstances_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_GetTriangleVertexInstances_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMeshDescriptionBase_GetTriangleVertexInstances_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_GetTriangleVertexInstances_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMeshDescriptionBase_GetTriangleVertexInstances()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMeshDescriptionBase_GetTriangleVertexInstances_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMeshDescriptionBase_GetTriangleVertices_Statics
	{
		struct MeshDescriptionBase_eventGetTriangleVertices_Parms
		{
			FTriangleID TriangleID;
			TArray<FVertexID> OutVertexIDs;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutVertexIDs;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutVertexIDs_Inner;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TriangleID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_GetTriangleVertices_Statics::NewProp_OutVertexIDs = { "OutVertexIDs", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MeshDescriptionBase_eventGetTriangleVertices_Parms, OutVertexIDs), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_GetTriangleVertices_Statics::NewProp_OutVertexIDs_Inner = { "OutVertexIDs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVertexID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_GetTriangleVertices_Statics::NewProp_TriangleID = { "TriangleID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MeshDescriptionBase_eventGetTriangleVertices_Parms, TriangleID), Z_Construct_UScriptStruct_FTriangleID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeshDescriptionBase_GetTriangleVertices_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_GetTriangleVertices_Statics::NewProp_OutVertexIDs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_GetTriangleVertices_Statics::NewProp_OutVertexIDs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_GetTriangleVertices_Statics::NewProp_TriangleID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMeshDescriptionBase_GetTriangleVertices_Statics::Function_MetaDataParams[] = {
		{ "Category", "MeshDescription" },
		{ "Comment", "/** Returns the vertices which define this triangle */" },
		{ "ModuleRelativePath", "Public/MeshDescriptionBase.h" },
		{ "ToolTip", "Returns the vertices which define this triangle" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshDescriptionBase_GetTriangleVertices_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshDescriptionBase, nullptr, "GetTriangleVertices", nullptr, nullptr, sizeof(MeshDescriptionBase_eventGetTriangleVertices_Parms), Z_Construct_UFunction_UMeshDescriptionBase_GetTriangleVertices_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_GetTriangleVertices_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMeshDescriptionBase_GetTriangleVertices_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_GetTriangleVertices_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMeshDescriptionBase_GetTriangleVertices()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMeshDescriptionBase_GetTriangleVertices_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMeshDescriptionBase_GetVertexAdjacentVertices_Statics
	{
		struct MeshDescriptionBase_eventGetVertexAdjacentVertices_Parms
		{
			FVertexID VertexID;
			TArray<FVertexID> OutAdjacentVertexIDs;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutAdjacentVertexIDs;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutAdjacentVertexIDs_Inner;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VertexID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_GetVertexAdjacentVertices_Statics::NewProp_OutAdjacentVertexIDs = { "OutAdjacentVertexIDs", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MeshDescriptionBase_eventGetVertexAdjacentVertices_Parms, OutAdjacentVertexIDs), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_GetVertexAdjacentVertices_Statics::NewProp_OutAdjacentVertexIDs_Inner = { "OutAdjacentVertexIDs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVertexID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_GetVertexAdjacentVertices_Statics::NewProp_VertexID = { "VertexID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MeshDescriptionBase_eventGetVertexAdjacentVertices_Parms, VertexID), Z_Construct_UScriptStruct_FVertexID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeshDescriptionBase_GetVertexAdjacentVertices_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_GetVertexAdjacentVertices_Statics::NewProp_OutAdjacentVertexIDs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_GetVertexAdjacentVertices_Statics::NewProp_OutAdjacentVertexIDs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_GetVertexAdjacentVertices_Statics::NewProp_VertexID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMeshDescriptionBase_GetVertexAdjacentVertices_Statics::Function_MetaDataParams[] = {
		{ "Category", "MeshDescription" },
		{ "Comment", "/** Returns the vertices adjacent to this vertex */" },
		{ "ModuleRelativePath", "Public/MeshDescriptionBase.h" },
		{ "ToolTip", "Returns the vertices adjacent to this vertex" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshDescriptionBase_GetVertexAdjacentVertices_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshDescriptionBase, nullptr, "GetVertexAdjacentVertices", nullptr, nullptr, sizeof(MeshDescriptionBase_eventGetVertexAdjacentVertices_Parms), Z_Construct_UFunction_UMeshDescriptionBase_GetVertexAdjacentVertices_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_GetVertexAdjacentVertices_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMeshDescriptionBase_GetVertexAdjacentVertices_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_GetVertexAdjacentVertices_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMeshDescriptionBase_GetVertexAdjacentVertices()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMeshDescriptionBase_GetVertexAdjacentVertices_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMeshDescriptionBase_GetVertexConnectedEdges_Statics
	{
		struct MeshDescriptionBase_eventGetVertexConnectedEdges_Parms
		{
			FVertexID VertexID;
			TArray<FEdgeID> OutEdgeIDs;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutEdgeIDs;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutEdgeIDs_Inner;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VertexID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_GetVertexConnectedEdges_Statics::NewProp_OutEdgeIDs = { "OutEdgeIDs", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MeshDescriptionBase_eventGetVertexConnectedEdges_Parms, OutEdgeIDs), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_GetVertexConnectedEdges_Statics::NewProp_OutEdgeIDs_Inner = { "OutEdgeIDs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FEdgeID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_GetVertexConnectedEdges_Statics::NewProp_VertexID = { "VertexID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MeshDescriptionBase_eventGetVertexConnectedEdges_Parms, VertexID), Z_Construct_UScriptStruct_FVertexID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeshDescriptionBase_GetVertexConnectedEdges_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_GetVertexConnectedEdges_Statics::NewProp_OutEdgeIDs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_GetVertexConnectedEdges_Statics::NewProp_OutEdgeIDs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_GetVertexConnectedEdges_Statics::NewProp_VertexID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMeshDescriptionBase_GetVertexConnectedEdges_Statics::Function_MetaDataParams[] = {
		{ "Category", "MeshDescription" },
		{ "Comment", "/** Returns reference to an array of Edge IDs connected to this vertex */" },
		{ "ModuleRelativePath", "Public/MeshDescriptionBase.h" },
		{ "ToolTip", "Returns reference to an array of Edge IDs connected to this vertex" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshDescriptionBase_GetVertexConnectedEdges_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshDescriptionBase, nullptr, "GetVertexConnectedEdges", nullptr, nullptr, sizeof(MeshDescriptionBase_eventGetVertexConnectedEdges_Parms), Z_Construct_UFunction_UMeshDescriptionBase_GetVertexConnectedEdges_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_GetVertexConnectedEdges_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMeshDescriptionBase_GetVertexConnectedEdges_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_GetVertexConnectedEdges_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMeshDescriptionBase_GetVertexConnectedEdges()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMeshDescriptionBase_GetVertexConnectedEdges_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMeshDescriptionBase_GetVertexConnectedPolygons_Statics
	{
		struct MeshDescriptionBase_eventGetVertexConnectedPolygons_Parms
		{
			FVertexID VertexID;
			TArray<FPolygonID> OutConnectedPolygonIDs;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutConnectedPolygonIDs;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutConnectedPolygonIDs_Inner;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VertexID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_GetVertexConnectedPolygons_Statics::NewProp_OutConnectedPolygonIDs = { "OutConnectedPolygonIDs", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MeshDescriptionBase_eventGetVertexConnectedPolygons_Parms, OutConnectedPolygonIDs), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_GetVertexConnectedPolygons_Statics::NewProp_OutConnectedPolygonIDs_Inner = { "OutConnectedPolygonIDs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPolygonID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_GetVertexConnectedPolygons_Statics::NewProp_VertexID = { "VertexID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MeshDescriptionBase_eventGetVertexConnectedPolygons_Parms, VertexID), Z_Construct_UScriptStruct_FVertexID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeshDescriptionBase_GetVertexConnectedPolygons_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_GetVertexConnectedPolygons_Statics::NewProp_OutConnectedPolygonIDs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_GetVertexConnectedPolygons_Statics::NewProp_OutConnectedPolygonIDs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_GetVertexConnectedPolygons_Statics::NewProp_VertexID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMeshDescriptionBase_GetVertexConnectedPolygons_Statics::Function_MetaDataParams[] = {
		{ "Category", "MeshDescription" },
		{ "Comment", "/** Returns the polygons connected to this vertex */" },
		{ "ModuleRelativePath", "Public/MeshDescriptionBase.h" },
		{ "ToolTip", "Returns the polygons connected to this vertex" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshDescriptionBase_GetVertexConnectedPolygons_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshDescriptionBase, nullptr, "GetVertexConnectedPolygons", nullptr, nullptr, sizeof(MeshDescriptionBase_eventGetVertexConnectedPolygons_Parms), Z_Construct_UFunction_UMeshDescriptionBase_GetVertexConnectedPolygons_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_GetVertexConnectedPolygons_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMeshDescriptionBase_GetVertexConnectedPolygons_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_GetVertexConnectedPolygons_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMeshDescriptionBase_GetVertexConnectedPolygons()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMeshDescriptionBase_GetVertexConnectedPolygons_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMeshDescriptionBase_GetVertexConnectedTriangles_Statics
	{
		struct MeshDescriptionBase_eventGetVertexConnectedTriangles_Parms
		{
			FVertexID VertexID;
			TArray<FTriangleID> OutConnectedTriangleIDs;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutConnectedTriangleIDs;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutConnectedTriangleIDs_Inner;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VertexID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_GetVertexConnectedTriangles_Statics::NewProp_OutConnectedTriangleIDs = { "OutConnectedTriangleIDs", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MeshDescriptionBase_eventGetVertexConnectedTriangles_Parms, OutConnectedTriangleIDs), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_GetVertexConnectedTriangles_Statics::NewProp_OutConnectedTriangleIDs_Inner = { "OutConnectedTriangleIDs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FTriangleID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_GetVertexConnectedTriangles_Statics::NewProp_VertexID = { "VertexID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MeshDescriptionBase_eventGetVertexConnectedTriangles_Parms, VertexID), Z_Construct_UScriptStruct_FVertexID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeshDescriptionBase_GetVertexConnectedTriangles_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_GetVertexConnectedTriangles_Statics::NewProp_OutConnectedTriangleIDs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_GetVertexConnectedTriangles_Statics::NewProp_OutConnectedTriangleIDs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_GetVertexConnectedTriangles_Statics::NewProp_VertexID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMeshDescriptionBase_GetVertexConnectedTriangles_Statics::Function_MetaDataParams[] = {
		{ "Category", "MeshDescription" },
		{ "Comment", "/** Returns the triangles connected to this vertex */" },
		{ "ModuleRelativePath", "Public/MeshDescriptionBase.h" },
		{ "ToolTip", "Returns the triangles connected to this vertex" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshDescriptionBase_GetVertexConnectedTriangles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshDescriptionBase, nullptr, "GetVertexConnectedTriangles", nullptr, nullptr, sizeof(MeshDescriptionBase_eventGetVertexConnectedTriangles_Parms), Z_Construct_UFunction_UMeshDescriptionBase_GetVertexConnectedTriangles_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_GetVertexConnectedTriangles_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMeshDescriptionBase_GetVertexConnectedTriangles_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_GetVertexConnectedTriangles_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMeshDescriptionBase_GetVertexConnectedTriangles()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMeshDescriptionBase_GetVertexConnectedTriangles_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMeshDescriptionBase_GetVertexInstanceConnectedPolygons_Statics
	{
		struct MeshDescriptionBase_eventGetVertexInstanceConnectedPolygons_Parms
		{
			FVertexInstanceID VertexInstanceID;
			TArray<FPolygonID> OutConnectedPolygonIDs;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutConnectedPolygonIDs;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutConnectedPolygonIDs_Inner;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VertexInstanceID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_GetVertexInstanceConnectedPolygons_Statics::NewProp_OutConnectedPolygonIDs = { "OutConnectedPolygonIDs", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MeshDescriptionBase_eventGetVertexInstanceConnectedPolygons_Parms, OutConnectedPolygonIDs), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_GetVertexInstanceConnectedPolygons_Statics::NewProp_OutConnectedPolygonIDs_Inner = { "OutConnectedPolygonIDs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPolygonID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_GetVertexInstanceConnectedPolygons_Statics::NewProp_VertexInstanceID = { "VertexInstanceID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MeshDescriptionBase_eventGetVertexInstanceConnectedPolygons_Parms, VertexInstanceID), Z_Construct_UScriptStruct_FVertexInstanceID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeshDescriptionBase_GetVertexInstanceConnectedPolygons_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_GetVertexInstanceConnectedPolygons_Statics::NewProp_OutConnectedPolygonIDs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_GetVertexInstanceConnectedPolygons_Statics::NewProp_OutConnectedPolygonIDs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_GetVertexInstanceConnectedPolygons_Statics::NewProp_VertexInstanceID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMeshDescriptionBase_GetVertexInstanceConnectedPolygons_Statics::Function_MetaDataParams[] = {
		{ "Category", "MeshDescription" },
		{ "Comment", "/** Returns the polygons connected to this vertex instance */" },
		{ "ModuleRelativePath", "Public/MeshDescriptionBase.h" },
		{ "ToolTip", "Returns the polygons connected to this vertex instance" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshDescriptionBase_GetVertexInstanceConnectedPolygons_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshDescriptionBase, nullptr, "GetVertexInstanceConnectedPolygons", nullptr, nullptr, sizeof(MeshDescriptionBase_eventGetVertexInstanceConnectedPolygons_Parms), Z_Construct_UFunction_UMeshDescriptionBase_GetVertexInstanceConnectedPolygons_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_GetVertexInstanceConnectedPolygons_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMeshDescriptionBase_GetVertexInstanceConnectedPolygons_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_GetVertexInstanceConnectedPolygons_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMeshDescriptionBase_GetVertexInstanceConnectedPolygons()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMeshDescriptionBase_GetVertexInstanceConnectedPolygons_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMeshDescriptionBase_GetVertexInstanceConnectedTriangles_Statics
	{
		struct MeshDescriptionBase_eventGetVertexInstanceConnectedTriangles_Parms
		{
			FVertexInstanceID VertexInstanceID;
			TArray<FTriangleID> OutConnectedTriangleIDs;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutConnectedTriangleIDs;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutConnectedTriangleIDs_Inner;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VertexInstanceID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_GetVertexInstanceConnectedTriangles_Statics::NewProp_OutConnectedTriangleIDs = { "OutConnectedTriangleIDs", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MeshDescriptionBase_eventGetVertexInstanceConnectedTriangles_Parms, OutConnectedTriangleIDs), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_GetVertexInstanceConnectedTriangles_Statics::NewProp_OutConnectedTriangleIDs_Inner = { "OutConnectedTriangleIDs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FTriangleID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_GetVertexInstanceConnectedTriangles_Statics::NewProp_VertexInstanceID = { "VertexInstanceID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MeshDescriptionBase_eventGetVertexInstanceConnectedTriangles_Parms, VertexInstanceID), Z_Construct_UScriptStruct_FVertexInstanceID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeshDescriptionBase_GetVertexInstanceConnectedTriangles_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_GetVertexInstanceConnectedTriangles_Statics::NewProp_OutConnectedTriangleIDs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_GetVertexInstanceConnectedTriangles_Statics::NewProp_OutConnectedTriangleIDs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_GetVertexInstanceConnectedTriangles_Statics::NewProp_VertexInstanceID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMeshDescriptionBase_GetVertexInstanceConnectedTriangles_Statics::Function_MetaDataParams[] = {
		{ "Category", "MeshDescription" },
		{ "Comment", "/** Returns reference to an array of Triangle IDs connected to this vertex instance */" },
		{ "ModuleRelativePath", "Public/MeshDescriptionBase.h" },
		{ "ToolTip", "Returns reference to an array of Triangle IDs connected to this vertex instance" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshDescriptionBase_GetVertexInstanceConnectedTriangles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshDescriptionBase, nullptr, "GetVertexInstanceConnectedTriangles", nullptr, nullptr, sizeof(MeshDescriptionBase_eventGetVertexInstanceConnectedTriangles_Parms), Z_Construct_UFunction_UMeshDescriptionBase_GetVertexInstanceConnectedTriangles_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_GetVertexInstanceConnectedTriangles_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMeshDescriptionBase_GetVertexInstanceConnectedTriangles_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_GetVertexInstanceConnectedTriangles_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMeshDescriptionBase_GetVertexInstanceConnectedTriangles()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMeshDescriptionBase_GetVertexInstanceConnectedTriangles_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMeshDescriptionBase_GetVertexInstanceForPolygonVertex_Statics
	{
		struct MeshDescriptionBase_eventGetVertexInstanceForPolygonVertex_Parms
		{
			FPolygonID PolygonID;
			FVertexID VertexID;
			FVertexInstanceID ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VertexID;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PolygonID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_GetVertexInstanceForPolygonVertex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MeshDescriptionBase_eventGetVertexInstanceForPolygonVertex_Parms, ReturnValue), Z_Construct_UScriptStruct_FVertexInstanceID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_GetVertexInstanceForPolygonVertex_Statics::NewProp_VertexID = { "VertexID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MeshDescriptionBase_eventGetVertexInstanceForPolygonVertex_Parms, VertexID), Z_Construct_UScriptStruct_FVertexID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_GetVertexInstanceForPolygonVertex_Statics::NewProp_PolygonID = { "PolygonID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MeshDescriptionBase_eventGetVertexInstanceForPolygonVertex_Parms, PolygonID), Z_Construct_UScriptStruct_FPolygonID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeshDescriptionBase_GetVertexInstanceForPolygonVertex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_GetVertexInstanceForPolygonVertex_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_GetVertexInstanceForPolygonVertex_Statics::NewProp_VertexID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_GetVertexInstanceForPolygonVertex_Statics::NewProp_PolygonID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMeshDescriptionBase_GetVertexInstanceForPolygonVertex_Statics::Function_MetaDataParams[] = {
		{ "Category", "MeshDescription" },
		{ "Comment", "/** Return the vertex instance which corresponds to the given vertex on the given polygon, or FVertexInstanceID::Invalid */" },
		{ "ModuleRelativePath", "Public/MeshDescriptionBase.h" },
		{ "ToolTip", "Return the vertex instance which corresponds to the given vertex on the given polygon, or FVertexInstanceID::Invalid" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshDescriptionBase_GetVertexInstanceForPolygonVertex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshDescriptionBase, nullptr, "GetVertexInstanceForPolygonVertex", nullptr, nullptr, sizeof(MeshDescriptionBase_eventGetVertexInstanceForPolygonVertex_Parms), Z_Construct_UFunction_UMeshDescriptionBase_GetVertexInstanceForPolygonVertex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_GetVertexInstanceForPolygonVertex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMeshDescriptionBase_GetVertexInstanceForPolygonVertex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_GetVertexInstanceForPolygonVertex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMeshDescriptionBase_GetVertexInstanceForPolygonVertex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMeshDescriptionBase_GetVertexInstanceForPolygonVertex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMeshDescriptionBase_GetVertexInstanceForTriangleVertex_Statics
	{
		struct MeshDescriptionBase_eventGetVertexInstanceForTriangleVertex_Parms
		{
			FTriangleID TriangleID;
			FVertexID VertexID;
			FVertexInstanceID ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VertexID;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TriangleID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_GetVertexInstanceForTriangleVertex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MeshDescriptionBase_eventGetVertexInstanceForTriangleVertex_Parms, ReturnValue), Z_Construct_UScriptStruct_FVertexInstanceID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_GetVertexInstanceForTriangleVertex_Statics::NewProp_VertexID = { "VertexID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MeshDescriptionBase_eventGetVertexInstanceForTriangleVertex_Parms, VertexID), Z_Construct_UScriptStruct_FVertexID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_GetVertexInstanceForTriangleVertex_Statics::NewProp_TriangleID = { "TriangleID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MeshDescriptionBase_eventGetVertexInstanceForTriangleVertex_Parms, TriangleID), Z_Construct_UScriptStruct_FTriangleID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeshDescriptionBase_GetVertexInstanceForTriangleVertex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_GetVertexInstanceForTriangleVertex_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_GetVertexInstanceForTriangleVertex_Statics::NewProp_VertexID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_GetVertexInstanceForTriangleVertex_Statics::NewProp_TriangleID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMeshDescriptionBase_GetVertexInstanceForTriangleVertex_Statics::Function_MetaDataParams[] = {
		{ "Category", "MeshDescription" },
		{ "Comment", "/** Return the vertex instance which corresponds to the given vertex on the given triangle, or FVertexInstanceID::Invalid */" },
		{ "ModuleRelativePath", "Public/MeshDescriptionBase.h" },
		{ "ToolTip", "Return the vertex instance which corresponds to the given vertex on the given triangle, or FVertexInstanceID::Invalid" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshDescriptionBase_GetVertexInstanceForTriangleVertex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshDescriptionBase, nullptr, "GetVertexInstanceForTriangleVertex", nullptr, nullptr, sizeof(MeshDescriptionBase_eventGetVertexInstanceForTriangleVertex_Parms), Z_Construct_UFunction_UMeshDescriptionBase_GetVertexInstanceForTriangleVertex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_GetVertexInstanceForTriangleVertex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMeshDescriptionBase_GetVertexInstanceForTriangleVertex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_GetVertexInstanceForTriangleVertex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMeshDescriptionBase_GetVertexInstanceForTriangleVertex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMeshDescriptionBase_GetVertexInstanceForTriangleVertex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMeshDescriptionBase_GetVertexInstancePairEdge_Statics
	{
		struct MeshDescriptionBase_eventGetVertexInstancePairEdge_Parms
		{
			FVertexInstanceID VertexInstanceID0;
			FVertexInstanceID VertexInstanceID1;
			FEdgeID ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VertexInstanceID1;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VertexInstanceID0;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_GetVertexInstancePairEdge_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MeshDescriptionBase_eventGetVertexInstancePairEdge_Parms, ReturnValue), Z_Construct_UScriptStruct_FEdgeID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_GetVertexInstancePairEdge_Statics::NewProp_VertexInstanceID1 = { "VertexInstanceID1", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MeshDescriptionBase_eventGetVertexInstancePairEdge_Parms, VertexInstanceID1), Z_Construct_UScriptStruct_FVertexInstanceID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_GetVertexInstancePairEdge_Statics::NewProp_VertexInstanceID0 = { "VertexInstanceID0", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MeshDescriptionBase_eventGetVertexInstancePairEdge_Parms, VertexInstanceID0), Z_Construct_UScriptStruct_FVertexInstanceID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeshDescriptionBase_GetVertexInstancePairEdge_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_GetVertexInstancePairEdge_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_GetVertexInstancePairEdge_Statics::NewProp_VertexInstanceID1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_GetVertexInstancePairEdge_Statics::NewProp_VertexInstanceID0,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMeshDescriptionBase_GetVertexInstancePairEdge_Statics::Function_MetaDataParams[] = {
		{ "Category", "MeshDescription" },
		{ "Comment", "/** Returns the edge ID defined by the two given vertex instance IDs, if there is one; otherwise FEdgeID::Invalid */" },
		{ "ModuleRelativePath", "Public/MeshDescriptionBase.h" },
		{ "ToolTip", "Returns the edge ID defined by the two given vertex instance IDs, if there is one; otherwise FEdgeID::Invalid" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshDescriptionBase_GetVertexInstancePairEdge_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshDescriptionBase, nullptr, "GetVertexInstancePairEdge", nullptr, nullptr, sizeof(MeshDescriptionBase_eventGetVertexInstancePairEdge_Parms), Z_Construct_UFunction_UMeshDescriptionBase_GetVertexInstancePairEdge_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_GetVertexInstancePairEdge_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMeshDescriptionBase_GetVertexInstancePairEdge_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_GetVertexInstancePairEdge_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMeshDescriptionBase_GetVertexInstancePairEdge()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMeshDescriptionBase_GetVertexInstancePairEdge_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMeshDescriptionBase_GetVertexInstanceVertex_Statics
	{
		struct MeshDescriptionBase_eventGetVertexInstanceVertex_Parms
		{
			FVertexInstanceID VertexInstanceID;
			FVertexID ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VertexInstanceID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_GetVertexInstanceVertex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MeshDescriptionBase_eventGetVertexInstanceVertex_Parms, ReturnValue), Z_Construct_UScriptStruct_FVertexID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_GetVertexInstanceVertex_Statics::NewProp_VertexInstanceID = { "VertexInstanceID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MeshDescriptionBase_eventGetVertexInstanceVertex_Parms, VertexInstanceID), Z_Construct_UScriptStruct_FVertexInstanceID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeshDescriptionBase_GetVertexInstanceVertex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_GetVertexInstanceVertex_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_GetVertexInstanceVertex_Statics::NewProp_VertexInstanceID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMeshDescriptionBase_GetVertexInstanceVertex_Statics::Function_MetaDataParams[] = {
		{ "Category", "MeshDescription" },
		{ "Comment", "/** Returns the vertex ID associated with the given vertex instance */" },
		{ "ModuleRelativePath", "Public/MeshDescriptionBase.h" },
		{ "ToolTip", "Returns the vertex ID associated with the given vertex instance" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshDescriptionBase_GetVertexInstanceVertex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshDescriptionBase, nullptr, "GetVertexInstanceVertex", nullptr, nullptr, sizeof(MeshDescriptionBase_eventGetVertexInstanceVertex_Parms), Z_Construct_UFunction_UMeshDescriptionBase_GetVertexInstanceVertex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_GetVertexInstanceVertex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMeshDescriptionBase_GetVertexInstanceVertex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_GetVertexInstanceVertex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMeshDescriptionBase_GetVertexInstanceVertex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMeshDescriptionBase_GetVertexInstanceVertex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMeshDescriptionBase_GetVertexPairEdge_Statics
	{
		struct MeshDescriptionBase_eventGetVertexPairEdge_Parms
		{
			FVertexID VertexID0;
			FVertexID VertexID1;
			FEdgeID ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VertexID1;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VertexID0;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_GetVertexPairEdge_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MeshDescriptionBase_eventGetVertexPairEdge_Parms, ReturnValue), Z_Construct_UScriptStruct_FEdgeID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_GetVertexPairEdge_Statics::NewProp_VertexID1 = { "VertexID1", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MeshDescriptionBase_eventGetVertexPairEdge_Parms, VertexID1), Z_Construct_UScriptStruct_FVertexID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_GetVertexPairEdge_Statics::NewProp_VertexID0 = { "VertexID0", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MeshDescriptionBase_eventGetVertexPairEdge_Parms, VertexID0), Z_Construct_UScriptStruct_FVertexID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeshDescriptionBase_GetVertexPairEdge_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_GetVertexPairEdge_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_GetVertexPairEdge_Statics::NewProp_VertexID1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_GetVertexPairEdge_Statics::NewProp_VertexID0,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMeshDescriptionBase_GetVertexPairEdge_Statics::Function_MetaDataParams[] = {
		{ "Category", "MeshDescription" },
		{ "Comment", "/** Returns the edge ID defined by the two given vertex IDs, if there is one; otherwise FEdgeID::Invalid */" },
		{ "ModuleRelativePath", "Public/MeshDescriptionBase.h" },
		{ "ToolTip", "Returns the edge ID defined by the two given vertex IDs, if there is one; otherwise FEdgeID::Invalid" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshDescriptionBase_GetVertexPairEdge_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshDescriptionBase, nullptr, "GetVertexPairEdge", nullptr, nullptr, sizeof(MeshDescriptionBase_eventGetVertexPairEdge_Parms), Z_Construct_UFunction_UMeshDescriptionBase_GetVertexPairEdge_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_GetVertexPairEdge_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMeshDescriptionBase_GetVertexPairEdge_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_GetVertexPairEdge_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMeshDescriptionBase_GetVertexPairEdge()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMeshDescriptionBase_GetVertexPairEdge_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMeshDescriptionBase_GetVertexPosition_Statics
	{
		struct MeshDescriptionBase_eventGetVertexPosition_Parms
		{
			FVertexID VertexID;
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VertexID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_GetVertexPosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MeshDescriptionBase_eventGetVertexPosition_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_GetVertexPosition_Statics::NewProp_VertexID = { "VertexID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MeshDescriptionBase_eventGetVertexPosition_Parms, VertexID), Z_Construct_UScriptStruct_FVertexID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeshDescriptionBase_GetVertexPosition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_GetVertexPosition_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_GetVertexPosition_Statics::NewProp_VertexID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMeshDescriptionBase_GetVertexPosition_Statics::Function_MetaDataParams[] = {
		{ "Category", "MeshDescription" },
		{ "Comment", "/** Gets a vertex position */" },
		{ "ModuleRelativePath", "Public/MeshDescriptionBase.h" },
		{ "ToolTip", "Gets a vertex position" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshDescriptionBase_GetVertexPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshDescriptionBase, nullptr, "GetVertexPosition", nullptr, nullptr, sizeof(MeshDescriptionBase_eventGetVertexPosition_Parms), Z_Construct_UFunction_UMeshDescriptionBase_GetVertexPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_GetVertexPosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMeshDescriptionBase_GetVertexPosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_GetVertexPosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMeshDescriptionBase_GetVertexPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMeshDescriptionBase_GetVertexPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMeshDescriptionBase_GetVertexVertexInstances_Statics
	{
		struct MeshDescriptionBase_eventGetVertexVertexInstances_Parms
		{
			FVertexID VertexID;
			TArray<FVertexInstanceID> OutVertexInstanceIDs;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutVertexInstanceIDs;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutVertexInstanceIDs_Inner;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VertexID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_GetVertexVertexInstances_Statics::NewProp_OutVertexInstanceIDs = { "OutVertexInstanceIDs", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MeshDescriptionBase_eventGetVertexVertexInstances_Parms, OutVertexInstanceIDs), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_GetVertexVertexInstances_Statics::NewProp_OutVertexInstanceIDs_Inner = { "OutVertexInstanceIDs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVertexInstanceID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_GetVertexVertexInstances_Statics::NewProp_VertexID = { "VertexID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MeshDescriptionBase_eventGetVertexVertexInstances_Parms, VertexID), Z_Construct_UScriptStruct_FVertexID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeshDescriptionBase_GetVertexVertexInstances_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_GetVertexVertexInstances_Statics::NewProp_OutVertexInstanceIDs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_GetVertexVertexInstances_Statics::NewProp_OutVertexInstanceIDs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_GetVertexVertexInstances_Statics::NewProp_VertexID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMeshDescriptionBase_GetVertexVertexInstances_Statics::Function_MetaDataParams[] = {
		{ "Category", "MeshDescription" },
		{ "Comment", "/** Returns reference to an array of VertexInstance IDs instanced from this vertex */" },
		{ "ModuleRelativePath", "Public/MeshDescriptionBase.h" },
		{ "ToolTip", "Returns reference to an array of VertexInstance IDs instanced from this vertex" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshDescriptionBase_GetVertexVertexInstances_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshDescriptionBase, nullptr, "GetVertexVertexInstances", nullptr, nullptr, sizeof(MeshDescriptionBase_eventGetVertexVertexInstances_Parms), Z_Construct_UFunction_UMeshDescriptionBase_GetVertexVertexInstances_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_GetVertexVertexInstances_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMeshDescriptionBase_GetVertexVertexInstances_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_GetVertexVertexInstances_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMeshDescriptionBase_GetVertexVertexInstances()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMeshDescriptionBase_GetVertexVertexInstances_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMeshDescriptionBase_IsEdgeInternal_Statics
	{
		struct MeshDescriptionBase_eventIsEdgeInternal_Parms
		{
			FEdgeID EdgeID;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EdgeID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMeshDescriptionBase_IsEdgeInternal_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MeshDescriptionBase_eventIsEdgeInternal_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_IsEdgeInternal_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MeshDescriptionBase_eventIsEdgeInternal_Parms), &Z_Construct_UFunction_UMeshDescriptionBase_IsEdgeInternal_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_IsEdgeInternal_Statics::NewProp_EdgeID = { "EdgeID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MeshDescriptionBase_eventIsEdgeInternal_Parms, EdgeID), Z_Construct_UScriptStruct_FEdgeID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeshDescriptionBase_IsEdgeInternal_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_IsEdgeInternal_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_IsEdgeInternal_Statics::NewProp_EdgeID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMeshDescriptionBase_IsEdgeInternal_Statics::Function_MetaDataParams[] = {
		{ "Category", "MeshDescription" },
		{ "Comment", "/** Determine whether a given edge is an internal edge between triangles of a polygon */" },
		{ "ModuleRelativePath", "Public/MeshDescriptionBase.h" },
		{ "ToolTip", "Determine whether a given edge is an internal edge between triangles of a polygon" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshDescriptionBase_IsEdgeInternal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshDescriptionBase, nullptr, "IsEdgeInternal", nullptr, nullptr, sizeof(MeshDescriptionBase_eventIsEdgeInternal_Parms), Z_Construct_UFunction_UMeshDescriptionBase_IsEdgeInternal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_IsEdgeInternal_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMeshDescriptionBase_IsEdgeInternal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_IsEdgeInternal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMeshDescriptionBase_IsEdgeInternal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMeshDescriptionBase_IsEdgeInternal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMeshDescriptionBase_IsEdgeInternalToPolygon_Statics
	{
		struct MeshDescriptionBase_eventIsEdgeInternalToPolygon_Parms
		{
			FEdgeID EdgeID;
			FPolygonID PolygonID;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PolygonID;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EdgeID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMeshDescriptionBase_IsEdgeInternalToPolygon_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MeshDescriptionBase_eventIsEdgeInternalToPolygon_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_IsEdgeInternalToPolygon_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MeshDescriptionBase_eventIsEdgeInternalToPolygon_Parms), &Z_Construct_UFunction_UMeshDescriptionBase_IsEdgeInternalToPolygon_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_IsEdgeInternalToPolygon_Statics::NewProp_PolygonID = { "PolygonID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MeshDescriptionBase_eventIsEdgeInternalToPolygon_Parms, PolygonID), Z_Construct_UScriptStruct_FPolygonID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_IsEdgeInternalToPolygon_Statics::NewProp_EdgeID = { "EdgeID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MeshDescriptionBase_eventIsEdgeInternalToPolygon_Parms, EdgeID), Z_Construct_UScriptStruct_FEdgeID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeshDescriptionBase_IsEdgeInternalToPolygon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_IsEdgeInternalToPolygon_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_IsEdgeInternalToPolygon_Statics::NewProp_PolygonID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_IsEdgeInternalToPolygon_Statics::NewProp_EdgeID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMeshDescriptionBase_IsEdgeInternalToPolygon_Statics::Function_MetaDataParams[] = {
		{ "Category", "MeshDescription" },
		{ "Comment", "/** Determine whether a given edge is an internal edge between triangles of a specific polygon */" },
		{ "ModuleRelativePath", "Public/MeshDescriptionBase.h" },
		{ "ToolTip", "Determine whether a given edge is an internal edge between triangles of a specific polygon" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshDescriptionBase_IsEdgeInternalToPolygon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshDescriptionBase, nullptr, "IsEdgeInternalToPolygon", nullptr, nullptr, sizeof(MeshDescriptionBase_eventIsEdgeInternalToPolygon_Parms), Z_Construct_UFunction_UMeshDescriptionBase_IsEdgeInternalToPolygon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_IsEdgeInternalToPolygon_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMeshDescriptionBase_IsEdgeInternalToPolygon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_IsEdgeInternalToPolygon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMeshDescriptionBase_IsEdgeInternalToPolygon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMeshDescriptionBase_IsEdgeInternalToPolygon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMeshDescriptionBase_IsEdgeValid_Statics
	{
		struct MeshDescriptionBase_eventIsEdgeValid_Parms
		{
			FEdgeID EdgeID;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EdgeID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMeshDescriptionBase_IsEdgeValid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MeshDescriptionBase_eventIsEdgeValid_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_IsEdgeValid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MeshDescriptionBase_eventIsEdgeValid_Parms), &Z_Construct_UFunction_UMeshDescriptionBase_IsEdgeValid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_IsEdgeValid_Statics::NewProp_EdgeID = { "EdgeID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MeshDescriptionBase_eventIsEdgeValid_Parms, EdgeID), Z_Construct_UScriptStruct_FEdgeID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeshDescriptionBase_IsEdgeValid_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_IsEdgeValid_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_IsEdgeValid_Statics::NewProp_EdgeID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMeshDescriptionBase_IsEdgeValid_Statics::Function_MetaDataParams[] = {
		{ "Category", "MeshDescription" },
		{ "Comment", "/** Returns whether the passed edge ID is valid */" },
		{ "ModuleRelativePath", "Public/MeshDescriptionBase.h" },
		{ "ToolTip", "Returns whether the passed edge ID is valid" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshDescriptionBase_IsEdgeValid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshDescriptionBase, nullptr, "IsEdgeValid", nullptr, nullptr, sizeof(MeshDescriptionBase_eventIsEdgeValid_Parms), Z_Construct_UFunction_UMeshDescriptionBase_IsEdgeValid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_IsEdgeValid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMeshDescriptionBase_IsEdgeValid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_IsEdgeValid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMeshDescriptionBase_IsEdgeValid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMeshDescriptionBase_IsEdgeValid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMeshDescriptionBase_IsEmpty_Statics
	{
		struct MeshDescriptionBase_eventIsEmpty_Parms
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
	void Z_Construct_UFunction_UMeshDescriptionBase_IsEmpty_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MeshDescriptionBase_eventIsEmpty_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_IsEmpty_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MeshDescriptionBase_eventIsEmpty_Parms), &Z_Construct_UFunction_UMeshDescriptionBase_IsEmpty_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeshDescriptionBase_IsEmpty_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_IsEmpty_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMeshDescriptionBase_IsEmpty_Statics::Function_MetaDataParams[] = {
		{ "Category", "MeshDescription" },
		{ "Comment", "/** Return whether the mesh description is empty */" },
		{ "ModuleRelativePath", "Public/MeshDescriptionBase.h" },
		{ "ToolTip", "Return whether the mesh description is empty" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshDescriptionBase_IsEmpty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshDescriptionBase, nullptr, "IsEmpty", nullptr, nullptr, sizeof(MeshDescriptionBase_eventIsEmpty_Parms), Z_Construct_UFunction_UMeshDescriptionBase_IsEmpty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_IsEmpty_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMeshDescriptionBase_IsEmpty_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_IsEmpty_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMeshDescriptionBase_IsEmpty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMeshDescriptionBase_IsEmpty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMeshDescriptionBase_IsPolygonGroupValid_Statics
	{
		struct MeshDescriptionBase_eventIsPolygonGroupValid_Parms
		{
			FPolygonGroupID PolygonGroupID;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PolygonGroupID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMeshDescriptionBase_IsPolygonGroupValid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MeshDescriptionBase_eventIsPolygonGroupValid_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_IsPolygonGroupValid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MeshDescriptionBase_eventIsPolygonGroupValid_Parms), &Z_Construct_UFunction_UMeshDescriptionBase_IsPolygonGroupValid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_IsPolygonGroupValid_Statics::NewProp_PolygonGroupID = { "PolygonGroupID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MeshDescriptionBase_eventIsPolygonGroupValid_Parms, PolygonGroupID), Z_Construct_UScriptStruct_FPolygonGroupID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeshDescriptionBase_IsPolygonGroupValid_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_IsPolygonGroupValid_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_IsPolygonGroupValid_Statics::NewProp_PolygonGroupID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMeshDescriptionBase_IsPolygonGroupValid_Statics::Function_MetaDataParams[] = {
		{ "Category", "MeshDescription" },
		{ "Comment", "/** Returns whether the passed polygon group ID is valid */" },
		{ "ModuleRelativePath", "Public/MeshDescriptionBase.h" },
		{ "ToolTip", "Returns whether the passed polygon group ID is valid" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshDescriptionBase_IsPolygonGroupValid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshDescriptionBase, nullptr, "IsPolygonGroupValid", nullptr, nullptr, sizeof(MeshDescriptionBase_eventIsPolygonGroupValid_Parms), Z_Construct_UFunction_UMeshDescriptionBase_IsPolygonGroupValid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_IsPolygonGroupValid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMeshDescriptionBase_IsPolygonGroupValid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_IsPolygonGroupValid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMeshDescriptionBase_IsPolygonGroupValid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMeshDescriptionBase_IsPolygonGroupValid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMeshDescriptionBase_IsPolygonValid_Statics
	{
		struct MeshDescriptionBase_eventIsPolygonValid_Parms
		{
			FPolygonID PolygonID;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PolygonID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMeshDescriptionBase_IsPolygonValid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MeshDescriptionBase_eventIsPolygonValid_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_IsPolygonValid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MeshDescriptionBase_eventIsPolygonValid_Parms), &Z_Construct_UFunction_UMeshDescriptionBase_IsPolygonValid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_IsPolygonValid_Statics::NewProp_PolygonID = { "PolygonID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MeshDescriptionBase_eventIsPolygonValid_Parms, PolygonID), Z_Construct_UScriptStruct_FPolygonID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeshDescriptionBase_IsPolygonValid_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_IsPolygonValid_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_IsPolygonValid_Statics::NewProp_PolygonID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMeshDescriptionBase_IsPolygonValid_Statics::Function_MetaDataParams[] = {
		{ "Category", "MeshDescription" },
		{ "Comment", "/** Returns whether the passed polygon ID is valid */" },
		{ "ModuleRelativePath", "Public/MeshDescriptionBase.h" },
		{ "ToolTip", "Returns whether the passed polygon ID is valid" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshDescriptionBase_IsPolygonValid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshDescriptionBase, nullptr, "IsPolygonValid", nullptr, nullptr, sizeof(MeshDescriptionBase_eventIsPolygonValid_Parms), Z_Construct_UFunction_UMeshDescriptionBase_IsPolygonValid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_IsPolygonValid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMeshDescriptionBase_IsPolygonValid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_IsPolygonValid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMeshDescriptionBase_IsPolygonValid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMeshDescriptionBase_IsPolygonValid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMeshDescriptionBase_IsTrianglePartOfNgon_Statics
	{
		struct MeshDescriptionBase_eventIsTrianglePartOfNgon_Parms
		{
			FTriangleID TriangleID;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TriangleID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMeshDescriptionBase_IsTrianglePartOfNgon_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MeshDescriptionBase_eventIsTrianglePartOfNgon_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_IsTrianglePartOfNgon_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MeshDescriptionBase_eventIsTrianglePartOfNgon_Parms), &Z_Construct_UFunction_UMeshDescriptionBase_IsTrianglePartOfNgon_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_IsTrianglePartOfNgon_Statics::NewProp_TriangleID = { "TriangleID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MeshDescriptionBase_eventIsTrianglePartOfNgon_Parms, TriangleID), Z_Construct_UScriptStruct_FTriangleID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeshDescriptionBase_IsTrianglePartOfNgon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_IsTrianglePartOfNgon_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_IsTrianglePartOfNgon_Statics::NewProp_TriangleID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMeshDescriptionBase_IsTrianglePartOfNgon_Statics::Function_MetaDataParams[] = {
		{ "Category", "MeshDescription" },
		{ "Comment", "/** Determines if this triangle is part of an n-gon */" },
		{ "ModuleRelativePath", "Public/MeshDescriptionBase.h" },
		{ "ToolTip", "Determines if this triangle is part of an n-gon" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshDescriptionBase_IsTrianglePartOfNgon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshDescriptionBase, nullptr, "IsTrianglePartOfNgon", nullptr, nullptr, sizeof(MeshDescriptionBase_eventIsTrianglePartOfNgon_Parms), Z_Construct_UFunction_UMeshDescriptionBase_IsTrianglePartOfNgon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_IsTrianglePartOfNgon_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMeshDescriptionBase_IsTrianglePartOfNgon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_IsTrianglePartOfNgon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMeshDescriptionBase_IsTrianglePartOfNgon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMeshDescriptionBase_IsTrianglePartOfNgon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMeshDescriptionBase_IsTriangleValid_Statics
	{
		struct MeshDescriptionBase_eventIsTriangleValid_Parms
		{
			FTriangleID TriangleID;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TriangleID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TriangleID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMeshDescriptionBase_IsTriangleValid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MeshDescriptionBase_eventIsTriangleValid_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_IsTriangleValid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MeshDescriptionBase_eventIsTriangleValid_Parms), &Z_Construct_UFunction_UMeshDescriptionBase_IsTriangleValid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMeshDescriptionBase_IsTriangleValid_Statics::NewProp_TriangleID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_IsTriangleValid_Statics::NewProp_TriangleID = { "TriangleID", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MeshDescriptionBase_eventIsTriangleValid_Parms, TriangleID), Z_Construct_UScriptStruct_FTriangleID, METADATA_PARAMS(Z_Construct_UFunction_UMeshDescriptionBase_IsTriangleValid_Statics::NewProp_TriangleID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_IsTriangleValid_Statics::NewProp_TriangleID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeshDescriptionBase_IsTriangleValid_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_IsTriangleValid_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_IsTriangleValid_Statics::NewProp_TriangleID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMeshDescriptionBase_IsTriangleValid_Statics::Function_MetaDataParams[] = {
		{ "Category", "MeshDescription" },
		{ "Comment", "/** Returns whether the passed triangle ID is valid */" },
		{ "ModuleRelativePath", "Public/MeshDescriptionBase.h" },
		{ "ToolTip", "Returns whether the passed triangle ID is valid" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshDescriptionBase_IsTriangleValid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshDescriptionBase, nullptr, "IsTriangleValid", nullptr, nullptr, sizeof(MeshDescriptionBase_eventIsTriangleValid_Parms), Z_Construct_UFunction_UMeshDescriptionBase_IsTriangleValid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_IsTriangleValid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMeshDescriptionBase_IsTriangleValid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_IsTriangleValid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMeshDescriptionBase_IsTriangleValid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMeshDescriptionBase_IsTriangleValid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMeshDescriptionBase_IsVertexInstanceValid_Statics
	{
		struct MeshDescriptionBase_eventIsVertexInstanceValid_Parms
		{
			FVertexInstanceID VertexInstanceID;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VertexInstanceID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMeshDescriptionBase_IsVertexInstanceValid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MeshDescriptionBase_eventIsVertexInstanceValid_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_IsVertexInstanceValid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MeshDescriptionBase_eventIsVertexInstanceValid_Parms), &Z_Construct_UFunction_UMeshDescriptionBase_IsVertexInstanceValid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_IsVertexInstanceValid_Statics::NewProp_VertexInstanceID = { "VertexInstanceID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MeshDescriptionBase_eventIsVertexInstanceValid_Parms, VertexInstanceID), Z_Construct_UScriptStruct_FVertexInstanceID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeshDescriptionBase_IsVertexInstanceValid_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_IsVertexInstanceValid_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_IsVertexInstanceValid_Statics::NewProp_VertexInstanceID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMeshDescriptionBase_IsVertexInstanceValid_Statics::Function_MetaDataParams[] = {
		{ "Category", "MeshDescription" },
		{ "Comment", "/** Returns whether the passed vertex instance ID is valid */" },
		{ "ModuleRelativePath", "Public/MeshDescriptionBase.h" },
		{ "ToolTip", "Returns whether the passed vertex instance ID is valid" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshDescriptionBase_IsVertexInstanceValid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshDescriptionBase, nullptr, "IsVertexInstanceValid", nullptr, nullptr, sizeof(MeshDescriptionBase_eventIsVertexInstanceValid_Parms), Z_Construct_UFunction_UMeshDescriptionBase_IsVertexInstanceValid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_IsVertexInstanceValid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMeshDescriptionBase_IsVertexInstanceValid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_IsVertexInstanceValid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMeshDescriptionBase_IsVertexInstanceValid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMeshDescriptionBase_IsVertexInstanceValid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMeshDescriptionBase_IsVertexOrphaned_Statics
	{
		struct MeshDescriptionBase_eventIsVertexOrphaned_Parms
		{
			FVertexID VertexID;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VertexID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMeshDescriptionBase_IsVertexOrphaned_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MeshDescriptionBase_eventIsVertexOrphaned_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_IsVertexOrphaned_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MeshDescriptionBase_eventIsVertexOrphaned_Parms), &Z_Construct_UFunction_UMeshDescriptionBase_IsVertexOrphaned_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_IsVertexOrphaned_Statics::NewProp_VertexID = { "VertexID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MeshDescriptionBase_eventIsVertexOrphaned_Parms, VertexID), Z_Construct_UScriptStruct_FVertexID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeshDescriptionBase_IsVertexOrphaned_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_IsVertexOrphaned_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_IsVertexOrphaned_Statics::NewProp_VertexID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMeshDescriptionBase_IsVertexOrphaned_Statics::Function_MetaDataParams[] = {
		{ "Category", "MeshDescription" },
		{ "Comment", "/** Returns whether a given vertex is orphaned, i.e. it doesn't form part of any polygon */" },
		{ "ModuleRelativePath", "Public/MeshDescriptionBase.h" },
		{ "ToolTip", "Returns whether a given vertex is orphaned, i.e. it doesn't form part of any polygon" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshDescriptionBase_IsVertexOrphaned_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshDescriptionBase, nullptr, "IsVertexOrphaned", nullptr, nullptr, sizeof(MeshDescriptionBase_eventIsVertexOrphaned_Parms), Z_Construct_UFunction_UMeshDescriptionBase_IsVertexOrphaned_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_IsVertexOrphaned_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMeshDescriptionBase_IsVertexOrphaned_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_IsVertexOrphaned_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMeshDescriptionBase_IsVertexOrphaned()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMeshDescriptionBase_IsVertexOrphaned_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMeshDescriptionBase_IsVertexValid_Statics
	{
		struct MeshDescriptionBase_eventIsVertexValid_Parms
		{
			FVertexID VertexID;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VertexID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMeshDescriptionBase_IsVertexValid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MeshDescriptionBase_eventIsVertexValid_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_IsVertexValid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MeshDescriptionBase_eventIsVertexValid_Parms), &Z_Construct_UFunction_UMeshDescriptionBase_IsVertexValid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_IsVertexValid_Statics::NewProp_VertexID = { "VertexID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MeshDescriptionBase_eventIsVertexValid_Parms, VertexID), Z_Construct_UScriptStruct_FVertexID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeshDescriptionBase_IsVertexValid_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_IsVertexValid_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_IsVertexValid_Statics::NewProp_VertexID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMeshDescriptionBase_IsVertexValid_Statics::Function_MetaDataParams[] = {
		{ "Category", "MeshDescription" },
		{ "Comment", "/** Returns whether the passed vertex ID is valid */" },
		{ "ModuleRelativePath", "Public/MeshDescriptionBase.h" },
		{ "ToolTip", "Returns whether the passed vertex ID is valid" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshDescriptionBase_IsVertexValid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshDescriptionBase, nullptr, "IsVertexValid", nullptr, nullptr, sizeof(MeshDescriptionBase_eventIsVertexValid_Parms), Z_Construct_UFunction_UMeshDescriptionBase_IsVertexValid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_IsVertexValid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMeshDescriptionBase_IsVertexValid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_IsVertexValid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMeshDescriptionBase_IsVertexValid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMeshDescriptionBase_IsVertexValid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMeshDescriptionBase_ReserveNewEdges_Statics
	{
		struct MeshDescriptionBase_eventReserveNewEdges_Parms
		{
			int32 NumberOfNewEdges;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumberOfNewEdges;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_ReserveNewEdges_Statics::NewProp_NumberOfNewEdges = { "NumberOfNewEdges", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MeshDescriptionBase_eventReserveNewEdges_Parms, NumberOfNewEdges), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeshDescriptionBase_ReserveNewEdges_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_ReserveNewEdges_Statics::NewProp_NumberOfNewEdges,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMeshDescriptionBase_ReserveNewEdges_Statics::Function_MetaDataParams[] = {
		{ "Category", "MeshDescription" },
		{ "Comment", "/** Reserves space for this number of new edges */" },
		{ "ModuleRelativePath", "Public/MeshDescriptionBase.h" },
		{ "ToolTip", "Reserves space for this number of new edges" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshDescriptionBase_ReserveNewEdges_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshDescriptionBase, nullptr, "ReserveNewEdges", nullptr, nullptr, sizeof(MeshDescriptionBase_eventReserveNewEdges_Parms), Z_Construct_UFunction_UMeshDescriptionBase_ReserveNewEdges_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_ReserveNewEdges_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMeshDescriptionBase_ReserveNewEdges_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_ReserveNewEdges_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMeshDescriptionBase_ReserveNewEdges()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMeshDescriptionBase_ReserveNewEdges_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMeshDescriptionBase_ReserveNewPolygonGroups_Statics
	{
		struct MeshDescriptionBase_eventReserveNewPolygonGroups_Parms
		{
			int32 NumberOfNewPolygonGroups;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumberOfNewPolygonGroups;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_ReserveNewPolygonGroups_Statics::NewProp_NumberOfNewPolygonGroups = { "NumberOfNewPolygonGroups", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MeshDescriptionBase_eventReserveNewPolygonGroups_Parms, NumberOfNewPolygonGroups), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeshDescriptionBase_ReserveNewPolygonGroups_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_ReserveNewPolygonGroups_Statics::NewProp_NumberOfNewPolygonGroups,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMeshDescriptionBase_ReserveNewPolygonGroups_Statics::Function_MetaDataParams[] = {
		{ "Category", "MeshDescription" },
		{ "Comment", "/** Reserves space for this number of new polygon groups */" },
		{ "ModuleRelativePath", "Public/MeshDescriptionBase.h" },
		{ "ToolTip", "Reserves space for this number of new polygon groups" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshDescriptionBase_ReserveNewPolygonGroups_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshDescriptionBase, nullptr, "ReserveNewPolygonGroups", nullptr, nullptr, sizeof(MeshDescriptionBase_eventReserveNewPolygonGroups_Parms), Z_Construct_UFunction_UMeshDescriptionBase_ReserveNewPolygonGroups_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_ReserveNewPolygonGroups_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMeshDescriptionBase_ReserveNewPolygonGroups_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_ReserveNewPolygonGroups_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMeshDescriptionBase_ReserveNewPolygonGroups()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMeshDescriptionBase_ReserveNewPolygonGroups_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMeshDescriptionBase_ReserveNewPolygons_Statics
	{
		struct MeshDescriptionBase_eventReserveNewPolygons_Parms
		{
			int32 NumberOfNewPolygons;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumberOfNewPolygons_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumberOfNewPolygons;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMeshDescriptionBase_ReserveNewPolygons_Statics::NewProp_NumberOfNewPolygons_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_ReserveNewPolygons_Statics::NewProp_NumberOfNewPolygons = { "NumberOfNewPolygons", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MeshDescriptionBase_eventReserveNewPolygons_Parms, NumberOfNewPolygons), METADATA_PARAMS(Z_Construct_UFunction_UMeshDescriptionBase_ReserveNewPolygons_Statics::NewProp_NumberOfNewPolygons_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_ReserveNewPolygons_Statics::NewProp_NumberOfNewPolygons_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeshDescriptionBase_ReserveNewPolygons_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_ReserveNewPolygons_Statics::NewProp_NumberOfNewPolygons,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMeshDescriptionBase_ReserveNewPolygons_Statics::Function_MetaDataParams[] = {
		{ "Category", "MeshDescription" },
		{ "Comment", "/** Reserves space for this number of new polygons */" },
		{ "ModuleRelativePath", "Public/MeshDescriptionBase.h" },
		{ "ToolTip", "Reserves space for this number of new polygons" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshDescriptionBase_ReserveNewPolygons_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshDescriptionBase, nullptr, "ReserveNewPolygons", nullptr, nullptr, sizeof(MeshDescriptionBase_eventReserveNewPolygons_Parms), Z_Construct_UFunction_UMeshDescriptionBase_ReserveNewPolygons_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_ReserveNewPolygons_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMeshDescriptionBase_ReserveNewPolygons_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_ReserveNewPolygons_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMeshDescriptionBase_ReserveNewPolygons()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMeshDescriptionBase_ReserveNewPolygons_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMeshDescriptionBase_ReserveNewTriangles_Statics
	{
		struct MeshDescriptionBase_eventReserveNewTriangles_Parms
		{
			int32 NumberOfNewTriangles;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumberOfNewTriangles;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_ReserveNewTriangles_Statics::NewProp_NumberOfNewTriangles = { "NumberOfNewTriangles", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MeshDescriptionBase_eventReserveNewTriangles_Parms, NumberOfNewTriangles), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeshDescriptionBase_ReserveNewTriangles_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_ReserveNewTriangles_Statics::NewProp_NumberOfNewTriangles,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMeshDescriptionBase_ReserveNewTriangles_Statics::Function_MetaDataParams[] = {
		{ "Category", "MeshDescription" },
		{ "Comment", "/** Reserves space for this number of new triangles */" },
		{ "ModuleRelativePath", "Public/MeshDescriptionBase.h" },
		{ "ToolTip", "Reserves space for this number of new triangles" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshDescriptionBase_ReserveNewTriangles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshDescriptionBase, nullptr, "ReserveNewTriangles", nullptr, nullptr, sizeof(MeshDescriptionBase_eventReserveNewTriangles_Parms), Z_Construct_UFunction_UMeshDescriptionBase_ReserveNewTriangles_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_ReserveNewTriangles_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMeshDescriptionBase_ReserveNewTriangles_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_ReserveNewTriangles_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMeshDescriptionBase_ReserveNewTriangles()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMeshDescriptionBase_ReserveNewTriangles_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMeshDescriptionBase_ReserveNewVertexInstances_Statics
	{
		struct MeshDescriptionBase_eventReserveNewVertexInstances_Parms
		{
			int32 NumberOfNewVertexInstances;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumberOfNewVertexInstances;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_ReserveNewVertexInstances_Statics::NewProp_NumberOfNewVertexInstances = { "NumberOfNewVertexInstances", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MeshDescriptionBase_eventReserveNewVertexInstances_Parms, NumberOfNewVertexInstances), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeshDescriptionBase_ReserveNewVertexInstances_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_ReserveNewVertexInstances_Statics::NewProp_NumberOfNewVertexInstances,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMeshDescriptionBase_ReserveNewVertexInstances_Statics::Function_MetaDataParams[] = {
		{ "Category", "MeshDescription" },
		{ "Comment", "/** Reserves space for this number of new vertex instances */" },
		{ "ModuleRelativePath", "Public/MeshDescriptionBase.h" },
		{ "ToolTip", "Reserves space for this number of new vertex instances" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshDescriptionBase_ReserveNewVertexInstances_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshDescriptionBase, nullptr, "ReserveNewVertexInstances", nullptr, nullptr, sizeof(MeshDescriptionBase_eventReserveNewVertexInstances_Parms), Z_Construct_UFunction_UMeshDescriptionBase_ReserveNewVertexInstances_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_ReserveNewVertexInstances_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMeshDescriptionBase_ReserveNewVertexInstances_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_ReserveNewVertexInstances_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMeshDescriptionBase_ReserveNewVertexInstances()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMeshDescriptionBase_ReserveNewVertexInstances_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMeshDescriptionBase_ReserveNewVertices_Statics
	{
		struct MeshDescriptionBase_eventReserveNewVertices_Parms
		{
			int32 NumberOfNewVertices;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumberOfNewVertices;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_ReserveNewVertices_Statics::NewProp_NumberOfNewVertices = { "NumberOfNewVertices", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MeshDescriptionBase_eventReserveNewVertices_Parms, NumberOfNewVertices), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeshDescriptionBase_ReserveNewVertices_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_ReserveNewVertices_Statics::NewProp_NumberOfNewVertices,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMeshDescriptionBase_ReserveNewVertices_Statics::Function_MetaDataParams[] = {
		{ "Category", "MeshDescription" },
		{ "Comment", "/** Reserves space for this number of new vertices */" },
		{ "ModuleRelativePath", "Public/MeshDescriptionBase.h" },
		{ "ToolTip", "Reserves space for this number of new vertices" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshDescriptionBase_ReserveNewVertices_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshDescriptionBase, nullptr, "ReserveNewVertices", nullptr, nullptr, sizeof(MeshDescriptionBase_eventReserveNewVertices_Parms), Z_Construct_UFunction_UMeshDescriptionBase_ReserveNewVertices_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_ReserveNewVertices_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMeshDescriptionBase_ReserveNewVertices_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_ReserveNewVertices_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMeshDescriptionBase_ReserveNewVertices()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMeshDescriptionBase_ReserveNewVertices_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMeshDescriptionBase_ReversePolygonFacing_Statics
	{
		struct MeshDescriptionBase_eventReversePolygonFacing_Parms
		{
			FPolygonID PolygonID;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PolygonID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_ReversePolygonFacing_Statics::NewProp_PolygonID = { "PolygonID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MeshDescriptionBase_eventReversePolygonFacing_Parms, PolygonID), Z_Construct_UScriptStruct_FPolygonID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeshDescriptionBase_ReversePolygonFacing_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_ReversePolygonFacing_Statics::NewProp_PolygonID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMeshDescriptionBase_ReversePolygonFacing_Statics::Function_MetaDataParams[] = {
		{ "Category", "MeshDescription" },
		{ "Comment", "/** Reverse the winding order of the vertices of this polygon */" },
		{ "ModuleRelativePath", "Public/MeshDescriptionBase.h" },
		{ "ToolTip", "Reverse the winding order of the vertices of this polygon" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshDescriptionBase_ReversePolygonFacing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshDescriptionBase, nullptr, "ReversePolygonFacing", nullptr, nullptr, sizeof(MeshDescriptionBase_eventReversePolygonFacing_Parms), Z_Construct_UFunction_UMeshDescriptionBase_ReversePolygonFacing_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_ReversePolygonFacing_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMeshDescriptionBase_ReversePolygonFacing_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_ReversePolygonFacing_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMeshDescriptionBase_ReversePolygonFacing()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMeshDescriptionBase_ReversePolygonFacing_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMeshDescriptionBase_SetPolygonPolygonGroup_Statics
	{
		struct MeshDescriptionBase_eventSetPolygonPolygonGroup_Parms
		{
			FPolygonID PolygonID;
			FPolygonGroupID PolygonGroupID;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PolygonGroupID;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PolygonID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_SetPolygonPolygonGroup_Statics::NewProp_PolygonGroupID = { "PolygonGroupID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MeshDescriptionBase_eventSetPolygonPolygonGroup_Parms, PolygonGroupID), Z_Construct_UScriptStruct_FPolygonGroupID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_SetPolygonPolygonGroup_Statics::NewProp_PolygonID = { "PolygonID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MeshDescriptionBase_eventSetPolygonPolygonGroup_Parms, PolygonID), Z_Construct_UScriptStruct_FPolygonID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeshDescriptionBase_SetPolygonPolygonGroup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_SetPolygonPolygonGroup_Statics::NewProp_PolygonGroupID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_SetPolygonPolygonGroup_Statics::NewProp_PolygonID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMeshDescriptionBase_SetPolygonPolygonGroup_Statics::Function_MetaDataParams[] = {
		{ "Category", "MeshDescription" },
		{ "Comment", "/** Sets the polygon group associated with a polygon */" },
		{ "ModuleRelativePath", "Public/MeshDescriptionBase.h" },
		{ "ToolTip", "Sets the polygon group associated with a polygon" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshDescriptionBase_SetPolygonPolygonGroup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshDescriptionBase, nullptr, "SetPolygonPolygonGroup", nullptr, nullptr, sizeof(MeshDescriptionBase_eventSetPolygonPolygonGroup_Parms), Z_Construct_UFunction_UMeshDescriptionBase_SetPolygonPolygonGroup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_SetPolygonPolygonGroup_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMeshDescriptionBase_SetPolygonPolygonGroup_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_SetPolygonPolygonGroup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMeshDescriptionBase_SetPolygonPolygonGroup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMeshDescriptionBase_SetPolygonPolygonGroup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMeshDescriptionBase_SetPolygonVertexInstance_Statics
	{
		struct MeshDescriptionBase_eventSetPolygonVertexInstance_Parms
		{
			FPolygonID PolygonID;
			int32 PerimeterIndex;
			FVertexInstanceID VertexInstanceID;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VertexInstanceID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PerimeterIndex;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PolygonID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_SetPolygonVertexInstance_Statics::NewProp_VertexInstanceID = { "VertexInstanceID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MeshDescriptionBase_eventSetPolygonVertexInstance_Parms, VertexInstanceID), Z_Construct_UScriptStruct_FVertexInstanceID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_SetPolygonVertexInstance_Statics::NewProp_PerimeterIndex = { "PerimeterIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MeshDescriptionBase_eventSetPolygonVertexInstance_Parms, PerimeterIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_SetPolygonVertexInstance_Statics::NewProp_PolygonID = { "PolygonID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MeshDescriptionBase_eventSetPolygonVertexInstance_Parms, PolygonID), Z_Construct_UScriptStruct_FPolygonID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeshDescriptionBase_SetPolygonVertexInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_SetPolygonVertexInstance_Statics::NewProp_VertexInstanceID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_SetPolygonVertexInstance_Statics::NewProp_PerimeterIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_SetPolygonVertexInstance_Statics::NewProp_PolygonID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMeshDescriptionBase_SetPolygonVertexInstance_Statics::Function_MetaDataParams[] = {
		{ "Category", "MeshDescription" },
		{ "Comment", "/** Set the vertex instance at the given index around the polygon to the new value */" },
		{ "ModuleRelativePath", "Public/MeshDescriptionBase.h" },
		{ "ToolTip", "Set the vertex instance at the given index around the polygon to the new value" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshDescriptionBase_SetPolygonVertexInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshDescriptionBase, nullptr, "SetPolygonVertexInstance", nullptr, nullptr, sizeof(MeshDescriptionBase_eventSetPolygonVertexInstance_Parms), Z_Construct_UFunction_UMeshDescriptionBase_SetPolygonVertexInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_SetPolygonVertexInstance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMeshDescriptionBase_SetPolygonVertexInstance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_SetPolygonVertexInstance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMeshDescriptionBase_SetPolygonVertexInstance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMeshDescriptionBase_SetPolygonVertexInstance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMeshDescriptionBase_SetVertexPosition_Statics
	{
		struct MeshDescriptionBase_eventSetVertexPosition_Parms
		{
			FVertexID VertexID;
			FVector Position;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Position;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VertexID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMeshDescriptionBase_SetVertexPosition_Statics::NewProp_Position_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_SetVertexPosition_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MeshDescriptionBase_eventSetVertexPosition_Parms, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UMeshDescriptionBase_SetVertexPosition_Statics::NewProp_Position_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_SetVertexPosition_Statics::NewProp_Position_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_SetVertexPosition_Statics::NewProp_VertexID = { "VertexID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MeshDescriptionBase_eventSetVertexPosition_Parms, VertexID), Z_Construct_UScriptStruct_FVertexID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeshDescriptionBase_SetVertexPosition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_SetVertexPosition_Statics::NewProp_Position,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_SetVertexPosition_Statics::NewProp_VertexID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMeshDescriptionBase_SetVertexPosition_Statics::Function_MetaDataParams[] = {
		{ "Category", "MeshDescription" },
		{ "Comment", "/** Sets a vertex position */" },
		{ "ModuleRelativePath", "Public/MeshDescriptionBase.h" },
		{ "ToolTip", "Sets a vertex position" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshDescriptionBase_SetVertexPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshDescriptionBase, nullptr, "SetVertexPosition", nullptr, nullptr, sizeof(MeshDescriptionBase_eventSetVertexPosition_Parms), Z_Construct_UFunction_UMeshDescriptionBase_SetVertexPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_SetVertexPosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMeshDescriptionBase_SetVertexPosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_SetVertexPosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMeshDescriptionBase_SetVertexPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMeshDescriptionBase_SetVertexPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMeshDescriptionBase_NoRegister()
	{
		return UMeshDescriptionBase::StaticClass();
	}
	struct Z_Construct_UClass_UMeshDescriptionBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMeshDescriptionBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshDescription,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMeshDescriptionBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMeshDescriptionBase_ComputePolygonTriangulation, "ComputePolygonTriangulation" }, // 1947772609
		{ &Z_Construct_UFunction_UMeshDescriptionBase_CreateEdge, "CreateEdge" }, // 3059804861
		{ &Z_Construct_UFunction_UMeshDescriptionBase_CreateEdgeWithID, "CreateEdgeWithID" }, // 1369725385
		{ &Z_Construct_UFunction_UMeshDescriptionBase_CreatePolygon, "CreatePolygon" }, // 1212633323
		{ &Z_Construct_UFunction_UMeshDescriptionBase_CreatePolygonGroup, "CreatePolygonGroup" }, // 2536573281
		{ &Z_Construct_UFunction_UMeshDescriptionBase_CreatePolygonGroupWithID, "CreatePolygonGroupWithID" }, // 3683735034
		{ &Z_Construct_UFunction_UMeshDescriptionBase_CreatePolygonWithID, "CreatePolygonWithID" }, // 2787127906
		{ &Z_Construct_UFunction_UMeshDescriptionBase_CreateTriangle, "CreateTriangle" }, // 3799586463
		{ &Z_Construct_UFunction_UMeshDescriptionBase_CreateTriangleWithID, "CreateTriangleWithID" }, // 4266417332
		{ &Z_Construct_UFunction_UMeshDescriptionBase_CreateVertex, "CreateVertex" }, // 4081355988
		{ &Z_Construct_UFunction_UMeshDescriptionBase_CreateVertexInstance, "CreateVertexInstance" }, // 690844494
		{ &Z_Construct_UFunction_UMeshDescriptionBase_CreateVertexInstanceWithID, "CreateVertexInstanceWithID" }, // 3664786949
		{ &Z_Construct_UFunction_UMeshDescriptionBase_CreateVertexWithID, "CreateVertexWithID" }, // 1970624673
		{ &Z_Construct_UFunction_UMeshDescriptionBase_DeleteEdge, "DeleteEdge" }, // 3403908756
		{ &Z_Construct_UFunction_UMeshDescriptionBase_DeletePolygon, "DeletePolygon" }, // 2076264663
		{ &Z_Construct_UFunction_UMeshDescriptionBase_DeletePolygonGroup, "DeletePolygonGroup" }, // 927942084
		{ &Z_Construct_UFunction_UMeshDescriptionBase_DeleteTriangle, "DeleteTriangle" }, // 2791735830
		{ &Z_Construct_UFunction_UMeshDescriptionBase_DeleteVertex, "DeleteVertex" }, // 3946486468
		{ &Z_Construct_UFunction_UMeshDescriptionBase_DeleteVertexInstance, "DeleteVertexInstance" }, // 3286169440
		{ &Z_Construct_UFunction_UMeshDescriptionBase_Empty, "Empty" }, // 3897757729
		{ &Z_Construct_UFunction_UMeshDescriptionBase_GetEdgeConnectedPolygons, "GetEdgeConnectedPolygons" }, // 618363018
		{ &Z_Construct_UFunction_UMeshDescriptionBase_GetEdgeConnectedTriangles, "GetEdgeConnectedTriangles" }, // 3683864532
		{ &Z_Construct_UFunction_UMeshDescriptionBase_GetEdgeVertex, "GetEdgeVertex" }, // 154597761
		{ &Z_Construct_UFunction_UMeshDescriptionBase_GetEdgeVertices, "GetEdgeVertices" }, // 2482015528
		{ &Z_Construct_UFunction_UMeshDescriptionBase_GetNumEdgeConnectedPolygons, "GetNumEdgeConnectedPolygons" }, // 3035292449
		{ &Z_Construct_UFunction_UMeshDescriptionBase_GetNumEdgeConnectedTriangles, "GetNumEdgeConnectedTriangles" }, // 2398824539
		{ &Z_Construct_UFunction_UMeshDescriptionBase_GetNumPolygonGroupPolygons, "GetNumPolygonGroupPolygons" }, // 3100735335
		{ &Z_Construct_UFunction_UMeshDescriptionBase_GetNumPolygonInternalEdges, "GetNumPolygonInternalEdges" }, // 1211030367
		{ &Z_Construct_UFunction_UMeshDescriptionBase_GetNumPolygonTriangles, "GetNumPolygonTriangles" }, // 1971904562
		{ &Z_Construct_UFunction_UMeshDescriptionBase_GetNumPolygonVertices, "GetNumPolygonVertices" }, // 1307623120
		{ &Z_Construct_UFunction_UMeshDescriptionBase_GetNumVertexConnectedEdges, "GetNumVertexConnectedEdges" }, // 2662058626
		{ &Z_Construct_UFunction_UMeshDescriptionBase_GetNumVertexConnectedPolygons, "GetNumVertexConnectedPolygons" }, // 1268897765
		{ &Z_Construct_UFunction_UMeshDescriptionBase_GetNumVertexConnectedTriangles, "GetNumVertexConnectedTriangles" }, // 880816907
		{ &Z_Construct_UFunction_UMeshDescriptionBase_GetNumVertexInstanceConnectedPolygons, "GetNumVertexInstanceConnectedPolygons" }, // 1296498737
		{ &Z_Construct_UFunction_UMeshDescriptionBase_GetNumVertexInstanceConnectedTriangles, "GetNumVertexInstanceConnectedTriangles" }, // 30367351
		{ &Z_Construct_UFunction_UMeshDescriptionBase_GetNumVertexVertexInstances, "GetNumVertexVertexInstances" }, // 1761276630
		{ &Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonAdjacentPolygons, "GetPolygonAdjacentPolygons" }, // 4069108612
		{ &Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonGroupPolygons, "GetPolygonGroupPolygons" }, // 3184947632
		{ &Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonInternalEdges, "GetPolygonInternalEdges" }, // 3239710840
		{ &Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonPerimeterEdges, "GetPolygonPerimeterEdges" }, // 3885485962
		{ &Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonPolygonGroup, "GetPolygonPolygonGroup" }, // 4011447669
		{ &Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonTriangles, "GetPolygonTriangles" }, // 3011366780
		{ &Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonVertexInstances, "GetPolygonVertexInstances" }, // 2444510987
		{ &Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonVertices, "GetPolygonVertices" }, // 3919165162
		{ &Z_Construct_UFunction_UMeshDescriptionBase_GetTriangleAdjacentTriangles, "GetTriangleAdjacentTriangles" }, // 174905603
		{ &Z_Construct_UFunction_UMeshDescriptionBase_GetTriangleEdges, "GetTriangleEdges" }, // 1011708313
		{ &Z_Construct_UFunction_UMeshDescriptionBase_GetTrianglePolygon, "GetTrianglePolygon" }, // 1160563475
		{ &Z_Construct_UFunction_UMeshDescriptionBase_GetTrianglePolygonGroup, "GetTrianglePolygonGroup" }, // 4179289290
		{ &Z_Construct_UFunction_UMeshDescriptionBase_GetTriangleVertexInstance, "GetTriangleVertexInstance" }, // 1823613063
		{ &Z_Construct_UFunction_UMeshDescriptionBase_GetTriangleVertexInstances, "GetTriangleVertexInstances" }, // 809263793
		{ &Z_Construct_UFunction_UMeshDescriptionBase_GetTriangleVertices, "GetTriangleVertices" }, // 1989607722
		{ &Z_Construct_UFunction_UMeshDescriptionBase_GetVertexAdjacentVertices, "GetVertexAdjacentVertices" }, // 3671346657
		{ &Z_Construct_UFunction_UMeshDescriptionBase_GetVertexConnectedEdges, "GetVertexConnectedEdges" }, // 1185617703
		{ &Z_Construct_UFunction_UMeshDescriptionBase_GetVertexConnectedPolygons, "GetVertexConnectedPolygons" }, // 4106938865
		{ &Z_Construct_UFunction_UMeshDescriptionBase_GetVertexConnectedTriangles, "GetVertexConnectedTriangles" }, // 1296425947
		{ &Z_Construct_UFunction_UMeshDescriptionBase_GetVertexInstanceConnectedPolygons, "GetVertexInstanceConnectedPolygons" }, // 971060323
		{ &Z_Construct_UFunction_UMeshDescriptionBase_GetVertexInstanceConnectedTriangles, "GetVertexInstanceConnectedTriangles" }, // 3957194972
		{ &Z_Construct_UFunction_UMeshDescriptionBase_GetVertexInstanceForPolygonVertex, "GetVertexInstanceForPolygonVertex" }, // 1247963632
		{ &Z_Construct_UFunction_UMeshDescriptionBase_GetVertexInstanceForTriangleVertex, "GetVertexInstanceForTriangleVertex" }, // 530575997
		{ &Z_Construct_UFunction_UMeshDescriptionBase_GetVertexInstancePairEdge, "GetVertexInstancePairEdge" }, // 1233635186
		{ &Z_Construct_UFunction_UMeshDescriptionBase_GetVertexInstanceVertex, "GetVertexInstanceVertex" }, // 763831904
		{ &Z_Construct_UFunction_UMeshDescriptionBase_GetVertexPairEdge, "GetVertexPairEdge" }, // 799776503
		{ &Z_Construct_UFunction_UMeshDescriptionBase_GetVertexPosition, "GetVertexPosition" }, // 1361243377
		{ &Z_Construct_UFunction_UMeshDescriptionBase_GetVertexVertexInstances, "GetVertexVertexInstances" }, // 4127531075
		{ &Z_Construct_UFunction_UMeshDescriptionBase_IsEdgeInternal, "IsEdgeInternal" }, // 3569167944
		{ &Z_Construct_UFunction_UMeshDescriptionBase_IsEdgeInternalToPolygon, "IsEdgeInternalToPolygon" }, // 3792672339
		{ &Z_Construct_UFunction_UMeshDescriptionBase_IsEdgeValid, "IsEdgeValid" }, // 3835207747
		{ &Z_Construct_UFunction_UMeshDescriptionBase_IsEmpty, "IsEmpty" }, // 3972586972
		{ &Z_Construct_UFunction_UMeshDescriptionBase_IsPolygonGroupValid, "IsPolygonGroupValid" }, // 301457514
		{ &Z_Construct_UFunction_UMeshDescriptionBase_IsPolygonValid, "IsPolygonValid" }, // 2038835059
		{ &Z_Construct_UFunction_UMeshDescriptionBase_IsTrianglePartOfNgon, "IsTrianglePartOfNgon" }, // 445698687
		{ &Z_Construct_UFunction_UMeshDescriptionBase_IsTriangleValid, "IsTriangleValid" }, // 3189581933
		{ &Z_Construct_UFunction_UMeshDescriptionBase_IsVertexInstanceValid, "IsVertexInstanceValid" }, // 4097483351
		{ &Z_Construct_UFunction_UMeshDescriptionBase_IsVertexOrphaned, "IsVertexOrphaned" }, // 3769147225
		{ &Z_Construct_UFunction_UMeshDescriptionBase_IsVertexValid, "IsVertexValid" }, // 3888327720
		{ &Z_Construct_UFunction_UMeshDescriptionBase_ReserveNewEdges, "ReserveNewEdges" }, // 2124037225
		{ &Z_Construct_UFunction_UMeshDescriptionBase_ReserveNewPolygonGroups, "ReserveNewPolygonGroups" }, // 729566705
		{ &Z_Construct_UFunction_UMeshDescriptionBase_ReserveNewPolygons, "ReserveNewPolygons" }, // 2889187836
		{ &Z_Construct_UFunction_UMeshDescriptionBase_ReserveNewTriangles, "ReserveNewTriangles" }, // 1933775200
		{ &Z_Construct_UFunction_UMeshDescriptionBase_ReserveNewVertexInstances, "ReserveNewVertexInstances" }, // 1380789401
		{ &Z_Construct_UFunction_UMeshDescriptionBase_ReserveNewVertices, "ReserveNewVertices" }, // 1358915252
		{ &Z_Construct_UFunction_UMeshDescriptionBase_ReversePolygonFacing, "ReversePolygonFacing" }, // 1878877081
		{ &Z_Construct_UFunction_UMeshDescriptionBase_SetPolygonPolygonGroup, "SetPolygonPolygonGroup" }, // 2686984254
		{ &Z_Construct_UFunction_UMeshDescriptionBase_SetPolygonVertexInstance, "SetPolygonVertexInstance" }, // 2000611663
		{ &Z_Construct_UFunction_UMeshDescriptionBase_SetVertexPosition, "SetVertexPosition" }, // 1044254412
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshDescriptionBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "MeshDescriptionBase.h" },
		{ "ModuleRelativePath", "Public/MeshDescriptionBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMeshDescriptionBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMeshDescriptionBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMeshDescriptionBase_Statics::ClassParams = {
		&UMeshDescriptionBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMeshDescriptionBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshDescriptionBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMeshDescriptionBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMeshDescriptionBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMeshDescriptionBase, 288501092);
	template<> MESHDESCRIPTION_API UClass* StaticClass<UMeshDescriptionBase>()
	{
		return UMeshDescriptionBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMeshDescriptionBase(Z_Construct_UClass_UMeshDescriptionBase, &UMeshDescriptionBase::StaticClass, TEXT("/Script/MeshDescription"), TEXT("UMeshDescriptionBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMeshDescriptionBase);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UMeshDescriptionBase)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
