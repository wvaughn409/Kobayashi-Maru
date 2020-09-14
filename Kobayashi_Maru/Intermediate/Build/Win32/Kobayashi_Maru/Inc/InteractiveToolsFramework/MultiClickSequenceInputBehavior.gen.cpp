// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InteractiveToolsFramework/Public/BaseBehaviors/MultiClickSequenceInputBehavior.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMultiClickSequenceInputBehavior() {}
// Cross Module References
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UMultiClickSequenceInputBehavior_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UMultiClickSequenceInputBehavior();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UAnyButtonInputBehavior();
	UPackage* Z_Construct_UPackage__Script_InteractiveToolsFramework();
// End Cross Module References
	void UMultiClickSequenceInputBehavior::StaticRegisterNativesUMultiClickSequenceInputBehavior()
	{
	}
	UClass* Z_Construct_UClass_UMultiClickSequenceInputBehavior_NoRegister()
	{
		return UMultiClickSequenceInputBehavior::StaticClass();
	}
	struct Z_Construct_UClass_UMultiClickSequenceInputBehavior_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMultiClickSequenceInputBehavior_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnyButtonInputBehavior,
		(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMultiClickSequenceInputBehavior_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UMultiClickSequenceInputBehavior implements a generic multi-click-sequence input behavior.\n * For example this behavior could be used to implement a multi-click polygon-drawing interaction.\n *\n * The internal state machine works as follows:\n *   1) on input-device-button-press, check if target wants to begin sequence. If so, begin capture.\n *   2) on button *release*, check if target wants to continue or terminate sequence\n *       a) if terminate, release capture\n *       b) if continue, do nothing (capture continues between presses)\n *\n * The target will receive \"preview\" notifications (basically hover) during updates where there is\n * not a release. This can be used to (eg) update a rubber-band selection end point\n * \n * @todo it may be better to implement this as multiple captures, and use hover callbacks to \n * do the between-capture previews. holding capture across mouse release is not ideal.\n */" },
		{ "IncludePath", "BaseBehaviors/MultiClickSequenceInputBehavior.h" },
		{ "ModuleRelativePath", "Public/BaseBehaviors/MultiClickSequenceInputBehavior.h" },
		{ "ToolTip", "UMultiClickSequenceInputBehavior implements a generic multi-click-sequence input behavior.\nFor example this behavior could be used to implement a multi-click polygon-drawing interaction.\n\nThe internal state machine works as follows:\n  1) on input-device-button-press, check if target wants to begin sequence. If so, begin capture.\n  2) on button *release*, check if target wants to continue or terminate sequence\n      a) if terminate, release capture\n      b) if continue, do nothing (capture continues between presses)\n\nThe target will receive \"preview\" notifications (basically hover) during updates where there is\nnot a release. This can be used to (eg) update a rubber-band selection end point\n\n@todo it may be better to implement this as multiple captures, and use hover callbacks to\ndo the between-capture previews. holding capture across mouse release is not ideal." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMultiClickSequenceInputBehavior_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMultiClickSequenceInputBehavior>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMultiClickSequenceInputBehavior_Statics::ClassParams = {
		&UMultiClickSequenceInputBehavior::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMultiClickSequenceInputBehavior_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMultiClickSequenceInputBehavior_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMultiClickSequenceInputBehavior()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMultiClickSequenceInputBehavior_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMultiClickSequenceInputBehavior, 3236336995);
	template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<UMultiClickSequenceInputBehavior>()
	{
		return UMultiClickSequenceInputBehavior::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMultiClickSequenceInputBehavior(Z_Construct_UClass_UMultiClickSequenceInputBehavior, &UMultiClickSequenceInputBehavior::StaticClass, TEXT("/Script/InteractiveToolsFramework"), TEXT("UMultiClickSequenceInputBehavior"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMultiClickSequenceInputBehavior);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
