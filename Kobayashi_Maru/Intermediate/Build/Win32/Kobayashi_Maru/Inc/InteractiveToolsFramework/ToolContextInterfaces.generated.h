// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef INTERACTIVETOOLSFRAMEWORK_ToolContextInterfaces_generated_h
#error "ToolContextInterfaces.generated.h already included, missing '#pragma once' in ToolContextInterfaces.h"
#endif
#define INTERACTIVETOOLSFRAMEWORK_ToolContextInterfaces_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Experimental_InteractiveToolsFramework_Public_ToolContextInterfaces_h


#define FOREACH_ENUM_ESELECTEDOBJECTSMODIFICATIONTYPE(op) \
	op(ESelectedObjectsModificationType::Replace) \
	op(ESelectedObjectsModificationType::Add) \
	op(ESelectedObjectsModificationType::Remove) \
	op(ESelectedObjectsModificationType::Clear) 

enum class ESelectedObjectsModificationType;
template<> INTERACTIVETOOLSFRAMEWORK_API UEnum* StaticEnum<ESelectedObjectsModificationType>();

#define FOREACH_ENUM_ETOOLMESSAGELEVEL(op) \
	op(EToolMessageLevel::Internal) \
	op(EToolMessageLevel::UserMessage) \
	op(EToolMessageLevel::UserNotification) \
	op(EToolMessageLevel::UserWarning) \
	op(EToolMessageLevel::UserError) 

enum class EToolMessageLevel;
template<> INTERACTIVETOOLSFRAMEWORK_API UEnum* StaticEnum<EToolMessageLevel>();

#define FOREACH_ENUM_ETOOLCONTEXTCOORDINATESYSTEM(op) \
	op(EToolContextCoordinateSystem::World) \
	op(EToolContextCoordinateSystem::Local) 

enum class EToolContextCoordinateSystem;
template<> INTERACTIVETOOLSFRAMEWORK_API UEnum* StaticEnum<EToolContextCoordinateSystem>();

#define FOREACH_ENUM_ESTANDARDTOOLCONTEXTMATERIALS(op) \
	op(EStandardToolContextMaterials::VertexColorMaterial) 

enum class EStandardToolContextMaterials;
template<> INTERACTIVETOOLSFRAMEWORK_API UEnum* StaticEnum<EStandardToolContextMaterials>();

#define FOREACH_ENUM_ESCENESNAPQUERYTARGETTYPE(op) \
	op(ESceneSnapQueryTargetType::None) \
	op(ESceneSnapQueryTargetType::MeshVertex) \
	op(ESceneSnapQueryTargetType::MeshEdge) \
	op(ESceneSnapQueryTargetType::Grid) \
	op(ESceneSnapQueryTargetType::All) 

enum class ESceneSnapQueryTargetType;
template<> INTERACTIVETOOLSFRAMEWORK_API UEnum* StaticEnum<ESceneSnapQueryTargetType>();

#define FOREACH_ENUM_ESCENESNAPQUERYTYPE(op) \
	op(ESceneSnapQueryType::Position) 

enum class ESceneSnapQueryType;
template<> INTERACTIVETOOLSFRAMEWORK_API UEnum* StaticEnum<ESceneSnapQueryType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
