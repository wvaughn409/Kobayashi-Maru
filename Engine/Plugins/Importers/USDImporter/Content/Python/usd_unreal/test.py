import unreal
import usd_unreal
import usd_unreal.utils
import usd_unreal.attributes
import usd_unreal.export_level
import usd_unreal.import_level
import usd_unreal.export_sequence
import usd_unreal.capture_sequence
import usd_unreal.diff_usd_files
import usd_unreal.automated_tests

import usd_unreal.capture_sequence_class
import usd_unreal.export_sequence_class
import usd_unreal.import_level_class
import usd_unreal.export_level_class

import os
import math
from pxr import Usd, UsdGeom, UsdLux, Sdf, UsdUtils

test_directory_expected = "d:/test/usd/expected"
test_directory_generated = "d:/test/usd/generated"

if usd_unreal.developer_mode == True:
	reload(usd_unreal)
	reload(usd_unreal.utils)
	reload(usd_unreal.attributes)
	reload(usd_unreal.export_level)
	reload(usd_unreal.import_level)
	reload(usd_unreal.export_sequence)
	reload(usd_unreal.diff_usd_files)
	reload(usd_unreal.automated_tests)
	reload(usd_unreal.capture_sequence)

	#reload(usd_unreal.capture_sequence_class)
	#reload(usd_unreal.export_sequence_class)
	#reload(usd_unreal.import_level_class)
	#reload(usd_unreal.export_level_class)

def find_actor_by_label(actor_label):
	results = unreal.EditorFilterLibrary.by_actor_label(unreal.EditorLevelLibrary.get_all_level_actors(), actor_label, unreal.EditorScriptingStringMatchType.EXACT_MATCH)
	return results[0] if len(results) > 0 else None

def test_spawn_actor(unreal_object, scale = None):
	location = unreal.Vector(10, 20, 30)
	rotation = unreal.Rotator(44, 55, 66)
	actor = unreal.EditorLevelLibrary.spawn_actor_from_object(unreal_object, location, rotation)
	if scale != None:
		actor.set_actor_scale3d(scale)
	return actor

def test_populate_world():
	actors = []

	def spawn_actor(unreal_object, scale = None):
		a = test_spawn_actor(unreal_object)
		actors.append(a)
		return a

	# empty actor
	actor = spawn_actor(unreal.Actor.static_class())

	# lights
	actor = spawn_actor(unreal.RectLight.static_class())
	actor = spawn_actor(unreal.PointLight.static_class())
	actor = spawn_actor(unreal.DirectionalLight.static_class())
	actor = spawn_actor(unreal.SpotLight.static_class())

	# sky light
	actor = unreal.EditorLevelLibrary.spawn_actor_from_object(unreal.SkyLight.static_class(), unreal.Vector(0, 0, 0), unreal.Rotator(0, 0, 0))

	actor = spawn_actor(unreal.CineCameraActor.static_class())
	actor.set_actor_label("CineCameraPlaced")

	actor = unreal.EditorLevelLibrary.spawn_actor_from_object(unreal.load_asset("/Engine/BasicShapes/Cube.Cube"), unreal.Vector(0, 0, -200), unreal.Rotator(0, 0, 0))
	actor.set_actor_scale3d(unreal.Vector(7, 5, 1))
	actor.set_actor_label("CubePlaced")

	actor = unreal.EditorLevelLibrary.spawn_actor_from_object(unreal.load_asset("/Engine/BasicShapes/Cube.Cube"), unreal.Vector(0, 100, -100), unreal.Rotator(0, 0, 0))
	actor.set_actor_scale3d(unreal.Vector(1, 1, 0.5))
	actor.set_actor_label("CubeToDelete")

	return actors

def compare_usd_files(a, b):
	diff_result = usd_unreal.diff_usd_files.diff_usd_files(a, b)
	if diff_result == "EQUAL":
		return True
	print("error: Differences found for usd file: " + a + "\n" + diff_result)
	return False

def import_exported_level(export_level_path):
	world = unreal.EditorLoadingAndSavingUtils.new_blank_map(False)
	import_task = usd_unreal.import_level.USDImportLevel()
	import_task.import_level(os.path.join(test_directory_generated, export_level_path), world)


