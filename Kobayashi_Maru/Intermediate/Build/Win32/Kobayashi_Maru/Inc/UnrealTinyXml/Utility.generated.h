// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UXmlDocument;
#ifdef UNREALTINYXML_Utility_generated_h
#error "Utility.generated.h already included, missing '#pragma once' in Utility.h"
#endif
#define UNREALTINYXML_Utility_generated_h

#define Engine_Plugins_Marketplace_TinyXmlForUnreal_Source_UnrealTinyXml_Public_Utility_h_27_SPARSE_DATA
#define Engine_Plugins_Marketplace_TinyXmlForUnreal_Source_UnrealTinyXml_Public_Utility_h_27_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCreateXmlDocument); \
	DECLARE_FUNCTION(execSplitToFloat); \
	DECLARE_FUNCTION(execSplitToInt); \
	DECLARE_FUNCTION(execSplitToStr); \
	DECLARE_FUNCTION(execGetProjectConfigDir); \
	DECLARE_FUNCTION(execGetProjectDir); \
	DECLARE_FUNCTION(execGetProjectContentDir);


#define Engine_Plugins_Marketplace_TinyXmlForUnreal_Source_UnrealTinyXml_Public_Utility_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCreateXmlDocument); \
	DECLARE_FUNCTION(execSplitToFloat); \
	DECLARE_FUNCTION(execSplitToInt); \
	DECLARE_FUNCTION(execSplitToStr); \
	DECLARE_FUNCTION(execGetProjectConfigDir); \
	DECLARE_FUNCTION(execGetProjectDir); \
	DECLARE_FUNCTION(execGetProjectContentDir);


#define Engine_Plugins_Marketplace_TinyXmlForUnreal_Source_UnrealTinyXml_Public_Utility_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUtility(); \
	friend struct Z_Construct_UClass_UUtility_Statics; \
public: \
	DECLARE_CLASS(UUtility, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealTinyXml"), NO_API) \
	DECLARE_SERIALIZER(UUtility)


#define Engine_Plugins_Marketplace_TinyXmlForUnreal_Source_UnrealTinyXml_Public_Utility_h_27_INCLASS \
private: \
	static void StaticRegisterNativesUUtility(); \
	friend struct Z_Construct_UClass_UUtility_Statics; \
public: \
	DECLARE_CLASS(UUtility, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealTinyXml"), NO_API) \
	DECLARE_SERIALIZER(UUtility)


#define Engine_Plugins_Marketplace_TinyXmlForUnreal_Source_UnrealTinyXml_Public_Utility_h_27_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUtility(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUtility) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUtility); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUtility); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUtility(UUtility&&); \
	NO_API UUtility(const UUtility&); \
public:


#define Engine_Plugins_Marketplace_TinyXmlForUnreal_Source_UnrealTinyXml_Public_Utility_h_27_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUtility(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUtility(UUtility&&); \
	NO_API UUtility(const UUtility&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUtility); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUtility); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUtility)


#define Engine_Plugins_Marketplace_TinyXmlForUnreal_Source_UnrealTinyXml_Public_Utility_h_27_PRIVATE_PROPERTY_OFFSET
#define Engine_Plugins_Marketplace_TinyXmlForUnreal_Source_UnrealTinyXml_Public_Utility_h_24_PROLOG
#define Engine_Plugins_Marketplace_TinyXmlForUnreal_Source_UnrealTinyXml_Public_Utility_h_27_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Marketplace_TinyXmlForUnreal_Source_UnrealTinyXml_Public_Utility_h_27_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Marketplace_TinyXmlForUnreal_Source_UnrealTinyXml_Public_Utility_h_27_SPARSE_DATA \
	Engine_Plugins_Marketplace_TinyXmlForUnreal_Source_UnrealTinyXml_Public_Utility_h_27_RPC_WRAPPERS \
	Engine_Plugins_Marketplace_TinyXmlForUnreal_Source_UnrealTinyXml_Public_Utility_h_27_INCLASS \
	Engine_Plugins_Marketplace_TinyXmlForUnreal_Source_UnrealTinyXml_Public_Utility_h_27_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_Marketplace_TinyXmlForUnreal_Source_UnrealTinyXml_Public_Utility_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Marketplace_TinyXmlForUnreal_Source_UnrealTinyXml_Public_Utility_h_27_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Marketplace_TinyXmlForUnreal_Source_UnrealTinyXml_Public_Utility_h_27_SPARSE_DATA \
	Engine_Plugins_Marketplace_TinyXmlForUnreal_Source_UnrealTinyXml_Public_Utility_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_Marketplace_TinyXmlForUnreal_Source_UnrealTinyXml_Public_Utility_h_27_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_Marketplace_TinyXmlForUnreal_Source_UnrealTinyXml_Public_Utility_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALTINYXML_API UClass* StaticClass<class UUtility>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_Marketplace_TinyXmlForUnreal_Source_UnrealTinyXml_Public_Utility_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
