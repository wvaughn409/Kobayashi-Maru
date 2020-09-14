// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InteractiveToolsFramework/Public/ToolContextInterfaces.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeToolContextInterfaces() {}
// Cross Module References
	INTERACTIVETOOLSFRAMEWORK_API UEnum* Z_Construct_UEnum_InteractiveToolsFramework_ESelectedObjectsModificationType();
	UPackage* Z_Construct_UPackage__Script_InteractiveToolsFramework();
	INTERACTIVETOOLSFRAMEWORK_API UEnum* Z_Construct_UEnum_InteractiveToolsFramework_EToolMessageLevel();
	INTERACTIVETOOLSFRAMEWORK_API UEnum* Z_Construct_UEnum_InteractiveToolsFramework_EToolContextCoordinateSystem();
	INTERACTIVETOOLSFRAMEWORK_API UEnum* Z_Construct_UEnum_InteractiveToolsFramework_EStandardToolContextMaterials();
	INTERACTIVETOOLSFRAMEWORK_API UEnum* Z_Construct_UEnum_InteractiveToolsFramework_ESceneSnapQueryTargetType();
	INTERACTIVETOOLSFRAMEWORK_API UEnum* Z_Construct_UEnum_InteractiveToolsFramework_ESceneSnapQueryType();
// End Cross Module References
	static UEnum* ESelectedObjectsModificationType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_InteractiveToolsFramework_ESelectedObjectsModificationType, Z_Construct_UPackage__Script_InteractiveToolsFramework(), TEXT("ESelectedObjectsModificationType"));
		}
		return Singleton;
	}
	template<> INTERACTIVETOOLSFRAMEWORK_API UEnum* StaticEnum<ESelectedObjectsModificationType>()
	{
		return ESelectedObjectsModificationType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESelectedObjectsModificationType(ESelectedObjectsModificationType_StaticEnum, TEXT("/Script/InteractiveToolsFramework"), TEXT("ESelectedObjectsModificationType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_InteractiveToolsFramework_ESelectedObjectsModificationType_Hash() { return 926447523U; }
	UEnum* Z_Construct_UEnum_InteractiveToolsFramework_ESelectedObjectsModificationType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_InteractiveToolsFramework();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESelectedObjectsModificationType"), 0, Get_Z_Construct_UEnum_InteractiveToolsFramework_ESelectedObjectsModificationType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESelectedObjectsModificationType::Replace", (int64)ESelectedObjectsModificationType::Replace },
				{ "ESelectedObjectsModificationType::Add", (int64)ESelectedObjectsModificationType::Add },
				{ "ESelectedObjectsModificationType::Remove", (int64)ESelectedObjectsModificationType::Remove },
				{ "ESelectedObjectsModificationType::Clear", (int64)ESelectedObjectsModificationType::Clear },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Add.Name", "ESelectedObjectsModificationType::Add" },
				{ "Clear.Name", "ESelectedObjectsModificationType::Clear" },
				{ "Comment", "/** Type of change we want to apply to a selection */" },
				{ "ModuleRelativePath", "Public/ToolContextInterfaces.h" },
				{ "Remove.Name", "ESelectedObjectsModificationType::Remove" },
				{ "Replace.Name", "ESelectedObjectsModificationType::Replace" },
				{ "ToolTip", "Type of change we want to apply to a selection" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
				nullptr,
				"ESelectedObjectsModificationType",
				"ESelectedObjectsModificationType",
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
	static UEnum* EToolMessageLevel_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_InteractiveToolsFramework_EToolMessageLevel, Z_Construct_UPackage__Script_InteractiveToolsFramework(), TEXT("EToolMessageLevel"));
		}
		return Singleton;
	}
	template<> INTERACTIVETOOLSFRAMEWORK_API UEnum* StaticEnum<EToolMessageLevel>()
	{
		return EToolMessageLevel_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EToolMessageLevel(EToolMessageLevel_StaticEnum, TEXT("/Script/InteractiveToolsFramework"), TEXT("EToolMessageLevel"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_InteractiveToolsFramework_EToolMessageLevel_Hash() { return 3115858651U; }
	UEnum* Z_Construct_UEnum_InteractiveToolsFramework_EToolMessageLevel()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_InteractiveToolsFramework();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EToolMessageLevel"), 0, Get_Z_Construct_UEnum_InteractiveToolsFramework_EToolMessageLevel_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EToolMessageLevel::Internal", (int64)EToolMessageLevel::Internal },
				{ "EToolMessageLevel::UserMessage", (int64)EToolMessageLevel::UserMessage },
				{ "EToolMessageLevel::UserNotification", (int64)EToolMessageLevel::UserNotification },
				{ "EToolMessageLevel::UserWarning", (int64)EToolMessageLevel::UserWarning },
				{ "EToolMessageLevel::UserError", (int64)EToolMessageLevel::UserError },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Comment", "/** Level of severity of messages emitted by Tool framework */" },
				{ "Internal.Comment", "/** Development message goes into development log */" },
				{ "Internal.Name", "EToolMessageLevel::Internal" },
				{ "Internal.ToolTip", "Development message goes into development log" },
				{ "ModuleRelativePath", "Public/ToolContextInterfaces.h" },
				{ "ToolTip", "Level of severity of messages emitted by Tool framework" },
				{ "UserError.Comment", "/** Error message should be shown in a modal notification window */" },
				{ "UserError.Name", "EToolMessageLevel::UserError" },
				{ "UserError.ToolTip", "Error message should be shown in a modal notification window" },
				{ "UserMessage.Comment", "/** User message should appear in user-facing log */" },
				{ "UserMessage.Name", "EToolMessageLevel::UserMessage" },
				{ "UserMessage.ToolTip", "User message should appear in user-facing log" },
				{ "UserNotification.Comment", "/** Notification message should be shown in a non-modal notification window */" },
				{ "UserNotification.Name", "EToolMessageLevel::UserNotification" },
				{ "UserNotification.ToolTip", "Notification message should be shown in a non-modal notification window" },
				{ "UserWarning.Comment", "/** Warning message should be shown in a non-modal notification window with panache */" },
				{ "UserWarning.Name", "EToolMessageLevel::UserWarning" },
				{ "UserWarning.ToolTip", "Warning message should be shown in a non-modal notification window with panache" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
				nullptr,
				"EToolMessageLevel",
				"EToolMessageLevel",
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
	static UEnum* EToolContextCoordinateSystem_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_InteractiveToolsFramework_EToolContextCoordinateSystem, Z_Construct_UPackage__Script_InteractiveToolsFramework(), TEXT("EToolContextCoordinateSystem"));
		}
		return Singleton;
	}
	template<> INTERACTIVETOOLSFRAMEWORK_API UEnum* StaticEnum<EToolContextCoordinateSystem>()
	{
		return EToolContextCoordinateSystem_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EToolContextCoordinateSystem(EToolContextCoordinateSystem_StaticEnum, TEXT("/Script/InteractiveToolsFramework"), TEXT("EToolContextCoordinateSystem"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_InteractiveToolsFramework_EToolContextCoordinateSystem_Hash() { return 4045323887U; }
	UEnum* Z_Construct_UEnum_InteractiveToolsFramework_EToolContextCoordinateSystem()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_InteractiveToolsFramework();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EToolContextCoordinateSystem"), 0, Get_Z_Construct_UEnum_InteractiveToolsFramework_EToolContextCoordinateSystem_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EToolContextCoordinateSystem::World", (int64)EToolContextCoordinateSystem::World },
				{ "EToolContextCoordinateSystem::Local", (int64)EToolContextCoordinateSystem::Local },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Comment", "/** Types of coordinate systems that a Tool/Gizmo might use */" },
				{ "Local.Name", "EToolContextCoordinateSystem::Local" },
				{ "ModuleRelativePath", "Public/ToolContextInterfaces.h" },
				{ "ToolTip", "Types of coordinate systems that a Tool/Gizmo might use" },
				{ "World.Name", "EToolContextCoordinateSystem::World" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
				nullptr,
				"EToolContextCoordinateSystem",
				"EToolContextCoordinateSystem",
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
	static UEnum* EStandardToolContextMaterials_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_InteractiveToolsFramework_EStandardToolContextMaterials, Z_Construct_UPackage__Script_InteractiveToolsFramework(), TEXT("EStandardToolContextMaterials"));
		}
		return Singleton;
	}
	template<> INTERACTIVETOOLSFRAMEWORK_API UEnum* StaticEnum<EStandardToolContextMaterials>()
	{
		return EStandardToolContextMaterials_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EStandardToolContextMaterials(EStandardToolContextMaterials_StaticEnum, TEXT("/Script/InteractiveToolsFramework"), TEXT("EStandardToolContextMaterials"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_InteractiveToolsFramework_EStandardToolContextMaterials_Hash() { return 1127202864U; }
	UEnum* Z_Construct_UEnum_InteractiveToolsFramework_EStandardToolContextMaterials()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_InteractiveToolsFramework();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EStandardToolContextMaterials"), 0, Get_Z_Construct_UEnum_InteractiveToolsFramework_EStandardToolContextMaterials_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EStandardToolContextMaterials::VertexColorMaterial", (int64)EStandardToolContextMaterials::VertexColorMaterial },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Comment", "/** Types of standard materials that Tools may request from Context */" },
				{ "ModuleRelativePath", "Public/ToolContextInterfaces.h" },
				{ "ToolTip", "Types of standard materials that Tools may request from Context" },
				{ "VertexColorMaterial.Comment", "/** White material that displays vertex colors set on mesh */" },
				{ "VertexColorMaterial.Name", "EStandardToolContextMaterials::VertexColorMaterial" },
				{ "VertexColorMaterial.ToolTip", "White material that displays vertex colors set on mesh" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
				nullptr,
				"EStandardToolContextMaterials",
				"EStandardToolContextMaterials",
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
	static UEnum* ESceneSnapQueryTargetType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_InteractiveToolsFramework_ESceneSnapQueryTargetType, Z_Construct_UPackage__Script_InteractiveToolsFramework(), TEXT("ESceneSnapQueryTargetType"));
		}
		return Singleton;
	}
	template<> INTERACTIVETOOLSFRAMEWORK_API UEnum* StaticEnum<ESceneSnapQueryTargetType>()
	{
		return ESceneSnapQueryTargetType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESceneSnapQueryTargetType(ESceneSnapQueryTargetType_StaticEnum, TEXT("/Script/InteractiveToolsFramework"), TEXT("ESceneSnapQueryTargetType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_InteractiveToolsFramework_ESceneSnapQueryTargetType_Hash() { return 4128973708U; }
	UEnum* Z_Construct_UEnum_InteractiveToolsFramework_ESceneSnapQueryTargetType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_InteractiveToolsFramework();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESceneSnapQueryTargetType"), 0, Get_Z_Construct_UEnum_InteractiveToolsFramework_ESceneSnapQueryTargetType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESceneSnapQueryTargetType::None", (int64)ESceneSnapQueryTargetType::None },
				{ "ESceneSnapQueryTargetType::MeshVertex", (int64)ESceneSnapQueryTargetType::MeshVertex },
				{ "ESceneSnapQueryTargetType::MeshEdge", (int64)ESceneSnapQueryTargetType::MeshEdge },
				{ "ESceneSnapQueryTargetType::Grid", (int64)ESceneSnapQueryTargetType::Grid },
				{ "ESceneSnapQueryTargetType::All", (int64)ESceneSnapQueryTargetType::All },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "All.Name", "ESceneSnapQueryTargetType::All" },
				{ "Comment", "/** Types of snap targets that a Tool may want to run snap queries against. */" },
				{ "Grid.Comment", "/** Grid Snapping */" },
				{ "Grid.Name", "ESceneSnapQueryTargetType::Grid" },
				{ "Grid.ToolTip", "Grid Snapping" },
				{ "MeshEdge.Comment", "/** Consider any mesh edge */" },
				{ "MeshEdge.Name", "ESceneSnapQueryTargetType::MeshEdge" },
				{ "MeshEdge.ToolTip", "Consider any mesh edge" },
				{ "MeshVertex.Comment", "/** Consider any mesh vertex */" },
				{ "MeshVertex.Name", "ESceneSnapQueryTargetType::MeshVertex" },
				{ "MeshVertex.ToolTip", "Consider any mesh vertex" },
				{ "ModuleRelativePath", "Public/ToolContextInterfaces.h" },
				{ "None.Name", "ESceneSnapQueryTargetType::None" },
				{ "ToolTip", "Types of snap targets that a Tool may want to run snap queries against." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
				nullptr,
				"ESceneSnapQueryTargetType",
				"ESceneSnapQueryTargetType",
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
	static UEnum* ESceneSnapQueryType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_InteractiveToolsFramework_ESceneSnapQueryType, Z_Construct_UPackage__Script_InteractiveToolsFramework(), TEXT("ESceneSnapQueryType"));
		}
		return Singleton;
	}
	template<> INTERACTIVETOOLSFRAMEWORK_API UEnum* StaticEnum<ESceneSnapQueryType>()
	{
		return ESceneSnapQueryType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESceneSnapQueryType(ESceneSnapQueryType_StaticEnum, TEXT("/Script/InteractiveToolsFramework"), TEXT("ESceneSnapQueryType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_InteractiveToolsFramework_ESceneSnapQueryType_Hash() { return 2294791221U; }
	UEnum* Z_Construct_UEnum_InteractiveToolsFramework_ESceneSnapQueryType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_InteractiveToolsFramework();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESceneSnapQueryType"), 0, Get_Z_Construct_UEnum_InteractiveToolsFramework_ESceneSnapQueryType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESceneSnapQueryType::Position", (int64)ESceneSnapQueryType::Position },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Comment", "/** Types of Snap Queries that a ToolsContext parent may support, that Tools may request */" },
				{ "ModuleRelativePath", "Public/ToolContextInterfaces.h" },
				{ "Position.Comment", "/** snapping a position */" },
				{ "Position.Name", "ESceneSnapQueryType::Position" },
				{ "Position.ToolTip", "snapping a position" },
				{ "ToolTip", "Types of Snap Queries that a ToolsContext parent may support, that Tools may request" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
				nullptr,
				"ESceneSnapQueryType",
				"ESceneSnapQueryType",
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
