// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FPlane;
struct FPolygonID;
struct FEdgeID;
enum class ETriangleTessellationMode : uint8;
struct FVertexID;
struct FPolygonGroupForPolygon;
struct FPolygonGroupID;
struct FPolygonGroupToCreate;
enum class EInsetPolygonsMode : uint8;
struct FVector;
struct FChangeVertexInstancesForPolygon;
struct FVertexAttributesForPolygon;
struct FAttributesForEdge;
struct FAttributesForVertexInstance;
struct FAttributesForVertex;
struct FPolygonToCreate;
struct FEdgeToCreate;
struct FVertexInstanceToCreate;
struct FVertexInstanceID;
struct FVertexToCreate;
struct FPolygonToSplit;
struct FVertexToMove;
struct FSubdivisionLimitData;
struct FBoxSphereBounds;
struct FBox;
struct FTriangleID;
class UEditableMesh;
class UPrimitiveComponent;
enum class EMeshModificationType : uint8;
enum class EMeshTopologyChange : uint8;
#ifdef EDITABLEMESH_EditableMesh_generated_h
#error "EditableMesh.generated.h already included, missing '#pragma once' in EditableMesh.h"
#endif
#define EDITABLEMESH_EditableMesh_generated_h

#define Engine_Plugins_Runtime_EditableMesh_Source_EditableMesh_Public_EditableMesh_h_85_SPARSE_DATA
#define Engine_Plugins_Runtime_EditableMesh_Source_EditableMesh_Public_EditableMesh_h_85_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSplitPolygonalMesh); \
	DECLARE_FUNCTION(execGeneratePolygonTangentsAndNormals); \
	DECLARE_FUNCTION(execQuadrangulateMesh); \
	DECLARE_FUNCTION(execSetTextureCoordinateCount); \
	DECLARE_FUNCTION(execTessellatePolygons); \
	DECLARE_FUNCTION(execWeldVertices); \
	DECLARE_FUNCTION(execAssignPolygonsToPolygonGroups); \
	DECLARE_FUNCTION(execDeletePolygonGroups); \
	DECLARE_FUNCTION(execCreatePolygonGroups); \
	DECLARE_FUNCTION(execTriangulatePolygons); \
	DECLARE_FUNCTION(execFlipPolygons); \
	DECLARE_FUNCTION(execSetEdgesHardnessAutomatically); \
	DECLARE_FUNCTION(execSetEdgesHardness); \
	DECLARE_FUNCTION(execSetEdgesCreaseSharpness); \
	DECLARE_FUNCTION(execSetVerticesCornerSharpness); \
	DECLARE_FUNCTION(execBevelPolygons); \
	DECLARE_FUNCTION(execInsetPolygons); \
	DECLARE_FUNCTION(execExtendVertices); \
	DECLARE_FUNCTION(execExtendEdges); \
	DECLARE_FUNCTION(execExtrudePolygons); \
	DECLARE_FUNCTION(execTryToRemoveVertex); \
	DECLARE_FUNCTION(execTryToRemovePolygonEdge); \
	DECLARE_FUNCTION(execChangePolygonsVertexInstances); \
	DECLARE_FUNCTION(execSetPolygonsVertexAttributes); \
	DECLARE_FUNCTION(execSetEdgesAttributes); \
	DECLARE_FUNCTION(execSetVertexInstancesAttributes); \
	DECLARE_FUNCTION(execSetVerticesAttributes); \
	DECLARE_FUNCTION(execDeletePolygons); \
	DECLARE_FUNCTION(execCreatePolygons); \
	DECLARE_FUNCTION(execCreateEdges); \
	DECLARE_FUNCTION(execCreateVertexInstances); \
	DECLARE_FUNCTION(execCreateVertices); \
	DECLARE_FUNCTION(execCreateEmptyVertexRange); \
	DECLARE_FUNCTION(execDeleteEdges); \
	DECLARE_FUNCTION(execDeleteVertexInstances); \
	DECLARE_FUNCTION(execDeleteOrphanVertices); \
	DECLARE_FUNCTION(execDeleteVertexAndConnectedEdgesAndPolygons); \
	DECLARE_FUNCTION(execDeleteEdgeAndConnectedPolygons); \
	DECLARE_FUNCTION(execSplitPolygons); \
	DECLARE_FUNCTION(execInsertEdgeLoop); \
	DECLARE_FUNCTION(execSplitEdge); \
	DECLARE_FUNCTION(execCreateMissingPolygonPerimeterEdges); \
	DECLARE_FUNCTION(execMoveVertices); \
	DECLARE_FUNCTION(execSetSubdivisionCount); \
	DECLARE_FUNCTION(execSearchSpatialDatabaseForPolygonsPotentiallyIntersectingPlane); \
	DECLARE_FUNCTION(execSearchSpatialDatabaseForPolygonsInVolume); \
	DECLARE_FUNCTION(execSearchSpatialDatabaseForPolygonsPotentiallyIntersectingLineSegment); \
	DECLARE_FUNCTION(execFindPolygonLoop); \
	DECLARE_FUNCTION(execComputePolygonsSharedEdges); \
	DECLARE_FUNCTION(execGetSubdivisionLimitData); \
	DECLARE_FUNCTION(execComputePolygonNormal); \
	DECLARE_FUNCTION(execComputePolygonPlane); \
	DECLARE_FUNCTION(execComputePolygonCenter); \
	DECLARE_FUNCTION(execComputeBoundingBoxAndSphere); \
	DECLARE_FUNCTION(execComputeBoundingBox); \
	DECLARE_FUNCTION(execFindPolygonPerimeterEdgeNumberForVertices); \
	DECLARE_FUNCTION(execFindPolygonPerimeterVertexNumberForVertex); \
	DECLARE_FUNCTION(execGetPolygonAdjacentPolygons); \
	DECLARE_FUNCTION(execGetPolygonPerimeterEdges); \
	DECLARE_FUNCTION(execGetPolygonPerimeterEdge); \
	DECLARE_FUNCTION(execGetPolygonPerimeterVertexInstances); \
	DECLARE_FUNCTION(execGetPolygonPerimeterVertices); \
	DECLARE_FUNCTION(execGetPolygonPerimeterEdgeCount); \
	DECLARE_FUNCTION(execGetEdgeThatConnectsVertices); \
	DECLARE_FUNCTION(execGetEdgeLoopElements); \
	DECLARE_FUNCTION(execGetEdgeConnectedPolygons); \
	DECLARE_FUNCTION(execGetEdgeVertices); \
	DECLARE_FUNCTION(execGetVertexPairEdge); \
	DECLARE_FUNCTION(execGetVertexAdjacentVertices); \
	DECLARE_FUNCTION(execGetVertexInstanceConnectedPolygons); \
	DECLARE_FUNCTION(execGetVertexConnectedPolygons); \
	DECLARE_FUNCTION(execGetVertexConnectedEdges); \
	DECLARE_FUNCTION(execIsPreviewingSubdivisions); \
	DECLARE_FUNCTION(execGetSubdivisionCount); \
	DECLARE_FUNCTION(execGetTextureCoordinateCount); \
	DECLARE_FUNCTION(execGetFirstValidPolygonGroup); \
	DECLARE_FUNCTION(execMakePolygonID); \
	DECLARE_FUNCTION(execMakePolygonGroupID); \
	DECLARE_FUNCTION(execMakeEdgeID); \
	DECLARE_FUNCTION(execMakeVertexID); \
	DECLARE_FUNCTION(execInvalidPolygonID); \
	DECLARE_FUNCTION(execInvalidPolygonGroupID); \
	DECLARE_FUNCTION(execInvalidEdgeID); \
	DECLARE_FUNCTION(execInvalidVertexID); \
	DECLARE_FUNCTION(execSetAllowCompact); \
	DECLARE_FUNCTION(execIsCompactAllowed); \
	DECLARE_FUNCTION(execAnyChangesToUndo); \
	DECLARE_FUNCTION(execSetAllowSpatialDatabase); \
	DECLARE_FUNCTION(execIsSpatialDatabaseAllowed); \
	DECLARE_FUNCTION(execSetAllowUndo); \
	DECLARE_FUNCTION(execIsUndoAllowed); \
	DECLARE_FUNCTION(execIsBeingModified); \
	DECLARE_FUNCTION(execGetPolygonTriangulatedTriangle); \
	DECLARE_FUNCTION(execGetPolygonTriangulatedTriangleCount); \
	DECLARE_FUNCTION(execGetPolygonPerimeterVertexInstance); \
	DECLARE_FUNCTION(execGetPolygonPerimeterVertex); \
	DECLARE_FUNCTION(execGetPolygonPerimeterVertexCount); \
	DECLARE_FUNCTION(execGetGroupForPolygon); \
	DECLARE_FUNCTION(execIsValidPolygon); \
	DECLARE_FUNCTION(execGetPolygonCount); \
	DECLARE_FUNCTION(execGetPolygonInGroup); \
	DECLARE_FUNCTION(execGetPolygonCountInGroup); \
	DECLARE_FUNCTION(execIsValidPolygonGroup); \
	DECLARE_FUNCTION(execGetPolygonGroupCount); \
	DECLARE_FUNCTION(execGetEdgeConnectedPolygon); \
	DECLARE_FUNCTION(execGetEdgeConnectedPolygonCount); \
	DECLARE_FUNCTION(execGetEdgeVertex); \
	DECLARE_FUNCTION(execIsValidEdge); \
	DECLARE_FUNCTION(execGetEdgeCount); \
	DECLARE_FUNCTION(execGetVertexInstanceConnectedPolygon); \
	DECLARE_FUNCTION(execGetVertexInstanceConnectedPolygonCount); \
	DECLARE_FUNCTION(execGetVertexInstanceVertex); \
	DECLARE_FUNCTION(execGetVertexInstanceCount); \
	DECLARE_FUNCTION(execGetVertexConnectedEdge); \
	DECLARE_FUNCTION(execGetVertexConnectedEdgeCount); \
	DECLARE_FUNCTION(execIsOrphanedVertex); \
	DECLARE_FUNCTION(execIsValidVertex); \
	DECLARE_FUNCTION(execGetVertexCount); \
	DECLARE_FUNCTION(execPropagateInstanceChanges); \
	DECLARE_FUNCTION(execRevertInstance); \
	DECLARE_FUNCTION(execRevert); \
	DECLARE_FUNCTION(execCommitInstance); \
	DECLARE_FUNCTION(execCommit); \
	DECLARE_FUNCTION(execIsCommittedAsInstance); \
	DECLARE_FUNCTION(execIsCommitted); \
	DECLARE_FUNCTION(execEndModification); \
	DECLARE_FUNCTION(execStartModification); \
	DECLARE_FUNCTION(execRebuildRenderMesh); \
	DECLARE_FUNCTION(execInitializeAdapters);


