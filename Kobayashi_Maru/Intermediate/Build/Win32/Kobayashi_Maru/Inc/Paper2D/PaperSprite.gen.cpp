// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Paper2D/Classes/PaperSprite.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePaperSprite() {}
// Cross Module References
	PAPER2D_API UScriptStruct* Z_Construct_UScriptStruct_FPaperSpriteSocket();
	UPackage* Z_Construct_UPackage__Script_Paper2D();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	PAPER2D_API UClass* Z_Construct_UClass_UPaperSprite_NoRegister();
	PAPER2D_API UClass* Z_Construct_UClass_UPaperSprite();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector4();
	PAPER2D_API UClass* Z_Construct_UClass_UPaperSpriteAtlas_NoRegister();
	PAPER2D_API UScriptStruct* Z_Construct_UScriptStruct_FSpriteGeometryCollection();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	PAPER2D_API UEnum* Z_Construct_UEnum_Paper2D_ESpritePivotMode();
	ENGINE_API UClass* Z_Construct_UClass_UBodySetup_NoRegister();
	PAPER2D_API UEnum* Z_Construct_UEnum_Paper2D_ESpriteCollisionMode();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInterface_CollisionDataProvider_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USlateTextureAtlasInterface_NoRegister();
// End Cross Module References
class UScriptStruct* FPaperSpriteSocket::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PAPER2D_API uint32 Get_Z_Construct_UScriptStruct_FPaperSpriteSocket_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPaperSpriteSocket, Z_Construct_UPackage__Script_Paper2D(), TEXT("PaperSpriteSocket"), sizeof(FPaperSpriteSocket), Get_Z_Construct_UScriptStruct_FPaperSpriteSocket_Hash());
	}
	return Singleton;
}
template<> PAPER2D_API UScriptStruct* StaticStruct<FPaperSpriteSocket>()
{
	return FPaperSpriteSocket::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPaperSpriteSocket(FPaperSpriteSocket::StaticStruct, TEXT("/Script/Paper2D"), TEXT("PaperSpriteSocket"), false, nullptr, nullptr);
static struct FScriptStruct_Paper2D_StaticRegisterNativesFPaperSpriteSocket
{
	FScriptStruct_Paper2D_StaticRegisterNativesFPaperSpriteSocket()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PaperSpriteSocket")),new UScriptStruct::TCppStructOps<FPaperSpriteSocket>);
	}
} ScriptStruct_Paper2D_StaticRegisterNativesFPaperSpriteSocket;
	struct Z_Construct_UScriptStruct_FPaperSpriteSocket_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SocketName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SocketName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocalTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LocalTransform;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPaperSpriteSocket_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//@TODO: Should have some nice UI and enforce unique names, etc...\n" },
		{ "ModuleRelativePath", "Classes/PaperSprite.h" },
		{ "ToolTip", "@TODO: Should have some nice UI and enforce unique names, etc..." },
	};
