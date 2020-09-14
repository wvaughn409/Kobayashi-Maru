// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FPolygonGroupID;
struct FPolygonID;
struct FVertexInstanceID;
struct FVertexID;
struct FEdgeID;
struct FTriangleID;
struct FVector;
#ifdef MESHDESCRIPTION_MeshDescriptionBase_generated_h
#error "MeshDescriptionBase.generated.h already included, missing '#pragma once' in MeshDescriptionBase.h"
#endif
#define MESHDESCRIPTION_MeshDescriptionBase_generated_h

#define Engine_Source_Runtime_MeshDescription_Public_MeshDescriptionBase_h_14_SPARSE_DATA
#define Engine_Source_Runtime_MeshDescription_Public_MeshDescriptionBase_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetNumPolygonGroupPolygons); \
	DECLARE_FUNCTION(execGetPolygonGroupPolygons); \
	DECLARE_FUNCTION(execComputePolygonTriangulation); \
	DECLARE_FUNCTION(execReversePolygonFacing); \
	DECLARE_FUNCTION(execSetPolygonPolygonGroup); \
	DECLARE_FUNCTION(execSetPolygonVertexInstance); \
	DECLARE_FUNCTION(execGetVertexInstanceForPolygonVertex); \
	DECLARE_FUNCTION(execGetPolygonPolygonGroup); \
	DECLARE_FUNCTION(execGetPolygonAdjacentPolygons); \
	DECLARE_FUNCTION(execGetNumPolygonInternalEdges); \
	DECLARE_FUNCTION(execGetPolygonInternalEdges); \
	DECLARE_FUNCTION(execGetPolygonPerimeterEdges); \
	DECLARE_FUNCTION(execGetPolygonVertices); \
	DECLARE_FUNCTION(execGetNumPolygonVertices); \
	DECLARE_FUNCTION(execGetPolygonVertexInstances); \
	DECLARE_FUNCTION(execGetNumPolygonTriangles); \
	DECLARE_FUNCTION(execGetPolygonTriangles); \
	DECLARE_FUNCTION(execGetVertexInstanceForTriangleVertex); \
	DECLARE_FUNCTION(execGetTriangleAdjacentTriangles); \
	DECLARE_FUNCTION(execGetTriangleEdges); \
	DECLARE_FUNCTION(execGetTriangleVertices); \
	DECLARE_FUNCTION(execGetTriangleVertexInstance); \
	DECLARE_FUNCTION(execGetTriangleVertexInstances); \
	DECLARE_FUNCTION(execIsTrianglePartOfNgon); \
	DECLARE_FUNCTION(execGetTrianglePolygonGroup); \
	DECLARE_FUNCTION(execGetTrianglePolygon); \
	DECLARE_FUNCTION(execGetEdgeVertices); \
	DECLARE_FUNCTION(execGetEdgeVertex); \
	DECLARE_FUNCTION(execGetNumEdgeConnectedPolygons); \
	DECLARE_FUNCTION(execGetEdgeConnectedPolygons); \
	DECLARE_FUNCTION(execGetNumEdgeConnectedTriangles); \
	DECLARE_FUNCTION(execGetEdgeConnectedTriangles); \
	DECLARE_FUNCTION(execIsEdgeInternalToPolygon); \
	DECLARE_FUNCTION(execIsEdgeInternal); \
	DECLARE_FUNCTION(execGetNumVertexInstanceConnectedPolygons); \
	DECLARE_FUNCTION(execGetVertexInstanceConnectedPolygons); \
	DECLARE_FUNCTION(execGetNumVertexInstanceConnectedTriangles); \
	DECLARE_FUNCTION(execGetVertexInstanceConnectedTriangles); \
	DECLARE_FUNCTION(execGetVertexInstancePairEdge); \
	DECLARE_FUNCTION(execGetVertexInstanceVertex); \
	DECLARE_FUNCTION(execSetVertexPosition); \
	DECLARE_FUNCTION(execGetVertexPosition); \
	DECLARE_FUNCTION(execGetVertexAdjacentVertices); \
	DECLARE_FUNCTION(execGetNumVertexConnectedPolygons); \
	DECLARE_FUNCTION(execGetVertexConnectedPolygons); \
	DECLARE_FUNCTION(execGetNumVertexConnectedTriangles); \
	DECLARE_FUNCTION(execGetVertexConnectedTriangles); \
	DECLARE_FUNCTION(execGetNumVertexVertexInstances); \
	DECLARE_FUNCTION(execGetVertexVertexInstances); \
	DECLARE_FUNCTION(execGetNumVertexConnectedEdges); \
	DECLARE_FUNCTION(execGetVertexConnectedEdges); \
	DECLARE_FUNCTION(execGetVertexPairEdge); \
	DECLARE_FUNCTION(execIsVertexOrphaned); \
	DECLARE_FUNCTION(execIsPolygonGroupValid); \
	DECLARE_FUNCTION(execDeletePolygonGroup); \
	DECLARE_FUNCTION(execCreatePolygonGroupWithID); \
	DECLARE_FUNCTION(execCreatePolygonGroup); \
	DECLARE_FUNCTION(execReserveNewPolygonGroups); \
	DECLARE_FUNCTION(execIsPolygonValid); \
	DECLARE_FUNCTION(execDeletePolygon); \
	DECLARE_FUNCTION(execCreatePolygonWithID); \
	DECLARE_FUNCTION(execCreatePolygon); \
	DECLARE_FUNCTION(execReserveNewPolygons); \
	DECLARE_FUNCTION(execIsTriangleValid); \
	DECLARE_FUNCTION(execDeleteTriangle); \
	DECLARE_FUNCTION(execCreateTriangleWithID); \
	DECLARE_FUNCTION(execCreateTriangle); \
	DECLARE_FUNCTION(execReserveNewTriangles); \
	DECLARE_FUNCTION(execIsEdgeValid); \
	DECLARE_FUNCTION(execDeleteEdge); \
	DECLARE_FUNCTION(execCreateEdgeWithID); \
	DECLARE_FUNCTION(execCreateEdge); \
	DECLARE_FUNCTION(execReserveNewEdges); \
	DECLARE_FUNCTION(execIsVertexInstanceValid); \
	DECLARE_FUNCTION(execDeleteVertexInstance); \
	DECLARE_FUNCTION(execCreateVertexInstanceWithID); \
	DECLARE_FUNCTION(execCreateVertexInstance); \
	DECLARE_FUNCTION(execReserveNewVertexInstances); \
	DECLARE_FUNCTION(execIsVertexValid); \
	DECLARE_FUNCTION(execDeleteVertex); \
	DECLARE_FUNCTION(execCreateVertexWithID); \
	DECLARE_FUNCTION(execCreateVertex); \
	DECLARE_FUNCTION(execReserveNewVertices); \
	DECLARE_FUNCTION(execIsEmpty); \
	DECLARE_FUNCTION(execEmpty);


