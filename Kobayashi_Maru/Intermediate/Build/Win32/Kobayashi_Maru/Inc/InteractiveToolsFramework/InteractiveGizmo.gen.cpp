// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InteractiveToolsFramework/Public/InteractiveGizmo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInteractiveGizmo() {}
// Cross Module References
	INTERACTIVETOOLSFRAMEWORK_API UEnum* Z_Construct_UEnum_InteractiveToolsFramework_ETransformGizmoSubElements();
	UPackage* Z_Construct_UPackage__Script_InteractiveToolsFramework();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveGizmo_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveGizmo();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInputBehaviorSet_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInputBehaviorSource_NoRegister();
// End Cross Module References
	static UEnum* ETransformGizmoSubElements_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_InteractiveToolsFramework_ETransformGizmoSubElements, Z_Construct_UPackage__Script_InteractiveToolsFramework(), TEXT("ETransformGizmoSubElements"));
		}
		return Singleton;
	}
	template<> INTERACTIVETOOLSFRAMEWORK_API UEnum* StaticEnum<ETransformGizmoSubElements>()
	{
		return ETransformGizmoSubElements_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ETransformGizmoSubElements(ETransformGizmoSubElements_StaticEnum, TEXT("/Script/InteractiveToolsFramework"), TEXT("ETransformGizmoSubElements"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_InteractiveToolsFramework_ETransformGizmoSubElements_Hash() { return 2841405338U; }
	UEnum* Z_Construct_UEnum_InteractiveToolsFramework_ETransformGizmoSubElements()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_InteractiveToolsFramework();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ETransformGizmoSubElements"), 0, Get_Z_Construct_UEnum_InteractiveToolsFramework_ETransformGizmoSubElements_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ETransformGizmoSubElements::None", (int64)ETransformGizmoSubElements::None },
				{ "ETransformGizmoSubElements::TranslateAxisX", (int64)ETransformGizmoSubElements::TranslateAxisX },
				{ "ETransformGizmoSubElements::TranslateAxisY", (int64)ETransformGizmoSubElements::TranslateAxisY },
				{ "ETransformGizmoSubElements::TranslateAxisZ", (int64)ETransformGizmoSubElements::TranslateAxisZ },
				{ "ETransformGizmoSubElements::TranslateAllAxes", (int64)ETransformGizmoSubElements::TranslateAllAxes },
				{ "ETransformGizmoSubElements::TranslatePlaneXY", (int64)ETransformGizmoSubElements::TranslatePlaneXY },
				{ "ETransformGizmoSubElements::TranslatePlaneXZ", (int64)ETransformGizmoSubElements::TranslatePlaneXZ },
				{ "ETransformGizmoSubElements::TranslatePlaneYZ", (int64)ETransformGizmoSubElements::TranslatePlaneYZ },
				{ "ETransformGizmoSubElements::TranslateAllPlanes", (int64)ETransformGizmoSubElements::TranslateAllPlanes },
				{ "ETransformGizmoSubElements::RotateAxisX", (int64)ETransformGizmoSubElements::RotateAxisX },
				{ "ETransformGizmoSubElements::RotateAxisY", (int64)ETransformGizmoSubElements::RotateAxisY },
				{ "ETransformGizmoSubElements::RotateAxisZ", (int64)ETransformGizmoSubElements::RotateAxisZ },
				{ "ETransformGizmoSubElements::RotateAllAxes", (int64)ETransformGizmoSubElements::RotateAllAxes },
				{ "ETransformGizmoSubElements::ScaleAxisX", (int64)ETransformGizmoSubElements::ScaleAxisX },
				{ "ETransformGizmoSubElements::ScaleAxisY", (int64)ETransformGizmoSubElements::ScaleAxisY },
				{ "ETransformGizmoSubElements::ScaleAxisZ", (int64)ETransformGizmoSubElements::ScaleAxisZ },
				{ "ETransformGizmoSubElements::ScaleAllAxes", (int64)ETransformGizmoSubElements::ScaleAllAxes },
				{ "ETransformGizmoSubElements::ScalePlaneYZ", (int64)ETransformGizmoSubElements::ScalePlaneYZ },
				{ "ETransformGizmoSubElements::ScalePlaneXZ", (int64)ETransformGizmoSubElements::ScalePlaneXZ },
				{ "ETransformGizmoSubElements::ScalePlaneXY", (int64)ETransformGizmoSubElements::ScalePlaneXY },
				{ "ETransformGizmoSubElements::ScaleAllPlanes", (int64)ETransformGizmoSubElements::ScaleAllPlanes },
				{ "ETransformGizmoSubElements::ScaleUniform", (int64)ETransformGizmoSubElements::ScaleUniform },
				{ "ETransformGizmoSubElements::StandardTranslateRotate", (int64)ETransformGizmoSubElements::StandardTranslateRotate },
				{ "ETransformGizmoSubElements::TranslateRotateUniformScale", (int64)ETransformGizmoSubElements::TranslateRotateUniformScale },
				{ "ETransformGizmoSubElements::FullTranslateRotateScale", (int64)ETransformGizmoSubElements::FullTranslateRotateScale },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Comment", "/**\n * ETransformGizmoSubElements identifies the sub-elements of a standard 3-axis transformation Gizmo.\n * Used by GizmoManager to customize UTransformGizmo instances.\n */" },
				{ "FullTranslateRotateScale.Name", "ETransformGizmoSubElements::FullTranslateRotateScale" },
				{ "ModuleRelativePath", "Public/InteractiveGizmo.h" },
				{ "None.Name", "ETransformGizmoSubElements::None" },
				{ "RotateAllAxes.Name", "ETransformGizmoSubElements::RotateAllAxes" },
				{ "RotateAxisX.Name", "ETransformGizmoSubElements::RotateAxisX" },
				{ "RotateAxisY.Name", "ETransformGizmoSubElements::RotateAxisY" },
				{ "RotateAxisZ.Name", "ETransformGizmoSubElements::RotateAxisZ" },
				{ "ScaleAllAxes.Name", "ETransformGizmoSubElements::ScaleAllAxes" },
				{ "ScaleAllPlanes.Name", "ETransformGizmoSubElements::ScaleAllPlanes" },
				{ "ScaleAxisX.Name", "ETransformGizmoSubElements::ScaleAxisX" },
				{ "ScaleAxisY.Name", "ETransformGizmoSubElements::ScaleAxisY" },
				{ "ScaleAxisZ.Name", "ETransformGizmoSubElements::ScaleAxisZ" },
				{ "ScalePlaneXY.Name", "ETransformGizmoSubElements::ScalePlaneXY" },
				{ "ScalePlaneXZ.Name", "ETransformGizmoSubElements::ScalePlaneXZ" },
				{ "ScalePlaneYZ.Name", "ETransformGizmoSubElements::ScalePlaneYZ" },
				{ "ScaleUniform.Name", "ETransformGizmoSubElements::ScaleUniform" },
				{ "StandardTranslateRotate.Name", "ETransformGizmoSubElements::StandardTranslateRotate" },
				{ "ToolTip", "ETransformGizmoSubElements identifies the sub-elements of a standard 3-axis transformation Gizmo.\nUsed by GizmoManager to customize UTransformGizmo instances." },
				{ "TranslateAllAxes.Name", "ETransformGizmoSubElements::TranslateAllAxes" },
				{ "TranslateAllPlanes.Name", "ETransformGizmoSubElements::TranslateAllPlanes" },
				{ "TranslateAxisX.Name", "ETransformGizmoSubElements::TranslateAxisX" },
				{ "TranslateAxisY.Name", "ETransformGizmoSubElements::TranslateAxisY" },
				{ "TranslateAxisZ.Name", "ETransformGizmoSubElements::TranslateAxisZ" },
				{ "TranslatePlaneXY.Name", "ETransformGizmoSubElements::TranslatePlaneXY" },
				{ "TranslatePlaneXZ.Name", "ETransformGizmoSubElements::TranslatePlaneXZ" },
				{ "TranslatePlaneYZ.Name", "ETransformGizmoSubElements::TranslatePlaneYZ" },
				{ "TranslateRotateUniformScale.Name", "ETransformGizmoSubElements::TranslateRotateUniformScale" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
				nullptr,
				"ETransformGizmoSubElements",
				"ETransformGizmoSubElements",
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
	void UInteractiveGizmo::StaticRegisterNativesUInteractiveGizmo()
	{
	}
	UClass* Z_Construct_UClass_UInteractiveGizmo_NoRegister()
	{
		return UInteractiveGizmo::StaticClass();
	}
	struct Z_Construct_UClass_UInteractiveGizmo_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputBehaviors_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InputBehaviors;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInteractiveGizmo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractiveGizmo_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UInteractiveGizmo is the base class for all Gizmos in the InteractiveToolsFramework.\n *\n * @todo callback/delegate for if/when .InputBehaviors changes\n * @todo callback/delegate for when Gizmo properties change\n */" },
		{ "IncludePath", "InteractiveGizmo.h" },
		{ "ModuleRelativePath", "Public/InteractiveGizmo.h" },
		{ "ToolTip", "UInteractiveGizmo is the base class for all Gizmos in the InteractiveToolsFramework.\n\n@todo callback/delegate for if/when .InputBehaviors changes\n@todo callback/delegate for when Gizmo properties change" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractiveGizmo_Statics::NewProp_InputBehaviors_MetaData[] = {
		{ "Comment", "/** The current set of InputBehaviors provided by this Gizmo */" },
		{ "ModuleRelativePath", "Public/InteractiveGizmo.h" },
		{ "ToolTip", "The current set of InputBehaviors provided by this Gizmo" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInteractiveGizmo_Statics::NewProp_InputBehaviors = { "InputBehaviors", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInteractiveGizmo, InputBehaviors), Z_Construct_UClass_UInputBehaviorSet_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UInteractiveGizmo_Statics::NewProp_InputBehaviors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInteractiveGizmo_Statics::NewProp_InputBehaviors_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInteractiveGizmo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractiveGizmo_Statics::NewProp_InputBehaviors,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UInteractiveGizmo_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UInputBehaviorSource_NoRegister, (int32)VTABLE_OFFSET(UInteractiveGizmo, IInputBehaviorSource), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInteractiveGizmo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInteractiveGizmo>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInteractiveGizmo_Statics::ClassParams = {
		&UInteractiveGizmo::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UInteractiveGizmo_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UInteractiveGizmo_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UInteractiveGizmo_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInteractiveGizmo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInteractiveGizmo()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInteractiveGizmo_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInteractiveGizmo, 1697426424);
	template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<UInteractiveGizmo>()
	{
		return UInteractiveGizmo::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInteractiveGizmo(Z_Construct_UClass_UInteractiveGizmo, &UInteractiveGizmo::StaticClass, TEXT("/Script/InteractiveToolsFramework"), TEXT("UInteractiveGizmo"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInteractiveGizmo);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
