// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InteractiveToolsFramework/Public/BaseBehaviors/AnyButtonInputBehavior.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnyButtonInputBehavior() {}
// Cross Module References
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UAnyButtonInputBehavior_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UAnyButtonInputBehavior();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInputBehavior();
	UPackage* Z_Construct_UPackage__Script_InteractiveToolsFramework();
// End Cross Module References
	void UAnyButtonInputBehavior::StaticRegisterNativesUAnyButtonInputBehavior()
	{
	}
	UClass* Z_Construct_UClass_UAnyButtonInputBehavior_NoRegister()
	{
		return UAnyButtonInputBehavior::StaticClass();
	}
	struct Z_Construct_UClass_UAnyButtonInputBehavior_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnyButtonInputBehavior_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInputBehavior,
		(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnyButtonInputBehavior_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UAnyButtonInputBehavior is a base behavior that provides a generic\n * interface to a TargetButton on a physical Input Device. You can subclass\n * UAnyButtonInputBehavior to write InputBehaviors that can work independent\n * of a particular device type or button, by using the UAnyButtonInputBehavior functions below.\n * \n * The target device button is selected using the .ButtonNumber property, or you can\n * override the relevant GetXButtonState() function if you need more control.\n * \n *  @todo spatial controllers\n *  @todo support tablet fingers\n *  @todo support gamepad?\n */" },
		{ "IncludePath", "BaseBehaviors/AnyButtonInputBehavior.h" },
		{ "ModuleRelativePath", "Public/BaseBehaviors/AnyButtonInputBehavior.h" },
		{ "ToolTip", "UAnyButtonInputBehavior is a base behavior that provides a generic\ninterface to a TargetButton on a physical Input Device. You can subclass\nUAnyButtonInputBehavior to write InputBehaviors that can work independent\nof a particular device type or button, by using the UAnyButtonInputBehavior functions below.\n\nThe target device button is selected using the .ButtonNumber property, or you can\noverride the relevant GetXButtonState() function if you need more control.\n\n @todo spatial controllers\n @todo support tablet fingers\n @todo support gamepad?" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnyButtonInputBehavior_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnyButtonInputBehavior>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAnyButtonInputBehavior_Statics::ClassParams = {
		&UAnyButtonInputBehavior::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAnyButtonInputBehavior_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnyButtonInputBehavior_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnyButtonInputBehavior()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAnyButtonInputBehavior_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAnyButtonInputBehavior, 1761640172);
	template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<UAnyButtonInputBehavior>()
	{
		return UAnyButtonInputBehavior::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAnyButtonInputBehavior(Z_Construct_UClass_UAnyButtonInputBehavior, &UAnyButtonInputBehavior::StaticClass, TEXT("/Script/InteractiveToolsFramework"), TEXT("UAnyButtonInputBehavior"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnyButtonInputBehavior);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