#define Engine_Plugins_Runtime_EditableMesh_Source_EditableMesh_Public_EditableMesh_h_85_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSplitPolygonalMesh); \
	DECLARE_FUNCTION(execGeneratePolygonTangentsAndNormals); \
	DECLARE_FUNCTION(execQuadrangulateMesh); \
	DECLARE_FUNCTION(execSetTextureCoordinateCount); \
	DECLARE_FUNCTION(execTessellatePolygons); \
	DECLARE_FUNCTION(execWeldVertices); \
	DECLARE_FUNCTION(execAssignPolygonsToPolygonGroups); \
	DECLARE_FUNCTION(execDeletePolygonGroups); \
	DECLARE_FUNCTION(execCreatePolygonGroups); \
	DECLARE_FUNCTION(execTriangulatePolygons); \
	DECLARE_FUNCTION(execFlipPolygons); \
	DECLARE_FUNCTION(execSetEdgesHardnessAutomatically); \
	DECLARE_FUNCTION(execSetEdgesHardness); \
	DECLARE_FUNCTION(execSetEdgesCreaseSharpness); \
	DECLARE_FUNCTION(execSetVerticesCornerSharpness); \
	DECLARE_FUNCTION(execBevelPolygons); \
	DECLARE_FUNCTION(execInsetPolygons); \
	DECLARE_FUNCTION(execExtendVertices); \
	DECLARE_FUNCTION(execExtendEdges); \
	DECLARE_FUNCTION(execExtrudePolygons); \
	DECLARE_FUNCTION(execTryToRemoveVertex); \
	DECLARE_FUNCTION(execTryToRemovePolygonEdge); \
	DECLARE_FUNCTION(execChangePolygonsVertexInstances); \
	DECLARE_FUNCTION(execSetPolygonsVertexAttributes); \
	DECLARE_FUNCTION(execSetEdgesAttributes); \
	DECLARE_FUNCTION(execSetVertexInstancesAttributes); \
	DECLARE_FUNCTION(execSetVerticesAttributes); \
	DECLARE_FUNCTION(execDeletePolygons); \
	DECLARE_FUNCTION(execCreatePolygons); \
	DECLARE_FUNCTION(execCreateEdges); \
	DECLARE_FUNCTION(execCreateVertexInstances); \
	DECLARE_FUNCTION(execCreateVertices); \
	DECLARE_FUNCTION(execCreateEmptyVertexRange); \
	DECLARE_FUNCTION(execDeleteEdges); \
	DECLARE_FUNCTION(execDeleteVertexInstances); \
	DECLARE_FUNCTION(execDeleteOrphanVertices); \
	DECLARE_FUNCTION(execDeleteVertexAndConnectedEdgesAndPolygons); \
	DECLARE_FUNCTION(execDeleteEdgeAndConnectedPolygons); \
	DECLARE_FUNCTION(execSplitPolygons); \
	DECLARE_FUNCTION(execInsertEdgeLoop); \
	DECLARE_FUNCTION(execSplitEdge); \
	DECLARE_FUNCTION(execCreateMissingPolygonPerimeterEdges); \
	DECLARE_FUNCTION(execMoveVertices); \
	DECLARE_FUNCTION(execSetSubdivisionCount); \
	DECLARE_FUNCTION(execSearchSpatialDatabaseForPolygonsPotentiallyIntersectingPlane); \
	DECLARE_FUNCTION(execSearchSpatialDatabaseForPolygonsInVolume); \
	DECLARE_FUNCTION(execSearchSpatialDatabaseForPolygonsPotentiallyIntersectingLineSegment); \
	DECLARE_FUNCTION(execFindPolygonLoop); \
	DECLARE_FUNCTION(execComputePolygonsSharedEdges); \
	DECLARE_FUNCTION(execGetSubdivisionLimitData); \
	DECLARE_FUNCTION(execComputePolygonNormal); \
	DECLARE_FUNCTION(execComputePolygonPlane); \
	DECLARE_FUNCTION(execComputePolygonCenter); \
	DECLARE_FUNCTION(execComputeBoundingBoxAndSphere); \
	DECLARE_FUNCTION(execComputeBoundingBox); \
	DECLARE_FUNCTION(execFindPolygonPerimeterEdgeNumberForVertices); \
	DECLARE_FUNCTION(execFindPolygonPerimeterVertexNumberForVertex); \
	DECLARE_FUNCTION(execGetPolygonAdjacentPolygons); \
	DECLARE_FUNCTION(execGetPolygonPerimeterEdges); \
	DECLARE_FUNCTION(execGetPolygonPerimeterEdge); \
	DECLARE_FUNCTION(execGetPolygonPerimeterVertexInstances); \
	DECLARE_FUNCTION(execGetPolygonPerimeterVertices); \
	DECLARE_FUNCTION(execGetPolygonPerimeterEdgeCount); \
	DECLARE_FUNCTION(execGetEdgeThatConnectsVertices); \
	DECLARE_FUNCTION(execGetEdgeLoopElements); \
	DECLARE_FUNCTION(execGetEdgeConnectedPolygons); \
	DECLARE_FUNCTION(execGetEdgeVertices); \
	DECLARE_FUNCTION(execGetVertexPairEdge); \
	DECLARE_FUNCTION(execGetVertexAdjacentVertices); \
	DECLARE_FUNCTION(execGetVertexInstanceConnectedPolygons); \
	DECLARE_FUNCTION(execGetVertexConnectedPolygons); \
	DECLARE_FUNCTION(execGetVertexConnectedEdges); \
	DECLARE_FUNCTION(execIsPreviewingSubdivisions); \
	DECLARE_FUNCTION(execGetSubdivisionCount); \
	DECLARE_FUNCTION(execGetTextureCoordinateCount); \
	DECLARE_FUNCTION(execGetFirstValidPolygonGroup); \
	DECLARE_FUNCTION(execMakePolygonID); \
	DECLARE_FUNCTION(execMakePolygonGroupID); \
	DECLARE_FUNCTION(execMakeEdgeID); \
	DECLARE_FUNCTION(execMakeVertexID); \
	DECLARE_FUNCTION(execInvalidPolygonID); \
	DECLARE_FUNCTION(execInvalidPolygonGroupID); \
	DECLARE_FUNCTION(execInvalidEdgeID); \
	DECLARE_FUNCTION(execInvalidVertexID); \
	DECLARE_FUNCTION(execSetAllowCompact); \
	DECLARE_FUNCTION(execIsCompactAllowed); \
	DECLARE_FUNCTION(execAnyChangesToUndo); \
	DECLARE_FUNCTION(execSetAllowSpatialDatabase); \
	DECLARE_FUNCTION(execIsSpatialDatabaseAllowed); \
	DECLARE_FUNCTION(execSetAllowUndo); \
	DECLARE_FUNCTION(execIsUndoAllowed); \
	DECLARE_FUNCTION(execIsBeingModified); \
	DECLARE_FUNCTION(execGetPolygonTriangulatedTriangle); \
	DECLARE_FUNCTION(execGetPolygonTriangulatedTriangleCount); \
	DECLARE_FUNCTION(execGetPolygonPerimeterVertexInstance); \
	DECLARE_FUNCTION(execGetPolygonPerimeterVertex); \
	DECLARE_FUNCTION(execGetPolygonPerimeterVertexCount); \
	DECLARE_FUNCTION(execGetGroupForPolygon); \
	DECLARE_FUNCTION(execIsValidPolygon); \
	DECLARE_FUNCTION(execGetPolygonCount); \
	DECLARE_FUNCTION(execGetPolygonInGroup); \
	DECLARE_FUNCTION(execGetPolygonCountInGroup); \
	DECLARE_FUNCTION(execIsValidPolygonGroup); \
	DECLARE_FUNCTION(execGetPolygonGroupCount); \
	DECLARE_FUNCTION(execGetEdgeConnectedPolygon); \
	DECLARE_FUNCTION(execGetEdgeConnectedPolygonCount); \
	DECLARE_FUNCTION(execGetEdgeVertex); \
	DECLARE_FUNCTION(execIsValidEdge); \
	DECLARE_FUNCTION(execGetEdgeCount); \
	DECLARE_FUNCTION(execGetVertexInstanceConnectedPolygon); \
	DECLARE_FUNCTION(execGetVertexInstanceConnectedPolygonCount); \
	DECLARE_FUNCTION(execGetVertexInstanceVertex); \
	DECLARE_FUNCTION(execGetVertexInstanceCount); \
	DECLARE_FUNCTION(execGetVertexConnectedEdge); \
	DECLARE_FUNCTION(execGetVertexConnectedEdgeCount); \
	DECLARE_FUNCTION(execIsOrphanedVertex); \
	DECLARE_FUNCTION(execIsValidVertex); \
	DECLARE_FUNCTION(execGetVertexCount); \
	DECLARE_FUNCTION(execPropagateInstanceChanges); \
	DECLARE_FUNCTION(execRevertInstance); \
	DECLARE_FUNCTION(execRevert); \
	DECLARE_FUNCTION(execCommitInstance); \
	DECLARE_FUNCTION(execCommit); \
	DECLARE_FUNCTION(execIsCommittedAsInstance); \
	DECLARE_FUNCTION(execIsCommitted); \
	DECLARE_FUNCTION(execEndModification); \
	DECLARE_FUNCTION(execStartModification); \
	DECLARE_FUNCTION(execRebuildRenderMesh); \
	DECLARE_FUNCTION(execInitializeAdapters);


