// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UNiagaraSystem;
class UNiagaraComponent;
#ifdef NIAGARA_NiagaraPreviewGrid_generated_h
#error "NiagaraPreviewGrid.generated.h already included, missing '#pragma once' in NiagaraPreviewGrid.h"
#endif
#define NIAGARA_NiagaraPreviewGrid_generated_h

#define Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_20_SPARSE_DATA
#define Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_20_RPC_WRAPPERS
#define Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_20_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_20_EVENT_PARMS \
	struct NiagaraPreviewBase_eventSetLabelText_Parms \
	{ \
		FText InXAxisText; \
		FText InYAxisText; \
	}; \
	struct NiagaraPreviewBase_eventSetSystem_Parms \
	{ \
		UNiagaraSystem* InSystem; \
	};


#define Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_20_CALLBACK_WRAPPERS
#define Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesANiagaraPreviewBase(); \
	friend struct Z_Construct_UClass_ANiagaraPreviewBase_Statics; \
public: \
	DECLARE_CLASS(ANiagaraPreviewBase, AActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Niagara"), NO_API) \
	DECLARE_SERIALIZER(ANiagaraPreviewBase)


#define Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_20_INCLASS \
private: \
	static void StaticRegisterNativesANiagaraPreviewBase(); \
	friend struct Z_Construct_UClass_ANiagaraPreviewBase_Statics; \
public: \
	DECLARE_CLASS(ANiagaraPreviewBase, AActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Niagara"), NO_API) \
	DECLARE_SERIALIZER(ANiagaraPreviewBase)


#define Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ANiagaraPreviewBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ANiagaraPreviewBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANiagaraPreviewBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANiagaraPreviewBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ANiagaraPreviewBase(ANiagaraPreviewBase&&); \
	NO_API ANiagaraPreviewBase(const ANiagaraPreviewBase&); \
public:


#define Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ANiagaraPreviewBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ANiagaraPreviewBase(ANiagaraPreviewBase&&); \
	NO_API ANiagaraPreviewBase(const ANiagaraPreviewBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANiagaraPreviewBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANiagaraPreviewBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ANiagaraPreviewBase)


#define Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_20_PRIVATE_PROPERTY_OFFSET
#define Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_17_PROLOG \
	Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_20_EVENT_PARMS


#define Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_20_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_20_SPARSE_DATA \
	Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_20_RPC_WRAPPERS \
	Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_20_CALLBACK_WRAPPERS \
	Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_20_INCLASS \
	Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_20_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_20_SPARSE_DATA \
	Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_20_CALLBACK_WRAPPERS \
	Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_20_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NIAGARA_API UClass* StaticClass<class ANiagaraPreviewBase>();

#define Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_42_SPARSE_DATA
#define Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_42_RPC_WRAPPERS \
	virtual void ApplyToPreview_Implementation(UNiagaraComponent* PreviewComponent, int32 PreviewIndex, bool bIsXAxis, FString& OutLabelText); \
	virtual int32 Num_Implementation(); \
 \
	DECLARE_FUNCTION(execApplyToPreview); \
	DECLARE_FUNCTION(execNum);


#define Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_42_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execApplyToPreview); \
	DECLARE_FUNCTION(execNum);


#define Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_42_EVENT_PARMS \
	struct NiagaraPreviewAxis_eventApplyToPreview_Parms \
	{ \
		UNiagaraComponent* PreviewComponent; \
		int32 PreviewIndex; \
		bool bIsXAxis; \
		FString OutLabelText; \
	}; \
	struct NiagaraPreviewAxis_eventNum_Parms \
	{ \
		int32 ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		NiagaraPreviewAxis_eventNum_Parms() \
			: ReturnValue(0) \
		{ \
		} \
	};


#define Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_42_CALLBACK_WRAPPERS
#define Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_42_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNiagaraPreviewAxis(); \
	friend struct Z_Construct_UClass_UNiagaraPreviewAxis_Statics; \
public: \
	DECLARE_CLASS(UNiagaraPreviewAxis, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Niagara"), NO_API) \
	DECLARE_SERIALIZER(UNiagaraPreviewAxis)


#define Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_42_INCLASS \
private: \
	static void StaticRegisterNativesUNiagaraPreviewAxis(); \
	friend struct Z_Construct_UClass_UNiagaraPreviewAxis_Statics; \
public: \
	DECLARE_CLASS(UNiagaraPreviewAxis, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Niagara"), NO_API) \
	DECLARE_SERIALIZER(UNiagaraPreviewAxis)


#define Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_42_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNiagaraPreviewAxis(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraPreviewAxis) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNiagaraPreviewAxis); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraPreviewAxis); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNiagaraPreviewAxis(UNiagaraPreviewAxis&&); \
	NO_API UNiagaraPreviewAxis(const UNiagaraPreviewAxis&); \
public:


#define Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_42_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNiagaraPreviewAxis(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNiagaraPreviewAxis(UNiagaraPreviewAxis&&); \
	NO_API UNiagaraPreviewAxis(const UNiagaraPreviewAxis&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNiagaraPreviewAxis); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraPreviewAxis); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraPreviewAxis)


#define Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_42_PRIVATE_PROPERTY_OFFSET
#define Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_39_PROLOG \
	Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_42_EVENT_PARMS


#define Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_42_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_42_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_42_SPARSE_DATA \
	Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_42_RPC_WRAPPERS \
	Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_42_CALLBACK_WRAPPERS \
	Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_42_INCLASS \
	Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_42_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_42_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_42_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_42_SPARSE_DATA \
	Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_42_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_42_CALLBACK_WRAPPERS \
	Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_42_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_42_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NIAGARA_API UClass* StaticClass<class UNiagaraPreviewAxis>();

#define Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_67_SPARSE_DATA
#define Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_67_RPC_WRAPPERS
#define Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_67_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_67_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNiagaraPreviewAxis_InterpParamBase(); \
	friend struct Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamBase_Statics; \
public: \
	DECLARE_CLASS(UNiagaraPreviewAxis_InterpParamBase, UNiagaraPreviewAxis, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Niagara"), NO_API) \
	DECLARE_SERIALIZER(UNiagaraPreviewAxis_InterpParamBase)


#define Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_67_INCLASS \
private: \
	static void StaticRegisterNativesUNiagaraPreviewAxis_InterpParamBase(); \
	friend struct Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamBase_Statics; \
public: \
	DECLARE_CLASS(UNiagaraPreviewAxis_InterpParamBase, UNiagaraPreviewAxis, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Niagara"), NO_API) \
	DECLARE_SERIALIZER(UNiagaraPreviewAxis_InterpParamBase)


#define Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_67_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNiagaraPreviewAxis_InterpParamBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraPreviewAxis_InterpParamBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNiagaraPreviewAxis_InterpParamBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraPreviewAxis_InterpParamBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNiagaraPreviewAxis_InterpParamBase(UNiagaraPreviewAxis_InterpParamBase&&); \
	NO_API UNiagaraPreviewAxis_InterpParamBase(const UNiagaraPreviewAxis_InterpParamBase&); \
public:


#define Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_67_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNiagaraPreviewAxis_InterpParamBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNiagaraPreviewAxis_InterpParamBase(UNiagaraPreviewAxis_InterpParamBase&&); \
	NO_API UNiagaraPreviewAxis_InterpParamBase(const UNiagaraPreviewAxis_InterpParamBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNiagaraPreviewAxis_InterpParamBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraPreviewAxis_InterpParamBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraPreviewAxis_InterpParamBase)


#define Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_67_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Param() { return STRUCT_OFFSET(UNiagaraPreviewAxis_InterpParamBase, Param); } \
	FORCEINLINE static uint32 __PPO__Count() { return STRUCT_OFFSET(UNiagaraPreviewAxis_InterpParamBase, Count); }


#define Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_64_PROLOG
#define Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_67_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_67_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_67_SPARSE_DATA \
	Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_67_RPC_WRAPPERS \
	Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_67_INCLASS \
	Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_67_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_67_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_67_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_67_SPARSE_DATA \
	Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_67_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_67_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_67_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NIAGARA_API UClass* StaticClass<class UNiagaraPreviewAxis_InterpParamBase>();

#define Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_81_SPARSE_DATA
#define Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_81_RPC_WRAPPERS
#define Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_81_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_81_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNiagaraPreviewAxis_InterpParamInt32(); \
	friend struct Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamInt32_Statics; \
public: \
	DECLARE_CLASS(UNiagaraPreviewAxis_InterpParamInt32, UNiagaraPreviewAxis_InterpParamBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Niagara"), NO_API) \
	DECLARE_SERIALIZER(UNiagaraPreviewAxis_InterpParamInt32)


#define Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_81_INCLASS \
private: \
	static void StaticRegisterNativesUNiagaraPreviewAxis_InterpParamInt32(); \
	friend struct Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamInt32_Statics; \
public: \
	DECLARE_CLASS(UNiagaraPreviewAxis_InterpParamInt32, UNiagaraPreviewAxis_InterpParamBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Niagara"), NO_API) \
	DECLARE_SERIALIZER(UNiagaraPreviewAxis_InterpParamInt32)


#define Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_81_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNiagaraPreviewAxis_InterpParamInt32(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraPreviewAxis_InterpParamInt32) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNiagaraPreviewAxis_InterpParamInt32); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraPreviewAxis_InterpParamInt32); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNiagaraPreviewAxis_InterpParamInt32(UNiagaraPreviewAxis_InterpParamInt32&&); \
	NO_API UNiagaraPreviewAxis_InterpParamInt32(const UNiagaraPreviewAxis_InterpParamInt32&); \
public:


#define Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_81_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNiagaraPreviewAxis_InterpParamInt32(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNiagaraPreviewAxis_InterpParamInt32(UNiagaraPreviewAxis_InterpParamInt32&&); \
	NO_API UNiagaraPreviewAxis_InterpParamInt32(const UNiagaraPreviewAxis_InterpParamInt32&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNiagaraPreviewAxis_InterpParamInt32); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraPreviewAxis_InterpParamInt32); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraPreviewAxis_InterpParamInt32)


#define Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_81_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Min() { return STRUCT_OFFSET(UNiagaraPreviewAxis_InterpParamInt32, Min); } \
	FORCEINLINE static uint32 __PPO__Max() { return STRUCT_OFFSET(UNiagaraPreviewAxis_InterpParamInt32, Max); }


#define Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_78_PROLOG
#define Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_81_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_81_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_81_SPARSE_DATA \
	Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_81_RPC_WRAPPERS \
	Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_81_INCLASS \
	Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_81_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_81_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_81_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_81_SPARSE_DATA \
	Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_81_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_81_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_81_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NIAGARA_API UClass* StaticClass<class UNiagaraPreviewAxis_InterpParamInt32>();

#define Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_97_SPARSE_DATA
#define Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_97_RPC_WRAPPERS
#define Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_97_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_97_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNiagaraPreviewAxis_InterpParamFloat(); \
	friend struct Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamFloat_Statics; \
public: \
	DECLARE_CLASS(UNiagaraPreviewAxis_InterpParamFloat, UNiagaraPreviewAxis_InterpParamBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Niagara"), NO_API) \
	DECLARE_SERIALIZER(UNiagaraPreviewAxis_InterpParamFloat)


#define Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_97_INCLASS \
private: \
	static void StaticRegisterNativesUNiagaraPreviewAxis_InterpParamFloat(); \
	friend struct Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamFloat_Statics; \
public: \
	DECLARE_CLASS(UNiagaraPreviewAxis_InterpParamFloat, UNiagaraPreviewAxis_InterpParamBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Niagara"), NO_API) \
	DECLARE_SERIALIZER(UNiagaraPreviewAxis_InterpParamFloat)


#define Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_97_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNiagaraPreviewAxis_InterpParamFloat(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraPreviewAxis_InterpParamFloat) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNiagaraPreviewAxis_InterpParamFloat); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraPreviewAxis_InterpParamFloat); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNiagaraPreviewAxis_InterpParamFloat(UNiagaraPreviewAxis_InterpParamFloat&&); \
	NO_API UNiagaraPreviewAxis_InterpParamFloat(const UNiagaraPreviewAxis_InterpParamFloat&); \
public:


#define Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_97_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNiagaraPreviewAxis_InterpParamFloat(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNiagaraPreviewAxis_InterpParamFloat(UNiagaraPreviewAxis_InterpParamFloat&&); \
	NO_API UNiagaraPreviewAxis_InterpParamFloat(const UNiagaraPreviewAxis_InterpParamFloat&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNiagaraPreviewAxis_InterpParamFloat); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraPreviewAxis_InterpParamFloat); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraPreviewAxis_InterpParamFloat)


#define Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_97_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Min() { return STRUCT_OFFSET(UNiagaraPreviewAxis_InterpParamFloat, Min); } \
	FORCEINLINE static uint32 __PPO__Max() { return STRUCT_OFFSET(UNiagaraPreviewAxis_InterpParamFloat, Max); }


#define Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_94_PROLOG
#define Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_97_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_97_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_97_SPARSE_DATA \
	Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_97_RPC_WRAPPERS \
	Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_97_INCLASS \
	Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_97_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_97_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_97_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_97_SPARSE_DATA \
	Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_97_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_97_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_97_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NIAGARA_API UClass* StaticClass<class UNiagaraPreviewAxis_InterpParamFloat>();

#define Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_113_SPARSE_DATA
#define Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_113_RPC_WRAPPERS
#define Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_113_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_113_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNiagaraPreviewAxis_InterpParamVector2D(); \
	friend struct Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamVector2D_Statics; \
public: \
	DECLARE_CLASS(UNiagaraPreviewAxis_InterpParamVector2D, UNiagaraPreviewAxis_InterpParamBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Niagara"), NO_API) \
	DECLARE_SERIALIZER(UNiagaraPreviewAxis_InterpParamVector2D)


#define Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_113_INCLASS \
private: \
	static void StaticRegisterNativesUNiagaraPreviewAxis_InterpParamVector2D(); \
	friend struct Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamVector2D_Statics; \
public: \
	DECLARE_CLASS(UNiagaraPreviewAxis_InterpParamVector2D, UNiagaraPreviewAxis_InterpParamBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Niagara"), NO_API) \
	DECLARE_SERIALIZER(UNiagaraPreviewAxis_InterpParamVector2D)


#define Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_113_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNiagaraPreviewAxis_InterpParamVector2D(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraPreviewAxis_InterpParamVector2D) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNiagaraPreviewAxis_InterpParamVector2D); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraPreviewAxis_InterpParamVector2D); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNiagaraPreviewAxis_InterpParamVector2D(UNiagaraPreviewAxis_InterpParamVector2D&&); \
	NO_API UNiagaraPreviewAxis_InterpParamVector2D(const UNiagaraPreviewAxis_InterpParamVector2D&); \
public:


#define Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_113_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNiagaraPreviewAxis_InterpParamVector2D(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNiagaraPreviewAxis_InterpParamVector2D(UNiagaraPreviewAxis_InterpParamVector2D&&); \
	NO_API UNiagaraPreviewAxis_InterpParamVector2D(const UNiagaraPreviewAxis_InterpParamVector2D&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNiagaraPreviewAxis_InterpParamVector2D); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraPreviewAxis_InterpParamVector2D); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraPreviewAxis_InterpParamVector2D)


#define Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_113_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Min() { return STRUCT_OFFSET(UNiagaraPreviewAxis_InterpParamVector2D, Min); } \
	FORCEINLINE static uint32 __PPO__Max() { return STRUCT_OFFSET(UNiagaraPreviewAxis_InterpParamVector2D, Max); }


#define Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_110_PROLOG
#define Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_113_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_113_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_113_SPARSE_DATA \
	Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_113_RPC_WRAPPERS \
	Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_113_INCLASS \
	Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_113_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_113_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_113_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_113_SPARSE_DATA \
	Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_113_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_113_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_113_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NIAGARA_API UClass* StaticClass<class UNiagaraPreviewAxis_InterpParamVector2D>();

#define Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_129_SPARSE_DATA
#define Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_129_RPC_WRAPPERS
#define Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_129_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_129_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNiagaraPreviewAxis_InterpParamVector(); \
	friend struct Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamVector_Statics; \
public: \
	DECLARE_CLASS(UNiagaraPreviewAxis_InterpParamVector, UNiagaraPreviewAxis_InterpParamBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Niagara"), NO_API) \
	DECLARE_SERIALIZER(UNiagaraPreviewAxis_InterpParamVector)


#define Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_129_INCLASS \
private: \
	static void StaticRegisterNativesUNiagaraPreviewAxis_InterpParamVector(); \
	friend struct Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamVector_Statics; \
public: \
	DECLARE_CLASS(UNiagaraPreviewAxis_InterpParamVector, UNiagaraPreviewAxis_InterpParamBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Niagara"), NO_API) \
	DECLARE_SERIALIZER(UNiagaraPreviewAxis_InterpParamVector)


#define Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_129_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNiagaraPreviewAxis_InterpParamVector(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraPreviewAxis_InterpParamVector) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNiagaraPreviewAxis_InterpParamVector); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraPreviewAxis_InterpParamVector); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNiagaraPreviewAxis_InterpParamVector(UNiagaraPreviewAxis_InterpParamVector&&); \
	NO_API UNiagaraPreviewAxis_InterpParamVector(const UNiagaraPreviewAxis_InterpParamVector&); \
public:


#define Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_129_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNiagaraPreviewAxis_InterpParamVector(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNiagaraPreviewAxis_InterpParamVector(UNiagaraPreviewAxis_InterpParamVector&&); \
	NO_API UNiagaraPreviewAxis_InterpParamVector(const UNiagaraPreviewAxis_InterpParamVector&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNiagaraPreviewAxis_InterpParamVector); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraPreviewAxis_InterpParamVector); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraPreviewAxis_InterpParamVector)


#define Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_129_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Min() { return STRUCT_OFFSET(UNiagaraPreviewAxis_InterpParamVector, Min); } \
	FORCEINLINE static uint32 __PPO__Max() { return STRUCT_OFFSET(UNiagaraPreviewAxis_InterpParamVector, Max); }


#define Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_126_PROLOG
#define Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_129_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_129_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_129_SPARSE_DATA \
	Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_129_RPC_WRAPPERS \
	Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_129_INCLASS \
	Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_129_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_129_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_129_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_129_SPARSE_DATA \
	Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_129_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_129_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_129_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NIAGARA_API UClass* StaticClass<class UNiagaraPreviewAxis_InterpParamVector>();

#define Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_145_SPARSE_DATA
#define Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_145_RPC_WRAPPERS
#define Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_145_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_145_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNiagaraPreviewAxis_InterpParamVector4(); \
	friend struct Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamVector4_Statics; \
public: \
	DECLARE_CLASS(UNiagaraPreviewAxis_InterpParamVector4, UNiagaraPreviewAxis_InterpParamBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Niagara"), NO_API) \
	DECLARE_SERIALIZER(UNiagaraPreviewAxis_InterpParamVector4)


#define Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_145_INCLASS \
private: \
	static void StaticRegisterNativesUNiagaraPreviewAxis_InterpParamVector4(); \
	friend struct Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamVector4_Statics; \
public: \
	DECLARE_CLASS(UNiagaraPreviewAxis_InterpParamVector4, UNiagaraPreviewAxis_InterpParamBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Niagara"), NO_API) \
	DECLARE_SERIALIZER(UNiagaraPreviewAxis_InterpParamVector4)


#define Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_145_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNiagaraPreviewAxis_InterpParamVector4(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraPreviewAxis_InterpParamVector4) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNiagaraPreviewAxis_InterpParamVector4); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraPreviewAxis_InterpParamVector4); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNiagaraPreviewAxis_InterpParamVector4(UNiagaraPreviewAxis_InterpParamVector4&&); \
	NO_API UNiagaraPreviewAxis_InterpParamVector4(const UNiagaraPreviewAxis_InterpParamVector4&); \
public:


#define Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_145_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNiagaraPreviewAxis_InterpParamVector4(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNiagaraPreviewAxis_InterpParamVector4(UNiagaraPreviewAxis_InterpParamVector4&&); \
	NO_API UNiagaraPreviewAxis_InterpParamVector4(const UNiagaraPreviewAxis_InterpParamVector4&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNiagaraPreviewAxis_InterpParamVector4); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraPreviewAxis_InterpParamVector4); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraPreviewAxis_InterpParamVector4)


#define Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_145_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Min() { return STRUCT_OFFSET(UNiagaraPreviewAxis_InterpParamVector4, Min); } \
	FORCEINLINE static uint32 __PPO__Max() { return STRUCT_OFFSET(UNiagaraPreviewAxis_InterpParamVector4, Max); }


#define Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_142_PROLOG
#define Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_145_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_145_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_145_SPARSE_DATA \
	Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_145_RPC_WRAPPERS \
	Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_145_INCLASS \
	Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_145_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_145_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_145_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_145_SPARSE_DATA \
	Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_145_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_145_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_145_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NIAGARA_API UClass* StaticClass<class UNiagaraPreviewAxis_InterpParamVector4>();

#define Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_161_SPARSE_DATA
#define Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_161_RPC_WRAPPERS
#define Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_161_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_161_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNiagaraPreviewAxis_InterpParamLinearColor(); \
	friend struct Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamLinearColor_Statics; \
public: \
	DECLARE_CLASS(UNiagaraPreviewAxis_InterpParamLinearColor, UNiagaraPreviewAxis_InterpParamBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Niagara"), NO_API) \
	DECLARE_SERIALIZER(UNiagaraPreviewAxis_InterpParamLinearColor)


#define Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_161_INCLASS \
private: \
	static void StaticRegisterNativesUNiagaraPreviewAxis_InterpParamLinearColor(); \
	friend struct Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamLinearColor_Statics; \
public: \
	DECLARE_CLASS(UNiagaraPreviewAxis_InterpParamLinearColor, UNiagaraPreviewAxis_InterpParamBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Niagara"), NO_API) \
	DECLARE_SERIALIZER(UNiagaraPreviewAxis_InterpParamLinearColor)


#define Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_161_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNiagaraPreviewAxis_InterpParamLinearColor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraPreviewAxis_InterpParamLinearColor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNiagaraPreviewAxis_InterpParamLinearColor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraPreviewAxis_InterpParamLinearColor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNiagaraPreviewAxis_InterpParamLinearColor(UNiagaraPreviewAxis_InterpParamLinearColor&&); \
	NO_API UNiagaraPreviewAxis_InterpParamLinearColor(const UNiagaraPreviewAxis_InterpParamLinearColor&); \
public:


#define Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_161_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNiagaraPreviewAxis_InterpParamLinearColor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNiagaraPreviewAxis_InterpParamLinearColor(UNiagaraPreviewAxis_InterpParamLinearColor&&); \
	NO_API UNiagaraPreviewAxis_InterpParamLinearColor(const UNiagaraPreviewAxis_InterpParamLinearColor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNiagaraPreviewAxis_InterpParamLinearColor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraPreviewAxis_InterpParamLinearColor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraPreviewAxis_InterpParamLinearColor)


#define Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_161_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Min() { return STRUCT_OFFSET(UNiagaraPreviewAxis_InterpParamLinearColor, Min); } \
	FORCEINLINE static uint32 __PPO__Max() { return STRUCT_OFFSET(UNiagaraPreviewAxis_InterpParamLinearColor, Max); }


#define Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_158_PROLOG
#define Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_161_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_161_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_161_SPARSE_DATA \
	Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_161_RPC_WRAPPERS \
	Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_161_INCLASS \
	Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_161_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_161_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_161_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_161_SPARSE_DATA \
	Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_161_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_161_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_161_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NIAGARA_API UClass* StaticClass<class UNiagaraPreviewAxis_InterpParamLinearColor>();

#define Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_185_SPARSE_DATA
#define Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_185_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetPreviews); \
	DECLARE_FUNCTION(execSetPaused); \
	DECLARE_FUNCTION(execDeactivatePreviews); \
	DECLARE_FUNCTION(execActivatePreviews);


#define Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_185_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetPreviews); \
	DECLARE_FUNCTION(execSetPaused); \
	DECLARE_FUNCTION(execDeactivatePreviews); \
	DECLARE_FUNCTION(execActivatePreviews);


#define Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_185_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesANiagaraPreviewGrid(); \
	friend struct Z_Construct_UClass_ANiagaraPreviewGrid_Statics; \
public: \
	DECLARE_CLASS(ANiagaraPreviewGrid, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Niagara"), NO_API) \
	DECLARE_SERIALIZER(ANiagaraPreviewGrid)


#define Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_185_INCLASS \
private: \
	static void StaticRegisterNativesANiagaraPreviewGrid(); \
	friend struct Z_Construct_UClass_ANiagaraPreviewGrid_Statics; \
public: \
	DECLARE_CLASS(ANiagaraPreviewGrid, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Niagara"), NO_API) \
	DECLARE_SERIALIZER(ANiagaraPreviewGrid)


#define Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_185_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ANiagaraPreviewGrid(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ANiagaraPreviewGrid) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANiagaraPreviewGrid); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANiagaraPreviewGrid); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ANiagaraPreviewGrid(ANiagaraPreviewGrid&&); \
	NO_API ANiagaraPreviewGrid(const ANiagaraPreviewGrid&); \
public:


#define Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_185_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ANiagaraPreviewGrid(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ANiagaraPreviewGrid(ANiagaraPreviewGrid&&); \
	NO_API ANiagaraPreviewGrid(const ANiagaraPreviewGrid&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANiagaraPreviewGrid); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANiagaraPreviewGrid); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ANiagaraPreviewGrid)


#define Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_185_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__NumX() { return STRUCT_OFFSET(ANiagaraPreviewGrid, NumX); } \
	FORCEINLINE static uint32 __PPO__NumY() { return STRUCT_OFFSET(ANiagaraPreviewGrid, NumY); } \
	FORCEINLINE static uint32 __PPO__PreviewComponents() { return STRUCT_OFFSET(ANiagaraPreviewGrid, PreviewComponents); }


#define Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_182_PROLOG
#define Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_185_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_185_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_185_SPARSE_DATA \
	Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_185_RPC_WRAPPERS \
	Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_185_INCLASS \
	Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_185_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_185_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_185_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_185_SPARSE_DATA \
	Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_185_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_185_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_185_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class NiagaraPreviewGrid."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NIAGARA_API UClass* StaticClass<class ANiagaraPreviewGrid>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h


#define FOREACH_ENUM_ENIAGARAPREVIEWGRIDRESETMODE(op) \
	op(ENiagaraPreviewGridResetMode::Never) \
	op(ENiagaraPreviewGridResetMode::Individual) \
	op(ENiagaraPreviewGridResetMode::All) 

enum class ENiagaraPreviewGridResetMode : uint8;
template<> NIAGARA_API UEnum* StaticEnum<ENiagaraPreviewGridResetMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
