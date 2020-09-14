// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InteractiveToolsFramework/Public/InteractiveToolManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInteractiveToolManager() {}
// Cross Module References
	INTERACTIVETOOLSFRAMEWORK_API UEnum* Z_Construct_UEnum_InteractiveToolsFramework_EToolChangeTrackingMode();
	UPackage* Z_Construct_UPackage__Script_InteractiveToolsFramework();
	INTERACTIVETOOLSFRAMEWORK_API UEnum* Z_Construct_UEnum_InteractiveToolsFramework_EToolSide();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolManager_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolManager();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolBuilder_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveTool_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UToolContextTransactionProvider_NoRegister();
// End Cross Module References
	static UEnum* EToolChangeTrackingMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_InteractiveToolsFramework_EToolChangeTrackingMode, Z_Construct_UPackage__Script_InteractiveToolsFramework(), TEXT("EToolChangeTrackingMode"));
		}
		return Singleton;
	}
	template<> INTERACTIVETOOLSFRAMEWORK_API UEnum* StaticEnum<EToolChangeTrackingMode>()
	{
		return EToolChangeTrackingMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EToolChangeTrackingMode(EToolChangeTrackingMode_StaticEnum, TEXT("/Script/InteractiveToolsFramework"), TEXT("EToolChangeTrackingMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_InteractiveToolsFramework_EToolChangeTrackingMode_Hash() { return 2940456497U; }
	UEnum* Z_Construct_UEnum_InteractiveToolsFramework_EToolChangeTrackingMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_InteractiveToolsFramework();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EToolChangeTrackingMode"), 0, Get_Z_Construct_UEnum_InteractiveToolsFramework_EToolChangeTrackingMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EToolChangeTrackingMode::NoChangeTracking", (int64)EToolChangeTrackingMode::NoChangeTracking },
				{ "EToolChangeTrackingMode::UndoToExit", (int64)EToolChangeTrackingMode::UndoToExit },
				{ "EToolChangeTrackingMode::FullUndoRedo", (int64)EToolChangeTrackingMode::FullUndoRedo },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Comment", "/**\n * UInteractiveToolManager can emit change events for the active tool in various ways.\n * This allows different modes to control how tools activate/deactivate on undo/redo, which is necessary\n * because some modes (eg Modeling Mode) do not support redo \"into\" a Tool, while others require it (like Paint Mode)\n */" },
				{ "FullUndoRedo.Comment", "/** Full change tracking of active Tool. Note that on Activation when an existing Tool is auto-shutdown, two separate FChanges are emitted, wrapped in a single Transaction */" },
				{ "FullUndoRedo.Name", "EToolChangeTrackingMode::FullUndoRedo" },
				{ "FullUndoRedo.ToolTip", "Full change tracking of active Tool. Note that on Activation when an existing Tool is auto-shutdown, two separate FChanges are emitted, wrapped in a single Transaction" },
				{ "ModuleRelativePath", "Public/InteractiveToolManager.h" },
				{ "NoChangeTracking.Comment", "/** Do not emit any Active Tool change events */" },
				{ "NoChangeTracking.Name", "EToolChangeTrackingMode::NoChangeTracking" },
				{ "NoChangeTracking.ToolTip", "Do not emit any Active Tool change events" },
				{ "ToolTip", "UInteractiveToolManager can emit change events for the active tool in various ways.\nThis allows different modes to control how tools activate/deactivate on undo/redo, which is necessary\nbecause some modes (eg Modeling Mode) do not support redo \"into\" a Tool, while others require it (like Paint Mode)" },
				{ "UndoToExit.Comment", "/** When Activating a new Tool, emit a change that will cancel/deactivate that Tool on Undo, but not reactivate it on Redo */" },
				{ "UndoToExit.Name", "EToolChangeTrackingMode::UndoToExit" },
				{ "UndoToExit.ToolTip", "When Activating a new Tool, emit a change that will cancel/deactivate that Tool on Undo, but not reactivate it on Redo" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
				nullptr,
				"EToolChangeTrackingMode",
				"EToolChangeTrackingMode",
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
	static UEnum* EToolSide_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_InteractiveToolsFramework_EToolSide, Z_Construct_UPackage__Script_InteractiveToolsFramework(), TEXT("EToolSide"));
		}
		return Singleton;
	}
	template<> INTERACTIVETOOLSFRAMEWORK_API UEnum* StaticEnum<EToolSide>()
	{
		return EToolSide_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EToolSide(EToolSide_StaticEnum, TEXT("/Script/InteractiveToolsFramework"), TEXT("EToolSide"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_InteractiveToolsFramework_EToolSide_Hash() { return 2180215013U; }
	UEnum* Z_Construct_UEnum_InteractiveToolsFramework_EToolSide()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_InteractiveToolsFramework();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EToolSide"), 0, Get_Z_Construct_UEnum_InteractiveToolsFramework_EToolSide_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EToolSide::Left", (int64)EToolSide::Left },
				{ "EToolSide::Mouse", (int64)EToolSide::Mouse },
				{ "EToolSide::Right", (int64)EToolSide::Right },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Comment", "/** A Tool can be activated on a particular input device, currently identified by a \"side\" */" },
				{ "Left.Comment", "/** Left-hand Tool, also used for Mouse */" },
				{ "Left.Name", "EToolSide::Left" },
				{ "Left.ToolTip", "Left-hand Tool, also used for Mouse" },
				{ "ModuleRelativePath", "Public/InteractiveToolManager.h" },
				{ "Mouse.Name", "EToolSide::Mouse" },
				{ "Right.Comment", "/** Right-hand Tool*/" },
				{ "Right.Name", "EToolSide::Right" },
				{ "Right.ToolTip", "Right-hand Tool" },
				{ "ToolTip", "A Tool can be activated on a particular input device, currently identified by a \"side\"" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
				nullptr,
				"EToolSide",
				"EToolSide",
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
	void UInteractiveToolManager::StaticRegisterNativesUInteractiveToolManager()
	{
	}
	UClass* Z_Construct_UClass_UInteractiveToolManager_NoRegister()
	{
		return UInteractiveToolManager::StaticClass();
	}
	struct Z_Construct_UClass_UInteractiveToolManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ToolBuilders_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_ToolBuilders;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ToolBuilders_Key_KeyProp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ToolBuilders_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActiveRightTool_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActiveRightTool;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActiveLeftTool_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActiveLeftTool;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInteractiveToolManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractiveToolManager_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UInteractiveToolManager allows users of the tools framework to create and operate Tool instances.\n * For each Tool, a (string,ToolBuilder) pair is registered with the ToolManager.\n * Tools can then be activated via the string identifier.\n * \n * Currently a single Tool can be active for each input device. So for mouse input a single\n * Tool is available and effectively a lightweight mode. The mouse uses the \"Left\" tool slot.\n * \n * For VR controllers and touch input, a \"Left\" and \"Right\" tool can be active at the same time.  \n * @todo this is not fully supported yet\n * \n * Tools are not directly created. Use SelectActiveToolType(side,string) to set the active ToolBuilder\n * on a given side, and then use ActivateTool() to create the new Tool instance.\n *\n */" },
		{ "IncludePath", "InteractiveToolManager.h" },
		{ "ModuleRelativePath", "Public/InteractiveToolManager.h" },
		{ "ToolTip", "UInteractiveToolManager allows users of the tools framework to create and operate Tool instances.\nFor each Tool, a (string,ToolBuilder) pair is registered with the ToolManager.\nTools can then be activated via the string identifier.\n\nCurrently a single Tool can be active for each input device. So for mouse input a single\nTool is available and effectively a lightweight mode. The mouse uses the \"Left\" tool slot.\n\nFor VR controllers and touch input, a \"Left\" and \"Right\" tool can be active at the same time.\n@todo this is not fully supported yet\n\nTools are not directly created. Use SelectActiveToolType(side,string) to set the active ToolBuilder\non a given side, and then use ActivateTool() to create the new Tool instance." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractiveToolManager_Statics::NewProp_ToolBuilders_MetaData[] = {
		{ "Comment", "/** Current set of named ToolBuilders */" },
		{ "ModuleRelativePath", "Public/InteractiveToolManager.h" },
		{ "ToolTip", "Current set of named ToolBuilders" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UInteractiveToolManager_Statics::NewProp_ToolBuilders = { "ToolBuilders", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInteractiveToolManager, ToolBuilders), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UInteractiveToolManager_Statics::NewProp_ToolBuilders_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInteractiveToolManager_Statics::NewProp_ToolBuilders_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UInteractiveToolManager_Statics::NewProp_ToolBuilders_Key_KeyProp = { "ToolBuilders_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInteractiveToolManager_Statics::NewProp_ToolBuilders_ValueProp = { "ToolBuilders", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UInteractiveToolBuilder_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractiveToolManager_Statics::NewProp_ActiveRightTool_MetaData[] = {
		{ "Comment", "/** Currently-active Right Tool, or null if no Tool is active */" },
		{ "ModuleRelativePath", "Public/InteractiveToolManager.h" },
		{ "ToolTip", "Currently-active Right Tool, or null if no Tool is active" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInteractiveToolManager_Statics::NewProp_ActiveRightTool = { "ActiveRightTool", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInteractiveToolManager, ActiveRightTool), Z_Construct_UClass_UInteractiveTool_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UInteractiveToolManager_Statics::NewProp_ActiveRightTool_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInteractiveToolManager_Statics::NewProp_ActiveRightTool_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractiveToolManager_Statics::NewProp_ActiveLeftTool_MetaData[] = {
		{ "Comment", "/** Currently-active Left Tool, or null if no Tool is active */" },
		{ "ModuleRelativePath", "Public/InteractiveToolManager.h" },
		{ "ToolTip", "Currently-active Left Tool, or null if no Tool is active" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInteractiveToolManager_Statics::NewProp_ActiveLeftTool = { "ActiveLeftTool", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInteractiveToolManager, ActiveLeftTool), Z_Construct_UClass_UInteractiveTool_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UInteractiveToolManager_Statics::NewProp_ActiveLeftTool_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInteractiveToolManager_Statics::NewProp_ActiveLeftTool_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInteractiveToolManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractiveToolManager_Statics::NewProp_ToolBuilders,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractiveToolManager_Statics::NewProp_ToolBuilders_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractiveToolManager_Statics::NewProp_ToolBuilders_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractiveToolManager_Statics::NewProp_ActiveRightTool,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractiveToolManager_Statics::NewProp_ActiveLeftTool,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UInteractiveToolManager_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UToolContextTransactionProvider_NoRegister, (int32)VTABLE_OFFSET(UInteractiveToolManager, IToolContextTransactionProvider), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInteractiveToolManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInteractiveToolManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInteractiveToolManager_Statics::ClassParams = {
		&UInteractiveToolManager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UInteractiveToolManager_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UInteractiveToolManager_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UInteractiveToolManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInteractiveToolManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInteractiveToolManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInteractiveToolManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInteractiveToolManager, 4058236695);
	template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<UInteractiveToolManager>()
	{
		return UInteractiveToolManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInteractiveToolManager(Z_Construct_UClass_UInteractiveToolManager, &UInteractiveToolManager::StaticClass, TEXT("/Script/InteractiveToolsFramework"), TEXT("UInteractiveToolManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInteractiveToolManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
