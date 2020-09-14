// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMaterialInstanceDynamic;
struct FSlateBrush;
struct FSlateFontInfo;
struct FVector2D;
struct FLinearColor;
struct FSlateColor;
#ifdef UMG_TextBlock_generated_h
#error "TextBlock.generated.h already included, missing '#pragma once' in TextBlock.h"
#endif
#define UMG_TextBlock_generated_h

#define Engine_Source_Runtime_UMG_Public_Components_TextBlock_h_24_SPARSE_DATA
#define Engine_Source_Runtime_UMG_Public_Components_TextBlock_h_24_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetText); \
	DECLARE_FUNCTION(execGetText); \
	DECLARE_FUNCTION(execGetDynamicOutlineMaterial); \
	DECLARE_FUNCTION(execGetDynamicFontMaterial); \
	DECLARE_FUNCTION(execSetAutoWrapText); \
	DECLARE_FUNCTION(execSetMinDesiredWidth); \
	DECLARE_FUNCTION(execSetStrikeBrush); \
	DECLARE_FUNCTION(execSetFont); \
	DECLARE_FUNCTION(execSetShadowOffset); \
	DECLARE_FUNCTION(execSetShadowColorAndOpacity); \
	DECLARE_FUNCTION(execSetOpacity); \
	DECLARE_FUNCTION(execSetColorAndOpacity);


#define Engine_Source_Runtime_UMG_Public_Components_TextBlock_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetText); \
	DECLARE_FUNCTION(execGetText); \
	DECLARE_FUNCTION(execGetDynamicOutlineMaterial); \
	DECLARE_FUNCTION(execGetDynamicFontMaterial); \
	DECLARE_FUNCTION(execSetAutoWrapText); \
	DECLARE_FUNCTION(execSetMinDesiredWidth); \
	DECLARE_FUNCTION(execSetStrikeBrush); \
	DECLARE_FUNCTION(execSetFont); \
	DECLARE_FUNCTION(execSetShadowOffset); \
	DECLARE_FUNCTION(execSetShadowColorAndOpacity); \
	DECLARE_FUNCTION(execSetOpacity); \
	DECLARE_FUNCTION(execSetColorAndOpacity);


#define Engine_Source_Runtime_UMG_Public_Components_TextBlock_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTextBlock(); \
	friend struct Z_Construct_UClass_UTextBlock_Statics; \
public: \
	DECLARE_CLASS(UTextBlock, UTextLayoutWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(UTextBlock)


#define Engine_Source_Runtime_UMG_Public_Components_TextBlock_h_24_INCLASS \
private: \
	static void StaticRegisterNativesUTextBlock(); \
	friend struct Z_Construct_UClass_UTextBlock_Statics; \
public: \
	DECLARE_CLASS(UTextBlock, UTextLayoutWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(UTextBlock)


#define Engine_Source_Runtime_UMG_Public_Components_TextBlock_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTextBlock(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTextBlock) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTextBlock); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTextBlock); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTextBlock(UTextBlock&&); \
	NO_API UTextBlock(const UTextBlock&); \
public:


#define Engine_Source_Runtime_UMG_Public_Components_TextBlock_h_24_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTextBlock(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTextBlock(UTextBlock&&); \
	NO_API UTextBlock(const UTextBlock&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTextBlock); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTextBlock); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTextBlock)


#define Engine_Source_Runtime_UMG_Public_Components_TextBlock_h_24_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__bSimpleTextMode() { return STRUCT_OFFSET(UTextBlock, bSimpleTextMode); }


#define Engine_Source_Runtime_UMG_Public_Components_TextBlock_h_21_PROLOG
#define Engine_Source_Runtime_UMG_Public_Components_TextBlock_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_UMG_Public_Components_TextBlock_h_24_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_UMG_Public_Components_TextBlock_h_24_SPARSE_DATA \
	Engine_Source_Runtime_UMG_Public_Components_TextBlock_h_24_RPC_WRAPPERS \
	Engine_Source_Runtime_UMG_Public_Components_TextBlock_h_24_INCLASS \
	Engine_Source_Runtime_UMG_Public_Components_TextBlock_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_UMG_Public_Components_TextBlock_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_UMG_Public_Components_TextBlock_h_24_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_UMG_Public_Components_TextBlock_h_24_SPARSE_DATA \
	Engine_Source_Runtime_UMG_Public_Components_TextBlock_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_UMG_Public_Components_TextBlock_h_24_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_UMG_Public_Components_TextBlock_h_24_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class TextBlock."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UMG_API UClass* StaticClass<class UTextBlock>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_UMG_Public_Components_TextBlock_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
