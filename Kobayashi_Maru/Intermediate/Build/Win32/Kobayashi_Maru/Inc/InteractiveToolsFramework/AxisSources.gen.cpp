// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InteractiveToolsFramework/Public/BaseGizmos/AxisSources.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAxisSources() {}
// Cross Module References
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoConstantAxisSource_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoConstantAxisSource();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_InteractiveToolsFramework();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoAxisSource_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoConstantFrameAxisSource_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoConstantFrameAxisSource();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoWorldAxisSource_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoWorldAxisSource();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoComponentAxisSource_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoComponentAxisSource();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
// End Cross Module References
	void UGizmoConstantAxisSource::StaticRegisterNativesUGizmoConstantAxisSource()
	{
	}
	UClass* Z_Construct_UClass_UGizmoConstantAxisSource_NoRegister()
	{
		return UGizmoConstantAxisSource::StaticClass();
	}
	struct Z_Construct_UClass_UGizmoConstantAxisSource_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Direction_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Direction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Origin_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Origin;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGizmoConstantAxisSource_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoConstantAxisSource_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UGizmoConstantAxisSource is an IGizmoAxisSource implementation that\n * internally stores the Origin and Direction constants\n */" },
		{ "IncludePath", "BaseGizmos/AxisSources.h" },
		{ "ModuleRelativePath", "Public/BaseGizmos/AxisSources.h" },
		{ "ToolTip", "UGizmoConstantAxisSource is an IGizmoAxisSource implementation that\ninternally stores the Origin and Direction constants" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoConstantAxisSource_Statics::NewProp_Direction_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseGizmos/AxisSources.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGizmoConstantAxisSource_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGizmoConstantAxisSource, Direction), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UGizmoConstantAxisSource_Statics::NewProp_Direction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoConstantAxisSource_Statics::NewProp_Direction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoConstantAxisSource_Statics::NewProp_Origin_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseGizmos/AxisSources.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGizmoConstantAxisSource_Statics::NewProp_Origin = { "Origin", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGizmoConstantAxisSource, Origin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UGizmoConstantAxisSource_Statics::NewProp_Origin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoConstantAxisSource_Statics::NewProp_Origin_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGizmoConstantAxisSource_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoConstantAxisSource_Statics::NewProp_Direction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoConstantAxisSource_Statics::NewProp_Origin,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UGizmoConstantAxisSource_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UGizmoAxisSource_NoRegister, (int32)VTABLE_OFFSET(UGizmoConstantAxisSource, IGizmoAxisSource), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGizmoConstantAxisSource_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGizmoConstantAxisSource>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGizmoConstantAxisSource_Statics::ClassParams = {
		&UGizmoConstantAxisSource::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGizmoConstantAxisSource_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoConstantAxisSource_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGizmoConstantAxisSource_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoConstantAxisSource_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGizmoConstantAxisSource()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGizmoConstantAxisSource_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGizmoConstantAxisSource, 3493536372);
	template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<UGizmoConstantAxisSource>()
	{
		return UGizmoConstantAxisSource::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGizmoConstantAxisSource(Z_Construct_UClass_UGizmoConstantAxisSource, &UGizmoConstantAxisSource::StaticClass, TEXT("/Script/InteractiveToolsFramework"), TEXT("UGizmoConstantAxisSource"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGizmoConstantAxisSource);
	void UGizmoConstantFrameAxisSource::StaticRegisterNativesUGizmoConstantFrameAxisSource()
	{
	}
	UClass* Z_Construct_UClass_UGizmoConstantFrameAxisSource_NoRegister()
	{
		return UGizmoConstantFrameAxisSource::StaticClass();
	}
	struct Z_Construct_UClass_UGizmoConstantFrameAxisSource_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TangentY_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TangentY;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TangentX_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TangentX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Direction_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Direction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Origin_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Origin;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGizmoConstantFrameAxisSource_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoConstantFrameAxisSource_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UGizmoConstantFrameAxisSource is an IGizmoAxisSource implementation that\n * internally stores the Origin, Direction, and X/Y Tangent constants.\n */" },
		{ "IncludePath", "BaseGizmos/AxisSources.h" },
		{ "ModuleRelativePath", "Public/BaseGizmos/AxisSources.h" },
		{ "ToolTip", "UGizmoConstantFrameAxisSource is an IGizmoAxisSource implementation that\ninternally stores the Origin, Direction, and X/Y Tangent constants." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoConstantFrameAxisSource_Statics::NewProp_TangentY_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseGizmos/AxisSources.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGizmoConstantFrameAxisSource_Statics::NewProp_TangentY = { "TangentY", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGizmoConstantFrameAxisSource, TangentY), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UGizmoConstantFrameAxisSource_Statics::NewProp_TangentY_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoConstantFrameAxisSource_Statics::NewProp_TangentY_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoConstantFrameAxisSource_Statics::NewProp_TangentX_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseGizmos/AxisSources.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGizmoConstantFrameAxisSource_Statics::NewProp_TangentX = { "TangentX", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGizmoConstantFrameAxisSource, TangentX), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UGizmoConstantFrameAxisSource_Statics::NewProp_TangentX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoConstantFrameAxisSource_Statics::NewProp_TangentX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoConstantFrameAxisSource_Statics::NewProp_Direction_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseGizmos/AxisSources.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGizmoConstantFrameAxisSource_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGizmoConstantFrameAxisSource, Direction), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UGizmoConstantFrameAxisSource_Statics::NewProp_Direction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoConstantFrameAxisSource_Statics::NewProp_Direction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoConstantFrameAxisSource_Statics::NewProp_Origin_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseGizmos/AxisSources.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGizmoConstantFrameAxisSource_Statics::NewProp_Origin = { "Origin", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGizmoConstantFrameAxisSource, Origin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UGizmoConstantFrameAxisSource_Statics::NewProp_Origin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoConstantFrameAxisSource_Statics::NewProp_Origin_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGizmoConstantFrameAxisSource_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoConstantFrameAxisSource_Statics::NewProp_TangentY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoConstantFrameAxisSource_Statics::NewProp_TangentX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoConstantFrameAxisSource_Statics::NewProp_Direction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoConstantFrameAxisSource_Statics::NewProp_Origin,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UGizmoConstantFrameAxisSource_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UGizmoAxisSource_NoRegister, (int32)VTABLE_OFFSET(UGizmoConstantFrameAxisSource, IGizmoAxisSource), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGizmoConstantFrameAxisSource_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGizmoConstantFrameAxisSource>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGizmoConstantFrameAxisSource_Statics::ClassParams = {
		&UGizmoConstantFrameAxisSource::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGizmoConstantFrameAxisSource_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoConstantFrameAxisSource_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGizmoConstantFrameAxisSource_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoConstantFrameAxisSource_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGizmoConstantFrameAxisSource()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGizmoConstantFrameAxisSource_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGizmoConstantFrameAxisSource, 4142949252);
	template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<UGizmoConstantFrameAxisSource>()
	{
		return UGizmoConstantFrameAxisSource::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGizmoConstantFrameAxisSource(Z_Construct_UClass_UGizmoConstantFrameAxisSource, &UGizmoConstantFrameAxisSource::StaticClass, TEXT("/Script/InteractiveToolsFramework"), TEXT("UGizmoConstantFrameAxisSource"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGizmoConstantFrameAxisSource);
	void UGizmoWorldAxisSource::StaticRegisterNativesUGizmoWorldAxisSource()
	{
	}
	UClass* Z_Construct_UClass_UGizmoWorldAxisSource_NoRegister()
	{
		return UGizmoWorldAxisSource::StaticClass();
	}
	struct Z_Construct_UClass_UGizmoWorldAxisSource_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AxisIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_AxisIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Origin_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Origin;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGizmoWorldAxisSource_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoWorldAxisSource_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UGizmoWorldAxisSource is an IGizmoAxisSource that provides one of the World axes\n * (ie X/Y/Z axes) based on an integer AxisIndex in range [0,2]. The Orgin is\n * internally stored as a FProperty.\n */" },
		{ "IncludePath", "BaseGizmos/AxisSources.h" },
		{ "ModuleRelativePath", "Public/BaseGizmos/AxisSources.h" },
		{ "ToolTip", "UGizmoWorldAxisSource is an IGizmoAxisSource that provides one of the World axes\n(ie X/Y/Z axes) based on an integer AxisIndex in range [0,2]. The Orgin is\ninternally stored as a FProperty." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoWorldAxisSource_Statics::NewProp_AxisIndex_MetaData[] = {
		{ "Comment", "/** Clamped internally to 0,1,2 */" },
		{ "ModuleRelativePath", "Public/BaseGizmos/AxisSources.h" },
		{ "ToolTip", "Clamped internally to 0,1,2" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UGizmoWorldAxisSource_Statics::NewProp_AxisIndex = { "AxisIndex", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGizmoWorldAxisSource, AxisIndex), METADATA_PARAMS(Z_Construct_UClass_UGizmoWorldAxisSource_Statics::NewProp_AxisIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoWorldAxisSource_Statics::NewProp_AxisIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoWorldAxisSource_Statics::NewProp_Origin_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseGizmos/AxisSources.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGizmoWorldAxisSource_Statics::NewProp_Origin = { "Origin", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGizmoWorldAxisSource, Origin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UGizmoWorldAxisSource_Statics::NewProp_Origin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoWorldAxisSource_Statics::NewProp_Origin_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGizmoWorldAxisSource_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoWorldAxisSource_Statics::NewProp_AxisIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoWorldAxisSource_Statics::NewProp_Origin,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UGizmoWorldAxisSource_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UGizmoAxisSource_NoRegister, (int32)VTABLE_OFFSET(UGizmoWorldAxisSource, IGizmoAxisSource), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGizmoWorldAxisSource_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGizmoWorldAxisSource>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGizmoWorldAxisSource_Statics::ClassParams = {
		&UGizmoWorldAxisSource::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGizmoWorldAxisSource_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoWorldAxisSource_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGizmoWorldAxisSource_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoWorldAxisSource_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGizmoWorldAxisSource()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGizmoWorldAxisSource_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGizmoWorldAxisSource, 1093876482);
	template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<UGizmoWorldAxisSource>()
	{
		return UGizmoWorldAxisSource::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGizmoWorldAxisSource(Z_Construct_UClass_UGizmoWorldAxisSource, &UGizmoWorldAxisSource::StaticClass, TEXT("/Script/InteractiveToolsFramework"), TEXT("UGizmoWorldAxisSource"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGizmoWorldAxisSource);
	void UGizmoComponentAxisSource::StaticRegisterNativesUGizmoComponentAxisSource()
	{
	}
	UClass* Z_Construct_UClass_UGizmoComponentAxisSource_NoRegister()
	{
		return UGizmoComponentAxisSource::StaticClass();
	}
	struct Z_Construct_UClass_UGizmoComponentAxisSource_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLocalAxes_MetaData[];
#endif
		static void NewProp_bLocalAxes_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLocalAxes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AxisIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_AxisIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Component;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGizmoComponentAxisSource_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoComponentAxisSource_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UGizmoComponentAxisSource is an IGizmoAxisSource implementation that provides one of the\n * X/Y/Z axes of a Component's local coordinate system, mapped to World, based on an integer AxisIndex in range [0,2].\n * The Axis Origin is the Component's transform origin. Tangent vectors are provided.\n */" },
		{ "IncludePath", "BaseGizmos/AxisSources.h" },
		{ "ModuleRelativePath", "Public/BaseGizmos/AxisSources.h" },
		{ "ToolTip", "UGizmoComponentAxisSource is an IGizmoAxisSource implementation that provides one of the\nX/Y/Z axes of a Component's local coordinate system, mapped to World, based on an integer AxisIndex in range [0,2].\nThe Axis Origin is the Component's transform origin. Tangent vectors are provided." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoComponentAxisSource_Statics::NewProp_bLocalAxes_MetaData[] = {
		{ "Comment", "/** If false, returns World axes */" },
		{ "ModuleRelativePath", "Public/BaseGizmos/AxisSources.h" },
		{ "ToolTip", "If false, returns World axes" },
	};
#endif
	void Z_Construct_UClass_UGizmoComponentAxisSource_Statics::NewProp_bLocalAxes_SetBit(void* Obj)
	{
		((UGizmoComponentAxisSource*)Obj)->bLocalAxes = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGizmoComponentAxisSource_Statics::NewProp_bLocalAxes = { "bLocalAxes", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGizmoComponentAxisSource), &Z_Construct_UClass_UGizmoComponentAxisSource_Statics::NewProp_bLocalAxes_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGizmoComponentAxisSource_Statics::NewProp_bLocalAxes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoComponentAxisSource_Statics::NewProp_bLocalAxes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoComponentAxisSource_Statics::NewProp_AxisIndex_MetaData[] = {
		{ "Comment", "/** Clamped internally to 0,1,2 */" },
		{ "ModuleRelativePath", "Public/BaseGizmos/AxisSources.h" },
		{ "ToolTip", "Clamped internally to 0,1,2" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UGizmoComponentAxisSource_Statics::NewProp_AxisIndex = { "AxisIndex", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGizmoComponentAxisSource, AxisIndex), METADATA_PARAMS(Z_Construct_UClass_UGizmoComponentAxisSource_Statics::NewProp_AxisIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoComponentAxisSource_Statics::NewProp_AxisIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoComponentAxisSource_Statics::NewProp_Component_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BaseGizmos/AxisSources.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGizmoComponentAxisSource_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGizmoComponentAxisSource, Component), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGizmoComponentAxisSource_Statics::NewProp_Component_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoComponentAxisSource_Statics::NewProp_Component_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGizmoComponentAxisSource_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoComponentAxisSource_Statics::NewProp_bLocalAxes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoComponentAxisSource_Statics::NewProp_AxisIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoComponentAxisSource_Statics::NewProp_Component,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UGizmoComponentAxisSource_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UGizmoAxisSource_NoRegister, (int32)VTABLE_OFFSET(UGizmoComponentAxisSource, IGizmoAxisSource), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGizmoComponentAxisSource_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGizmoComponentAxisSource>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGizmoComponentAxisSource_Statics::ClassParams = {
		&UGizmoComponentAxisSource::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGizmoComponentAxisSource_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoComponentAxisSource_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGizmoComponentAxisSource_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoComponentAxisSource_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGizmoComponentAxisSource()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGizmoComponentAxisSource_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGizmoComponentAxisSource, 4055741387);
	template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<UGizmoComponentAxisSource>()
	{
		return UGizmoComponentAxisSource::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGizmoComponentAxisSource(Z_Construct_UClass_UGizmoComponentAxisSource, &UGizmoComponentAxisSource::StaticClass, TEXT("/Script/InteractiveToolsFramework"), TEXT("UGizmoComponentAxisSource"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGizmoComponentAxisSource);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
