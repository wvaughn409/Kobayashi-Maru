// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Components/TextRenderComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTextRenderComponent() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EVerticalTextAligment();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EHorizTextAligment();
	ENGINE_API UClass* Z_Construct_UClass_UTextRenderComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTextRenderComponent();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UFont_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
// End Cross Module References
	static UEnum* EVerticalTextAligment_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EVerticalTextAligment, Z_Construct_UPackage__Script_Engine(), TEXT("EVerticalTextAligment"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EVerticalTextAligment>()
	{
		return EVerticalTextAligment_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EVerticalTextAligment(EVerticalTextAligment_StaticEnum, TEXT("/Script/Engine"), TEXT("EVerticalTextAligment"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EVerticalTextAligment_Hash() { return 2766129110U; }
	UEnum* Z_Construct_UEnum_Engine_EVerticalTextAligment()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EVerticalTextAligment"), 0, Get_Z_Construct_UEnum_Engine_EVerticalTextAligment_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EVRTA_TextTop", (int64)EVRTA_TextTop },
				{ "EVRTA_TextCenter", (int64)EVRTA_TextCenter },
				{ "EVRTA_TextBottom", (int64)EVRTA_TextBottom },
				{ "EVRTA_QuadTop", (int64)EVRTA_QuadTop },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "EVRTA_QuadTop.Comment", "/**  */" },
				{ "EVRTA_QuadTop.DisplayName", "Quad Top" },
				{ "EVRTA_QuadTop.Name", "EVRTA_QuadTop" },
				{ "EVRTA_TextBottom.Comment", "/**  */" },
				{ "EVRTA_TextBottom.DisplayName", "Text Bottom" },
				{ "EVRTA_TextBottom.Name", "EVRTA_TextBottom" },
				{ "EVRTA_TextCenter.Comment", "/**  */" },
				{ "EVRTA_TextCenter.DisplayName", "Text Center" },
				{ "EVRTA_TextCenter.Name", "EVRTA_TextCenter" },
				{ "EVRTA_TextTop.Comment", "/**  */" },
				{ "EVRTA_TextTop.DisplayName", "Text Top" },
				{ "EVRTA_TextTop.Name", "EVRTA_TextTop" },
				{ "ModuleRelativePath", "Classes/Components/TextRenderComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"EVerticalTextAligment",
				"EVerticalTextAligment",
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
	static UEnum* EHorizTextAligment_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EHorizTextAligment, Z_Construct_UPackage__Script_Engine(), TEXT("EHorizTextAligment"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EHorizTextAligment>()
	{
		return EHorizTextAligment_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EHorizTextAligment(EHorizTextAligment_StaticEnum, TEXT("/Script/Engine"), TEXT("EHorizTextAligment"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EHorizTextAligment_Hash() { return 3958544908U; }
	UEnum* Z_Construct_UEnum_Engine_EHorizTextAligment()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EHorizTextAligment"), 0, Get_Z_Construct_UEnum_Engine_EHorizTextAligment_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EHTA_Left", (int64)EHTA_Left },
				{ "EHTA_Center", (int64)EHTA_Center },
				{ "EHTA_Right", (int64)EHTA_Right },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "EHTA_Center.Comment", "/**  */" },
				{ "EHTA_Center.DisplayName", "Center" },
				{ "EHTA_Center.Name", "EHTA_Center" },
				{ "EHTA_Left.Comment", "/**  */" },
				{ "EHTA_Left.DisplayName", "Left" },
				{ "EHTA_Left.Name", "EHTA_Left" },
				{ "EHTA_Right.Comment", "/**  */" },
				{ "EHTA_Right.DisplayName", "Right" },
				{ "EHTA_Right.Name", "EHTA_Right" },
				{ "ModuleRelativePath", "Classes/Components/TextRenderComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"EHorizTextAligment",
				"EHorizTextAligment",
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
	DEFINE_FUNCTION(UTextRenderComponent::execGetTextWorldSize)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetTextWorldSize();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTextRenderComponent::execGetTextLocalSize)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetTextLocalSize();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTextRenderComponent::execSetWorldSize)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetWorldSize(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTextRenderComponent::execSetVertSpacingAdjust)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVertSpacingAdjust(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTextRenderComponent::execSetHorizSpacingAdjust)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetHorizSpacingAdjust(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTextRenderComponent::execSetYScale)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetYScale(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTextRenderComponent::execSetXScale)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetXScale(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTextRenderComponent::execSetTextRenderColor)
	{
		P_GET_STRUCT(FColor,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTextRenderColor(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTextRenderComponent::execSetVerticalAlignment)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVerticalAlignment(EVerticalTextAligment(Z_Param_Value));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTextRenderComponent::execSetHorizontalAlignment)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetHorizontalAlignment(EHorizTextAligment(Z_Param_Value));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTextRenderComponent::execSetFont)
	{
		P_GET_OBJECT(UFont,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetFont(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTextRenderComponent::execSetTextMaterial)
	{
		P_GET_OBJECT(UMaterialInterface,Z_Param_Material);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTextMaterial(Z_Param_Material);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTextRenderComponent::execK2_SetText)
	{
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->K2_SetText(Z_Param_Out_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTextRenderComponent::execSetText)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetText(Z_Param_Value);
		P_NATIVE_END;
	}
	void UTextRenderComponent::StaticRegisterNativesUTextRenderComponent()
	{
		UClass* Class = UTextRenderComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetTextLocalSize", &UTextRenderComponent::execGetTextLocalSize },
			{ "GetTextWorldSize", &UTextRenderComponent::execGetTextWorldSize },
			{ "K2_SetText", &UTextRenderComponent::execK2_SetText },
			{ "SetFont", &UTextRenderComponent::execSetFont },
			{ "SetHorizontalAlignment", &UTextRenderComponent::execSetHorizontalAlignment },
			{ "SetHorizSpacingAdjust", &UTextRenderComponent::execSetHorizSpacingAdjust },
			{ "SetText", &UTextRenderComponent::execSetText },
			{ "SetTextMaterial", &UTextRenderComponent::execSetTextMaterial },
			{ "SetTextRenderColor", &UTextRenderComponent::execSetTextRenderColor },
			{ "SetVerticalAlignment", &UTextRenderComponent::execSetVerticalAlignment },
			{ "SetVertSpacingAdjust", &UTextRenderComponent::execSetVertSpacingAdjust },
			{ "SetWorldSize", &UTextRenderComponent::execSetWorldSize },
			{ "SetXScale", &UTextRenderComponent::execSetXScale },
			{ "SetYScale", &UTextRenderComponent::execSetYScale },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTextRenderComponent_GetTextLocalSize_Statics
	{
		struct TextRenderComponent_eventGetTextLocalSize_Parms
		{
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTextRenderComponent_GetTextLocalSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TextRenderComponent_eventGetTextLocalSize_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTextRenderComponent_GetTextLocalSize_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextRenderComponent_GetTextLocalSize_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTextRenderComponent_GetTextLocalSize_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|TextRender" },
		{ "Comment", "/** Get local size of text */" },
		{ "ModuleRelativePath", "Classes/Components/TextRenderComponent.h" },
		{ "ToolTip", "Get local size of text" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTextRenderComponent_GetTextLocalSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTextRenderComponent, nullptr, "GetTextLocalSize", nullptr, nullptr, sizeof(TextRenderComponent_eventGetTextLocalSize_Parms), Z_Construct_UFunction_UTextRenderComponent_GetTextLocalSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextRenderComponent_GetTextLocalSize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTextRenderComponent_GetTextLocalSize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextRenderComponent_GetTextLocalSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTextRenderComponent_GetTextLocalSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTextRenderComponent_GetTextLocalSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTextRenderComponent_GetTextWorldSize_Statics
	{
		struct TextRenderComponent_eventGetTextWorldSize_Parms
		{
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTextRenderComponent_GetTextWorldSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TextRenderComponent_eventGetTextWorldSize_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTextRenderComponent_GetTextWorldSize_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextRenderComponent_GetTextWorldSize_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTextRenderComponent_GetTextWorldSize_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|TextRender" },
		{ "Comment", "/** Get world space size of text */" },
		{ "ModuleRelativePath", "Classes/Components/TextRenderComponent.h" },
		{ "ToolTip", "Get world space size of text" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTextRenderComponent_GetTextWorldSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTextRenderComponent, nullptr, "GetTextWorldSize", nullptr, nullptr, sizeof(TextRenderComponent_eventGetTextWorldSize_Parms), Z_Construct_UFunction_UTextRenderComponent_GetTextWorldSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextRenderComponent_GetTextWorldSize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTextRenderComponent_GetTextWorldSize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextRenderComponent_GetTextWorldSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTextRenderComponent_GetTextWorldSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTextRenderComponent_GetTextWorldSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTextRenderComponent_K2_SetText_Statics
	{
		struct TextRenderComponent_eventK2_SetText_Parms
		{
			FText Value;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTextRenderComponent_K2_SetText_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UTextRenderComponent_K2_SetText_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TextRenderComponent_eventK2_SetText_Parms, Value), METADATA_PARAMS(Z_Construct_UFunction_UTextRenderComponent_K2_SetText_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextRenderComponent_K2_SetText_Statics::NewProp_Value_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTextRenderComponent_K2_SetText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextRenderComponent_K2_SetText_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTextRenderComponent_K2_SetText_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|TextRender" },
		{ "Comment", "/** Change the text value and signal the primitives to be rebuilt */" },
		{ "DisplayName", "Set Text" },
		{ "ModuleRelativePath", "Classes/Components/TextRenderComponent.h" },
		{ "ScriptName", "SetText" },
		{ "ToolTip", "Change the text value and signal the primitives to be rebuilt" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTextRenderComponent_K2_SetText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTextRenderComponent, nullptr, "K2_SetText", nullptr, nullptr, sizeof(TextRenderComponent_eventK2_SetText_Parms), Z_Construct_UFunction_UTextRenderComponent_K2_SetText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextRenderComponent_K2_SetText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTextRenderComponent_K2_SetText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextRenderComponent_K2_SetText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTextRenderComponent_K2_SetText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTextRenderComponent_K2_SetText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTextRenderComponent_SetFont_Statics
	{
		struct TextRenderComponent_eventSetFont_Parms
		{
			UFont* Value;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTextRenderComponent_SetFont_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TextRenderComponent_eventSetFont_Parms, Value), Z_Construct_UClass_UFont_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTextRenderComponent_SetFont_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextRenderComponent_SetFont_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTextRenderComponent_SetFont_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|TextRender" },
		{ "Comment", "/** Change the font and signal the primitives to be rebuilt */" },
		{ "ModuleRelativePath", "Classes/Components/TextRenderComponent.h" },
		{ "ToolTip", "Change the font and signal the primitives to be rebuilt" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTextRenderComponent_SetFont_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTextRenderComponent, nullptr, "SetFont", nullptr, nullptr, sizeof(TextRenderComponent_eventSetFont_Parms), Z_Construct_UFunction_UTextRenderComponent_SetFont_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextRenderComponent_SetFont_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTextRenderComponent_SetFont_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextRenderComponent_SetFont_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTextRenderComponent_SetFont()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTextRenderComponent_SetFont_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTextRenderComponent_SetHorizontalAlignment_Statics
	{
		struct TextRenderComponent_eventSetHorizontalAlignment_Parms
		{
			TEnumAsByte<EHorizTextAligment> Value;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTextRenderComponent_SetHorizontalAlignment_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TextRenderComponent_eventSetHorizontalAlignment_Parms, Value), Z_Construct_UEnum_Engine_EHorizTextAligment, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTextRenderComponent_SetHorizontalAlignment_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextRenderComponent_SetHorizontalAlignment_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTextRenderComponent_SetHorizontalAlignment_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|TextRender" },
		{ "Comment", "/** Change the horizontal alignment and signal the primitives to be rebuilt */" },
		{ "ModuleRelativePath", "Classes/Components/TextRenderComponent.h" },
		{ "ToolTip", "Change the horizontal alignment and signal the primitives to be rebuilt" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTextRenderComponent_SetHorizontalAlignment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTextRenderComponent, nullptr, "SetHorizontalAlignment", nullptr, nullptr, sizeof(TextRenderComponent_eventSetHorizontalAlignment_Parms), Z_Construct_UFunction_UTextRenderComponent_SetHorizontalAlignment_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextRenderComponent_SetHorizontalAlignment_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTextRenderComponent_SetHorizontalAlignment_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextRenderComponent_SetHorizontalAlignment_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTextRenderComponent_SetHorizontalAlignment()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTextRenderComponent_SetHorizontalAlignment_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTextRenderComponent_SetHorizSpacingAdjust_Statics
	{
		struct TextRenderComponent_eventSetHorizSpacingAdjust_Parms
		{
			float Value;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTextRenderComponent_SetHorizSpacingAdjust_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TextRenderComponent_eventSetHorizSpacingAdjust_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTextRenderComponent_SetHorizSpacingAdjust_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextRenderComponent_SetHorizSpacingAdjust_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTextRenderComponent_SetHorizSpacingAdjust_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|TextRender" },
		{ "Comment", "/** Change the text horizontal spacing adjustment and signal the primitives to be rebuilt */" },
		{ "ModuleRelativePath", "Classes/Components/TextRenderComponent.h" },
		{ "ToolTip", "Change the text horizontal spacing adjustment and signal the primitives to be rebuilt" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTextRenderComponent_SetHorizSpacingAdjust_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTextRenderComponent, nullptr, "SetHorizSpacingAdjust", nullptr, nullptr, sizeof(TextRenderComponent_eventSetHorizSpacingAdjust_Parms), Z_Construct_UFunction_UTextRenderComponent_SetHorizSpacingAdjust_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextRenderComponent_SetHorizSpacingAdjust_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTextRenderComponent_SetHorizSpacingAdjust_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextRenderComponent_SetHorizSpacingAdjust_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTextRenderComponent_SetHorizSpacingAdjust()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTextRenderComponent_SetHorizSpacingAdjust_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTextRenderComponent_SetText_Statics
	{
		struct TextRenderComponent_eventSetText_Parms
		{
			FString Value;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTextRenderComponent_SetText_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTextRenderComponent_SetText_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TextRenderComponent_eventSetText_Parms, Value), METADATA_PARAMS(Z_Construct_UFunction_UTextRenderComponent_SetText_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextRenderComponent_SetText_Statics::NewProp_Value_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTextRenderComponent_SetText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextRenderComponent_SetText_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTextRenderComponent_SetText_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|TextRender" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Use the SetText function taking an FText instead." },
		{ "DisplayName", "Set Text (String)" },
		{ "ModuleRelativePath", "Classes/Components/TextRenderComponent.h" },
		{ "ScriptNoExport", "" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTextRenderComponent_SetText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTextRenderComponent, nullptr, "SetText", nullptr, nullptr, sizeof(TextRenderComponent_eventSetText_Parms), Z_Construct_UFunction_UTextRenderComponent_SetText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextRenderComponent_SetText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTextRenderComponent_SetText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextRenderComponent_SetText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTextRenderComponent_SetText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTextRenderComponent_SetText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTextRenderComponent_SetTextMaterial_Statics
	{
		struct TextRenderComponent_eventSetTextMaterial_Parms
		{
			UMaterialInterface* Material;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Material;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTextRenderComponent_SetTextMaterial_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TextRenderComponent_eventSetTextMaterial_Parms, Material), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTextRenderComponent_SetTextMaterial_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextRenderComponent_SetTextMaterial_Statics::NewProp_Material,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTextRenderComponent_SetTextMaterial_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|TextRender" },
		{ "Comment", "/** Change the text material and signal the primitives to be rebuilt */" },
		{ "ModuleRelativePath", "Classes/Components/TextRenderComponent.h" },
		{ "ToolTip", "Change the text material and signal the primitives to be rebuilt" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTextRenderComponent_SetTextMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTextRenderComponent, nullptr, "SetTextMaterial", nullptr, nullptr, sizeof(TextRenderComponent_eventSetTextMaterial_Parms), Z_Construct_UFunction_UTextRenderComponent_SetTextMaterial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextRenderComponent_SetTextMaterial_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTextRenderComponent_SetTextMaterial_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextRenderComponent_SetTextMaterial_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTextRenderComponent_SetTextMaterial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTextRenderComponent_SetTextMaterial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTextRenderComponent_SetTextRenderColor_Statics
	{
		struct TextRenderComponent_eventSetTextRenderColor_Parms
		{
			FColor Value;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTextRenderComponent_SetTextRenderColor_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TextRenderComponent_eventSetTextRenderColor_Parms, Value), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTextRenderComponent_SetTextRenderColor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextRenderComponent_SetTextRenderColor_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTextRenderComponent_SetTextRenderColor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|TextRender" },
		{ "Comment", "/** Change the text render color and signal the primitives to be rebuilt */" },
		{ "ModuleRelativePath", "Classes/Components/TextRenderComponent.h" },
		{ "ToolTip", "Change the text render color and signal the primitives to be rebuilt" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTextRenderComponent_SetTextRenderColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTextRenderComponent, nullptr, "SetTextRenderColor", nullptr, nullptr, sizeof(TextRenderComponent_eventSetTextRenderColor_Parms), Z_Construct_UFunction_UTextRenderComponent_SetTextRenderColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextRenderComponent_SetTextRenderColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTextRenderComponent_SetTextRenderColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextRenderComponent_SetTextRenderColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTextRenderComponent_SetTextRenderColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTextRenderComponent_SetTextRenderColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTextRenderComponent_SetVerticalAlignment_Statics
	{
		struct TextRenderComponent_eventSetVerticalAlignment_Parms
		{
			TEnumAsByte<EVerticalTextAligment> Value;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTextRenderComponent_SetVerticalAlignment_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TextRenderComponent_eventSetVerticalAlignment_Parms, Value), Z_Construct_UEnum_Engine_EVerticalTextAligment, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTextRenderComponent_SetVerticalAlignment_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextRenderComponent_SetVerticalAlignment_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTextRenderComponent_SetVerticalAlignment_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|TextRender" },
		{ "Comment", "/** Change the vertical alignment and signal the primitives to be rebuilt */" },
		{ "ModuleRelativePath", "Classes/Components/TextRenderComponent.h" },
		{ "ToolTip", "Change the vertical alignment and signal the primitives to be rebuilt" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTextRenderComponent_SetVerticalAlignment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTextRenderComponent, nullptr, "SetVerticalAlignment", nullptr, nullptr, sizeof(TextRenderComponent_eventSetVerticalAlignment_Parms), Z_Construct_UFunction_UTextRenderComponent_SetVerticalAlignment_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextRenderComponent_SetVerticalAlignment_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTextRenderComponent_SetVerticalAlignment_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextRenderComponent_SetVerticalAlignment_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTextRenderComponent_SetVerticalAlignment()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTextRenderComponent_SetVerticalAlignment_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTextRenderComponent_SetVertSpacingAdjust_Statics
	{
		struct TextRenderComponent_eventSetVertSpacingAdjust_Parms
		{
			float Value;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTextRenderComponent_SetVertSpacingAdjust_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TextRenderComponent_eventSetVertSpacingAdjust_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTextRenderComponent_SetVertSpacingAdjust_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextRenderComponent_SetVertSpacingAdjust_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTextRenderComponent_SetVertSpacingAdjust_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|TextRender" },
		{ "Comment", "/** Change the text vertical spacing adjustment and signal the primitives to be rebuilt */" },
		{ "ModuleRelativePath", "Classes/Components/TextRenderComponent.h" },
		{ "ToolTip", "Change the text vertical spacing adjustment and signal the primitives to be rebuilt" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTextRenderComponent_SetVertSpacingAdjust_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTextRenderComponent, nullptr, "SetVertSpacingAdjust", nullptr, nullptr, sizeof(TextRenderComponent_eventSetVertSpacingAdjust_Parms), Z_Construct_UFunction_UTextRenderComponent_SetVertSpacingAdjust_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextRenderComponent_SetVertSpacingAdjust_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTextRenderComponent_SetVertSpacingAdjust_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextRenderComponent_SetVertSpacingAdjust_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTextRenderComponent_SetVertSpacingAdjust()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTextRenderComponent_SetVertSpacingAdjust_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTextRenderComponent_SetWorldSize_Statics
	{
		struct TextRenderComponent_eventSetWorldSize_Parms
		{
			float Value;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTextRenderComponent_SetWorldSize_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TextRenderComponent_eventSetWorldSize_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTextRenderComponent_SetWorldSize_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextRenderComponent_SetWorldSize_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTextRenderComponent_SetWorldSize_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|TextRender" },
		{ "Comment", "/** Change the world size of the text and signal the primitives to be rebuilt */" },
		{ "ModuleRelativePath", "Classes/Components/TextRenderComponent.h" },
		{ "ToolTip", "Change the world size of the text and signal the primitives to be rebuilt" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTextRenderComponent_SetWorldSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTextRenderComponent, nullptr, "SetWorldSize", nullptr, nullptr, sizeof(TextRenderComponent_eventSetWorldSize_Parms), Z_Construct_UFunction_UTextRenderComponent_SetWorldSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextRenderComponent_SetWorldSize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTextRenderComponent_SetWorldSize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextRenderComponent_SetWorldSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTextRenderComponent_SetWorldSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTextRenderComponent_SetWorldSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTextRenderComponent_SetXScale_Statics
	{
		struct TextRenderComponent_eventSetXScale_Parms
		{
			float Value;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTextRenderComponent_SetXScale_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TextRenderComponent_eventSetXScale_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTextRenderComponent_SetXScale_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextRenderComponent_SetXScale_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTextRenderComponent_SetXScale_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|TextRender" },
		{ "Comment", "/** Change the text X scale and signal the primitives to be rebuilt */" },
		{ "ModuleRelativePath", "Classes/Components/TextRenderComponent.h" },
		{ "ToolTip", "Change the text X scale and signal the primitives to be rebuilt" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTextRenderComponent_SetXScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTextRenderComponent, nullptr, "SetXScale", nullptr, nullptr, sizeof(TextRenderComponent_eventSetXScale_Parms), Z_Construct_UFunction_UTextRenderComponent_SetXScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextRenderComponent_SetXScale_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTextRenderComponent_SetXScale_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextRenderComponent_SetXScale_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTextRenderComponent_SetXScale()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTextRenderComponent_SetXScale_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTextRenderComponent_SetYScale_Statics
	{
		struct TextRenderComponent_eventSetYScale_Parms
		{
			float Value;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTextRenderComponent_SetYScale_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TextRenderComponent_eventSetYScale_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTextRenderComponent_SetYScale_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextRenderComponent_SetYScale_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTextRenderComponent_SetYScale_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|TextRender" },
		{ "Comment", "/** Change the text Y scale and signal the primitives to be rebuilt */" },
		{ "ModuleRelativePath", "Classes/Components/TextRenderComponent.h" },
		{ "ToolTip", "Change the text Y scale and signal the primitives to be rebuilt" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTextRenderComponent_SetYScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTextRenderComponent, nullptr, "SetYScale", nullptr, nullptr, sizeof(TextRenderComponent_eventSetYScale_Parms), Z_Construct_UFunction_UTextRenderComponent_SetYScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextRenderComponent_SetYScale_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTextRenderComponent_SetYScale_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextRenderComponent_SetYScale_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTextRenderComponent_SetYScale()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTextRenderComponent_SetYScale_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTextRenderComponent_NoRegister()
	{
		return UTextRenderComponent::StaticClass();
	}
	struct Z_Construct_UClass_UTextRenderComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAlwaysRenderAsText_MetaData[];
#endif
		static void NewProp_bAlwaysRenderAsText_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAlwaysRenderAsText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VertSpacingAdjust_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VertSpacingAdjust;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HorizSpacingAdjust_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HorizSpacingAdjust;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InvDefaultSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InvDefaultSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WorldSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_YScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_YScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_XScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_XScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextRenderColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TextRenderColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VerticalAlignment_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_VerticalAlignment;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HorizontalAlignment_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_HorizontalAlignment;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Font_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Font;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TextMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Text;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTextRenderComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPrimitiveComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTextRenderComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTextRenderComponent_GetTextLocalSize, "GetTextLocalSize" }, // 2226803887
		{ &Z_Construct_UFunction_UTextRenderComponent_GetTextWorldSize, "GetTextWorldSize" }, // 2491600516
		{ &Z_Construct_UFunction_UTextRenderComponent_K2_SetText, "K2_SetText" }, // 2914457858
		{ &Z_Construct_UFunction_UTextRenderComponent_SetFont, "SetFont" }, // 1611090193
		{ &Z_Construct_UFunction_UTextRenderComponent_SetHorizontalAlignment, "SetHorizontalAlignment" }, // 4147518323
		{ &Z_Construct_UFunction_UTextRenderComponent_SetHorizSpacingAdjust, "SetHorizSpacingAdjust" }, // 868482373
		{ &Z_Construct_UFunction_UTextRenderComponent_SetText, "SetText" }, // 3804500339
		{ &Z_Construct_UFunction_UTextRenderComponent_SetTextMaterial, "SetTextMaterial" }, // 2927789587
		{ &Z_Construct_UFunction_UTextRenderComponent_SetTextRenderColor, "SetTextRenderColor" }, // 2766151376
		{ &Z_Construct_UFunction_UTextRenderComponent_SetVerticalAlignment, "SetVerticalAlignment" }, // 37796799
		{ &Z_Construct_UFunction_UTextRenderComponent_SetVertSpacingAdjust, "SetVertSpacingAdjust" }, // 3946020262
		{ &Z_Construct_UFunction_UTextRenderComponent_SetWorldSize, "SetWorldSize" }, // 1445674991
		{ &Z_Construct_UFunction_UTextRenderComponent_SetXScale, "SetXScale" }, // 1197510791
		{ &Z_Construct_UFunction_UTextRenderComponent_SetYScale, "SetYScale" }, // 1159645237
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextRenderComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Rendering" },
		{ "Comment", "/**\n * Renders text in the world with given font. Contains usual font related attributes such as Scale, Alignment, Color etc.\n */" },
		{ "HideCategories", "Object LOD Physics TextureStreaming Activation Components|Activation Collision Mobility VirtualTexture Trigger" },
		{ "IncludePath", "Components/TextRenderComponent.h" },
		{ "ModuleRelativePath", "Classes/Components/TextRenderComponent.h" },
		{ "ToolTip", "Renders text in the world with given font. Contains usual font related attributes such as Scale, Alignment, Color etc." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextRenderComponent_Statics::NewProp_bAlwaysRenderAsText_MetaData[] = {
		{ "Category", "Rendering" },
		{ "Comment", "/** Allows text to draw unmodified when using debug visualization modes. **/" },
		{ "ModuleRelativePath", "Classes/Components/TextRenderComponent.h" },
		{ "ToolTip", "Allows text to draw unmodified when using debug visualization modes. *" },
	};
#endif
	void Z_Construct_UClass_UTextRenderComponent_Statics::NewProp_bAlwaysRenderAsText_SetBit(void* Obj)
	{
		((UTextRenderComponent*)Obj)->bAlwaysRenderAsText = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTextRenderComponent_Statics::NewProp_bAlwaysRenderAsText = { "bAlwaysRenderAsText", nullptr, (EPropertyFlags)0x0010040000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UTextRenderComponent), &Z_Construct_UClass_UTextRenderComponent_Statics::NewProp_bAlwaysRenderAsText_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTextRenderComponent_Statics::NewProp_bAlwaysRenderAsText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTextRenderComponent_Statics::NewProp_bAlwaysRenderAsText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextRenderComponent_Statics::NewProp_VertSpacingAdjust_MetaData[] = {
		{ "Category", "Text" },
		{ "Comment", "/** Vertical adjustment per character, default is 0.0 */" },
		{ "ModuleRelativePath", "Classes/Components/TextRenderComponent.h" },
		{ "ToolTip", "Vertical adjustment per character, default is 0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTextRenderComponent_Statics::NewProp_VertSpacingAdjust = { "VertSpacingAdjust", nullptr, (EPropertyFlags)0x0010040000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTextRenderComponent, VertSpacingAdjust), METADATA_PARAMS(Z_Construct_UClass_UTextRenderComponent_Statics::NewProp_VertSpacingAdjust_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTextRenderComponent_Statics::NewProp_VertSpacingAdjust_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextRenderComponent_Statics::NewProp_HorizSpacingAdjust_MetaData[] = {
		{ "Category", "Text" },
		{ "Comment", "/** Horizontal adjustment per character, default is 0.0 */" },
		{ "ModuleRelativePath", "Classes/Components/TextRenderComponent.h" },
		{ "ToolTip", "Horizontal adjustment per character, default is 0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTextRenderComponent_Statics::NewProp_HorizSpacingAdjust = { "HorizSpacingAdjust", nullptr, (EPropertyFlags)0x0010040000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTextRenderComponent, HorizSpacingAdjust), METADATA_PARAMS(Z_Construct_UClass_UTextRenderComponent_Statics::NewProp_HorizSpacingAdjust_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTextRenderComponent_Statics::NewProp_HorizSpacingAdjust_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextRenderComponent_Statics::NewProp_InvDefaultSize_MetaData[] = {
		{ "Comment", "/** The inverse of the Font's character height. */" },
		{ "ModuleRelativePath", "Classes/Components/TextRenderComponent.h" },
		{ "ToolTip", "The inverse of the Font's character height." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTextRenderComponent_Statics::NewProp_InvDefaultSize = { "InvDefaultSize", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTextRenderComponent, InvDefaultSize), METADATA_PARAMS(Z_Construct_UClass_UTextRenderComponent_Statics::NewProp_InvDefaultSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTextRenderComponent_Statics::NewProp_InvDefaultSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextRenderComponent_Statics::NewProp_WorldSize_MetaData[] = {
		{ "Category", "Text" },
		{ "Comment", "/** Vertical size of the fonts largest character in world units. Transform, XScale and YScale will affect final size. */" },
		{ "ModuleRelativePath", "Classes/Components/TextRenderComponent.h" },
		{ "ToolTip", "Vertical size of the fonts largest character in world units. Transform, XScale and YScale will affect final size." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTextRenderComponent_Statics::NewProp_WorldSize = { "WorldSize", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTextRenderComponent, WorldSize), METADATA_PARAMS(Z_Construct_UClass_UTextRenderComponent_Statics::NewProp_WorldSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTextRenderComponent_Statics::NewProp_WorldSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextRenderComponent_Statics::NewProp_YScale_MetaData[] = {
		{ "Category", "Text" },
		{ "Comment", "/** Vertical scale, default is 1.0 */" },
		{ "ModuleRelativePath", "Classes/Components/TextRenderComponent.h" },
		{ "ToolTip", "Vertical scale, default is 1.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTextRenderComponent_Statics::NewProp_YScale = { "YScale", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTextRenderComponent, YScale), METADATA_PARAMS(Z_Construct_UClass_UTextRenderComponent_Statics::NewProp_YScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTextRenderComponent_Statics::NewProp_YScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextRenderComponent_Statics::NewProp_XScale_MetaData[] = {
		{ "Category", "Text" },
		{ "Comment", "/** Horizontal scale, default is 1.0 */" },
		{ "ModuleRelativePath", "Classes/Components/TextRenderComponent.h" },
		{ "ToolTip", "Horizontal scale, default is 1.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTextRenderComponent_Statics::NewProp_XScale = { "XScale", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTextRenderComponent, XScale), METADATA_PARAMS(Z_Construct_UClass_UTextRenderComponent_Statics::NewProp_XScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTextRenderComponent_Statics::NewProp_XScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextRenderComponent_Statics::NewProp_TextRenderColor_MetaData[] = {
		{ "Category", "Text" },
		{ "Comment", "/** Color of the text, can be accessed as vertex color */" },
		{ "ModuleRelativePath", "Classes/Components/TextRenderComponent.h" },
		{ "ToolTip", "Color of the text, can be accessed as vertex color" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTextRenderComponent_Statics::NewProp_TextRenderColor = { "TextRenderColor", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTextRenderComponent, TextRenderColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_UTextRenderComponent_Statics::NewProp_TextRenderColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTextRenderComponent_Statics::NewProp_TextRenderColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextRenderComponent_Statics::NewProp_VerticalAlignment_MetaData[] = {
		{ "Category", "Text" },
		{ "Comment", "/** Vertical text alignment */" },
		{ "DisplayName", "Vertical Alignment" },
		{ "ModuleRelativePath", "Classes/Components/TextRenderComponent.h" },
		{ "ToolTip", "Vertical text alignment" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTextRenderComponent_Statics::NewProp_VerticalAlignment = { "VerticalAlignment", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTextRenderComponent, VerticalAlignment), Z_Construct_UEnum_Engine_EVerticalTextAligment, METADATA_PARAMS(Z_Construct_UClass_UTextRenderComponent_Statics::NewProp_VerticalAlignment_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTextRenderComponent_Statics::NewProp_VerticalAlignment_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextRenderComponent_Statics::NewProp_HorizontalAlignment_MetaData[] = {
		{ "Category", "Text" },
		{ "Comment", "/** Horizontal text alignment */" },
		{ "DisplayName", "Horizontal Alignment" },
		{ "ModuleRelativePath", "Classes/Components/TextRenderComponent.h" },
		{ "ToolTip", "Horizontal text alignment" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTextRenderComponent_Statics::NewProp_HorizontalAlignment = { "HorizontalAlignment", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTextRenderComponent, HorizontalAlignment), Z_Construct_UEnum_Engine_EHorizTextAligment, METADATA_PARAMS(Z_Construct_UClass_UTextRenderComponent_Statics::NewProp_HorizontalAlignment_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTextRenderComponent_Statics::NewProp_HorizontalAlignment_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextRenderComponent_Statics::NewProp_Font_MetaData[] = {
		{ "Category", "Text" },
		{ "Comment", "/** Text font */" },
		{ "ModuleRelativePath", "Classes/Components/TextRenderComponent.h" },
		{ "ToolTip", "Text font" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTextRenderComponent_Statics::NewProp_Font = { "Font", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTextRenderComponent, Font), Z_Construct_UClass_UFont_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTextRenderComponent_Statics::NewProp_Font_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTextRenderComponent_Statics::NewProp_Font_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextRenderComponent_Statics::NewProp_TextMaterial_MetaData[] = {
		{ "Category", "Text" },
		{ "Comment", "/** Text material */" },
		{ "ModuleRelativePath", "Classes/Components/TextRenderComponent.h" },
		{ "ToolTip", "Text material" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTextRenderComponent_Statics::NewProp_TextMaterial = { "TextMaterial", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTextRenderComponent, TextMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTextRenderComponent_Statics::NewProp_TextMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTextRenderComponent_Statics::NewProp_TextMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextRenderComponent_Statics::NewProp_Text_MetaData[] = {
		{ "Category", "Text" },
		{ "Comment", "/** Text content, can be multi line using <br> as line separator */" },
		{ "ModuleRelativePath", "Classes/Components/TextRenderComponent.h" },
		{ "MultiLine", "TRUE" },
		{ "ToolTip", "Text content, can be multi line using <br> as line separator" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_UTextRenderComponent_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTextRenderComponent, Text), METADATA_PARAMS(Z_Construct_UClass_UTextRenderComponent_Statics::NewProp_Text_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTextRenderComponent_Statics::NewProp_Text_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTextRenderComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextRenderComponent_Statics::NewProp_bAlwaysRenderAsText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextRenderComponent_Statics::NewProp_VertSpacingAdjust,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextRenderComponent_Statics::NewProp_HorizSpacingAdjust,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextRenderComponent_Statics::NewProp_InvDefaultSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextRenderComponent_Statics::NewProp_WorldSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextRenderComponent_Statics::NewProp_YScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextRenderComponent_Statics::NewProp_XScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextRenderComponent_Statics::NewProp_TextRenderColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextRenderComponent_Statics::NewProp_VerticalAlignment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextRenderComponent_Statics::NewProp_HorizontalAlignment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextRenderComponent_Statics::NewProp_Font,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextRenderComponent_Statics::NewProp_TextMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextRenderComponent_Statics::NewProp_Text,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTextRenderComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTextRenderComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTextRenderComponent_Statics::ClassParams = {
		&UTextRenderComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UTextRenderComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UTextRenderComponent_Statics::PropPointers),
		0,
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UTextRenderComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTextRenderComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTextRenderComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTextRenderComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTextRenderComponent, 3816337874);
	template<> ENGINE_API UClass* StaticClass<UTextRenderComponent>()
	{
		return UTextRenderComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTextRenderComponent(Z_Construct_UClass_UTextRenderComponent, &UTextRenderComponent::StaticClass, TEXT("/Script/Engine"), TEXT("UTextRenderComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTextRenderComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
