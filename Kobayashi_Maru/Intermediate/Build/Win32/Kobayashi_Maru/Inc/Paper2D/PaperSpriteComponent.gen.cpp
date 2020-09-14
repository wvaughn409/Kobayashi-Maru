// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Paper2D/Classes/PaperSpriteComponent.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePaperSpriteComponent() {}
// Cross Module References
	PAPER2D_API UClass* Z_Construct_UClass_UPaperSpriteComponent_NoRegister();
	PAPER2D_API UClass* Z_Construct_UClass_UPaperSpriteComponent();
	ENGINE_API UClass* Z_Construct_UClass_UMeshComponent();
	UPackage* Z_Construct_UPackage__Script_Paper2D();
	PAPER2D_API UClass* Z_Construct_UClass_UPaperSprite_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UPaperSpriteComponent::execSetSpriteColor)
	{
		P_GET_STRUCT(FLinearColor,Z_Param_NewColor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSpriteColor(Z_Param_NewColor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPaperSpriteComponent::execGetSprite)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPaperSprite**)Z_Param__Result=P_THIS->GetSprite();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPaperSpriteComponent::execSetSprite)
	{
		P_GET_OBJECT(UPaperSprite,Z_Param_NewSprite);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetSprite(Z_Param_NewSprite);
		P_NATIVE_END;
	}
	void UPaperSpriteComponent::StaticRegisterNativesUPaperSpriteComponent()
	{
		UClass* Class = UPaperSpriteComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetSprite", &UPaperSpriteComponent::execGetSprite },
			{ "SetSprite", &UPaperSpriteComponent::execSetSprite },
			{ "SetSpriteColor", &UPaperSpriteComponent::execSetSpriteColor },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPaperSpriteComponent_GetSprite_Statics
	{
		struct PaperSpriteComponent_eventGetSprite_Parms
		{
			UPaperSprite* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPaperSpriteComponent_GetSprite_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PaperSpriteComponent_eventGetSprite_Parms, ReturnValue), Z_Construct_UClass_UPaperSprite_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPaperSpriteComponent_GetSprite_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperSpriteComponent_GetSprite_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPaperSpriteComponent_GetSprite_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sprite" },
		{ "Comment", "/** Gets the PaperSprite used by this instance. */" },
		{ "ModuleRelativePath", "Classes/PaperSpriteComponent.h" },
		{ "ToolTip", "Gets the PaperSprite used by this instance." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPaperSpriteComponent_GetSprite_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPaperSpriteComponent, nullptr, "GetSprite", nullptr, nullptr, sizeof(PaperSpriteComponent_eventGetSprite_Parms), Z_Construct_UFunction_UPaperSpriteComponent_GetSprite_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperSpriteComponent_GetSprite_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPaperSpriteComponent_GetSprite_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperSpriteComponent_GetSprite_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPaperSpriteComponent_GetSprite()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPaperSpriteComponent_GetSprite_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPaperSpriteComponent_SetSprite_Statics
	{
		struct PaperSpriteComponent_eventSetSprite_Parms
		{
			UPaperSprite* NewSprite;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewSprite;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UPaperSpriteComponent_SetSprite_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PaperSpriteComponent_eventSetSprite_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPaperSpriteComponent_SetSprite_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PaperSpriteComponent_eventSetSprite_Parms), &Z_Construct_UFunction_UPaperSpriteComponent_SetSprite_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPaperSpriteComponent_SetSprite_Statics::NewProp_NewSprite = { "NewSprite", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PaperSpriteComponent_eventSetSprite_Parms, NewSprite), Z_Construct_UClass_UPaperSprite_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPaperSpriteComponent_SetSprite_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperSpriteComponent_SetSprite_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperSpriteComponent_SetSprite_Statics::NewProp_NewSprite,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPaperSpriteComponent_SetSprite_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sprite" },
		{ "Comment", "/** Change the PaperSprite used by this instance. */" },
		{ "ModuleRelativePath", "Classes/PaperSpriteComponent.h" },
		{ "ToolTip", "Change the PaperSprite used by this instance." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPaperSpriteComponent_SetSprite_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPaperSpriteComponent, nullptr, "SetSprite", nullptr, nullptr, sizeof(PaperSpriteComponent_eventSetSprite_Parms), Z_Construct_UFunction_UPaperSpriteComponent_SetSprite_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperSpriteComponent_SetSprite_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPaperSpriteComponent_SetSprite_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperSpriteComponent_SetSprite_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPaperSpriteComponent_SetSprite()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPaperSpriteComponent_SetSprite_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPaperSpriteComponent_SetSpriteColor_Statics
	{
		struct PaperSpriteComponent_eventSetSpriteColor_Parms
		{
			FLinearColor NewColor;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewColor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPaperSpriteComponent_SetSpriteColor_Statics::NewProp_NewColor = { "NewColor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PaperSpriteComponent_eventSetSpriteColor_Parms, NewColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPaperSpriteComponent_SetSpriteColor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperSpriteComponent_SetSpriteColor_Statics::NewProp_NewColor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPaperSpriteComponent_SetSpriteColor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sprite" },
		{ "Comment", "/** Set color of the sprite */" },
		{ "ModuleRelativePath", "Classes/PaperSpriteComponent.h" },
		{ "ToolTip", "Set color of the sprite" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPaperSpriteComponent_SetSpriteColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPaperSpriteComponent, nullptr, "SetSpriteColor", nullptr, nullptr, sizeof(PaperSpriteComponent_eventSetSpriteColor_Parms), Z_Construct_UFunction_UPaperSpriteComponent_SetSpriteColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperSpriteComponent_SetSpriteColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPaperSpriteComponent_SetSpriteColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperSpriteComponent_SetSpriteColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPaperSpriteComponent_SetSpriteColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPaperSpriteComponent_SetSpriteColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPaperSpriteComponent_NoRegister()
	{
		return UPaperSpriteComponent::StaticClass();
	}
	struct Z_Construct_UClass_UPaperSpriteComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpriteColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SpriteColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaterialOverride_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MaterialOverride;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceSprite_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SourceSprite;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPaperSpriteComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMeshComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Paper2D,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPaperSpriteComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPaperSpriteComponent_GetSprite, "GetSprite" }, // 269192426
		{ &Z_Construct_UFunction_UPaperSpriteComponent_SetSprite, "SetSprite" }, // 1713230463
		{ &Z_Construct_UFunction_UPaperSpriteComponent_SetSpriteColor, "SetSpriteColor" }, // 3329682569
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperSpriteComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Paper2D" },
		{ "Comment", "/**\n * A component that handles rendering and collision for a single instance of a UPaperSprite asset.\n *\n * This component is created when you drag a sprite asset from the content browser into a Blueprint, or\n * contained inside of the actor created when you drag one into the level.\n *\n * @see UPrimitiveComponent, UPaperSprite\n */" },
		{ "HideCategories", "Trigger" },
		{ "IncludePath", "PaperSpriteComponent.h" },
		{ "ModuleRelativePath", "Classes/PaperSpriteComponent.h" },
		{ "ToolTip", "A component that handles rendering and collision for a single instance of a UPaperSprite asset.\n\nThis component is created when you drag a sprite asset from the content browser into a Blueprint, or\ncontained inside of the actor created when you drag one into the level.\n\n@see UPrimitiveComponent, UPaperSprite" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperSpriteComponent_Statics::NewProp_SpriteColor_MetaData[] = {
		{ "Category", "Sprite" },
		{ "Comment", "// The color of the sprite (passed to the sprite material as a vertex color)\n" },
		{ "ModuleRelativePath", "Classes/PaperSpriteComponent.h" },
		{ "ToolTip", "The color of the sprite (passed to the sprite material as a vertex color)" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPaperSpriteComponent_Statics::NewProp_SpriteColor = { "SpriteColor", nullptr, (EPropertyFlags)0x0020080200000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPaperSpriteComponent, SpriteColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UPaperSpriteComponent_Statics::NewProp_SpriteColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperSpriteComponent_Statics::NewProp_SpriteColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperSpriteComponent_Statics::NewProp_MaterialOverride_MetaData[] = {
		{ "Comment", "// DEPRECATED in 4.4: The material override for this sprite component (if any); replaced by the Materials array inherited from UMeshComponent\n" },
		{ "ModuleRelativePath", "Classes/PaperSpriteComponent.h" },
		{ "ToolTip", "DEPRECATED in 4.4: The material override for this sprite component (if any); replaced by the Materials array inherited from UMeshComponent" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPaperSpriteComponent_Statics::NewProp_MaterialOverride = { "MaterialOverride", nullptr, (EPropertyFlags)0x0020080020000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPaperSpriteComponent, MaterialOverride_DEPRECATED), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPaperSpriteComponent_Statics::NewProp_MaterialOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperSpriteComponent_Statics::NewProp_MaterialOverride_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperSpriteComponent_Statics::NewProp_SourceSprite_MetaData[] = {
		{ "Category", "Sprite" },
		{ "Comment", "// The sprite asset used by this component\n" },
		{ "DisplayThumbnail", "true" },
		{ "ModuleRelativePath", "Classes/PaperSpriteComponent.h" },
		{ "ToolTip", "The sprite asset used by this component" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPaperSpriteComponent_Statics::NewProp_SourceSprite = { "SourceSprite", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPaperSpriteComponent, SourceSprite), Z_Construct_UClass_UPaperSprite_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPaperSpriteComponent_Statics::NewProp_SourceSprite_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperSpriteComponent_Statics::NewProp_SourceSprite_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPaperSpriteComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperSpriteComponent_Statics::NewProp_SpriteColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperSpriteComponent_Statics::NewProp_MaterialOverride,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperSpriteComponent_Statics::NewProp_SourceSprite,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPaperSpriteComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPaperSpriteComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPaperSpriteComponent_Statics::ClassParams = {
		&UPaperSpriteComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPaperSpriteComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPaperSpriteComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UPaperSpriteComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperSpriteComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPaperSpriteComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPaperSpriteComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPaperSpriteComponent, 350089679);
	template<> PAPER2D_API UClass* StaticClass<UPaperSpriteComponent>()
	{
		return UPaperSpriteComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPaperSpriteComponent(Z_Construct_UClass_UPaperSpriteComponent, &UPaperSpriteComponent::StaticClass, TEXT("/Script/Paper2D"), TEXT("UPaperSpriteComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPaperSpriteComponent);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UPaperSpriteComponent)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
