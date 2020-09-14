// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Matinee/InterpTrackVisibility.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterpTrackVisibility() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EVisibilityTrackCondition();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EVisibilityTrackAction();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FVisibilityTrackKey();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackVisibility_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackVisibility();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrack();
// End Cross Module References
	static UEnum* EVisibilityTrackCondition_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EVisibilityTrackCondition, Z_Construct_UPackage__Script_Engine(), TEXT("EVisibilityTrackCondition"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EVisibilityTrackCondition>()
	{
		return EVisibilityTrackCondition_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EVisibilityTrackCondition(EVisibilityTrackCondition_StaticEnum, TEXT("/Script/Engine"), TEXT("EVisibilityTrackCondition"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EVisibilityTrackCondition_Hash() { return 2808095597U; }
	UEnum* Z_Construct_UEnum_Engine_EVisibilityTrackCondition()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EVisibilityTrackCondition"), 0, Get_Z_Construct_UEnum_Engine_EVisibilityTrackCondition_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EVTC_Always", (int64)EVTC_Always },
				{ "EVTC_GoreEnabled", (int64)EVTC_GoreEnabled },
				{ "EVTC_GoreDisabled", (int64)EVTC_GoreDisabled },
				{ "EVTC_MAX", (int64)EVTC_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Comment", "/** Required condition for firing this event */" },
				{ "EVTC_Always.Comment", "/** Always play this event */" },
				{ "EVTC_Always.Name", "EVTC_Always" },
				{ "EVTC_Always.ToolTip", "Always play this event" },
				{ "EVTC_GoreDisabled.Comment", "/** Only play this event when extreme content (gore) is disabled */" },
				{ "EVTC_GoreDisabled.Name", "EVTC_GoreDisabled" },
				{ "EVTC_GoreDisabled.ToolTip", "Only play this event when extreme content (gore) is disabled" },
				{ "EVTC_GoreEnabled.Comment", "/** Only play this event when extreme content (gore) is enabled */" },
				{ "EVTC_GoreEnabled.Name", "EVTC_GoreEnabled" },
				{ "EVTC_GoreEnabled.ToolTip", "Only play this event when extreme content (gore) is enabled" },
				{ "EVTC_MAX.Name", "EVTC_MAX" },
				{ "ModuleRelativePath", "Classes/Matinee/InterpTrackVisibility.h" },
				{ "ToolTip", "Required condition for firing this event" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"EVisibilityTrackCondition",
				"EVisibilityTrackCondition",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EVisibilityTrackAction_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EVisibilityTrackAction, Z_Construct_UPackage__Script_Engine(), TEXT("EVisibilityTrackAction"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EVisibilityTrackAction>()
	{
		return EVisibilityTrackAction_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EVisibilityTrackAction(EVisibilityTrackAction_StaticEnum, TEXT("/Script/Engine"), TEXT("EVisibilityTrackAction"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EVisibilityTrackAction_Hash() { return 630846262U; }
	UEnum* Z_Construct_UEnum_Engine_EVisibilityTrackAction()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EVisibilityTrackAction"), 0, Get_Z_Construct_UEnum_Engine_EVisibilityTrackAction_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EVTA_Hide", (int64)EVTA_Hide },
				{ "EVTA_Show", (int64)EVTA_Show },
				{ "EVTA_Toggle", (int64)EVTA_Toggle },
				{ "EVTA_MAX", (int64)EVTA_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Comment", "/** Visibility track actions */" },
				{ "EVTA_Hide.Comment", "/** Hides the object */" },
				{ "EVTA_Hide.Name", "EVTA_Hide" },
				{ "EVTA_Hide.ToolTip", "Hides the object" },
				{ "EVTA_MAX.Name", "EVTA_MAX" },
				{ "EVTA_Show.Comment", "/** Shows the object */" },
				{ "EVTA_Show.Name", "EVTA_Show" },
				{ "EVTA_Show.ToolTip", "Shows the object" },
				{ "EVTA_Toggle.Comment", "/** Toggles visibility of the object */" },
				{ "EVTA_Toggle.Name", "EVTA_Toggle" },
				{ "EVTA_Toggle.ToolTip", "Toggles visibility of the object" },
				{ "ModuleRelativePath", "Classes/Matinee/InterpTrackVisibility.h" },
				{ "ToolTip", "Visibility track actions" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"EVisibilityTrackAction",
				"EVisibilityTrackAction",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FVisibilityTrackKey::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FVisibilityTrackKey_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FVisibilityTrackKey, Z_Construct_UPackage__Script_Engine(), TEXT("VisibilityTrackKey"), sizeof(FVisibilityTrackKey), Get_Z_Construct_UScriptStruct_FVisibilityTrackKey_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FVisibilityTrackKey>()
{
	return FVisibilityTrackKey::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FVisibilityTrackKey(FVisibilityTrackKey::StaticStruct, TEXT("/Script/Engine"), TEXT("VisibilityTrackKey"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFVisibilityTrackKey
{
	FScriptStruct_Engine_StaticRegisterNativesFVisibilityTrackKey()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("VisibilityTrackKey")),new UScriptStruct::TCppStructOps<FVisibilityTrackKey>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFVisibilityTrackKey;
	struct Z_Construct_UScriptStruct_FVisibilityTrackKey_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActiveCondition_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ActiveCondition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Action_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Action;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Time_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Time;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVisibilityTrackKey_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Information for one toggle in the track. */" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackVisibility.h" },
		{ "ToolTip", "Information for one toggle in the track." },
	};
#endif
	void* Z_Construct_UScriptStruct_FVisibilityTrackKey_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVisibilityTrackKey>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVisibilityTrackKey_Statics::NewProp_ActiveCondition_MetaData[] = {
		{ "Comment", "/** Condition that must be satisfied for this key event to fire */" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackVisibility.h" },
		{ "ToolTip", "Condition that must be satisfied for this key event to fire" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FVisibilityTrackKey_Statics::NewProp_ActiveCondition = { "ActiveCondition", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVisibilityTrackKey, ActiveCondition), Z_Construct_UEnum_Engine_EVisibilityTrackCondition, METADATA_PARAMS(Z_Construct_UScriptStruct_FVisibilityTrackKey_Statics::NewProp_ActiveCondition_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVisibilityTrackKey_Statics::NewProp_ActiveCondition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVisibilityTrackKey_Statics::NewProp_Action_MetaData[] = {
		{ "Category", "VisibilityTrackKey" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackVisibility.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FVisibilityTrackKey_Statics::NewProp_Action = { "Action", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVisibilityTrackKey, Action), Z_Construct_UEnum_Engine_EVisibilityTrackAction, METADATA_PARAMS(Z_Construct_UScriptStruct_FVisibilityTrackKey_Statics::NewProp_Action_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVisibilityTrackKey_Statics::NewProp_Action_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVisibilityTrackKey_Statics::NewProp_Time_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackVisibility.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVisibilityTrackKey_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVisibilityTrackKey, Time), METADATA_PARAMS(Z_Construct_UScriptStruct_FVisibilityTrackKey_Statics::NewProp_Time_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVisibilityTrackKey_Statics::NewProp_Time_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVisibilityTrackKey_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVisibilityTrackKey_Statics::NewProp_ActiveCondition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVisibilityTrackKey_Statics::NewProp_Action,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVisibilityTrackKey_Statics::NewProp_Time,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVisibilityTrackKey_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"VisibilityTrackKey",
		sizeof(FVisibilityTrackKey),
		alignof(FVisibilityTrackKey),
		Z_Construct_UScriptStruct_FVisibilityTrackKey_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVisibilityTrackKey_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVisibilityTrackKey_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVisibilityTrackKey_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVisibilityTrackKey()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FVisibilityTrackKey_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("VisibilityTrackKey"), sizeof(FVisibilityTrackKey), Get_Z_Construct_UScriptStruct_FVisibilityTrackKey_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FVisibilityTrackKey_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVisibilityTrackKey_Hash() { return 3643840435U; }
	void UInterpTrackVisibility::StaticRegisterNativesUInterpTrackVisibility()
	{
	}
	UClass* Z_Construct_UClass_UInterpTrackVisibility_NoRegister()
	{
		return UInterpTrackVisibility::StaticClass();
	}
	struct Z_Construct_UClass_UInterpTrackVisibility_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bFireEventsWhenJumpingForwards_MetaData[];
#endif
		static void NewProp_bFireEventsWhenJumpingForwards_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFireEventsWhenJumpingForwards;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bFireEventsWhenBackwards_MetaData[];
#endif
		static void NewProp_bFireEventsWhenBackwards_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFireEventsWhenBackwards;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bFireEventsWhenForwards_MetaData[];
#endif
		static void NewProp_bFireEventsWhenForwards_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFireEventsWhenForwards;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VisibilityTrack_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_VisibilityTrack;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VisibilityTrack_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInterpTrackVisibility_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterpTrack,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrackVisibility_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Visibility Track" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Matinee/InterpTrackVisibility.h" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackVisibility.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrackVisibility_Statics::NewProp_bFireEventsWhenJumpingForwards_MetaData[] = {
		{ "Category", "InterpTrackVisibility" },
		{ "Comment", "/** If true, events on this track are fired even when jumping forwads through a sequence - for example, skipping a cinematic. */" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackVisibility.h" },
		{ "ToolTip", "If true, events on this track are fired even when jumping forwads through a sequence - for example, skipping a cinematic." },
	};
#endif
	void Z_Construct_UClass_UInterpTrackVisibility_Statics::NewProp_bFireEventsWhenJumpingForwards_SetBit(void* Obj)
	{
		((UInterpTrackVisibility*)Obj)->bFireEventsWhenJumpingForwards = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInterpTrackVisibility_Statics::NewProp_bFireEventsWhenJumpingForwards = { "bFireEventsWhenJumpingForwards", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UInterpTrackVisibility), &Z_Construct_UClass_UInterpTrackVisibility_Statics::NewProp_bFireEventsWhenJumpingForwards_SetBit, METADATA_PARAMS(Z_Construct_UClass_UInterpTrackVisibility_Statics::NewProp_bFireEventsWhenJumpingForwards_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterpTrackVisibility_Statics::NewProp_bFireEventsWhenJumpingForwards_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrackVisibility_Statics::NewProp_bFireEventsWhenBackwards_MetaData[] = {
		{ "Category", "InterpTrackVisibility" },
		{ "Comment", "/** If events should be fired when passed playing the sequence backwards. */" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackVisibility.h" },
		{ "ToolTip", "If events should be fired when passed playing the sequence backwards." },
	};
#endif
	void Z_Construct_UClass_UInterpTrackVisibility_Statics::NewProp_bFireEventsWhenBackwards_SetBit(void* Obj)
	{
		((UInterpTrackVisibility*)Obj)->bFireEventsWhenBackwards = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInterpTrackVisibility_Statics::NewProp_bFireEventsWhenBackwards = { "bFireEventsWhenBackwards", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UInterpTrackVisibility), &Z_Construct_UClass_UInterpTrackVisibility_Statics::NewProp_bFireEventsWhenBackwards_SetBit, METADATA_PARAMS(Z_Construct_UClass_UInterpTrackVisibility_Statics::NewProp_bFireEventsWhenBackwards_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterpTrackVisibility_Statics::NewProp_bFireEventsWhenBackwards_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrackVisibility_Statics::NewProp_bFireEventsWhenForwards_MetaData[] = {
		{ "Category", "InterpTrackVisibility" },
		{ "Comment", "/** If events should be fired when passed playing the sequence forwards. */" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackVisibility.h" },
		{ "ToolTip", "If events should be fired when passed playing the sequence forwards." },
	};
#endif
	void Z_Construct_UClass_UInterpTrackVisibility_Statics::NewProp_bFireEventsWhenForwards_SetBit(void* Obj)
	{
		((UInterpTrackVisibility*)Obj)->bFireEventsWhenForwards = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInterpTrackVisibility_Statics::NewProp_bFireEventsWhenForwards = { "bFireEventsWhenForwards", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UInterpTrackVisibility), &Z_Construct_UClass_UInterpTrackVisibility_Statics::NewProp_bFireEventsWhenForwards_SetBit, METADATA_PARAMS(Z_Construct_UClass_UInterpTrackVisibility_Statics::NewProp_bFireEventsWhenForwards_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterpTrackVisibility_Statics::NewProp_bFireEventsWhenForwards_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrackVisibility_Statics::NewProp_VisibilityTrack_MetaData[] = {
		{ "Comment", "/** Array of events to fire off. */" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackVisibility.h" },
		{ "ToolTip", "Array of events to fire off." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInterpTrackVisibility_Statics::NewProp_VisibilityTrack = { "VisibilityTrack", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInterpTrackVisibility, VisibilityTrack), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UInterpTrackVisibility_Statics::NewProp_VisibilityTrack_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterpTrackVisibility_Statics::NewProp_VisibilityTrack_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInterpTrackVisibility_Statics::NewProp_VisibilityTrack_Inner = { "VisibilityTrack", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVisibilityTrackKey, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInterpTrackVisibility_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpTrackVisibility_Statics::NewProp_bFireEventsWhenJumpingForwards,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpTrackVisibility_Statics::NewProp_bFireEventsWhenBackwards,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpTrackVisibility_Statics::NewProp_bFireEventsWhenForwards,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpTrackVisibility_Statics::NewProp_VisibilityTrack,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpTrackVisibility_Statics::NewProp_VisibilityTrack_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInterpTrackVisibility_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterpTrackVisibility>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInterpTrackVisibility_Statics::ClassParams = {
		&UInterpTrackVisibility::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UInterpTrackVisibility_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UInterpTrackVisibility_Statics::PropPointers),
		0,
		0x000820A0u,
		METADATA_PARAMS(Z_Construct_UClass_UInterpTrackVisibility_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInterpTrackVisibility_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInterpTrackVisibility()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInterpTrackVisibility_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInterpTrackVisibility, 398289360);
	template<> ENGINE_API UClass* StaticClass<UInterpTrackVisibility>()
	{
		return UInterpTrackVisibility::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInterpTrackVisibility(Z_Construct_UClass_UInterpTrackVisibility, &UInterpTrackVisibility::StaticClass, TEXT("/Script/Engine"), TEXT("UInterpTrackVisibility"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterpTrackVisibility);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