#define Engine_Source_Runtime_MeshDescription_Public_MeshDescriptionBase_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetNumPolygonGroupPolygons); \
	DECLARE_FUNCTION(execGetPolygonGroupPolygons); \
	DECLARE_FUNCTION(execComputePolygonTriangulation); \
	DECLARE_FUNCTION(execReversePolygonFacing); \
	DECLARE_FUNCTION(execSetPolygonPolygonGroup); \
	DECLARE_FUNCTION(execSetPolygonVertexInstance); \
	DECLARE_FUNCTION(execGetVertexInstanceForPolygonVertex); \
	DECLARE_FUNCTION(execGetPolygonPolygonGroup); \
	DECLARE_FUNCTION(execGetPolygonAdjacentPolygons); \
	DECLARE_FUNCTION(execGetNumPolygonInternalEdges); \
	DECLARE_FUNCTION(execGetPolygonInternalEdges); \
	DECLARE_FUNCTION(execGetPolygonPerimeterEdges); \
	DECLARE_FUNCTION(execGetPolygonVertices); \
	DECLARE_FUNCTION(execGetNumPolygonVertices); \
	DECLARE_FUNCTION(execGetPolygonVertexInstances); \
	DECLARE_FUNCTION(execGetNumPolygonTriangles); \
	DECLARE_FUNCTION(execGetPolygonTriangles); \
	DECLARE_FUNCTION(execGetVertexInstanceForTriangleVertex); \
	DECLARE_FUNCTION(execGetTriangleAdjacentTriangles); \
	DECLARE_FUNCTION(execGetTriangleEdges); \
	DECLARE_FUNCTION(execGetTriangleVertices); \
	DECLARE_FUNCTION(execGetTriangleVertexInstance); \
	DECLARE_FUNCTION(execGetTriangleVertexInstances); \
	DECLARE_FUNCTION(execIsTrianglePartOfNgon); \
	DECLARE_FUNCTION(execGetTrianglePolygonGroup); \
	DECLARE_FUNCTION(execGetTrianglePolygon); \
	DECLARE_FUNCTION(execGetEdgeVertices); \
	DECLARE_FUNCTION(execGetEdgeVertex); \
	DECLARE_FUNCTION(execGetNumEdgeConnectedPolygons); \
	DECLARE_FUNCTION(execGetEdgeConnectedPolygons); \
	DECLARE_FUNCTION(execGetNumEdgeConnectedTriangles); \
	DECLARE_FUNCTION(execGetEdgeConnectedTriangles); \
	DECLARE_FUNCTION(execIsEdgeInternalToPolygon); \
	DECLARE_FUNCTION(execIsEdgeInternal); \
	DECLARE_FUNCTION(execGetNumVertexInstanceConnectedPolygons); \
	DECLARE_FUNCTION(execGetVertexInstanceConnectedPolygons); \
	DECLARE_FUNCTION(execGetNumVertexInstanceConnectedTriangles); \
	DECLARE_FUNCTION(execGetVertexInstanceConnectedTriangles); \
	DECLARE_FUNCTION(execGetVertexInstancePairEdge); \
	DECLARE_FUNCTION(execGetVertexInstanceVertex); \
	DECLARE_FUNCTION(execSetVertexPosition); \
	DECLARE_FUNCTION(execGetVertexPosition); \
	DECLARE_FUNCTION(execGetVertexAdjacentVertices); \
	DECLARE_FUNCTION(execGetNumVertexConnectedPolygons); \
	DECLARE_FUNCTION(execGetVertexConnectedPolygons); \
	DECLARE_FUNCTION(execGetNumVertexConnectedTriangles); \
	DECLARE_FUNCTION(execGetVertexConnectedTriangles); \
	DECLARE_FUNCTION(execGetNumVertexVertexInstances); \
	DECLARE_FUNCTION(execGetVertexVertexInstances); \
	DECLARE_FUNCTION(execGetNumVertexConnectedEdges); \
	DECLARE_FUNCTION(execGetVertexConnectedEdges); \
	DECLARE_FUNCTION(execGetVertexPairEdge); \
	DECLARE_FUNCTION(execIsVertexOrphaned); \
	DECLARE_FUNCTION(execIsPolygonGroupValid); \
	DECLARE_FUNCTION(execDeletePolygonGroup); \
	DECLARE_FUNCTION(execCreatePolygonGroupWithID); \
	DECLARE_FUNCTION(execCreatePolygonGroup); \
	DECLARE_FUNCTION(execReserveNewPolygonGroups); \
	DECLARE_FUNCTION(execIsPolygonValid); \
	DECLARE_FUNCTION(execDeletePolygon); \
	DECLARE_FUNCTION(execCreatePolygonWithID); \
	DECLARE_FUNCTION(execCreatePolygon); \
	DECLARE_FUNCTION(execReserveNewPolygons); \
	DECLARE_FUNCTION(execIsTriangleValid); \
	DECLARE_FUNCTION(execDeleteTriangle); \
	DECLARE_FUNCTION(execCreateTriangleWithID); \
	DECLARE_FUNCTION(execCreateTriangle); \
	DECLARE_FUNCTION(execReserveNewTriangles); \
	DECLARE_FUNCTION(execIsEdgeValid); \
	DECLARE_FUNCTION(execDeleteEdge); \
	DECLARE_FUNCTION(execCreateEdgeWithID); \
	DECLARE_FUNCTION(execCreateEdge); \
	DECLARE_FUNCTION(execReserveNewEdges); \
	DECLARE_FUNCTION(execIsVertexInstanceValid); \
	DECLARE_FUNCTION(execDeleteVertexInstance); \
	DECLARE_FUNCTION(execCreateVertexInstanceWithID); \
	DECLARE_FUNCTION(execCreateVertexInstance); \
	DECLARE_FUNCTION(execReserveNewVertexInstances); \
	DECLARE_FUNCTION(execIsVertexValid); \
	DECLARE_FUNCTION(execDeleteVertex); \
	DECLARE_FUNCTION(execCreateVertexWithID); \
	DECLARE_FUNCTION(execCreateVertex); \
	DECLARE_FUNCTION(execReserveNewVertices); \
	DECLARE_FUNCTION(execIsEmpty); \
	DECLARE_FUNCTION(execEmpty);


