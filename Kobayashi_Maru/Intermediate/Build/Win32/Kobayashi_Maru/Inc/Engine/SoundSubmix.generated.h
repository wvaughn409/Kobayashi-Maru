// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USoundWave;
class UObject;
enum class EAudioRecordingExportType : uint8;
#ifdef ENGINE_SoundSubmix_generated_h
#error "SoundSubmix.generated.h already included, missing '#pragma once' in SoundSubmix.h"
#endif
#define ENGINE_SoundSubmix_generated_h

#define Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_35_DELEGATE \
struct _Script_Engine_eventOnSubmixEnvelope_Parms \
{ \
	TArray<float> Envelope; \
}; \
static inline void FOnSubmixEnvelope_DelegateWrapper(const FMulticastScriptDelegate& OnSubmixEnvelope, TArray<float> const& Envelope) \
{ \
	_Script_Engine_eventOnSubmixEnvelope_Parms Parms; \
	Parms.Envelope=Envelope; \
	OnSubmixEnvelope.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_30_DELEGATE \
struct _Script_Engine_eventOnSubmixRecordedFileDone_Parms \
{ \
	const USoundWave* ResultingSoundWave; \
}; \
static inline void FOnSubmixRecordedFileDone_DelegateWrapper(const FMulticastScriptDelegate& OnSubmixRecordedFileDone, const USoundWave* ResultingSoundWave) \
{ \
	_Script_Engine_eventOnSubmixRecordedFileDone_Parms Parms; \
	Parms.ResultingSoundWave=ResultingSoundWave; \
	OnSubmixRecordedFileDone.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_54_SPARSE_DATA
#define Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_54_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_54_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_54_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSoundSubmixBase(); \
	friend struct Z_Construct_UClass_USoundSubmixBase_Statics; \
public: \
	DECLARE_CLASS(USoundSubmixBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(USoundSubmixBase) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_54_INCLASS \
private: \
	static void StaticRegisterNativesUSoundSubmixBase(); \
	friend struct Z_Construct_UClass_USoundSubmixBase_Statics; \
public: \
	DECLARE_CLASS(USoundSubmixBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(USoundSubmixBase) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_54_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USoundSubmixBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundSubmixBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USoundSubmixBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundSubmixBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USoundSubmixBase(USoundSubmixBase&&); \
	NO_API USoundSubmixBase(const USoundSubmixBase&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_54_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USoundSubmixBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USoundSubmixBase(USoundSubmixBase&&); \
	NO_API USoundSubmixBase(const USoundSubmixBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USoundSubmixBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundSubmixBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundSubmixBase)


#define Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_54_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_51_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_54_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_54_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_54_SPARSE_DATA \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_54_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_54_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_54_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_54_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_54_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_54_SPARSE_DATA \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_54_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_54_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_54_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class SoundSubmixBase."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class USoundSubmixBase>();

#define Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_109_SPARSE_DATA
#define Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_109_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_109_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_109_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSoundSubmixWithParentBase(); \
	friend struct Z_Construct_UClass_USoundSubmixWithParentBase_Statics; \
public: \
	DECLARE_CLASS(USoundSubmixWithParentBase, USoundSubmixBase, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(USoundSubmixWithParentBase)


#define Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_109_INCLASS \
private: \
	static void StaticRegisterNativesUSoundSubmixWithParentBase(); \
	friend struct Z_Construct_UClass_USoundSubmixWithParentBase_Statics; \
public: \
	DECLARE_CLASS(USoundSubmixWithParentBase, USoundSubmixBase, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(USoundSubmixWithParentBase)


#define Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_109_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USoundSubmixWithParentBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundSubmixWithParentBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USoundSubmixWithParentBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundSubmixWithParentBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USoundSubmixWithParentBase(USoundSubmixWithParentBase&&); \
	NO_API USoundSubmixWithParentBase(const USoundSubmixWithParentBase&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_109_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USoundSubmixWithParentBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USoundSubmixWithParentBase(USoundSubmixWithParentBase&&); \
	NO_API USoundSubmixWithParentBase(const USoundSubmixWithParentBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USoundSubmixWithParentBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundSubmixWithParentBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundSubmixWithParentBase)


#define Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_109_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_106_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_109_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_109_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_109_SPARSE_DATA \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_109_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_109_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_109_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_109_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_109_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_109_SPARSE_DATA \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_109_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_109_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_109_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class SoundSubmixWithParentBase."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class USoundSubmixWithParentBase>();

#define Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_136_SPARSE_DATA
#define Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_136_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetSubmixOutputVolume); \
	DECLARE_FUNCTION(execAddEnvelopeFollowerDelegate); \
	DECLARE_FUNCTION(execStopEnvelopeFollowing); \
	DECLARE_FUNCTION(execStartEnvelopeFollowing); \
	DECLARE_FUNCTION(execStopRecordingOutput); \
	DECLARE_FUNCTION(execStartRecordingOutput);


#define Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_136_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetSubmixOutputVolume); \
	DECLARE_FUNCTION(execAddEnvelopeFollowerDelegate); \
	DECLARE_FUNCTION(execStopEnvelopeFollowing); \
	DECLARE_FUNCTION(execStartEnvelopeFollowing); \
	DECLARE_FUNCTION(execStopRecordingOutput); \
	DECLARE_FUNCTION(execStartRecordingOutput);


#define Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_136_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSoundSubmix(); \
	friend struct Z_Construct_UClass_USoundSubmix_Statics; \
public: \
	DECLARE_CLASS(USoundSubmix, USoundSubmixWithParentBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(USoundSubmix)


#define Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_136_INCLASS \
private: \
	static void StaticRegisterNativesUSoundSubmix(); \
	friend struct Z_Construct_UClass_USoundSubmix_Statics; \
public: \
	DECLARE_CLASS(USoundSubmix, USoundSubmixWithParentBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(USoundSubmix)


#define Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_136_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USoundSubmix(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundSubmix) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USoundSubmix); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundSubmix); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USoundSubmix(USoundSubmix&&); \
	NO_API USoundSubmix(const USoundSubmix&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_136_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USoundSubmix(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USoundSubmix(USoundSubmix&&); \
	NO_API USoundSubmix(const USoundSubmix&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USoundSubmix); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundSubmix); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundSubmix)


#define Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_136_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_133_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_136_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_136_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_136_SPARSE_DATA \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_136_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_136_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_136_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_136_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_136_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_136_SPARSE_DATA \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_136_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_136_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_136_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class SoundSubmix."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class USoundSubmix>();

#define Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_215_SPARSE_DATA
#define Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_215_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_215_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_215_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSoundfieldSubmix(); \
	friend struct Z_Construct_UClass_USoundfieldSubmix_Statics; \
public: \
	DECLARE_CLASS(USoundfieldSubmix, USoundSubmixWithParentBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(USoundfieldSubmix)


#define Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_215_INCLASS \
private: \
	static void StaticRegisterNativesUSoundfieldSubmix(); \
	friend struct Z_Construct_UClass_USoundfieldSubmix_Statics; \
public: \
	DECLARE_CLASS(USoundfieldSubmix, USoundSubmixWithParentBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(USoundfieldSubmix)


#define Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_215_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USoundfieldSubmix(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundfieldSubmix) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USoundfieldSubmix); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundfieldSubmix); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USoundfieldSubmix(USoundfieldSubmix&&); \
	NO_API USoundfieldSubmix(const USoundfieldSubmix&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_215_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USoundfieldSubmix(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USoundfieldSubmix(USoundfieldSubmix&&); \
	NO_API USoundfieldSubmix(const USoundfieldSubmix&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USoundfieldSubmix); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundfieldSubmix); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundfieldSubmix)


#define Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_215_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_212_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_215_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_215_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_215_SPARSE_DATA \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_215_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_215_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_215_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_215_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_215_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_215_SPARSE_DATA \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_215_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_215_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_215_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class SoundfieldSubmix."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class USoundfieldSubmix>();

#define Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_262_SPARSE_DATA
#define Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_262_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_262_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_262_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEndpointSubmix(); \
	friend struct Z_Construct_UClass_UEndpointSubmix_Statics; \
public: \
	DECLARE_CLASS(UEndpointSubmix, USoundSubmixBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UEndpointSubmix)


#define Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_262_INCLASS \
private: \
	static void StaticRegisterNativesUEndpointSubmix(); \
	friend struct Z_Construct_UClass_UEndpointSubmix_Statics; \
public: \
	DECLARE_CLASS(UEndpointSubmix, USoundSubmixBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UEndpointSubmix)


#define Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_262_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEndpointSubmix(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEndpointSubmix) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEndpointSubmix); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEndpointSubmix); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEndpointSubmix(UEndpointSubmix&&); \
	NO_API UEndpointSubmix(const UEndpointSubmix&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_262_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEndpointSubmix(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEndpointSubmix(UEndpointSubmix&&); \
	NO_API UEndpointSubmix(const UEndpointSubmix&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEndpointSubmix); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEndpointSubmix); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEndpointSubmix)


#define Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_262_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_259_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_262_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_262_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_262_SPARSE_DATA \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_262_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_262_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_262_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_262_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_262_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_262_SPARSE_DATA \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_262_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_262_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_262_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class EndpointSubmix."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UEndpointSubmix>();

#define Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_289_SPARSE_DATA
#define Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_289_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_289_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_289_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSoundfieldEndpointSubmix(); \
	friend struct Z_Construct_UClass_USoundfieldEndpointSubmix_Statics; \
public: \
	DECLARE_CLASS(USoundfieldEndpointSubmix, USoundSubmixBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(USoundfieldEndpointSubmix)


#define Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_289_INCLASS \
private: \
	static void StaticRegisterNativesUSoundfieldEndpointSubmix(); \
	friend struct Z_Construct_UClass_USoundfieldEndpointSubmix_Statics; \
public: \
	DECLARE_CLASS(USoundfieldEndpointSubmix, USoundSubmixBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(USoundfieldEndpointSubmix)


#define Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_289_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USoundfieldEndpointSubmix(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundfieldEndpointSubmix) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USoundfieldEndpointSubmix); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundfieldEndpointSubmix); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USoundfieldEndpointSubmix(USoundfieldEndpointSubmix&&); \
	NO_API USoundfieldEndpointSubmix(const USoundfieldEndpointSubmix&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_289_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USoundfieldEndpointSubmix(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USoundfieldEndpointSubmix(USoundfieldEndpointSubmix&&); \
	NO_API USoundfieldEndpointSubmix(const USoundfieldEndpointSubmix&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USoundfieldEndpointSubmix); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundfieldEndpointSubmix); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundfieldEndpointSubmix)


#define Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_289_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_286_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_289_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_289_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_289_SPARSE_DATA \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_289_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_289_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_289_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_289_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_289_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_289_SPARSE_DATA \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_289_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_289_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_289_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class SoundfieldEndpointSubmix."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class USoundfieldEndpointSubmix>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
