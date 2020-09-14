// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Paper2D/Classes/PaperGroupedSpriteComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePaperGroupedSpriteComponent() {}
// Cross Module References
	PAPER2D_API UScriptStruct* Z_Construct_UScriptStruct_FSpriteInstanceData();
	UPackage* Z_Construct_UPackage__Script_Paper2D();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	PAPER2D_API UClass* Z_Construct_UClass_UPaperSprite_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FMatrix();
	PAPER2D_API UClass* Z_Construct_UClass_UPaperGroupedSpriteComponent_NoRegister();
	PAPER2D_API UClass* Z_Construct_UClass_UPaperGroupedSpriteComponent();
	ENGINE_API UClass* Z_Construct_UClass_UMeshComponent();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
// End Cross Module References
class UScriptStruct* FSpriteInstanceData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PAPER2D_API uint32 Get_Z_Construct_UScriptStruct_FSpriteInstanceData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSpriteInstanceData, Z_Construct_UPackage__Script_Paper2D(), TEXT("SpriteInstanceData"), sizeof(FSpriteInstanceData), Get_Z_Construct_UScriptStruct_FSpriteInstanceData_Hash());
	}
	return Singleton;
}
template<> PAPER2D_API UScriptStruct* StaticStruct<FSpriteInstanceData>()
{
	return FSpriteInstanceData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSpriteInstanceData(FSpriteInstanceData::StaticStruct, TEXT("/Script/Paper2D"), TEXT("SpriteInstanceData"), false, nullptr, nullptr);
static struct FScriptStruct_Paper2D_StaticRegisterNativesFSpriteInstanceData
{
	FScriptStruct_Paper2D_StaticRegisterNativesFSpriteInstanceData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SpriteInstanceData")),new UScriptStruct::TCppStructOps<FSpriteInstanceData>);
	}
} ScriptStruct_Paper2D_StaticRegisterNativesFSpriteInstanceData;
	struct Z_Construct_UScriptStruct_FSpriteInstanceData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaterialIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaterialIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VertexColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VertexColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceSprite_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SourceSprite;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Transform;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpriteInstanceData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/PaperGroupedSpriteComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSpriteInstanceData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSpriteInstanceData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpriteInstanceData_Statics::NewProp_MaterialIndex_MetaData[] = {
		{ "Category", "Instances" },
		{ "ModuleRelativePath", "Classes/PaperGroupedSpriteComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSpriteInstanceData_Statics::NewProp_MaterialIndex = { "MaterialIndex", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSpriteInstanceData, MaterialIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FSpriteInstanceData_Statics::NewProp_MaterialIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpriteInstanceData_Statics::NewProp_MaterialIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpriteInstanceData_Statics::NewProp_VertexColor_MetaData[] = {
		{ "Category", "Instances" },
		{ "ModuleRelativePath", "Classes/PaperGroupedSpriteComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSpriteInstanceData_Statics::NewProp_VertexColor = { "VertexColor", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSpriteInstanceData, VertexColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FSpriteInstanceData_Statics::NewProp_VertexColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpriteInstanceData_Statics::NewProp_VertexColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpriteInstanceData_Statics::NewProp_SourceSprite_MetaData[] = {
		{ "Category", "Instances" },
		{ "ModuleRelativePath", "Classes/PaperGroupedSpriteComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSpriteInstanceData_Statics::NewProp_SourceSprite = { "SourceSprite", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSpriteInstanceData, SourceSprite), Z_Construct_UClass_UPaperSprite_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSpriteInstanceData_Statics::NewProp_SourceSprite_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpriteInstanceData_Statics::NewProp_SourceSprite_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpriteInstanceData_Statics::NewProp_Transform_MetaData[] = {
		{ "Category", "Instances" },
		{ "ModuleRelativePath", "Classes/PaperGroupedSpriteComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSpriteInstanceData_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSpriteInstanceData, Transform), Z_Construct_UScriptStruct_FMatrix, METADATA_PARAMS(Z_Construct_UScriptStruct_FSpriteInstanceData_Statics::NewProp_Transform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpriteInstanceData_Statics::NewProp_Transform_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSpriteInstanceData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpriteInstanceData_Statics::NewProp_MaterialIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpriteInstanceData_Statics::NewProp_VertexColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpriteInstanceData_Statics::NewProp_SourceSprite,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpriteInstanceData_Statics::NewProp_Transform,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSpriteInstanceData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Paper2D,
		nullptr,
		&NewStructOps,
		"SpriteInstanceData",
		sizeof(FSpriteInstanceData),
		alignof(FSpriteInstanceData),
		Z_Construct_UScriptStruct_FSpriteInstanceData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpriteInstanceData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSpriteInstanceData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpriteInstanceData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSpriteInstanceData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSpriteInstanceData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Paper2D();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SpriteInstanceData"), sizeof(FSpriteInstanceData), Get_Z_Construct_UScriptStruct_FSpriteInstanceData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSpriteInstanceData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSpriteInstanceData_Hash() { return 1254453369U; }
	DEFINE_FUNCTION(UPaperGroupedSpriteComponent::execSortInstancesAlongAxis)
	{
		P_GET_STRUCT(FVector,Z_Param_WorldSpaceSortAxis);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SortInstancesAlongAxis(Z_Param_WorldSpaceSortAxis);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPaperGroupedSpriteComponent::execGetInstanceCount)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetInstanceCount();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPaperGroupedSpriteComponent::execClearInstances)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearInstances();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPaperGroupedSpriteComponent::execRemoveInstance)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InstanceIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RemoveInstance(Z_Param_InstanceIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPaperGroupedSpriteComponent::execUpdateInstanceColor)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InstanceIndex);
		P_GET_STRUCT(FLinearColor,Z_Param_NewInstanceColor);
		P_GET_UBOOL(Z_Param_bMarkRenderStateDirty);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->UpdateInstanceColor(Z_Param_InstanceIndex,Z_Param_NewInstanceColor,Z_Param_bMarkRenderStateDirty);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPaperGroupedSpriteComponent::execUpdateInstanceTransform)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InstanceIndex);
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_NewInstanceTransform);
		P_GET_UBOOL(Z_Param_bWorldSpace);
		P_GET_UBOOL(Z_Param_bMarkRenderStateDirty);
		P_GET_UBOOL(Z_Param_bTeleport);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->UpdateInstanceTransform(Z_Param_InstanceIndex,Z_Param_Out_NewInstanceTransform,Z_Param_bWorldSpace,Z_Param_bMarkRenderStateDirty,Z_Param_bTeleport);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPaperGroupedSpriteComponent::execGetInstanceTransform)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InstanceIndex);
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_OutInstanceTransform);
		P_GET_UBOOL(Z_Param_bWorldSpace);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetInstanceTransform(Z_Param_InstanceIndex,Z_Param_Out_OutInstanceTransform,Z_Param_bWorldSpace);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPaperGroupedSpriteComponent::execAddInstance)
	{
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_Transform);
		P_GET_OBJECT(UPaperSprite,Z_Param_Sprite);
		P_GET_UBOOL(Z_Param_bWorldSpace);
		P_GET_STRUCT(FLinearColor,Z_Param_Color);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->AddInstance(Z_Param_Out_Transform,Z_Param_Sprite,Z_Param_bWorldSpace,Z_Param_Color);
		P_NATIVE_END;
	}
	void UPaperGroupedSpriteComponent::StaticRegisterNativesUPaperGroupedSpriteComponent()
	{
		UClass* Class = UPaperGroupedSpriteComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddInstance", &UPaperGroupedSpriteComponent::execAddInstance },
			{ "ClearInstances", &UPaperGroupedSpriteComponent::execClearInstances },
			{ "GetInstanceCount", &UPaperGroupedSpriteComponent::execGetInstanceCount },
			{ "GetInstanceTransform", &UPaperGroupedSpriteComponent::execGetInstanceTransform },
			{ "RemoveInstance", &UPaperGroupedSpriteComponent::execRemoveInstance },
			{ "SortInstancesAlongAxis", &UPaperGroupedSpriteComponent::execSortInstancesAlongAxis },
			{ "UpdateInstanceColor", &UPaperGroupedSpriteComponent::execUpdateInstanceColor },
			{ "UpdateInstanceTransform", &UPaperGroupedSpriteComponent::execUpdateInstanceTransform },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPaperGroupedSpriteComponent_AddInstance_Statics
	{
		struct PaperGroupedSpriteComponent_eventAddInstance_Parms
		{
			FTransform Transform;
			UPaperSprite* Sprite;
			bool bWorldSpace;
			FLinearColor Color;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Color;
		static void NewProp_bWorldSpace_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWorldSpace;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Sprite;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Transform;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPaperGroupedSpriteComponent_AddInstance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PaperGroupedSpriteComponent_eventAddInstance_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPaperGroupedSpriteComponent_AddInstance_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PaperGroupedSpriteComponent_eventAddInstance_Parms, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPaperGroupedSpriteComponent_AddInstance_Statics::NewProp_bWorldSpace_SetBit(void* Obj)
	{
		((PaperGroupedSpriteComponent_eventAddInstance_Parms*)Obj)->bWorldSpace = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPaperGroupedSpriteComponent_AddInstance_Statics::NewProp_bWorldSpace = { "bWorldSpace", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PaperGroupedSpriteComponent_eventAddInstance_Parms), &Z_Construct_UFunction_UPaperGroupedSpriteComponent_AddInstance_Statics::NewProp_bWorldSpace_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPaperGroupedSpriteComponent_AddInstance_Statics::NewProp_Sprite = { "Sprite", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PaperGroupedSpriteComponent_eventAddInstance_Parms, Sprite), Z_Construct_UClass_UPaperSprite_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPaperGroupedSpriteComponent_AddInstance_Statics::NewProp_Transform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPaperGroupedSpriteComponent_AddInstance_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PaperGroupedSpriteComponent_eventAddInstance_Parms, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_UPaperGroupedSpriteComponent_AddInstance_Statics::NewProp_Transform_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperGroupedSpriteComponent_AddInstance_Statics::NewProp_Transform_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPaperGroupedSpriteComponent_AddInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperGroupedSpriteComponent_AddInstance_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperGroupedSpriteComponent_AddInstance_Statics::NewProp_Color,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperGroupedSpriteComponent_AddInstance_Statics::NewProp_bWorldSpace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperGroupedSpriteComponent_AddInstance_Statics::NewProp_Sprite,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperGroupedSpriteComponent_AddInstance_Statics::NewProp_Transform,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPaperGroupedSpriteComponent_AddInstance_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Sprite" },
		{ "Comment", "/** Add an instance to this component. Transform can be given either in the local space of this component or world space.  */" },
		{ "CPP_Default_bWorldSpace", "false" },
		{ "CPP_Default_Color", "(R=1.000000,G=1.000000,B=1.000000,A=1.000000)" },
		{ "ModuleRelativePath", "Classes/PaperGroupedSpriteComponent.h" },
		{ "ToolTip", "Add an instance to this component. Transform can be given either in the local space of this component or world space." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPaperGroupedSpriteComponent_AddInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPaperGroupedSpriteComponent, nullptr, "AddInstance", nullptr, nullptr, sizeof(PaperGroupedSpriteComponent_eventAddInstance_Parms), Z_Construct_UFunction_UPaperGroupedSpriteComponent_AddInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperGroupedSpriteComponent_AddInstance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPaperGroupedSpriteComponent_AddInstance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperGroupedSpriteComponent_AddInstance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPaperGroupedSpriteComponent_AddInstance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPaperGroupedSpriteComponent_AddInstance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPaperGroupedSpriteComponent_ClearInstances_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPaperGroupedSpriteComponent_ClearInstances_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Sprite" },
		{ "Comment", "/** Clear all instances being rendered by this component */" },
		{ "ModuleRelativePath", "Classes/PaperGroupedSpriteComponent.h" },
		{ "ToolTip", "Clear all instances being rendered by this component" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPaperGroupedSpriteComponent_ClearInstances_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPaperGroupedSpriteComponent, nullptr, "ClearInstances", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPaperGroupedSpriteComponent_ClearInstances_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperGroupedSpriteComponent_ClearInstances_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPaperGroupedSpriteComponent_ClearInstances()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPaperGroupedSpriteComponent_ClearInstances_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPaperGroupedSpriteComponent_GetInstanceCount_Statics
	{
		struct PaperGroupedSpriteComponent_eventGetInstanceCount_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPaperGroupedSpriteComponent_GetInstanceCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PaperGroupedSpriteComponent_eventGetInstanceCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPaperGroupedSpriteComponent_GetInstanceCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperGroupedSpriteComponent_GetInstanceCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPaperGroupedSpriteComponent_GetInstanceCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Sprite" },
		{ "Comment", "/** Get the number of instances in this component */" },
		{ "ModuleRelativePath", "Classes/PaperGroupedSpriteComponent.h" },
		{ "ToolTip", "Get the number of instances in this component" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPaperGroupedSpriteComponent_GetInstanceCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPaperGroupedSpriteComponent, nullptr, "GetInstanceCount", nullptr, nullptr, sizeof(PaperGroupedSpriteComponent_eventGetInstanceCount_Parms), Z_Construct_UFunction_UPaperGroupedSpriteComponent_GetInstanceCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperGroupedSpriteComponent_GetInstanceCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPaperGroupedSpriteComponent_GetInstanceCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperGroupedSpriteComponent_GetInstanceCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPaperGroupedSpriteComponent_GetInstanceCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPaperGroupedSpriteComponent_GetInstanceCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPaperGroupedSpriteComponent_GetInstanceTransform_Statics
	{
		struct PaperGroupedSpriteComponent_eventGetInstanceTransform_Parms
		{
			int32 InstanceIndex;
			FTransform OutInstanceTransform;
			bool bWorldSpace;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static void NewProp_bWorldSpace_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWorldSpace;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutInstanceTransform;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InstanceIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UPaperGroupedSpriteComponent_GetInstanceTransform_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PaperGroupedSpriteComponent_eventGetInstanceTransform_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPaperGroupedSpriteComponent_GetInstanceTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PaperGroupedSpriteComponent_eventGetInstanceTransform_Parms), &Z_Construct_UFunction_UPaperGroupedSpriteComponent_GetInstanceTransform_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPaperGroupedSpriteComponent_GetInstanceTransform_Statics::NewProp_bWorldSpace_SetBit(void* Obj)
	{
		((PaperGroupedSpriteComponent_eventGetInstanceTransform_Parms*)Obj)->bWorldSpace = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPaperGroupedSpriteComponent_GetInstanceTransform_Statics::NewProp_bWorldSpace = { "bWorldSpace", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PaperGroupedSpriteComponent_eventGetInstanceTransform_Parms), &Z_Construct_UFunction_UPaperGroupedSpriteComponent_GetInstanceTransform_Statics::NewProp_bWorldSpace_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPaperGroupedSpriteComponent_GetInstanceTransform_Statics::NewProp_OutInstanceTransform = { "OutInstanceTransform", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PaperGroupedSpriteComponent_eventGetInstanceTransform_Parms, OutInstanceTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPaperGroupedSpriteComponent_GetInstanceTransform_Statics::NewProp_InstanceIndex = { "InstanceIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PaperGroupedSpriteComponent_eventGetInstanceTransform_Parms, InstanceIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPaperGroupedSpriteComponent_GetInstanceTransform_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperGroupedSpriteComponent_GetInstanceTransform_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperGroupedSpriteComponent_GetInstanceTransform_Statics::NewProp_bWorldSpace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperGroupedSpriteComponent_GetInstanceTransform_Statics::NewProp_OutInstanceTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperGroupedSpriteComponent_GetInstanceTransform_Statics::NewProp_InstanceIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPaperGroupedSpriteComponent_GetInstanceTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Sprite" },
		{ "Comment", "/** Get the transform for the instance specified. Instance is returned in local space of this component unless bWorldSpace is set.  Returns True on success. */" },
		{ "CPP_Default_bWorldSpace", "false" },
		{ "ModuleRelativePath", "Classes/PaperGroupedSpriteComponent.h" },
		{ "ToolTip", "Get the transform for the instance specified. Instance is returned in local space of this component unless bWorldSpace is set.  Returns True on success." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPaperGroupedSpriteComponent_GetInstanceTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPaperGroupedSpriteComponent, nullptr, "GetInstanceTransform", nullptr, nullptr, sizeof(PaperGroupedSpriteComponent_eventGetInstanceTransform_Parms), Z_Construct_UFunction_UPaperGroupedSpriteComponent_GetInstanceTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperGroupedSpriteComponent_GetInstanceTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPaperGroupedSpriteComponent_GetInstanceTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperGroupedSpriteComponent_GetInstanceTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPaperGroupedSpriteComponent_GetInstanceTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPaperGroupedSpriteComponent_GetInstanceTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPaperGroupedSpriteComponent_RemoveInstance_Statics
	{
		struct PaperGroupedSpriteComponent_eventRemoveInstance_Parms
		{
			int32 InstanceIndex;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InstanceIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UPaperGroupedSpriteComponent_RemoveInstance_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PaperGroupedSpriteComponent_eventRemoveInstance_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPaperGroupedSpriteComponent_RemoveInstance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PaperGroupedSpriteComponent_eventRemoveInstance_Parms), &Z_Construct_UFunction_UPaperGroupedSpriteComponent_RemoveInstance_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPaperGroupedSpriteComponent_RemoveInstance_Statics::NewProp_InstanceIndex = { "InstanceIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PaperGroupedSpriteComponent_eventRemoveInstance_Parms, InstanceIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPaperGroupedSpriteComponent_RemoveInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperGroupedSpriteComponent_RemoveInstance_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperGroupedSpriteComponent_RemoveInstance_Statics::NewProp_InstanceIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPaperGroupedSpriteComponent_RemoveInstance_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Sprite" },
		{ "Comment", "/** Remove the instance specified. Returns True on success. */" },
		{ "ModuleRelativePath", "Classes/PaperGroupedSpriteComponent.h" },
		{ "ToolTip", "Remove the instance specified. Returns True on success." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPaperGroupedSpriteComponent_RemoveInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPaperGroupedSpriteComponent, nullptr, "RemoveInstance", nullptr, nullptr, sizeof(PaperGroupedSpriteComponent_eventRemoveInstance_Parms), Z_Construct_UFunction_UPaperGroupedSpriteComponent_RemoveInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperGroupedSpriteComponent_RemoveInstance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPaperGroupedSpriteComponent_RemoveInstance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperGroupedSpriteComponent_RemoveInstance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPaperGroupedSpriteComponent_RemoveInstance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPaperGroupedSpriteComponent_RemoveInstance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPaperGroupedSpriteComponent_SortInstancesAlongAxis_Statics
	{
		struct PaperGroupedSpriteComponent_eventSortInstancesAlongAxis_Parms
		{
			FVector WorldSpaceSortAxis;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WorldSpaceSortAxis;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPaperGroupedSpriteComponent_SortInstancesAlongAxis_Statics::NewProp_WorldSpaceSortAxis = { "WorldSpaceSortAxis", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PaperGroupedSpriteComponent_eventSortInstancesAlongAxis_Parms, WorldSpaceSortAxis), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPaperGroupedSpriteComponent_SortInstancesAlongAxis_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperGroupedSpriteComponent_SortInstancesAlongAxis_Statics::NewProp_WorldSpaceSortAxis,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPaperGroupedSpriteComponent_SortInstancesAlongAxis_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Sprite" },
		{ "Comment", "/** Sort all instances by their world space position along the specified axis */" },
		{ "ModuleRelativePath", "Classes/PaperGroupedSpriteComponent.h" },
		{ "ToolTip", "Sort all instances by their world space position along the specified axis" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPaperGroupedSpriteComponent_SortInstancesAlongAxis_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPaperGroupedSpriteComponent, nullptr, "SortInstancesAlongAxis", nullptr, nullptr, sizeof(PaperGroupedSpriteComponent_eventSortInstancesAlongAxis_Parms), Z_Construct_UFunction_UPaperGroupedSpriteComponent_SortInstancesAlongAxis_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperGroupedSpriteComponent_SortInstancesAlongAxis_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPaperGroupedSpriteComponent_SortInstancesAlongAxis_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperGroupedSpriteComponent_SortInstancesAlongAxis_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPaperGroupedSpriteComponent_SortInstancesAlongAxis()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPaperGroupedSpriteComponent_SortInstancesAlongAxis_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPaperGroupedSpriteComponent_UpdateInstanceColor_Statics
	{
		struct PaperGroupedSpriteComponent_eventUpdateInstanceColor_Parms
		{
			int32 InstanceIndex;
			FLinearColor NewInstanceColor;
			bool bMarkRenderStateDirty;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static void NewProp_bMarkRenderStateDirty_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMarkRenderStateDirty;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewInstanceColor;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InstanceIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UPaperGroupedSpriteComponent_UpdateInstanceColor_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PaperGroupedSpriteComponent_eventUpdateInstanceColor_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPaperGroupedSpriteComponent_UpdateInstanceColor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PaperGroupedSpriteComponent_eventUpdateInstanceColor_Parms), &Z_Construct_UFunction_UPaperGroupedSpriteComponent_UpdateInstanceColor_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPaperGroupedSpriteComponent_UpdateInstanceColor_Statics::NewProp_bMarkRenderStateDirty_SetBit(void* Obj)
	{
		((PaperGroupedSpriteComponent_eventUpdateInstanceColor_Parms*)Obj)->bMarkRenderStateDirty = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPaperGroupedSpriteComponent_UpdateInstanceColor_Statics::NewProp_bMarkRenderStateDirty = { "bMarkRenderStateDirty", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PaperGroupedSpriteComponent_eventUpdateInstanceColor_Parms), &Z_Construct_UFunction_UPaperGroupedSpriteComponent_UpdateInstanceColor_Statics::NewProp_bMarkRenderStateDirty_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPaperGroupedSpriteComponent_UpdateInstanceColor_Statics::NewProp_NewInstanceColor = { "NewInstanceColor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PaperGroupedSpriteComponent_eventUpdateInstanceColor_Parms, NewInstanceColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPaperGroupedSpriteComponent_UpdateInstanceColor_Statics::NewProp_InstanceIndex = { "InstanceIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PaperGroupedSpriteComponent_eventUpdateInstanceColor_Parms, InstanceIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPaperGroupedSpriteComponent_UpdateInstanceColor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperGroupedSpriteComponent_UpdateInstanceColor_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperGroupedSpriteComponent_UpdateInstanceColor_Statics::NewProp_bMarkRenderStateDirty,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperGroupedSpriteComponent_UpdateInstanceColor_Statics::NewProp_NewInstanceColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperGroupedSpriteComponent_UpdateInstanceColor_Statics::NewProp_InstanceIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPaperGroupedSpriteComponent_UpdateInstanceColor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Sprite" },
		{ "Comment", "/** Update the color for the instance specified. Returns True on success. */" },
		{ "CPP_Default_bMarkRenderStateDirty", "true" },
		{ "ModuleRelativePath", "Classes/PaperGroupedSpriteComponent.h" },
		{ "ToolTip", "Update the color for the instance specified. Returns True on success." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPaperGroupedSpriteComponent_UpdateInstanceColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPaperGroupedSpriteComponent, nullptr, "UpdateInstanceColor", nullptr, nullptr, sizeof(PaperGroupedSpriteComponent_eventUpdateInstanceColor_Parms), Z_Construct_UFunction_UPaperGroupedSpriteComponent_UpdateInstanceColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperGroupedSpriteComponent_UpdateInstanceColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPaperGroupedSpriteComponent_UpdateInstanceColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperGroupedSpriteComponent_UpdateInstanceColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPaperGroupedSpriteComponent_UpdateInstanceColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPaperGroupedSpriteComponent_UpdateInstanceColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPaperGroupedSpriteComponent_UpdateInstanceTransform_Statics
	{
		struct PaperGroupedSpriteComponent_eventUpdateInstanceTransform_Parms
		{
			int32 InstanceIndex;
			FTransform NewInstanceTransform;
			bool bWorldSpace;
			bool bMarkRenderStateDirty;
			bool bTeleport;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static void NewProp_bTeleport_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTeleport;
		static void NewProp_bMarkRenderStateDirty_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMarkRenderStateDirty;
		static void NewProp_bWorldSpace_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWorldSpace;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewInstanceTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewInstanceTransform;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InstanceIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UPaperGroupedSpriteComponent_UpdateInstanceTransform_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PaperGroupedSpriteComponent_eventUpdateInstanceTransform_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPaperGroupedSpriteComponent_UpdateInstanceTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PaperGroupedSpriteComponent_eventUpdateInstanceTransform_Parms), &Z_Construct_UFunction_UPaperGroupedSpriteComponent_UpdateInstanceTransform_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPaperGroupedSpriteComponent_UpdateInstanceTransform_Statics::NewProp_bTeleport_SetBit(void* Obj)
	{
		((PaperGroupedSpriteComponent_eventUpdateInstanceTransform_Parms*)Obj)->bTeleport = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPaperGroupedSpriteComponent_UpdateInstanceTransform_Statics::NewProp_bTeleport = { "bTeleport", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PaperGroupedSpriteComponent_eventUpdateInstanceTransform_Parms), &Z_Construct_UFunction_UPaperGroupedSpriteComponent_UpdateInstanceTransform_Statics::NewProp_bTeleport_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPaperGroupedSpriteComponent_UpdateInstanceTransform_Statics::NewProp_bMarkRenderStateDirty_SetBit(void* Obj)
	{
		((PaperGroupedSpriteComponent_eventUpdateInstanceTransform_Parms*)Obj)->bMarkRenderStateDirty = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPaperGroupedSpriteComponent_UpdateInstanceTransform_Statics::NewProp_bMarkRenderStateDirty = { "bMarkRenderStateDirty", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PaperGroupedSpriteComponent_eventUpdateInstanceTransform_Parms), &Z_Construct_UFunction_UPaperGroupedSpriteComponent_UpdateInstanceTransform_Statics::NewProp_bMarkRenderStateDirty_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPaperGroupedSpriteComponent_UpdateInstanceTransform_Statics::NewProp_bWorldSpace_SetBit(void* Obj)
	{
		((PaperGroupedSpriteComponent_eventUpdateInstanceTransform_Parms*)Obj)->bWorldSpace = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPaperGroupedSpriteComponent_UpdateInstanceTransform_Statics::NewProp_bWorldSpace = { "bWorldSpace", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PaperGroupedSpriteComponent_eventUpdateInstanceTransform_Parms), &Z_Construct_UFunction_UPaperGroupedSpriteComponent_UpdateInstanceTransform_Statics::NewProp_bWorldSpace_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPaperGroupedSpriteComponent_UpdateInstanceTransform_Statics::NewProp_NewInstanceTransform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPaperGroupedSpriteComponent_UpdateInstanceTransform_Statics::NewProp_NewInstanceTransform = { "NewInstanceTransform", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PaperGroupedSpriteComponent_eventUpdateInstanceTransform_Parms, NewInstanceTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_UPaperGroupedSpriteComponent_UpdateInstanceTransform_Statics::NewProp_NewInstanceTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperGroupedSpriteComponent_UpdateInstanceTransform_Statics::NewProp_NewInstanceTransform_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPaperGroupedSpriteComponent_UpdateInstanceTransform_Statics::NewProp_InstanceIndex = { "InstanceIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PaperGroupedSpriteComponent_eventUpdateInstanceTransform_Parms, InstanceIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPaperGroupedSpriteComponent_UpdateInstanceTransform_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperGroupedSpriteComponent_UpdateInstanceTransform_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperGroupedSpriteComponent_UpdateInstanceTransform_Statics::NewProp_bTeleport,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperGroupedSpriteComponent_UpdateInstanceTransform_Statics::NewProp_bMarkRenderStateDirty,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperGroupedSpriteComponent_UpdateInstanceTransform_Statics::NewProp_bWorldSpace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperGroupedSpriteComponent_UpdateInstanceTransform_Statics::NewProp_NewInstanceTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperGroupedSpriteComponent_UpdateInstanceTransform_Statics::NewProp_InstanceIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPaperGroupedSpriteComponent_UpdateInstanceTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Sprite" },
		{ "Comment", "/** Update the transform for the instance specified. Instance is given in local space of this component unless bWorldSpace is set.  Returns True on success. */" },
		{ "CPP_Default_bMarkRenderStateDirty", "true" },
		{ "CPP_Default_bTeleport", "false" },
		{ "CPP_Default_bWorldSpace", "false" },
		{ "ModuleRelativePath", "Classes/PaperGroupedSpriteComponent.h" },
		{ "ToolTip", "Update the transform for the instance specified. Instance is given in local space of this component unless bWorldSpace is set.  Returns True on success." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPaperGroupedSpriteComponent_UpdateInstanceTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPaperGroupedSpriteComponent, nullptr, "UpdateInstanceTransform", nullptr, nullptr, sizeof(PaperGroupedSpriteComponent_eventUpdateInstanceTransform_Parms), Z_Construct_UFunction_UPaperGroupedSpriteComponent_UpdateInstanceTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperGroupedSpriteComponent_UpdateInstanceTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPaperGroupedSpriteComponent_UpdateInstanceTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperGroupedSpriteComponent_UpdateInstanceTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPaperGroupedSpriteComponent_UpdateInstanceTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPaperGroupedSpriteComponent_UpdateInstanceTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPaperGroupedSpriteComponent_NoRegister()
	{
		return UPaperGroupedSpriteComponent::StaticClass();
	}
	struct Z_Construct_UClass_UPaperGroupedSpriteComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PerInstanceSpriteData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PerInstanceSpriteData;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PerInstanceSpriteData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InstanceMaterials_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InstanceMaterials;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InstanceMaterials_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPaperGroupedSpriteComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMeshComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Paper2D,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPaperGroupedSpriteComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPaperGroupedSpriteComponent_AddInstance, "AddInstance" }, // 2942831274
		{ &Z_Construct_UFunction_UPaperGroupedSpriteComponent_ClearInstances, "ClearInstances" }, // 2902490314
		{ &Z_Construct_UFunction_UPaperGroupedSpriteComponent_GetInstanceCount, "GetInstanceCount" }, // 2411938736
		{ &Z_Construct_UFunction_UPaperGroupedSpriteComponent_GetInstanceTransform, "GetInstanceTransform" }, // 1301184502
		{ &Z_Construct_UFunction_UPaperGroupedSpriteComponent_RemoveInstance, "RemoveInstance" }, // 1550799230
		{ &Z_Construct_UFunction_UPaperGroupedSpriteComponent_SortInstancesAlongAxis, "SortInstancesAlongAxis" }, // 3352067271
		{ &Z_Construct_UFunction_UPaperGroupedSpriteComponent_UpdateInstanceColor, "UpdateInstanceColor" }, // 3708659918
		{ &Z_Construct_UFunction_UPaperGroupedSpriteComponent_UpdateInstanceTransform, "UpdateInstanceTransform" }, // 1668893978
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperGroupedSpriteComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Paper2D" },
		{ "Comment", "/**\n * A component that handles rendering and collision for many instances of one or more UPaperSprite assets.\n *\n * @see UPrimitiveComponent, UPaperSprite\n */" },
		{ "DevelopmentStatus", "EarlyAccess" },
		{ "HideCategories", "Trigger" },
		{ "IncludePath", "PaperGroupedSpriteComponent.h" },
		{ "ModuleRelativePath", "Classes/PaperGroupedSpriteComponent.h" },
		{ "ToolTip", "A component that handles rendering and collision for many instances of one or more UPaperSprite assets.\n\n@see UPrimitiveComponent, UPaperSprite" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperGroupedSpriteComponent_Statics::NewProp_PerInstanceSpriteData_MetaData[] = {
		{ "Category", "Instances" },
		{ "Comment", "/** Array of instances */" },
		{ "DisplayName", "Instances" },
		{ "MakeEditWidget", "TRUE" },
		{ "ModuleRelativePath", "Classes/PaperGroupedSpriteComponent.h" },
		{ "ToolTip", "Array of instances" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPaperGroupedSpriteComponent_Statics::NewProp_PerInstanceSpriteData = { "PerInstanceSpriteData", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPaperGroupedSpriteComponent, PerInstanceSpriteData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPaperGroupedSpriteComponent_Statics::NewProp_PerInstanceSpriteData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperGroupedSpriteComponent_Statics::NewProp_PerInstanceSpriteData_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPaperGroupedSpriteComponent_Statics::NewProp_PerInstanceSpriteData_Inner = { "PerInstanceSpriteData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSpriteInstanceData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperGroupedSpriteComponent_Statics::NewProp_InstanceMaterials_MetaData[] = {
		{ "Comment", "/** Array of materials used by the instances */" },
		{ "ModuleRelativePath", "Classes/PaperGroupedSpriteComponent.h" },
		{ "ToolTip", "Array of materials used by the instances" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPaperGroupedSpriteComponent_Statics::NewProp_InstanceMaterials = { "InstanceMaterials", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPaperGroupedSpriteComponent, InstanceMaterials), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPaperGroupedSpriteComponent_Statics::NewProp_InstanceMaterials_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperGroupedSpriteComponent_Statics::NewProp_InstanceMaterials_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPaperGroupedSpriteComponent_Statics::NewProp_InstanceMaterials_Inner = { "InstanceMaterials", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPaperGroupedSpriteComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperGroupedSpriteComponent_Statics::NewProp_PerInstanceSpriteData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperGroupedSpriteComponent_Statics::NewProp_PerInstanceSpriteData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperGroupedSpriteComponent_Statics::NewProp_InstanceMaterials,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperGroupedSpriteComponent_Statics::NewProp_InstanceMaterials_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPaperGroupedSpriteComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPaperGroupedSpriteComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPaperGroupedSpriteComponent_Statics::ClassParams = {
		&UPaperGroupedSpriteComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPaperGroupedSpriteComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPaperGroupedSpriteComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UPaperGroupedSpriteComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperGroupedSpriteComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPaperGroupedSpriteComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPaperGroupedSpriteComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPaperGroupedSpriteComponent, 959753890);
	template<> PAPER2D_API UClass* StaticClass<UPaperGroupedSpriteComponent>()
	{
		return UPaperGroupedSpriteComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPaperGroupedSpriteComponent(Z_Construct_UClass_UPaperGroupedSpriteComponent, &UPaperGroupedSpriteComponent::StaticClass, TEXT("/Script/Paper2D"), TEXT("UPaperGroupedSpriteComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPaperGroupedSpriteComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
