# Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

from _unreal_core import *
import sys as _sys

class _Logger(object):
	def __init__(self, log_func, flush_func):
		self.encoding = "utf-8"
		self.log_func = log_func
		self.flush_func = flush_func
	def write(self, log_text):
		self.log_func(log_text)
	def writelines(self, lines):
		for line in lines:
			self.write(line)
	def flush(self):
		self.flush_func()

_sys.stdout = _Logger(log, log_flush)
_sys.stderr = _Logger(log_error, log_flush)

def uclass():
	'''decorator used to define UClass types from Python'''
	def _uclass(type):
		generate_class(type)
		return type
	return _uclass
	
def ustruct():
	'''decorator used to define UStruct types from Python'''
	def _ustruct(type):
		generate_struct(type)
		return type
	return _ustruct
	
def uenum():
	'''decorator used to define UEnum types from Python'''
	def _uenum(type):
		generate_enum(type)
		return type
	return _uenum

def uvalue(val, meta=None):
	'''function used to define constant values from Python'''
	return ValueDef(val, meta)
	
def uproperty(type, meta=None, getter=None, setter=None):
	'''function used to define UProperty fields from Python'''
	return PropertyDef(type, meta, getter, setter)

def ufunction(meta=None, ret=None, params=None, override=None, static=None, pure=None, getter=None, setter=None):
	'''decorator used to define UFunction fields from Python'''
	def _ufunction(func):
		return FunctionDef(func, meta, ret, params, override, static, pure, getter, setter)
	return _ufunction
	