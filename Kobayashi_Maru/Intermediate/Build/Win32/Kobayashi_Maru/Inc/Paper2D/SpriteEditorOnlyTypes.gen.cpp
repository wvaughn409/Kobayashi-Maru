// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Paper2D/Classes/SpriteEditorOnlyTypes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpriteEditorOnlyTypes() {}
// Cross Module References
	PAPER2D_API UEnum* Z_Construct_UEnum_Paper2D_ESpritePivotMode();
	UPackage* Z_Construct_UPackage__Script_Paper2D();
	PAPER2D_API UEnum* Z_Construct_UEnum_Paper2D_ESpritePolygonMode();
	PAPER2D_API UEnum* Z_Construct_UEnum_Paper2D_ESpriteShapeType();
	PAPER2D_API UEnum* Z_Construct_UEnum_Paper2D_ESpriteCollisionMode();
	PAPER2D_API UScriptStruct* Z_Construct_UScriptStruct_FSpriteAssetInitParameters();
	PAPER2D_API UScriptStruct* Z_Construct_UScriptStruct_FSpriteGeometryCollection();
	PAPER2D_API UScriptStruct* Z_Construct_UScriptStruct_FSpriteGeometryShape();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
// End Cross Module References
	static UEnum* ESpritePivotMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Paper2D_ESpritePivotMode, Z_Construct_UPackage__Script_Paper2D(), TEXT("ESpritePivotMode"));
		}
		return Singleton;
	}
	template<> PAPER2D_API UEnum* StaticEnum<ESpritePivotMode::Type>()
	{
		return ESpritePivotMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESpritePivotMode(ESpritePivotMode_StaticEnum, TEXT("/Script/Paper2D"), TEXT("ESpritePivotMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Paper2D_ESpritePivotMode_Hash() { return 3806564974U; }
	UEnum* Z_Construct_UEnum_Paper2D_ESpritePivotMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Paper2D();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESpritePivotMode"), 0, Get_Z_Construct_UEnum_Paper2D_ESpritePivotMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESpritePivotMode::Top_Left", (int64)ESpritePivotMode::Top_Left },
				{ "ESpritePivotMode::Top_Center", (int64)ESpritePivotMode::Top_Center },
				{ "ESpritePivotMode::Top_Right", (int64)ESpritePivotMode::Top_Right },
				{ "ESpritePivotMode::Center_Left", (int64)ESpritePivotMode::Center_Left },
				{ "ESpritePivotMode::Center_Center", (int64)ESpritePivotMode::Center_Center },
				{ "ESpritePivotMode::Center_Right", (int64)ESpritePivotMode::Center_Right },
				{ "ESpritePivotMode::Bottom_Left", (int64)ESpritePivotMode::Bottom_Left },
				{ "ESpritePivotMode::Bottom_Center", (int64)ESpritePivotMode::Bottom_Center },
				{ "ESpritePivotMode::Bottom_Right", (int64)ESpritePivotMode::Bottom_Right },
				{ "ESpritePivotMode::Custom", (int64)ESpritePivotMode::Custom },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Bottom_Center.Name", "ESpritePivotMode::Bottom_Center" },
				{ "Bottom_Left.Name", "ESpritePivotMode::Bottom_Left" },
				{ "Bottom_Right.Name", "ESpritePivotMode::Bottom_Right" },
				{ "Center_Center.Name", "ESpritePivotMode::Center_Center" },
				{ "Center_Left.Name", "ESpritePivotMode::Center_Left" },
				{ "Center_Right.Name", "ESpritePivotMode::Center_Right" },
				{ "Custom.Name", "ESpritePivotMode::Custom" },
				{ "ModuleRelativePath", "Classes/SpriteEditorOnlyTypes.h" },
				{ "Top_Center.Name", "ESpritePivotMode::Top_Center" },
				{ "Top_Left.Name", "ESpritePivotMode::Top_Left" },
				{ "Top_Right.Name", "ESpritePivotMode::Top_Right" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Paper2D,
				nullptr,
				"ESpritePivotMode",
				"ESpritePivotMode::Type",
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
	static UEnum* ESpritePolygonMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Paper2D_ESpritePolygonMode, Z_Construct_UPackage__Script_Paper2D(), TEXT("ESpritePolygonMode"));
		}
		return Singleton;
	}
	template<> PAPER2D_API UEnum* StaticEnum<ESpritePolygonMode::Type>()
	{
		return ESpritePolygonMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESpritePolygonMode(ESpritePolygonMode_StaticEnum, TEXT("/Script/Paper2D"), TEXT("ESpritePolygonMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Paper2D_ESpritePolygonMode_Hash() { return 3516228218U; }
	UEnum* Z_Construct_UEnum_Paper2D_ESpritePolygonMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Paper2D();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESpritePolygonMode"), 0, Get_Z_Construct_UEnum_Paper2D_ESpritePolygonMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESpritePolygonMode::SourceBoundingBox", (int64)ESpritePolygonMode::SourceBoundingBox },
				{ "ESpritePolygonMode::TightBoundingBox", (int64)ESpritePolygonMode::TightBoundingBox },
				{ "ESpritePolygonMode::ShrinkWrapped", (int64)ESpritePolygonMode::ShrinkWrapped },
				{ "ESpritePolygonMode::FullyCustom", (int64)ESpritePolygonMode::FullyCustom },
				{ "ESpritePolygonMode::Diced", (int64)ESpritePolygonMode::Diced },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Comment", "// Method of specifying polygons for a sprite's render or collision data\n" },
				{ "Diced.Comment", "/** Diced (split up into smaller squares, including only non-empty ones in the final geometry).  This option is only supported for Render geometry and will be ignored for Collision geometry. */" },
				{ "Diced.Name", "ESpritePolygonMode::Diced" },
				{ "Diced.ToolTip", "Diced (split up into smaller squares, including only non-empty ones in the final geometry).  This option is only supported for Render geometry and will be ignored for Collision geometry." },
				{ "FullyCustom.Comment", "/** Fully custom geometry; edited by hand */" },
				{ "FullyCustom.Name", "ESpritePolygonMode::FullyCustom" },
				{ "FullyCustom.ToolTip", "Fully custom geometry; edited by hand" },
				{ "ModuleRelativePath", "Classes/SpriteEditorOnlyTypes.h" },
				{ "ShrinkWrapped.Comment", "/** Shrink-wrapped geometry */" },
				{ "ShrinkWrapped.Name", "ESpritePolygonMode::ShrinkWrapped" },
				{ "ShrinkWrapped.ToolTip", "Shrink-wrapped geometry" },
				{ "SourceBoundingBox.Comment", "/** Use the bounding box of the source sprite (no optimization) */" },
				{ "SourceBoundingBox.Name", "ESpritePolygonMode::SourceBoundingBox" },
				{ "SourceBoundingBox.ToolTip", "Use the bounding box of the source sprite (no optimization)" },
				{ "TightBoundingBox.Comment", "/** Tighten the bounding box around the sprite to exclude fully transparent areas (the default) */" },
				{ "TightBoundingBox.Name", "ESpritePolygonMode::TightBoundingBox" },
				{ "TightBoundingBox.ToolTip", "Tighten the bounding box around the sprite to exclude fully transparent areas (the default)" },
				{ "ToolTip", "Method of specifying polygons for a sprite's render or collision data" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Paper2D,
				nullptr,
				"ESpritePolygonMode",
				"ESpritePolygonMode::Type",
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
	static UEnum* ESpriteShapeType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Paper2D_ESpriteShapeType, Z_Construct_UPackage__Script_Paper2D(), TEXT("ESpriteShapeType"));
		}
		return Singleton;
	}
	template<> PAPER2D_API UEnum* StaticEnum<ESpriteShapeType>()
	{
		return ESpriteShapeType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESpriteShapeType(ESpriteShapeType_StaticEnum, TEXT("/Script/Paper2D"), TEXT("ESpriteShapeType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Paper2D_ESpriteShapeType_Hash() { return 3623082989U; }
	UEnum* Z_Construct_UEnum_Paper2D_ESpriteShapeType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Paper2D();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESpriteShapeType"), 0, Get_Z_Construct_UEnum_Paper2D_ESpriteShapeType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESpriteShapeType::Box", (int64)ESpriteShapeType::Box },
				{ "ESpriteShapeType::Circle", (int64)ESpriteShapeType::Circle },
				{ "ESpriteShapeType::Polygon", (int64)ESpriteShapeType::Polygon },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Box.Comment", "/** Box/Rectangular prism (size defined by BoxSize) */" },
				{ "Box.Name", "ESpriteShapeType::Box" },
				{ "Box.ToolTip", "Box/Rectangular prism (size defined by BoxSize)" },
				{ "Circle.Comment", "/** Circle/Sphere (major axis is defined by BoxSize.X, minor axis by BoxSize.Y) */" },
				{ "Circle.Name", "ESpriteShapeType::Circle" },
				{ "Circle.ToolTip", "Circle/Sphere (major axis is defined by BoxSize.X, minor axis by BoxSize.Y)" },
				{ "Comment", "// The type of a shape in a sprite geometry structure\n" },
				{ "ModuleRelativePath", "Classes/SpriteEditorOnlyTypes.h" },
				{ "Polygon.Comment", "/** Custom closed polygon */" },
				{ "Polygon.Name", "ESpriteShapeType::Polygon" },
				{ "Polygon.ToolTip", "Custom closed polygon" },
				{ "ToolTip", "The type of a shape in a sprite geometry structure" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Paper2D,
				nullptr,
				"ESpriteShapeType",
				"ESpriteShapeType",
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
	static UEnum* ESpriteCollisionMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Paper2D_ESpriteCollisionMode, Z_Construct_UPackage__Script_Paper2D(), TEXT("ESpriteCollisionMode"));
		}
		return Singleton;
	}
	template<> PAPER2D_API UEnum* StaticEnum<ESpriteCollisionMode::Type>()
	{
		return ESpriteCollisionMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESpriteCollisionMode(ESpriteCollisionMode_StaticEnum, TEXT("/Script/Paper2D"), TEXT("ESpriteCollisionMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Paper2D_ESpriteCollisionMode_Hash() { return 2252137977U; }
	UEnum* Z_Construct_UEnum_Paper2D_ESpriteCollisionMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Paper2D();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESpriteCollisionMode"), 0, Get_Z_Construct_UEnum_Paper2D_ESpriteCollisionMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESpriteCollisionMode::None", (int64)ESpriteCollisionMode::None },
				{ "ESpriteCollisionMode::Use2DPhysics", (int64)ESpriteCollisionMode::Use2DPhysics },
				{ "ESpriteCollisionMode::Use3DPhysics", (int64)ESpriteCollisionMode::Use3DPhysics },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Comment", "// The kind of collision that a Paper2D asset or component might participate in\n" },
				{ "ModuleRelativePath", "Classes/SpriteEditorOnlyTypes.h" },
				{ "None.Comment", "/** Should this have no collison and not participate in physics? */" },
				{ "None.Name", "ESpriteCollisionMode::None" },
				{ "None.ToolTip", "Should this have no collison and not participate in physics?" },
				{ "ToolTip", "The kind of collision that a Paper2D asset or component might participate in" },
				{ "Use2DPhysics.DisplayName", "Use 2D Physics (Deprecated)" },
				{ "Use2DPhysics.Hidden", "" },
				{ "Use2DPhysics.Name", "ESpriteCollisionMode::Use2DPhysics" },
				{ "Use3DPhysics.Comment", "/** Should this have 3D collision geometry and participate in the 3D physics world? */" },
				{ "Use3DPhysics.DisplayName", "Use 3D Physics" },
				{ "Use3DPhysics.Name", "ESpriteCollisionMode::Use3DPhysics" },
				{ "Use3DPhysics.ToolTip", "Should this have 3D collision geometry and participate in the 3D physics world?" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Paper2D,
				nullptr,
				"ESpriteCollisionMode",
				"ESpriteCollisionMode::Type",
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
class UScriptStruct* FSpriteAssetInitParameters::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PAPER2D_API uint32 Get_Z_Construct_UScriptStruct_FSpriteAssetInitParameters_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSpriteAssetInitParameters, Z_Construct_UPackage__Script_Paper2D(), TEXT("SpriteAssetInitParameters"), sizeof(FSpriteAssetInitParameters), Get_Z_Construct_UScriptStruct_FSpriteAssetInitParameters_Hash());
	}
	return Singleton;
}
template<> PAPER2D_API UScriptStruct* StaticStruct<FSpriteAssetInitParameters>()
{
	return FSpriteAssetInitParameters::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSpriteAssetInitParameters(FSpriteAssetInitParameters::StaticStruct, TEXT("/Script/Paper2D"), TEXT("SpriteAssetInitParameters"), false, nullptr, nullptr);
static struct FScriptStruct_Paper2D_StaticRegisterNativesFSpriteAssetInitParameters
{
	FScriptStruct_Paper2D_StaticRegisterNativesFSpriteAssetInitParameters()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SpriteAssetInitParameters")),new UScriptStruct::TCppStructOps<FSpriteAssetInitParameters>);
	}
} ScriptStruct_Paper2D_StaticRegisterNativesFSpriteAssetInitParameters;
	struct Z_Construct_UScriptStruct_FSpriteAssetInitParameters_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpriteAssetInitParameters_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/SpriteEditorOnlyTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSpriteAssetInitParameters_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSpriteAssetInitParameters>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSpriteAssetInitParameters_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Paper2D,
		nullptr,
		&NewStructOps,
		"SpriteAssetInitParameters",
		sizeof(FSpriteAssetInitParameters),
		alignof(FSpriteAssetInitParameters),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSpriteAssetInitParameters_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpriteAssetInitParameters_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSpriteAssetInitParameters()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSpriteAssetInitParameters_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Paper2D();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SpriteAssetInitParameters"), sizeof(FSpriteAssetInitParameters), Get_Z_Construct_UScriptStruct_FSpriteAssetInitParameters_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSpriteAssetInitParameters_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSpriteAssetInitParameters_Hash() { return 3265774510U; }
