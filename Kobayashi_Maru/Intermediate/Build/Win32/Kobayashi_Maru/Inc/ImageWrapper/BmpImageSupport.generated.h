// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef IMAGEWRAPPER_BmpImageSupport_generated_h
#error "BmpImageSupport.generated.h already included, missing '#pragma once' in BmpImageSupport.h"
#endif
#define IMAGEWRAPPER_BmpImageSupport_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_ImageWrapper_Public_BmpImageSupport_h


#define FOREACH_ENUM_EBITMAPCSTYPE(op) \
	op(EBitmapCSType::BCST_BLCS_CALIBRATED_RGB) \
	op(EBitmapCSType::BCST_LCS_sRGB) \
	op(EBitmapCSType::BCST_LCS_WINDOWS_COLOR_SPACE) \
	op(EBitmapCSType::BCST_PROFILE_LINKED) \
	op(EBitmapCSType::BCST_PROFILE_EMBEDDED) 

enum class EBitmapCSType : uint32;
template<> IMAGEWRAPPER_API UEnum* StaticEnum<EBitmapCSType>();

#define FOREACH_ENUM_EBITMAPHEADERVERSION(op) \
	op(EBitmapHeaderVersion::BHV_BITMAPINFOHEADER) \
	op(EBitmapHeaderVersion::BHV_BITMAPV2INFOHEADER) \
	op(EBitmapHeaderVersion::BHV_BITMAPV3INFOHEADER) \
	op(EBitmapHeaderVersion::BHV_BITMAPV4HEADER) \
	op(EBitmapHeaderVersion::BHV_BITMAPV5HEADER) 

enum class EBitmapHeaderVersion : uint8;
template<> IMAGEWRAPPER_API UEnum* StaticEnum<EBitmapHeaderVersion>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