# Self-contained level
def test_level_export_import_main():
	unreal.EditorLoadingAndSavingUtils.new_blank_map(False)
	test_populate_world()

	#print("  call export_level")
	export_level_path = 'level_export/export_level.usda'
	export_task = usd_unreal.export_level.USDExportLevel()
	export_task.export_level(os.path.join(test_directory_generated, export_level_path), unreal.EditorLevelLibrary.get_editor_world())
	#if not compare_usd_files(os.path.join(test_directory_generated, export_level_path), os.path.join(test_directory_expected, export_level_path)):
	#	return False

	unreal.EditorLoadingAndSavingUtils.new_blank_map(False)

	# import the exported level
	import_exported_level(export_level_path)


	# export 'deltas' version of level before making changes
	export_level_unchanged_path = 'level_export/export_level_unchanged.usda'
	usd_unreal.export_level.export_current_level(os.path.join(test_directory_generated, export_level_unchanged_path))
	#if not compare_usd_files(os.path.join(test_directory_generated, export_level_unchanged_path), os.path.join(test_directory_expected, export_level_unchanged_path)):
	#	return False

	# change level then export 'deltas' version after making changes
	actor = unreal.EditorLevelLibrary.spawn_actor_from_object(unreal.load_asset("/Engine/BasicShapes/Cube.Cube"), unreal.Vector(0, 0, -100), unreal.Rotator(0, 0, 0))
	actor.set_actor_label("CubeAdded")

	actor = find_actor_by_label("CubePlaced")
	actor.set_actor_location(unreal.Vector(100, 60, -250), False, True)

	actor = find_actor_by_label("CubeToDelete")
	unreal.EditorLevelLibrary.destroy_actor(actor)

	export_level_changed_path = 'level_export/export_level_changed.usda'
	usd_unreal.export_level.export_current_level(os.path.join(test_directory_generated, export_level_changed_path))
	#if not compare_usd_files(os.path.join(test_directory_generated, export_level_changed_path), os.path.join(test_directory_expected, export_level_changed_path)):
	#	return False

	return True

def test_export_sequence_main():
	sequence_asset_name = "TestSequenceExport"
	sequence_package_path = "/Game/"
	length_seconds = 1.0

	def populate_track(sequence, track, num_sections = 1, section_length_seconds = 1):
		for i in xrange(num_sections):
			section_range = sequence.make_range_seconds(i * section_length_seconds, section_length_seconds)
			track.add_section().set_range(section_range)

	unreal.EditorLoadingAndSavingUtils.new_blank_map(False)
	sequence = unreal.AssetToolsHelpers.get_asset_tools().create_asset(sequence_asset_name, sequence_package_path, unreal.LevelSequence, unreal.LevelSequenceFactoryNew())

	actors = test_populate_world()
	for actor in actors:
		binding = sequence.add_possessable(actor)
		track = binding.add_track(unreal.MovieScene3DTransformTrack)
		track.add_section().set_range(sequence.make_range_seconds(0, length_seconds))
	actors = None

	# Create cube with one track
	actor = unreal.EditorLevelLibrary.spawn_actor_from_object(unreal.load_asset("/Engine/BasicShapes/Cube.Cube"), unreal.Vector(0, 0, -200), unreal.Rotator(0, 0, 0))
	actor.set_actor_label('CubeOneTrack')
	binding = sequence.add_possessable(actor)
	track = binding.add_track(unreal.MovieScene3DTransformTrack)
	track.add_section().set_range(sequence.make_range_seconds(0, length_seconds))

	# Create cube with no tracks to test fetching reading attributes from level
	actor = unreal.EditorLevelLibrary.spawn_actor_from_object(unreal.load_asset("/Engine/BasicShapes/Cube.Cube"), unreal.Vector(0, 0, -200), unreal.Rotator(0, 0, 0))
	actor.set_actor_label('CubeNoTracks')
	binding = sequence.add_possessable(actor)

	# Create a spawnable from a static mesh
	spawnable_floor_binding = sequence.add_spawnable_from_instance(unreal.load_asset("/Engine/BasicShapes/Plane.Plane"))
	transform_track = spawnable_floor_binding.add_track(unreal.MovieScene3DTransformTrack)
	populate_track(sequence, transform_track, 5)

	# Create a spawnable from an actor class
	spawnable_camera_binding = sequence.add_spawnable_from_class(unreal.CineCameraActor)
	# add an infinite transform track
	spawnable_camera_binding.add_track(unreal.MovieScene3DTransformTrack).add_section().set_range(unreal.SequencerScriptingRange())

	task = usd_unreal.export_sequence.UsdSequenceExporterTask()
	task.sequencer_context = unreal.EditorLevelLibrary.get_editor_world()
	task.export_sequence(sequence, os.path.join(test_directory_generated, 'TestExportSequence.usda'))