#endif
	void* Z_Construct_UScriptStruct_FPaperSpriteSocket_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPaperSpriteSocket>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPaperSpriteSocket_Statics::NewProp_SocketName_MetaData[] = {
		{ "Category", "Sockets" },
		{ "Comment", "// Name of the socket\n" },
		{ "ModuleRelativePath", "Classes/PaperSprite.h" },
		{ "ToolTip", "Name of the socket" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPaperSpriteSocket_Statics::NewProp_SocketName = { "SocketName", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPaperSpriteSocket, SocketName), METADATA_PARAMS(Z_Construct_UScriptStruct_FPaperSpriteSocket_Statics::NewProp_SocketName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaperSpriteSocket_Statics::NewProp_SocketName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPaperSpriteSocket_Statics::NewProp_LocalTransform_MetaData[] = {
		{ "Category", "Sockets" },
		{ "Comment", "// Transform in pivot space (*not* texture space)\n" },
		{ "ModuleRelativePath", "Classes/PaperSprite.h" },
		{ "ToolTip", "Transform in pivot space (*not* texture space)" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPaperSpriteSocket_Statics::NewProp_LocalTransform = { "LocalTransform", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPaperSpriteSocket, LocalTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FPaperSpriteSocket_Statics::NewProp_LocalTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaperSpriteSocket_Statics::NewProp_LocalTransform_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPaperSpriteSocket_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPaperSpriteSocket_Statics::NewProp_SocketName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPaperSpriteSocket_Statics::NewProp_LocalTransform,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPaperSpriteSocket_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Paper2D,
		nullptr,
		&NewStructOps,
		"PaperSpriteSocket",
		sizeof(FPaperSpriteSocket),
		alignof(FPaperSpriteSocket),
		Z_Construct_UScriptStruct_FPaperSpriteSocket_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaperSpriteSocket_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPaperSpriteSocket_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaperSpriteSocket_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPaperSpriteSocket()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPaperSpriteSocket_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Paper2D();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PaperSpriteSocket"), sizeof(FPaperSpriteSocket), Get_Z_Construct_UScriptStruct_FPaperSpriteSocket_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPaperSpriteSocket_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPaperSpriteSocket_Hash() { return 99336815U; }
	void UPaperSprite::StaticRegisterNativesUPaperSprite()
	{
	}
	UClass* Z_Construct_UClass_UPaperSprite_NoRegister()
	{
		return UPaperSprite::StaticClass();
	}
	struct Z_Construct_UClass_UPaperSprite_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BakedRenderData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BakedRenderData;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BakedRenderData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AlternateMaterialSplitIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AlternateMaterialSplitIndex;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AtlasGroup_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AtlasGroup;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RenderGeometry_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RenderGeometry;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollisionThickness_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CollisionThickness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollisionGeometry_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CollisionGeometry;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSnapPivotToPixelGrid_MetaData[];
#endif
		static void NewProp_bSnapPivotToPixelGrid_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSnapPivotToPixelGrid;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomPivotPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CustomPivotPoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PivotMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PivotMode;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BodySetup_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BodySetup;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PixelsPerUnrealUnit_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PixelsPerUnrealUnit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpriteCollisionDomain_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SpriteCollisionDomain;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Sockets_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Sockets;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Sockets_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AlternateMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AlternateMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DefaultMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BakedSourceTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BakedSourceTexture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BakedSourceDimension_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BakedSourceDimension;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BakedSourceUV_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BakedSourceUV;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AdditionalSourceTextures_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AdditionalSourceTextures;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AdditionalSourceTextures_Inner;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceTextureCacheNeverSerialized_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SourceTextureCacheNeverSerialized;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_SourceTexture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceDimension_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SourceDimension;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceUV_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SourceUV;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceTextureDimension_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SourceTextureDimension;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRotatedInSourceImage_MetaData[];
#endif
		static void NewProp_bRotatedInSourceImage_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRotatedInSourceImage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bTrimmedInSourceImage_MetaData[];
#endif
		static void NewProp_bTrimmedInSourceImage_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTrimmedInSourceImage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceImageDimensionBeforeTrimming_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SourceImageDimensionBeforeTrimming;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OriginInSourceImageBeforeTrimming_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OriginInSourceImageBeforeTrimming;
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPaperSprite_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Paper2D,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperSprite_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Sprite Asset\n *\n * Stores the data necessary to render a single 2D sprite (from a region of a texture)\n * Can also contain collision shapes for the sprite.\n *\n * @see UPaperSpriteComponent\n */" },
		{ "DisplayThumbnail", "true" },
		{ "IncludePath", "PaperSprite.h" },
		{ "ModuleRelativePath", "Classes/PaperSprite.h" },
		{ "ToolTip", "Sprite Asset\n\nStores the data necessary to render a single 2D sprite (from a region of a texture)\nCan also contain collision shapes for the sprite.\n\n@see UPaperSpriteComponent" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperSprite_Statics::NewProp_BakedRenderData_MetaData[] = {
		{ "Comment", "// Baked render data (triangle vertices, stored as XY UV tuples)\n//   XY is the XZ position in world space, relative to the pivot\n//   UV is normalized (0..1)\n//   There should always be a multiple of three elements in this array\n" },
		{ "ModuleRelativePath", "Classes/PaperSprite.h" },
		{ "ToolTip", "Baked render data (triangle vertices, stored as XY UV tuples)\n  XY is the XZ position in world space, relative to the pivot\n  UV is normalized (0..1)\n  There should always be a multiple of three elements in this array" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPaperSprite_Statics::NewProp_BakedRenderData = { "BakedRenderData", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPaperSprite, BakedRenderData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPaperSprite_Statics::NewProp_BakedRenderData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperSprite_Statics::NewProp_BakedRenderData_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPaperSprite_Statics::NewProp_BakedRenderData_Inner = { "BakedRenderData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperSprite_Statics::NewProp_AlternateMaterialSplitIndex_MetaData[] = {
		{ "Comment", "// The point at which the alternate material takes over in the baked render data (or INDEX_NONE)\n" },
		{ "ModuleRelativePath", "Classes/PaperSprite.h" },
		{ "ToolTip", "The point at which the alternate material takes over in the baked render data (or INDEX_NONE)" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPaperSprite_Statics::NewProp_AlternateMaterialSplitIndex = { "AlternateMaterialSplitIndex", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPaperSprite, AlternateMaterialSplitIndex), METADATA_PARAMS(Z_Construct_UClass_UPaperSprite_Statics::NewProp_AlternateMaterialSplitIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperSprite_Statics::NewProp_AlternateMaterialSplitIndex_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperSprite_Statics::NewProp_AtlasGroup_MetaData[] = {
		{ "Category", "Sprite" },
		{ "Comment", "// Spritesheet group that this sprite belongs to\n" },
		{ "ModuleRelativePath", "Classes/PaperSprite.h" },
		{ "ToolTip", "Spritesheet group that this sprite belongs to" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPaperSprite_Statics::NewProp_AtlasGroup = { "AtlasGroup", nullptr, (EPropertyFlags)0x0020090800000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPaperSprite, AtlasGroup), Z_Construct_UClass_UPaperSpriteAtlas_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPaperSprite_Statics::NewProp_AtlasGroup_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperSprite_Statics::NewProp_AtlasGroup_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperSprite_Statics::NewProp_RenderGeometry_MetaData[] = {
		{ "Category", "Rendering" },
		{ "Comment", "// Custom render geometry polygons (in texture space)\n" },
		{ "ModuleRelativePath", "Classes/PaperSprite.h" },
		{ "ToolTip", "Custom render geometry polygons (in texture space)" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPaperSprite_Statics::NewProp_RenderGeometry = { "RenderGeometry", nullptr, (EPropertyFlags)0x0020080800000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPaperSprite, RenderGeometry), Z_Construct_UScriptStruct_FSpriteGeometryCollection, METADATA_PARAMS(Z_Construct_UClass_UPaperSprite_Statics::NewProp_RenderGeometry_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperSprite_Statics::NewProp_RenderGeometry_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperSprite_Statics::NewProp_CollisionThickness_MetaData[] = {
		{ "Category", "Collision" },
		{ "Comment", "// The extrusion thickness of collision geometry when using a 3D collision domain\n" },
		{ "ModuleRelativePath", "Classes/PaperSprite.h" },
		{ "ToolTip", "The extrusion thickness of collision geometry when using a 3D collision domain" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPaperSprite_Statics::NewProp_CollisionThickness = { "CollisionThickness", nullptr, (EPropertyFlags)0x0020080800000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPaperSprite, CollisionThickness), METADATA_PARAMS(Z_Construct_UClass_UPaperSprite_Statics::NewProp_CollisionThickness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperSprite_Statics::NewProp_CollisionThickness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperSprite_Statics::NewProp_CollisionGeometry_MetaData[] = {
		{ "Category", "Collision" },
		{ "Comment", "// Custom collision geometry polygons (in texture space)\n" },
		{ "ModuleRelativePath", "Classes/PaperSprite.h" },
		{ "ToolTip", "Custom collision geometry polygons (in texture space)" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPaperSprite_Statics::NewProp_CollisionGeometry = { "CollisionGeometry", nullptr, (EPropertyFlags)0x0020080800000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPaperSprite, CollisionGeometry), Z_Construct_UScriptStruct_FSpriteGeometryCollection, METADATA_PARAMS(Z_Construct_UClass_UPaperSprite_Statics::NewProp_CollisionGeometry_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperSprite_Statics::NewProp_CollisionGeometry_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperSprite_Statics::NewProp_bSnapPivotToPixelGrid_MetaData[] = {
		{ "Category", "Sprite" },
		{ "Comment", "// Should the pivot be snapped to a pixel boundary?\n" },
		{ "ModuleRelativePath", "Classes/PaperSprite.h" },
		{ "ToolTip", "Should the pivot be snapped to a pixel boundary?" },
	};
#endif
	void Z_Construct_UClass_UPaperSprite_Statics::NewProp_bSnapPivotToPixelGrid_SetBit(void* Obj)
	{
		((UPaperSprite*)Obj)->bSnapPivotToPixelGrid = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPaperSprite_Statics::NewProp_bSnapPivotToPixelGrid = { "bSnapPivotToPixelGrid", nullptr, (EPropertyFlags)0x00200c0800000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPaperSprite), &Z_Construct_UClass_UPaperSprite_Statics::NewProp_bSnapPivotToPixelGrid_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPaperSprite_Statics::NewProp_bSnapPivotToPixelGrid_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperSprite_Statics::NewProp_bSnapPivotToPixelGrid_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperSprite_Statics::NewProp_CustomPivotPoint_MetaData[] = {
		{ "Category", "Sprite" },
		{ "Comment", "// Custom pivot point (relative to the sprite rectangle)\n" },
		{ "ModuleRelativePath", "Classes/PaperSprite.h" },
		{ "ToolTip", "Custom pivot point (relative to the sprite rectangle)" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPaperSprite_Statics::NewProp_CustomPivotPoint = { "CustomPivotPoint", nullptr, (EPropertyFlags)0x0020080800000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPaperSprite, CustomPivotPoint), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UPaperSprite_Statics::NewProp_CustomPivotPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperSprite_Statics::NewProp_CustomPivotPoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperSprite_Statics::NewProp_PivotMode_MetaData[] = {
		{ "Category", "Sprite" },
		{ "Comment", "// Pivot mode\n" },
		{ "ModuleRelativePath", "Classes/PaperSprite.h" },
		{ "ToolTip", "Pivot mode" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPaperSprite_Statics::NewProp_PivotMode = { "PivotMode", nullptr, (EPropertyFlags)0x0020080800000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPaperSprite, PivotMode), Z_Construct_UEnum_Paper2D_ESpritePivotMode, METADATA_PARAMS(Z_Construct_UClass_UPaperSprite_Statics::NewProp_PivotMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperSprite_Statics::NewProp_PivotMode_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperSprite_Statics::NewProp_BodySetup_MetaData[] = {
		{ "Category", "NeverShown" },
		{ "Comment", "// Baked physics data.\n" },
		{ "ModuleRelativePath", "Classes/PaperSprite.h" },
		{ "ToolTip", "Baked physics data." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPaperSprite_Statics::NewProp_BodySetup = { "BodySetup", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPaperSprite, BodySetup), Z_Construct_UClass_UBodySetup_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPaperSprite_Statics::NewProp_BodySetup_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperSprite_Statics::NewProp_BodySetup_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperSprite_Statics::NewProp_PixelsPerUnrealUnit_MetaData[] = {
		{ "Category", "Sprite" },
		{ "Comment", "// The scaling factor between pixels and Unreal units (cm) (e.g., 0.64 would make a 64 pixel wide sprite take up 100 cm)\n" },
		{ "DisplayName", "Pixels per unit" },
		{ "ModuleRelativePath", "Classes/PaperSprite.h" },
		{ "ToolTip", "The scaling factor between pixels and Unreal units (cm) (e.g., 0.64 would make a 64 pixel wide sprite take up 100 cm)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPaperSprite_Statics::NewProp_PixelsPerUnrealUnit = { "PixelsPerUnrealUnit", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPaperSprite, PixelsPerUnrealUnit), METADATA_PARAMS(Z_Construct_UClass_UPaperSprite_Statics::NewProp_PixelsPerUnrealUnit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperSprite_Statics::NewProp_PixelsPerUnrealUnit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperSprite_Statics::NewProp_SpriteCollisionDomain_MetaData[] = {
		{ "Category", "Collision" },
		{ "Comment", "// Collision domain (no collision, 2D, or 3D)\n" },
		{ "ModuleRelativePath", "Classes/PaperSprite.h" },
		{ "ToolTip", "Collision domain (no collision, 2D, or 3D)" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPaperSprite_Statics::NewProp_SpriteCollisionDomain = { "SpriteCollisionDomain", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPaperSprite, SpriteCollisionDomain), Z_Construct_UEnum_Paper2D_ESpriteCollisionMode, METADATA_PARAMS(Z_Construct_UClass_UPaperSprite_Statics::NewProp_SpriteCollisionDomain_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperSprite_Statics::NewProp_SpriteCollisionDomain_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperSprite_Statics::NewProp_Sockets_MetaData[] = {
		{ "Category", "Sprite" },
		{ "Comment", "// List of sockets on this sprite\n" },
		{ "ModuleRelativePath", "Classes/PaperSprite.h" },
		{ "ToolTip", "List of sockets on this sprite" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPaperSprite_Statics::NewProp_Sockets = { "Sockets", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPaperSprite, Sockets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPaperSprite_Statics::NewProp_Sockets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperSprite_Statics::NewProp_Sockets_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPaperSprite_Statics::NewProp_Sockets_Inner = { "Sockets", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPaperSpriteSocket, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperSprite_Statics::NewProp_AlternateMaterial_MetaData[] = {
		{ "Category", "Rendering" },
		{ "Comment", "// The alternate material to use on a sprite instance if not overridden (this is only used for Diced render geometry, and will be the opaque material in that case, slot 1)\n" },
		{ "ModuleRelativePath", "Classes/PaperSprite.h" },
		{ "ToolTip", "The alternate material to use on a sprite instance if not overridden (this is only used for Diced render geometry, and will be the opaque material in that case, slot 1)" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPaperSprite_Statics::NewProp_AlternateMaterial = { "AlternateMaterial", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPaperSprite, AlternateMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPaperSprite_Statics::NewProp_AlternateMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperSprite_Statics::NewProp_AlternateMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperSprite_Statics::NewProp_DefaultMaterial_MetaData[] = {
		{ "Category", "Sprite" },
		{ "Comment", "// The material to use on a sprite instance if not overridden (this is the default material when only one is being used, and is the translucent/masked material for Diced render geometry, slot 0)\n" },
		{ "ModuleRelativePath", "Classes/PaperSprite.h" },
		{ "ToolTip", "The material to use on a sprite instance if not overridden (this is the default material when only one is being used, and is the translucent/masked material for Diced render geometry, slot 0)" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPaperSprite_Statics::NewProp_DefaultMaterial = { "DefaultMaterial", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPaperSprite, DefaultMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPaperSprite_Statics::NewProp_DefaultMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperSprite_Statics::NewProp_DefaultMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperSprite_Statics::NewProp_BakedSourceTexture_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PaperSprite.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPaperSprite_Statics::NewProp_BakedSourceTexture = { "BakedSourceTexture", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPaperSprite, BakedSourceTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPaperSprite_Statics::NewProp_BakedSourceTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperSprite_Statics::NewProp_BakedSourceTexture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperSprite_Statics::NewProp_BakedSourceDimension_MetaData[] = {
		{ "Comment", "// Dimensions within BakedSourceTexture (in pixels)\n" },
		{ "ModuleRelativePath", "Classes/PaperSprite.h" },
		{ "ToolTip", "Dimensions within BakedSourceTexture (in pixels)" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPaperSprite_Statics::NewProp_BakedSourceDimension = { "BakedSourceDimension", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPaperSprite, BakedSourceDimension), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UPaperSprite_Statics::NewProp_BakedSourceDimension_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperSprite_Statics::NewProp_BakedSourceDimension_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperSprite_Statics::NewProp_BakedSourceUV_MetaData[] = {
		{ "Comment", "// Position within BakedSourceTexture (in pixels)\n" },
		{ "ModuleRelativePath", "Classes/PaperSprite.h" },
		{ "ToolTip", "Position within BakedSourceTexture (in pixels)" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPaperSprite_Statics::NewProp_BakedSourceUV = { "BakedSourceUV", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPaperSprite, BakedSourceUV), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UPaperSprite_Statics::NewProp_BakedSourceUV_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperSprite_Statics::NewProp_BakedSourceUV_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperSprite_Statics::NewProp_AdditionalSourceTextures_MetaData[] = {
		{ "Category", "Sprite" },
		{ "Comment", "// Additional source textures for other slots\n" },
		{ "DisplayName", "Additional Textures" },
		{ "ModuleRelativePath", "Classes/PaperSprite.h" },
		{ "ToolTip", "Additional source textures for other slots" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPaperSprite_Statics::NewProp_AdditionalSourceTextures = { "AdditionalSourceTextures", nullptr, (EPropertyFlags)0x0020090000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPaperSprite, AdditionalSourceTextures), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPaperSprite_Statics::NewProp_AdditionalSourceTextures_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperSprite_Statics::NewProp_AdditionalSourceTextures_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPaperSprite_Statics::NewProp_AdditionalSourceTextures_Inner = { "AdditionalSourceTextures", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperSprite_Statics::NewProp_SourceTextureCacheNeverSerialized_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PaperSprite.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPaperSprite_Statics::NewProp_SourceTextureCacheNeverSerialized = { "SourceTextureCacheNeverSerialized", nullptr, (EPropertyFlags)0x0020080800002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPaperSprite, SourceTextureCacheNeverSerialized), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPaperSprite_Statics::NewProp_SourceTextureCacheNeverSerialized_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperSprite_Statics::NewProp_SourceTextureCacheNeverSerialized_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperSprite_Statics::NewProp_SourceTexture_MetaData[] = {
		{ "Category", "Sprite" },
		{ "Comment", "// The source texture that the sprite comes from\n" },
		{ "ModuleRelativePath", "Classes/PaperSprite.h" },
		{ "ToolTip", "The source texture that the sprite comes from" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UPaperSprite_Statics::NewProp_SourceTexture = { "SourceTexture", nullptr, (EPropertyFlags)0x0024090800000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPaperSprite, SourceTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPaperSprite_Statics::NewProp_SourceTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperSprite_Statics::NewProp_SourceTexture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperSprite_Statics::NewProp_SourceDimension_MetaData[] = {
		{ "Category", "Sprite" },
		{ "Comment", "// Dimensions within SourceTexture (in pixels)\n" },
		{ "ModuleRelativePath", "Classes/PaperSprite.h" },
		{ "ToolTip", "Dimensions within SourceTexture (in pixels)" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPaperSprite_Statics::NewProp_SourceDimension = { "SourceDimension", nullptr, (EPropertyFlags)0x0020090800000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPaperSprite, SourceDimension), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UPaperSprite_Statics::NewProp_SourceDimension_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperSprite_Statics::NewProp_SourceDimension_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperSprite_Statics::NewProp_SourceUV_MetaData[] = {
		{ "Category", "Sprite" },
		{ "Comment", "// Position within SourceTexture (in pixels)\n" },
		{ "ModuleRelativePath", "Classes/PaperSprite.h" },
		{ "ToolTip", "Position within SourceTexture (in pixels)" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPaperSprite_Statics::NewProp_SourceUV = { "SourceUV", nullptr, (EPropertyFlags)0x0020090800000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPaperSprite, SourceUV), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UPaperSprite_Statics::NewProp_SourceUV_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperSprite_Statics::NewProp_SourceUV_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperSprite_Statics::NewProp_SourceTextureDimension_MetaData[] = {
		{ "Category", "Sprite" },
		{ "Comment", "// Dimension of the texture when this sprite was created\n// Used when the sprite is resized at some point\n" },
		{ "ModuleRelativePath", "Classes/PaperSprite.h" },
		{ "ToolTip", "Dimension of the texture when this sprite was created\nUsed when the sprite is resized at some point" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPaperSprite_Statics::NewProp_SourceTextureDimension = { "SourceTextureDimension", nullptr, (EPropertyFlags)0x00200c0800000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPaperSprite, SourceTextureDimension), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UPaperSprite_Statics::NewProp_SourceTextureDimension_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperSprite_Statics::NewProp_SourceTextureDimension_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperSprite_Statics::NewProp_bRotatedInSourceImage_MetaData[] = {
		{ "Category", "Sprite" },
		{ "Comment", "// This texture is rotated in the atlas\n" },
		{ "ModuleRelativePath", "Classes/PaperSprite.h" },
		{ "ToolTip", "This texture is rotated in the atlas" },
	};
#endif
	void Z_Construct_UClass_UPaperSprite_Statics::NewProp_bRotatedInSourceImage_SetBit(void* Obj)
	{
		((UPaperSprite*)Obj)->bRotatedInSourceImage = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPaperSprite_Statics::NewProp_bRotatedInSourceImage = { "bRotatedInSourceImage", nullptr, (EPropertyFlags)0x00200c0800000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPaperSprite), &Z_Construct_UClass_UPaperSprite_Statics::NewProp_bRotatedInSourceImage_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPaperSprite_Statics::NewProp_bRotatedInSourceImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperSprite_Statics::NewProp_bRotatedInSourceImage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperSprite_Statics::NewProp_bTrimmedInSourceImage_MetaData[] = {
		{ "Category", "Sprite" },
		{ "Comment", "// This texture is trimmed, consider the values above\n" },
		{ "ModuleRelativePath", "Classes/PaperSprite.h" },
		{ "ToolTip", "This texture is trimmed, consider the values above" },
	};
#endif
	void Z_Construct_UClass_UPaperSprite_Statics::NewProp_bTrimmedInSourceImage_SetBit(void* Obj)
	{
		((UPaperSprite*)Obj)->bTrimmedInSourceImage = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPaperSprite_Statics::NewProp_bTrimmedInSourceImage = { "bTrimmedInSourceImage", nullptr, (EPropertyFlags)0x00200c0800000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPaperSprite), &Z_Construct_UClass_UPaperSprite_Statics::NewProp_bTrimmedInSourceImage_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPaperSprite_Statics::NewProp_bTrimmedInSourceImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperSprite_Statics::NewProp_bTrimmedInSourceImage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperSprite_Statics::NewProp_SourceImageDimensionBeforeTrimming_MetaData[] = {
		{ "Category", "Sprite" },
		{ "Comment", "// Dimensions of SourceImage\n" },
		{ "EditCondition", "bTrimmedInSourceImage" },
		{ "ModuleRelativePath", "Classes/PaperSprite.h" },
		{ "ToolTip", "Dimensions of SourceImage" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPaperSprite_Statics::NewProp_SourceImageDimensionBeforeTrimming = { "SourceImageDimensionBeforeTrimming", nullptr, (EPropertyFlags)0x00200c0800000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPaperSprite, SourceImageDimensionBeforeTrimming), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UPaperSprite_Statics::NewProp_SourceImageDimensionBeforeTrimming_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperSprite_Statics::NewProp_SourceImageDimensionBeforeTrimming_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperSprite_Statics::NewProp_OriginInSourceImageBeforeTrimming_MetaData[] = {
		{ "Category", "Sprite" },
		{ "Comment", "// Origin within SourceImage, prior to atlasing\n" },
		{ "EditCondition", "bTrimmedInSourceImage" },
		{ "ModuleRelativePath", "Classes/PaperSprite.h" },
		{ "ToolTip", "Origin within SourceImage, prior to atlasing" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPaperSprite_Statics::NewProp_OriginInSourceImageBeforeTrimming = { "OriginInSourceImageBeforeTrimming", nullptr, (EPropertyFlags)0x00200c0800000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPaperSprite, OriginInSourceImageBeforeTrimming), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UPaperSprite_Statics::NewProp_OriginInSourceImageBeforeTrimming_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperSprite_Statics::NewProp_OriginInSourceImageBeforeTrimming_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPaperSprite_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperSprite_Statics::NewProp_BakedRenderData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperSprite_Statics::NewProp_BakedRenderData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperSprite_Statics::NewProp_AlternateMaterialSplitIndex,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperSprite_Statics::NewProp_AtlasGroup,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperSprite_Statics::NewProp_RenderGeometry,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperSprite_Statics::NewProp_CollisionThickness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperSprite_Statics::NewProp_CollisionGeometry,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperSprite_Statics::NewProp_bSnapPivotToPixelGrid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperSprite_Statics::NewProp_CustomPivotPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperSprite_Statics::NewProp_PivotMode,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperSprite_Statics::NewProp_BodySetup,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperSprite_Statics::NewProp_PixelsPerUnrealUnit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperSprite_Statics::NewProp_SpriteCollisionDomain,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperSprite_Statics::NewProp_Sockets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperSprite_Statics::NewProp_Sockets_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperSprite_Statics::NewProp_AlternateMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperSprite_Statics::NewProp_DefaultMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperSprite_Statics::NewProp_BakedSourceTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperSprite_Statics::NewProp_BakedSourceDimension,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperSprite_Statics::NewProp_BakedSourceUV,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperSprite_Statics::NewProp_AdditionalSourceTextures,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperSprite_Statics::NewProp_AdditionalSourceTextures_Inner,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperSprite_Statics::NewProp_SourceTextureCacheNeverSerialized,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperSprite_Statics::NewProp_SourceTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperSprite_Statics::NewProp_SourceDimension,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperSprite_Statics::NewProp_SourceUV,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperSprite_Statics::NewProp_SourceTextureDimension,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperSprite_Statics::NewProp_bRotatedInSourceImage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperSprite_Statics::NewProp_bTrimmedInSourceImage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperSprite_Statics::NewProp_SourceImageDimensionBeforeTrimming,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperSprite_Statics::NewProp_OriginInSourceImageBeforeTrimming,
#endif // WITH_EDITORONLY_DATA
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UPaperSprite_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UInterface_CollisionDataProvider_NoRegister, (int32)VTABLE_OFFSET(UPaperSprite, IInterface_CollisionDataProvider), false },
			{ Z_Construct_UClass_USlateTextureAtlasInterface_NoRegister, (int32)VTABLE_OFFSET(UPaperSprite, ISlateTextureAtlasInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPaperSprite_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPaperSprite>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPaperSprite_Statics::ClassParams = {
		&UPaperSprite::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPaperSprite_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPaperSprite_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPaperSprite_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperSprite_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPaperSprite()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPaperSprite_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPaperSprite, 1000749563);
	template<> PAPER2D_API UClass* StaticClass<UPaperSprite>()
	{
		return UPaperSprite::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPaperSprite(Z_Construct_UClass_UPaperSprite, &UPaperSprite::StaticClass, TEXT("/Script/Paper2D"), TEXT("UPaperSprite"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPaperSprite);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UPaperSprite)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
