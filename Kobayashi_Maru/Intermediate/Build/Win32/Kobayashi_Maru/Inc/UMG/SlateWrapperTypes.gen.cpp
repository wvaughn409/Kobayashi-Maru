// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UMG/Public/Components/SlateWrapperTypes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSlateWrapperTypes() {}
// Cross Module References
	UMG_API UFunction* Z_Construct_UDelegateFunction_USlateAccessibleWidgetData_GetText__DelegateSignature();
	UMG_API UClass* Z_Construct_UClass_USlateAccessibleWidgetData();
	UMG_API UEnum* Z_Construct_UEnum_UMG_EVirtualKeyboardType();
	UPackage* Z_Construct_UPackage__Script_UMG();
	UMG_API UEnum* Z_Construct_UEnum_UMG_ESlateSizeRule();
	UMG_API UEnum* Z_Construct_UEnum_UMG_ESlateAccessibleBehavior();
	UMG_API UEnum* Z_Construct_UEnum_UMG_ESlateVisibility();
	UMG_API UScriptStruct* Z_Construct_UScriptStruct_FSlateChildSize();
	UMG_API UScriptStruct* Z_Construct_UScriptStruct_FEventReply();
	UMG_API UClass* Z_Construct_UClass_USlateAccessibleWidgetData_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_USlateAccessibleWidgetData_GetText__DelegateSignature_Statics
	{
		struct SlateAccessibleWidgetData_eventGetText_Parms
		{
			FText ReturnValue;
		};
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UDelegateFunction_USlateAccessibleWidgetData_GetText__DelegateSignature_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SlateAccessibleWidgetData_eventGetText_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_USlateAccessibleWidgetData_GetText__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_USlateAccessibleWidgetData_GetText__DelegateSignature_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_USlateAccessibleWidgetData_GetText__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/SlateWrapperTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_USlateAccessibleWidgetData_GetText__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USlateAccessibleWidgetData, nullptr, "GetText__DelegateSignature", nullptr, nullptr, sizeof(SlateAccessibleWidgetData_eventGetText_Parms), Z_Construct_UDelegateFunction_USlateAccessibleWidgetData_GetText__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_USlateAccessibleWidgetData_GetText__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_USlateAccessibleWidgetData_GetText__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_USlateAccessibleWidgetData_GetText__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_USlateAccessibleWidgetData_GetText__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_USlateAccessibleWidgetData_GetText__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	static UEnum* EVirtualKeyboardType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_UMG_EVirtualKeyboardType, Z_Construct_UPackage__Script_UMG(), TEXT("EVirtualKeyboardType"));
		}
		return Singleton;
	}
	template<> UMG_API UEnum* StaticEnum<EVirtualKeyboardType::Type>()
	{
		return EVirtualKeyboardType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EVirtualKeyboardType(EVirtualKeyboardType_StaticEnum, TEXT("/Script/UMG"), TEXT("EVirtualKeyboardType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_UMG_EVirtualKeyboardType_Hash() { return 275362575U; }
	UEnum* Z_Construct_UEnum_UMG_EVirtualKeyboardType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_UMG();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EVirtualKeyboardType"), 0, Get_Z_Construct_UEnum_UMG_EVirtualKeyboardType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EVirtualKeyboardType::Default", (int64)EVirtualKeyboardType::Default },
				{ "EVirtualKeyboardType::Number", (int64)EVirtualKeyboardType::Number },
				{ "EVirtualKeyboardType::Web", (int64)EVirtualKeyboardType::Web },
				{ "EVirtualKeyboardType::Email", (int64)EVirtualKeyboardType::Email },
				{ "EVirtualKeyboardType::Password", (int64)EVirtualKeyboardType::Password },
				{ "EVirtualKeyboardType::AlphaNumeric", (int64)EVirtualKeyboardType::AlphaNumeric },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AlphaNumeric.Name", "EVirtualKeyboardType::AlphaNumeric" },
				{ "BlueprintType", "true" },
				{ "Default.Name", "EVirtualKeyboardType::Default" },
				{ "Email.Name", "EVirtualKeyboardType::Email" },
				{ "ModuleRelativePath", "Public/Components/SlateWrapperTypes.h" },
				{ "Number.Name", "EVirtualKeyboardType::Number" },
				{ "Password.Name", "EVirtualKeyboardType::Password" },
				{ "Web.Name", "EVirtualKeyboardType::Web" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_UMG,
				nullptr,
				"EVirtualKeyboardType",
				"EVirtualKeyboardType::Type",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Namespaced,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ESlateSizeRule_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_UMG_ESlateSizeRule, Z_Construct_UPackage__Script_UMG(), TEXT("ESlateSizeRule"));
		}
		return Singleton;
	}
	template<> UMG_API UEnum* StaticEnum<ESlateSizeRule::Type>()
	{
		return ESlateSizeRule_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESlateSizeRule(ESlateSizeRule_StaticEnum, TEXT("/Script/UMG"), TEXT("ESlateSizeRule"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_UMG_ESlateSizeRule_Hash() { return 4199240491U; }
	UEnum* Z_Construct_UEnum_UMG_ESlateSizeRule()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_UMG();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESlateSizeRule"), 0, Get_Z_Construct_UEnum_UMG_ESlateSizeRule_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESlateSizeRule::Automatic", (int64)ESlateSizeRule::Automatic },
				{ "ESlateSizeRule::Fill", (int64)ESlateSizeRule::Fill },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Automatic.Comment", "/** Only requests as much room as it needs based on the widgets desired size. */" },
				{ "Automatic.Name", "ESlateSizeRule::Automatic" },
				{ "Automatic.ToolTip", "Only requests as much room as it needs based on the widgets desired size." },
				{ "BlueprintType", "true" },
				{ "Comment", "/** The sizing options of UWidgets */" },
				{ "Fill.Comment", "/** Greedily attempts to fill all available room based on the percentage value 0..1 */" },
				{ "Fill.Name", "ESlateSizeRule::Fill" },
				{ "Fill.ToolTip", "Greedily attempts to fill all available room based on the percentage value 0..1" },
				{ "ModuleRelativePath", "Public/Components/SlateWrapperTypes.h" },
				{ "ToolTip", "The sizing options of UWidgets" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_UMG,
				nullptr,
				"ESlateSizeRule",
				"ESlateSizeRule::Type",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Namespaced,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ESlateAccessibleBehavior_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_UMG_ESlateAccessibleBehavior, Z_Construct_UPackage__Script_UMG(), TEXT("ESlateAccessibleBehavior"));
		}
		return Singleton;
	}
	template<> UMG_API UEnum* StaticEnum<ESlateAccessibleBehavior>()
	{
		return ESlateAccessibleBehavior_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESlateAccessibleBehavior(ESlateAccessibleBehavior_StaticEnum, TEXT("/Script/UMG"), TEXT("ESlateAccessibleBehavior"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_UMG_ESlateAccessibleBehavior_Hash() { return 3224216531U; }
	UEnum* Z_Construct_UEnum_UMG_ESlateAccessibleBehavior()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_UMG();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESlateAccessibleBehavior"), 0, Get_Z_Construct_UEnum_UMG_ESlateAccessibleBehavior_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESlateAccessibleBehavior::NotAccessible", (int64)ESlateAccessibleBehavior::NotAccessible },
				{ "ESlateAccessibleBehavior::Auto", (int64)ESlateAccessibleBehavior::Auto },
				{ "ESlateAccessibleBehavior::Summary", (int64)ESlateAccessibleBehavior::Summary },
				{ "ESlateAccessibleBehavior::Custom", (int64)ESlateAccessibleBehavior::Custom },
				{ "ESlateAccessibleBehavior::ToolTip", (int64)ESlateAccessibleBehavior::ToolTip },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Auto.Comment", "/**\n\x09 * Accessible, first checking to see if there's any custom default text assigned for widgets of this type.\n\x09 * If not, then it will attempt to use the alternate behavior (ie AccessibleSummaryBehavior instead of AccessibleBehavior)\n\x09 * and return that value instead. This acts as a reference so that you only need to set one value for both of them\n\x09 * to return the same thing.\n\x09 */" },
				{ "Auto.Name", "ESlateAccessibleBehavior::Auto" },
				{ "Auto.ToolTip", "Accessible, first checking to see if there's any custom default text assigned for widgets of this type.\nIf not, then it will attempt to use the alternate behavior (ie AccessibleSummaryBehavior instead of AccessibleBehavior)\nand return that value instead. This acts as a reference so that you only need to set one value for both of them\nto return the same thing." },
				{ "BlueprintType", "true" },
				{ "Comment", "/** Whether a widget should be included in accessibility, and if so, how its text should be retrieved. */" },
				{ "Custom.Comment", "/** Accessible, and retrieve manually-assigned text from a TAttribute. */" },
				{ "Custom.Name", "ESlateAccessibleBehavior::Custom" },
				{ "Custom.ToolTip", "Accessible, and retrieve manually-assigned text from a TAttribute." },
				{ "ModuleRelativePath", "Public/Components/SlateWrapperTypes.h" },
				{ "NotAccessible.Comment", "/** Not accessible. */" },
				{ "NotAccessible.Name", "ESlateAccessibleBehavior::NotAccessible" },
				{ "NotAccessible.ToolTip", "Not accessible." },
				{ "Summary.Comment", "/** Accessible, and traverse all child widgets and concat their AccessibleSummaryText together. */" },
				{ "Summary.Name", "ESlateAccessibleBehavior::Summary" },
				{ "Summary.ToolTip", "Accessible, and traverse all child widgets and concat their AccessibleSummaryText together." },
				{ "ToolTip", "Whether a widget should be included in accessibility, and if so, how its text should be retrieved." },
				{ "ToolTip.Comment", "/** Accessible, and use the tooltip's accessible text. */" },
				{ "ToolTip.Name", "ESlateAccessibleBehavior::ToolTip" },
				{ "ToolTip.ToolTip", "Accessible, and use the tooltip's accessible text." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_UMG,
				nullptr,
				"ESlateAccessibleBehavior",
				"ESlateAccessibleBehavior",
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
	static UEnum* ESlateVisibility_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_UMG_ESlateVisibility, Z_Construct_UPackage__Script_UMG(), TEXT("ESlateVisibility"));
		}
		return Singleton;
	}
	template<> UMG_API UEnum* StaticEnum<ESlateVisibility>()
	{
		return ESlateVisibility_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESlateVisibility(ESlateVisibility_StaticEnum, TEXT("/Script/UMG"), TEXT("ESlateVisibility"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_UMG_ESlateVisibility_Hash() { return 2652395738U; }
	UEnum* Z_Construct_UEnum_UMG_ESlateVisibility()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_UMG();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESlateVisibility"), 0, Get_Z_Construct_UEnum_UMG_ESlateVisibility_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESlateVisibility::Visible", (int64)ESlateVisibility::Visible },
				{ "ESlateVisibility::Collapsed", (int64)ESlateVisibility::Collapsed },
				{ "ESlateVisibility::Hidden", (int64)ESlateVisibility::Hidden },
				{ "ESlateVisibility::HitTestInvisible", (int64)ESlateVisibility::HitTestInvisible },
				{ "ESlateVisibility::SelfHitTestInvisible", (int64)ESlateVisibility::SelfHitTestInvisible },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Collapsed.Comment", "/** Not visible and takes up no space in the layout (obviously not hit-testable). */" },
				{ "Collapsed.Name", "ESlateVisibility::Collapsed" },
				{ "Collapsed.ToolTip", "Not visible and takes up no space in the layout (obviously not hit-testable)." },
				{ "Comment", "/** Is an entity visible? */" },
				{ "Hidden.Comment", "/** Not visible but occupies layout space (obviously not hit-testable). */" },
				{ "Hidden.Name", "ESlateVisibility::Hidden" },
				{ "Hidden.ToolTip", "Not visible but occupies layout space (obviously not hit-testable)." },
				{ "HitTestInvisible.Comment", "/** Visible but not hit-testable (cannot interact with cursor) and children in the hierarchy (if any) are also not hit-testable. */" },
				{ "HitTestInvisible.DisplayName", "Not Hit-Testable (Self & All Children)" },
				{ "HitTestInvisible.Name", "ESlateVisibility::HitTestInvisible" },
				{ "HitTestInvisible.ToolTip", "Visible but not hit-testable (cannot interact with cursor) and children in the hierarchy (if any) are also not hit-testable." },
				{ "ModuleRelativePath", "Public/Components/SlateWrapperTypes.h" },
				{ "SelfHitTestInvisible.Comment", "/** Visible but not hit-testable (cannot interact with cursor) and doesn't affect hit-testing on children (if any). */" },
				{ "SelfHitTestInvisible.DisplayName", "Not Hit-Testable (Self Only)" },
				{ "SelfHitTestInvisible.Name", "ESlateVisibility::SelfHitTestInvisible" },
				{ "SelfHitTestInvisible.ToolTip", "Visible but not hit-testable (cannot interact with cursor) and doesn't affect hit-testing on children (if any)." },
				{ "ToolTip", "Is an entity visible?" },
				{ "Visible.Comment", "/** Visible and hit-testable (can interact with cursor). Default value. */" },
				{ "Visible.Name", "ESlateVisibility::Visible" },
				{ "Visible.ToolTip", "Visible and hit-testable (can interact with cursor). Default value." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_UMG,
				nullptr,
				"ESlateVisibility",
				"ESlateVisibility",
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
class UScriptStruct* FSlateChildSize::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern UMG_API uint32 Get_Z_Construct_UScriptStruct_FSlateChildSize_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSlateChildSize, Z_Construct_UPackage__Script_UMG(), TEXT("SlateChildSize"), sizeof(FSlateChildSize), Get_Z_Construct_UScriptStruct_FSlateChildSize_Hash());
	}
	return Singleton;
}
template<> UMG_API UScriptStruct* StaticStruct<FSlateChildSize>()
{
	return FSlateChildSize::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSlateChildSize(FSlateChildSize::StaticStruct, TEXT("/Script/UMG"), TEXT("SlateChildSize"), false, nullptr, nullptr);
static struct FScriptStruct_UMG_StaticRegisterNativesFSlateChildSize
{
	FScriptStruct_UMG_StaticRegisterNativesFSlateChildSize()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SlateChildSize")),new UScriptStruct::TCppStructOps<FSlateChildSize>);
	}
} ScriptStruct_UMG_StaticRegisterNativesFSlateChildSize;
	struct Z_Construct_UScriptStruct_FSlateChildSize_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SizeRule_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SizeRule;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSlateChildSize_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** A struct exposing size param related properties to UMG. */" },
		{ "ModuleRelativePath", "Public/Components/SlateWrapperTypes.h" },
		{ "ToolTip", "A struct exposing size param related properties to UMG." },
	};