def test_export_level():
	export_task = usd_unreal.export_level.USDExportLevel()
	export_task.export_selected = False
	export_task.export_level(os.path.join(test_directory_generated, 'TestExportLevel.usda'), unreal.EditorLevelLibrary.get_editor_world())

def test_export_level_selected():
	export_task = usd_unreal.export_level.USDExportLevel()
	export_task.export_selected = True
	export_task.export_level(os.path.join(test_directory_generated, 'TestExportLevelSelected.usda'), unreal.EditorLevelLibrary.get_editor_world())

def test_import_level():
	import_task = usd_unreal.import_level.USDImportLevel()
	import_task.allow_asset_import = True
	#import_task.import_level(os.path.join(test_directory_generated, 'all-polygon-shapes.usda'), unreal.EditorLevelLibrary.get_editor_world())
	import_task.import_level(os.path.join(test_directory_generated, 'attributes.usda'))

def test_export_sequence():
	task = usd_unreal.export_sequence.UsdSequenceExporterTask()
	actor_info = usd_unreal.utils.get_usd_level_info()
	if actor_info != None:
		task.unit_scale = actor_info.file_scale
		#task.parent_usd_file = actor_info.base_file_path
		task.parent_usd_file = actor_info.file_path

	sequencer_asset = unreal.load_asset("LevelSequence'/Game/Cinematics/Sequences/RecordedSequence/SpawnedActor.SpawnedActor'")
	task.filename = os.path.join(test_directory_generated, 'TestExportSequence.usda')

	task.sequencer_context = usd_unreal.export_sequence.get_level_editor_sequencer_context()
	task.export_sequence(sequencer_asset, task.filename)

def test_import_sequence():
	pass

def run_all_tests():
	print("Run all USD tests")
	test_level_export_import_main()
	test_export_sequence_main()

#usd_unreal.capture_sequence.export_sequence("LevelSequence'/Game/SequenceExport01_Seq.SequenceExport01_Seq'", os.path.join(test_directory_generated, 'TestExportSequence.usda'))

#test_export_sequence()
#test_export_level()
#test_import_level()

#usd_unreal.export_level.export_current_level(None)
#usd_unreal.export_level.export_current_level(os.path.join(test_directory_generated, 'attributesUnreal.usda'))

#run_all_tests()

#test_level_export_import_main()

#unreal.EditorLevelUtils.add_levels_to_world(unreal.EditorLevelLibrary.get_editor_world(), ["/Game/sublev/subMap01"], unreal.LevelStreamingKismet)

values_are_close = {}

def floats_equal(a, b, tolerance=0.0001):
	return math.fabs(a - b) < tolerance
values_are_close[float] = floats_equal

def tuples_equal(a, b):
	len_a = len(a)
	if len_a != len(b):
		return False
	if len_a == 0:
		return True
	i = 0
	while i < len_a:
		i += 1
		if compare_usd_vs_unreal(a[i], b[i]) == False:
			return False
	return True
values_are_close[tuple] = tuples_equal

def compare_usd_vs_unreal(a, b):
	func = values_are_close.get(type(a), None)
	if func != None:
		return func(a, b)
	return a == b

def get_unreal_actor_local_transform(actor):
	world_transform = actor.get_actor_transform()
	parent_actor = actor.get_attach_parent_actor()
	if parent_actor == None:
		return world_transform
	return unreal.MathLibrary.compose_transforms(world_transform, unreal.MathLibrary.invert_transform(parent_actor.get_actor_transform()))

