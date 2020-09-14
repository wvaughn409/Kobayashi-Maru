// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemUtils/Public/VoipListenerSynthComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoipListenerSynthComponent() {}
// Cross Module References
	ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_UVoipListenerSynthComponent_NoRegister();
	ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_UVoipListenerSynthComponent();
	AUDIOMIXER_API UClass* Z_Construct_UClass_USynthComponent();
	UPackage* Z_Construct_UPackage__Script_OnlineSubsystemUtils();
// End Cross Module References
	DEFINE_FUNCTION(UVoipListenerSynthComponent::execIsIdling)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsIdling();
		P_NATIVE_END;
	}
	void UVoipListenerSynthComponent::StaticRegisterNativesUVoipListenerSynthComponent()
	{
		UClass* Class = UVoipListenerSynthComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsIdling", &UVoipListenerSynthComponent::execIsIdling },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVoipListenerSynthComponent_IsIdling_Statics
	{
		struct VoipListenerSynthComponent_eventIsIdling_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVoipListenerSynthComponent_IsIdling_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VoipListenerSynthComponent_eventIsIdling_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoipListenerSynthComponent_IsIdling_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoipListenerSynthComponent_eventIsIdling_Parms), &Z_Construct_UFunction_UVoipListenerSynthComponent_IsIdling_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoipListenerSynthComponent_IsIdling_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoipListenerSynthComponent_IsIdling_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoipListenerSynthComponent_IsIdling_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Voice|Sender" },
		{ "Comment", "/*\n\x09 * Thread safe way to get whether this synth component still has buffered packets of audio to play back.\n\x09 * This function is used by the Voice Engine to clean up voice sounds when they are not playing back audio\n\x09 * to make space for other sounds to be rendered.\n\n\x09 * @returns true if this synth component is out of audio to play. \n\x09 */" },
		{ "ModuleRelativePath", "Public/VoipListenerSynthComponent.h" },
		{ "ToolTip", "* Thread safe way to get whether this synth component still has buffered packets of audio to play back.\n* This function is used by the Voice Engine to clean up voice sounds when they are not playing back audio\n* to make space for other sounds to be rendered.\n\n* @returns true if this synth component is out of audio to play." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoipListenerSynthComponent_IsIdling_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoipListenerSynthComponent, nullptr, "IsIdling", nullptr, nullptr, sizeof(VoipListenerSynthComponent_eventIsIdling_Parms), Z_Construct_UFunction_UVoipListenerSynthComponent_IsIdling_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoipListenerSynthComponent_IsIdling_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoipListenerSynthComponent_IsIdling_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoipListenerSynthComponent_IsIdling_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoipListenerSynthComponent_IsIdling()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoipListenerSynthComponent_IsIdling_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UVoipListenerSynthComponent_NoRegister()
	{
		return UVoipListenerSynthComponent::StaticClass();
	}
	struct Z_Construct_UClass_UVoipListenerSynthComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoipListenerSynthComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USynthComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemUtils,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UVoipListenerSynthComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVoipListenerSynthComponent_IsIdling, "IsIdling" }, // 1395366301
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoipListenerSynthComponent_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object ActorComponent Physics Rendering Mobility LOD Trigger PhysicsVolume" },
		{ "IncludePath", "VoipListenerSynthComponent.h" },
		{ "ModuleRelativePath", "Public/VoipListenerSynthComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoipListenerSynthComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoipListenerSynthComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoipListenerSynthComponent_Statics::ClassParams = {
		&UVoipListenerSynthComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UVoipListenerSynthComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoipListenerSynthComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoipListenerSynthComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoipListenerSynthComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoipListenerSynthComponent, 1501562611);
	template<> ONLINESUBSYSTEMUTILS_API UClass* StaticClass<UVoipListenerSynthComponent>()
	{
		return UVoipListenerSynthComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoipListenerSynthComponent(Z_Construct_UClass_UVoipListenerSynthComponent, &UVoipListenerSynthComponent::StaticClass, TEXT("/Script/OnlineSubsystemUtils"), TEXT("UVoipListenerSynthComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoipListenerSynthComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