#endif
	void* Z_Construct_UScriptStruct_FSlateChildSize_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSlateChildSize>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSlateChildSize_Statics::NewProp_SizeRule_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** The sizing rule of the content. */" },
		{ "ModuleRelativePath", "Public/Components/SlateWrapperTypes.h" },
		{ "ToolTip", "The sizing rule of the content." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSlateChildSize_Statics::NewProp_SizeRule = { "SizeRule", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSlateChildSize, SizeRule), Z_Construct_UEnum_UMG_ESlateSizeRule, METADATA_PARAMS(Z_Construct_UScriptStruct_FSlateChildSize_Statics::NewProp_SizeRule_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSlateChildSize_Statics::NewProp_SizeRule_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSlateChildSize_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** The parameter of the size rule. */" },
		{ "ModuleRelativePath", "Public/Components/SlateWrapperTypes.h" },
		{ "ToolTip", "The parameter of the size rule." },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSlateChildSize_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSlateChildSize, Value), METADATA_PARAMS(Z_Construct_UScriptStruct_FSlateChildSize_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSlateChildSize_Statics::NewProp_Value_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSlateChildSize_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSlateChildSize_Statics::NewProp_SizeRule,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSlateChildSize_Statics::NewProp_Value,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSlateChildSize_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UMG,
		nullptr,
		&NewStructOps,
		"SlateChildSize",
		sizeof(FSlateChildSize),
		alignof(FSlateChildSize),
		Z_Construct_UScriptStruct_FSlateChildSize_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSlateChildSize_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSlateChildSize_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSlateChildSize_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSlateChildSize()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSlateChildSize_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_UMG();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SlateChildSize"), sizeof(FSlateChildSize), Get_Z_Construct_UScriptStruct_FSlateChildSize_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSlateChildSize_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSlateChildSize_Hash() { return 3716891344U; }
class UScriptStruct* FEventReply::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern UMG_API uint32 Get_Z_Construct_UScriptStruct_FEventReply_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEventReply, Z_Construct_UPackage__Script_UMG(), TEXT("EventReply"), sizeof(FEventReply), Get_Z_Construct_UScriptStruct_FEventReply_Hash());
	}
	return Singleton;
}
template<> UMG_API UScriptStruct* StaticStruct<FEventReply>()
{
	return FEventReply::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEventReply(FEventReply::StaticStruct, TEXT("/Script/UMG"), TEXT("EventReply"), false, nullptr, nullptr);
static struct FScriptStruct_UMG_StaticRegisterNativesFEventReply
{
	FScriptStruct_UMG_StaticRegisterNativesFEventReply()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("EventReply")),new UScriptStruct::TCppStructOps<FEventReply>);
	}
} ScriptStruct_UMG_StaticRegisterNativesFEventReply;
	struct Z_Construct_UScriptStruct_FEventReply_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEventReply_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Allows users to handle events and return information to the underlying UI layer.\n */" },
		{ "ModuleRelativePath", "Public/Components/SlateWrapperTypes.h" },
		{ "ToolTip", "Allows users to handle events and return information to the underlying UI layer." },
	};