#define Engine_Plugins_Runtime_EditableMesh_Source_EditableMesh_Public_EditableMesh_h_85_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UEditableMesh, NO_API)


#define Engine_Plugins_Runtime_EditableMesh_Source_EditableMesh_Public_EditableMesh_h_85_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEditableMesh(); \
	friend struct Z_Construct_UClass_UEditableMesh_Statics; \
public: \
	DECLARE_CLASS(UEditableMesh, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EditableMesh"), NO_API) \
	DECLARE_SERIALIZER(UEditableMesh) \
	Engine_Plugins_Runtime_EditableMesh_Source_EditableMesh_Public_EditableMesh_h_85_ARCHIVESERIALIZER


#define Engine_Plugins_Runtime_EditableMesh_Source_EditableMesh_Public_EditableMesh_h_85_INCLASS \
private: \
	static void StaticRegisterNativesUEditableMesh(); \
	friend struct Z_Construct_UClass_UEditableMesh_Statics; \
public: \
	DECLARE_CLASS(UEditableMesh, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EditableMesh"), NO_API) \
	DECLARE_SERIALIZER(UEditableMesh) \
	Engine_Plugins_Runtime_EditableMesh_Source_EditableMesh_Public_EditableMesh_h_85_ARCHIVESERIALIZER


#define Engine_Plugins_Runtime_EditableMesh_Source_EditableMesh_Public_EditableMesh_h_85_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEditableMesh(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEditableMesh) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEditableMesh); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditableMesh); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEditableMesh(UEditableMesh&&); \
	NO_API UEditableMesh(const UEditableMesh&); \
public:


#define Engine_Plugins_Runtime_EditableMesh_Source_EditableMesh_Public_EditableMesh_h_85_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEditableMesh(UEditableMesh&&); \
	NO_API UEditableMesh(const UEditableMesh&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEditableMesh); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditableMesh); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UEditableMesh)


