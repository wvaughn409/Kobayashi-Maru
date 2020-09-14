// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Niagara/Classes/NiagaraDataInterfaceAudio.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraDataInterfaceAudio() {}
// Cross Module References
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceAudioSubmix_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceAudioSubmix();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterface();
	UPackage* Z_Construct_UPackage__Script_Niagara();
	ENGINE_API UClass* Z_Construct_UClass_USoundSubmix_NoRegister();
// End Cross Module References
	void UNiagaraDataInterfaceAudioSubmix::StaticRegisterNativesUNiagaraDataInterfaceAudioSubmix()
	{
	}
	UClass* Z_Construct_UClass_UNiagaraDataInterfaceAudioSubmix_NoRegister()
	{
		return UNiagaraDataInterfaceAudioSubmix::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraDataInterfaceAudioSubmix_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Submix_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Submix;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraDataInterfaceAudioSubmix_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNiagaraDataInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceAudioSubmix_Statics::Class_MetaDataParams[] = {
		{ "Category", "Audio" },
		{ "Comment", "/** Data Interface allowing sampling of recent audio data. */" },
		{ "DisplayName", "Audio Submix" },
		{ "IncludePath", "NiagaraDataInterfaceAudio.h" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceAudio.h" },
		{ "ToolTip", "Data Interface allowing sampling of recent audio data." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceAudioSubmix_Statics::NewProp_Submix_MetaData[] = {
		{ "Category", "Audio" },
		{ "Comment", "/** The audio submix where analyzed. */" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceAudio.h" },
		{ "ToolTip", "The audio submix where analyzed." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceAudioSubmix_Statics::NewProp_Submix = { "Submix", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraDataInterfaceAudioSubmix, Submix), Z_Construct_UClass_USoundSubmix_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceAudioSubmix_Statics::NewProp_Submix_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceAudioSubmix_Statics::NewProp_Submix_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraDataInterfaceAudioSubmix_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceAudioSubmix_Statics::NewProp_Submix,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraDataInterfaceAudioSubmix_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraDataInterfaceAudioSubmix>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraDataInterfaceAudioSubmix_Statics::ClassParams = {
		&UNiagaraDataInterfaceAudioSubmix::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNiagaraDataInterfaceAudioSubmix_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceAudioSubmix_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceAudioSubmix_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceAudioSubmix_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraDataInterfaceAudioSubmix()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UNiagaraDataInterfaceAudioSubmix_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UNiagaraDataInterfaceAudioSubmix, 1939074593);
	template<> NIAGARA_API UClass* StaticClass<UNiagaraDataInterfaceAudioSubmix>()
	{
		return UNiagaraDataInterfaceAudioSubmix::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNiagaraDataInterfaceAudioSubmix(Z_Construct_UClass_UNiagaraDataInterfaceAudioSubmix, &UNiagaraDataInterfaceAudioSubmix::StaticClass, TEXT("/Script/Niagara"), TEXT("UNiagaraDataInterfaceAudioSubmix"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraDataInterfaceAudioSubmix);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
