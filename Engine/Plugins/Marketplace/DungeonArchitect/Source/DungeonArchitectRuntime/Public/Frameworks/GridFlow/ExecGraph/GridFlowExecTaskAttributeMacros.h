//$ Copyright 2015-20, Code Respawn Technologies Pvt Ltd - All Rights Reserved $//

#pragma once
#include "CoreMinimal.h"

#define __GRIDFLOWATTR_GET_IMPL(Variable, AttrType)	\
	if (InParameterName == #Variable) {	\
		OutValue.AttrType.Set(Variable);	\
		return true;	\
	}

#define __GRIDFLOWATTR_GET_IMPL_EX(Variable, AttrType, Value)	\
	if (InParameterName == #Variable) {	\
		OutValue.AttrType.Set(Value);	\
		return true;	\
	}

#define GRIDFLOWATTR_GET_INT(Variable)		__GRIDFLOWATTR_GET_IMPL(Variable, NumberValue)
#define GRIDFLOWATTR_GET_FLOAT(Variable)	__GRIDFLOWATTR_GET_IMPL(Variable, NumberValue)
#define GRIDFLOWATTR_GET_BOOL(Variable)		__GRIDFLOWATTR_GET_IMPL(Variable, BoolValue)
#define GRIDFLOWATTR_GET_SIZE(Variable)		__GRIDFLOWATTR_GET_IMPL_EX(Variable, SizeValue, FVector2D(Variable.X, Variable.Y))
#define GRIDFLOWATTR_GET_STRING(Variable)	__GRIDFLOWATTR_GET_IMPL(Variable, StringValue)
#define GRIDFLOWATTR_GET_STRINGARRAY(Variable)	__GRIDFLOWATTR_GET_IMPL(Variable, StringArrayValue)


#define __GRIDFLOWATTR_SET_IMPL(Variable, AttrType)	\
	if (InParameterName == #Variable && InValue.AttrType.IsSet()) {	\
		Variable = InValue.AttrType.Get();	\
		return true;	\
	}

#define __GRIDFLOWATTR_SET_IMPL_EX(Variable, AttrType, Value)	\
	if (InParameterName == #Variable && InValue.AttrType.IsSet()) {	\
		Variable = Value;	\
		return true;	\
	}

#define __GRIDFLOWATTR_SET_IMPL2(VariableName, AttrType, Variable)	\
	if (InParameterName == #VariableName && InValue.AttrType.IsSet()) {	\
		Variable = InValue.AttrType.Get();	\
		return true;	\
	}

#define GRIDFLOWATTR_SET_INT(Variable)		__GRIDFLOWATTR_SET_IMPL_EX(Variable, NumberValue, FMath::RoundToInt(InValue.NumberValue.Get()))
#define GRIDFLOWATTR_SET_FLOAT(Variable)	__GRIDFLOWATTR_SET_IMPL(Variable, NumberValue)
#define GRIDFLOWATTR_SET_BOOL(Variable)		__GRIDFLOWATTR_SET_IMPL(Variable, BoolValue)
#define GRIDFLOWATTR_SET_SIZEF(Variable)	__GRIDFLOWATTR_SET_IMPL(Variable, SizeValue)
#define GRIDFLOWATTR_SET_SIZEI(Variable)	__GRIDFLOWATTR_SET_IMPL_EX(Variable, SizeValue, FIntPoint(FMath::RoundToInt(InValue.SizeValue.Get().X),FMath::RoundToInt(InValue.SizeValue.Get().Y)))
#define GRIDFLOWATTR_SET_STRING(Variable)	__GRIDFLOWATTR_SET_IMPL(Variable, StringValue)
#define GRIDFLOWATTR_SET_STRINGARRAY(Variable)	__GRIDFLOWATTR_SET_IMPL(Variable, StringArrayValue)

#define GRIDFLOWATTR_SET_PARSE_INT(Variable)			{ FGridFlowAttribute InValue = FGridFlowAttribute::ParseNumber(InSerializedText); GRIDFLOWATTR_SET_INT(Variable) }
#define GRIDFLOWATTR_SET_PARSE_FLOAT(Variable)			{ FGridFlowAttribute InValue = FGridFlowAttribute::ParseNumber(InSerializedText); GRIDFLOWATTR_SET_FLOAT(Variable) }
#define GRIDFLOWATTR_SET_PARSE_BOOL(Variable)			{ FGridFlowAttribute InValue = FGridFlowAttribute::ParseBool(InSerializedText); GRIDFLOWATTR_SET_BOOL(Variable) }
#define GRIDFLOWATTR_SET_PARSE_SIZEF(Variable)			{ FGridFlowAttribute InValue = FGridFlowAttribute::ParseSize(InSerializedText); GRIDFLOWATTR_SET_SIZEF(Variable) }
#define GRIDFLOWATTR_SET_PARSE_SIZEI(Variable)			{ FGridFlowAttribute InValue = FGridFlowAttribute::ParseSize(InSerializedText); GRIDFLOWATTR_SET_SIZEI(Variable) }
#define GRIDFLOWATTR_SET_PARSE_STRING(Variable)			{ FGridFlowAttribute InValue = FGridFlowAttribute::ParseString(InSerializedText); GRIDFLOWATTR_SET_STRING(Variable) }
#define GRIDFLOWATTR_SET_PARSE_STRINGARRAY(Variable)	{ FGridFlowAttribute InValue = FGridFlowAttribute::ParseStringArray(InSerializedText); GRIDFLOWATTR_SET_STRINGARRAY(Variable) }


#define GRIDFLOWATTR_SET_PARSEEX_INT(VariableName, Variable)			{ FGridFlowAttribute InValue = FGridFlowAttribute::ParseNumber(InSerializedText); __GRIDFLOWATTR_SET_IMPL2(VariableName, NumberValue, Variable) }
#define GRIDFLOWATTR_SET_PARSEEX_FLOAT(VariableName, Variable)			{ FGridFlowAttribute InValue = FGridFlowAttribute::ParseNumber(InSerializedText); __GRIDFLOWATTR_SET_IMPL2(VariableName, NumberValue, Variable) }
#define GRIDFLOWATTR_SET_PARSEEX_BOOL(VariableName, Variable)			{ FGridFlowAttribute InValue = FGridFlowAttribute::ParseBool(InSerializedText); __GRIDFLOWATTR_SET_IMPL2(VariableName, BoolValue, Variable) }
#define GRIDFLOWATTR_SET_PARSEEX_SIZEF(VariableName, Variable)			{ FGridFlowAttribute InValue = FGridFlowAttribute::ParseSize(InSerializedText); __GRIDFLOWATTR_SET_IMPL2(VariableName, SizeValue, Variable) }
#define GRIDFLOWATTR_SET_PARSEEX_SIZEI(VariableName, Variable)			{ FGridFlowAttribute InValue = FGridFlowAttribute::ParseSize(InSerializedText); __GRIDFLOWATTR_SET_IMPL2(VariableName, SizeValue, Variable) }
#define GRIDFLOWATTR_SET_PARSEEX_STRING(VariableName, Variable)			{ FGridFlowAttribute InValue = FGridFlowAttribute::ParseString(InSerializedText); __GRIDFLOWATTR_SET_IMPL2(VariableName, StringValue, Variable) }
#define GRIDFLOWATTR_SET_PARSEEX_STRINGARRAY(VariableName, Variable)	{ FGridFlowAttribute InValue = FGridFlowAttribute::ParseStringArray(InSerializedText); __GRIDFLOWATTR_SET_IMPL2(VariableName, StringArrayValue, Variable) }
