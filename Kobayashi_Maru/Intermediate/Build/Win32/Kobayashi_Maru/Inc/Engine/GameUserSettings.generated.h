// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UGameUserSettings;
struct FIntPoint;
#ifdef ENGINE_GameUserSettings_generated_h
#error "GameUserSettings.generated.h already included, missing '#pragma once' in GameUserSettings.h"
#endif
#define ENGINE_GameUserSettings_generated_h

#define Engine_Source_Runtime_Engine_Classes_GameFramework_GameUserSettings_h_32_DELEGATE \
static inline void FOnGameUserSettingsUINeedsUpdate_DelegateWrapper(const FMulticastScriptDelegate& OnGameUserSettingsUINeedsUpdate) \
{ \
	OnGameUserSettingsUINeedsUpdate.ProcessMulticastDelegate<UObject>(NULL); \
}


#define Engine_Source_Runtime_Engine_Classes_GameFramework_GameUserSettings_h_40_SPARSE_DATA
#define Engine_Source_Runtime_Engine_Classes_GameFramework_GameUserSettings_h_40_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIsHDREnabled); \
	DECLARE_FUNCTION(execGetCurrentHDRDisplayNits); \
	DECLARE_FUNCTION(execEnableHDRDisplayOutput); \
	DECLARE_FUNCTION(execSupportsHDRDisplayOutput); \
	DECLARE_FUNCTION(execApplyHardwareBenchmarkResults); \
	DECLARE_FUNCTION(execRunHardwareBenchmark); \
	DECLARE_FUNCTION(execGetGameUserSettings); \
	DECLARE_FUNCTION(execGetFramePace); \
	DECLARE_FUNCTION(execGetSyncInterval); \
	DECLARE_FUNCTION(execGetDefaultWindowMode); \
	DECLARE_FUNCTION(execGetDefaultWindowPosition); \
	DECLARE_FUNCTION(execGetDefaultResolution); \
	DECLARE_FUNCTION(execGetRecommendedResolutionScale); \
	DECLARE_FUNCTION(execGetDefaultResolutionScale); \
	DECLARE_FUNCTION(execSetToDefaults); \
	DECLARE_FUNCTION(execResetToCurrentSettings); \
	DECLARE_FUNCTION(execSaveSettings); \
	DECLARE_FUNCTION(execLoadSettings); \
	DECLARE_FUNCTION(execValidateSettings); \
	DECLARE_FUNCTION(execIsDirty); \
	DECLARE_FUNCTION(execGetShadingQuality); \
	DECLARE_FUNCTION(execSetShadingQuality); \
	DECLARE_FUNCTION(execGetFoliageQuality); \
	DECLARE_FUNCTION(execSetFoliageQuality); \
	DECLARE_FUNCTION(execGetPostProcessingQuality); \
	DECLARE_FUNCTION(execSetPostProcessingQuality); \
	DECLARE_FUNCTION(execGetVisualEffectQuality); \
	DECLARE_FUNCTION(execSetVisualEffectQuality); \
	DECLARE_FUNCTION(execGetTextureQuality); \
	DECLARE_FUNCTION(execSetTextureQuality); \
	DECLARE_FUNCTION(execGetAntiAliasingQuality); \
	DECLARE_FUNCTION(execSetAntiAliasingQuality); \
	DECLARE_FUNCTION(execGetShadowQuality); \
	DECLARE_FUNCTION(execSetShadowQuality); \
	DECLARE_FUNCTION(execGetViewDistanceQuality); \
	DECLARE_FUNCTION(execSetViewDistanceQuality); \
	DECLARE_FUNCTION(execSetResolutionScaleNormalized); \
	DECLARE_FUNCTION(execSetResolutionScaleValueEx); \
	DECLARE_FUNCTION(execSetResolutionScaleValue); \
	DECLARE_FUNCTION(execGetResolutionScaleNormalized); \
	DECLARE_FUNCTION(execGetResolutionScaleInformationEx); \
	DECLARE_FUNCTION(execGetResolutionScaleInformation); \
	DECLARE_FUNCTION(execGetOverallScalabilityLevel); \
	DECLARE_FUNCTION(execSetOverallScalabilityLevel); \
	DECLARE_FUNCTION(execGetFrameRateLimit); \
	DECLARE_FUNCTION(execSetFrameRateLimit); \
	DECLARE_FUNCTION(execGetAudioQualityLevel); \
	DECLARE_FUNCTION(execSetAudioQualityLevel); \
	DECLARE_FUNCTION(execSetBenchmarkFallbackValues); \
	DECLARE_FUNCTION(execRevertVideoMode); \
	DECLARE_FUNCTION(execConfirmVideoMode); \
	DECLARE_FUNCTION(execIsDynamicResolutionDirty); \
	DECLARE_FUNCTION(execIsVSyncDirty); \
	DECLARE_FUNCTION(execIsFullscreenModeDirty); \
	DECLARE_FUNCTION(execIsScreenResolutionDirty); \
	DECLARE_FUNCTION(execIsDynamicResolutionEnabled); \
	DECLARE_FUNCTION(execSetDynamicResolutionEnabled); \
	DECLARE_FUNCTION(execIsVSyncEnabled); \
	DECLARE_FUNCTION(execSetVSyncEnabled); \
	DECLARE_FUNCTION(execGetPreferredFullscreenMode); \
	DECLARE_FUNCTION(execSetFullscreenMode); \
	DECLARE_FUNCTION(execGetLastConfirmedFullscreenMode); \
	DECLARE_FUNCTION(execGetFullscreenMode); \
	DECLARE_FUNCTION(execSetScreenResolution); \
	DECLARE_FUNCTION(execGetDesktopResolution); \
	DECLARE_FUNCTION(execGetLastConfirmedScreenResolution); \
	DECLARE_FUNCTION(execGetScreenResolution); \
	DECLARE_FUNCTION(execApplyResolutionSettings); \
	DECLARE_FUNCTION(execApplyNonResolutionSettings); \
	DECLARE_FUNCTION(execApplySettings);


