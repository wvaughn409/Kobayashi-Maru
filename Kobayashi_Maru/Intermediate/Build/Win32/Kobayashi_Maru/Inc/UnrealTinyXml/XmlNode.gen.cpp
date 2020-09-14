// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealTinyXml/Public/XmlNode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeXmlNode() {}
// Cross Module References
	UNREALTINYXML_API UClass* Z_Construct_UClass_UXmlNode_NoRegister();
	UNREALTINYXML_API UClass* Z_Construct_UClass_UXmlNode();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_UnrealTinyXml();
	UNREALTINYXML_API UClass* Z_Construct_UClass_UXmlElement_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UXmlNode::execDeleteChild)
	{
		P_GET_OBJECT(UXmlNode,Z_Param_node);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DeleteChild(Z_Param_node);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXmlNode::execDeleteChildren)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DeleteChildren();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXmlNode::execInsertAfterChild)
	{
		P_GET_OBJECT(UXmlNode,Z_Param_afterThis);
		P_GET_OBJECT(UXmlNode,Z_Param_addThis);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->InsertAfterChild(Z_Param_afterThis,Z_Param_addThis);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXmlNode::execInsertFirstChild)
	{
		P_GET_OBJECT(UXmlNode,Z_Param_addThis);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->InsertFirstChild(Z_Param_addThis);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXmlNode::execInsertEndChild)
	{
		P_GET_OBJECT(UXmlNode,Z_Param_addThis);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->InsertEndChild(Z_Param_addThis);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXmlNode::execNextSiblingElement)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_name);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UXmlElement**)Z_Param__Result=P_THIS->NextSiblingElement(Z_Param_name);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXmlNode::execNextSibling)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UXmlNode**)Z_Param__Result=P_THIS->NextSibling();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXmlNode::execPreviousSiblingElement)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_name);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UXmlElement**)Z_Param__Result=P_THIS->PreviousSiblingElement(Z_Param_name);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXmlNode::execPreviousSibling)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UXmlNode**)Z_Param__Result=P_THIS->PreviousSibling();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXmlNode::execLastChildElement)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_name);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UXmlElement**)Z_Param__Result=P_THIS->LastChildElement(Z_Param_name);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXmlNode::execLastChild)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UXmlNode**)Z_Param__Result=P_THIS->LastChild();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXmlNode::execFirstChildElement)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_name);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UXmlElement**)Z_Param__Result=P_THIS->FirstChildElement(Z_Param_name);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXmlNode::execAllChild)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UXmlNode*>*)Z_Param__Result=P_THIS->AllChild();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXmlNode::execChildByIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UXmlNode**)Z_Param__Result=P_THIS->ChildByIndex(Z_Param_index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXmlNode::execFirstChild)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UXmlNode**)Z_Param__Result=P_THIS->FirstChild();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXmlNode::execNoChildren)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->NoChildren();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXmlNode::execParent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UXmlNode**)Z_Param__Result=P_THIS->Parent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXmlNode::execGetLineNum)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetLineNum();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXmlNode::execSetValue)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_val);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetValue(Z_Param_val);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXmlNode::execValue)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->Value();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXmlNode::execToElement)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UXmlElement**)Z_Param__Result=P_THIS->ToElement();
		P_NATIVE_END;
	}
	void UXmlNode::StaticRegisterNativesUXmlNode()
	{
		UClass* Class = UXmlNode::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AllChild", &UXmlNode::execAllChild },
			{ "ChildByIndex", &UXmlNode::execChildByIndex },
			{ "DeleteChild", &UXmlNode::execDeleteChild },
			{ "DeleteChildren", &UXmlNode::execDeleteChildren },
			{ "FirstChild", &UXmlNode::execFirstChild },
			{ "FirstChildElement", &UXmlNode::execFirstChildElement },
			{ "GetLineNum", &UXmlNode::execGetLineNum },
			{ "InsertAfterChild", &UXmlNode::execInsertAfterChild },
			{ "InsertEndChild", &UXmlNode::execInsertEndChild },
			{ "InsertFirstChild", &UXmlNode::execInsertFirstChild },
			{ "LastChild", &UXmlNode::execLastChild },
			{ "LastChildElement", &UXmlNode::execLastChildElement },
			{ "NextSibling", &UXmlNode::execNextSibling },
			{ "NextSiblingElement", &UXmlNode::execNextSiblingElement },
			{ "NoChildren", &UXmlNode::execNoChildren },
			{ "Parent", &UXmlNode::execParent },
			{ "PreviousSibling", &UXmlNode::execPreviousSibling },
			{ "PreviousSiblingElement", &UXmlNode::execPreviousSiblingElement },
			{ "SetValue", &UXmlNode::execSetValue },
			{ "ToElement", &UXmlNode::execToElement },
			{ "Value", &UXmlNode::execValue },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UXmlNode_AllChild_Statics
	{
		struct XmlNode_eventAllChild_Parms
		{
			TArray<UXmlNode*> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UXmlNode_AllChild_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XmlNode_eventAllChild_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UXmlNode_AllChild_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UXmlNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXmlNode_AllChild_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXmlNode_AllChild_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXmlNode_AllChild_Statics::NewProp_ReturnValue_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXmlNode_AllChild_Statics::Function_MetaDataParams[] = {
		{ "Category", "UnrealTinyXml|Node" },
		{ "Comment", "//Get the \"Index\" child node, return last found child if none exists, return null if index is not valid!\n" },
		{ "ModuleRelativePath", "Public/XmlNode.h" },
		{ "ToolTip", "Get the \"Index\" child node, return last found child if none exists, return null if index is not valid!" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXmlNode_AllChild_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXmlNode, nullptr, "AllChild", nullptr, nullptr, sizeof(XmlNode_eventAllChild_Parms), Z_Construct_UFunction_UXmlNode_AllChild_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXmlNode_AllChild_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXmlNode_AllChild_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXmlNode_AllChild_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXmlNode_AllChild()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXmlNode_AllChild_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXmlNode_ChildByIndex_Statics
	{
		struct XmlNode_eventChildByIndex_Parms
		{
			int32 index;
			UXmlNode* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_index;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UXmlNode_ChildByIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XmlNode_eventChildByIndex_Parms, ReturnValue), Z_Construct_UClass_UXmlNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UXmlNode_ChildByIndex_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XmlNode_eventChildByIndex_Parms, index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXmlNode_ChildByIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXmlNode_ChildByIndex_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXmlNode_ChildByIndex_Statics::NewProp_index,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXmlNode_ChildByIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "UnrealTinyXml|Node" },
		{ "Comment", "//Get the \"Index\" child node, return last found child if none exists, return null if index is not valid!\n" },
		{ "CPP_Default_index", "1" },
		{ "ModuleRelativePath", "Public/XmlNode.h" },
		{ "ToolTip", "Get the \"Index\" child node, return last found child if none exists, return null if index is not valid!" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXmlNode_ChildByIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXmlNode, nullptr, "ChildByIndex", nullptr, nullptr, sizeof(XmlNode_eventChildByIndex_Parms), Z_Construct_UFunction_UXmlNode_ChildByIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXmlNode_ChildByIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXmlNode_ChildByIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXmlNode_ChildByIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXmlNode_ChildByIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXmlNode_ChildByIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXmlNode_DeleteChild_Statics
	{
		struct XmlNode_eventDeleteChild_Parms
		{
			UXmlNode* node;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_node;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UXmlNode_DeleteChild_Statics::NewProp_node = { "node", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XmlNode_eventDeleteChild_Parms, node), Z_Construct_UClass_UXmlNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXmlNode_DeleteChild_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXmlNode_DeleteChild_Statics::NewProp_node,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXmlNode_DeleteChild_Statics::Function_MetaDataParams[] = {
		{ "Category", "UnrealTinyXml|Node" },
		{ "Comment", "//Delete a child of this node.\n" },
		{ "ModuleRelativePath", "Public/XmlNode.h" },
		{ "ToolTip", "Delete a child of this node." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXmlNode_DeleteChild_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXmlNode, nullptr, "DeleteChild", nullptr, nullptr, sizeof(XmlNode_eventDeleteChild_Parms), Z_Construct_UFunction_UXmlNode_DeleteChild_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXmlNode_DeleteChild_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXmlNode_DeleteChild_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXmlNode_DeleteChild_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXmlNode_DeleteChild()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXmlNode_DeleteChild_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXmlNode_DeleteChildren_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXmlNode_DeleteChildren_Statics::Function_MetaDataParams[] = {
		{ "Category", "UnrealTinyXml|Node" },
		{ "Comment", "//Delete all the children of this node.\n" },
		{ "ModuleRelativePath", "Public/XmlNode.h" },
		{ "ToolTip", "Delete all the children of this node." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXmlNode_DeleteChildren_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXmlNode, nullptr, "DeleteChildren", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXmlNode_DeleteChildren_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXmlNode_DeleteChildren_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXmlNode_DeleteChildren()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXmlNode_DeleteChildren_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXmlNode_FirstChild_Statics
	{
		struct XmlNode_eventFirstChild_Parms
		{
			UXmlNode* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UXmlNode_FirstChild_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XmlNode_eventFirstChild_Parms, ReturnValue), Z_Construct_UClass_UXmlNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXmlNode_FirstChild_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXmlNode_FirstChild_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXmlNode_FirstChild_Statics::Function_MetaDataParams[] = {
		{ "Category", "UnrealTinyXml|Node" },
		{ "Comment", "//Get the first child node, or null if none exists.\n" },
		{ "ModuleRelativePath", "Public/XmlNode.h" },
		{ "ToolTip", "Get the first child node, or null if none exists." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXmlNode_FirstChild_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXmlNode, nullptr, "FirstChild", nullptr, nullptr, sizeof(XmlNode_eventFirstChild_Parms), Z_Construct_UFunction_UXmlNode_FirstChild_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXmlNode_FirstChild_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXmlNode_FirstChild_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXmlNode_FirstChild_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXmlNode_FirstChild()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXmlNode_FirstChild_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXmlNode_FirstChildElement_Statics
	{
		struct XmlNode_eventFirstChildElement_Parms
		{
			FString name;
			UXmlElement* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UXmlNode_FirstChildElement_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XmlNode_eventFirstChildElement_Parms, ReturnValue), Z_Construct_UClass_UXmlElement_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXmlNode_FirstChildElement_Statics::NewProp_name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UXmlNode_FirstChildElement_Statics::NewProp_name = { "name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XmlNode_eventFirstChildElement_Parms, name), METADATA_PARAMS(Z_Construct_UFunction_UXmlNode_FirstChildElement_Statics::NewProp_name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UXmlNode_FirstChildElement_Statics::NewProp_name_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXmlNode_FirstChildElement_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXmlNode_FirstChildElement_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXmlNode_FirstChildElement_Statics::NewProp_name,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXmlNode_FirstChildElement_Statics::Function_MetaDataParams[] = {
		{ "Category", "UnrealTinyXml|Node" },
		{ "Comment", "/** Get the first child element, or optionally the first child\n        element with the specified name.\n    */" },
		{ "ModuleRelativePath", "Public/XmlNode.h" },
		{ "ToolTip", "Get the first child element, or optionally the first child\n       element with the specified name." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXmlNode_FirstChildElement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXmlNode, nullptr, "FirstChildElement", nullptr, nullptr, sizeof(XmlNode_eventFirstChildElement_Parms), Z_Construct_UFunction_UXmlNode_FirstChildElement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXmlNode_FirstChildElement_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXmlNode_FirstChildElement_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXmlNode_FirstChildElement_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXmlNode_FirstChildElement()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXmlNode_FirstChildElement_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXmlNode_GetLineNum_Statics
	{
		struct XmlNode_eventGetLineNum_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UXmlNode_GetLineNum_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XmlNode_eventGetLineNum_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXmlNode_GetLineNum_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXmlNode_GetLineNum_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXmlNode_GetLineNum_Statics::Function_MetaDataParams[] = {
		{ "Category", "UnrealTinyXml|Node" },
		{ "Comment", "//Gets the line number the node is in, if the document was parsed from a file.\n" },
		{ "ModuleRelativePath", "Public/XmlNode.h" },
		{ "ToolTip", "Gets the line number the node is in, if the document was parsed from a file." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXmlNode_GetLineNum_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXmlNode, nullptr, "GetLineNum", nullptr, nullptr, sizeof(XmlNode_eventGetLineNum_Parms), Z_Construct_UFunction_UXmlNode_GetLineNum_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXmlNode_GetLineNum_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXmlNode_GetLineNum_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXmlNode_GetLineNum_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXmlNode_GetLineNum()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXmlNode_GetLineNum_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXmlNode_InsertAfterChild_Statics
	{
		struct XmlNode_eventInsertAfterChild_Parms
		{
			UXmlNode* afterThis;
			UXmlNode* addThis;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_addThis;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_afterThis;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UXmlNode_InsertAfterChild_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((XmlNode_eventInsertAfterChild_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UXmlNode_InsertAfterChild_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(XmlNode_eventInsertAfterChild_Parms), &Z_Construct_UFunction_UXmlNode_InsertAfterChild_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UXmlNode_InsertAfterChild_Statics::NewProp_addThis = { "addThis", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XmlNode_eventInsertAfterChild_Parms, addThis), Z_Construct_UClass_UXmlNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UXmlNode_InsertAfterChild_Statics::NewProp_afterThis = { "afterThis", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XmlNode_eventInsertAfterChild_Parms, afterThis), Z_Construct_UClass_UXmlNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXmlNode_InsertAfterChild_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXmlNode_InsertAfterChild_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXmlNode_InsertAfterChild_Statics::NewProp_addThis,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXmlNode_InsertAfterChild_Statics::NewProp_afterThis,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXmlNode_InsertAfterChild_Statics::Function_MetaDataParams[] = {
		{ "Category", "UnrealTinyXml|Node" },
		{ "Comment", "//Add a node after the specified child node.\n" },
		{ "ModuleRelativePath", "Public/XmlNode.h" },
		{ "ToolTip", "Add a node after the specified child node." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXmlNode_InsertAfterChild_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXmlNode, nullptr, "InsertAfterChild", nullptr, nullptr, sizeof(XmlNode_eventInsertAfterChild_Parms), Z_Construct_UFunction_UXmlNode_InsertAfterChild_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXmlNode_InsertAfterChild_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXmlNode_InsertAfterChild_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXmlNode_InsertAfterChild_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXmlNode_InsertAfterChild()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXmlNode_InsertAfterChild_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXmlNode_InsertEndChild_Statics
	{
		struct XmlNode_eventInsertEndChild_Parms
		{
			UXmlNode* addThis;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_addThis;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UXmlNode_InsertEndChild_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((XmlNode_eventInsertEndChild_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UXmlNode_InsertEndChild_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(XmlNode_eventInsertEndChild_Parms), &Z_Construct_UFunction_UXmlNode_InsertEndChild_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UXmlNode_InsertEndChild_Statics::NewProp_addThis = { "addThis", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XmlNode_eventInsertEndChild_Parms, addThis), Z_Construct_UClass_UXmlNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXmlNode_InsertEndChild_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXmlNode_InsertEndChild_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXmlNode_InsertEndChild_Statics::NewProp_addThis,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXmlNode_InsertEndChild_Statics::Function_MetaDataParams[] = {
		{ "Category", "UnrealTinyXml|Node" },
		{ "Comment", "//Add a child node as the last (right) child.\n" },
		{ "ModuleRelativePath", "Public/XmlNode.h" },
		{ "ToolTip", "Add a child node as the last (right) child." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXmlNode_InsertEndChild_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXmlNode, nullptr, "InsertEndChild", nullptr, nullptr, sizeof(XmlNode_eventInsertEndChild_Parms), Z_Construct_UFunction_UXmlNode_InsertEndChild_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXmlNode_InsertEndChild_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXmlNode_InsertEndChild_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXmlNode_InsertEndChild_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXmlNode_InsertEndChild()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXmlNode_InsertEndChild_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXmlNode_InsertFirstChild_Statics
	{
		struct XmlNode_eventInsertFirstChild_Parms
		{
			UXmlNode* addThis;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_addThis;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UXmlNode_InsertFirstChild_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((XmlNode_eventInsertFirstChild_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UXmlNode_InsertFirstChild_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(XmlNode_eventInsertFirstChild_Parms), &Z_Construct_UFunction_UXmlNode_InsertFirstChild_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UXmlNode_InsertFirstChild_Statics::NewProp_addThis = { "addThis", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XmlNode_eventInsertFirstChild_Parms, addThis), Z_Construct_UClass_UXmlNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXmlNode_InsertFirstChild_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXmlNode_InsertFirstChild_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXmlNode_InsertFirstChild_Statics::NewProp_addThis,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXmlNode_InsertFirstChild_Statics::Function_MetaDataParams[] = {
		{ "Category", "UnrealTinyXml|Node" },
		{ "Comment", "//Add a child node as the first (left) child.\n" },
		{ "ModuleRelativePath", "Public/XmlNode.h" },
		{ "ToolTip", "Add a child node as the first (left) child." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXmlNode_InsertFirstChild_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXmlNode, nullptr, "InsertFirstChild", nullptr, nullptr, sizeof(XmlNode_eventInsertFirstChild_Parms), Z_Construct_UFunction_UXmlNode_InsertFirstChild_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXmlNode_InsertFirstChild_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXmlNode_InsertFirstChild_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXmlNode_InsertFirstChild_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXmlNode_InsertFirstChild()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXmlNode_InsertFirstChild_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXmlNode_LastChild_Statics
	{
		struct XmlNode_eventLastChild_Parms
		{
			UXmlNode* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UXmlNode_LastChild_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XmlNode_eventLastChild_Parms, ReturnValue), Z_Construct_UClass_UXmlNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXmlNode_LastChild_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXmlNode_LastChild_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXmlNode_LastChild_Statics::Function_MetaDataParams[] = {
		{ "Category", "UnrealTinyXml|Node" },
		{ "Comment", "//Get the last child node, or null if none exists.\n" },
		{ "ModuleRelativePath", "Public/XmlNode.h" },
		{ "ToolTip", "Get the last child node, or null if none exists." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXmlNode_LastChild_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXmlNode, nullptr, "LastChild", nullptr, nullptr, sizeof(XmlNode_eventLastChild_Parms), Z_Construct_UFunction_UXmlNode_LastChild_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXmlNode_LastChild_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXmlNode_LastChild_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXmlNode_LastChild_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXmlNode_LastChild()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXmlNode_LastChild_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXmlNode_LastChildElement_Statics
	{
		struct XmlNode_eventLastChildElement_Parms
		{
			FString name;
			UXmlElement* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UXmlNode_LastChildElement_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XmlNode_eventLastChildElement_Parms, ReturnValue), Z_Construct_UClass_UXmlElement_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXmlNode_LastChildElement_Statics::NewProp_name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UXmlNode_LastChildElement_Statics::NewProp_name = { "name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XmlNode_eventLastChildElement_Parms, name), METADATA_PARAMS(Z_Construct_UFunction_UXmlNode_LastChildElement_Statics::NewProp_name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UXmlNode_LastChildElement_Statics::NewProp_name_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXmlNode_LastChildElement_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXmlNode_LastChildElement_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXmlNode_LastChildElement_Statics::NewProp_name,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXmlNode_LastChildElement_Statics::Function_MetaDataParams[] = {
		{ "Category", "UnrealTinyXml|Node" },
		{ "Comment", "/** Get the last child element or optionally the last child\n        element with the specified name.\n    */" },
		{ "ModuleRelativePath", "Public/XmlNode.h" },
		{ "ToolTip", "Get the last child element or optionally the last child\n       element with the specified name." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXmlNode_LastChildElement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXmlNode, nullptr, "LastChildElement", nullptr, nullptr, sizeof(XmlNode_eventLastChildElement_Parms), Z_Construct_UFunction_UXmlNode_LastChildElement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXmlNode_LastChildElement_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXmlNode_LastChildElement_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXmlNode_LastChildElement_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXmlNode_LastChildElement()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXmlNode_LastChildElement_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXmlNode_NextSibling_Statics
	{
		struct XmlNode_eventNextSibling_Parms
		{
			UXmlNode* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UXmlNode_NextSibling_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XmlNode_eventNextSibling_Parms, ReturnValue), Z_Construct_UClass_UXmlNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXmlNode_NextSibling_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXmlNode_NextSibling_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXmlNode_NextSibling_Statics::Function_MetaDataParams[] = {
		{ "Category", "UnrealTinyXml|Node" },
		{ "Comment", "//Get the next (right) sibling node of this node.\n" },
		{ "ModuleRelativePath", "Public/XmlNode.h" },
		{ "ToolTip", "Get the next (right) sibling node of this node." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXmlNode_NextSibling_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXmlNode, nullptr, "NextSibling", nullptr, nullptr, sizeof(XmlNode_eventNextSibling_Parms), Z_Construct_UFunction_UXmlNode_NextSibling_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXmlNode_NextSibling_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXmlNode_NextSibling_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXmlNode_NextSibling_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXmlNode_NextSibling()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXmlNode_NextSibling_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXmlNode_NextSiblingElement_Statics
	{
		struct XmlNode_eventNextSiblingElement_Parms
		{
			FString name;
			UXmlElement* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UXmlNode_NextSiblingElement_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XmlNode_eventNextSiblingElement_Parms, ReturnValue), Z_Construct_UClass_UXmlElement_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXmlNode_NextSiblingElement_Statics::NewProp_name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UXmlNode_NextSiblingElement_Statics::NewProp_name = { "name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XmlNode_eventNextSiblingElement_Parms, name), METADATA_PARAMS(Z_Construct_UFunction_UXmlNode_NextSiblingElement_Statics::NewProp_name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UXmlNode_NextSiblingElement_Statics::NewProp_name_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXmlNode_NextSiblingElement_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXmlNode_NextSiblingElement_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXmlNode_NextSiblingElement_Statics::NewProp_name,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXmlNode_NextSiblingElement_Statics::Function_MetaDataParams[] = {
		{ "Category", "UnrealTinyXml|Node" },
		{ "Comment", "//Get the next (right) sibling element of this node, with an optionally supplied name.\n" },
		{ "ModuleRelativePath", "Public/XmlNode.h" },
		{ "ToolTip", "Get the next (right) sibling element of this node, with an optionally supplied name." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXmlNode_NextSiblingElement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXmlNode, nullptr, "NextSiblingElement", nullptr, nullptr, sizeof(XmlNode_eventNextSiblingElement_Parms), Z_Construct_UFunction_UXmlNode_NextSiblingElement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXmlNode_NextSiblingElement_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXmlNode_NextSiblingElement_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXmlNode_NextSiblingElement_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXmlNode_NextSiblingElement()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXmlNode_NextSiblingElement_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXmlNode_NoChildren_Statics
	{
		struct XmlNode_eventNoChildren_Parms
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
	void Z_Construct_UFunction_UXmlNode_NoChildren_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((XmlNode_eventNoChildren_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UXmlNode_NoChildren_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(XmlNode_eventNoChildren_Parms), &Z_Construct_UFunction_UXmlNode_NoChildren_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXmlNode_NoChildren_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXmlNode_NoChildren_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXmlNode_NoChildren_Statics::Function_MetaDataParams[] = {
		{ "Category", "UnrealTinyXml|Node" },
		{ "Comment", "// Returns true if this node has no children.\n" },
		{ "ModuleRelativePath", "Public/XmlNode.h" },
		{ "ToolTip", "Returns true if this node has no children." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXmlNode_NoChildren_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXmlNode, nullptr, "NoChildren", nullptr, nullptr, sizeof(XmlNode_eventNoChildren_Parms), Z_Construct_UFunction_UXmlNode_NoChildren_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXmlNode_NoChildren_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXmlNode_NoChildren_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXmlNode_NoChildren_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXmlNode_NoChildren()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXmlNode_NoChildren_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXmlNode_Parent_Statics
	{
		struct XmlNode_eventParent_Parms
		{
			UXmlNode* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UXmlNode_Parent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XmlNode_eventParent_Parms, ReturnValue), Z_Construct_UClass_UXmlNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXmlNode_Parent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXmlNode_Parent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXmlNode_Parent_Statics::Function_MetaDataParams[] = {
		{ "Category", "UnrealTinyXml|Node" },
		{ "Comment", "//Get the parent of this node on the DOM.\n" },
		{ "ModuleRelativePath", "Public/XmlNode.h" },
		{ "ToolTip", "Get the parent of this node on the DOM." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXmlNode_Parent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXmlNode, nullptr, "Parent", nullptr, nullptr, sizeof(XmlNode_eventParent_Parms), Z_Construct_UFunction_UXmlNode_Parent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXmlNode_Parent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXmlNode_Parent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXmlNode_Parent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXmlNode_Parent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXmlNode_Parent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXmlNode_PreviousSibling_Statics
	{
		struct XmlNode_eventPreviousSibling_Parms
		{
			UXmlNode* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UXmlNode_PreviousSibling_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XmlNode_eventPreviousSibling_Parms, ReturnValue), Z_Construct_UClass_UXmlNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXmlNode_PreviousSibling_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXmlNode_PreviousSibling_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXmlNode_PreviousSibling_Statics::Function_MetaDataParams[] = {
		{ "Category", "UnrealTinyXml|Node" },
		{ "Comment", "//Get the previous (left) sibling node of this node.\n" },
		{ "ModuleRelativePath", "Public/XmlNode.h" },
		{ "ToolTip", "Get the previous (left) sibling node of this node." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXmlNode_PreviousSibling_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXmlNode, nullptr, "PreviousSibling", nullptr, nullptr, sizeof(XmlNode_eventPreviousSibling_Parms), Z_Construct_UFunction_UXmlNode_PreviousSibling_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXmlNode_PreviousSibling_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXmlNode_PreviousSibling_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXmlNode_PreviousSibling_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXmlNode_PreviousSibling()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXmlNode_PreviousSibling_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXmlNode_PreviousSiblingElement_Statics
	{
		struct XmlNode_eventPreviousSiblingElement_Parms
		{
			FString name;
			UXmlElement* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UXmlNode_PreviousSiblingElement_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XmlNode_eventPreviousSiblingElement_Parms, ReturnValue), Z_Construct_UClass_UXmlElement_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXmlNode_PreviousSiblingElement_Statics::NewProp_name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UXmlNode_PreviousSiblingElement_Statics::NewProp_name = { "name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XmlNode_eventPreviousSiblingElement_Parms, name), METADATA_PARAMS(Z_Construct_UFunction_UXmlNode_PreviousSiblingElement_Statics::NewProp_name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UXmlNode_PreviousSiblingElement_Statics::NewProp_name_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXmlNode_PreviousSiblingElement_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXmlNode_PreviousSiblingElement_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXmlNode_PreviousSiblingElement_Statics::NewProp_name,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXmlNode_PreviousSiblingElement_Statics::Function_MetaDataParams[] = {
		{ "Category", "UnrealTinyXml|Node" },
		{ "Comment", "//Get the previous (left) sibling element of this node, with an optionally supplied name.\n" },
		{ "ModuleRelativePath", "Public/XmlNode.h" },
		{ "ToolTip", "Get the previous (left) sibling element of this node, with an optionally supplied name." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXmlNode_PreviousSiblingElement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXmlNode, nullptr, "PreviousSiblingElement", nullptr, nullptr, sizeof(XmlNode_eventPreviousSiblingElement_Parms), Z_Construct_UFunction_UXmlNode_PreviousSiblingElement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXmlNode_PreviousSiblingElement_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXmlNode_PreviousSiblingElement_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXmlNode_PreviousSiblingElement_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXmlNode_PreviousSiblingElement()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXmlNode_PreviousSiblingElement_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXmlNode_SetValue_Statics
	{
		struct XmlNode_eventSetValue_Parms
		{
			FString val;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_val_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_val;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXmlNode_SetValue_Statics::NewProp_val_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UXmlNode_SetValue_Statics::NewProp_val = { "val", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XmlNode_eventSetValue_Parms, val), METADATA_PARAMS(Z_Construct_UFunction_UXmlNode_SetValue_Statics::NewProp_val_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UXmlNode_SetValue_Statics::NewProp_val_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXmlNode_SetValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXmlNode_SetValue_Statics::NewProp_val,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXmlNode_SetValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "UnrealTinyXml|Node" },
		{ "Comment", "//Set the Value of an XML node.\n" },
		{ "ModuleRelativePath", "Public/XmlNode.h" },
		{ "ToolTip", "Set the Value of an XML node." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXmlNode_SetValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXmlNode, nullptr, "SetValue", nullptr, nullptr, sizeof(XmlNode_eventSetValue_Parms), Z_Construct_UFunction_UXmlNode_SetValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXmlNode_SetValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXmlNode_SetValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXmlNode_SetValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXmlNode_SetValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXmlNode_SetValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXmlNode_ToElement_Statics
	{
		struct XmlNode_eventToElement_Parms
		{
			UXmlElement* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UXmlNode_ToElement_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XmlNode_eventToElement_Parms, ReturnValue), Z_Construct_UClass_UXmlElement_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXmlNode_ToElement_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXmlNode_ToElement_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXmlNode_ToElement_Statics::Function_MetaDataParams[] = {
		{ "Category", "UnrealTinyXml|Node" },
		{ "Comment", "//Safely cast to a Element, or null.\n" },
		{ "ModuleRelativePath", "Public/XmlNode.h" },
		{ "ToolTip", "Safely cast to a Element, or null." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXmlNode_ToElement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXmlNode, nullptr, "ToElement", nullptr, nullptr, sizeof(XmlNode_eventToElement_Parms), Z_Construct_UFunction_UXmlNode_ToElement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXmlNode_ToElement_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXmlNode_ToElement_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXmlNode_ToElement_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXmlNode_ToElement()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXmlNode_ToElement_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXmlNode_Value_Statics
	{
		struct XmlNode_eventValue_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UXmlNode_Value_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XmlNode_eventValue_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXmlNode_Value_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXmlNode_Value_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXmlNode_Value_Statics::Function_MetaDataParams[] = {
		{ "Category", "UnrealTinyXml|Node" },
		{ "Comment", "//Set the Value of an XML node.\n" },
		{ "ModuleRelativePath", "Public/XmlNode.h" },
		{ "ToolTip", "Set the Value of an XML node." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXmlNode_Value_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXmlNode, nullptr, "Value", nullptr, nullptr, sizeof(XmlNode_eventValue_Parms), Z_Construct_UFunction_UXmlNode_Value_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXmlNode_Value_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXmlNode_Value_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXmlNode_Value_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXmlNode_Value()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXmlNode_Value_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UXmlNode_NoRegister()
	{
		return UXmlNode::StaticClass();
	}
	struct Z_Construct_UClass_UXmlNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UXmlNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealTinyXml,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UXmlNode_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UXmlNode_AllChild, "AllChild" }, // 2522151758
		{ &Z_Construct_UFunction_UXmlNode_ChildByIndex, "ChildByIndex" }, // 1584970301
		{ &Z_Construct_UFunction_UXmlNode_DeleteChild, "DeleteChild" }, // 1420074526
		{ &Z_Construct_UFunction_UXmlNode_DeleteChildren, "DeleteChildren" }, // 1998105067
		{ &Z_Construct_UFunction_UXmlNode_FirstChild, "FirstChild" }, // 1059280100
		{ &Z_Construct_UFunction_UXmlNode_FirstChildElement, "FirstChildElement" }, // 1651524776
		{ &Z_Construct_UFunction_UXmlNode_GetLineNum, "GetLineNum" }, // 213272294
		{ &Z_Construct_UFunction_UXmlNode_InsertAfterChild, "InsertAfterChild" }, // 67478701
		{ &Z_Construct_UFunction_UXmlNode_InsertEndChild, "InsertEndChild" }, // 302329830
		{ &Z_Construct_UFunction_UXmlNode_InsertFirstChild, "InsertFirstChild" }, // 4037325768
		{ &Z_Construct_UFunction_UXmlNode_LastChild, "LastChild" }, // 4156050396
		{ &Z_Construct_UFunction_UXmlNode_LastChildElement, "LastChildElement" }, // 2966284718
		{ &Z_Construct_UFunction_UXmlNode_NextSibling, "NextSibling" }, // 2078003308
		{ &Z_Construct_UFunction_UXmlNode_NextSiblingElement, "NextSiblingElement" }, // 1992973939
		{ &Z_Construct_UFunction_UXmlNode_NoChildren, "NoChildren" }, // 1658044350
		{ &Z_Construct_UFunction_UXmlNode_Parent, "Parent" }, // 1343868415
		{ &Z_Construct_UFunction_UXmlNode_PreviousSibling, "PreviousSibling" }, // 3529681239
		{ &Z_Construct_UFunction_UXmlNode_PreviousSiblingElement, "PreviousSiblingElement" }, // 809138869
		{ &Z_Construct_UFunction_UXmlNode_SetValue, "SetValue" }, // 37073413
		{ &Z_Construct_UFunction_UXmlNode_ToElement, "ToElement" }, // 3686817304
		{ &Z_Construct_UFunction_UXmlNode_Value, "Value" }, // 1840115882
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UXmlNode_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "XmlNode.h" },
		{ "ModuleRelativePath", "Public/XmlNode.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UXmlNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UXmlNode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UXmlNode_Statics::ClassParams = {
		&UXmlNode::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UXmlNode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UXmlNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UXmlNode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UXmlNode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UXmlNode, 2461927085);
	template<> UNREALTINYXML_API UClass* StaticClass<UXmlNode>()
	{
		return UXmlNode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UXmlNode(Z_Construct_UClass_UXmlNode, &UXmlNode::StaticClass, TEXT("/Script/UnrealTinyXml"), TEXT("UXmlNode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UXmlNode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