class UScriptStruct* FSpriteGeometryCollection::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PAPER2D_API uint32 Get_Z_Construct_UScriptStruct_FSpriteGeometryCollection_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSpriteGeometryCollection, Z_Construct_UPackage__Script_Paper2D(), TEXT("SpriteGeometryCollection"), sizeof(FSpriteGeometryCollection), Get_Z_Construct_UScriptStruct_FSpriteGeometryCollection_Hash());
	}
	return Singleton;
}
template<> PAPER2D_API UScriptStruct* StaticStruct<FSpriteGeometryCollection>()
{
	return FSpriteGeometryCollection::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSpriteGeometryCollection(FSpriteGeometryCollection::StaticStruct, TEXT("/Script/Paper2D"), TEXT("SpriteGeometryCollection"), false, nullptr, nullptr);
static struct FScriptStruct_Paper2D_StaticRegisterNativesFSpriteGeometryCollection
{
	FScriptStruct_Paper2D_StaticRegisterNativesFSpriteGeometryCollection()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SpriteGeometryCollection")),new UScriptStruct::TCppStructOps<FSpriteGeometryCollection>);
	}
} ScriptStruct_Paper2D_StaticRegisterNativesFSpriteGeometryCollection;
	struct Z_Construct_UScriptStruct_FSpriteGeometryCollection_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SimplifyEpsilon_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SimplifyEpsilon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DetailAmount_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DetailAmount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AlphaThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AlphaThreshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAvoidVertexMerging_MetaData[];