#define Engine_Source_Runtime_Engine_Classes_GameFramework_GameUserSettings_h_40_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsHDREnabled); \
	DECLARE_FUNCTION(execGetCurrentHDRDisplayNits); \
	DECLARE_FUNCTION(execEnableHDRDisplayOutput); \
	DECLARE_FUNCTION(execSupportsHDRDisplayOutput); \
	DECLARE_FUNCTION(execApplyHardwareBenchmarkResults); \
	DECLARE_FUNCTION(execRunHardwareBenchmark); \
	DECLARE_FUNCTION(execGetGameUserSettings); \
	DECLARE_FUNCTION(execGetFramePace); \
	DECLARE_FUNCTION(execGetSyncInterval); \
	DECLARE_FUNCTION(execGetDefaultWindowMode); \
	DECLARE_FUNCTION(execGetDefaultWindowPosition); \
	DECLARE_FUNCTION(execGetDefaultResolution); \
	DECLARE_FUNCTION(execGetRecommendedResolutionScale); \
	DECLARE_FUNCTION(execGetDefaultResolutionScale); \
	DECLARE_FUNCTION(execSetToDefaults); \
	DECLARE_FUNCTION(execResetToCurrentSettings); \
	DECLARE_FUNCTION(execSaveSettings); \
	DECLARE_FUNCTION(execLoadSettings); \
	DECLARE_FUNCTION(execValidateSettings); \
	DECLARE_FUNCTION(execIsDirty); \
	DECLARE_FUNCTION(execGetShadingQuality); \
	DECLARE_FUNCTION(execSetShadingQuality); \
	DECLARE_FUNCTION(execGetFoliageQuality); \
	DECLARE_FUNCTION(execSetFoliageQuality); \
	DECLARE_FUNCTION(execGetPostProcessingQuality); \
	DECLARE_FUNCTION(execSetPostProcessingQuality); \
	DECLARE_FUNCTION(execGetVisualEffectQuality); \
	DECLARE_FUNCTION(execSetVisualEffectQuality); \
	DECLARE_FUNCTION(execGetTextureQuality); \
	DECLARE_FUNCTION(execSetTextureQuality); \
	DECLARE_FUNCTION(execGetAntiAliasingQuality); \
	DECLARE_FUNCTION(execSetAntiAliasingQuality); \
	DECLARE_FUNCTION(execGetShadowQuality); \
	DECLARE_FUNCTION(execSetShadowQuality); \
	DECLARE_FUNCTION(execGetViewDistanceQuality); \
	DECLARE_FUNCTION(execSetViewDistanceQuality); \
	DECLARE_FUNCTION(execSetResolutionScaleNormalized); \
	DECLARE_FUNCTION(execSetResolutionScaleValueEx); \
	DECLARE_FUNCTION(execSetResolutionScaleValue); \
	DECLARE_FUNCTION(execGetResolutionScaleNormalized); \
	DECLARE_FUNCTION(execGetResolutionScaleInformationEx); \
	DECLARE_FUNCTION(execGetResolutionScaleInformation); \
	DECLARE_FUNCTION(execGetOverallScalabilityLevel); \
	DECLARE_FUNCTION(execSetOverallScalabilityLevel); \
	DECLARE_FUNCTION(execGetFrameRateLimit); \
	DECLARE_FUNCTION(execSetFrameRateLimit); \
	DECLARE_FUNCTION(execGetAudioQualityLevel); \
	DECLARE_FUNCTION(execSetAudioQualityLevel); \
	DECLARE_FUNCTION(execSetBenchmarkFallbackValues); \
	DECLARE_FUNCTION(execRevertVideoMode); \
	DECLARE_FUNCTION(execConfirmVideoMode); \
	DECLARE_FUNCTION(execIsDynamicResolutionDirty); \
	DECLARE_FUNCTION(execIsVSyncDirty); \
	DECLARE_FUNCTION(execIsFullscreenModeDirty); \
	DECLARE_FUNCTION(execIsScreenResolutionDirty); \
	DECLARE_FUNCTION(execIsDynamicResolutionEnabled); \
	DECLARE_FUNCTION(execSetDynamicResolutionEnabled); \
	DECLARE_FUNCTION(execIsVSyncEnabled); \
	DECLARE_FUNCTION(execSetVSyncEnabled); \
	DECLARE_FUNCTION(execGetPreferredFullscreenMode); \
	DECLARE_FUNCTION(execSetFullscreenMode); \
	DECLARE_FUNCTION(execGetLastConfirmedFullscreenMode); \
	DECLARE_FUNCTION(execGetFullscreenMode); \
	DECLARE_FUNCTION(execSetScreenResolution); \
	DECLARE_FUNCTION(execGetDesktopResolution); \
	DECLARE_FUNCTION(execGetLastConfirmedScreenResolution); \
	DECLARE_FUNCTION(execGetScreenResolution); \
	DECLARE_FUNCTION(execApplyResolutionSettings); \
	DECLARE_FUNCTION(execApplyNonResolutionSettings); \
	DECLARE_FUNCTION(execApplySettings);