#endif
	void* Z_Construct_UScriptStruct_FEventReply_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEventReply>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEventReply_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UMG,
		nullptr,
		&NewStructOps,
		"EventReply",
		sizeof(FEventReply),
		alignof(FEventReply),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEventReply_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEventReply_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEventReply()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEventReply_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_UMG();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EventReply"), sizeof(FEventReply), Get_Z_Construct_UScriptStruct_FEventReply_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FEventReply_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEventReply_Hash() { return 3143547056U; }
	void USlateAccessibleWidgetData::StaticRegisterNativesUSlateAccessibleWidgetData()
	{
	}
	UClass* Z_Construct_UClass_USlateAccessibleWidgetData_NoRegister()
	{
		return USlateAccessibleWidgetData::StaticClass();
	}
	struct Z_Construct_UClass_USlateAccessibleWidgetData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_EDITOR
		static const FClassFunctionLinkInfo FuncInfo[];
#endif //WITH_EDITOR
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AccessibleSummaryTextDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_AccessibleSummaryTextDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AccessibleSummaryText_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_AccessibleSummaryText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AccessibleTextDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_AccessibleTextDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AccessibleText_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_AccessibleText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AccessibleSummaryBehavior_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AccessibleSummaryBehavior;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AccessibleSummaryBehavior_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AccessibleBehavior_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AccessibleBehavior;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AccessibleBehavior_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCanChildrenBeAccessible_MetaData[];
#endif
		static void NewProp_bCanChildrenBeAccessible_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCanChildrenBeAccessible;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USlateAccessibleWidgetData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_UMG,
	};
