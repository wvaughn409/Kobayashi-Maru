// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Niagara/Public/NiagaraPreviewGrid.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraPreviewGrid() {}
// Cross Module References
	NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraPreviewGridResetMode();
	UPackage* Z_Construct_UPackage__Script_Niagara();
	NIAGARA_API UClass* Z_Construct_UClass_ANiagaraPreviewBase_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_ANiagaraPreviewBase();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSystem_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraPreviewAxis_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraPreviewAxis();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraComponent_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamBase_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamBase();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamInt32_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamInt32();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamFloat_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamFloat();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamVector2D_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamVector2D();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamVector_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamVector4_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamVector4();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector4();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamLinearColor_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamLinearColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	NIAGARA_API UClass* Z_Construct_UClass_ANiagaraPreviewGrid_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_ANiagaraPreviewGrid();
	ENGINE_API UClass* Z_Construct_UClass_UArrowComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBillboardComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UChildActorComponent_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
// End Cross Module References
	static UEnum* ENiagaraPreviewGridResetMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraPreviewGridResetMode, Z_Construct_UPackage__Script_Niagara(), TEXT("ENiagaraPreviewGridResetMode"));
		}
		return Singleton;
	}
	template<> NIAGARA_API UEnum* StaticEnum<ENiagaraPreviewGridResetMode>()
	{
		return ENiagaraPreviewGridResetMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ENiagaraPreviewGridResetMode(ENiagaraPreviewGridResetMode_StaticEnum, TEXT("/Script/Niagara"), TEXT("ENiagaraPreviewGridResetMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Niagara_ENiagaraPreviewGridResetMode_Hash() { return 2122670093U; }
	UEnum* Z_Construct_UEnum_Niagara_ENiagaraPreviewGridResetMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Niagara();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ENiagaraPreviewGridResetMode"), 0, Get_Z_Construct_UEnum_Niagara_ENiagaraPreviewGridResetMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ENiagaraPreviewGridResetMode::Never", (int64)ENiagaraPreviewGridResetMode::Never },
				{ "ENiagaraPreviewGridResetMode::Individual", (int64)ENiagaraPreviewGridResetMode::Individual },
				{ "ENiagaraPreviewGridResetMode::All", (int64)ENiagaraPreviewGridResetMode::All },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "All.Comment", "/** Resets each preview as it completes. */" },
				{ "All.Name", "ENiagaraPreviewGridResetMode::All" },
				{ "All.ToolTip", "Resets each preview as it completes." },
				{ "Individual.Comment", "/** Never resets the previews. */" },
				{ "Individual.Name", "ENiagaraPreviewGridResetMode::Individual" },
				{ "Individual.ToolTip", "Never resets the previews." },
				{ "ModuleRelativePath", "Public/NiagaraPreviewGrid.h" },
				{ "Never.Name", "ENiagaraPreviewGridResetMode::Never" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Niagara,
				nullptr,
				"ENiagaraPreviewGridResetMode",
				"ENiagaraPreviewGridResetMode",
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
	static FName NAME_ANiagaraPreviewBase_SetLabelText = FName(TEXT("SetLabelText"));
	void ANiagaraPreviewBase::SetLabelText(FText const& InXAxisText, FText const& InYAxisText)
	{
		NiagaraPreviewBase_eventSetLabelText_Parms Parms;
		Parms.InXAxisText=InXAxisText;
		Parms.InYAxisText=InYAxisText;
		ProcessEvent(FindFunctionChecked(NAME_ANiagaraPreviewBase_SetLabelText),&Parms);
	}
	static FName NAME_ANiagaraPreviewBase_SetSystem = FName(TEXT("SetSystem"));
	void ANiagaraPreviewBase::SetSystem(UNiagaraSystem* InSystem)
	{
		NiagaraPreviewBase_eventSetSystem_Parms Parms;
		Parms.InSystem=InSystem;
		ProcessEvent(FindFunctionChecked(NAME_ANiagaraPreviewBase_SetSystem),&Parms);
	}
	void ANiagaraPreviewBase::StaticRegisterNativesANiagaraPreviewBase()
	{
	}
	struct Z_Construct_UFunction_ANiagaraPreviewBase_SetLabelText_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InYAxisText_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_InYAxisText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InXAxisText_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_InXAxisText;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANiagaraPreviewBase_SetLabelText_Statics::NewProp_InYAxisText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_ANiagaraPreviewBase_SetLabelText_Statics::NewProp_InYAxisText = { "InYAxisText", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NiagaraPreviewBase_eventSetLabelText_Parms, InYAxisText), METADATA_PARAMS(Z_Construct_UFunction_ANiagaraPreviewBase_SetLabelText_Statics::NewProp_InYAxisText_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ANiagaraPreviewBase_SetLabelText_Statics::NewProp_InYAxisText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANiagaraPreviewBase_SetLabelText_Statics::NewProp_InXAxisText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_ANiagaraPreviewBase_SetLabelText_Statics::NewProp_InXAxisText = { "InXAxisText", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NiagaraPreviewBase_eventSetLabelText_Parms, InXAxisText), METADATA_PARAMS(Z_Construct_UFunction_ANiagaraPreviewBase_SetLabelText_Statics::NewProp_InXAxisText_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ANiagaraPreviewBase_SetLabelText_Statics::NewProp_InXAxisText_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANiagaraPreviewBase_SetLabelText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANiagaraPreviewBase_SetLabelText_Statics::NewProp_InYAxisText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANiagaraPreviewBase_SetLabelText_Statics::NewProp_InXAxisText,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANiagaraPreviewBase_SetLabelText_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Niagara|Preview" },
		{ "ModuleRelativePath", "Public/NiagaraPreviewGrid.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ANiagaraPreviewBase_SetLabelText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANiagaraPreviewBase, nullptr, "SetLabelText", nullptr, nullptr, sizeof(NiagaraPreviewBase_eventSetLabelText_Parms), Z_Construct_UFunction_ANiagaraPreviewBase_SetLabelText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANiagaraPreviewBase_SetLabelText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANiagaraPreviewBase_SetLabelText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ANiagaraPreviewBase_SetLabelText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANiagaraPreviewBase_SetLabelText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ANiagaraPreviewBase_SetLabelText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ANiagaraPreviewBase_SetSystem_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InSystem;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANiagaraPreviewBase_SetSystem_Statics::NewProp_InSystem = { "InSystem", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NiagaraPreviewBase_eventSetSystem_Parms, InSystem), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANiagaraPreviewBase_SetSystem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANiagaraPreviewBase_SetSystem_Statics::NewProp_InSystem,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANiagaraPreviewBase_SetSystem_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Niagara|Preview" },
		{ "Comment", "//AActor Interface End\n" },
		{ "ModuleRelativePath", "Public/NiagaraPreviewGrid.h" },
		{ "ToolTip", "AActor Interface End" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ANiagaraPreviewBase_SetSystem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANiagaraPreviewBase, nullptr, "SetSystem", nullptr, nullptr, sizeof(NiagaraPreviewBase_eventSetSystem_Parms), Z_Construct_UFunction_ANiagaraPreviewBase_SetSystem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANiagaraPreviewBase_SetSystem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANiagaraPreviewBase_SetSystem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ANiagaraPreviewBase_SetSystem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANiagaraPreviewBase_SetSystem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ANiagaraPreviewBase_SetSystem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ANiagaraPreviewBase_NoRegister()
	{
		return ANiagaraPreviewBase::StaticClass();
	}
	struct Z_Construct_UClass_ANiagaraPreviewBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANiagaraPreviewBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ANiagaraPreviewBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ANiagaraPreviewBase_SetLabelText, "SetLabelText" }, // 1537216693
		{ &Z_Construct_UFunction_ANiagaraPreviewBase_SetSystem, "SetSystem" }, // 439209656
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANiagaraPreviewBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Base actor for preview actors used in UNiagaraPreviewAxis. */" },
		{ "IncludePath", "NiagaraPreviewGrid.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/NiagaraPreviewGrid.h" },
		{ "ToolTip", "Base actor for preview actors used in UNiagaraPreviewAxis." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANiagaraPreviewBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANiagaraPreviewBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANiagaraPreviewBase_Statics::ClassParams = {
		&ANiagaraPreviewBase::StaticClass,
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
		0x008000ADu,
		METADATA_PARAMS(Z_Construct_UClass_ANiagaraPreviewBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANiagaraPreviewBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANiagaraPreviewBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANiagaraPreviewBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANiagaraPreviewBase, 3250298063);
	template<> NIAGARA_API UClass* StaticClass<ANiagaraPreviewBase>()
	{
		return ANiagaraPreviewBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANiagaraPreviewBase(Z_Construct_UClass_ANiagaraPreviewBase, &ANiagaraPreviewBase::StaticClass, TEXT("/Script/Niagara"), TEXT("ANiagaraPreviewBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANiagaraPreviewBase);
	DEFINE_FUNCTION(UNiagaraPreviewAxis::execApplyToPreview)
	{
		P_GET_OBJECT(UNiagaraComponent,Z_Param_PreviewComponent);
		P_GET_PROPERTY(FIntProperty,Z_Param_PreviewIndex);
		P_GET_UBOOL(Z_Param_bIsXAxis);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutLabelText);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ApplyToPreview_Implementation(Z_Param_PreviewComponent,Z_Param_PreviewIndex,Z_Param_bIsXAxis,Z_Param_Out_OutLabelText);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraPreviewAxis::execNum)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->Num_Implementation();
		P_NATIVE_END;
	}
	static FName NAME_UNiagaraPreviewAxis_ApplyToPreview = FName(TEXT("ApplyToPreview"));
	void UNiagaraPreviewAxis::ApplyToPreview(UNiagaraComponent* PreviewComponent, int32 PreviewIndex, bool bIsXAxis, FString& OutLabelText)
	{
		NiagaraPreviewAxis_eventApplyToPreview_Parms Parms;
		Parms.PreviewComponent=PreviewComponent;
		Parms.PreviewIndex=PreviewIndex;
		Parms.bIsXAxis=bIsXAxis ? true : false;
		Parms.OutLabelText=OutLabelText;
		ProcessEvent(FindFunctionChecked(NAME_UNiagaraPreviewAxis_ApplyToPreview),&Parms);
		OutLabelText=Parms.OutLabelText;
	}
	static FName NAME_UNiagaraPreviewAxis_Num = FName(TEXT("Num"));
	int32 UNiagaraPreviewAxis::Num()
	{
		NiagaraPreviewAxis_eventNum_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UNiagaraPreviewAxis_Num),&Parms);
		return Parms.ReturnValue;
	}
	void UNiagaraPreviewAxis::StaticRegisterNativesUNiagaraPreviewAxis()
	{
		UClass* Class = UNiagaraPreviewAxis::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ApplyToPreview", &UNiagaraPreviewAxis::execApplyToPreview },
			{ "Num", &UNiagaraPreviewAxis::execNum },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UNiagaraPreviewAxis_ApplyToPreview_Statics
	{
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OutLabelText;
		static void NewProp_bIsXAxis_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsXAxis;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PreviewIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviewComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PreviewComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNiagaraPreviewAxis_ApplyToPreview_Statics::NewProp_OutLabelText = { "OutLabelText", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NiagaraPreviewAxis_eventApplyToPreview_Parms, OutLabelText), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UNiagaraPreviewAxis_ApplyToPreview_Statics::NewProp_bIsXAxis_SetBit(void* Obj)
	{
		((NiagaraPreviewAxis_eventApplyToPreview_Parms*)Obj)->bIsXAxis = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNiagaraPreviewAxis_ApplyToPreview_Statics::NewProp_bIsXAxis = { "bIsXAxis", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(NiagaraPreviewAxis_eventApplyToPreview_Parms), &Z_Construct_UFunction_UNiagaraPreviewAxis_ApplyToPreview_Statics::NewProp_bIsXAxis_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNiagaraPreviewAxis_ApplyToPreview_Statics::NewProp_PreviewIndex = { "PreviewIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NiagaraPreviewAxis_eventApplyToPreview_Parms, PreviewIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraPreviewAxis_ApplyToPreview_Statics::NewProp_PreviewComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNiagaraPreviewAxis_ApplyToPreview_Statics::NewProp_PreviewComponent = { "PreviewComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NiagaraPreviewAxis_eventApplyToPreview_Parms, PreviewComponent), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraPreviewAxis_ApplyToPreview_Statics::NewProp_PreviewComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraPreviewAxis_ApplyToPreview_Statics::NewProp_PreviewComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraPreviewAxis_ApplyToPreview_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraPreviewAxis_ApplyToPreview_Statics::NewProp_OutLabelText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraPreviewAxis_ApplyToPreview_Statics::NewProp_bIsXAxis,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraPreviewAxis_ApplyToPreview_Statics::NewProp_PreviewIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraPreviewAxis_ApplyToPreview_Statics::NewProp_PreviewComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraPreviewAxis_ApplyToPreview_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Applies this axis for the preview at PreviewIndex on this axis. */" },
		{ "ModuleRelativePath", "Public/NiagaraPreviewGrid.h" },
		{ "ToolTip", "Applies this axis for the preview at PreviewIndex on this axis." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraPreviewAxis_ApplyToPreview_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraPreviewAxis, nullptr, "ApplyToPreview", nullptr, nullptr, sizeof(NiagaraPreviewAxis_eventApplyToPreview_Parms), Z_Construct_UFunction_UNiagaraPreviewAxis_ApplyToPreview_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraPreviewAxis_ApplyToPreview_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraPreviewAxis_ApplyToPreview_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraPreviewAxis_ApplyToPreview_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraPreviewAxis_ApplyToPreview()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNiagaraPreviewAxis_ApplyToPreview_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraPreviewAxis_Num_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNiagaraPreviewAxis_Num_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NiagaraPreviewAxis_eventNum_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraPreviewAxis_Num_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraPreviewAxis_Num_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraPreviewAxis_Num_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Returns the number of previews for this axis. */" },
		{ "ModuleRelativePath", "Public/NiagaraPreviewGrid.h" },
		{ "ToolTip", "Returns the number of previews for this axis." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraPreviewAxis_Num_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraPreviewAxis, nullptr, "Num", nullptr, nullptr, sizeof(NiagaraPreviewAxis_eventNum_Parms), Z_Construct_UFunction_UNiagaraPreviewAxis_Num_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraPreviewAxis_Num_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraPreviewAxis_Num_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraPreviewAxis_Num_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraPreviewAxis_Num()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNiagaraPreviewAxis_Num_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UNiagaraPreviewAxis_NoRegister()
	{
		return UNiagaraPreviewAxis::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraPreviewAxis_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraPreviewAxis_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UNiagaraPreviewAxis_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UNiagaraPreviewAxis_ApplyToPreview, "ApplyToPreview" }, // 2416193977
		{ &Z_Construct_UFunction_UNiagaraPreviewAxis_Num, "Num" }, // 380695925
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraPreviewAxis_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\nBase class for all preview axis types.\nNiagaraPreviewGrid uses these to control how many systems to spawn in each axis and how each system varies on that axis.\nC++ Examples are show below. You can also create these as Blueprint classes as show in the Plugin content folder.\n*/" },
		{ "IncludePath", "NiagaraPreviewGrid.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/NiagaraPreviewGrid.h" },
		{ "ToolTip", "Base class for all preview axis types.\nNiagaraPreviewGrid uses these to control how many systems to spawn in each axis and how each system varies on that axis.\nC++ Examples are show below. You can also create these as Blueprint classes as show in the Plugin content folder." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraPreviewAxis_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraPreviewAxis>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraPreviewAxis_Statics::ClassParams = {
		&UNiagaraPreviewAxis::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraPreviewAxis_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraPreviewAxis_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraPreviewAxis()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UNiagaraPreviewAxis_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UNiagaraPreviewAxis, 3066965872);
	template<> NIAGARA_API UClass* StaticClass<UNiagaraPreviewAxis>()
	{
		return UNiagaraPreviewAxis::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNiagaraPreviewAxis(Z_Construct_UClass_UNiagaraPreviewAxis, &UNiagaraPreviewAxis::StaticClass, TEXT("/Script/Niagara"), TEXT("UNiagaraPreviewAxis"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraPreviewAxis);
	void UNiagaraPreviewAxis_InterpParamBase::StaticRegisterNativesUNiagaraPreviewAxis_InterpParamBase()
	{
	}
	UClass* Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamBase_NoRegister()
	{
		return UNiagaraPreviewAxis_InterpParamBase::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Count_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Count;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Param_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Param;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNiagaraPreviewAxis,
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "NiagaraPreviewGrid.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/NiagaraPreviewGrid.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamBase_Statics::NewProp_Count_MetaData[] = {
		{ "Category", "Axis" },
		{ "ModuleRelativePath", "Public/NiagaraPreviewGrid.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamBase_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraPreviewAxis_InterpParamBase, Count), METADATA_PARAMS(Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamBase_Statics::NewProp_Count_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamBase_Statics::NewProp_Count_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamBase_Statics::NewProp_Param_MetaData[] = {
		{ "Category", "Axis" },
		{ "ModuleRelativePath", "Public/NiagaraPreviewGrid.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamBase_Statics::NewProp_Param = { "Param", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraPreviewAxis_InterpParamBase, Param), METADATA_PARAMS(Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamBase_Statics::NewProp_Param_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamBase_Statics::NewProp_Param_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamBase_Statics::NewProp_Count,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamBase_Statics::NewProp_Param,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraPreviewAxis_InterpParamBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamBase_Statics::ClassParams = {
		&UNiagaraPreviewAxis_InterpParamBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamBase_Statics::PropPointers),
		0,
		0x000010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UNiagaraPreviewAxis_InterpParamBase, 373576911);
	template<> NIAGARA_API UClass* StaticClass<UNiagaraPreviewAxis_InterpParamBase>()
	{
		return UNiagaraPreviewAxis_InterpParamBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNiagaraPreviewAxis_InterpParamBase(Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamBase, &UNiagaraPreviewAxis_InterpParamBase::StaticClass, TEXT("/Script/Niagara"), TEXT("UNiagaraPreviewAxis_InterpParamBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraPreviewAxis_InterpParamBase);
	void UNiagaraPreviewAxis_InterpParamInt32::StaticRegisterNativesUNiagaraPreviewAxis_InterpParamInt32()
	{
	}
	UClass* Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamInt32_NoRegister()
	{
		return UNiagaraPreviewAxis_InterpParamInt32::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamInt32_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Max_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Max;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Min_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Min;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamInt32_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamInt32_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "NiagaraPreviewGrid.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/NiagaraPreviewGrid.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamInt32_Statics::NewProp_Max_MetaData[] = {
		{ "Category", "Axis" },
		{ "ModuleRelativePath", "Public/NiagaraPreviewGrid.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamInt32_Statics::NewProp_Max = { "Max", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraPreviewAxis_InterpParamInt32, Max), METADATA_PARAMS(Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamInt32_Statics::NewProp_Max_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamInt32_Statics::NewProp_Max_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamInt32_Statics::NewProp_Min_MetaData[] = {
		{ "Category", "Axis" },
		{ "ModuleRelativePath", "Public/NiagaraPreviewGrid.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamInt32_Statics::NewProp_Min = { "Min", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraPreviewAxis_InterpParamInt32, Min), METADATA_PARAMS(Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamInt32_Statics::NewProp_Min_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamInt32_Statics::NewProp_Min_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamInt32_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamInt32_Statics::NewProp_Max,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamInt32_Statics::NewProp_Min,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamInt32_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraPreviewAxis_InterpParamInt32>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamInt32_Statics::ClassParams = {
		&UNiagaraPreviewAxis_InterpParamInt32::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamInt32_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamInt32_Statics::PropPointers),
		0,
		0x000010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamInt32_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamInt32_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamInt32()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamInt32_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UNiagaraPreviewAxis_InterpParamInt32, 2519761364);
	template<> NIAGARA_API UClass* StaticClass<UNiagaraPreviewAxis_InterpParamInt32>()
	{
		return UNiagaraPreviewAxis_InterpParamInt32::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNiagaraPreviewAxis_InterpParamInt32(Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamInt32, &UNiagaraPreviewAxis_InterpParamInt32::StaticClass, TEXT("/Script/Niagara"), TEXT("UNiagaraPreviewAxis_InterpParamInt32"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraPreviewAxis_InterpParamInt32);
	void UNiagaraPreviewAxis_InterpParamFloat::StaticRegisterNativesUNiagaraPreviewAxis_InterpParamFloat()
	{
	}
	UClass* Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamFloat_NoRegister()
	{
		return UNiagaraPreviewAxis_InterpParamFloat::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamFloat_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Max_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Max;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Min_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Min;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamFloat_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamFloat_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "NiagaraPreviewGrid.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/NiagaraPreviewGrid.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamFloat_Statics::NewProp_Max_MetaData[] = {
		{ "Category", "Axis" },
		{ "ModuleRelativePath", "Public/NiagaraPreviewGrid.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamFloat_Statics::NewProp_Max = { "Max", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraPreviewAxis_InterpParamFloat, Max), METADATA_PARAMS(Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamFloat_Statics::NewProp_Max_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamFloat_Statics::NewProp_Max_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamFloat_Statics::NewProp_Min_MetaData[] = {
		{ "Category", "Axis" },
		{ "ModuleRelativePath", "Public/NiagaraPreviewGrid.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamFloat_Statics::NewProp_Min = { "Min", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraPreviewAxis_InterpParamFloat, Min), METADATA_PARAMS(Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamFloat_Statics::NewProp_Min_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamFloat_Statics::NewProp_Min_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamFloat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamFloat_Statics::NewProp_Max,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamFloat_Statics::NewProp_Min,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamFloat_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraPreviewAxis_InterpParamFloat>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamFloat_Statics::ClassParams = {
		&UNiagaraPreviewAxis_InterpParamFloat::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamFloat_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamFloat_Statics::PropPointers),
		0,
		0x000010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamFloat_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamFloat_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamFloat()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamFloat_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UNiagaraPreviewAxis_InterpParamFloat, 2828379284);
	template<> NIAGARA_API UClass* StaticClass<UNiagaraPreviewAxis_InterpParamFloat>()
	{
		return UNiagaraPreviewAxis_InterpParamFloat::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNiagaraPreviewAxis_InterpParamFloat(Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamFloat, &UNiagaraPreviewAxis_InterpParamFloat::StaticClass, TEXT("/Script/Niagara"), TEXT("UNiagaraPreviewAxis_InterpParamFloat"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraPreviewAxis_InterpParamFloat);
	void UNiagaraPreviewAxis_InterpParamVector2D::StaticRegisterNativesUNiagaraPreviewAxis_InterpParamVector2D()
	{
	}
	UClass* Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamVector2D_NoRegister()
	{
		return UNiagaraPreviewAxis_InterpParamVector2D::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamVector2D_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Max_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Max;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Min_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Min;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamVector2D_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamVector2D_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "NiagaraPreviewGrid.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/NiagaraPreviewGrid.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamVector2D_Statics::NewProp_Max_MetaData[] = {
		{ "Category", "Axis" },
		{ "ModuleRelativePath", "Public/NiagaraPreviewGrid.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamVector2D_Statics::NewProp_Max = { "Max", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraPreviewAxis_InterpParamVector2D, Max), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamVector2D_Statics::NewProp_Max_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamVector2D_Statics::NewProp_Max_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamVector2D_Statics::NewProp_Min_MetaData[] = {
		{ "Category", "Axis" },
		{ "ModuleRelativePath", "Public/NiagaraPreviewGrid.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamVector2D_Statics::NewProp_Min = { "Min", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraPreviewAxis_InterpParamVector2D, Min), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamVector2D_Statics::NewProp_Min_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamVector2D_Statics::NewProp_Min_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamVector2D_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamVector2D_Statics::NewProp_Max,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamVector2D_Statics::NewProp_Min,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamVector2D_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraPreviewAxis_InterpParamVector2D>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamVector2D_Statics::ClassParams = {
		&UNiagaraPreviewAxis_InterpParamVector2D::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamVector2D_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamVector2D_Statics::PropPointers),
		0,
		0x000010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamVector2D_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamVector2D_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamVector2D()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamVector2D_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UNiagaraPreviewAxis_InterpParamVector2D, 61913760);
	template<> NIAGARA_API UClass* StaticClass<UNiagaraPreviewAxis_InterpParamVector2D>()
	{
		return UNiagaraPreviewAxis_InterpParamVector2D::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNiagaraPreviewAxis_InterpParamVector2D(Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamVector2D, &UNiagaraPreviewAxis_InterpParamVector2D::StaticClass, TEXT("/Script/Niagara"), TEXT("UNiagaraPreviewAxis_InterpParamVector2D"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraPreviewAxis_InterpParamVector2D);
	void UNiagaraPreviewAxis_InterpParamVector::StaticRegisterNativesUNiagaraPreviewAxis_InterpParamVector()
	{
	}
	UClass* Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamVector_NoRegister()
	{
		return UNiagaraPreviewAxis_InterpParamVector::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamVector_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Max_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Max;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Min_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Min;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamVector_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamVector_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "NiagaraPreviewGrid.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/NiagaraPreviewGrid.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamVector_Statics::NewProp_Max_MetaData[] = {
		{ "Category", "Axis" },
		{ "ModuleRelativePath", "Public/NiagaraPreviewGrid.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamVector_Statics::NewProp_Max = { "Max", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraPreviewAxis_InterpParamVector, Max), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamVector_Statics::NewProp_Max_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamVector_Statics::NewProp_Max_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamVector_Statics::NewProp_Min_MetaData[] = {
		{ "Category", "Axis" },
		{ "ModuleRelativePath", "Public/NiagaraPreviewGrid.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamVector_Statics::NewProp_Min = { "Min", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraPreviewAxis_InterpParamVector, Min), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamVector_Statics::NewProp_Min_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamVector_Statics::NewProp_Min_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamVector_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamVector_Statics::NewProp_Max,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamVector_Statics::NewProp_Min,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamVector_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraPreviewAxis_InterpParamVector>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamVector_Statics::ClassParams = {
		&UNiagaraPreviewAxis_InterpParamVector::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamVector_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamVector_Statics::PropPointers),
		0,
		0x000010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamVector_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamVector_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamVector()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamVector_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UNiagaraPreviewAxis_InterpParamVector, 200154717);
	template<> NIAGARA_API UClass* StaticClass<UNiagaraPreviewAxis_InterpParamVector>()
	{
		return UNiagaraPreviewAxis_InterpParamVector::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNiagaraPreviewAxis_InterpParamVector(Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamVector, &UNiagaraPreviewAxis_InterpParamVector::StaticClass, TEXT("/Script/Niagara"), TEXT("UNiagaraPreviewAxis_InterpParamVector"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraPreviewAxis_InterpParamVector);
	void UNiagaraPreviewAxis_InterpParamVector4::StaticRegisterNativesUNiagaraPreviewAxis_InterpParamVector4()
	{
	}
	UClass* Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamVector4_NoRegister()
	{
		return UNiagaraPreviewAxis_InterpParamVector4::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamVector4_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Max_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Max;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Min_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Min;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamVector4_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamVector4_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "NiagaraPreviewGrid.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/NiagaraPreviewGrid.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamVector4_Statics::NewProp_Max_MetaData[] = {
		{ "Category", "Axis" },
		{ "ModuleRelativePath", "Public/NiagaraPreviewGrid.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamVector4_Statics::NewProp_Max = { "Max", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraPreviewAxis_InterpParamVector4, Max), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamVector4_Statics::NewProp_Max_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamVector4_Statics::NewProp_Max_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamVector4_Statics::NewProp_Min_MetaData[] = {
		{ "Category", "Axis" },
		{ "ModuleRelativePath", "Public/NiagaraPreviewGrid.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamVector4_Statics::NewProp_Min = { "Min", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraPreviewAxis_InterpParamVector4, Min), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamVector4_Statics::NewProp_Min_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamVector4_Statics::NewProp_Min_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamVector4_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamVector4_Statics::NewProp_Max,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamVector4_Statics::NewProp_Min,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamVector4_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraPreviewAxis_InterpParamVector4>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamVector4_Statics::ClassParams = {
		&UNiagaraPreviewAxis_InterpParamVector4::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamVector4_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamVector4_Statics::PropPointers),
		0,
		0x000010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamVector4_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamVector4_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamVector4()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamVector4_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UNiagaraPreviewAxis_InterpParamVector4, 1169999758);
	template<> NIAGARA_API UClass* StaticClass<UNiagaraPreviewAxis_InterpParamVector4>()
	{
		return UNiagaraPreviewAxis_InterpParamVector4::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNiagaraPreviewAxis_InterpParamVector4(Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamVector4, &UNiagaraPreviewAxis_InterpParamVector4::StaticClass, TEXT("/Script/Niagara"), TEXT("UNiagaraPreviewAxis_InterpParamVector4"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraPreviewAxis_InterpParamVector4);
	void UNiagaraPreviewAxis_InterpParamLinearColor::StaticRegisterNativesUNiagaraPreviewAxis_InterpParamLinearColor()
	{
	}
	UClass* Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamLinearColor_NoRegister()
	{
		return UNiagaraPreviewAxis_InterpParamLinearColor::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamLinearColor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Max_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Max;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Min_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Min;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamLinearColor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamLinearColor_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "NiagaraPreviewGrid.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/NiagaraPreviewGrid.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamLinearColor_Statics::NewProp_Max_MetaData[] = {
		{ "Category", "Axis" },
		{ "ModuleRelativePath", "Public/NiagaraPreviewGrid.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamLinearColor_Statics::NewProp_Max = { "Max", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraPreviewAxis_InterpParamLinearColor, Max), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamLinearColor_Statics::NewProp_Max_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamLinearColor_Statics::NewProp_Max_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamLinearColor_Statics::NewProp_Min_MetaData[] = {
		{ "Category", "Axis" },
		{ "ModuleRelativePath", "Public/NiagaraPreviewGrid.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamLinearColor_Statics::NewProp_Min = { "Min", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraPreviewAxis_InterpParamLinearColor, Min), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamLinearColor_Statics::NewProp_Min_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamLinearColor_Statics::NewProp_Min_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamLinearColor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamLinearColor_Statics::NewProp_Max,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamLinearColor_Statics::NewProp_Min,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamLinearColor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraPreviewAxis_InterpParamLinearColor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamLinearColor_Statics::ClassParams = {
		&UNiagaraPreviewAxis_InterpParamLinearColor::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamLinearColor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamLinearColor_Statics::PropPointers),
		0,
		0x000010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamLinearColor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamLinearColor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamLinearColor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamLinearColor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UNiagaraPreviewAxis_InterpParamLinearColor, 696079654);
	template<> NIAGARA_API UClass* StaticClass<UNiagaraPreviewAxis_InterpParamLinearColor>()
	{
		return UNiagaraPreviewAxis_InterpParamLinearColor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNiagaraPreviewAxis_InterpParamLinearColor(Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamLinearColor, &UNiagaraPreviewAxis_InterpParamLinearColor::StaticClass, TEXT("/Script/Niagara"), TEXT("UNiagaraPreviewAxis_InterpParamLinearColor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraPreviewAxis_InterpParamLinearColor);
	DEFINE_FUNCTION(ANiagaraPreviewGrid::execGetPreviews)
	{
		P_GET_TARRAY_REF(UNiagaraComponent*,Z_Param_Out_OutPreviews);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetPreviews(Z_Param_Out_OutPreviews);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ANiagaraPreviewGrid::execSetPaused)
	{
		P_GET_UBOOL(Z_Param_bPaused);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPaused(Z_Param_bPaused);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ANiagaraPreviewGrid::execDeactivatePreviews)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DeactivatePreviews();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ANiagaraPreviewGrid::execActivatePreviews)
	{
		P_GET_UBOOL(Z_Param_bReset);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ActivatePreviews(Z_Param_bReset);
		P_NATIVE_END;
	}
	void ANiagaraPreviewGrid::StaticRegisterNativesANiagaraPreviewGrid()
	{
		UClass* Class = ANiagaraPreviewGrid::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ActivatePreviews", &ANiagaraPreviewGrid::execActivatePreviews },
			{ "DeactivatePreviews", &ANiagaraPreviewGrid::execDeactivatePreviews },
			{ "GetPreviews", &ANiagaraPreviewGrid::execGetPreviews },
			{ "SetPaused", &ANiagaraPreviewGrid::execSetPaused },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ANiagaraPreviewGrid_ActivatePreviews_Statics
	{
		struct NiagaraPreviewGrid_eventActivatePreviews_Parms
		{
			bool bReset;
		};
		static void NewProp_bReset_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bReset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ANiagaraPreviewGrid_ActivatePreviews_Statics::NewProp_bReset_SetBit(void* Obj)
	{
		((NiagaraPreviewGrid_eventActivatePreviews_Parms*)Obj)->bReset = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ANiagaraPreviewGrid_ActivatePreviews_Statics::NewProp_bReset = { "bReset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(NiagaraPreviewGrid_eventActivatePreviews_Parms), &Z_Construct_UFunction_ANiagaraPreviewGrid_ActivatePreviews_Statics::NewProp_bReset_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANiagaraPreviewGrid_ActivatePreviews_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANiagaraPreviewGrid_ActivatePreviews_Statics::NewProp_bReset,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANiagaraPreviewGrid_ActivatePreviews_Statics::Function_MetaDataParams[] = {
		{ "Category", "Preview" },
		{ "Comment", "//AActor Interface End\n" },
		{ "ModuleRelativePath", "Public/NiagaraPreviewGrid.h" },
		{ "ToolTip", "AActor Interface End" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ANiagaraPreviewGrid_ActivatePreviews_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANiagaraPreviewGrid, nullptr, "ActivatePreviews", nullptr, nullptr, sizeof(NiagaraPreviewGrid_eventActivatePreviews_Parms), Z_Construct_UFunction_ANiagaraPreviewGrid_ActivatePreviews_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANiagaraPreviewGrid_ActivatePreviews_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANiagaraPreviewGrid_ActivatePreviews_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ANiagaraPreviewGrid_ActivatePreviews_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANiagaraPreviewGrid_ActivatePreviews()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ANiagaraPreviewGrid_ActivatePreviews_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ANiagaraPreviewGrid_DeactivatePreviews_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANiagaraPreviewGrid_DeactivatePreviews_Statics::Function_MetaDataParams[] = {
		{ "Category", "Preview" },
		{ "ModuleRelativePath", "Public/NiagaraPreviewGrid.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ANiagaraPreviewGrid_DeactivatePreviews_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANiagaraPreviewGrid, nullptr, "DeactivatePreviews", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANiagaraPreviewGrid_DeactivatePreviews_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ANiagaraPreviewGrid_DeactivatePreviews_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANiagaraPreviewGrid_DeactivatePreviews()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ANiagaraPreviewGrid_DeactivatePreviews_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ANiagaraPreviewGrid_GetPreviews_Statics
	{
		struct NiagaraPreviewGrid_eventGetPreviews_Parms
		{
			TArray<UNiagaraComponent*> OutPreviews;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OutPreviews_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutPreviews;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OutPreviews_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANiagaraPreviewGrid_GetPreviews_Statics::NewProp_OutPreviews_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ANiagaraPreviewGrid_GetPreviews_Statics::NewProp_OutPreviews = { "OutPreviews", nullptr, (EPropertyFlags)0x0010008000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NiagaraPreviewGrid_eventGetPreviews_Parms, OutPreviews), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_ANiagaraPreviewGrid_GetPreviews_Statics::NewProp_OutPreviews_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ANiagaraPreviewGrid_GetPreviews_Statics::NewProp_OutPreviews_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANiagaraPreviewGrid_GetPreviews_Statics::NewProp_OutPreviews_Inner = { "OutPreviews", nullptr, (EPropertyFlags)0x0000000000080000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANiagaraPreviewGrid_GetPreviews_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANiagaraPreviewGrid_GetPreviews_Statics::NewProp_OutPreviews,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANiagaraPreviewGrid_GetPreviews_Statics::NewProp_OutPreviews_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANiagaraPreviewGrid_GetPreviews_Statics::Function_MetaDataParams[] = {
		{ "Category", "Preview" },
		{ "ModuleRelativePath", "Public/NiagaraPreviewGrid.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ANiagaraPreviewGrid_GetPreviews_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANiagaraPreviewGrid, nullptr, "GetPreviews", nullptr, nullptr, sizeof(NiagaraPreviewGrid_eventGetPreviews_Parms), Z_Construct_UFunction_ANiagaraPreviewGrid_GetPreviews_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANiagaraPreviewGrid_GetPreviews_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANiagaraPreviewGrid_GetPreviews_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ANiagaraPreviewGrid_GetPreviews_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANiagaraPreviewGrid_GetPreviews()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ANiagaraPreviewGrid_GetPreviews_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ANiagaraPreviewGrid_SetPaused_Statics
	{
		struct NiagaraPreviewGrid_eventSetPaused_Parms
		{
			bool bPaused;
		};
		static void NewProp_bPaused_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPaused;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ANiagaraPreviewGrid_SetPaused_Statics::NewProp_bPaused_SetBit(void* Obj)
	{
		((NiagaraPreviewGrid_eventSetPaused_Parms*)Obj)->bPaused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ANiagaraPreviewGrid_SetPaused_Statics::NewProp_bPaused = { "bPaused", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(NiagaraPreviewGrid_eventSetPaused_Parms), &Z_Construct_UFunction_ANiagaraPreviewGrid_SetPaused_Statics::NewProp_bPaused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANiagaraPreviewGrid_SetPaused_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANiagaraPreviewGrid_SetPaused_Statics::NewProp_bPaused,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANiagaraPreviewGrid_SetPaused_Statics::Function_MetaDataParams[] = {
		{ "Category", "Preview" },
		{ "ModuleRelativePath", "Public/NiagaraPreviewGrid.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ANiagaraPreviewGrid_SetPaused_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANiagaraPreviewGrid, nullptr, "SetPaused", nullptr, nullptr, sizeof(NiagaraPreviewGrid_eventSetPaused_Parms), Z_Construct_UFunction_ANiagaraPreviewGrid_SetPaused_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANiagaraPreviewGrid_SetPaused_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANiagaraPreviewGrid_SetPaused_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ANiagaraPreviewGrid_SetPaused_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANiagaraPreviewGrid_SetPaused()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ANiagaraPreviewGrid_SetPaused_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ANiagaraPreviewGrid_NoRegister()
	{
		return ANiagaraPreviewGrid::StaticClass();
	}
	struct Z_Construct_UClass_ANiagaraPreviewGrid_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ArrowComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ArrowComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpriteComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpriteComponent;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviewComponents_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PreviewComponents;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PreviewComponents_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumY_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumY;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumX_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpacingY_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SpacingY;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpacingX_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SpacingX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviewClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_PreviewClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviewAxisY_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PreviewAxisY;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviewAxisX_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PreviewAxisX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResetMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ResetMode;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ResetMode_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_System_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_System;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANiagaraPreviewGrid_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ANiagaraPreviewGrid_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ANiagaraPreviewGrid_ActivatePreviews, "ActivatePreviews" }, // 2727713895
		{ &Z_Construct_UFunction_ANiagaraPreviewGrid_DeactivatePreviews, "DeactivatePreviews" }, // 1492848121
		{ &Z_Construct_UFunction_ANiagaraPreviewGrid_GetPreviews, "GetPreviews" }, // 3223022845
		{ &Z_Construct_UFunction_ANiagaraPreviewGrid_SetPaused, "SetPaused" }, // 2355539350
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANiagaraPreviewGrid_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "NiagaraPreviewGrid.h" },
		{ "ModuleRelativePath", "Public/NiagaraPreviewGrid.h" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANiagaraPreviewGrid_Statics::NewProp_ArrowComponent_MetaData[] = {
		{ "Comment", "// Reference to arrow visualization component\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/NiagaraPreviewGrid.h" },
		{ "ToolTip", "Reference to arrow visualization component" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANiagaraPreviewGrid_Statics::NewProp_ArrowComponent = { "ArrowComponent", nullptr, (EPropertyFlags)0x0040000800080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANiagaraPreviewGrid, ArrowComponent), Z_Construct_UClass_UArrowComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ANiagaraPreviewGrid_Statics::NewProp_ArrowComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANiagaraPreviewGrid_Statics::NewProp_ArrowComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANiagaraPreviewGrid_Statics::NewProp_SpriteComponent_MetaData[] = {
		{ "Comment", "// Reference to sprite visualization component\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/NiagaraPreviewGrid.h" },
		{ "ToolTip", "Reference to sprite visualization component" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANiagaraPreviewGrid_Statics::NewProp_SpriteComponent = { "SpriteComponent", nullptr, (EPropertyFlags)0x0040000800080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANiagaraPreviewGrid, SpriteComponent), Z_Construct_UClass_UBillboardComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ANiagaraPreviewGrid_Statics::NewProp_SpriteComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANiagaraPreviewGrid_Statics::NewProp_SpriteComponent_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANiagaraPreviewGrid_Statics::NewProp_PreviewComponents_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/NiagaraPreviewGrid.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ANiagaraPreviewGrid_Statics::NewProp_PreviewComponents = { "PreviewComponents", nullptr, (EPropertyFlags)0x0040008000002008, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANiagaraPreviewGrid, PreviewComponents), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ANiagaraPreviewGrid_Statics::NewProp_PreviewComponents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANiagaraPreviewGrid_Statics::NewProp_PreviewComponents_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANiagaraPreviewGrid_Statics::NewProp_PreviewComponents_Inner = { "PreviewComponents", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UChildActorComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANiagaraPreviewGrid_Statics::NewProp_NumY_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraPreviewGrid.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ANiagaraPreviewGrid_Statics::NewProp_NumY = { "NumY", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANiagaraPreviewGrid, NumY), METADATA_PARAMS(Z_Construct_UClass_ANiagaraPreviewGrid_Statics::NewProp_NumY_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANiagaraPreviewGrid_Statics::NewProp_NumY_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANiagaraPreviewGrid_Statics::NewProp_NumX_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraPreviewGrid.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ANiagaraPreviewGrid_Statics::NewProp_NumX = { "NumX", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANiagaraPreviewGrid, NumX), METADATA_PARAMS(Z_Construct_UClass_ANiagaraPreviewGrid_Statics::NewProp_NumX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANiagaraPreviewGrid_Statics::NewProp_NumX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANiagaraPreviewGrid_Statics::NewProp_SpacingY_MetaData[] = {
		{ "Category", "Preview" },
		{ "Comment", "/** The default spacing between previews if the axis does not override it. */" },
		{ "ModuleRelativePath", "Public/NiagaraPreviewGrid.h" },
		{ "ToolTip", "The default spacing between previews if the axis does not override it." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANiagaraPreviewGrid_Statics::NewProp_SpacingY = { "SpacingY", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANiagaraPreviewGrid, SpacingY), METADATA_PARAMS(Z_Construct_UClass_ANiagaraPreviewGrid_Statics::NewProp_SpacingY_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANiagaraPreviewGrid_Statics::NewProp_SpacingY_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANiagaraPreviewGrid_Statics::NewProp_SpacingX_MetaData[] = {
		{ "Category", "Preview" },
		{ "Comment", "/** The default spacing between previews in X if the axis does not override it. */" },
		{ "ModuleRelativePath", "Public/NiagaraPreviewGrid.h" },
		{ "ToolTip", "The default spacing between previews in X if the axis does not override it." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANiagaraPreviewGrid_Statics::NewProp_SpacingX = { "SpacingX", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANiagaraPreviewGrid, SpacingX), METADATA_PARAMS(Z_Construct_UClass_ANiagaraPreviewGrid_Statics::NewProp_SpacingX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANiagaraPreviewGrid_Statics::NewProp_SpacingX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANiagaraPreviewGrid_Statics::NewProp_PreviewClass_MetaData[] = {
		{ "Category", "Preview" },
		{ "Comment", "/** Class used to for previews in this grid. */" },
		{ "ModuleRelativePath", "Public/NiagaraPreviewGrid.h" },
		{ "ToolTip", "Class used to for previews in this grid." },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ANiagaraPreviewGrid_Statics::NewProp_PreviewClass = { "PreviewClass", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANiagaraPreviewGrid, PreviewClass), Z_Construct_UClass_ANiagaraPreviewBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ANiagaraPreviewGrid_Statics::NewProp_PreviewClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANiagaraPreviewGrid_Statics::NewProp_PreviewClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANiagaraPreviewGrid_Statics::NewProp_PreviewAxisY_MetaData[] = {
		{ "Category", "Preview" },
		{ "Comment", "/** Object controlling behavior varying on the Y axis. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/NiagaraPreviewGrid.h" },
		{ "ToolTip", "Object controlling behavior varying on the Y axis." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANiagaraPreviewGrid_Statics::NewProp_PreviewAxisY = { "PreviewAxisY", nullptr, (EPropertyFlags)0x0012000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANiagaraPreviewGrid, PreviewAxisY), Z_Construct_UClass_UNiagaraPreviewAxis_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ANiagaraPreviewGrid_Statics::NewProp_PreviewAxisY_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANiagaraPreviewGrid_Statics::NewProp_PreviewAxisY_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANiagaraPreviewGrid_Statics::NewProp_PreviewAxisX_MetaData[] = {
		{ "Category", "Preview" },
		{ "Comment", "/** Object controlling behavior varying on the X axis. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/NiagaraPreviewGrid.h" },
		{ "ToolTip", "Object controlling behavior varying on the X axis." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANiagaraPreviewGrid_Statics::NewProp_PreviewAxisX = { "PreviewAxisX", nullptr, (EPropertyFlags)0x0012000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANiagaraPreviewGrid, PreviewAxisX), Z_Construct_UClass_UNiagaraPreviewAxis_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ANiagaraPreviewGrid_Statics::NewProp_PreviewAxisX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANiagaraPreviewGrid_Statics::NewProp_PreviewAxisX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANiagaraPreviewGrid_Statics::NewProp_ResetMode_MetaData[] = {
		{ "Category", "Preview" },
		{ "ModuleRelativePath", "Public/NiagaraPreviewGrid.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ANiagaraPreviewGrid_Statics::NewProp_ResetMode = { "ResetMode", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANiagaraPreviewGrid, ResetMode), Z_Construct_UEnum_Niagara_ENiagaraPreviewGridResetMode, METADATA_PARAMS(Z_Construct_UClass_ANiagaraPreviewGrid_Statics::NewProp_ResetMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANiagaraPreviewGrid_Statics::NewProp_ResetMode_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ANiagaraPreviewGrid_Statics::NewProp_ResetMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANiagaraPreviewGrid_Statics::NewProp_System_MetaData[] = {
		{ "Category", "Preview" },
		{ "ModuleRelativePath", "Public/NiagaraPreviewGrid.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANiagaraPreviewGrid_Statics::NewProp_System = { "System", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANiagaraPreviewGrid, System), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ANiagaraPreviewGrid_Statics::NewProp_System_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANiagaraPreviewGrid_Statics::NewProp_System_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANiagaraPreviewGrid_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANiagaraPreviewGrid_Statics::NewProp_ArrowComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANiagaraPreviewGrid_Statics::NewProp_SpriteComponent,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANiagaraPreviewGrid_Statics::NewProp_PreviewComponents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANiagaraPreviewGrid_Statics::NewProp_PreviewComponents_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANiagaraPreviewGrid_Statics::NewProp_NumY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANiagaraPreviewGrid_Statics::NewProp_NumX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANiagaraPreviewGrid_Statics::NewProp_SpacingY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANiagaraPreviewGrid_Statics::NewProp_SpacingX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANiagaraPreviewGrid_Statics::NewProp_PreviewClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANiagaraPreviewGrid_Statics::NewProp_PreviewAxisY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANiagaraPreviewGrid_Statics::NewProp_PreviewAxisX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANiagaraPreviewGrid_Statics::NewProp_ResetMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANiagaraPreviewGrid_Statics::NewProp_ResetMode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANiagaraPreviewGrid_Statics::NewProp_System,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANiagaraPreviewGrid_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANiagaraPreviewGrid>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANiagaraPreviewGrid_Statics::ClassParams = {
		&ANiagaraPreviewGrid::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ANiagaraPreviewGrid_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ANiagaraPreviewGrid_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ANiagaraPreviewGrid_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANiagaraPreviewGrid_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANiagaraPreviewGrid()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANiagaraPreviewGrid_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANiagaraPreviewGrid, 723337759);
	template<> NIAGARA_API UClass* StaticClass<ANiagaraPreviewGrid>()
	{
		return ANiagaraPreviewGrid::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANiagaraPreviewGrid(Z_Construct_UClass_ANiagaraPreviewGrid, &ANiagaraPreviewGrid::StaticClass, TEXT("/Script/Niagara"), TEXT("ANiagaraPreviewGrid"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANiagaraPreviewGrid);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