#define Engine_Source_Runtime_Engine_Classes_GameFramework_GameUserSettings_h_40_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGameUserSettings(); \
	friend struct Z_Construct_UClass_UGameUserSettings_Statics; \
public: \
	DECLARE_CLASS(UGameUserSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UGameUserSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("GameUserSettings");} \



#define Engine_Source_Runtime_Engine_Classes_GameFramework_GameUserSettings_h_40_INCLASS \
private: \
	static void StaticRegisterNativesUGameUserSettings(); \
	friend struct Z_Construct_UClass_UGameUserSettings_Statics; \
public: \
	DECLARE_CLASS(UGameUserSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UGameUserSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("GameUserSettings");} \



#define Engine_Source_Runtime_Engine_Classes_GameFramework_GameUserSettings_h_40_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGameUserSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameUserSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameUserSettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameUserSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGameUserSettings(UGameUserSettings&&); \
	NO_API UGameUserSettings(const UGameUserSettings&); \
public:


#define Engine_Source_Runtime_Engine_Classes_GameFramework_GameUserSettings_h_40_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGameUserSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGameUserSettings(UGameUserSettings&&); \
	NO_API UGameUserSettings(const UGameUserSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameUserSettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameUserSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameUserSettings)


#define Engine_Source_Runtime_Engine_Classes_GameFramework_GameUserSettings_h_40_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ResolutionSizeX() { return STRUCT_OFFSET(UGameUserSettings, ResolutionSizeX); } \
	FORCEINLINE static uint32 __PPO__ResolutionSizeY() { return STRUCT_OFFSET(UGameUserSettings, ResolutionSizeY); } \
	FORCEINLINE static uint32 __PPO__LastUserConfirmedResolutionSizeX() { return STRUCT_OFFSET(UGameUserSettings, LastUserConfirmedResolutionSizeX); } \
	FORCEINLINE static uint32 __PPO__LastUserConfirmedResolutionSizeY() { return STRUCT_OFFSET(UGameUserSettings, LastUserConfirmedResolutionSizeY); } \
	FORCEINLINE static uint32 __PPO__WindowPosX() { return STRUCT_OFFSET(UGameUserSettings, WindowPosX); } \
	FORCEINLINE static uint32 __PPO__WindowPosY() { return STRUCT_OFFSET(UGameUserSettings, WindowPosY); } \
	FORCEINLINE static uint32 __PPO__FullscreenMode() { return STRUCT_OFFSET(UGameUserSettings, FullscreenMode); } \
	FORCEINLINE static uint32 __PPO__LastConfirmedFullscreenMode() { return STRUCT_OFFSET(UGameUserSettings, LastConfirmedFullscreenMode); } \
	FORCEINLINE static uint32 __PPO__PreferredFullscreenMode() { return STRUCT_OFFSET(UGameUserSettings, PreferredFullscreenMode); } \
	FORCEINLINE static uint32 __PPO__Version() { return STRUCT_OFFSET(UGameUserSettings, Version); } \
	FORCEINLINE static uint32 __PPO__AudioQualityLevel() { return STRUCT_OFFSET(UGameUserSettings, AudioQualityLevel); } \
	FORCEINLINE static uint32 __PPO__LastConfirmedAudioQualityLevel() { return STRUCT_OFFSET(UGameUserSettings, LastConfirmedAudioQualityLevel); } \
	FORCEINLINE static uint32 __PPO__FrameRateLimit() { return STRUCT_OFFSET(UGameUserSettings, FrameRateLimit); } \
	FORCEINLINE static uint32 __PPO__DesiredScreenWidth() { return STRUCT_OFFSET(UGameUserSettings, DesiredScreenWidth); } \
	FORCEINLINE static uint32 __PPO__bUseDesiredScreenHeight() { return STRUCT_OFFSET(UGameUserSettings, bUseDesiredScreenHeight); } \
	FORCEINLINE static uint32 __PPO__DesiredScreenHeight() { return STRUCT_OFFSET(UGameUserSettings, DesiredScreenHeight); } \
	FORCEINLINE static uint32 __PPO__LastUserConfirmedDesiredScreenWidth() { return STRUCT_OFFSET(UGameUserSettings, LastUserConfirmedDesiredScreenWidth); } \
	FORCEINLINE static uint32 __PPO__LastUserConfirmedDesiredScreenHeight() { return STRUCT_OFFSET(UGameUserSettings, LastUserConfirmedDesiredScreenHeight); } \
	FORCEINLINE static uint32 __PPO__LastRecommendedScreenWidth() { return STRUCT_OFFSET(UGameUserSettings, LastRecommendedScreenWidth); } \
	FORCEINLINE static uint32 __PPO__LastRecommendedScreenHeight() { return STRUCT_OFFSET(UGameUserSettings, LastRecommendedScreenHeight); } \
	FORCEINLINE static uint32 __PPO__LastCPUBenchmarkResult() { return STRUCT_OFFSET(UGameUserSettings, LastCPUBenchmarkResult); } \
	FORCEINLINE static uint32 __PPO__LastGPUBenchmarkResult() { return STRUCT_OFFSET(UGameUserSettings, LastGPUBenchmarkResult); } \
	FORCEINLINE static uint32 __PPO__LastCPUBenchmarkSteps() { return STRUCT_OFFSET(UGameUserSettings, LastCPUBenchmarkSteps); } \
	FORCEINLINE static uint32 __PPO__LastGPUBenchmarkSteps() { return STRUCT_OFFSET(UGameUserSettings, LastGPUBenchmarkSteps); } \
	FORCEINLINE static uint32 __PPO__LastGPUBenchmarkMultiplier() { return STRUCT_OFFSET(UGameUserSettings, LastGPUBenchmarkMultiplier); } \
	FORCEINLINE static uint32 __PPO__bUseHDRDisplayOutput() { return STRUCT_OFFSET(UGameUserSettings, bUseHDRDisplayOutput); } \
	FORCEINLINE static uint32 __PPO__HDRDisplayOutputNits() { return STRUCT_OFFSET(UGameUserSettings, HDRDisplayOutputNits); } \
	FORCEINLINE static uint32 __PPO__OnGameUserSettingsUINeedsUpdate() { return STRUCT_OFFSET(UGameUserSettings, OnGameUserSettingsUINeedsUpdate); }


