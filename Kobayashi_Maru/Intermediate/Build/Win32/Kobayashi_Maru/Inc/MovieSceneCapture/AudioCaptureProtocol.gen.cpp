// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieSceneCapture/Public/Protocols/AudioCaptureProtocol.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAudioCaptureProtocol() {}
// Cross Module References
	MOVIESCENECAPTURE_API UClass* Z_Construct_UClass_UNullAudioCaptureProtocol_NoRegister();
	MOVIESCENECAPTURE_API UClass* Z_Construct_UClass_UNullAudioCaptureProtocol();
	MOVIESCENECAPTURE_API UClass* Z_Construct_UClass_UMovieSceneAudioCaptureProtocolBase();
	UPackage* Z_Construct_UPackage__Script_MovieSceneCapture();
	MOVIESCENECAPTURE_API UClass* Z_Construct_UClass_UMasterAudioSubmixCaptureProtocol_NoRegister();
	MOVIESCENECAPTURE_API UClass* Z_Construct_UClass_UMasterAudioSubmixCaptureProtocol();
// End Cross Module References
	void UNullAudioCaptureProtocol::StaticRegisterNativesUNullAudioCaptureProtocol()
	{
	}
	UClass* Z_Construct_UClass_UNullAudioCaptureProtocol_NoRegister()
	{
		return UNullAudioCaptureProtocol::StaticClass();
	}
	struct Z_Construct_UClass_UNullAudioCaptureProtocol_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNullAudioCaptureProtocol_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneAudioCaptureProtocolBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneCapture,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNullAudioCaptureProtocol_Statics::Class_MetaDataParams[] = {
		{ "CommandLineID", "NullAudio" },
		{ "Comment", "/**\n * This is a null audio capture implementation which skips capturing audio. The MovieSceneCapture is explicitly\n * aware of this type and will skip processing an audio pass if this is specified.\n */" },
		{ "DisplayName", "No Audio" },
		{ "IncludePath", "Protocols/AudioCaptureProtocol.h" },
		{ "ModuleRelativePath", "Public/Protocols/AudioCaptureProtocol.h" },
		{ "ToolTip", "This is a null audio capture implementation which skips capturing audio. The MovieSceneCapture is explicitly\naware of this type and will skip processing an audio pass if this is specified." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNullAudioCaptureProtocol_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNullAudioCaptureProtocol>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UNullAudioCaptureProtocol_Statics::ClassParams = {
		&UNullAudioCaptureProtocol::StaticClass,
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
		0x001004A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNullAudioCaptureProtocol_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNullAudioCaptureProtocol_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNullAudioCaptureProtocol()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UNullAudioCaptureProtocol_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UNullAudioCaptureProtocol, 2860303566);
	template<> MOVIESCENECAPTURE_API UClass* StaticClass<UNullAudioCaptureProtocol>()
	{
		return UNullAudioCaptureProtocol::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNullAudioCaptureProtocol(Z_Construct_UClass_UNullAudioCaptureProtocol, &UNullAudioCaptureProtocol::StaticClass, TEXT("/Script/MovieSceneCapture"), TEXT("UNullAudioCaptureProtocol"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNullAudioCaptureProtocol);
	void UMasterAudioSubmixCaptureProtocol::StaticRegisterNativesUMasterAudioSubmixCaptureProtocol()
	{
	}
	UClass* Z_Construct_UClass_UMasterAudioSubmixCaptureProtocol_NoRegister()
	{
		return UMasterAudioSubmixCaptureProtocol::StaticClass();
	}
	struct Z_Construct_UClass_UMasterAudioSubmixCaptureProtocol_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FileName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FileName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMasterAudioSubmixCaptureProtocol_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneAudioCaptureProtocolBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneCapture,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMasterAudioSubmixCaptureProtocol_Statics::Class_MetaDataParams[] = {
		{ "CommandLineID", "MasterAudioSubmix" },
		{ "Comment", "/**\n* This is an experimental audio capture implementation which captures the final output from the master submix.\n* This requires the new audiomixer (launch with \"-audiomixer\") and requires that your sequence can be played \n* back in real-time (when rendering is disabled). If the sequence evaluation hitches the audio will become\n* desynchronized due to their being more time passed in real time (platform time) than in the sequence itself.\n*/" },
		{ "DisplayName", "Master Audio Submix (Experimental)" },
		{ "IncludePath", "Protocols/AudioCaptureProtocol.h" },
		{ "ModuleRelativePath", "Public/Protocols/AudioCaptureProtocol.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "This is an experimental audio capture implementation which captures the final output from the master submix.\nThis requires the new audiomixer (launch with \"-audiomixer\") and requires that your sequence can be played\nback in real-time (when rendering is disabled). If the sequence evaluation hitches the audio will become\ndesynchronized due to their being more time passed in real time (platform time) than in the sequence itself." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMasterAudioSubmixCaptureProtocol_Statics::NewProp_FileName_MetaData[] = {
		{ "Category", "Audio Options" },
		{ "ModuleRelativePath", "Public/Protocols/AudioCaptureProtocol.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMasterAudioSubmixCaptureProtocol_Statics::NewProp_FileName = { "FileName", nullptr, (EPropertyFlags)0x0020080000004005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMasterAudioSubmixCaptureProtocol, FileName), METADATA_PARAMS(Z_Construct_UClass_UMasterAudioSubmixCaptureProtocol_Statics::NewProp_FileName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMasterAudioSubmixCaptureProtocol_Statics::NewProp_FileName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMasterAudioSubmixCaptureProtocol_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMasterAudioSubmixCaptureProtocol_Statics::NewProp_FileName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMasterAudioSubmixCaptureProtocol_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMasterAudioSubmixCaptureProtocol>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMasterAudioSubmixCaptureProtocol_Statics::ClassParams = {
		&UMasterAudioSubmixCaptureProtocol::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMasterAudioSubmixCaptureProtocol_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMasterAudioSubmixCaptureProtocol_Statics::PropPointers),
		0,
		0x001004A4u,
		METADATA_PARAMS(Z_Construct_UClass_UMasterAudioSubmixCaptureProtocol_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMasterAudioSubmixCaptureProtocol_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMasterAudioSubmixCaptureProtocol()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMasterAudioSubmixCaptureProtocol_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMasterAudioSubmixCaptureProtocol, 2882942176);
	template<> MOVIESCENECAPTURE_API UClass* StaticClass<UMasterAudioSubmixCaptureProtocol>()
	{
		return UMasterAudioSubmixCaptureProtocol::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMasterAudioSubmixCaptureProtocol(Z_Construct_UClass_UMasterAudioSubmixCaptureProtocol, &UMasterAudioSubmixCaptureProtocol::StaticClass, TEXT("/Script/MovieSceneCapture"), TEXT("UMasterAudioSubmixCaptureProtocol"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMasterAudioSubmixCaptureProtocol);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