#define Engine_Plugins_Runtime_EditableMesh_Source_EditableMesh_Public_EditableMesh_h_85_PRIVATE_PROPERTY_OFFSET
#define Engine_Plugins_Runtime_EditableMesh_Source_EditableMesh_Public_EditableMesh_h_82_PROLOG
#define Engine_Plugins_Runtime_EditableMesh_Source_EditableMesh_Public_EditableMesh_h_85_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Runtime_EditableMesh_Source_EditableMesh_Public_EditableMesh_h_85_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Runtime_EditableMesh_Source_EditableMesh_Public_EditableMesh_h_85_SPARSE_DATA \
	Engine_Plugins_Runtime_EditableMesh_Source_EditableMesh_Public_EditableMesh_h_85_RPC_WRAPPERS \
	Engine_Plugins_Runtime_EditableMesh_Source_EditableMesh_Public_EditableMesh_h_85_INCLASS \
	Engine_Plugins_Runtime_EditableMesh_Source_EditableMesh_Public_EditableMesh_h_85_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_Runtime_EditableMesh_Source_EditableMesh_Public_EditableMesh_h_85_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Runtime_EditableMesh_Source_EditableMesh_Public_EditableMesh_h_85_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Runtime_EditableMesh_Source_EditableMesh_Public_EditableMesh_h_85_SPARSE_DATA \
	Engine_Plugins_Runtime_EditableMesh_Source_EditableMesh_Public_EditableMesh_h_85_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_Runtime_EditableMesh_Source_EditableMesh_Public_EditableMesh_h_85_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_Runtime_EditableMesh_Source_EditableMesh_Public_EditableMesh_h_85_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> EDITABLEMESH_API UClass* StaticClass<class UEditableMesh>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_Runtime_EditableMesh_Source_EditableMesh_Public_EditableMesh_h


#define FOREACH_ENUM_ETRIANGLETESSELLATIONMODE(op) \
	op(ETriangleTessellationMode::ThreeTriangles) \
	op(ETriangleTessellationMode::FourTriangles) 

enum class ETriangleTessellationMode : uint8;
template<> EDITABLEMESH_API UEnum* StaticEnum<ETriangleTessellationMode>();

#define FOREACH_ENUM_EINSETPOLYGONSMODE(op) \
	op(EInsetPolygonsMode::All) \
	op(EInsetPolygonsMode::CenterPolygonOnly) \
	op(EInsetPolygonsMode::SidePolygonsOnly) 

enum class EInsetPolygonsMode : uint8;
template<> EDITABLEMESH_API UEnum* StaticEnum<EInsetPolygonsMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
