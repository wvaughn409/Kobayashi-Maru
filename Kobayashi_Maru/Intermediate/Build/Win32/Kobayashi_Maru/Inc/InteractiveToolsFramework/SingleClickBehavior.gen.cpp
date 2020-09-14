// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InteractiveToolsFramework/Public/BaseBehaviors/SingleClickBehavior.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSingleClickBehavior() {}
// Cross Module References
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_USingleClickInputBehavior_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_USingleClickInputBehavior();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UAnyButtonInputBehavior();
	UPackage* Z_Construct_UPackage__Script_InteractiveToolsFramework();
// End Cross Module References
	void USingleClickInputBehavior::StaticRegisterNativesUSingleClickInputBehavior()
	{
	}
	UClass* Z_Construct_UClass_USingleClickInputBehavior_NoRegister()
	{
		return USingleClickInputBehavior::StaticClass();
	}
	struct Z_Construct_UClass_USingleClickInputBehavior_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitTestOnRelease_MetaData[];
#endif
		static void NewProp_HitTestOnRelease_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_HitTestOnRelease;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USingleClickInputBehavior_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnyButtonInputBehavior,
		(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USingleClickInputBehavior_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * USingleClickInputBehavior implements a standard \"button-click\"-style input behavior.\n * The state machine works as follows:\n *    1) on input-device-button-press, hit-test the target. If hit, begin capture\n *    2) on input-device-button-release, hit-test the target. If hit, call Target::OnClicked(). If not hit, ignore click.\n *    \n * The second hit-test is required to allow the click to be \"cancelled\" by moving away\n * from the target. This is standard GUI behavior. You can disable this second hit test\n * using the .HitTestOnRelease property. This is strongly discouraged.\n *    \n * The hit-test and on-clicked functions are provided by a IClickBehaviorTarget instance.\n */" },
		{ "IncludePath", "BaseBehaviors/SingleClickBehavior.h" },
		{ "ModuleRelativePath", "Public/BaseBehaviors/SingleClickBehavior.h" },
		{ "ToolTip", "USingleClickInputBehavior implements a standard \"button-click\"-style input behavior.\nThe state machine works as follows:\n   1) on input-device-button-press, hit-test the target. If hit, begin capture\n   2) on input-device-button-release, hit-test the target. If hit, call Target::OnClicked(). If not hit, ignore click.\n\nThe second hit-test is required to allow the click to be \"cancelled\" by moving away\nfrom the target. This is standard GUI behavior. You can disable this second hit test\nusing the .HitTestOnRelease property. This is strongly discouraged.\n\nThe hit-test and on-clicked functions are provided by a IClickBehaviorTarget instance." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USingleClickInputBehavior_Statics::NewProp_HitTestOnRelease_MetaData[] = {
		{ "Comment", "/** Hit-test is repeated on release (standard behavior). If false, */" },
		{ "ModuleRelativePath", "Public/BaseBehaviors/SingleClickBehavior.h" },
		{ "ToolTip", "Hit-test is repeated on release (standard behavior). If false," },
	};
#endif
	void Z_Construct_UClass_USingleClickInputBehavior_Statics::NewProp_HitTestOnRelease_SetBit(void* Obj)
	{
		((USingleClickInputBehavior*)Obj)->HitTestOnRelease = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USingleClickInputBehavior_Statics::NewProp_HitTestOnRelease = { "HitTestOnRelease", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USingleClickInputBehavior), &Z_Construct_UClass_USingleClickInputBehavior_Statics::NewProp_HitTestOnRelease_SetBit, METADATA_PARAMS(Z_Construct_UClass_USingleClickInputBehavior_Statics::NewProp_HitTestOnRelease_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USingleClickInputBehavior_Statics::NewProp_HitTestOnRelease_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USingleClickInputBehavior_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USingleClickInputBehavior_Statics::NewProp_HitTestOnRelease,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USingleClickInputBehavior_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USingleClickInputBehavior>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USingleClickInputBehavior_Statics::ClassParams = {
		&USingleClickInputBehavior::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USingleClickInputBehavior_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USingleClickInputBehavior_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_USingleClickInputBehavior_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USingleClickInputBehavior_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USingleClickInputBehavior()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USingleClickInputBehavior_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USingleClickInputBehavior, 3170371021);
	template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<USingleClickInputBehavior>()
	{
		return USingleClickInputBehavior::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USingleClickInputBehavior(Z_Construct_UClass_USingleClickInputBehavior, &USingleClickInputBehavior::StaticClass, TEXT("/Script/InteractiveToolsFramework"), TEXT("USingleClickInputBehavior"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USingleClickInputBehavior);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
