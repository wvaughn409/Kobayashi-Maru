// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InteractiveToolsFramework/Public/InputBehavior.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInputBehavior() {}
// Cross Module References
	INTERACTIVETOOLSFRAMEWORK_API UEnum* Z_Construct_UEnum_InteractiveToolsFramework_EInputCaptureState();
	UPackage* Z_Construct_UPackage__Script_InteractiveToolsFramework();
	INTERACTIVETOOLSFRAMEWORK_API UEnum* Z_Construct_UEnum_InteractiveToolsFramework_EInputCaptureRequestType();
	INTERACTIVETOOLSFRAMEWORK_API UEnum* Z_Construct_UEnum_InteractiveToolsFramework_EInputCaptureSide();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInputBehavior_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInputBehavior();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
	static UEnum* EInputCaptureState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_InteractiveToolsFramework_EInputCaptureState, Z_Construct_UPackage__Script_InteractiveToolsFramework(), TEXT("EInputCaptureState"));
		}
		return Singleton;
	}
	template<> INTERACTIVETOOLSFRAMEWORK_API UEnum* StaticEnum<EInputCaptureState>()
	{
		return EInputCaptureState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EInputCaptureState(EInputCaptureState_StaticEnum, TEXT("/Script/InteractiveToolsFramework"), TEXT("EInputCaptureState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_InteractiveToolsFramework_EInputCaptureState_Hash() { return 432716114U; }
	UEnum* Z_Construct_UEnum_InteractiveToolsFramework_EInputCaptureState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_InteractiveToolsFramework();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EInputCaptureState"), 0, Get_Z_Construct_UEnum_InteractiveToolsFramework_EInputCaptureState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EInputCaptureState::Begin", (int64)EInputCaptureState::Begin },
				{ "EInputCaptureState::Continue", (int64)EInputCaptureState::Continue },
				{ "EInputCaptureState::End", (int64)EInputCaptureState::End },
				{ "EInputCaptureState::Ignore", (int64)EInputCaptureState::Ignore },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Begin.Name", "EInputCaptureState::Begin" },
				{ "Comment", "/**\n * FInputCaptureUpdate uses this type to indicate what state the capturing Behavior\n * would like to transition to, based on the input event\n */" },
				{ "Continue.Comment", "// start capturing (which should always be the case if BeginCapture is called)\n" },
				{ "Continue.Name", "EInputCaptureState::Continue" },
				{ "Continue.ToolTip", "start capturing (which should always be the case if BeginCapture is called)" },
				{ "End.Comment", "// Behavior wants to continue capturing\n" },
				{ "End.Name", "EInputCaptureState::End" },
				{ "End.ToolTip", "Behavior wants to continue capturing" },
				{ "Ignore.Comment", "// Behavior wants to end capturing\n" },
				{ "Ignore.Name", "EInputCaptureState::Ignore" },
				{ "Ignore.ToolTip", "Behavior wants to end capturing" },
				{ "ModuleRelativePath", "Public/InputBehavior.h" },
				{ "ToolTip", "FInputCaptureUpdate uses this type to indicate what state the capturing Behavior\nwould like to transition to, based on the input event" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
				nullptr,
				"EInputCaptureState",
				"EInputCaptureState",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EInputCaptureRequestType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_InteractiveToolsFramework_EInputCaptureRequestType, Z_Construct_UPackage__Script_InteractiveToolsFramework(), TEXT("EInputCaptureRequestType"));
		}
		return Singleton;
	}
	template<> INTERACTIVETOOLSFRAMEWORK_API UEnum* StaticEnum<EInputCaptureRequestType>()
	{
		return EInputCaptureRequestType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EInputCaptureRequestType(EInputCaptureRequestType_StaticEnum, TEXT("/Script/InteractiveToolsFramework"), TEXT("EInputCaptureRequestType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_InteractiveToolsFramework_EInputCaptureRequestType_Hash() { return 2046573881U; }
	UEnum* Z_Construct_UEnum_InteractiveToolsFramework_EInputCaptureRequestType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_InteractiveToolsFramework();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EInputCaptureRequestType"), 0, Get_Z_Construct_UEnum_InteractiveToolsFramework_EInputCaptureRequestType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EInputCaptureRequestType::Begin", (int64)EInputCaptureRequestType::Begin },
				{ "EInputCaptureRequestType::Ignore", (int64)EInputCaptureRequestType::Ignore },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Begin.Name", "EInputCaptureRequestType::Begin" },
				{ "Comment", "/**\n * Used by FInputCaptureRequest to indicate whether the InputBehavior\n * wants to capture or ignore an input event\n */" },
				{ "Ignore.Name", "EInputCaptureRequestType::Ignore" },
				{ "ModuleRelativePath", "Public/InputBehavior.h" },
				{ "ToolTip", "Used by FInputCaptureRequest to indicate whether the InputBehavior\nwants to capture or ignore an input event" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
				nullptr,
				"EInputCaptureRequestType",
				"EInputCaptureRequestType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EInputCaptureSide_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_InteractiveToolsFramework_EInputCaptureSide, Z_Construct_UPackage__Script_InteractiveToolsFramework(), TEXT("EInputCaptureSide"));
		}
		return Singleton;
	}
	template<> INTERACTIVETOOLSFRAMEWORK_API UEnum* StaticEnum<EInputCaptureSide>()
	{
		return EInputCaptureSide_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EInputCaptureSide(EInputCaptureSide_StaticEnum, TEXT("/Script/InteractiveToolsFramework"), TEXT("EInputCaptureSide"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_InteractiveToolsFramework_EInputCaptureSide_Hash() { return 2142646888U; }
	UEnum* Z_Construct_UEnum_InteractiveToolsFramework_EInputCaptureSide()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_InteractiveToolsFramework();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EInputCaptureSide"), 0, Get_Z_Construct_UEnum_InteractiveToolsFramework_EInputCaptureSide_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EInputCaptureSide::None", (int64)EInputCaptureSide::None },
				{ "EInputCaptureSide::Left", (int64)EInputCaptureSide::Left },
				{ "EInputCaptureSide::Right", (int64)EInputCaptureSide::Right },
				{ "EInputCaptureSide::Both", (int64)EInputCaptureSide::Both },
				{ "EInputCaptureSide::Any", (int64)EInputCaptureSide::Any },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Any.Name", "EInputCaptureSide::Any" },
				{ "Both.Name", "EInputCaptureSide::Both" },
				{ "Comment", "/**\n * Input can be captured separately for Left and Right sides (eg for VR controllers)\n * Currently mouse is Left.\n */" },
				{ "Left.Name", "EInputCaptureSide::Left" },
				{ "ModuleRelativePath", "Public/InputBehavior.h" },
				{ "None.Name", "EInputCaptureSide::None" },
				{ "Right.Name", "EInputCaptureSide::Right" },
				{ "ToolTip", "Input can be captured separately for Left and Right sides (eg for VR controllers)\nCurrently mouse is Left." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
				nullptr,
				"EInputCaptureSide",
				"EInputCaptureSide",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void UInputBehavior::StaticRegisterNativesUInputBehavior()
	{
	}
	UClass* Z_Construct_UClass_UInputBehavior_NoRegister()
	{
		return UInputBehavior::StaticClass();
	}
	struct Z_Construct_UClass_UInputBehavior_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInputBehavior_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputBehavior_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * An InputBehavior implements a state machine for a user interaction. \n * The InputRouter maintains a set of active Behaviors, and when new input\n * events occur, it calls WantsCapture() to check if the Behavior would like to\n * begin capturing the applicable input event stream (eg for a mouse, one or both VR controllers, etc).\n * If the Behavior acquires capture, UpdateCapture() is called until the Behavior\n * indicates that it wants to release the device, or until the InputRouter force-terminates\n * the capture via ForceEndCapture().\n *\n * For example, something like ButtonSetClickBehavior might work as follows:\n *    - in WantsCapture(), if left mouse is pressed and a button is under cursor, return Begin, otherwise Ignore\n *    - in BeginCapture(), save identifier for button that is under cursor\n *    - in UpdateCapture()\n *        - if left mouse is down, return Continue\n *        - if left mouse is released:\n *            - if saved button is still under cursor, call button.Clicked()\n *            - return End\n *\n * Written sufficiently generically, the above Behavior doesn't need to know about buttons,\n * it just needs to know how to hit-test the clickable object(s). Similarly separate \n * Behaviors can be written for mouse, VR, touch, gamepad, etc. \n *\n * Implementing interactions in this way allows the input handling to be separated from functionality.\n */" },
		{ "IncludePath", "InputBehavior.h" },
		{ "ModuleRelativePath", "Public/InputBehavior.h" },
		{ "ToolTip", "An InputBehavior implements a state machine for a user interaction.\nThe InputRouter maintains a set of active Behaviors, and when new input\nevents occur, it calls WantsCapture() to check if the Behavior would like to\nbegin capturing the applicable input event stream (eg for a mouse, one or both VR controllers, etc).\nIf the Behavior acquires capture, UpdateCapture() is called until the Behavior\nindicates that it wants to release the device, or until the InputRouter force-terminates\nthe capture via ForceEndCapture().\n\nFor example, something like ButtonSetClickBehavior might work as follows:\n   - in WantsCapture(), if left mouse is pressed and a button is under cursor, return Begin, otherwise Ignore\n   - in BeginCapture(), save identifier for button that is under cursor\n   - in UpdateCapture()\n       - if left mouse is down, return Continue\n       - if left mouse is released:\n           - if saved button is still under cursor, call button.Clicked()\n           - return End\n\nWritten sufficiently generically, the above Behavior doesn't need to know about buttons,\nit just needs to know how to hit-test the clickable object(s). Similarly separate\nBehaviors can be written for mouse, VR, touch, gamepad, etc.\n\nImplementing interactions in this way allows the input handling to be separated from functionality." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInputBehavior_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInputBehavior>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInputBehavior_Statics::ClassParams = {
		&UInputBehavior::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UInputBehavior_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInputBehavior_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInputBehavior()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInputBehavior_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInputBehavior, 1862171232);
	template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<UInputBehavior>()
	{
		return UInputBehavior::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInputBehavior(Z_Construct_UClass_UInputBehavior, &UInputBehavior::StaticClass, TEXT("/Script/InteractiveToolsFramework"), TEXT("UInputBehavior"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInputBehavior);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
