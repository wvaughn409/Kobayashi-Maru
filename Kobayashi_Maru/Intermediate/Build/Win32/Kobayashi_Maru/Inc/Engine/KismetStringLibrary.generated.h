// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FLinearColor;
class UObject;
struct FRotator;
struct FVector2D;
struct FIntVector;
struct FVector;
struct FMatrix;
struct FTransform;
struct FIntPoint;
#ifdef ENGINE_KismetStringLibrary_generated_h
#error "KismetStringLibrary.generated.h already included, missing '#pragma once' in KismetStringLibrary.h"
#endif
#define ENGINE_KismetStringLibrary_generated_h

#define Engine_Source_Runtime_Engine_Classes_Kismet_KismetStringLibrary_h_13_SPARSE_DATA
#define Engine_Source_Runtime_Engine_Classes_Kismet_KismetStringLibrary_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execTimeSecondsToString); \
	DECLARE_FUNCTION(execMid); \
	DECLARE_FUNCTION(execRightChop); \
	DECLARE_FUNCTION(execRight); \
	DECLARE_FUNCTION(execLeftChop); \
	DECLARE_FUNCTION(execLeft); \
	DECLARE_FUNCTION(execSplit); \
	DECLARE_FUNCTION(execReplaceInline); \
	DECLARE_FUNCTION(execReplace); \
	DECLARE_FUNCTION(execReverse); \
	DECLARE_FUNCTION(execCullArray); \
	DECLARE_FUNCTION(execTrimTrailing); \
	DECLARE_FUNCTION(execTrim); \
	DECLARE_FUNCTION(execMatchesWildcard); \
	DECLARE_FUNCTION(execEndsWith); \
	DECLARE_FUNCTION(execStartsWith); \
	DECLARE_FUNCTION(execIsNumeric); \
	DECLARE_FUNCTION(execRightPad); \
	DECLARE_FUNCTION(execLeftPad); \
	DECLARE_FUNCTION(execToLower); \
	DECLARE_FUNCTION(execToUpper); \
	DECLARE_FUNCTION(execGetCharacterArrayFromString); \
	DECLARE_FUNCTION(execJoinStringArray); \
	DECLARE_FUNCTION(execParseIntoArray); \
	DECLARE_FUNCTION(execGetCharacterAsNumber); \
	DECLARE_FUNCTION(execContains); \
	DECLARE_FUNCTION(execFindSubstring); \
	DECLARE_FUNCTION(execGetSubstring); \
	DECLARE_FUNCTION(execIsEmpty); \
	DECLARE_FUNCTION(execLen); \
	DECLARE_FUNCTION(execNotEqual_StriStri); \
	DECLARE_FUNCTION(execNotEqual_StrStr); \
	DECLARE_FUNCTION(execEqualEqual_StriStri); \
	DECLARE_FUNCTION(execEqualEqual_StrStr); \
	DECLARE_FUNCTION(execConcat_StrStr); \
	DECLARE_FUNCTION(execBuildString_Name); \
	DECLARE_FUNCTION(execBuildString_Color); \
	DECLARE_FUNCTION(execBuildString_Object); \
	DECLARE_FUNCTION(execBuildString_Rotator); \
	DECLARE_FUNCTION(execBuildString_Vector2d); \
	DECLARE_FUNCTION(execBuildString_IntVector); \
	DECLARE_FUNCTION(execBuildString_Vector); \
	DECLARE_FUNCTION(execBuildString_Bool); \
	DECLARE_FUNCTION(execBuildString_Int); \
	DECLARE_FUNCTION(execBuildString_Float); \
	DECLARE_FUNCTION(execConv_StringToColor); \
	DECLARE_FUNCTION(execConv_StringToRotator); \
	DECLARE_FUNCTION(execConv_StringToVector2D); \
	DECLARE_FUNCTION(execConv_StringToVector); \
	DECLARE_FUNCTION(execConv_StringToFloat); \
	DECLARE_FUNCTION(execConv_StringToInt); \
	DECLARE_FUNCTION(execConv_StringToName); \
	DECLARE_FUNCTION(execConv_MatrixToString); \
	DECLARE_FUNCTION(execConv_NameToString); \
	DECLARE_FUNCTION(execConv_ColorToString); \
	DECLARE_FUNCTION(execConv_ObjectToString); \
	DECLARE_FUNCTION(execConv_TransformToString); \
	DECLARE_FUNCTION(execConv_RotatorToString); \
	DECLARE_FUNCTION(execConv_Vector2dToString); \
	DECLARE_FUNCTION(execConv_IntPointToString); \
	DECLARE_FUNCTION(execConv_IntVectorToString); \
	DECLARE_FUNCTION(execConv_VectorToString); \
	DECLARE_FUNCTION(execConv_BoolToString); \
	DECLARE_FUNCTION(execConv_ByteToString); \
	DECLARE_FUNCTION(execConv_IntToString); \
	DECLARE_FUNCTION(execConv_FloatToString);