class ApplyUnrealAttributesToUsdPrim:
	def __init__(self):
		self.original_prim = None
		self.stage = None
		self.prim_path = None
		self.actor = None
		self.unit_scale = None
		self.stage_up_axis = None

		self.override_prim = None

	@staticmethod
	def construct_usd_prim(stage, prim_path, actor):
		if usd_unreal.attributes.LightAttributes.is_light_actor(actor):
			return usd_unreal.attributes.LightAttributes.construct_usd_light(stage, actor, prim_path)
		elif isinstance(actor, unreal.CameraActor):
			return UsdGeom.Camera.Define(stage, prim_path)
		return UsdGeom.Xform.Define(stage, prim_path)

	def run(self):
		self.handle_transform()
		self.handle_visibility()

		if usd_unreal.attributes.LightAttributes.is_light_actor(self.actor):
			self.handle_attributes(usd_unreal.attributes.light.attributes)
		elif isinstance(self.actor, unreal.CameraActor):
			self.handle_attributes(usd_unreal.attributes.camera.attributes)

	def handle_visibility(self):
		actor_is_visible = usd_unreal.attributes.node.visibility.call_get_from_actor(self.actor)
		if self.original_prim and actor_is_visible == usd_unreal.attributes.node.visibility.get_from_usd(self.original_prim):
			return
		if actor_is_visible:
			UsdGeom.Imageable(self.get_override_prim()).MakeVisible()
		else:
			UsdGeom.Imageable(self.get_override_prim()).MakeInvisible()

	def handle_transform(self):
		if self.actor.root_component == None:
			return
		unreal_transform = self.actor.root_component.get_relative_transform()
		usd_transform = usd_unreal.attributes.transform.usd_transform_from_unreal_transform(unreal_transform, self.unit_scale, self.stage_up_axis)

		print(self.original_prim)
		if self.original_prim:
			if not self.original_prim.IsA(UsdGeom.Xformable):
				return
			if self.local_transforms_nearly_equal(self.original_prim, self.actor):
				return

		xform_api = UsdGeom.XformCommonAPI(self.get_override_prim())

		if self.original_prim != None:
			xform_api.SetResetXformStack(True)

		xform_api.SetTranslate(usd_transform[0])
		xform_api.SetRotate(usd_transform[1], UsdGeom.XformCommonAPI.RotationOrderXZY)
		xform_api.SetScale(usd_transform[2])

	def local_transforms_nearly_equal(self, prim, actor):
		if actor.root_component == None:
			return True

		extra_rotate = None
		if isinstance(actor, unreal.CameraActor):
			extra_rotate = usd_unreal.attributes.transform.usd_camera_import_rotation

		usd_transform = usd_unreal.attributes.transform.local_transform_from_usd_node(prim, self.unit_scale, self.stage_up_axis, extra_rotate)
		unreal_transform = actor.root_component.get_relative_transform()

		is_nearly_equal = unreal.MathLibrary.nearly_equal_transform_transform(usd_transform, unreal_transform)

		return is_nearly_equal

	# Find existing prim or add new prim to USD stage
	def get_override_prim(self):
		if self.override_prim:
			return self.override_prim
		if self.original_prim != None:
			return self.stage.OverridePrim(self.prim_path)
		self.override_prim = ApplyUnrealAttributesToUsdPrim.construct_usd_prim(self.stage, self.prim_path, self.actor)
		return self.override_prim

	def handle_attribute(self, attribute):
		from_unreal = attribute.call_get_from_actor(self.actor)
		if from_unreal == None:
			return
		if self.original_prim != None:
			if compare_usd_vs_unreal(from_unreal, attribute.get_from_usd(self.original_prim)) == True:
				return
		usd_attribute = attribute.construct_usd_attribute(self.get_override_prim())
		usd_attribute.Set(value=from_unreal)

	def handle_attributes(self, attributes):
		for attribute in attributes:
			self.handle_attribute(attribute)

