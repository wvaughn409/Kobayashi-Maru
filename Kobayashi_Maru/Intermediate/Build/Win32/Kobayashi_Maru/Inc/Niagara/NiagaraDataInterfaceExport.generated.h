// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FBasicParticleData;
class UNiagaraSystem;
#ifdef NIAGARA_NiagaraDataInterfaceExport_generated_h
#error "NiagaraDataInterfaceExport.generated.h already included, missing '#pragma once' in NiagaraDataInterfaceExport.h"
#endif
#define NIAGARA_NiagaraDataInterfaceExport_generated_h

#define Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceExport_h_13_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FBasicParticleData_Statics; \
	NIAGARA_API static class UScriptStruct* StaticStruct();


template<> NIAGARA_API UScriptStruct* StaticStruct<struct FBasicParticleData>();

#define Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceExport_h_28_SPARSE_DATA
#define Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceExport_h_28_RPC_WRAPPERS \
	virtual void ReceiveParticleData_Implementation(TArray<FBasicParticleData> const& Data, UNiagaraSystem* NiagaraSystem) {}; \
 \
	DECLARE_FUNCTION(execReceiveParticleData);


#define Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceExport_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void ReceiveParticleData_Implementation(TArray<FBasicParticleData> const& Data, UNiagaraSystem* NiagaraSystem) {}; \
 \
	DECLARE_FUNCTION(execReceiveParticleData);


#define Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceExport_h_28_EVENT_PARMS \
	struct NiagaraParticleCallbackHandler_eventReceiveParticleData_Parms \
	{ \
		TArray<FBasicParticleData> Data; \
		UNiagaraSystem* NiagaraSystem; \
	};


#define Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceExport_h_28_CALLBACK_WRAPPERS
#define Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceExport_h_28_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNiagaraParticleCallbackHandler(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraParticleCallbackHandler) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNiagaraParticleCallbackHandler); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraParticleCallbackHandler); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNiagaraParticleCallbackHandler(UNiagaraParticleCallbackHandler&&); \
	NO_API UNiagaraParticleCallbackHandler(const UNiagaraParticleCallbackHandler&); \
public:


#define Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceExport_h_28_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNiagaraParticleCallbackHandler(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNiagaraParticleCallbackHandler(UNiagaraParticleCallbackHandler&&); \
	NO_API UNiagaraParticleCallbackHandler(const UNiagaraParticleCallbackHandler&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNiagaraParticleCallbackHandler); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraParticleCallbackHandler); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraParticleCallbackHandler)


#define Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceExport_h_28_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUNiagaraParticleCallbackHandler(); \
	friend struct Z_Construct_UClass_UNiagaraParticleCallbackHandler_Statics; \
public: \
	DECLARE_CLASS(UNiagaraParticleCallbackHandler, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Niagara"), NO_API) \
	DECLARE_SERIALIZER(UNiagaraParticleCallbackHandler)


#define Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceExport_h_28_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceExport_h_28_GENERATED_UINTERFACE_BODY() \
	Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceExport_h_28_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceExport_h_28_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceExport_h_28_GENERATED_UINTERFACE_BODY() \
	Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceExport_h_28_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceExport_h_28_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~INiagaraParticleCallbackHandler() {} \
public: \
	typedef UNiagaraParticleCallbackHandler UClassType; \
	typedef INiagaraParticleCallbackHandler ThisClass; \
	static void Execute_ReceiveParticleData(UObject* O, TArray<FBasicParticleData> const& Data, UNiagaraSystem* NiagaraSystem); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceExport_h_28_INCLASS_IINTERFACE \
protected: \
	virtual ~INiagaraParticleCallbackHandler() {} \
public: \
	typedef UNiagaraParticleCallbackHandler UClassType; \
	typedef INiagaraParticleCallbackHandler ThisClass; \
	static void Execute_ReceiveParticleData(UObject* O, TArray<FBasicParticleData> const& Data, UNiagaraSystem* NiagaraSystem); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceExport_h_25_PROLOG \
	Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceExport_h_28_EVENT_PARMS


#define Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceExport_h_33_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceExport_h_28_SPARSE_DATA \
	Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceExport_h_28_RPC_WRAPPERS \
	Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceExport_h_28_CALLBACK_WRAPPERS \
	Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceExport_h_28_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceExport_h_33_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceExport_h_28_SPARSE_DATA \
	Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceExport_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceExport_h_28_CALLBACK_WRAPPERS \
	Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceExport_h_28_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NIAGARA_API UClass* StaticClass<class UNiagaraParticleCallbackHandler>();

#define Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceExport_h_57_SPARSE_DATA
#define Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceExport_h_57_RPC_WRAPPERS
#define Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceExport_h_57_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceExport_h_57_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNiagaraDataInterfaceExport(); \
	friend struct Z_Construct_UClass_UNiagaraDataInterfaceExport_Statics; \
public: \
	DECLARE_CLASS(UNiagaraDataInterfaceExport, UNiagaraDataInterface, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Niagara"), NO_API) \
	DECLARE_SERIALIZER(UNiagaraDataInterfaceExport)


#define Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceExport_h_57_INCLASS \
private: \
	static void StaticRegisterNativesUNiagaraDataInterfaceExport(); \
	friend struct Z_Construct_UClass_UNiagaraDataInterfaceExport_Statics; \
public: \
	DECLARE_CLASS(UNiagaraDataInterfaceExport, UNiagaraDataInterface, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Niagara"), NO_API) \
	DECLARE_SERIALIZER(UNiagaraDataInterfaceExport)


#define Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceExport_h_57_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNiagaraDataInterfaceExport(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraDataInterfaceExport) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNiagaraDataInterfaceExport); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraDataInterfaceExport); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNiagaraDataInterfaceExport(UNiagaraDataInterfaceExport&&); \
	NO_API UNiagaraDataInterfaceExport(const UNiagaraDataInterfaceExport&); \
public:


#define Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceExport_h_57_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNiagaraDataInterfaceExport() { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNiagaraDataInterfaceExport(UNiagaraDataInterfaceExport&&); \
	NO_API UNiagaraDataInterfaceExport(const UNiagaraDataInterfaceExport&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNiagaraDataInterfaceExport); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraDataInterfaceExport); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UNiagaraDataInterfaceExport)


#define Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceExport_h_57_PRIVATE_PROPERTY_OFFSET
#define Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceExport_h_54_PROLOG
#define Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceExport_h_57_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceExport_h_57_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceExport_h_57_SPARSE_DATA \
	Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceExport_h_57_RPC_WRAPPERS \
	Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceExport_h_57_INCLASS \
	Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceExport_h_57_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceExport_h_57_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceExport_h_57_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceExport_h_57_SPARSE_DATA \
	Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceExport_h_57_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceExport_h_57_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceExport_h_57_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class NiagaraDataInterfaceExport."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NIAGARA_API UClass* StaticClass<class UNiagaraDataInterfaceExport>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceExport_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