#endif
		static void NewProp_bAvoidVertexMerging_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAvoidVertexMerging;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PixelsPerSubdivisionY_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PixelsPerSubdivisionY;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PixelsPerSubdivisionX_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PixelsPerSubdivisionX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GeometryType_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_GeometryType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Shapes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Shapes;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Shapes_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpriteGeometryCollection_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/SpriteEditorOnlyTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSpriteGeometryCollection_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSpriteGeometryCollection>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpriteGeometryCollection_Statics::NewProp_SimplifyEpsilon_MetaData[] = {
		{ "Category", "PolygonData" },
		{ "Comment", "// This is the threshold below which multiple vertices will be merged together when doing shrink-wrapping.  Higher values result in fewer vertices.\n" },
		{ "ModuleRelativePath", "Classes/SpriteEditorOnlyTypes.h" },
		{ "ToolTip", "This is the threshold below which multiple vertices will be merged together when doing shrink-wrapping.  Higher values result in fewer vertices." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSpriteGeometryCollection_Statics::NewProp_SimplifyEpsilon = { "SimplifyEpsilon", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSpriteGeometryCollection, SimplifyEpsilon), METADATA_PARAMS(Z_Construct_UScriptStruct_FSpriteGeometryCollection_Statics::NewProp_SimplifyEpsilon_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpriteGeometryCollection_Statics::NewProp_SimplifyEpsilon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpriteGeometryCollection_Statics::NewProp_DetailAmount_MetaData[] = {
		{ "Category", "PolygonData" },
		{ "Comment", "// Amount to detail to consider when shrink-wrapping (range 0..1, 0 = low detail, 1 = high detail)\n" },
		{ "ModuleRelativePath", "Classes/SpriteEditorOnlyTypes.h" },
		{ "ToolTip", "Amount to detail to consider when shrink-wrapping (range 0..1, 0 = low detail, 1 = high detail)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSpriteGeometryCollection_Statics::NewProp_DetailAmount = { "DetailAmount", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSpriteGeometryCollection, DetailAmount), METADATA_PARAMS(Z_Construct_UScriptStruct_FSpriteGeometryCollection_Statics::NewProp_DetailAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpriteGeometryCollection_Statics::NewProp_DetailAmount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpriteGeometryCollection_Statics::NewProp_AlphaThreshold_MetaData[] = {
		{ "Category", "PolygonData" },
		{ "Comment", "// Alpha threshold for a transparent pixel (range 0..1, anything equal or below this value will be considered unimportant)\n" },
		{ "ModuleRelativePath", "Classes/SpriteEditorOnlyTypes.h" },
		{ "ToolTip", "Alpha threshold for a transparent pixel (range 0..1, anything equal or below this value will be considered unimportant)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSpriteGeometryCollection_Statics::NewProp_AlphaThreshold = { "AlphaThreshold", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSpriteGeometryCollection, AlphaThreshold), METADATA_PARAMS(Z_Construct_UScriptStruct_FSpriteGeometryCollection_Statics::NewProp_AlphaThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpriteGeometryCollection_Statics::NewProp_AlphaThreshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpriteGeometryCollection_Statics::NewProp_bAvoidVertexMerging_MetaData[] = {
		{ "Category", "PolygonData" },
		{ "Comment", "// Experimental: Hint to the triangulation routine that extra vertices should be preserved\n" },
		{ "ModuleRelativePath", "Classes/SpriteEditorOnlyTypes.h" },
		{ "ToolTip", "Experimental: Hint to the triangulation routine that extra vertices should be preserved" },
	};
#endif
	void Z_Construct_UScriptStruct_FSpriteGeometryCollection_Statics::NewProp_bAvoidVertexMerging_SetBit(void* Obj)
	{
		((FSpriteGeometryCollection*)Obj)->bAvoidVertexMerging = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSpriteGeometryCollection_Statics::NewProp_bAvoidVertexMerging = { "bAvoidVertexMerging", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSpriteGeometryCollection), &Z_Construct_UScriptStruct_FSpriteGeometryCollection_Statics::NewProp_bAvoidVertexMerging_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSpriteGeometryCollection_Statics::NewProp_bAvoidVertexMerging_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpriteGeometryCollection_Statics::NewProp_bAvoidVertexMerging_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpriteGeometryCollection_Statics::NewProp_PixelsPerSubdivisionY_MetaData[] = {
		{ "Category", "PolygonData" },
		{ "Comment", "// Size of a single subdivision (in pixels) in Y (for Diced mode)\n" },
		{ "ModuleRelativePath", "Classes/SpriteEditorOnlyTypes.h" },
		{ "ToolTip", "Size of a single subdivision (in pixels) in Y (for Diced mode)" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSpriteGeometryCollection_Statics::NewProp_PixelsPerSubdivisionY = { "PixelsPerSubdivisionY", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSpriteGeometryCollection, PixelsPerSubdivisionY), METADATA_PARAMS(Z_Construct_UScriptStruct_FSpriteGeometryCollection_Statics::NewProp_PixelsPerSubdivisionY_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpriteGeometryCollection_Statics::NewProp_PixelsPerSubdivisionY_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpriteGeometryCollection_Statics::NewProp_PixelsPerSubdivisionX_MetaData[] = {
		{ "Category", "PolygonData" },
		{ "Comment", "// Size of a single subdivision (in pixels) in X (for Diced mode)\n" },
		{ "ModuleRelativePath", "Classes/SpriteEditorOnlyTypes.h" },
		{ "ToolTip", "Size of a single subdivision (in pixels) in X (for Diced mode)" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSpriteGeometryCollection_Statics::NewProp_PixelsPerSubdivisionX = { "PixelsPerSubdivisionX", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSpriteGeometryCollection, PixelsPerSubdivisionX), METADATA_PARAMS(Z_Construct_UScriptStruct_FSpriteGeometryCollection_Statics::NewProp_PixelsPerSubdivisionX_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpriteGeometryCollection_Statics::NewProp_PixelsPerSubdivisionX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpriteGeometryCollection_Statics::NewProp_GeometryType_MetaData[] = {
		{ "Category", "PolygonData" },
		{ "Comment", "// The geometry type (automatic / manual)\n" },
		{ "ModuleRelativePath", "Classes/SpriteEditorOnlyTypes.h" },
		{ "ToolTip", "The geometry type (automatic / manual)" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSpriteGeometryCollection_Statics::NewProp_GeometryType = { "GeometryType", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSpriteGeometryCollection, GeometryType), Z_Construct_UEnum_Paper2D_ESpritePolygonMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FSpriteGeometryCollection_Statics::NewProp_GeometryType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpriteGeometryCollection_Statics::NewProp_GeometryType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpriteGeometryCollection_Statics::NewProp_Shapes_MetaData[] = {
		{ "Category", "PolygonData" },
		{ "Comment", "// List of shapes\n" },
		{ "ModuleRelativePath", "Classes/SpriteEditorOnlyTypes.h" },
		{ "ToolTip", "List of shapes" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSpriteGeometryCollection_Statics::NewProp_Shapes = { "Shapes", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSpriteGeometryCollection, Shapes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSpriteGeometryCollection_Statics::NewProp_Shapes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpriteGeometryCollection_Statics::NewProp_Shapes_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSpriteGeometryCollection_Statics::NewProp_Shapes_Inner = { "Shapes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSpriteGeometryShape, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSpriteGeometryCollection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpriteGeometryCollection_Statics::NewProp_SimplifyEpsilon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpriteGeometryCollection_Statics::NewProp_DetailAmount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpriteGeometryCollection_Statics::NewProp_AlphaThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpriteGeometryCollection_Statics::NewProp_bAvoidVertexMerging,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpriteGeometryCollection_Statics::NewProp_PixelsPerSubdivisionY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpriteGeometryCollection_Statics::NewProp_PixelsPerSubdivisionX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpriteGeometryCollection_Statics::NewProp_GeometryType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpriteGeometryCollection_Statics::NewProp_Shapes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpriteGeometryCollection_Statics::NewProp_Shapes_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSpriteGeometryCollection_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Paper2D,
		nullptr,
		&NewStructOps,
		"SpriteGeometryCollection",
		sizeof(FSpriteGeometryCollection),
		alignof(FSpriteGeometryCollection),
		Z_Construct_UScriptStruct_FSpriteGeometryCollection_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpriteGeometryCollection_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSpriteGeometryCollection_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpriteGeometryCollection_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSpriteGeometryCollection()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSpriteGeometryCollection_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Paper2D();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SpriteGeometryCollection"), sizeof(FSpriteGeometryCollection), Get_Z_Construct_UScriptStruct_FSpriteGeometryCollection_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSpriteGeometryCollection_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSpriteGeometryCollection_Hash() { return 1429513312U; }
class UScriptStruct* FSpriteGeometryShape::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PAPER2D_API uint32 Get_Z_Construct_UScriptStruct_FSpriteGeometryShape_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSpriteGeometryShape, Z_Construct_UPackage__Script_Paper2D(), TEXT("SpriteGeometryShape"), sizeof(FSpriteGeometryShape), Get_Z_Construct_UScriptStruct_FSpriteGeometryShape_Hash());
	}
	return Singleton;
}
template<> PAPER2D_API UScriptStruct* StaticStruct<FSpriteGeometryShape>()
{
	return FSpriteGeometryShape::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSpriteGeometryShape(FSpriteGeometryShape::StaticStruct, TEXT("/Script/Paper2D"), TEXT("SpriteGeometryShape"), false, nullptr, nullptr);
static struct FScriptStruct_Paper2D_StaticRegisterNativesFSpriteGeometryShape
{
	FScriptStruct_Paper2D_StaticRegisterNativesFSpriteGeometryShape()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SpriteGeometryShape")),new UScriptStruct::TCppStructOps<FSpriteGeometryShape>);
	}
} ScriptStruct_Paper2D_StaticRegisterNativesFSpriteGeometryShape;
	struct Z_Construct_UScriptStruct_FSpriteGeometryShape_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bNegativeWinding_MetaData[];
#endif
		static void NewProp_bNegativeWinding_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNegativeWinding;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Rotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoxPosition_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BoxPosition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoxSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BoxSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Vertices_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Vertices;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Vertices_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShapeType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ShapeType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ShapeType_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpriteGeometryShape_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// A single piece of geometry (e.g., a polygon which may be convex or concave, a box, or a circle)\n" },
		{ "ModuleRelativePath", "Classes/SpriteEditorOnlyTypes.h" },
		{ "ToolTip", "A single piece of geometry (e.g., a polygon which may be convex or concave, a box, or a circle)" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSpriteGeometryShape_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSpriteGeometryShape>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpriteGeometryShape_Statics::NewProp_bNegativeWinding_MetaData[] = {
		{ "Category", "Physics" },
		{ "Comment", "// For Polygon geometry, this tells us if the winding should be negative (CW) regardless of the order in Vertices\n" },
		{ "ModuleRelativePath", "Classes/SpriteEditorOnlyTypes.h" },
		{ "ToolTip", "For Polygon geometry, this tells us if the winding should be negative (CW) regardless of the order in Vertices" },
	};
#endif
	void Z_Construct_UScriptStruct_FSpriteGeometryShape_Statics::NewProp_bNegativeWinding_SetBit(void* Obj)
	{
		((FSpriteGeometryShape*)Obj)->bNegativeWinding = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSpriteGeometryShape_Statics::NewProp_bNegativeWinding = { "bNegativeWinding", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSpriteGeometryShape), &Z_Construct_UScriptStruct_FSpriteGeometryShape_Statics::NewProp_bNegativeWinding_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSpriteGeometryShape_Statics::NewProp_bNegativeWinding_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpriteGeometryShape_Statics::NewProp_bNegativeWinding_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpriteGeometryShape_Statics::NewProp_Rotation_MetaData[] = {
		{ "Category", "Physics" },
		{ "Comment", "// Rotation of the shape (in degrees)\n" },
		{ "ModuleRelativePath", "Classes/SpriteEditorOnlyTypes.h" },
		{ "ToolTip", "Rotation of the shape (in degrees)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSpriteGeometryShape_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSpriteGeometryShape, Rotation), METADATA_PARAMS(Z_Construct_UScriptStruct_FSpriteGeometryShape_Statics::NewProp_Rotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpriteGeometryShape_Statics::NewProp_Rotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpriteGeometryShape_Statics::NewProp_BoxPosition_MetaData[] = {
		{ "Category", "Physics" },
		{ "Comment", "// Center of the box or circle, acts as the pivot point for polygons (but may not be at the center of them)\n" },
		{ "ModuleRelativePath", "Classes/SpriteEditorOnlyTypes.h" },
		{ "ToolTip", "Center of the box or circle, acts as the pivot point for polygons (but may not be at the center of them)" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSpriteGeometryShape_Statics::NewProp_BoxPosition = { "BoxPosition", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSpriteGeometryShape, BoxPosition), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FSpriteGeometryShape_Statics::NewProp_BoxPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpriteGeometryShape_Statics::NewProp_BoxPosition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpriteGeometryShape_Statics::NewProp_BoxSize_MetaData[] = {
		{ "Category", "Physics" },
		{ "Comment", "// Size of the box or major/minor dimensions of the circle\n// Note: Only valid when GeometryType is Box or Circle\n" },
		{ "ModuleRelativePath", "Classes/SpriteEditorOnlyTypes.h" },
		{ "ToolTip", "Size of the box or major/minor dimensions of the circle\nNote: Only valid when GeometryType is Box or Circle" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSpriteGeometryShape_Statics::NewProp_BoxSize = { "BoxSize", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSpriteGeometryShape, BoxSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FSpriteGeometryShape_Statics::NewProp_BoxSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpriteGeometryShape_Statics::NewProp_BoxSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpriteGeometryShape_Statics::NewProp_Vertices_MetaData[] = {
		{ "Category", "Physics" },
		{ "Comment", "// Vertices for the polygon (valid for Box and Polygon, but empty for Circle)\n" },
		{ "ModuleRelativePath", "Classes/SpriteEditorOnlyTypes.h" },
		{ "ToolTip", "Vertices for the polygon (valid for Box and Polygon, but empty for Circle)" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSpriteGeometryShape_Statics::NewProp_Vertices = { "Vertices", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSpriteGeometryShape, Vertices), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSpriteGeometryShape_Statics::NewProp_Vertices_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpriteGeometryShape_Statics::NewProp_Vertices_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSpriteGeometryShape_Statics::NewProp_Vertices_Inner = { "Vertices", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpriteGeometryShape_Statics::NewProp_ShapeType_MetaData[] = {
		{ "Category", "Physics" },
		{ "Comment", "// The type of this piece of geometry\n" },
		{ "ModuleRelativePath", "Classes/SpriteEditorOnlyTypes.h" },
		{ "ToolTip", "The type of this piece of geometry" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSpriteGeometryShape_Statics::NewProp_ShapeType = { "ShapeType", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSpriteGeometryShape, ShapeType), Z_Construct_UEnum_Paper2D_ESpriteShapeType, METADATA_PARAMS(Z_Construct_UScriptStruct_FSpriteGeometryShape_Statics::NewProp_ShapeType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpriteGeometryShape_Statics::NewProp_ShapeType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSpriteGeometryShape_Statics::NewProp_ShapeType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSpriteGeometryShape_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpriteGeometryShape_Statics::NewProp_bNegativeWinding,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpriteGeometryShape_Statics::NewProp_Rotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpriteGeometryShape_Statics::NewProp_BoxPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpriteGeometryShape_Statics::NewProp_BoxSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpriteGeometryShape_Statics::NewProp_Vertices,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpriteGeometryShape_Statics::NewProp_Vertices_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpriteGeometryShape_Statics::NewProp_ShapeType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpriteGeometryShape_Statics::NewProp_ShapeType_Underlying,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSpriteGeometryShape_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Paper2D,
		nullptr,
		&NewStructOps,
		"SpriteGeometryShape",
		sizeof(FSpriteGeometryShape),
		alignof(FSpriteGeometryShape),
		Z_Construct_UScriptStruct_FSpriteGeometryShape_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpriteGeometryShape_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSpriteGeometryShape_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpriteGeometryShape_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSpriteGeometryShape()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSpriteGeometryShape_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Paper2D();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SpriteGeometryShape"), sizeof(FSpriteGeometryShape), Get_Z_Construct_UScriptStruct_FSpriteGeometryShape_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSpriteGeometryShape_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSpriteGeometryShape_Hash() { return 1170535069U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