class USDCreateFile:
	def __init__(self):

		#self.sub_layer_paths = ['d:/test/usd/level_base.usda']
		#self.filename = 'd:/test/usd/level.usda'

		self.unit_scale = 1.0
		self.stage_up_axis = 'y'

		self.actor_classes_to_ignore = [
			unreal.AbstractNavData,
			unreal.AtmosphericFog,
			unreal.Brush,
			unreal.DefaultPhysicsVolume,
			unreal.GameModeBase,
			unreal.GameNetworkManager,
			unreal.GameplayDebuggerCategoryReplicator,
			unreal.GameplayDebuggerPlayerManager,
			unreal.GameSession,
			unreal.GameStateBase,
			unreal.HUD,
			unreal.InstancedFoliageActor,
			unreal.LevelSequenceActor,
			unreal.ParticleEventManager,
			unreal.PlayerCameraManager,
			unreal.PlayerController,
			unreal.PlayerStart,
			unreal.PlayerState,
			unreal.SphereReflectionCapture,
			unreal.SkyLight,
			unreal.USDLevelInfo,
			unreal.WorldSettings
			]

		self.actor_class_names_to_ignore = {}
		self.actor_class_names_to_ignore['BP_Sky_Sphere_C'] = True

	def run(self):

		# Convert sub layer paths to relative
		has_sub_layer_paths = False
		if getattr(self, 'sub_layer_paths', None) != None:
			for i in xrange(len(self.sub_layer_paths)):
				self.sub_layer_paths[i] = self.to_relative_path(self.sub_layer_paths[i])
				has_sub_layer_paths = True

		# List actors in Unreal
		self.unreal_prims = {}
		actors = unreal.EditorLevelLibrary.get_all_level_actors()
		for actor in actors:
			print("actor: " + str(actor))
			prim_path = self.get_usd_path_from_actor_labels(actor)
			self.unreal_prims[prim_path] = actor

		# Write USD file
		with usd_unreal.utils.USDStageWrapper(self, Usd.Stage.CreateNew(self.filename)) as stage_wrapper:
			stage = self.stage

			if has_sub_layer_paths:
				for path in self.sub_layer_paths:
					stage.GetRootLayer().subLayerPaths.append(path)

			if self.stage_up_axis == 'y':
				UsdGeom.SetStageUpAxis(stage, UsdGeom.Tokens.y)
			elif self.stage_up_axis == 'z':
				UsdGeom.SetStageUpAxis(stage, UsdGeom.Tokens.z)

			self.current_frame = Usd.TimeCode.Default()
			self.xform_cache = UsdGeom.XformCache(self.current_frame)

			# Modify and add new objects
			for prim_path, actor in self.unreal_prims.iteritems():

				# Detect changes vs parent scenes
				usd_node = None
				original_prim = None
				if has_sub_layer_paths:
					original_prim = stage.GetPrimAtPath(prim_path)
					if not original_prim.IsValid():
						original_prim = None

				usd_node = self.handle_object(original_prim, prim_path, actor)

			# Delete level objects that do not exist in Unreal
			self.detect_deleted(stage.GetPseudoRoot())

			# Commit to disk
			stage.Save()

	def to_relative_path(self, absolute_path):
		dirname = os.path.dirname(self.filename)
		parent_dirname = os.path.dirname(absolute_path)
		relative_path = os.path.relpath(parent_dirname, dirname)
		relative_path = relative_path.replace('\\', '/')
		return relative_path + '/' + os.path.basename(absolute_path)

	def get_usd_path_from_actor_labels(self, actor):
		return usd_unreal.utils.get_usd_path_from_actor_labels(actor)

	def should_export_actor(self, actor):
		for unreal_class in self.actor_classes_to_ignore:
			if isinstance(actor, unreal_class):
				return False

		unreal_class_name = actor.get_class().get_name()
		if unreal_class_name in self.actor_class_names_to_ignore:
			return False

		return True

	def handle_object(self, original_prim, prim_path, actor):
		#print("handle_object() " + str(prim_path) + ", override: " + str(original_prim))

		if not self.should_export_actor(actor):
			return

		task = ApplyUnrealAttributesToUsdPrim()
		task.original_prim = original_prim
		task.stage = self.stage
		task.prim_path = prim_path
		task.actor = actor
		task.unit_scale = self.unit_scale
		task.stage_up_axis = self.stage_up_axis
		task.run()

	def detect_deleted(self, prim):
		if prim.IsA(UsdGeom.Xformable):
			prim_path = str(prim.GetPath())
			if not prim_path in self.unreal_prims:
				prim.SetActive(False)

		for child in prim.GetChildren():
			self.detect_deleted(child)

def export_current_level(filename):
	actor_info = usd_unreal.utils.get_usd_level_info()

	task = USDCreateFile()
	task.unit_scale = actor_info.file_scale
	task.sub_layer_paths = actor_info.sub_layer_paths

	if filename != None:
		task.filename = filename
	else:
		task.filename = actor_info.file_path

	if len(task.filename) > 0:
		print("Export current level")
		task.run()
	else:
		print("error: No filename was provided to save USD file")