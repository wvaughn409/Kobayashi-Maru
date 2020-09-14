// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AUGMENTEDREALITY_ARSharedWorldPlayerController_generated_h
#error "ARSharedWorldPlayerController.generated.h already included, missing '#pragma once' in ARSharedWorldPlayerController.h"
#endif
#define AUGMENTEDREALITY_ARSharedWorldPlayerController_generated_h

#define Engine_Source_Runtime_AugmentedReality_Public_ARSharedWorldPlayerController_h_14_SPARSE_DATA
#define Engine_Source_Runtime_AugmentedReality_Public_ARSharedWorldPlayerController_h_14_RPC_WRAPPERS \
	virtual bool ClientUpdateARWorldData_Validate(int32 , TArray<uint8> const& ); \
	virtual void ClientUpdateARWorldData_Implementation(int32 Offset, TArray<uint8> const& Buffer); \
	virtual bool ClientUpdatePreviewImageData_Validate(int32 , TArray<uint8> const& ); \
	virtual void ClientUpdatePreviewImageData_Implementation(int32 Offset, TArray<uint8> const& Buffer); \
	virtual bool ClientInitSharedWorld_Validate(int32 , int32 ); \
	virtual void ClientInitSharedWorld_Implementation(int32 PreviewImageSize, int32 ARWorldDataSize); \
	virtual bool ServerMarkReadyForReceiving_Validate(); \
	virtual void ServerMarkReadyForReceiving_Implementation(); \
 \
	DECLARE_FUNCTION(execClientUpdateARWorldData); \
	DECLARE_FUNCTION(execClientUpdatePreviewImageData); \
	DECLARE_FUNCTION(execClientInitSharedWorld); \
	DECLARE_FUNCTION(execServerMarkReadyForReceiving);


#define Engine_Source_Runtime_AugmentedReality_Public_ARSharedWorldPlayerController_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool ClientUpdateARWorldData_Validate(int32 , TArray<uint8> const& ); \
	virtual void ClientUpdateARWorldData_Implementation(int32 Offset, TArray<uint8> const& Buffer); \
	virtual bool ClientUpdatePreviewImageData_Validate(int32 , TArray<uint8> const& ); \
	virtual void ClientUpdatePreviewImageData_Implementation(int32 Offset, TArray<uint8> const& Buffer); \
	virtual bool ClientInitSharedWorld_Validate(int32 , int32 ); \
	virtual void ClientInitSharedWorld_Implementation(int32 PreviewImageSize, int32 ARWorldDataSize); \
	virtual bool ServerMarkReadyForReceiving_Validate(); \
	virtual void ServerMarkReadyForReceiving_Implementation(); \
 \
	DECLARE_FUNCTION(execClientUpdateARWorldData); \
	DECLARE_FUNCTION(execClientUpdatePreviewImageData); \
	DECLARE_FUNCTION(execClientInitSharedWorld); \
	DECLARE_FUNCTION(execServerMarkReadyForReceiving);


#define Engine_Source_Runtime_AugmentedReality_Public_ARSharedWorldPlayerController_h_14_EVENT_PARMS \
	struct ARSharedWorldPlayerController_eventClientInitSharedWorld_Parms \
	{ \
		int32 PreviewImageSize; \
		int32 ARWorldDataSize; \
	}; \
	struct ARSharedWorldPlayerController_eventClientUpdateARWorldData_Parms \
	{ \
		int32 Offset; \
		TArray<uint8> Buffer; \
	}; \
	struct ARSharedWorldPlayerController_eventClientUpdatePreviewImageData_Parms \
	{ \
		int32 Offset; \
		TArray<uint8> Buffer; \
	};


#define Engine_Source_Runtime_AugmentedReality_Public_ARSharedWorldPlayerController_h_14_CALLBACK_WRAPPERS
#define Engine_Source_Runtime_AugmentedReality_Public_ARSharedWorldPlayerController_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAARSharedWorldPlayerController(); \
	friend struct Z_Construct_UClass_AARSharedWorldPlayerController_Statics; \
public: \
	DECLARE_CLASS(AARSharedWorldPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AugmentedReality"), NO_API) \
	DECLARE_SERIALIZER(AARSharedWorldPlayerController)


#define Engine_Source_Runtime_AugmentedReality_Public_ARSharedWorldPlayerController_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAARSharedWorldPlayerController(); \
	friend struct Z_Construct_UClass_AARSharedWorldPlayerController_Statics; \
public: \
	DECLARE_CLASS(AARSharedWorldPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AugmentedReality"), NO_API) \
	DECLARE_SERIALIZER(AARSharedWorldPlayerController)


#define Engine_Source_Runtime_AugmentedReality_Public_ARSharedWorldPlayerController_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AARSharedWorldPlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AARSharedWorldPlayerController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AARSharedWorldPlayerController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AARSharedWorldPlayerController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AARSharedWorldPlayerController(AARSharedWorldPlayerController&&); \
	NO_API AARSharedWorldPlayerController(const AARSharedWorldPlayerController&); \
public:


#define Engine_Source_Runtime_AugmentedReality_Public_ARSharedWorldPlayerController_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AARSharedWorldPlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AARSharedWorldPlayerController(AARSharedWorldPlayerController&&); \
	NO_API AARSharedWorldPlayerController(const AARSharedWorldPlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AARSharedWorldPlayerController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AARSharedWorldPlayerController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AARSharedWorldPlayerController)


#define Engine_Source_Runtime_AugmentedReality_Public_ARSharedWorldPlayerController_h_14_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_AugmentedReality_Public_ARSharedWorldPlayerController_h_10_PROLOG \
	Engine_Source_Runtime_AugmentedReality_Public_ARSharedWorldPlayerController_h_14_EVENT_PARMS


#define Engine_Source_Runtime_AugmentedReality_Public_ARSharedWorldPlayerController_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AugmentedReality_Public_ARSharedWorldPlayerController_h_14_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AugmentedReality_Public_ARSharedWorldPlayerController_h_14_SPARSE_DATA \
	Engine_Source_Runtime_AugmentedReality_Public_ARSharedWorldPlayerController_h_14_RPC_WRAPPERS \
	Engine_Source_Runtime_AugmentedReality_Public_ARSharedWorldPlayerController_h_14_CALLBACK_WRAPPERS \
	Engine_Source_Runtime_AugmentedReality_Public_ARSharedWorldPlayerController_h_14_INCLASS \
	Engine_Source_Runtime_AugmentedReality_Public_ARSharedWorldPlayerController_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_AugmentedReality_Public_ARSharedWorldPlayerController_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AugmentedReality_Public_ARSharedWorldPlayerController_h_14_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AugmentedReality_Public_ARSharedWorldPlayerController_h_14_SPARSE_DATA \
	Engine_Source_Runtime_AugmentedReality_Public_ARSharedWorldPlayerController_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_AugmentedReality_Public_ARSharedWorldPlayerController_h_14_CALLBACK_WRAPPERS \
	Engine_Source_Runtime_AugmentedReality_Public_ARSharedWorldPlayerController_h_14_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_AugmentedReality_Public_ARSharedWorldPlayerController_h_14_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class ARSharedWorldPlayerController."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUGMENTEDREALITY_API UClass* StaticClass<class AARSharedWorldPlayerController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_AugmentedReality_Public_ARSharedWorldPlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
