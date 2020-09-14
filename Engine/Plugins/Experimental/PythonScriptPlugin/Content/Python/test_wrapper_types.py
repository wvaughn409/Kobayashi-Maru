# Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

import unreal

@unreal.uclass()
class PyTestPythonDefinedObject(unreal.PyTestObject):
	@unreal.ufunction(override=True)
	def func_blueprint_implementable(self, value):
		return value * 2
	@unreal.ufunction(override=True)
	def func_blueprint_native(self, value):
		return value * 4
	@unreal.ufunction(override=True)
	def func_blueprint_native_ref(self, struct):
		struct.int *= 4
		struct.string = "wooble"
		return struct

unreal.flush_generated_type_reinstancing()

def _compare_value(val, other, inverse=False):
	if inverse:
		if val == other:
			unreal.log_error("Value was '{0}' but it wasn't supposed to be!".format(other))
	else:
		if val != other:
			unreal.log_error("Value was '{0}' but '{1}' was expected!".format(val, other))

def _compare_property_value(obj, other, prop_name, inverse=False):
	obj_value = getattr(obj, prop_name)
	other_value = getattr(other, prop_name)
	if inverse:
		if obj_value == other_value:
			unreal.log_error("Property '{0}' has the value '{1}' but it wasn't supposed to!".format(prop_name, other_value))
	else:
		if obj_value != other_value:
			unreal.log_error("Property '{0}' has the value '{1}' but '{2}' was expected!".format(prop_name, other_value, obj_value))
		
def _compare_common_properties(obj, other, inverse=False):
	_compare_property_value(obj, other, "bool", inverse)
	_compare_property_value(obj, other, "int", inverse)
	_compare_property_value(obj, other, "float", inverse)
	_compare_property_value(obj, other, "enum", inverse)
	_compare_property_value(obj, other, "string", inverse)
	_compare_property_value(obj, other, "name", inverse)
	_compare_property_value(obj, other, "text", inverse)
	_compare_property_value(obj, other, "string_array", inverse)
	_compare_property_value(obj, other, "string_set", inverse)
	_compare_property_value(obj, other, "string_int_map", inverse)

def _test_set_value(obj, prop_name, value):
	setattr(obj, prop_name, value)
	cur_value = getattr(obj, prop_name)
	if cur_value != value:
		unreal.log_error("Property '{0}' on '{1}' has the value '{2}' but '{3}' was expected!".format(prop_name, type(obj).__name__, cur_value, value))
		
def _test_common_properties(obj):
	_test_set_value(obj, "bool", True)
	_test_set_value(obj, "int", 10)
	_test_set_value(obj, "float", 100)
	_test_set_value(obj, "enum", unreal.PyTestEnum.TWO)
	_test_set_value(obj, "string", "Hello World!")
	_test_set_value(obj, "name", "Hello World!")
	_test_set_value(obj, "text", "Hello World!")
	_test_set_value(obj, "string_array", ["One", "Two"])
	_test_set_value(obj, "string_set", ["One", "Two"])
	_test_set_value(obj, "string_int_map", {"One":1, "Two":2})
	
def _test_object_properties(obj):
	_test_common_properties(obj)
	_test_common_properties(obj.struct)
	_test_common_properties(obj.child_struct)
	
	if obj.delegate:
		unreal.log_error("Property 'delegate' on '{0}' is bound when it should be unbound!".format(type(obj).__name__))
	obj.delegate.bind_function(obj, "delegate_property_callback")
	if not obj.delegate:
		unreal.log_error("Property 'delegate' on '{0}' is unbound when it should be bound!".format(type(obj).__name__))
	if obj.delegate:
		_compare_value(obj.delegate(obj.int), 10)
	obj.delegate.unbind()
	if obj.delegate:
		unreal.log_error("Property 'delegate' on '{0}' is bound when it should be unbound!".format(type(obj).__name__))
	
	if obj.delegate:
		unreal.log_error("Property 'delegate' on '{0}' is bound when it should be unbound!".format(type(obj).__name__))
	obj.delegate.bind_callable(lambda value : value * 2)
	if not obj.delegate:
		unreal.log_error("Property 'delegate' on '{0}' is unbound when it should be bound!".format(type(obj).__name__))
	if obj.delegate:
		_compare_value(obj.delegate(obj.int), 20)
	obj.delegate.unbind()
	if obj.delegate:
		unreal.log_error("Property 'delegate' on '{0}' is bound when it should be unbound!".format(type(obj).__name__))
	
	if obj.multicast_delegate:
		unreal.log_error("Property 'multicast_delegate' on '{0}' is bound when it should be unbound!".format(type(obj).__name__))
	obj.multicast_delegate.add_function(obj, "multicast_delegate_property_callback")
	if not obj.multicast_delegate:
		unreal.log_error("Property 'multicast_delegate' on '{0}' is unbound when it should be bound!".format(type(obj).__name__))
	if obj.multicast_delegate:
		obj.multicast_delegate(obj.string)
	obj.multicast_delegate.clear()
	if obj.multicast_delegate:
		unreal.log_error("Property 'multicast_delegate' on '{0}' is bound when it should be unbound!".format(type(obj).__name__))
	
	for s in obj.struct_array:
		_test_common_properties(s)
	_compare_common_properties(obj, obj.struct)
	
	for s in obj.struct_array:
		_compare_common_properties(obj, s, True)
	
def _test_object_methods(obj):
	obj.func_taking_py_test_struct(unreal.PyTestStruct())
	
	obj.func_taking_py_test_struct(unreal.PyTestChildStruct())
	obj.func_taking_py_test_child_struct(unreal.PyTestChildStruct())
	