#if WITH_EDITOR
	const FClassFunctionLinkInfo Z_Construct_UClass_USlateAccessibleWidgetData_Statics::FuncInfo[] = {
		{ &Z_Construct_UDelegateFunction_USlateAccessibleWidgetData_GetText__DelegateSignature, "GetText__DelegateSignature" }, // 565493280
	};
#endif //WITH_EDITOR
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USlateAccessibleWidgetData_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A container for all accessible properties for a UWidget that will be passed to the underlying SWidget.\n * Any property here must also be added to UWidget.h and synchronized. See UWidget for more information.\n */" },
		{ "IncludePath", "Components/SlateWrapperTypes.h" },
		{ "ModuleRelativePath", "Public/Components/SlateWrapperTypes.h" },
		{ "ToolTip", "A container for all accessible properties for a UWidget that will be passed to the underlying SWidget.\nAny property here must also be added to UWidget.h and synchronized. See UWidget for more information." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USlateAccessibleWidgetData_Statics::NewProp_AccessibleSummaryTextDelegate_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/SlateWrapperTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_USlateAccessibleWidgetData_Statics::NewProp_AccessibleSummaryTextDelegate = { "AccessibleSummaryTextDelegate", nullptr, (EPropertyFlags)0x0010000000080000, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USlateAccessibleWidgetData, AccessibleSummaryTextDelegate), Z_Construct_UDelegateFunction_USlateAccessibleWidgetData_GetText__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USlateAccessibleWidgetData_Statics::NewProp_AccessibleSummaryTextDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USlateAccessibleWidgetData_Statics::NewProp_AccessibleSummaryTextDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USlateAccessibleWidgetData_Statics::NewProp_AccessibleSummaryText_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/SlateWrapperTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_USlateAccessibleWidgetData_Statics::NewProp_AccessibleSummaryText = { "AccessibleSummaryText", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USlateAccessibleWidgetData, AccessibleSummaryText), METADATA_PARAMS(Z_Construct_UClass_USlateAccessibleWidgetData_Statics::NewProp_AccessibleSummaryText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USlateAccessibleWidgetData_Statics::NewProp_AccessibleSummaryText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USlateAccessibleWidgetData_Statics::NewProp_AccessibleTextDelegate_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/SlateWrapperTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_USlateAccessibleWidgetData_Statics::NewProp_AccessibleTextDelegate = { "AccessibleTextDelegate", nullptr, (EPropertyFlags)0x0010000000080000, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USlateAccessibleWidgetData, AccessibleTextDelegate), Z_Construct_UDelegateFunction_USlateAccessibleWidgetData_GetText__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USlateAccessibleWidgetData_Statics::NewProp_AccessibleTextDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USlateAccessibleWidgetData_Statics::NewProp_AccessibleTextDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USlateAccessibleWidgetData_Statics::NewProp_AccessibleText_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/SlateWrapperTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_USlateAccessibleWidgetData_Statics::NewProp_AccessibleText = { "AccessibleText", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USlateAccessibleWidgetData, AccessibleText), METADATA_PARAMS(Z_Construct_UClass_USlateAccessibleWidgetData_Statics::NewProp_AccessibleText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USlateAccessibleWidgetData_Statics::NewProp_AccessibleText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USlateAccessibleWidgetData_Statics::NewProp_AccessibleSummaryBehavior_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/SlateWrapperTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USlateAccessibleWidgetData_Statics::NewProp_AccessibleSummaryBehavior = { "AccessibleSummaryBehavior", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USlateAccessibleWidgetData, AccessibleSummaryBehavior), Z_Construct_UEnum_UMG_ESlateAccessibleBehavior, METADATA_PARAMS(Z_Construct_UClass_USlateAccessibleWidgetData_Statics::NewProp_AccessibleSummaryBehavior_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USlateAccessibleWidgetData_Statics::NewProp_AccessibleSummaryBehavior_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USlateAccessibleWidgetData_Statics::NewProp_AccessibleSummaryBehavior_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USlateAccessibleWidgetData_Statics::NewProp_AccessibleBehavior_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/SlateWrapperTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USlateAccessibleWidgetData_Statics::NewProp_AccessibleBehavior = { "AccessibleBehavior", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USlateAccessibleWidgetData, AccessibleBehavior), Z_Construct_UEnum_UMG_ESlateAccessibleBehavior, METADATA_PARAMS(Z_Construct_UClass_USlateAccessibleWidgetData_Statics::NewProp_AccessibleBehavior_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USlateAccessibleWidgetData_Statics::NewProp_AccessibleBehavior_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USlateAccessibleWidgetData_Statics::NewProp_AccessibleBehavior_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USlateAccessibleWidgetData_Statics::NewProp_bCanChildrenBeAccessible_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/SlateWrapperTypes.h" },
	};
#endif
	void Z_Construct_UClass_USlateAccessibleWidgetData_Statics::NewProp_bCanChildrenBeAccessible_SetBit(void* Obj)
	{
		((USlateAccessibleWidgetData*)Obj)->bCanChildrenBeAccessible = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USlateAccessibleWidgetData_Statics::NewProp_bCanChildrenBeAccessible = { "bCanChildrenBeAccessible", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USlateAccessibleWidgetData), &Z_Construct_UClass_USlateAccessibleWidgetData_Statics::NewProp_bCanChildrenBeAccessible_SetBit, METADATA_PARAMS(Z_Construct_UClass_USlateAccessibleWidgetData_Statics::NewProp_bCanChildrenBeAccessible_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USlateAccessibleWidgetData_Statics::NewProp_bCanChildrenBeAccessible_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USlateAccessibleWidgetData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USlateAccessibleWidgetData_Statics::NewProp_AccessibleSummaryTextDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USlateAccessibleWidgetData_Statics::NewProp_AccessibleSummaryText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USlateAccessibleWidgetData_Statics::NewProp_AccessibleTextDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USlateAccessibleWidgetData_Statics::NewProp_AccessibleText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USlateAccessibleWidgetData_Statics::NewProp_AccessibleSummaryBehavior,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USlateAccessibleWidgetData_Statics::NewProp_AccessibleSummaryBehavior_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USlateAccessibleWidgetData_Statics::NewProp_AccessibleBehavior,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USlateAccessibleWidgetData_Statics::NewProp_AccessibleBehavior_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USlateAccessibleWidgetData_Statics::NewProp_bCanChildrenBeAccessible,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USlateAccessibleWidgetData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USlateAccessibleWidgetData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USlateAccessibleWidgetData_Statics::ClassParams = {
		&USlateAccessibleWidgetData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		IF_WITH_EDITOR(FuncInfo, nullptr),
		Z_Construct_UClass_USlateAccessibleWidgetData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		IF_WITH_EDITOR(UE_ARRAY_COUNT(FuncInfo), 0),
		UE_ARRAY_COUNT(Z_Construct_UClass_USlateAccessibleWidgetData_Statics::PropPointers),
		0,
		0x00A000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USlateAccessibleWidgetData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USlateAccessibleWidgetData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USlateAccessibleWidgetData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USlateAccessibleWidgetData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USlateAccessibleWidgetData, 181688617);
	template<> UMG_API UClass* StaticClass<USlateAccessibleWidgetData>()
	{
		return USlateAccessibleWidgetData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USlateAccessibleWidgetData(Z_Construct_UClass_USlateAccessibleWidgetData, &USlateAccessibleWidgetData::StaticClass, TEXT("/Script/UMG"), TEXT("USlateAccessibleWidgetData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USlateAccessibleWidgetData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
