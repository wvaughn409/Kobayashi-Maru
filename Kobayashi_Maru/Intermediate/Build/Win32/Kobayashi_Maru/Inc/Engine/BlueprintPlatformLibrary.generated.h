// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FDateTime;
#ifdef ENGINE_BlueprintPlatformLibrary_generated_h
#error "BlueprintPlatformLibrary.generated.h already included, missing '#pragma once' in BlueprintPlatformLibrary.h"
#endif
#define ENGINE_BlueprintPlatformLibrary_generated_h

#define Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintPlatformLibrary_h_80_DELEGATE \
struct PlatformGameInstance_eventPlatformScreenOrientationChangedDelegate_Parms \
{ \
	TEnumAsByte<EScreenOrientation::Type> inScreenOrientation; \
}; \
static inline void FPlatformScreenOrientationChangedDelegate_DelegateWrapper(const FMulticastScriptDelegate& PlatformScreenOrientationChangedDelegate, EScreenOrientation::Type inScreenOrientation) \
{ \
	PlatformGameInstance_eventPlatformScreenOrientationChangedDelegate_Parms Parms; \
	Parms.inScreenOrientation=inScreenOrientation; \
	PlatformScreenOrientationChangedDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintPlatformLibrary_h_79_DELEGATE \
struct PlatformGameInstance_eventPlatformReceivedLocalNotificationDelegate_Parms \
{ \
	FString inString; \
	int32 inInt; \
	TEnumAsByte<EApplicationState::Type> inAppState; \
}; \
static inline void FPlatformReceivedLocalNotificationDelegate_DelegateWrapper(const FMulticastScriptDelegate& PlatformReceivedLocalNotificationDelegate, const FString& inString, int32 inInt, EApplicationState::Type inAppState) \
{ \
	PlatformGameInstance_eventPlatformReceivedLocalNotificationDelegate_Parms Parms; \
	Parms.inString=inString; \
	Parms.inInt=inInt; \
	Parms.inAppState=inAppState; \
	PlatformReceivedLocalNotificationDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintPlatformLibrary_h_78_DELEGATE \
struct PlatformGameInstance_eventPlatformReceivedRemoteNotificationDelegate_Parms \
{ \
	FString inString; \
	TEnumAsByte<EApplicationState::Type> inAppState; \
}; \
static inline void FPlatformReceivedRemoteNotificationDelegate_DelegateWrapper(const FMulticastScriptDelegate& PlatformReceivedRemoteNotificationDelegate, const FString& inString, EApplicationState::Type inAppState) \
{ \
	PlatformGameInstance_eventPlatformReceivedRemoteNotificationDelegate_Parms Parms; \
	Parms.inString=inString; \
	Parms.inAppState=inAppState; \
	PlatformReceivedRemoteNotificationDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintPlatformLibrary_h_77_DELEGATE \
struct PlatformGameInstance_eventPlatformFailedToRegisterForRemoteNotificationsDelegate_Parms \
{ \
	FString inString; \
}; \
static inline void FPlatformFailedToRegisterForRemoteNotificationsDelegate_DelegateWrapper(const FMulticastScriptDelegate& PlatformFailedToRegisterForRemoteNotificationsDelegate, const FString& inString) \
{ \
	PlatformGameInstance_eventPlatformFailedToRegisterForRemoteNotificationsDelegate_Parms Parms; \
	Parms.inString=inString; \
	PlatformFailedToRegisterForRemoteNotificationsDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintPlatformLibrary_h_76_DELEGATE \
struct PlatformGameInstance_eventPlatformRegisteredForUserNotificationsDelegate_Parms \
{ \
	int32 inInt; \
}; \
static inline void FPlatformRegisteredForUserNotificationsDelegate_DelegateWrapper(const FMulticastScriptDelegate& PlatformRegisteredForUserNotificationsDelegate, int32 inInt) \
{ \
	PlatformGameInstance_eventPlatformRegisteredForUserNotificationsDelegate_Parms Parms; \
	Parms.inInt=inInt; \
	PlatformRegisteredForUserNotificationsDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintPlatformLibrary_h_75_DELEGATE \
struct PlatformGameInstance_eventPlatformRegisteredForRemoteNotificationsDelegate_Parms \
{ \
	TArray<uint8> inArray; \
}; \
static inline void FPlatformRegisteredForRemoteNotificationsDelegate_DelegateWrapper(const FMulticastScriptDelegate& PlatformRegisteredForRemoteNotificationsDelegate, TArray<uint8> const& inArray) \
{ \
	PlatformGameInstance_eventPlatformRegisteredForRemoteNotificationsDelegate_Parms Parms; \
	Parms.inArray=inArray; \
	PlatformRegisteredForRemoteNotificationsDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintPlatformLibrary_h_74_DELEGATE \
struct PlatformGameInstance_eventPlatformStartupArgumentsDelegate_Parms \
{ \
	TArray<FString> StartupArguments; \
}; \
static inline void FPlatformStartupArgumentsDelegate_DelegateWrapper(const FMulticastScriptDelegate& PlatformStartupArgumentsDelegate, TArray<FString> const& StartupArguments) \
{ \
	PlatformGameInstance_eventPlatformStartupArgumentsDelegate_Parms Parms; \
	Parms.StartupArguments=StartupArguments; \
	PlatformStartupArgumentsDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintPlatformLibrary_h_73_DELEGATE \
static inline void FPlatformDelegate_DelegateWrapper(const FMulticastScriptDelegate& PlatformDelegate) \
{ \
	PlatformDelegate.ProcessMulticastDelegate<UObject>(NULL); \
}


#define Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintPlatformLibrary_h_69_SPARSE_DATA
#define Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintPlatformLibrary_h_69_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintPlatformLibrary_h_69_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintPlatformLibrary_h_69_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPlatformGameInstance(); \
	friend struct Z_Construct_UClass_UPlatformGameInstance_Statics; \
public: \
	DECLARE_CLASS(UPlatformGameInstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UPlatformGameInstance)


#define Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintPlatformLibrary_h_69_INCLASS \
private: \
	static void StaticRegisterNativesUPlatformGameInstance(); \
	friend struct Z_Construct_UClass_UPlatformGameInstance_Statics; \
public: \
	DECLARE_CLASS(UPlatformGameInstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UPlatformGameInstance)


#define Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintPlatformLibrary_h_69_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlatformGameInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlatformGameInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlatformGameInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlatformGameInstance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlatformGameInstance(UPlatformGameInstance&&); \
	NO_API UPlatformGameInstance(const UPlatformGameInstance&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintPlatformLibrary_h_69_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlatformGameInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlatformGameInstance(UPlatformGameInstance&&); \
	NO_API UPlatformGameInstance(const UPlatformGameInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlatformGameInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlatformGameInstance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlatformGameInstance)


#define Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintPlatformLibrary_h_69_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintPlatformLibrary_h_66_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintPlatformLibrary_h_69_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintPlatformLibrary_h_69_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintPlatformLibrary_h_69_SPARSE_DATA \
	Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintPlatformLibrary_h_69_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintPlatformLibrary_h_69_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintPlatformLibrary_h_69_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintPlatformLibrary_h_69_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintPlatformLibrary_h_69_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintPlatformLibrary_h_69_SPARSE_DATA \
	Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintPlatformLibrary_h_69_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintPlatformLibrary_h_69_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintPlatformLibrary_h_69_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UPlatformGameInstance>();

#define Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintPlatformLibrary_h_166_SPARSE_DATA
#define Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintPlatformLibrary_h_166_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetDeviceOrientation); \
	DECLARE_FUNCTION(execGetLaunchNotification); \
	DECLARE_FUNCTION(execCancelLocalNotificationById); \
	DECLARE_FUNCTION(execCancelLocalNotification); \
	DECLARE_FUNCTION(execScheduleLocalNotificationBadgeFromNow); \
	DECLARE_FUNCTION(execScheduleLocalNotificationBadgeAtTime); \
	DECLARE_FUNCTION(execScheduleLocalNotificationFromNow); \
	DECLARE_FUNCTION(execScheduleLocalNotificationAtTime); \
	DECLARE_FUNCTION(execClearAllLocalNotifications);


#define Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintPlatformLibrary_h_166_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetDeviceOrientation); \
	DECLARE_FUNCTION(execGetLaunchNotification); \
	DECLARE_FUNCTION(execCancelLocalNotificationById); \
	DECLARE_FUNCTION(execCancelLocalNotification); \
	DECLARE_FUNCTION(execScheduleLocalNotificationBadgeFromNow); \
	DECLARE_FUNCTION(execScheduleLocalNotificationBadgeAtTime); \
	DECLARE_FUNCTION(execScheduleLocalNotificationFromNow); \
	DECLARE_FUNCTION(execScheduleLocalNotificationAtTime); \
	DECLARE_FUNCTION(execClearAllLocalNotifications);


#define Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintPlatformLibrary_h_166_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBlueprintPlatformLibrary(); \
	friend struct Z_Construct_UClass_UBlueprintPlatformLibrary_Statics; \
public: \
	DECLARE_CLASS(UBlueprintPlatformLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UBlueprintPlatformLibrary)


#define Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintPlatformLibrary_h_166_INCLASS \
private: \
	static void StaticRegisterNativesUBlueprintPlatformLibrary(); \
	friend struct Z_Construct_UClass_UBlueprintPlatformLibrary_Statics; \
public: \
	DECLARE_CLASS(UBlueprintPlatformLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UBlueprintPlatformLibrary)


#define Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintPlatformLibrary_h_166_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBlueprintPlatformLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBlueprintPlatformLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBlueprintPlatformLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBlueprintPlatformLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBlueprintPlatformLibrary(UBlueprintPlatformLibrary&&); \
	NO_API UBlueprintPlatformLibrary(const UBlueprintPlatformLibrary&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintPlatformLibrary_h_166_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBlueprintPlatformLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBlueprintPlatformLibrary(UBlueprintPlatformLibrary&&); \
	NO_API UBlueprintPlatformLibrary(const UBlueprintPlatformLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBlueprintPlatformLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBlueprintPlatformLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBlueprintPlatformLibrary)


#define Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintPlatformLibrary_h_166_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintPlatformLibrary_h_163_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintPlatformLibrary_h_166_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintPlatformLibrary_h_166_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintPlatformLibrary_h_166_SPARSE_DATA \
	Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintPlatformLibrary_h_166_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintPlatformLibrary_h_166_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintPlatformLibrary_h_166_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintPlatformLibrary_h_166_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintPlatformLibrary_h_166_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintPlatformLibrary_h_166_SPARSE_DATA \
	Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintPlatformLibrary_h_166_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintPlatformLibrary_h_166_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintPlatformLibrary_h_166_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class BlueprintPlatformLibrary."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UBlueprintPlatformLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintPlatformLibrary_h


#define FOREACH_ENUM_EAPPLICATIONSTATE(op) \
	op(EApplicationState::Unknown) \
	op(EApplicationState::Inactive) \
	op(EApplicationState::Background) \
	op(EApplicationState::Active) 
#define FOREACH_ENUM_ESCREENORIENTATION(op) \
	op(EScreenOrientation::Unknown) \
	op(EScreenOrientation::Portrait) \
	op(EScreenOrientation::PortraitUpsideDown) \
	op(EScreenOrientation::LandscapeLeft) \
	op(EScreenOrientation::LandscapeRight) \
	op(EScreenOrientation::FaceUp) \
	op(EScreenOrientation::FaceDown) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