#define Engine_Source_Runtime_MeshDescription_Public_MeshDescriptionBase_h_14_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UMeshDescriptionBase, NO_API)


#define Engine_Source_Runtime_MeshDescription_Public_MeshDescriptionBase_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMeshDescriptionBase(); \
	friend struct Z_Construct_UClass_UMeshDescriptionBase_Statics; \
public: \
	DECLARE_CLASS(UMeshDescriptionBase, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MeshDescription"), NO_API) \
	DECLARE_SERIALIZER(UMeshDescriptionBase) \
	Engine_Source_Runtime_MeshDescription_Public_MeshDescriptionBase_h_14_ARCHIVESERIALIZER


#define Engine_Source_Runtime_MeshDescription_Public_MeshDescriptionBase_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUMeshDescriptionBase(); \
	friend struct Z_Construct_UClass_UMeshDescriptionBase_Statics; \
public: \
	DECLARE_CLASS(UMeshDescriptionBase, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MeshDescription"), NO_API) \
	DECLARE_SERIALIZER(UMeshDescriptionBase) \
	Engine_Source_Runtime_MeshDescription_Public_MeshDescriptionBase_h_14_ARCHIVESERIALIZER


#define Engine_Source_Runtime_MeshDescription_Public_MeshDescriptionBase_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMeshDescriptionBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMeshDescriptionBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMeshDescriptionBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMeshDescriptionBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMeshDescriptionBase(UMeshDescriptionBase&&); \
	NO_API UMeshDescriptionBase(const UMeshDescriptionBase&); \
public:


#define Engine_Source_Runtime_MeshDescription_Public_MeshDescriptionBase_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMeshDescriptionBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMeshDescriptionBase(UMeshDescriptionBase&&); \
	NO_API UMeshDescriptionBase(const UMeshDescriptionBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMeshDescriptionBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMeshDescriptionBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMeshDescriptionBase)


#define Engine_Source_Runtime_MeshDescription_Public_MeshDescriptionBase_h_14_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_MeshDescription_Public_MeshDescriptionBase_h_11_PROLOG
#define Engine_Source_Runtime_MeshDescription_Public_MeshDescriptionBase_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_MeshDescription_Public_MeshDescriptionBase_h_14_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_MeshDescription_Public_MeshDescriptionBase_h_14_SPARSE_DATA \
	Engine_Source_Runtime_MeshDescription_Public_MeshDescriptionBase_h_14_RPC_WRAPPERS \
	Engine_Source_Runtime_MeshDescription_Public_MeshDescriptionBase_h_14_INCLASS \
	Engine_Source_Runtime_MeshDescription_Public_MeshDescriptionBase_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_MeshDescription_Public_MeshDescriptionBase_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_MeshDescription_Public_MeshDescriptionBase_h_14_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_MeshDescription_Public_MeshDescriptionBase_h_14_SPARSE_DATA \
	Engine_Source_Runtime_MeshDescription_Public_MeshDescriptionBase_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_MeshDescription_Public_MeshDescriptionBase_h_14_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_MeshDescription_Public_MeshDescriptionBase_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MESHDESCRIPTION_API UClass* StaticClass<class UMeshDescriptionBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_MeshDescription_Public_MeshDescriptionBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