def _test_object_method_overrides(obj, expected_bp_val, expected_native_val, expected_native_str):
	s = unreal.PyTestStruct()
	s.int = 10
	s.string = "testing"
	
	_compare_value(obj.func_blueprint_implementable(10), expected_bp_val)
	_compare_value(obj.call_func_blueprint_implementable(10), expected_bp_val)
	
	_compare_value(obj.func_blueprint_native(10), expected_native_val)
	_compare_value(obj.call_func_blueprint_native(10), expected_native_val)
	
	rs = obj.func_blueprint_native_ref(s)
	_compare_value(rs.int, expected_native_val)
	_compare_value(rs.string, expected_native_str)
	
	rs = obj.call_func_blueprint_native_ref(s)
	_compare_value(rs.int, expected_native_val)
	_compare_value(rs.string, expected_native_str)
	
def _test_list_api(l):
	_compare_value(len(l), 2)
	_compare_value(l[0], "one")
	_compare_value(l[1], "two")
	l.append("three")
	_compare_value(l[2], "three")
	l[2] = "three?"
	_compare_value(l[2], "three?")
	_compare_value(l.count("three?"), 1)
	_compare_value("three?" in l, True)
	l.remove("three?")
	_compare_value(l.count("three?"), 0)
	_compare_value("three?" in l, False)
	l.pop()
	_compare_value("two" in l, False)
	l.insert(1, "two")
	_compare_value(l.index("two"), 1)
	l.extend(["three", "four"])
	_compare_value(l[2], "three")
	_compare_value(l[3], "four")
	l.reverse()
	_compare_value(l[0], "four")
	l.sort()
	_compare_value(l[1], "one")
	
def _test_array_type():
	p = ["one", "two"]
	u = unreal.Array.cast(str, p)
	_test_list_api(p)
	_test_list_api(u)
	
def _test_set_api(s):
	_compare_value(len(s), 2)
	_compare_value("one" in s, True)
	_compare_value("two" in s, True)
	_compare_value("three" in s, False)
	s.add("three")
	_compare_value("three" in s, True)
	s.remove("three")
	_compare_value("three" in s, False)
	s.pop()
	_compare_value(len(s), 1)
	s.clear()
	_compare_value(len(s), 0)
	s.add("one")
	s.add("two")
	s.add("three")
	_compare_value(s.difference(set(["one", "four"])), set(["two", "three"]))
	_compare_value(s.intersection(set(["one", "four"])), set(["one"]))
	_compare_value(s.symmetric_difference(set(["one", "four"])), set(["two", "three", "four"]))
	_compare_value(s.union(set(["one", "four"])), set(["one", "two", "three", "four"]))
	_compare_value(s.isdisjoint(set(["four"])), True)
	_compare_value(s.isdisjoint(set(["one", "four"])), False)
	_compare_value(s.issubset(set(["one", "two", "three", "four"])), True)
	_compare_value(s.issubset(set(["one", "four"])), False)
	_compare_value(s.issuperset(set(["one", "two"])), True)
	_compare_value(s.issuperset(set(["one", "four"])), False)
	
def _test_set_type():
	p = set(["one", "two"])
	u = unreal.Set.cast(str, p)
	_test_set_api(p)
	_test_set_api(u)
	
def _test_dict_api(d):
	_compare_value(len(d), 2)
	_compare_value("one" in d, True)
	_compare_value("two" in d, True)
	_compare_value("three" in d, False)
	d["three"] = 3
	_compare_value("three" in d, True)
	del d["three"]
	_compare_value("three" in d, False)
	_compare_value(d.get("two", 20), 2)
	_compare_value(d.get("three", 30), 30)
	d.setdefault("two", 20)
	d.setdefault("three", 30)
	_compare_value(d["two"], 2)
	_compare_value(d["three"], 30)
	_compare_value(d.pop("two", 20), 2)
	_compare_value(d.get("three", 3), 30)
	_compare_value(d.get("four", 40), 40)
	d.clear()
	_compare_value(len(d), 0)
	d.update({"one":1, "two":2})
	_compare_value(len(d), 2)
	
def _test_map_type():
	p = {"one":1, "two":2}
	u = unreal.Map.cast(str, int, p)
	_test_dict_api(p)
	_test_dict_api(u)
	
if __name__ == "__main__":
	s = unreal.PyTestStruct()
	_test_common_properties(s)
	
	o = unreal.PyTestObject()
	_test_object_properties(o)
	_test_object_methods(o)
	_test_object_method_overrides(o, 0, 10, "testing")
	
	co = unreal.PyTestChildObject()
	_test_object_properties(co)
	_test_object_methods(co)
	_test_object_method_overrides(co, 0, 10, "testing")
	
	pdo = PyTestPythonDefinedObject()
	_test_object_properties(pdo)
	_test_object_methods(pdo)
	_test_object_method_overrides(pdo, 20, 40, "wooble")
	
	_test_array_type()
	_test_set_type()
	_test_map_type()
	
	oa = unreal.PyTestObject.return_array()
	_compare_value(len(oa), 1)
	_compare_value(oa[0], 10)
	
	os = unreal.PyTestObject.return_set()
	_compare_value(len(os), 1)
	_compare_value(10 in os, True)
	
	om = unreal.PyTestObject.return_map()
	_compare_value(len(om), 1)
	_compare_value(10 in om, True)
	_compare_value(om.get(10, False), True)
	
	unreal.log("Tests Completed!")
	