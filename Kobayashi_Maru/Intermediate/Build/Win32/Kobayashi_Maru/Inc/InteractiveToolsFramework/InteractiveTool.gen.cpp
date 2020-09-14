// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InteractiveToolsFramework/Public/InteractiveTool.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInteractiveTool() {}
// Cross Module References
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolPropertySet_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolPropertySet();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_InteractiveToolsFramework();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveTool_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveTool();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInputBehaviorSet_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInputBehaviorSource_NoRegister();
// End Cross Module References
	void UInteractiveToolPropertySet::StaticRegisterNativesUInteractiveToolPropertySet()
	{
	}
	UClass* Z_Construct_UClass_UInteractiveToolPropertySet_NoRegister()
	{
		return UInteractiveToolPropertySet::StaticClass();
	}
	struct Z_Construct_UClass_UInteractiveToolPropertySet_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsPropertySetEnabled_MetaData[];
#endif
		static void NewProp_bIsPropertySetEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsPropertySetEnabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CachedProperties_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CachedProperties;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInteractiveToolPropertySet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractiveToolPropertySet_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A UInteractiveTool contains a set of UObjects that contain \"properties\" of the Tool, ie\n * the configuration flags, parameters, etc that control the Tool. Currently any UObject\n * can be added as a property set, however there is no automatic mechanism for those child \n * UObjects to notify the Tool when a property changes.\n * \n * If you make your property set UObjects subclasses of UInteractiveToolPropertySet, then\n * when the Tool Properties are changed *in the Editor*, the parent Tool will be automatically notified.\n * You can override UInteractiveTool::OnPropertyModified() to act on these notifications\n */" },
		{ "IncludePath", "InteractiveTool.h" },
		{ "ModuleRelativePath", "Public/InteractiveTool.h" },
		{ "ToolTip", "A UInteractiveTool contains a set of UObjects that contain \"properties\" of the Tool, ie\nthe configuration flags, parameters, etc that control the Tool. Currently any UObject\ncan be added as a property set, however there is no automatic mechanism for those child\nUObjects to notify the Tool when a property changes.\n\nIf you make your property set UObjects subclasses of UInteractiveToolPropertySet, then\nwhen the Tool Properties are changed *in the Editor*, the parent Tool will be automatically notified.\nYou can override UInteractiveTool::OnPropertyModified() to act on these notifications" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractiveToolPropertySet_Statics::NewProp_bIsPropertySetEnabled_MetaData[] = {
		{ "ModuleRelativePath", "Public/InteractiveTool.h" },
	};
#endif
	void Z_Construct_UClass_UInteractiveToolPropertySet_Statics::NewProp_bIsPropertySetEnabled_SetBit(void* Obj)
	{
		((UInteractiveToolPropertySet*)Obj)->bIsPropertySetEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInteractiveToolPropertySet_Statics::NewProp_bIsPropertySetEnabled = { "bIsPropertySetEnabled", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UInteractiveToolPropertySet), &Z_Construct_UClass_UInteractiveToolPropertySet_Statics::NewProp_bIsPropertySetEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_UInteractiveToolPropertySet_Statics::NewProp_bIsPropertySetEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInteractiveToolPropertySet_Statics::NewProp_bIsPropertySetEnabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractiveToolPropertySet_Statics::NewProp_CachedProperties_MetaData[] = {
		{ "Comment", "// CachedProperties should only ever be set to an instance of the subclass, ideally via GetPropertyCache().\n" },
		{ "ModuleRelativePath", "Public/InteractiveTool.h" },
		{ "ToolTip", "CachedProperties should only ever be set to an instance of the subclass, ideally via GetPropertyCache()." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInteractiveToolPropertySet_Statics::NewProp_CachedProperties = { "CachedProperties", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInteractiveToolPropertySet, CachedProperties), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UInteractiveToolPropertySet_Statics::NewProp_CachedProperties_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInteractiveToolPropertySet_Statics::NewProp_CachedProperties_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInteractiveToolPropertySet_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractiveToolPropertySet_Statics::NewProp_bIsPropertySetEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractiveToolPropertySet_Statics::NewProp_CachedProperties,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInteractiveToolPropertySet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInteractiveToolPropertySet>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInteractiveToolPropertySet_Statics::ClassParams = {
		&UInteractiveToolPropertySet::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UInteractiveToolPropertySet_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UInteractiveToolPropertySet_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UInteractiveToolPropertySet_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInteractiveToolPropertySet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInteractiveToolPropertySet()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInteractiveToolPropertySet_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInteractiveToolPropertySet, 570669182);
	template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<UInteractiveToolPropertySet>()
	{
		return UInteractiveToolPropertySet::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInteractiveToolPropertySet(Z_Construct_UClass_UInteractiveToolPropertySet, &UInteractiveToolPropertySet::StaticClass, TEXT("/Script/InteractiveToolsFramework"), TEXT("UInteractiveToolPropertySet"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInteractiveToolPropertySet);
	void UInteractiveTool::StaticRegisterNativesUInteractiveTool()
	{
	}
	UClass* Z_Construct_UClass_UInteractiveTool_NoRegister()
	{
		return UInteractiveTool::StaticClass();
	}
	struct Z_Construct_UClass_UInteractiveTool_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ToolPropertyObjects_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ToolPropertyObjects;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ToolPropertyObjects_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputBehaviors_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InputBehaviors;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInteractiveTool_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractiveTool_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UInteractiveTool is the base class for all Tools in the InteractiveToolsFramework.\n * A Tool is is a \"lightweight mode\" that may \"own\" one or more Actors/Components/etc in\n * the current scene, may capture certain input devices or event streams, and so on.\n * The base implementation essentially does nothing but provide sane default behaviors.\n *\n * The BaseTools/ subfolder contains implementations of various kinds of standard\n * \"tool behavior\", like a tool that responds to a mouse click, etc, that can be\n * extended to implement custom behaviors.\n *\n * In the framework, you do not create instances of UInteractiveTool yourself. \n * You provide a UInteractiveToolBuilder implementation that can properly construct\n * an instance of your Tool, this is where for example default parameters would be set.\n * The ToolBuilder is registered with the ToolManager, and then UInteractiveToolManager::ActivateTool()\n * is used to kick things off.\n *\n * @todo callback/delegate for if/when .InputBehaviors changes\n * @todo callback/delegate for when tool properties change\n */" },
		{ "IncludePath", "InteractiveTool.h" },
		{ "ModuleRelativePath", "Public/InteractiveTool.h" },
		{ "ToolTip", "UInteractiveTool is the base class for all Tools in the InteractiveToolsFramework.\nA Tool is is a \"lightweight mode\" that may \"own\" one or more Actors/Components/etc in\nthe current scene, may capture certain input devices or event streams, and so on.\nThe base implementation essentially does nothing but provide sane default behaviors.\n\nThe BaseTools/ subfolder contains implementations of various kinds of standard\n\"tool behavior\", like a tool that responds to a mouse click, etc, that can be\nextended to implement custom behaviors.\n\nIn the framework, you do not create instances of UInteractiveTool yourself.\nYou provide a UInteractiveToolBuilder implementation that can properly construct\nan instance of your Tool, this is where for example default parameters would be set.\nThe ToolBuilder is registered with the ToolManager, and then UInteractiveToolManager::ActivateTool()\nis used to kick things off.\n\n@todo callback/delegate for if/when .InputBehaviors changes\n@todo callback/delegate for when tool properties change" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractiveTool_Statics::NewProp_ToolPropertyObjects_MetaData[] = {
		{ "Comment", "/** The current set of Property UObjects provided by this Tool. May contain pointer to itself. */" },
		{ "ModuleRelativePath", "Public/InteractiveTool.h" },
		{ "ToolTip", "The current set of Property UObjects provided by this Tool. May contain pointer to itself." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInteractiveTool_Statics::NewProp_ToolPropertyObjects = { "ToolPropertyObjects", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInteractiveTool, ToolPropertyObjects), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UInteractiveTool_Statics::NewProp_ToolPropertyObjects_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInteractiveTool_Statics::NewProp_ToolPropertyObjects_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInteractiveTool_Statics::NewProp_ToolPropertyObjects_Inner = { "ToolPropertyObjects", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractiveTool_Statics::NewProp_InputBehaviors_MetaData[] = {
		{ "Comment", "/** The current set of InputBehaviors provided by this Tool */" },
		{ "ModuleRelativePath", "Public/InteractiveTool.h" },
		{ "ToolTip", "The current set of InputBehaviors provided by this Tool" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInteractiveTool_Statics::NewProp_InputBehaviors = { "InputBehaviors", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInteractiveTool, InputBehaviors), Z_Construct_UClass_UInputBehaviorSet_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UInteractiveTool_Statics::NewProp_InputBehaviors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInteractiveTool_Statics::NewProp_InputBehaviors_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInteractiveTool_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractiveTool_Statics::NewProp_ToolPropertyObjects,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractiveTool_Statics::NewProp_ToolPropertyObjects_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractiveTool_Statics::NewProp_InputBehaviors,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UInteractiveTool_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UInputBehaviorSource_NoRegister, (int32)VTABLE_OFFSET(UInteractiveTool, IInputBehaviorSource), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInteractiveTool_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInteractiveTool>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInteractiveTool_Statics::ClassParams = {
		&UInteractiveTool::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UInteractiveTool_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UInteractiveTool_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UInteractiveTool_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInteractiveTool_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInteractiveTool()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInteractiveTool_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInteractiveTool, 634437755);
	template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<UInteractiveTool>()
	{
		return UInteractiveTool::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInteractiveTool(Z_Construct_UClass_UInteractiveTool, &UInteractiveTool::StaticClass, TEXT("/Script/InteractiveToolsFramework"), TEXT("UInteractiveTool"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInteractiveTool);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
