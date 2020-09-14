import unreal
import os
import platform
import re

# Add path to dlls
usd_plugin_root_dir = os.path.realpath(os.path.join(os.path.dirname(os.path.abspath(__file__)), "..", "..", ".."))
usd_dll_path = os.path.join(usd_plugin_root_dir, "Binaries")

if platform.system() == 'Windows':
	usd_dll_path = os.path.join(usd_dll_path, "Win64")
	os_env_path = os.environ['PATH']
	
	if usd_dll_path not in os_env_path:
		os_env_path += os.pathsep + usd_dll_path
		os.environ['PATH'] = os_env_path

from pxr import Usd, UsdGeom, UsdLux, Sdf

class UsdEmptyObject:
	pass

def clean_node_name(name):
	name = re.sub(r"\W", '_', name)
	
	# Additionally, USD doesn't like if the first character is a number
	if len(name) > 0 and name[0].isdigit():
		name = '_' + name
		
	return name

def get_usd_path_from_actor_labels(self, actor):
	result = ""
	current = actor
	while current != None:
		modified_name = clean_node_name(current.get_actor_label())
		result = "/" + modified_name + result
		current = current.get_attach_parent_actor()
	return result

def find_first_of_class(items, item_class):
	for item in items:
		if isinstance(item, item_class):
			return item
	return None

def expand_range(value_range, value):
	if value_range[0] == None or value < value_range[0]:
		value_range[0] = value
	if value_range[1] == None or value > value_range[1]:
		value_range[1] = value

def get_app_custom_attribute_prefix():
	return 'unreal'

def get_usd_attribute_value(usd_object, full_name, default=None):
	if not usd_object.HasAttribute(full_name):
		return default
	usd_attribute = usd_object.GetAttribute(full_name)
	value = usd_attribute.Get()
	try:
		value = tuple(value)
	except TypeError:
		pass
	return value

def generate_unique_name(unique_names, name):
	if not name in unique_names:
		return name

	for i in xrange(10000000):
		test_name = name + str(i)
		if not test_name in unique_names:
			return test_name

	return None

def get_usd_level_info_actor():
	actors = unreal.EditorLevelLibrary.get_all_level_actors()
	for actor in actors:
		if isinstance(actor, unreal.USDLevelInfo):
			return actor
	return None

def get_usd_level_info_sub_layer_paths(usd_level_info):
	output = []
	paths = usd_level_info.get_editor_property("SubLayerPaths")
	for path in paths:
		if len(path.file_path) > 0:
			output.append(os.path.abspath(path.file_path))
	return output

def set_usd_level_info_sub_layer_paths(usd_level_info, sub_layer_paths):
	dest_paths = []
	if sub_layer_paths != None and len(sub_layer_paths) > 0:
		for path in sub_layer_paths:
			value = unreal.FilePath()
			value.file_path = path
			dest_paths.append(value)
	usd_level_info.set_editor_property("SubLayerPaths", dest_paths)

def get_usd_level_info():
	actor = get_usd_level_info_actor()
	if actor == None:
		return None

	result = UsdEmptyObject()
	result.actor = actor

	result.file_path = actor.get_editor_property("FilePath").file_path
	if result.file_path != None and len(result.file_path) > 0:
		result.file_path = os.path.abspath(result.file_path)

	result.sub_layer_paths = get_usd_level_info_sub_layer_paths(actor)

	result.file_scale = actor.get_editor_property("FileScale")

	return result

def set_usd_level_info(file_path, sub_layer_paths, file_scale=1.0):
	actor = get_usd_level_info_actor()
	if actor == None:
		actor = unreal.EditorLevelLibrary.spawn_actor_from_object(unreal.USDLevelInfo.static_class(), (0,0,0))

	if file_path != None:
		value = unreal.FilePath()
		value.file_path = file_path
		actor.set_editor_property("FilePath", value)

	set_usd_level_info_sub_layer_paths(actor, sub_layer_paths)

	actor.set_editor_property("FileScale", file_scale)

	return actor

def usd_path_to_list(usd_path):
	return str(usd_path).lstrip('/').split('/')

def get_usd_path_from_actor_labels(actor):
	result = ""
	current = actor
	while current != None:
		modified_name = clean_node_name(current.get_actor_label())
		result = "/" + modified_name + result
		current = current.get_attach_parent_actor()
	return result

def convert_to_relative_path(path):
	relative = unreal.SystemLibrary.convert_to_relative_path(path)
	return unreal.SystemLibrary.normalize_filename(relative)

# Stage must be cleaned up in all situations
# Otherwise file will not overwrite the next time CreateNew() is called
#
# How to use:
#    with usd_unreal.utils.USDStageWrapper(self, Usd.Stage.CreateNew(filename)) as stage_wrapper:
#
class USDStageWrapper:
	def __init__(self, other, stage):
		self.other = other
		self.other.stage = stage

	def __enter__(self):
		return self

	def __exit__(self, type, value, traceback):

		# Prevent stage staying open and blocking file overwrite or reading newer version of file
		if hasattr(self.other, 'stage') and self.other.stage != None:
			del self.other.stage

		# Prevent referencing world causing crash on level change
		if hasattr(self.other, 'sequencer_context') and self.other.sequencer_context != None:
			del self.other.sequencer_context

