// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef APPLEIMAGEUTILS_AppleImageUtilsTypes_generated_h
#error "AppleImageUtilsTypes.generated.h already included, missing '#pragma once' in AppleImageUtilsTypes.h"
#endif
#define APPLEIMAGEUTILS_AppleImageUtilsTypes_generated_h

#define Engine_Plugins_Runtime_AppleImageUtils_Source_AppleImageUtils_Public_AppleImageUtilsTypes_h_37_SPARSE_DATA
#define Engine_Plugins_Runtime_AppleImageUtils_Source_AppleImageUtils_Public_AppleImageUtilsTypes_h_37_RPC_WRAPPERS
#define Engine_Plugins_Runtime_AppleImageUtils_Source_AppleImageUtils_Public_AppleImageUtilsTypes_h_37_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Plugins_Runtime_AppleImageUtils_Source_AppleImageUtils_Public_AppleImageUtilsTypes_h_37_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAppleImageInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAppleImageInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAppleImageInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAppleImageInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAppleImageInterface(UAppleImageInterface&&); \
	NO_API UAppleImageInterface(const UAppleImageInterface&); \
public:


#define Engine_Plugins_Runtime_AppleImageUtils_Source_AppleImageUtils_Public_AppleImageUtilsTypes_h_37_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAppleImageInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAppleImageInterface(UAppleImageInterface&&); \
	NO_API UAppleImageInterface(const UAppleImageInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAppleImageInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAppleImageInterface); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAppleImageInterface)


#define Engine_Plugins_Runtime_AppleImageUtils_Source_AppleImageUtils_Public_AppleImageUtilsTypes_h_37_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUAppleImageInterface(); \
	friend struct Z_Construct_UClass_UAppleImageInterface_Statics; \
public: \
	DECLARE_CLASS(UAppleImageInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/AppleImageUtils"), NO_API) \
	DECLARE_SERIALIZER(UAppleImageInterface)


#define Engine_Plugins_Runtime_AppleImageUtils_Source_AppleImageUtils_Public_AppleImageUtilsTypes_h_37_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Engine_Plugins_Runtime_AppleImageUtils_Source_AppleImageUtils_Public_AppleImageUtilsTypes_h_37_GENERATED_UINTERFACE_BODY() \
	Engine_Plugins_Runtime_AppleImageUtils_Source_AppleImageUtils_Public_AppleImageUtilsTypes_h_37_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_Runtime_AppleImageUtils_Source_AppleImageUtils_Public_AppleImageUtilsTypes_h_37_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Engine_Plugins_Runtime_AppleImageUtils_Source_AppleImageUtils_Public_AppleImageUtilsTypes_h_37_GENERATED_UINTERFACE_BODY() \
	Engine_Plugins_Runtime_AppleImageUtils_Source_AppleImageUtils_Public_AppleImageUtilsTypes_h_37_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_Runtime_AppleImageUtils_Source_AppleImageUtils_Public_AppleImageUtilsTypes_h_37_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IAppleImageInterface() {} \
public: \
	typedef UAppleImageInterface UClassType; \
	typedef IAppleImageInterface ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Engine_Plugins_Runtime_AppleImageUtils_Source_AppleImageUtils_Public_AppleImageUtilsTypes_h_37_INCLASS_IINTERFACE \
protected: \
	virtual ~IAppleImageInterface() {} \
public: \
	typedef UAppleImageInterface UClassType; \
	typedef IAppleImageInterface ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Engine_Plugins_Runtime_AppleImageUtils_Source_AppleImageUtils_Public_AppleImageUtilsTypes_h_34_PROLOG
#define Engine_Plugins_Runtime_AppleImageUtils_Source_AppleImageUtils_Public_AppleImageUtilsTypes_h_45_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Runtime_AppleImageUtils_Source_AppleImageUtils_Public_AppleImageUtilsTypes_h_37_SPARSE_DATA \
	Engine_Plugins_Runtime_AppleImageUtils_Source_AppleImageUtils_Public_AppleImageUtilsTypes_h_37_RPC_WRAPPERS \
	Engine_Plugins_Runtime_AppleImageUtils_Source_AppleImageUtils_Public_AppleImageUtilsTypes_h_37_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_Runtime_AppleImageUtils_Source_AppleImageUtils_Public_AppleImageUtilsTypes_h_45_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Runtime_AppleImageUtils_Source_AppleImageUtils_Public_AppleImageUtilsTypes_h_37_SPARSE_DATA \
	Engine_Plugins_Runtime_AppleImageUtils_Source_AppleImageUtils_Public_AppleImageUtilsTypes_h_37_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_Runtime_AppleImageUtils_Source_AppleImageUtils_Public_AppleImageUtilsTypes_h_37_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> APPLEIMAGEUTILS_API UClass* StaticClass<class UAppleImageInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_Runtime_AppleImageUtils_Source_AppleImageUtils_Public_AppleImageUtilsTypes_h


#define FOREACH_ENUM_EAPPLETEXTURETYPE(op) \
	op(EAppleTextureType::Unknown) \
	op(EAppleTextureType::Image) \
	op(EAppleTextureType::PixelBuffer) \
	op(EAppleTextureType::Surface) \
	op(EAppleTextureType::MetalTexture) 

enum class EAppleTextureType : uint8;
template<> APPLEIMAGEUTILS_API UEnum* StaticEnum<EAppleTextureType>();

#define FOREACH_ENUM_ETEXTUREROTATIONDIRECTION(op) \
	op(ETextureRotationDirection::None) \
	op(ETextureRotationDirection::Left) \
	op(ETextureRotationDirection::Right) \
	op(ETextureRotationDirection::Down) 

enum class ETextureRotationDirection : uint8;
template<> APPLEIMAGEUTILS_API UEnum* StaticEnum<ETextureRotationDirection>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
