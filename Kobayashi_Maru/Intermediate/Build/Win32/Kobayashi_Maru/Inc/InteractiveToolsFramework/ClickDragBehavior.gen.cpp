// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InteractiveToolsFramework/Public/BaseBehaviors/ClickDragBehavior.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeClickDragBehavior() {}
// Cross Module References
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UClickDragInputBehavior_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UClickDragInputBehavior();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UAnyButtonInputBehavior();
	UPackage* Z_Construct_UPackage__Script_InteractiveToolsFramework();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_ULocalClickDragInputBehavior_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_ULocalClickDragInputBehavior();
// End Cross Module References
	void UClickDragInputBehavior::StaticRegisterNativesUClickDragInputBehavior()
	{
	}
	UClass* Z_Construct_UClass_UClickDragInputBehavior_NoRegister()
	{
		return UClickDragInputBehavior::StaticClass();
	}
	struct Z_Construct_UClass_UClickDragInputBehavior_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUpdateModifiersDuringDrag_MetaData[];
#endif
		static void NewProp_bUpdateModifiersDuringDrag_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUpdateModifiersDuringDrag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UClickDragInputBehavior_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnyButtonInputBehavior,
		(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClickDragInputBehavior_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UClickDragInputBehavior implements a standard \"button-click-drag\"-style input behavior.\n * An IClickDragBehaviorTarget instance must be provided which is manipulated by this behavior.\n * \n * The state machine works as follows:\n *    1) on input-device-button-press, call Target::CanBeginClickDragSequence to determine if capture should begin\n *    2) on input-device-move, call Target::OnClickDrag\n *    3) on input-device-button-release, call Target::OnClickRelease\n *    \n * If a ForceEndCapture occurs we call Target::OnTerminateDragSequence   \n */" },
		{ "IncludePath", "BaseBehaviors/ClickDragBehavior.h" },
		{ "ModuleRelativePath", "Public/BaseBehaviors/ClickDragBehavior.h" },
		{ "ToolTip", "UClickDragInputBehavior implements a standard \"button-click-drag\"-style input behavior.\nAn IClickDragBehaviorTarget instance must be provided which is manipulated by this behavior.\n\nThe state machine works as follows:\n   1) on input-device-button-press, call Target::CanBeginClickDragSequence to determine if capture should begin\n   2) on input-device-move, call Target::OnClickDrag\n   3) on input-device-button-release, call Target::OnClickRelease\n\nIf a ForceEndCapture occurs we call Target::OnTerminateDragSequence" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClickDragInputBehavior_Statics::NewProp_bUpdateModifiersDuringDrag_MetaData[] = {
		{ "Comment", "/**\n\x09 * If true, then we will update Modifier states in UpdateCapture(). This defaults to false because\n\x09 * in most cases during a capture you don't want this, eg in a brush interaction, if you have a shift-to-smooth modifier,\n\x09 * you don't want to toggle this on/off during a sculpting stroke.\n\x09 */" },
		{ "ModuleRelativePath", "Public/BaseBehaviors/ClickDragBehavior.h" },
		{ "ToolTip", "If true, then we will update Modifier states in UpdateCapture(). This defaults to false because\nin most cases during a capture you don't want this, eg in a brush interaction, if you have a shift-to-smooth modifier,\nyou don't want to toggle this on/off during a sculpting stroke." },
	};
#endif
	void Z_Construct_UClass_UClickDragInputBehavior_Statics::NewProp_bUpdateModifiersDuringDrag_SetBit(void* Obj)
	{
		((UClickDragInputBehavior*)Obj)->bUpdateModifiersDuringDrag = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UClickDragInputBehavior_Statics::NewProp_bUpdateModifiersDuringDrag = { "bUpdateModifiersDuringDrag", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UClickDragInputBehavior), &Z_Construct_UClass_UClickDragInputBehavior_Statics::NewProp_bUpdateModifiersDuringDrag_SetBit, METADATA_PARAMS(Z_Construct_UClass_UClickDragInputBehavior_Statics::NewProp_bUpdateModifiersDuringDrag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UClickDragInputBehavior_Statics::NewProp_bUpdateModifiersDuringDrag_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UClickDragInputBehavior_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClickDragInputBehavior_Statics::NewProp_bUpdateModifiersDuringDrag,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UClickDragInputBehavior_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UClickDragInputBehavior>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UClickDragInputBehavior_Statics::ClassParams = {
		&UClickDragInputBehavior::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UClickDragInputBehavior_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UClickDragInputBehavior_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UClickDragInputBehavior_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UClickDragInputBehavior_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UClickDragInputBehavior()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UClickDragInputBehavior_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UClickDragInputBehavior, 1862519367);
	template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<UClickDragInputBehavior>()
	{
		return UClickDragInputBehavior::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UClickDragInputBehavior(Z_Construct_UClass_UClickDragInputBehavior, &UClickDragInputBehavior::StaticClass, TEXT("/Script/InteractiveToolsFramework"), TEXT("UClickDragInputBehavior"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UClickDragInputBehavior);
	void ULocalClickDragInputBehavior::StaticRegisterNativesULocalClickDragInputBehavior()
	{
	}
	UClass* Z_Construct_UClass_ULocalClickDragInputBehavior_NoRegister()
	{
		return ULocalClickDragInputBehavior::StaticClass();
	}
	struct Z_Construct_UClass_ULocalClickDragInputBehavior_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULocalClickDragInputBehavior_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UClickDragInputBehavior,
		(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULocalClickDragInputBehavior_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * ULocalClickDragInputBehavior is an implementation of UClickDragInputBehavior that also implements IClickDragBehaviorTarget directly,\n * via a set of local lambda functions. To use/customize this class the client replaces the lambda functions with their own.\n * This avoids having to create a second IClickDragBehaviorTarget implementation for trivial use-cases.\n */" },
		{ "IncludePath", "BaseBehaviors/ClickDragBehavior.h" },
		{ "ModuleRelativePath", "Public/BaseBehaviors/ClickDragBehavior.h" },
		{ "ToolTip", "ULocalClickDragInputBehavior is an implementation of UClickDragInputBehavior that also implements IClickDragBehaviorTarget directly,\nvia a set of local lambda functions. To use/customize this class the client replaces the lambda functions with their own.\nThis avoids having to create a second IClickDragBehaviorTarget implementation for trivial use-cases." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULocalClickDragInputBehavior_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULocalClickDragInputBehavior>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULocalClickDragInputBehavior_Statics::ClassParams = {
		&ULocalClickDragInputBehavior::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ULocalClickDragInputBehavior_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULocalClickDragInputBehavior_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULocalClickDragInputBehavior()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULocalClickDragInputBehavior_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULocalClickDragInputBehavior, 209986049);
	template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<ULocalClickDragInputBehavior>()
	{
		return ULocalClickDragInputBehavior::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULocalClickDragInputBehavior(Z_Construct_UClass_ULocalClickDragInputBehavior, &ULocalClickDragInputBehavior::StaticClass, TEXT("/Script/InteractiveToolsFramework"), TEXT("ULocalClickDragInputBehavior"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULocalClickDragInputBehavior);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