#define Engine_Source_Runtime_Engine_Classes_GameFramework_GameUserSettings_h_37_PROLOG
#define Engine_Source_Runtime_Engine_Classes_GameFramework_GameUserSettings_h_40_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_GameFramework_GameUserSettings_h_40_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_GameFramework_GameUserSettings_h_40_SPARSE_DATA \
	Engine_Source_Runtime_Engine_Classes_GameFramework_GameUserSettings_h_40_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_GameFramework_GameUserSettings_h_40_INCLASS \
	Engine_Source_Runtime_Engine_Classes_GameFramework_GameUserSettings_h_40_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_GameFramework_GameUserSettings_h_40_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_GameFramework_GameUserSettings_h_40_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_GameFramework_GameUserSettings_h_40_SPARSE_DATA \
	Engine_Source_Runtime_Engine_Classes_GameFramework_GameUserSettings_h_40_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_GameFramework_GameUserSettings_h_40_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_GameFramework_GameUserSettings_h_40_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class GameUserSettings."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UGameUserSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_GameFramework_GameUserSettings_h


#define FOREACH_ENUM_EWINDOWMODE(op) \
	op(EWindowMode::Fullscreen) \
	op(EWindowMode::WindowedFullscreen) \
	op(EWindowMode::Windowed) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
