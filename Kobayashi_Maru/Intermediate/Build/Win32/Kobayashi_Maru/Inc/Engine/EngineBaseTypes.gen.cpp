// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Engine/EngineBaseTypes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEngineBaseTypes() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EViewModeIndex();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EDemoPlayFailure();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETravelType();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETravelFailure();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ENetworkLagState();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ENetworkFailure();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETickingGroup();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EMouseLockMode();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EMouseCaptureMode();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EInputEvent();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExposureSettings();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FURL();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FActorComponentTickFunction();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTickFunction();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FActorTickFunction();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTickPrerequisite();
	ENGINE_API UClass* Z_Construct_UClass_UViewModeUtils_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UViewModeUtils();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UEngineBaseTypes_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UEngineBaseTypes();
// End Cross Module References
	static UEnum* EViewModeIndex_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EViewModeIndex, Z_Construct_UPackage__Script_Engine(), TEXT("EViewModeIndex"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EViewModeIndex>()
	{
		return EViewModeIndex_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EViewModeIndex(EViewModeIndex_StaticEnum, TEXT("/Script/Engine"), TEXT("EViewModeIndex"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EViewModeIndex_Hash() { return 1374223898U; }
	UEnum* Z_Construct_UEnum_Engine_EViewModeIndex()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EViewModeIndex"), 0, Get_Z_Construct_UEnum_Engine_EViewModeIndex_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "VMI_BrushWireframe", (int64)VMI_BrushWireframe },
				{ "VMI_Wireframe", (int64)VMI_Wireframe },
				{ "VMI_Unlit", (int64)VMI_Unlit },
				{ "VMI_Lit", (int64)VMI_Lit },
				{ "VMI_Lit_DetailLighting", (int64)VMI_Lit_DetailLighting },
				{ "VMI_LightingOnly", (int64)VMI_LightingOnly },
				{ "VMI_LightComplexity", (int64)VMI_LightComplexity },
				{ "VMI_ShaderComplexity", (int64)VMI_ShaderComplexity },
				{ "VMI_LightmapDensity", (int64)VMI_LightmapDensity },
				{ "VMI_LitLightmapDensity", (int64)VMI_LitLightmapDensity },
				{ "VMI_ReflectionOverride", (int64)VMI_ReflectionOverride },
				{ "VMI_VisualizeBuffer", (int64)VMI_VisualizeBuffer },
				{ "VMI_StationaryLightOverlap", (int64)VMI_StationaryLightOverlap },
				{ "VMI_CollisionPawn", (int64)VMI_CollisionPawn },
				{ "VMI_CollisionVisibility", (int64)VMI_CollisionVisibility },
				{ "VMI_LODColoration", (int64)VMI_LODColoration },
				{ "VMI_QuadOverdraw", (int64)VMI_QuadOverdraw },
				{ "VMI_PrimitiveDistanceAccuracy", (int64)VMI_PrimitiveDistanceAccuracy },
				{ "VMI_MeshUVDensityAccuracy", (int64)VMI_MeshUVDensityAccuracy },
				{ "VMI_ShaderComplexityWithQuadOverdraw", (int64)VMI_ShaderComplexityWithQuadOverdraw },
				{ "VMI_HLODColoration", (int64)VMI_HLODColoration },
				{ "VMI_GroupLODColoration", (int64)VMI_GroupLODColoration },
				{ "VMI_MaterialTextureScaleAccuracy", (int64)VMI_MaterialTextureScaleAccuracy },
				{ "VMI_RequiredTextureResolution", (int64)VMI_RequiredTextureResolution },
				{ "VMI_PathTracing", (int64)VMI_PathTracing },
				{ "VMI_RayTracingDebug", (int64)VMI_RayTracingDebug },
				{ "VMI_Max", (int64)VMI_Max },
				{ "VMI_Unknown", (int64)VMI_Unknown },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Comment", "/**\n * Define view modes to get specific show flag settings (some on, some off and some are not altered)\n * Don't change the order, the ID is serialized with the editor\n */" },
				{ "ModuleRelativePath", "Classes/Engine/EngineBaseTypes.h" },
				{ "ToolTip", "Define view modes to get specific show flag settings (some on, some off and some are not altered)\nDon't change the order, the ID is serialized with the editor" },
				{ "VMI_BrushWireframe.Comment", "/** Wireframe w/ brushes. */" },
				{ "VMI_BrushWireframe.DisplayName", "Brush Wireframe" },
				{ "VMI_BrushWireframe.Name", "VMI_BrushWireframe" },
				{ "VMI_BrushWireframe.ToolTip", "Wireframe w/ brushes." },
				{ "VMI_CollisionPawn.DisplayName", "Player Collision" },
				{ "VMI_CollisionPawn.Name", "VMI_CollisionPawn" },
				{ "VMI_CollisionVisibility.DisplayName", "Visibility Collision" },
				{ "VMI_CollisionVisibility.Name", "VMI_CollisionVisibility" },
				{ "VMI_GroupLODColoration.Comment", "/** Group item for LOD and HLOD coloration*/" },
				{ "VMI_GroupLODColoration.DisplayName", "Group LOD Coloration" },
				{ "VMI_GroupLODColoration.Name", "VMI_GroupLODColoration" },
				{ "VMI_GroupLODColoration.ToolTip", "Group item for LOD and HLOD coloration" },
				{ "VMI_HLODColoration.Comment", "/** Colored according to the current HLOD index. */" },
				{ "VMI_HLODColoration.DisplayName", "Hierarchical LOD Coloration" },
				{ "VMI_HLODColoration.Name", "VMI_HLODColoration" },
				{ "VMI_HLODColoration.ToolTip", "Colored according to the current HLOD index." },
				{ "VMI_LightComplexity.Comment", "/** Colored according to light count. */" },
				{ "VMI_LightComplexity.DisplayName", "Light Complexity" },
				{ "VMI_LightComplexity.Name", "VMI_LightComplexity" },
				{ "VMI_LightComplexity.ToolTip", "Colored according to light count." },
				{ "VMI_LightingOnly.Comment", "/** Lit wo/ materials. */" },
				{ "VMI_LightingOnly.DisplayName", "Lighting Only" },
				{ "VMI_LightingOnly.Name", "VMI_LightingOnly" },
				{ "VMI_LightingOnly.ToolTip", "Lit wo/ materials." },
				{ "VMI_LightmapDensity.Comment", "/** Colored according to world-space LightMap texture density. */" },
				{ "VMI_LightmapDensity.DisplayName", "Lightmap Density" },
				{ "VMI_LightmapDensity.Name", "VMI_LightmapDensity" },
				{ "VMI_LightmapDensity.ToolTip", "Colored according to world-space LightMap texture density." },
				{ "VMI_Lit.Comment", "/** Lit. */" },
				{ "VMI_Lit.DisplayName", "Lit" },
				{ "VMI_Lit.Name", "VMI_Lit" },
				{ "VMI_Lit.ToolTip", "Lit." },
				{ "VMI_Lit_DetailLighting.DisplayName", "Detail Lighting" },
				{ "VMI_Lit_DetailLighting.Name", "VMI_Lit_DetailLighting" },
				{ "VMI_LitLightmapDensity.Comment", "/** Colored according to light count - showing lightmap texel density on texture mapped objects. */" },
				{ "VMI_LitLightmapDensity.DisplayName", "Lit Lightmap Density" },
				{ "VMI_LitLightmapDensity.Name", "VMI_LitLightmapDensity" },
				{ "VMI_LitLightmapDensity.ToolTip", "Colored according to light count - showing lightmap texel density on texture mapped objects." },
				{ "VMI_LODColoration.Comment", "/** Colored according to the current LOD index. */" },
				{ "VMI_LODColoration.DisplayName", "Mesh LOD Coloration" },
				{ "VMI_LODColoration.Name", "VMI_LODColoration" },
				{ "VMI_LODColoration.ToolTip", "Colored according to the current LOD index." },
				{ "VMI_MaterialTextureScaleAccuracy.Comment", "/** Visualize the accuracy of the material texture scales used for texture streaming. */" },
				{ "VMI_MaterialTextureScaleAccuracy.DisplayName", "Material Texture Scales" },
				{ "VMI_MaterialTextureScaleAccuracy.Name", "VMI_MaterialTextureScaleAccuracy" },
				{ "VMI_MaterialTextureScaleAccuracy.ToolTip", "Visualize the accuracy of the material texture scales used for texture streaming." },
				{ "VMI_Max.Hidden", "" },
				{ "VMI_Max.Name", "VMI_Max" },
				{ "VMI_MeshUVDensityAccuracy.Comment", "/** Visualize the accuracy of the mesh UV densities computed for texture streaming. */" },
				{ "VMI_MeshUVDensityAccuracy.DisplayName", "Mesh UV Density" },
				{ "VMI_MeshUVDensityAccuracy.Name", "VMI_MeshUVDensityAccuracy" },
				{ "VMI_MeshUVDensityAccuracy.ToolTip", "Visualize the accuracy of the mesh UV densities computed for texture streaming." },
				{ "VMI_PathTracing.Comment", "/** Run path tracing pipeline */" },
				{ "VMI_PathTracing.DisplayName", "Path Tracing" },
				{ "VMI_PathTracing.Name", "VMI_PathTracing" },
				{ "VMI_PathTracing.ToolTip", "Run path tracing pipeline" },
				{ "VMI_PrimitiveDistanceAccuracy.Comment", "/** Visualize the accuracy of the primitive distance computed for texture streaming. */" },
				{ "VMI_PrimitiveDistanceAccuracy.DisplayName", "Primitive Distance" },
				{ "VMI_PrimitiveDistanceAccuracy.Name", "VMI_PrimitiveDistanceAccuracy" },
				{ "VMI_PrimitiveDistanceAccuracy.ToolTip", "Visualize the accuracy of the primitive distance computed for texture streaming." },
				{ "VMI_QuadOverdraw.Comment", "/** Colored according to the quad coverage. */" },
				{ "VMI_QuadOverdraw.DisplayName", "Quad Overdraw" },
				{ "VMI_QuadOverdraw.Name", "VMI_QuadOverdraw" },
				{ "VMI_QuadOverdraw.ToolTip", "Colored according to the quad coverage." },
				{ "VMI_RayTracingDebug.Comment", "/** Run ray tracing debug pipeline */" },
				{ "VMI_RayTracingDebug.DisplayName", "Ray Tracing Debug" },
				{ "VMI_RayTracingDebug.Name", "VMI_RayTracingDebug" },
				{ "VMI_RayTracingDebug.ToolTip", "Run ray tracing debug pipeline" },
				{ "VMI_ReflectionOverride.DisplayName", "Reflections" },
				{ "VMI_ReflectionOverride.Name", "VMI_ReflectionOverride" },
				{ "VMI_RequiredTextureResolution.Comment", "/** Compare the required texture resolution to the actual resolution. */" },
				{ "VMI_RequiredTextureResolution.DisplayName", "Required Texture Resolution" },
				{ "VMI_RequiredTextureResolution.Name", "VMI_RequiredTextureResolution" },
				{ "VMI_RequiredTextureResolution.ToolTip", "Compare the required texture resolution to the actual resolution." },
				{ "VMI_ShaderComplexity.Comment", "/** Colored according to shader complexity. */" },
				{ "VMI_ShaderComplexity.DisplayName", "Shader Complexity" },
				{ "VMI_ShaderComplexity.Name", "VMI_ShaderComplexity" },
				{ "VMI_ShaderComplexity.ToolTip", "Colored according to shader complexity." },
				{ "VMI_ShaderComplexityWithQuadOverdraw.Comment", "/** Colored according to shader complexity, including quad overdraw. */" },
				{ "VMI_ShaderComplexityWithQuadOverdraw.DisplayName", "Shader Complexity & Quads" },
				{ "VMI_ShaderComplexityWithQuadOverdraw.Name", "VMI_ShaderComplexityWithQuadOverdraw" },
				{ "VMI_ShaderComplexityWithQuadOverdraw.ToolTip", "Colored according to shader complexity, including quad overdraw." },
				{ "VMI_StationaryLightOverlap.Comment", "/** Colored according to stationary light overlap. */" },
				{ "VMI_StationaryLightOverlap.DisplayName", "Stationary Light Overlap" },
				{ "VMI_StationaryLightOverlap.Name", "VMI_StationaryLightOverlap" },
				{ "VMI_StationaryLightOverlap.ToolTip", "Colored according to stationary light overlap." },
				{ "VMI_Unknown.Comment", "// VMI_Unknown - The value assigned to VMI_Unknown must be the highest possible of any member of EViewModeIndex, or GetViewModeName might seg-fault\n" },
				{ "VMI_Unknown.DisplayName", "Unknown" },
				{ "VMI_Unknown.Name", "VMI_Unknown" },
				{ "VMI_Unknown.ToolTip", "VMI_Unknown - The value assigned to VMI_Unknown must be the highest possible of any member of EViewModeIndex, or GetViewModeName might seg-fault" },
				{ "VMI_Unlit.Comment", "/** Unlit. */" },
				{ "VMI_Unlit.DisplayName", "Unlit" },
				{ "VMI_Unlit.Name", "VMI_Unlit" },
				{ "VMI_Unlit.ToolTip", "Unlit." },
				{ "VMI_VisualizeBuffer.DisplayName", "Buffer Visualization" },
				{ "VMI_VisualizeBuffer.Name", "VMI_VisualizeBuffer" },
				{ "VMI_Wireframe.Comment", "/** Wireframe w/ BSP. */" },
				{ "VMI_Wireframe.DisplayName", "Wireframe" },
				{ "VMI_Wireframe.Name", "VMI_Wireframe" },
				{ "VMI_Wireframe.ToolTip", "Wireframe w/ BSP." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"EViewModeIndex",
				"EViewModeIndex",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EDemoPlayFailure_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EDemoPlayFailure, Z_Construct_UPackage__Script_Engine(), TEXT("EDemoPlayFailure"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EDemoPlayFailure::Type>()
	{
		return EDemoPlayFailure_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EDemoPlayFailure(EDemoPlayFailure_StaticEnum, TEXT("/Script/Engine"), TEXT("EDemoPlayFailure"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EDemoPlayFailure_Hash() { return 94320730U; }
	UEnum* Z_Construct_UEnum_Engine_EDemoPlayFailure()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EDemoPlayFailure"), 0, Get_Z_Construct_UEnum_Engine_EDemoPlayFailure_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EDemoPlayFailure::Generic", (int64)EDemoPlayFailure::Generic },
				{ "EDemoPlayFailure::DemoNotFound", (int64)EDemoPlayFailure::DemoNotFound },
				{ "EDemoPlayFailure::Corrupt", (int64)EDemoPlayFailure::Corrupt },
				{ "EDemoPlayFailure::InvalidVersion", (int64)EDemoPlayFailure::InvalidVersion },
				{ "EDemoPlayFailure::InitBase", (int64)EDemoPlayFailure::InitBase },
				{ "EDemoPlayFailure::GameSpecificHeader", (int64)EDemoPlayFailure::GameSpecificHeader },
				{ "EDemoPlayFailure::ReplayStreamerInternal", (int64)EDemoPlayFailure::ReplayStreamerInternal },
				{ "EDemoPlayFailure::LoadMap", (int64)EDemoPlayFailure::LoadMap },
				{ "EDemoPlayFailure::Serialization", (int64)EDemoPlayFailure::Serialization },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/** Types of demo play failures broadcast from the engine */" },
				{ "Corrupt.Comment", "/** Demo is corrupt. */" },
				{ "Corrupt.Name", "EDemoPlayFailure::Corrupt" },
				{ "Corrupt.ToolTip", "Demo is corrupt." },
				{ "DemoNotFound.Comment", "/** Demo was not found. */" },
				{ "DemoNotFound.Name", "EDemoPlayFailure::DemoNotFound" },
				{ "DemoNotFound.ToolTip", "Demo was not found." },
				{ "GameSpecificHeader.Comment", "/** Failed to process game specific header. */" },
				{ "GameSpecificHeader.Name", "EDemoPlayFailure::GameSpecificHeader" },
				{ "GameSpecificHeader.ToolTip", "Failed to process game specific header." },
				{ "Generic.Comment", "/** A Generic failure. */" },
				{ "Generic.Name", "EDemoPlayFailure::Generic" },
				{ "Generic.ToolTip", "A Generic failure." },
				{ "InitBase.Comment", "/** InitBase failed. */" },
				{ "InitBase.Name", "EDemoPlayFailure::InitBase" },
				{ "InitBase.ToolTip", "InitBase failed." },
				{ "InvalidVersion.Comment", "/** Invalid version. */" },
				{ "InvalidVersion.Name", "EDemoPlayFailure::InvalidVersion" },
				{ "InvalidVersion.ToolTip", "Invalid version." },
				{ "LoadMap.Comment", "/** LoadMap failed. */" },
				{ "LoadMap.Name", "EDemoPlayFailure::LoadMap" },
				{ "LoadMap.ToolTip", "LoadMap failed." },
				{ "ModuleRelativePath", "Classes/Engine/EngineBaseTypes.h" },
				{ "ReplayStreamerInternal.Comment", "/** Replay streamer had an internal error. */" },
				{ "ReplayStreamerInternal.Name", "EDemoPlayFailure::ReplayStreamerInternal" },
				{ "ReplayStreamerInternal.ToolTip", "Replay streamer had an internal error." },
				{ "Serialization.Comment", "/** Error serializing data stream. */" },
				{ "Serialization.Name", "EDemoPlayFailure::Serialization" },
				{ "Serialization.ToolTip", "Error serializing data stream." },
				{ "ToolTip", "Types of demo play failures broadcast from the engine" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"EDemoPlayFailure",
				"EDemoPlayFailure::Type",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Namespaced,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ETravelType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_ETravelType, Z_Construct_UPackage__Script_Engine(), TEXT("ETravelType"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<ETravelType>()
	{
		return ETravelType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ETravelType(ETravelType_StaticEnum, TEXT("/Script/Engine"), TEXT("ETravelType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_ETravelType_Hash() { return 3360162954U; }
	UEnum* Z_Construct_UEnum_Engine_ETravelType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ETravelType"), 0, Get_Z_Construct_UEnum_Engine_ETravelType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "TRAVEL_Absolute", (int64)TRAVEL_Absolute },
				{ "TRAVEL_Partial", (int64)TRAVEL_Partial },
				{ "TRAVEL_Relative", (int64)TRAVEL_Relative },
				{ "TRAVEL_MAX", (int64)TRAVEL_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Comment", "// Traveling from server to server.\n" },
				{ "ModuleRelativePath", "Classes/Engine/EngineBaseTypes.h" },
				{ "ToolTip", "Traveling from server to server." },
				{ "TRAVEL_Absolute.Comment", "/** Absolute URL. */" },
				{ "TRAVEL_Absolute.Name", "TRAVEL_Absolute" },
				{ "TRAVEL_Absolute.ToolTip", "Absolute URL." },
				{ "TRAVEL_MAX.Name", "TRAVEL_MAX" },
				{ "TRAVEL_Partial.Comment", "/** Partial (carry name, reset server). */" },
				{ "TRAVEL_Partial.Name", "TRAVEL_Partial" },
				{ "TRAVEL_Partial.ToolTip", "Partial (carry name, reset server)." },
				{ "TRAVEL_Relative.Comment", "/** Relative URL. */" },
				{ "TRAVEL_Relative.Name", "TRAVEL_Relative" },
				{ "TRAVEL_Relative.ToolTip", "Relative URL." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"ETravelType",
				"ETravelType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ETravelFailure_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_ETravelFailure, Z_Construct_UPackage__Script_Engine(), TEXT("ETravelFailure"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<ETravelFailure::Type>()
	{
		return ETravelFailure_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ETravelFailure(ETravelFailure_StaticEnum, TEXT("/Script/Engine"), TEXT("ETravelFailure"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_ETravelFailure_Hash() { return 3707108597U; }
	UEnum* Z_Construct_UEnum_Engine_ETravelFailure()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ETravelFailure"), 0, Get_Z_Construct_UEnum_Engine_ETravelFailure_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ETravelFailure::NoLevel", (int64)ETravelFailure::NoLevel },
				{ "ETravelFailure::LoadMapFailure", (int64)ETravelFailure::LoadMapFailure },
				{ "ETravelFailure::InvalidURL", (int64)ETravelFailure::InvalidURL },
				{ "ETravelFailure::PackageMissing", (int64)ETravelFailure::PackageMissing },
				{ "ETravelFailure::PackageVersion", (int64)ETravelFailure::PackageVersion },
				{ "ETravelFailure::NoDownload", (int64)ETravelFailure::NoDownload },
				{ "ETravelFailure::TravelFailure", (int64)ETravelFailure::TravelFailure },
				{ "ETravelFailure::CheatCommands", (int64)ETravelFailure::CheatCommands },
				{ "ETravelFailure::PendingNetGameCreateFailure", (int64)ETravelFailure::PendingNetGameCreateFailure },
				{ "ETravelFailure::CloudSaveFailure", (int64)ETravelFailure::CloudSaveFailure },
				{ "ETravelFailure::ServerTravelFailure", (int64)ETravelFailure::ServerTravelFailure },
				{ "ETravelFailure::ClientTravelFailure", (int64)ETravelFailure::ClientTravelFailure },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "CheatCommands.Comment", "/** Cheat commands have been used disabling travel */" },
				{ "CheatCommands.Name", "ETravelFailure::CheatCommands" },
				{ "CheatCommands.ToolTip", "Cheat commands have been used disabling travel" },
				{ "ClientTravelFailure.Comment", "/** There was an error during a client travel to a new map */" },
				{ "ClientTravelFailure.Name", "ETravelFailure::ClientTravelFailure" },
				{ "ClientTravelFailure.ToolTip", "There was an error during a client travel to a new map" },
				{ "CloudSaveFailure.Comment", "/** Failed to save before travel */" },
				{ "CloudSaveFailure.Name", "ETravelFailure::CloudSaveFailure" },
				{ "CloudSaveFailure.ToolTip", "Failed to save before travel" },
				{ "Comment", "/** Types of server travel failures broadcast by the engine */" },
				{ "InvalidURL.Comment", "/** Invalid URL specified */" },
				{ "InvalidURL.Name", "ETravelFailure::InvalidURL" },
				{ "InvalidURL.ToolTip", "Invalid URL specified" },
				{ "LoadMapFailure.Comment", "/** LoadMap failed on travel (about to Browse to default map) */" },
				{ "LoadMapFailure.Name", "ETravelFailure::LoadMapFailure" },
				{ "LoadMapFailure.ToolTip", "LoadMap failed on travel (about to Browse to default map)" },
				{ "ModuleRelativePath", "Classes/Engine/EngineBaseTypes.h" },
				{ "NoDownload.Comment", "/** A package is missing and the client is unable to download the file */" },
				{ "NoDownload.Name", "ETravelFailure::NoDownload" },
				{ "NoDownload.ToolTip", "A package is missing and the client is unable to download the file" },
				{ "NoLevel.Comment", "/** No level found in the loaded package */" },
				{ "NoLevel.Name", "ETravelFailure::NoLevel" },
				{ "NoLevel.ToolTip", "No level found in the loaded package" },
				{ "PackageMissing.Comment", "/** A package is missing on the client */" },
				{ "PackageMissing.Name", "ETravelFailure::PackageMissing" },
				{ "PackageMissing.ToolTip", "A package is missing on the client" },
				{ "PackageVersion.Comment", "/** A package version mismatch has occurred between client and server */" },
				{ "PackageVersion.Name", "ETravelFailure::PackageVersion" },
				{ "PackageVersion.ToolTip", "A package version mismatch has occurred between client and server" },
				{ "PendingNetGameCreateFailure.Comment", "/** Failed to create the pending net game for travel */" },
				{ "PendingNetGameCreateFailure.Name", "ETravelFailure::PendingNetGameCreateFailure" },
				{ "PendingNetGameCreateFailure.ToolTip", "Failed to create the pending net game for travel" },
				{ "ServerTravelFailure.Comment", "/** There was an error during a server travel to a new map */" },
				{ "ServerTravelFailure.Name", "ETravelFailure::ServerTravelFailure" },
				{ "ServerTravelFailure.ToolTip", "There was an error during a server travel to a new map" },
				{ "ToolTip", "Types of server travel failures broadcast by the engine" },
				{ "TravelFailure.Comment", "/** General travel failure */" },
				{ "TravelFailure.Name", "ETravelFailure::TravelFailure" },
				{ "TravelFailure.ToolTip", "General travel failure" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"ETravelFailure",
				"ETravelFailure::Type",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Namespaced,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ENetworkLagState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_ENetworkLagState, Z_Construct_UPackage__Script_Engine(), TEXT("ENetworkLagState"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<ENetworkLagState::Type>()
	{
		return ENetworkLagState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ENetworkLagState(ENetworkLagState_StaticEnum, TEXT("/Script/Engine"), TEXT("ENetworkLagState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_ENetworkLagState_Hash() { return 3176361420U; }
	UEnum* Z_Construct_UEnum_Engine_ENetworkLagState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ENetworkLagState"), 0, Get_Z_Construct_UEnum_Engine_ENetworkLagState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ENetworkLagState::NotLagging", (int64)ENetworkLagState::NotLagging },
				{ "ENetworkLagState::Lagging", (int64)ENetworkLagState::Lagging },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Lagging.Comment", "/** The net driver is in the process of timing out all of the client connections */" },
				{ "Lagging.Name", "ENetworkLagState::Lagging" },
				{ "Lagging.ToolTip", "The net driver is in the process of timing out all of the client connections" },
				{ "ModuleRelativePath", "Classes/Engine/EngineBaseTypes.h" },
				{ "NotLagging.Comment", "/** The net driver is operating normally or it is not possible to tell if it is lagging */" },
				{ "NotLagging.Name", "ENetworkLagState::NotLagging" },
				{ "NotLagging.ToolTip", "The net driver is operating normally or it is not possible to tell if it is lagging" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"ENetworkLagState",
				"ENetworkLagState::Type",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Namespaced,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ENetworkFailure_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_ENetworkFailure, Z_Construct_UPackage__Script_Engine(), TEXT("ENetworkFailure"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<ENetworkFailure::Type>()
	{
		return ENetworkFailure_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ENetworkFailure(ENetworkFailure_StaticEnum, TEXT("/Script/Engine"), TEXT("ENetworkFailure"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_ENetworkFailure_Hash() { return 1573645415U; }
	UEnum* Z_Construct_UEnum_Engine_ENetworkFailure()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ENetworkFailure"), 0, Get_Z_Construct_UEnum_Engine_ENetworkFailure_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ENetworkFailure::NetDriverAlreadyExists", (int64)ENetworkFailure::NetDriverAlreadyExists },
				{ "ENetworkFailure::NetDriverCreateFailure", (int64)ENetworkFailure::NetDriverCreateFailure },
				{ "ENetworkFailure::NetDriverListenFailure", (int64)ENetworkFailure::NetDriverListenFailure },
				{ "ENetworkFailure::ConnectionLost", (int64)ENetworkFailure::ConnectionLost },
				{ "ENetworkFailure::ConnectionTimeout", (int64)ENetworkFailure::ConnectionTimeout },
				{ "ENetworkFailure::FailureReceived", (int64)ENetworkFailure::FailureReceived },
				{ "ENetworkFailure::OutdatedClient", (int64)ENetworkFailure::OutdatedClient },
				{ "ENetworkFailure::OutdatedServer", (int64)ENetworkFailure::OutdatedServer },
				{ "ENetworkFailure::PendingConnectionFailure", (int64)ENetworkFailure::PendingConnectionFailure },
				{ "ENetworkFailure::NetGuidMismatch", (int64)ENetworkFailure::NetGuidMismatch },
				{ "ENetworkFailure::NetChecksumMismatch", (int64)ENetworkFailure::NetChecksumMismatch },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/** Types of network failures broadcast from the engine */" },
				{ "ConnectionLost.Comment", "/** A connection to the net driver has been lost */" },
				{ "ConnectionLost.Name", "ENetworkFailure::ConnectionLost" },
				{ "ConnectionLost.ToolTip", "A connection to the net driver has been lost" },
				{ "ConnectionTimeout.Comment", "/** A connection to the net driver has timed out */" },
				{ "ConnectionTimeout.Name", "ENetworkFailure::ConnectionTimeout" },
				{ "ConnectionTimeout.ToolTip", "A connection to the net driver has timed out" },
				{ "FailureReceived.Comment", "/** The net driver received an NMT_Failure message */" },
				{ "FailureReceived.Name", "ENetworkFailure::FailureReceived" },
				{ "FailureReceived.ToolTip", "The net driver received an NMT_Failure message" },
				{ "ModuleRelativePath", "Classes/Engine/EngineBaseTypes.h" },
				{ "NetChecksumMismatch.Comment", "/** Network checksum mismatch */" },
				{ "NetChecksumMismatch.Name", "ENetworkFailure::NetChecksumMismatch" },
				{ "NetChecksumMismatch.ToolTip", "Network checksum mismatch" },
				{ "NetDriverAlreadyExists.Comment", "/** A relevant net driver has already been created for this service */" },
				{ "NetDriverAlreadyExists.Name", "ENetworkFailure::NetDriverAlreadyExists" },
				{ "NetDriverAlreadyExists.ToolTip", "A relevant net driver has already been created for this service" },
				{ "NetDriverCreateFailure.Comment", "/** The net driver creation failed */" },
				{ "NetDriverCreateFailure.Name", "ENetworkFailure::NetDriverCreateFailure" },
				{ "NetDriverCreateFailure.ToolTip", "The net driver creation failed" },
				{ "NetDriverListenFailure.Comment", "/** The net driver failed its Listen() call */" },
				{ "NetDriverListenFailure.Name", "ENetworkFailure::NetDriverListenFailure" },
				{ "NetDriverListenFailure.ToolTip", "The net driver failed its Listen() call" },
				{ "NetGuidMismatch.Comment", "/** NetGuid mismatch */" },
				{ "NetGuidMismatch.Name", "ENetworkFailure::NetGuidMismatch" },
				{ "NetGuidMismatch.ToolTip", "NetGuid mismatch" },
				{ "OutdatedClient.Comment", "/** The client needs to upgrade their game */" },
				{ "OutdatedClient.Name", "ENetworkFailure::OutdatedClient" },
				{ "OutdatedClient.ToolTip", "The client needs to upgrade their game" },
				{ "OutdatedServer.Comment", "/** The server needs to upgrade their game */" },
				{ "OutdatedServer.Name", "ENetworkFailure::OutdatedServer" },
				{ "OutdatedServer.ToolTip", "The server needs to upgrade their game" },
				{ "PendingConnectionFailure.Comment", "/** There was an error during connection to the game */" },
				{ "PendingConnectionFailure.Name", "ENetworkFailure::PendingConnectionFailure" },
				{ "PendingConnectionFailure.ToolTip", "There was an error during connection to the game" },
				{ "ToolTip", "Types of network failures broadcast from the engine" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"ENetworkFailure",
				"ENetworkFailure::Type",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Namespaced,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ETickingGroup_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_ETickingGroup, Z_Construct_UPackage__Script_Engine(), TEXT("ETickingGroup"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<ETickingGroup>()
	{
		return ETickingGroup_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ETickingGroup(ETickingGroup_StaticEnum, TEXT("/Script/Engine"), TEXT("ETickingGroup"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_ETickingGroup_Hash() { return 3648728920U; }
	UEnum* Z_Construct_UEnum_Engine_ETickingGroup()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ETickingGroup"), 0, Get_Z_Construct_UEnum_Engine_ETickingGroup_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "TG_PrePhysics", (int64)TG_PrePhysics },
				{ "TG_StartPhysics", (int64)TG_StartPhysics },
				{ "TG_DuringPhysics", (int64)TG_DuringPhysics },
				{ "TG_EndPhysics", (int64)TG_EndPhysics },
				{ "TG_PostPhysics", (int64)TG_PostPhysics },
				{ "TG_PostUpdateWork", (int64)TG_PostUpdateWork },
				{ "TG_LastDemotable", (int64)TG_LastDemotable },
				{ "TG_NewlySpawned", (int64)TG_NewlySpawned },
				{ "TG_MAX", (int64)TG_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/** Determines which ticking group a tick function belongs to. */" },
				{ "ModuleRelativePath", "Classes/Engine/EngineBaseTypes.h" },
				{ "TG_DuringPhysics.Comment", "/** Any item that can be run in parallel with our physics simulation work. */" },
				{ "TG_DuringPhysics.DisplayName", "During Physics" },
				{ "TG_DuringPhysics.Name", "TG_DuringPhysics" },
				{ "TG_DuringPhysics.ToolTip", "Any item that can be run in parallel with our physics simulation work." },
				{ "TG_EndPhysics.Comment", "/** Special tick group that ends physics simulation. */" },
				{ "TG_EndPhysics.DisplayName", "End Physics" },
				{ "TG_EndPhysics.Hidden", "" },
				{ "TG_EndPhysics.Name", "TG_EndPhysics" },
				{ "TG_EndPhysics.ToolTip", "Special tick group that ends physics simulation." },
				{ "TG_LastDemotable.Comment", "/** Catchall for anything demoted to the end. */" },
				{ "TG_LastDemotable.DisplayName", "Last Demotable" },
				{ "TG_LastDemotable.Hidden", "" },
				{ "TG_LastDemotable.Name", "TG_LastDemotable" },
				{ "TG_LastDemotable.ToolTip", "Catchall for anything demoted to the end." },
				{ "TG_MAX.Name", "TG_MAX" },
				{ "TG_NewlySpawned.Comment", "/** Special tick group that is not actually a tick group. After every tick group this is repeatedly re-run until there are no more newly spawned items to run. */" },
				{ "TG_NewlySpawned.DisplayName", "Newly Spawned" },
				{ "TG_NewlySpawned.Hidden", "" },
				{ "TG_NewlySpawned.Name", "TG_NewlySpawned" },
				{ "TG_NewlySpawned.ToolTip", "Special tick group that is not actually a tick group. After every tick group this is repeatedly re-run until there are no more newly spawned items to run." },
				{ "TG_PostPhysics.Comment", "/** Any item that needs rigid body and cloth simulation to be complete before being executed. */" },
				{ "TG_PostPhysics.DisplayName", "Post Physics" },
				{ "TG_PostPhysics.Name", "TG_PostPhysics" },
				{ "TG_PostPhysics.ToolTip", "Any item that needs rigid body and cloth simulation to be complete before being executed." },
				{ "TG_PostUpdateWork.Comment", "/** Any item that needs the update work to be done before being ticked. */" },
				{ "TG_PostUpdateWork.DisplayName", "Post Update Work" },
				{ "TG_PostUpdateWork.Name", "TG_PostUpdateWork" },
				{ "TG_PostUpdateWork.ToolTip", "Any item that needs the update work to be done before being ticked." },
				{ "TG_PrePhysics.Comment", "/** Any item that needs to be executed before physics simulation starts. */" },
				{ "TG_PrePhysics.DisplayName", "Pre Physics" },
				{ "TG_PrePhysics.Name", "TG_PrePhysics" },
				{ "TG_PrePhysics.ToolTip", "Any item that needs to be executed before physics simulation starts." },
				{ "TG_StartPhysics.Comment", "/** Special tick group that starts physics simulation. */" },
				{ "TG_StartPhysics.DisplayName", "Start Physics" },
				{ "TG_StartPhysics.Hidden", "" },
				{ "TG_StartPhysics.Name", "TG_StartPhysics" },
				{ "TG_StartPhysics.ToolTip", "Special tick group that starts physics simulation." },
				{ "ToolTip", "Determines which ticking group a tick function belongs to." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"ETickingGroup",
				"ETickingGroup",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EMouseLockMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EMouseLockMode, Z_Construct_UPackage__Script_Engine(), TEXT("EMouseLockMode"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EMouseLockMode>()
	{
		return EMouseLockMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMouseLockMode(EMouseLockMode_StaticEnum, TEXT("/Script/Engine"), TEXT("EMouseLockMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EMouseLockMode_Hash() { return 486439090U; }
	UEnum* Z_Construct_UEnum_Engine_EMouseLockMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMouseLockMode"), 0, Get_Z_Construct_UEnum_Engine_EMouseLockMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EMouseLockMode::DoNotLock", (int64)EMouseLockMode::DoNotLock },
				{ "EMouseLockMode::LockOnCapture", (int64)EMouseLockMode::LockOnCapture },
				{ "EMouseLockMode::LockAlways", (int64)EMouseLockMode::LockAlways },
				{ "EMouseLockMode::LockInFullscreen", (int64)EMouseLockMode::LockInFullscreen },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "DoNotLock.Comment", "/** Do not lock the mouse cursor to the viewport */" },
				{ "DoNotLock.Name", "EMouseLockMode::DoNotLock" },
				{ "DoNotLock.ToolTip", "Do not lock the mouse cursor to the viewport" },
				{ "LockAlways.Comment", "/** Always lock the mouse cursor to the viewport */" },
				{ "LockAlways.Name", "EMouseLockMode::LockAlways" },
				{ "LockAlways.ToolTip", "Always lock the mouse cursor to the viewport" },
				{ "LockInFullscreen.Comment", "/** Lock the cursor if we're in fullscreen */" },
				{ "LockInFullscreen.Name", "EMouseLockMode::LockInFullscreen" },
				{ "LockInFullscreen.ToolTip", "Lock the cursor if we're in fullscreen" },
				{ "LockOnCapture.Comment", "/** Only lock the mouse cursor to the viewport when the mouse is captured */" },
				{ "LockOnCapture.Name", "EMouseLockMode::LockOnCapture" },
				{ "LockOnCapture.ToolTip", "Only lock the mouse cursor to the viewport when the mouse is captured" },
				{ "ModuleRelativePath", "Classes/Engine/EngineBaseTypes.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"EMouseLockMode",
				"EMouseLockMode",
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
	static UEnum* EMouseCaptureMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EMouseCaptureMode, Z_Construct_UPackage__Script_Engine(), TEXT("EMouseCaptureMode"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EMouseCaptureMode>()
	{
		return EMouseCaptureMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMouseCaptureMode(EMouseCaptureMode_StaticEnum, TEXT("/Script/Engine"), TEXT("EMouseCaptureMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EMouseCaptureMode_Hash() { return 3740396401U; }
	UEnum* Z_Construct_UEnum_Engine_EMouseCaptureMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMouseCaptureMode"), 0, Get_Z_Construct_UEnum_Engine_EMouseCaptureMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EMouseCaptureMode::NoCapture", (int64)EMouseCaptureMode::NoCapture },
				{ "EMouseCaptureMode::CapturePermanently", (int64)EMouseCaptureMode::CapturePermanently },
				{ "EMouseCaptureMode::CapturePermanently_IncludingInitialMouseDown", (int64)EMouseCaptureMode::CapturePermanently_IncludingInitialMouseDown },
				{ "EMouseCaptureMode::CaptureDuringMouseDown", (int64)EMouseCaptureMode::CaptureDuringMouseDown },
				{ "EMouseCaptureMode::CaptureDuringRightMouseDown", (int64)EMouseCaptureMode::CaptureDuringRightMouseDown },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "CaptureDuringMouseDown.Comment", "/** Capture the mouse during a mouse down, releases on mouse up */" },
				{ "CaptureDuringMouseDown.Name", "EMouseCaptureMode::CaptureDuringMouseDown" },
				{ "CaptureDuringMouseDown.ToolTip", "Capture the mouse during a mouse down, releases on mouse up" },
				{ "CaptureDuringRightMouseDown.Comment", "/** Capture only when the right mouse button is down, not any of the other mouse buttons */" },
				{ "CaptureDuringRightMouseDown.Name", "EMouseCaptureMode::CaptureDuringRightMouseDown" },
				{ "CaptureDuringRightMouseDown.ToolTip", "Capture only when the right mouse button is down, not any of the other mouse buttons" },
				{ "CapturePermanently.Comment", "/** Capture the mouse permanently when the viewport is clicked, and consume the initial mouse down that caused the capture so it isn't processed by player input */" },
				{ "CapturePermanently.Name", "EMouseCaptureMode::CapturePermanently" },
				{ "CapturePermanently.ToolTip", "Capture the mouse permanently when the viewport is clicked, and consume the initial mouse down that caused the capture so it isn't processed by player input" },
				{ "CapturePermanently_IncludingInitialMouseDown.Comment", "/** Capture the mouse permanently when the viewport is clicked, and allow player input to process the mouse down that caused the capture */" },
				{ "CapturePermanently_IncludingInitialMouseDown.Name", "EMouseCaptureMode::CapturePermanently_IncludingInitialMouseDown" },
				{ "CapturePermanently_IncludingInitialMouseDown.ToolTip", "Capture the mouse permanently when the viewport is clicked, and allow player input to process the mouse down that caused the capture" },
				{ "ModuleRelativePath", "Classes/Engine/EngineBaseTypes.h" },
				{ "NoCapture.Comment", "/** Do not capture the mouse at all */" },
				{ "NoCapture.Name", "EMouseCaptureMode::NoCapture" },
				{ "NoCapture.ToolTip", "Do not capture the mouse at all" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"EMouseCaptureMode",
				"EMouseCaptureMode",
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
	static UEnum* EInputEvent_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EInputEvent, Z_Construct_UPackage__Script_Engine(), TEXT("EInputEvent"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EInputEvent>()
	{
		return EInputEvent_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EInputEvent(EInputEvent_StaticEnum, TEXT("/Script/Engine"), TEXT("EInputEvent"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EInputEvent_Hash() { return 2537953814U; }
	UEnum* Z_Construct_UEnum_Engine_EInputEvent()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EInputEvent"), 0, Get_Z_Construct_UEnum_Engine_EInputEvent_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "IE_Pressed", (int64)IE_Pressed },
				{ "IE_Released", (int64)IE_Released },
				{ "IE_Repeat", (int64)IE_Repeat },
				{ "IE_DoubleClick", (int64)IE_DoubleClick },
				{ "IE_Axis", (int64)IE_Axis },
				{ "IE_MAX", (int64)IE_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "//\n//\x09""EInputEvent\n//\n" },
				{ "IE_Axis.Name", "IE_Axis" },
				{ "IE_DoubleClick.Name", "IE_DoubleClick" },
				{ "IE_MAX.Name", "IE_MAX" },
				{ "IE_Pressed.Name", "IE_Pressed" },
				{ "IE_Released.Name", "IE_Released" },
				{ "IE_Repeat.Name", "IE_Repeat" },
				{ "ModuleRelativePath", "Classes/Engine/EngineBaseTypes.h" },
				{ "ScriptName", "InputEventType" },
				{ "ToolTip", "EInputEvent" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"EInputEvent",
				"EInputEvent",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FExposureSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FExposureSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FExposureSettings, Z_Construct_UPackage__Script_Engine(), TEXT("ExposureSettings"), sizeof(FExposureSettings), Get_Z_Construct_UScriptStruct_FExposureSettings_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FExposureSettings>()
{
	return FExposureSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FExposureSettings(FExposureSettings::StaticStruct, TEXT("/Script/Engine"), TEXT("ExposureSettings"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFExposureSettings
{
	FScriptStruct_Engine_StaticRegisterNativesFExposureSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ExposureSettings")),new UScriptStruct::TCppStructOps<FExposureSettings>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFExposureSettings;
	struct Z_Construct_UScriptStruct_FExposureSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bFixed_MetaData[];
#endif
		static void NewProp_bFixed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFixed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FixedEV100_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FixedEV100;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExposureSettings_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Settings to allow designers to override the automatic expose */" },
		{ "ModuleRelativePath", "Classes/Engine/EngineBaseTypes.h" },
		{ "ToolTip", "Settings to allow designers to override the automatic expose" },
	};
#endif
	void* Z_Construct_UScriptStruct_FExposureSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FExposureSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExposureSettings_Statics::NewProp_bFixed_MetaData[] = {
		{ "Comment", "// true: fixed exposure using the LogOffset value, false: automatic eye adaptation\n" },
		{ "ModuleRelativePath", "Classes/Engine/EngineBaseTypes.h" },
		{ "ToolTip", "true: fixed exposure using the LogOffset value, false: automatic eye adaptation" },
	};
#endif
	void Z_Construct_UScriptStruct_FExposureSettings_Statics::NewProp_bFixed_SetBit(void* Obj)
	{
		((FExposureSettings*)Obj)->bFixed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FExposureSettings_Statics::NewProp_bFixed = { "bFixed", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FExposureSettings), &Z_Construct_UScriptStruct_FExposureSettings_Statics::NewProp_bFixed_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FExposureSettings_Statics::NewProp_bFixed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExposureSettings_Statics::NewProp_bFixed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExposureSettings_Statics::NewProp_FixedEV100_MetaData[] = {
		{ "Comment", "// EV100 settings for fixed mode\n" },
		{ "ModuleRelativePath", "Classes/Engine/EngineBaseTypes.h" },
		{ "ToolTip", "EV100 settings for fixed mode" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FExposureSettings_Statics::NewProp_FixedEV100 = { "FixedEV100", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FExposureSettings, FixedEV100), METADATA_PARAMS(Z_Construct_UScriptStruct_FExposureSettings_Statics::NewProp_FixedEV100_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExposureSettings_Statics::NewProp_FixedEV100_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FExposureSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExposureSettings_Statics::NewProp_bFixed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExposureSettings_Statics::NewProp_FixedEV100,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FExposureSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"ExposureSettings",
		sizeof(FExposureSettings),
		alignof(FExposureSettings),
		Z_Construct_UScriptStruct_FExposureSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExposureSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FExposureSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExposureSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FExposureSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FExposureSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ExposureSettings"), sizeof(FExposureSettings), Get_Z_Construct_UScriptStruct_FExposureSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FExposureSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FExposureSettings_Hash() { return 284040283U; }
class UScriptStruct* FURL::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FURL_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FURL, Z_Construct_UPackage__Script_Engine(), TEXT("URL"), sizeof(FURL), Get_Z_Construct_UScriptStruct_FURL_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FURL>()
{
	return FURL::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FURL(FURL::StaticStruct, TEXT("/Script/Engine"), TEXT("URL"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFURL
{
	FScriptStruct_Engine_StaticRegisterNativesFURL()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("URL")),new UScriptStruct::TCppStructOps<FURL>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFURL;
	struct Z_Construct_UScriptStruct_FURL_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Portal_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Portal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Op_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Op;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Op_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RedirectURL_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_RedirectURL;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Map_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Map;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Valid_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Valid;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Port_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Port;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Host_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Host;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Protocol_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Protocol;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FURL_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "//URL structure.\n" },
		{ "ModuleRelativePath", "Classes/Engine/EngineBaseTypes.h" },
		{ "ToolTip", "URL structure." },
	};
#endif
	void* Z_Construct_UScriptStruct_FURL_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FURL>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FURL_Statics::NewProp_Portal_MetaData[] = {
		{ "Comment", "// Portal to enter through, default is \"\".\n" },
		{ "ModuleRelativePath", "Classes/Engine/EngineBaseTypes.h" },
		{ "ToolTip", "Portal to enter through, default is \"\"." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FURL_Statics::NewProp_Portal = { "Portal", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FURL, Portal), METADATA_PARAMS(Z_Construct_UScriptStruct_FURL_Statics::NewProp_Portal_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FURL_Statics::NewProp_Portal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FURL_Statics::NewProp_Op_MetaData[] = {
		{ "Comment", "// Options.\n" },
		{ "ModuleRelativePath", "Classes/Engine/EngineBaseTypes.h" },
		{ "ToolTip", "Options." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FURL_Statics::NewProp_Op = { "Op", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FURL, Op), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FURL_Statics::NewProp_Op_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FURL_Statics::NewProp_Op_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FURL_Statics::NewProp_Op_Inner = { "Op", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FURL_Statics::NewProp_RedirectURL_MetaData[] = {
		{ "Comment", "// Optional place to download Map if client does not possess it\n" },
		{ "ModuleRelativePath", "Classes/Engine/EngineBaseTypes.h" },
		{ "ToolTip", "Optional place to download Map if client does not possess it" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FURL_Statics::NewProp_RedirectURL = { "RedirectURL", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FURL, RedirectURL), METADATA_PARAMS(Z_Construct_UScriptStruct_FURL_Statics::NewProp_RedirectURL_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FURL_Statics::NewProp_RedirectURL_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FURL_Statics::NewProp_Map_MetaData[] = {
		{ "Comment", "// Map name, i.e. \"SkyCity\", default is \"Entry\".\n" },
		{ "ModuleRelativePath", "Classes/Engine/EngineBaseTypes.h" },
		{ "ToolTip", "Map name, i.e. \"SkyCity\", default is \"Entry\"." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FURL_Statics::NewProp_Map = { "Map", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FURL, Map), METADATA_PARAMS(Z_Construct_UScriptStruct_FURL_Statics::NewProp_Map_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FURL_Statics::NewProp_Map_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FURL_Statics::NewProp_Valid_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/EngineBaseTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FURL_Statics::NewProp_Valid = { "Valid", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FURL, Valid), METADATA_PARAMS(Z_Construct_UScriptStruct_FURL_Statics::NewProp_Valid_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FURL_Statics::NewProp_Valid_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FURL_Statics::NewProp_Port_MetaData[] = {
		{ "Comment", "// Optional host port.\n" },
		{ "ModuleRelativePath", "Classes/Engine/EngineBaseTypes.h" },
		{ "ToolTip", "Optional host port." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FURL_Statics::NewProp_Port = { "Port", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FURL, Port), METADATA_PARAMS(Z_Construct_UScriptStruct_FURL_Statics::NewProp_Port_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FURL_Statics::NewProp_Port_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FURL_Statics::NewProp_Host_MetaData[] = {
		{ "Comment", "// Optional hostname, i.e. \"204.157.115.40\" or \"unreal.epicgames.com\", blank if local.\n" },
		{ "ModuleRelativePath", "Classes/Engine/EngineBaseTypes.h" },
		{ "ToolTip", "Optional hostname, i.e. \"204.157.115.40\" or \"unreal.epicgames.com\", blank if local." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FURL_Statics::NewProp_Host = { "Host", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FURL, Host), METADATA_PARAMS(Z_Construct_UScriptStruct_FURL_Statics::NewProp_Host_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FURL_Statics::NewProp_Host_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FURL_Statics::NewProp_Protocol_MetaData[] = {
		{ "Comment", "// Protocol, i.e. \"unreal\" or \"http\".\n" },
		{ "ModuleRelativePath", "Classes/Engine/EngineBaseTypes.h" },
		{ "ToolTip", "Protocol, i.e. \"unreal\" or \"http\"." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FURL_Statics::NewProp_Protocol = { "Protocol", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FURL, Protocol), METADATA_PARAMS(Z_Construct_UScriptStruct_FURL_Statics::NewProp_Protocol_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FURL_Statics::NewProp_Protocol_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FURL_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FURL_Statics::NewProp_Portal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FURL_Statics::NewProp_Op,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FURL_Statics::NewProp_Op_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FURL_Statics::NewProp_RedirectURL,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FURL_Statics::NewProp_Map,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FURL_Statics::NewProp_Valid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FURL_Statics::NewProp_Port,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FURL_Statics::NewProp_Host,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FURL_Statics::NewProp_Protocol,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FURL_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"URL",
		sizeof(FURL),
		alignof(FURL),
		Z_Construct_UScriptStruct_FURL_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FURL_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FURL_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FURL_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FURL()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FURL_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("URL"), sizeof(FURL), Get_Z_Construct_UScriptStruct_FURL_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FURL_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FURL_Hash() { return 720733825U; }
class UScriptStruct* FActorComponentTickFunction::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FActorComponentTickFunction_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FActorComponentTickFunction, Z_Construct_UPackage__Script_Engine(), TEXT("ActorComponentTickFunction"), sizeof(FActorComponentTickFunction), Get_Z_Construct_UScriptStruct_FActorComponentTickFunction_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FActorComponentTickFunction>()
{
	return FActorComponentTickFunction::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FActorComponentTickFunction(FActorComponentTickFunction::StaticStruct, TEXT("/Script/Engine"), TEXT("ActorComponentTickFunction"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFActorComponentTickFunction
{
	FScriptStruct_Engine_StaticRegisterNativesFActorComponentTickFunction()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ActorComponentTickFunction")),new UScriptStruct::TCppStructOps<FActorComponentTickFunction>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFActorComponentTickFunction;
	struct Z_Construct_UScriptStruct_FActorComponentTickFunction_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActorComponentTickFunction_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** \n* Tick function that calls UActorComponent::ConditionalTick\n**/" },
		{ "ModuleRelativePath", "Classes/Engine/EngineBaseTypes.h" },
		{ "ToolTip", "Tick function that calls UActorComponent::ConditionalTick" },
	};
#endif
	void* Z_Construct_UScriptStruct_FActorComponentTickFunction_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FActorComponentTickFunction>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FActorComponentTickFunction_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		Z_Construct_UScriptStruct_FTickFunction,
		&NewStructOps,
		"ActorComponentTickFunction",
		sizeof(FActorComponentTickFunction),
		alignof(FActorComponentTickFunction),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FActorComponentTickFunction_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorComponentTickFunction_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FActorComponentTickFunction()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FActorComponentTickFunction_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ActorComponentTickFunction"), sizeof(FActorComponentTickFunction), Get_Z_Construct_UScriptStruct_FActorComponentTickFunction_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FActorComponentTickFunction_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FActorComponentTickFunction_Hash() { return 1447739516U; }
class UScriptStruct* FActorTickFunction::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FActorTickFunction_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FActorTickFunction, Z_Construct_UPackage__Script_Engine(), TEXT("ActorTickFunction"), sizeof(FActorTickFunction), Get_Z_Construct_UScriptStruct_FActorTickFunction_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FActorTickFunction>()
{
	return FActorTickFunction::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FActorTickFunction(FActorTickFunction::StaticStruct, TEXT("/Script/Engine"), TEXT("ActorTickFunction"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFActorTickFunction
{
	FScriptStruct_Engine_StaticRegisterNativesFActorTickFunction()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ActorTickFunction")),new UScriptStruct::TCppStructOps<FActorTickFunction>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFActorTickFunction;
	struct Z_Construct_UScriptStruct_FActorTickFunction_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActorTickFunction_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** \n* Tick function that calls AActor::TickActor\n**/" },
		{ "ModuleRelativePath", "Classes/Engine/EngineBaseTypes.h" },
		{ "ToolTip", "Tick function that calls AActor::TickActor" },
	};
#endif
	void* Z_Construct_UScriptStruct_FActorTickFunction_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FActorTickFunction>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FActorTickFunction_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		Z_Construct_UScriptStruct_FTickFunction,
		&NewStructOps,
		"ActorTickFunction",
		sizeof(FActorTickFunction),
		alignof(FActorTickFunction),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FActorTickFunction_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorTickFunction_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FActorTickFunction()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FActorTickFunction_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ActorTickFunction"), sizeof(FActorTickFunction), Get_Z_Construct_UScriptStruct_FActorTickFunction_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FActorTickFunction_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FActorTickFunction_Hash() { return 2718222657U; }
class UScriptStruct* FTickFunction::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FTickFunction_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTickFunction, Z_Construct_UPackage__Script_Engine(), TEXT("TickFunction"), sizeof(FTickFunction), Get_Z_Construct_UScriptStruct_FTickFunction_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FTickFunction>()
{
	return FTickFunction::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTickFunction(FTickFunction::StaticStruct, TEXT("/Script/Engine"), TEXT("TickFunction"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFTickFunction
{
	FScriptStruct_Engine_StaticRegisterNativesFTickFunction()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("TickFunction")),new UScriptStruct::TCppStructOps<FTickFunction>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFTickFunction;
	struct Z_Construct_UScriptStruct_FTickFunction_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TickInterval_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TickInterval;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAllowTickOnDedicatedServer_MetaData[];
#endif
		static void NewProp_bAllowTickOnDedicatedServer_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowTickOnDedicatedServer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bStartWithTickEnabled_MetaData[];
#endif
		static void NewProp_bStartWithTickEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bStartWithTickEnabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCanEverTick_MetaData[];
#endif
		static void NewProp_bCanEverTick_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCanEverTick;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bTickEvenWhenPaused_MetaData[];
#endif
		static void NewProp_bTickEvenWhenPaused_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTickEvenWhenPaused;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EndTickGroup_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EndTickGroup;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TickGroup_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TickGroup;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTickFunction_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** \n* Abstract Base class for all tick functions.\n**/" },
		{ "ModuleRelativePath", "Classes/Engine/EngineBaseTypes.h" },
		{ "ToolTip", "Abstract Base class for all tick functions." },
	};
#endif
	void* Z_Construct_UScriptStruct_FTickFunction_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTickFunction>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTickFunction_Statics::NewProp_TickInterval_MetaData[] = {
		{ "Category", "Tick" },
		{ "Comment", "/** The frequency in seconds at which this tick function will be executed.  If less than or equal to 0 then it will tick every frame */" },
		{ "DisplayName", "Tick Interval (secs)" },
		{ "ModuleRelativePath", "Classes/Engine/EngineBaseTypes.h" },
		{ "ToolTip", "The frequency in seconds at which this tick function will be executed.  If less than or equal to 0 then it will tick every frame" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTickFunction_Statics::NewProp_TickInterval = { "TickInterval", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTickFunction, TickInterval), METADATA_PARAMS(Z_Construct_UScriptStruct_FTickFunction_Statics::NewProp_TickInterval_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTickFunction_Statics::NewProp_TickInterval_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTickFunction_Statics::NewProp_bAllowTickOnDedicatedServer_MetaData[] = {
		{ "Category", "Tick" },
		{ "Comment", "/** If we allow this tick to run on a dedicated server */" },
		{ "ModuleRelativePath", "Classes/Engine/EngineBaseTypes.h" },
		{ "ToolTip", "If we allow this tick to run on a dedicated server" },
	};
#endif
	void Z_Construct_UScriptStruct_FTickFunction_Statics::NewProp_bAllowTickOnDedicatedServer_SetBit(void* Obj)
	{
		((FTickFunction*)Obj)->bAllowTickOnDedicatedServer = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTickFunction_Statics::NewProp_bAllowTickOnDedicatedServer = { "bAllowTickOnDedicatedServer", nullptr, (EPropertyFlags)0x0010040000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FTickFunction), &Z_Construct_UScriptStruct_FTickFunction_Statics::NewProp_bAllowTickOnDedicatedServer_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FTickFunction_Statics::NewProp_bAllowTickOnDedicatedServer_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTickFunction_Statics::NewProp_bAllowTickOnDedicatedServer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTickFunction_Statics::NewProp_bStartWithTickEnabled_MetaData[] = {
		{ "Category", "Tick" },
		{ "Comment", "/** If true, this tick function will start enabled, but can be disabled later on. */" },
		{ "ModuleRelativePath", "Classes/Engine/EngineBaseTypes.h" },
		{ "ToolTip", "If true, this tick function will start enabled, but can be disabled later on." },
	};
#endif
	void Z_Construct_UScriptStruct_FTickFunction_Statics::NewProp_bStartWithTickEnabled_SetBit(void* Obj)
	{
		((FTickFunction*)Obj)->bStartWithTickEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTickFunction_Statics::NewProp_bStartWithTickEnabled = { "bStartWithTickEnabled", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FTickFunction), &Z_Construct_UScriptStruct_FTickFunction_Statics::NewProp_bStartWithTickEnabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FTickFunction_Statics::NewProp_bStartWithTickEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTickFunction_Statics::NewProp_bStartWithTickEnabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTickFunction_Statics::NewProp_bCanEverTick_MetaData[] = {
		{ "Comment", "/** If false, this tick function will never be registered and will never tick. Only settable in defaults. */" },
		{ "ModuleRelativePath", "Classes/Engine/EngineBaseTypes.h" },
		{ "ToolTip", "If false, this tick function will never be registered and will never tick. Only settable in defaults." },
	};
#endif
	void Z_Construct_UScriptStruct_FTickFunction_Statics::NewProp_bCanEverTick_SetBit(void* Obj)
	{
		((FTickFunction*)Obj)->bCanEverTick = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTickFunction_Statics::NewProp_bCanEverTick = { "bCanEverTick", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FTickFunction), &Z_Construct_UScriptStruct_FTickFunction_Statics::NewProp_bCanEverTick_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FTickFunction_Statics::NewProp_bCanEverTick_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTickFunction_Statics::NewProp_bCanEverTick_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTickFunction_Statics::NewProp_bTickEvenWhenPaused_MetaData[] = {
		{ "Category", "Tick" },
		{ "Comment", "/** Bool indicating that this function should execute even if the game is paused. Pause ticks are very limited in capabilities. **/" },
		{ "ModuleRelativePath", "Classes/Engine/EngineBaseTypes.h" },
		{ "ToolTip", "Bool indicating that this function should execute even if the game is paused. Pause ticks are very limited in capabilities. *" },
	};
#endif
	void Z_Construct_UScriptStruct_FTickFunction_Statics::NewProp_bTickEvenWhenPaused_SetBit(void* Obj)
	{
		((FTickFunction*)Obj)->bTickEvenWhenPaused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTickFunction_Statics::NewProp_bTickEvenWhenPaused = { "bTickEvenWhenPaused", nullptr, (EPropertyFlags)0x0010040000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FTickFunction), &Z_Construct_UScriptStruct_FTickFunction_Statics::NewProp_bTickEvenWhenPaused_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FTickFunction_Statics::NewProp_bTickEvenWhenPaused_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTickFunction_Statics::NewProp_bTickEvenWhenPaused_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTickFunction_Statics::NewProp_EndTickGroup_MetaData[] = {
		{ "Category", "Tick" },
		{ "Comment", "/**\n\x09 * Defines the tick group that this tick function must finish in. These groups determine the relative order of when objects tick during a frame update.\n\x09 *\n\x09 * @see ETickingGroup \n\x09 */" },
		{ "ModuleRelativePath", "Classes/Engine/EngineBaseTypes.h" },
		{ "ToolTip", "Defines the tick group that this tick function must finish in. These groups determine the relative order of when objects tick during a frame update.\n\n@see ETickingGroup" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FTickFunction_Statics::NewProp_EndTickGroup = { "EndTickGroup", nullptr, (EPropertyFlags)0x0010040000010001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTickFunction, EndTickGroup), Z_Construct_UEnum_Engine_ETickingGroup, METADATA_PARAMS(Z_Construct_UScriptStruct_FTickFunction_Statics::NewProp_EndTickGroup_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTickFunction_Statics::NewProp_EndTickGroup_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTickFunction_Statics::NewProp_TickGroup_MetaData[] = {
		{ "Category", "Tick" },
		{ "Comment", "/**\n\x09 * Defines the minimum tick group for this tick function. These groups determine the relative order of when objects tick during a frame update.\n\x09 * Given prerequisites, the tick may be delayed.\n\x09 *\n\x09 * @see ETickingGroup \n\x09 * @see FTickFunction::AddPrerequisite()\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Engine/EngineBaseTypes.h" },
		{ "ToolTip", "Defines the minimum tick group for this tick function. These groups determine the relative order of when objects tick during a frame update.\nGiven prerequisites, the tick may be delayed.\n\n@see ETickingGroup\n@see FTickFunction::AddPrerequisite()" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FTickFunction_Statics::NewProp_TickGroup = { "TickGroup", nullptr, (EPropertyFlags)0x0010040000010001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTickFunction, TickGroup), Z_Construct_UEnum_Engine_ETickingGroup, METADATA_PARAMS(Z_Construct_UScriptStruct_FTickFunction_Statics::NewProp_TickGroup_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTickFunction_Statics::NewProp_TickGroup_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTickFunction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTickFunction_Statics::NewProp_TickInterval,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTickFunction_Statics::NewProp_bAllowTickOnDedicatedServer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTickFunction_Statics::NewProp_bStartWithTickEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTickFunction_Statics::NewProp_bCanEverTick,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTickFunction_Statics::NewProp_bTickEvenWhenPaused,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTickFunction_Statics::NewProp_EndTickGroup,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTickFunction_Statics::NewProp_TickGroup,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTickFunction_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"TickFunction",
		sizeof(FTickFunction),
		alignof(FTickFunction),
		Z_Construct_UScriptStruct_FTickFunction_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTickFunction_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTickFunction_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTickFunction_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTickFunction()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTickFunction_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TickFunction"), sizeof(FTickFunction), Get_Z_Construct_UScriptStruct_FTickFunction_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FTickFunction_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTickFunction_Hash() { return 1060912484U; }
class UScriptStruct* FTickPrerequisite::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FTickPrerequisite_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTickPrerequisite, Z_Construct_UPackage__Script_Engine(), TEXT("TickPrerequisite"), sizeof(FTickPrerequisite), Get_Z_Construct_UScriptStruct_FTickPrerequisite_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FTickPrerequisite>()
{
	return FTickPrerequisite::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTickPrerequisite(FTickPrerequisite::StaticStruct, TEXT("/Script/Engine"), TEXT("TickPrerequisite"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFTickPrerequisite
{
	FScriptStruct_Engine_StaticRegisterNativesFTickPrerequisite()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("TickPrerequisite")),new UScriptStruct::TCppStructOps<FTickPrerequisite>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFTickPrerequisite;
	struct Z_Construct_UScriptStruct_FTickPrerequisite_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTickPrerequisite_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * This is small structure to hold prerequisite tick functions\n */" },
		{ "ModuleRelativePath", "Classes/Engine/EngineBaseTypes.h" },
		{ "ToolTip", "This is small structure to hold prerequisite tick functions" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTickPrerequisite_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTickPrerequisite>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTickPrerequisite_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"TickPrerequisite",
		sizeof(FTickPrerequisite),
		alignof(FTickPrerequisite),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTickPrerequisite_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTickPrerequisite_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTickPrerequisite()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTickPrerequisite_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TickPrerequisite"), sizeof(FTickPrerequisite), Get_Z_Construct_UScriptStruct_FTickPrerequisite_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FTickPrerequisite_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTickPrerequisite_Hash() { return 3610949348U; }
	void UViewModeUtils::StaticRegisterNativesUViewModeUtils()
	{
	}
	UClass* Z_Construct_UClass_UViewModeUtils_NoRegister()
	{
		return UViewModeUtils::StaticClass();
	}
	struct Z_Construct_UClass_UViewModeUtils_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UViewModeUtils_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UViewModeUtils_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Class containing a static util function to help with EViewModeIndex\n */" },
		{ "IncludePath", "Engine/EngineBaseTypes.h" },
		{ "ModuleRelativePath", "Classes/Engine/EngineBaseTypes.h" },
		{ "ToolTip", "Class containing a static util function to help with EViewModeIndex" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UViewModeUtils_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UViewModeUtils>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UViewModeUtils_Statics::ClassParams = {
		&UViewModeUtils::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UViewModeUtils_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UViewModeUtils_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UViewModeUtils()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UViewModeUtils_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UViewModeUtils, 2022174815);
	template<> ENGINE_API UClass* StaticClass<UViewModeUtils>()
	{
		return UViewModeUtils::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UViewModeUtils(Z_Construct_UClass_UViewModeUtils, &UViewModeUtils::StaticClass, TEXT("/Script/Engine"), TEXT("UViewModeUtils"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UViewModeUtils);
	void UEngineBaseTypes::StaticRegisterNativesUEngineBaseTypes()
	{
	}
	UClass* Z_Construct_UClass_UEngineBaseTypes_NoRegister()
	{
		return UEngineBaseTypes::StaticClass();
	}
	struct Z_Construct_UClass_UEngineBaseTypes_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEngineBaseTypes_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEngineBaseTypes_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Engine/EngineBaseTypes.h" },
		{ "ModuleRelativePath", "Classes/Engine/EngineBaseTypes.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEngineBaseTypes_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEngineBaseTypes>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEngineBaseTypes_Statics::ClassParams = {
		&UEngineBaseTypes::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UEngineBaseTypes_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEngineBaseTypes_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEngineBaseTypes()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEngineBaseTypes_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEngineBaseTypes, 2897594507);
	template<> ENGINE_API UClass* StaticClass<UEngineBaseTypes>()
	{
		return UEngineBaseTypes::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEngineBaseTypes(Z_Construct_UClass_UEngineBaseTypes, &UEngineBaseTypes::StaticClass, TEXT("/Script/Engine"), TEXT("UEngineBaseTypes"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEngineBaseTypes);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