#define Engine_Source_Runtime_Engine_Classes_Kismet_KismetStringLibrary_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execTimeSecondsToString); \
	DECLARE_FUNCTION(execMid); \
	DECLARE_FUNCTION(execRightChop); \
	DECLARE_FUNCTION(execRight); \
	DECLARE_FUNCTION(execLeftChop); \
	DECLARE_FUNCTION(execLeft); \
	DECLARE_FUNCTION(execSplit); \
	DECLARE_FUNCTION(execReplaceInline); \
	DECLARE_FUNCTION(execReplace); \
	DECLARE_FUNCTION(execReverse); \
	DECLARE_FUNCTION(execCullArray); \
	DECLARE_FUNCTION(execTrimTrailing); \
	DECLARE_FUNCTION(execTrim); \
	DECLARE_FUNCTION(execMatchesWildcard); \
	DECLARE_FUNCTION(execEndsWith); \
	DECLARE_FUNCTION(execStartsWith); \
	DECLARE_FUNCTION(execIsNumeric); \
	DECLARE_FUNCTION(execRightPad); \
	DECLARE_FUNCTION(execLeftPad); \
	DECLARE_FUNCTION(execToLower); \
	DECLARE_FUNCTION(execToUpper); \
	DECLARE_FUNCTION(execGetCharacterArrayFromString); \
	DECLARE_FUNCTION(execJoinStringArray); \
	DECLARE_FUNCTION(execParseIntoArray); \
	DECLARE_FUNCTION(execGetCharacterAsNumber); \
	DECLARE_FUNCTION(execContains); \
	DECLARE_FUNCTION(execFindSubstring); \
	DECLARE_FUNCTION(execGetSubstring); \
	DECLARE_FUNCTION(execIsEmpty); \
	DECLARE_FUNCTION(execLen); \
	DECLARE_FUNCTION(execNotEqual_StriStri); \
	DECLARE_FUNCTION(execNotEqual_StrStr); \
	DECLARE_FUNCTION(execEqualEqual_StriStri); \
	DECLARE_FUNCTION(execEqualEqual_StrStr); \
	DECLARE_FUNCTION(execConcat_StrStr); \
	DECLARE_FUNCTION(execBuildString_Name); \
	DECLARE_FUNCTION(execBuildString_Color); \
	DECLARE_FUNCTION(execBuildString_Object); \
	DECLARE_FUNCTION(execBuildString_Rotator); \
	DECLARE_FUNCTION(execBuildString_Vector2d); \
	DECLARE_FUNCTION(execBuildString_IntVector); \
	DECLARE_FUNCTION(execBuildString_Vector); \
	DECLARE_FUNCTION(execBuildString_Bool); \
	DECLARE_FUNCTION(execBuildString_Int); \
	DECLARE_FUNCTION(execBuildString_Float); \
	DECLARE_FUNCTION(execConv_StringToColor); \
	DECLARE_FUNCTION(execConv_StringToRotator); \
	DECLARE_FUNCTION(execConv_StringToVector2D); \
	DECLARE_FUNCTION(execConv_StringToVector); \
	DECLARE_FUNCTION(execConv_StringToFloat); \
	DECLARE_FUNCTION(execConv_StringToInt); \
	DECLARE_FUNCTION(execConv_StringToName); \
	DECLARE_FUNCTION(execConv_MatrixToString); \
	DECLARE_FUNCTION(execConv_NameToString); \
	DECLARE_FUNCTION(execConv_ColorToString); \
	DECLARE_FUNCTION(execConv_ObjectToString); \
	DECLARE_FUNCTION(execConv_TransformToString); \
	DECLARE_FUNCTION(execConv_RotatorToString); \
	DECLARE_FUNCTION(execConv_Vector2dToString); \
	DECLARE_FUNCTION(execConv_IntPointToString); \
	DECLARE_FUNCTION(execConv_IntVectorToString); \
	DECLARE_FUNCTION(execConv_VectorToString); \
	DECLARE_FUNCTION(execConv_BoolToString); \
	DECLARE_FUNCTION(execConv_ByteToString); \
	DECLARE_FUNCTION(execConv_IntToString); \
	DECLARE_FUNCTION(execConv_FloatToString);


#define Engine_Source_Runtime_Engine_Classes_Kismet_KismetStringLibrary_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUKismetStringLibrary(); \
	friend struct Z_Construct_UClass_UKismetStringLibrary_Statics; \
public: \
	DECLARE_CLASS(UKismetStringLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UKismetStringLibrary)


#define Engine_Source_Runtime_Engine_Classes_Kismet_KismetStringLibrary_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUKismetStringLibrary(); \
	friend struct Z_Construct_UClass_UKismetStringLibrary_Statics; \
public: \
	DECLARE_CLASS(UKismetStringLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UKismetStringLibrary)


#define Engine_Source_Runtime_Engine_Classes_Kismet_KismetStringLibrary_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UKismetStringLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UKismetStringLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UKismetStringLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UKismetStringLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UKismetStringLibrary(UKismetStringLibrary&&); \
	NO_API UKismetStringLibrary(const UKismetStringLibrary&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Kismet_KismetStringLibrary_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UKismetStringLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UKismetStringLibrary(UKismetStringLibrary&&); \
	NO_API UKismetStringLibrary(const UKismetStringLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UKismetStringLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UKismetStringLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UKismetStringLibrary)


#define Engine_Source_Runtime_Engine_Classes_Kismet_KismetStringLibrary_h_13_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_Kismet_KismetStringLibrary_h_10_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Kismet_KismetStringLibrary_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Kismet_KismetStringLibrary_h_13_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Kismet_KismetStringLibrary_h_13_SPARSE_DATA \
	Engine_Source_Runtime_Engine_Classes_Kismet_KismetStringLibrary_h_13_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Kismet_KismetStringLibrary_h_13_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Kismet_KismetStringLibrary_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Kismet_KismetStringLibrary_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Kismet_KismetStringLibrary_h_13_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Kismet_KismetStringLibrary_h_13_SPARSE_DATA \
	Engine_Source_Runtime_Engine_Classes_Kismet_KismetStringLibrary_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Kismet_KismetStringLibrary_h_13_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Kismet_KismetStringLibrary_h_13_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class KismetStringLibrary."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UKismetStringLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Kismet_KismetStringLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
