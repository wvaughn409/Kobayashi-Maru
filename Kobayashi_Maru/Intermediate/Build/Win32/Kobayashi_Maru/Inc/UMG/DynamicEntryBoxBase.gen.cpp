// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UMG/Public/Components/DynamicEntryBoxBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDynamicEntryBoxBase() {}
// Cross Module References
	UMG_API UEnum* Z_Construct_UEnum_UMG_EDynamicBoxType();
	UPackage* Z_Construct_UPackage__Script_UMG();
	UMG_API UClass* Z_Construct_UClass_UDynamicEntryBoxBase_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UDynamicEntryBoxBase();
	UMG_API UClass* Z_Construct_UClass_UWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	UMG_API UScriptStruct* Z_Construct_UScriptStruct_FUserWidgetPool();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EVerticalAlignment();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EHorizontalAlignment();
	UMG_API UScriptStruct* Z_Construct_UScriptStruct_FSlateChildSize();
// End Cross Module References
	static UEnum* EDynamicBoxType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_UMG_EDynamicBoxType, Z_Construct_UPackage__Script_UMG(), TEXT("EDynamicBoxType"));
		}
		return Singleton;
	}
	template<> UMG_API UEnum* StaticEnum<EDynamicBoxType>()
	{
		return EDynamicBoxType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EDynamicBoxType(EDynamicBoxType_StaticEnum, TEXT("/Script/UMG"), TEXT("EDynamicBoxType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_UMG_EDynamicBoxType_Hash() { return 3654928270U; }
	UEnum* Z_Construct_UEnum_UMG_EDynamicBoxType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_UMG();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EDynamicBoxType"), 0, Get_Z_Construct_UEnum_UMG_EDynamicBoxType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EDynamicBoxType::Horizontal", (int64)EDynamicBoxType::Horizontal },
				{ "EDynamicBoxType::Vertical", (int64)EDynamicBoxType::Vertical },
				{ "EDynamicBoxType::Wrap", (int64)EDynamicBoxType::Wrap },
				{ "EDynamicBoxType::Overlay", (int64)EDynamicBoxType::Overlay },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Horizontal.Name", "EDynamicBoxType::Horizontal" },
				{ "ModuleRelativePath", "Public/Components/DynamicEntryBoxBase.h" },
				{ "Overlay.Name", "EDynamicBoxType::Overlay" },
				{ "Vertical.Name", "EDynamicBoxType::Vertical" },
				{ "Wrap.Name", "EDynamicBoxType::Wrap" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_UMG,
				nullptr,
				"EDynamicBoxType",
				"EDynamicBoxType",
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
	DEFINE_FUNCTION(UDynamicEntryBoxBase::execSetEntrySpacing)
	{
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_InEntrySpacing);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetEntrySpacing(Z_Param_Out_InEntrySpacing);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDynamicEntryBoxBase::execGetNumEntries)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetNumEntries();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDynamicEntryBoxBase::execGetAllEntries)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UUserWidget*>*)Z_Param__Result=P_THIS->GetAllEntries();
		P_NATIVE_END;
	}
	void UDynamicEntryBoxBase::StaticRegisterNativesUDynamicEntryBoxBase()
	{
		UClass* Class = UDynamicEntryBoxBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAllEntries", &UDynamicEntryBoxBase::execGetAllEntries },
			{ "GetNumEntries", &UDynamicEntryBoxBase::execGetNumEntries },
			{ "SetEntrySpacing", &UDynamicEntryBoxBase::execSetEntrySpacing },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDynamicEntryBoxBase_GetAllEntries_Statics
	{
		struct DynamicEntryBoxBase_eventGetAllEntries_Parms
		{
			TArray<UUserWidget*> ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDynamicEntryBoxBase_GetAllEntries_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDynamicEntryBoxBase_GetAllEntries_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x001000800800058a, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DynamicEntryBoxBase_eventGetAllEntries_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UDynamicEntryBoxBase_GetAllEntries_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDynamicEntryBoxBase_GetAllEntries_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDynamicEntryBoxBase_GetAllEntries_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDynamicEntryBoxBase_GetAllEntries_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDynamicEntryBoxBase_GetAllEntries_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDynamicEntryBoxBase_GetAllEntries_Statics::NewProp_ReturnValue_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDynamicEntryBoxBase_GetAllEntries_Statics::Function_MetaDataParams[] = {
		{ "Category", "DynamicEntryBox" },
		{ "ModuleRelativePath", "Public/Components/DynamicEntryBoxBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDynamicEntryBoxBase_GetAllEntries_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDynamicEntryBoxBase, nullptr, "GetAllEntries", nullptr, nullptr, sizeof(DynamicEntryBoxBase_eventGetAllEntries_Parms), Z_Construct_UFunction_UDynamicEntryBoxBase_GetAllEntries_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDynamicEntryBoxBase_GetAllEntries_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDynamicEntryBoxBase_GetAllEntries_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDynamicEntryBoxBase_GetAllEntries_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDynamicEntryBoxBase_GetAllEntries()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDynamicEntryBoxBase_GetAllEntries_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDynamicEntryBoxBase_GetNumEntries_Statics
	{
		struct DynamicEntryBoxBase_eventGetNumEntries_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDynamicEntryBoxBase_GetNumEntries_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DynamicEntryBoxBase_eventGetNumEntries_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDynamicEntryBoxBase_GetNumEntries_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDynamicEntryBoxBase_GetNumEntries_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDynamicEntryBoxBase_GetNumEntries_Statics::Function_MetaDataParams[] = {
		{ "Category", "DynamicEntryBox" },
		{ "ModuleRelativePath", "Public/Components/DynamicEntryBoxBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDynamicEntryBoxBase_GetNumEntries_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDynamicEntryBoxBase, nullptr, "GetNumEntries", nullptr, nullptr, sizeof(DynamicEntryBoxBase_eventGetNumEntries_Parms), Z_Construct_UFunction_UDynamicEntryBoxBase_GetNumEntries_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDynamicEntryBoxBase_GetNumEntries_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDynamicEntryBoxBase_GetNumEntries_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDynamicEntryBoxBase_GetNumEntries_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDynamicEntryBoxBase_GetNumEntries()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDynamicEntryBoxBase_GetNumEntries_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDynamicEntryBoxBase_SetEntrySpacing_Statics
	{
		struct DynamicEntryBoxBase_eventSetEntrySpacing_Parms
		{
			FVector2D InEntrySpacing;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InEntrySpacing_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InEntrySpacing;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDynamicEntryBoxBase_SetEntrySpacing_Statics::NewProp_InEntrySpacing_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDynamicEntryBoxBase_SetEntrySpacing_Statics::NewProp_InEntrySpacing = { "InEntrySpacing", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DynamicEntryBoxBase_eventSetEntrySpacing_Parms, InEntrySpacing), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UFunction_UDynamicEntryBoxBase_SetEntrySpacing_Statics::NewProp_InEntrySpacing_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDynamicEntryBoxBase_SetEntrySpacing_Statics::NewProp_InEntrySpacing_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDynamicEntryBoxBase_SetEntrySpacing_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDynamicEntryBoxBase_SetEntrySpacing_Statics::NewProp_InEntrySpacing,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDynamicEntryBoxBase_SetEntrySpacing_Statics::Function_MetaDataParams[] = {
		{ "Category", "DynamicEntryBox" },
		{ "ModuleRelativePath", "Public/Components/DynamicEntryBoxBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDynamicEntryBoxBase_SetEntrySpacing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDynamicEntryBoxBase, nullptr, "SetEntrySpacing", nullptr, nullptr, sizeof(DynamicEntryBoxBase_eventSetEntrySpacing_Parms), Z_Construct_UFunction_UDynamicEntryBoxBase_SetEntrySpacing_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDynamicEntryBoxBase_SetEntrySpacing_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDynamicEntryBoxBase_SetEntrySpacing_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDynamicEntryBoxBase_SetEntrySpacing_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDynamicEntryBoxBase_SetEntrySpacing()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDynamicEntryBoxBase_SetEntrySpacing_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UDynamicEntryBoxBase_NoRegister()
	{
		return UDynamicEntryBoxBase::StaticClass();
	}
	struct Z_Construct_UClass_UDynamicEntryBoxBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EntryWidgetPool_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EntryWidgetPool;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxElementSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxElementSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EntryVerticalAlignment_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EntryVerticalAlignment;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EntryHorizontalAlignment_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EntryHorizontalAlignment;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EntrySizeRule_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EntrySizeRule;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpacingPattern_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SpacingPattern;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SpacingPattern_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EntrySpacing_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EntrySpacing;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EntryBoxType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_EntryBoxType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EntryBoxType_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDynamicEntryBoxBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_UMG,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDynamicEntryBoxBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDynamicEntryBoxBase_GetAllEntries, "GetAllEntries" }, // 1075874160
		{ &Z_Construct_UFunction_UDynamicEntryBoxBase_GetNumEntries, "GetNumEntries" }, // 3051116351
		{ &Z_Construct_UFunction_UDynamicEntryBoxBase_SetEntrySpacing, "SetEntrySpacing" }, // 1059216596
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDynamicEntryBoxBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Base for widgets that support a dynamic number of auto-generated entries at both design- and run-time.\n * Contains all functionality needed to create, construct, and cache an arbitrary number of entry widgets, but exposes no means of entry creation or removal\n * It's up to child classes to decide how they want to perform the population (some may do so entirely on their own without exposing a thing)\n *\n * @see UDynamicEntryBox for a ready-to-use version\n */" },
		{ "IncludePath", "Components/DynamicEntryBoxBase.h" },
		{ "ModuleRelativePath", "Public/Components/DynamicEntryBoxBase.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Base for widgets that support a dynamic number of auto-generated entries at both design- and run-time.\nContains all functionality needed to create, construct, and cache an arbitrary number of entry widgets, but exposes no means of entry creation or removal\nIt's up to child classes to decide how they want to perform the population (some may do so entirely on their own without exposing a thing)\n\n@see UDynamicEntryBox for a ready-to-use version" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDynamicEntryBoxBase_Statics::NewProp_EntryWidgetPool_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/DynamicEntryBoxBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDynamicEntryBoxBase_Statics::NewProp_EntryWidgetPool = { "EntryWidgetPool", nullptr, (EPropertyFlags)0x0040008000002000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDynamicEntryBoxBase, EntryWidgetPool), Z_Construct_UScriptStruct_FUserWidgetPool, METADATA_PARAMS(Z_Construct_UClass_UDynamicEntryBoxBase_Statics::NewProp_EntryWidgetPool_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDynamicEntryBoxBase_Statics::NewProp_EntryWidgetPool_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDynamicEntryBoxBase_Statics::NewProp_MaxElementSize_MetaData[] = {
		{ "Category", "EntryLayout" },
		{ "Comment", "/** The maximum size of each entry in the dominant axis of the box. Vertical/Horizontal boxes only. */" },
		{ "ModuleRelativePath", "Public/Components/DynamicEntryBoxBase.h" },
		{ "ToolTip", "The maximum size of each entry in the dominant axis of the box. Vertical/Horizontal boxes only." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDynamicEntryBoxBase_Statics::NewProp_MaxElementSize = { "MaxElementSize", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDynamicEntryBoxBase, MaxElementSize), METADATA_PARAMS(Z_Construct_UClass_UDynamicEntryBoxBase_Statics::NewProp_MaxElementSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDynamicEntryBoxBase_Statics::NewProp_MaxElementSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDynamicEntryBoxBase_Statics::NewProp_EntryVerticalAlignment_MetaData[] = {
		{ "Category", "EntryLayout" },
		{ "Comment", "/** Vertical alignment of generated entries. Horizontal/Vertical/Wrap boxes only. */" },
		{ "ModuleRelativePath", "Public/Components/DynamicEntryBoxBase.h" },
		{ "ToolTip", "Vertical alignment of generated entries. Horizontal/Vertical/Wrap boxes only." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDynamicEntryBoxBase_Statics::NewProp_EntryVerticalAlignment = { "EntryVerticalAlignment", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDynamicEntryBoxBase, EntryVerticalAlignment), Z_Construct_UEnum_SlateCore_EVerticalAlignment, METADATA_PARAMS(Z_Construct_UClass_UDynamicEntryBoxBase_Statics::NewProp_EntryVerticalAlignment_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDynamicEntryBoxBase_Statics::NewProp_EntryVerticalAlignment_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDynamicEntryBoxBase_Statics::NewProp_EntryHorizontalAlignment_MetaData[] = {
		{ "Category", "EntryLayout" },
		{ "Comment", "/** Horizontal alignment of generated entries. Horizontal/Vertical/Wrap boxes only. */" },
		{ "ModuleRelativePath", "Public/Components/DynamicEntryBoxBase.h" },
		{ "ToolTip", "Horizontal alignment of generated entries. Horizontal/Vertical/Wrap boxes only." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDynamicEntryBoxBase_Statics::NewProp_EntryHorizontalAlignment = { "EntryHorizontalAlignment", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDynamicEntryBoxBase, EntryHorizontalAlignment), Z_Construct_UEnum_SlateCore_EHorizontalAlignment, METADATA_PARAMS(Z_Construct_UClass_UDynamicEntryBoxBase_Statics::NewProp_EntryHorizontalAlignment_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDynamicEntryBoxBase_Statics::NewProp_EntryHorizontalAlignment_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDynamicEntryBoxBase_Statics::NewProp_EntrySizeRule_MetaData[] = {
		{ "Category", "EntryLayout" },
		{ "Comment", "/** Sizing rule to apply to generated entries. Horizontal/Vertical boxes only. */" },
		{ "ModuleRelativePath", "Public/Components/DynamicEntryBoxBase.h" },
		{ "ToolTip", "Sizing rule to apply to generated entries. Horizontal/Vertical boxes only." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDynamicEntryBoxBase_Statics::NewProp_EntrySizeRule = { "EntrySizeRule", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDynamicEntryBoxBase, EntrySizeRule), Z_Construct_UScriptStruct_FSlateChildSize, METADATA_PARAMS(Z_Construct_UClass_UDynamicEntryBoxBase_Statics::NewProp_EntrySizeRule_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDynamicEntryBoxBase_Statics::NewProp_EntrySizeRule_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDynamicEntryBoxBase_Statics::NewProp_SpacingPattern_MetaData[] = {
		{ "Category", "EntryLayout" },
		{ "Comment", "/** The looping sequence of entry paddings to apply as entries are created. Overlay boxes only. Ignores EntrySpacing if not empty. */" },
		{ "ModuleRelativePath", "Public/Components/DynamicEntryBoxBase.h" },
		{ "ToolTip", "The looping sequence of entry paddings to apply as entries are created. Overlay boxes only. Ignores EntrySpacing if not empty." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDynamicEntryBoxBase_Statics::NewProp_SpacingPattern = { "SpacingPattern", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDynamicEntryBoxBase, SpacingPattern), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDynamicEntryBoxBase_Statics::NewProp_SpacingPattern_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDynamicEntryBoxBase_Statics::NewProp_SpacingPattern_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDynamicEntryBoxBase_Statics::NewProp_SpacingPattern_Inner = { "SpacingPattern", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDynamicEntryBoxBase_Statics::NewProp_EntrySpacing_MetaData[] = {
		{ "Category", "EntryLayout" },
		{ "Comment", "/** \n\x09 * The padding to apply between entries in the box.\n\x09 * Note horizontal boxes only use the X and vertical boxes only use Y. Value is also ignored for the first entry in the box.\n\x09 * Wrap and Overlay types use both X and Y for spacing.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/DynamicEntryBoxBase.h" },
		{ "ToolTip", "The padding to apply between entries in the box.\nNote horizontal boxes only use the X and vertical boxes only use Y. Value is also ignored for the first entry in the box.\nWrap and Overlay types use both X and Y for spacing." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDynamicEntryBoxBase_Statics::NewProp_EntrySpacing = { "EntrySpacing", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDynamicEntryBoxBase, EntrySpacing), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UDynamicEntryBoxBase_Statics::NewProp_EntrySpacing_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDynamicEntryBoxBase_Statics::NewProp_EntrySpacing_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDynamicEntryBoxBase_Statics::NewProp_EntryBoxType_MetaData[] = {
		{ "Category", "DynamicEntryBox" },
		{ "Comment", "/** The type of box panel into which created entries are added. Some differences in functionality exist between each type. */" },
		{ "DesignerRebuild", "" },
		{ "ModuleRelativePath", "Public/Components/DynamicEntryBoxBase.h" },
		{ "ToolTip", "The type of box panel into which created entries are added. Some differences in functionality exist between each type." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UDynamicEntryBoxBase_Statics::NewProp_EntryBoxType = { "EntryBoxType", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDynamicEntryBoxBase, EntryBoxType), Z_Construct_UEnum_UMG_EDynamicBoxType, METADATA_PARAMS(Z_Construct_UClass_UDynamicEntryBoxBase_Statics::NewProp_EntryBoxType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDynamicEntryBoxBase_Statics::NewProp_EntryBoxType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDynamicEntryBoxBase_Statics::NewProp_EntryBoxType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDynamicEntryBoxBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDynamicEntryBoxBase_Statics::NewProp_EntryWidgetPool,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDynamicEntryBoxBase_Statics::NewProp_MaxElementSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDynamicEntryBoxBase_Statics::NewProp_EntryVerticalAlignment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDynamicEntryBoxBase_Statics::NewProp_EntryHorizontalAlignment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDynamicEntryBoxBase_Statics::NewProp_EntrySizeRule,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDynamicEntryBoxBase_Statics::NewProp_SpacingPattern,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDynamicEntryBoxBase_Statics::NewProp_SpacingPattern_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDynamicEntryBoxBase_Statics::NewProp_EntrySpacing,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDynamicEntryBoxBase_Statics::NewProp_EntryBoxType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDynamicEntryBoxBase_Statics::NewProp_EntryBoxType_Underlying,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDynamicEntryBoxBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDynamicEntryBoxBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDynamicEntryBoxBase_Statics::ClassParams = {
		&UDynamicEntryBoxBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UDynamicEntryBoxBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UDynamicEntryBoxBase_Statics::PropPointers),
		0,
		0x00B000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UDynamicEntryBoxBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDynamicEntryBoxBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDynamicEntryBoxBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDynamicEntryBoxBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDynamicEntryBoxBase, 1274872404);
	template<> UMG_API UClass* StaticClass<UDynamicEntryBoxBase>()
	{
		return UDynamicEntryBoxBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDynamicEntryBoxBase(Z_Construct_UClass_UDynamicEntryBoxBase, &UDynamicEntryBoxBase::StaticClass, TEXT("/Script/UMG"), TEXT("UDynamicEntryBoxBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDynamicEntryBoxBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
