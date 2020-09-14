import unreal
import usd_unreal
import usd_unreal.utils
import usd_unreal.attributes
import usd_unreal.export_level
import usd_unreal.import_level
import usd_unreal.export_sequence
import usd_unreal.export_sequence_class
import usd_unreal.import_level_class
import usd_unreal.export_level_class
import usd_unreal.diff_usd_files
import os
import math
from pxr import Usd, UsdGeom, UsdLux, Sdf, UsdUtils

if usd_unreal.developer_mode == True:
	reload(usd_unreal)
	reload(usd_unreal.utils)
	reload(usd_unreal.attributes)
	reload(usd_unreal.export_level)
	reload(usd_unreal.import_level)
	reload(usd_unreal.export_sequence)

def compare_usd_files(a, b):
	diff_result = usd_unreal.diff_usd_files.diff_usd_files(a, b)
	if diff_result == "EQUAL":
		return True
	return False

def run_import_level_test():
	absolute_path = os.path.join(unreal.SystemLibrary.get_project_content_directory(), 'Tests/USD/ImportLevelTest.usda')
	unreal.EditorLoadingAndSavingUtils.new_blank_map(False)
	import_task = usd_unreal.import_level.USDImportLevel()
	import_task.allow_asset_import = False
	import_task.generated_asset_base_path = "/Game/Tests/USD/Generated/ImportLevelTest/"
	import_task.import_level(absolute_path)

def run_export_level_test():
	absolute_path = os.path.join(unreal.SystemLibrary.get_project_content_directory(), 'Tests/USD/Generated/ExportLevelTest.usda')
	expected_absolute_path = os.path.join(unreal.SystemLibrary.get_project_content_directory(), 'Tests/USD/Expected/ExportLevelTest.usda')
	export_task = usd_unreal.export_level.USDExportLevel()
	export_task.export_selected = False
	export_task.export_level(absolute_path)

	diff_result = usd_unreal.diff_usd_files.diff_usd_files(absolute_path, expected_absolute_path)
	if diff_result != "EQUAL":
		raise Exception("Differences in usd file: " + absolute_path + ", " + str(diff_result))

def run_import_static_meshes():
	absolute_path = os.path.join(unreal.SystemLibrary.get_project_content_directory(), 'Tests/USD/ImportLevelTest.usda')
	sub_asset_task = unreal.USDBatchImportOptionsSubTask()
	sub_asset_task.source_path = "/axisTestMesh"
	sub_asset_task.dest_path = "/Game/Tests/USD/Generated/" + unreal.PackageTools.sanitize_package_name(sub_asset_task.source_path).lstrip('/')

	options = unreal.USDBatchImportOptions()
	options.sub_tasks = [sub_asset_task]
	options.generate_unique_path_per_usd_prim = False
	options.apply_world_transform_to_geometry = False
	options.scale = 1.0

	import_task = unreal.AssetImportTask()
	import_task.filename = absolute_path
	import_task.destination_path = "/Game/Tests/USD/Generated/"
	import_task.replace_existing = True
	import_task.automated = True
	import_task.options = options
	unreal.AssetToolsHelpers.get_asset_tools().import_asset_tasks([import_task])

def run():
	run_import_static_meshes()
	run_import_level_test()
	run_export_level_test()
	unreal.EditorLoadingAndSavingUtils.new_blank_map(False)
