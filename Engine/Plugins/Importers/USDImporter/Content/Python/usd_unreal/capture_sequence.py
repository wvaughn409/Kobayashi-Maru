import unreal
import usd_unreal.export_sequence
import usd_unreal.capture_sequence_class
import usd_unreal.export_level
from pxr import Usd, UsdGeom, UsdLux, Sdf
import os

class Dummy:
	pass

def append_simple_frame(container, info):
	value = container.attribute.get_from_actor(info.unreal_object)

	# Avoid adding keyframes until changes are detected
	if len(container.values) == 1:
		if container.values[0] == value:
			container.starting_duplicates += 1
			return
		else:
			for i in xrange(container.starting_duplicates):
				container.values.append(container.values[0])

	container.values.append(value)

class BakedAttribute:

	def __init__(self, attribute):
		self.attribute = attribute
		self.values = []
		self.starting_duplicates = 0

		if getattr(self.attribute, "get_from_actor", None) == None:
			raise Exception("get_from_actor must be defined on attribute: " + str(self.attribute.sequencer_track_name))

	def append_frame(self, info, task):
		append_simple_frame(self, info)

	def commit(self, info, task):
		num_values = len(self.values)
		if num_values == 0:
			return

		usd_attribute = self.attribute.construct_usd_attribute(info.usd_node)
		if num_values == 1:
			value = self.attribute.convert_unreal_to_usd(self.values[0])
			usd_attribute.Set(value=value)
			return

		start_frame = 0
		if getattr(self.attribute, "export_compacted_boolean_keys", False) == True:
			compacted_keys = usd_unreal.export_sequence.compact_boolean_keys(self.values)
			for key in compacted_keys:
				value = self.attribute.convert_unreal_to_usd(key[1])
				usd_attribute.Set(time = key[0] + start_frame, value=value)
		else:
			for i in xrange(num_values):
				value = self.attribute.convert_unreal_to_usd(self.values[i])
				usd_attribute.Set(time=i, value=value)

class BakedTransformPart:

	def __init__(self, attribute):
		self.attribute = attribute
		self.values = []
		self.starting_duplicates = 0

	def append_frame(self, info, task):
		append_simple_frame(self, info)

	def commit(self, info, task):
		num_values = len(self.values)
		if num_values == 0:
			return

		usd_attribute = self.attribute.construct_usd_attribute(info.usd_node)
		if num_values == 1:
			value = self.attribute.convert_unreal_to_usd(self.values[0], task.unit_scale)
			usd_attribute.Set(value=value)
			return

		for i in xrange(num_values):
			value = self.attribute.convert_unreal_to_usd(self.values[i], task.unit_scale)
			usd_attribute.Set(time=i, value=value)

class ExportSequenceActorInfo:
	def __init__(self):
		self.export_frame_actions = []
		self.export_frame_action_parameters = []
		self.unreal_object = None

		self.baked = Dummy()
		self.baked.location = BakedTransformPart(usd_unreal.attributes.transform.location)
		self.baked.rotation = BakedTransformPart(usd_unreal.attributes.transform.rotation)
		self.baked.scale = BakedTransformPart(usd_unreal.attributes.transform.scale)
		self.baked.visibility = BakedAttribute(usd_unreal.attributes.node.visibility)

		self.baked_list = []
		self.baked_list.append(self.baked.location)
		self.baked_list.append(self.baked.rotation)
		self.baked_list.append(self.baked.scale)
		self.baked_list.append(self.baked.visibility)

# Renders sequence to USD file
class SequenceExporterUsdBake:

	def __init__(self):
		self.unit_scale = 1.0
		self.stage_up_axis = 'y'
		self.frame_rate = 24

		# optional USD sub layer string paths
		self.parent_usd_files = []

		# Optional callback when task is complete as the task is non-blocking/async
		self.on_task_finished = None

		self.custom_attribute_prefix = usd_unreal.utils.get_app_custom_attribute_prefix()
		self.actor_export_handlers = [self.export_camera, self.export_light, self.export_actor]

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

		self.has_exported_initial_scene = False

	def init_capture_settings(self, asset_path):
		capture_settings = unreal.AutomatedLevelSequenceCapture()
		capture_settings.level_sequence_asset = unreal.SoftObjectPath(asset_path)
		capture_settings.set_image_capture_protocol_type(usd_unreal.capture_sequence_class.SequencerCaptureUSD().static_class())
		self.capture_settings = capture_settings
		return capture_settings

	def start_capture_async(self):
		if self.capture_settings == None:
			raise Exception("init_capture_settings() must be called before start_capture_async()")
		usd_unreal.capture_sequence_class.SequencerCaptureUSD.render_movie(self, self.capture_settings)

	def cleanup(self):
		if hasattr(self, 'stage') and self.stage != None:
			del self.stage
		if hasattr(self, 'sequencer_context') and self.sequencer_context != None:
			del self.sequencer_context
		if hasattr(self, 'capture') and self.capture != None:
			del self.capture

	# Callback from class SequencerCaptureUSD
	def on_warm_up(self, capture):
		print("on_warm_up ...")

	# Callback from class SequencerCaptureUSD
	def on_capture_frame(self, capture):
		self.usd_frame_number = capture.get_current_frame_metrics().frame_number
		#print("on_capture_frame ... " + str(self.usd_frame_number))

		try:
			if getattr(self, "stage", None) != None:
				self.export_current_frame(capture)
		except:
			self.cleanup()
			raise

	# Callback from class SequencerCaptureUSD
	def on_begin_finalize(self, capture):
		print("on_begin_finalize ...")

		try:
			if getattr(self, "stage", None) != None:
				for info in self.export_list:
					self.commit_baked(info)

				self.stage.Save()
			self.cleanup()
		except:
			self.cleanup()
			raise

	def on_finalize(self, capture):
		print("on_finalize ...")

	# Callback from class SequencerCaptureUSD, called after on_finalize
	def on_finished_render_movie(self, success):
		print("task.on_finished_render_movie()")
		self.success_result = success
		if self.on_task_finished != None:
			self.on_task_finished(self)

	def should_export_actor(self, actor):
		for unreal_class in self.actor_classes_to_ignore:
			if isinstance(actor, unreal_class):
				return False

		unreal_class_name = actor.get_class().get_name()
		if unreal_class_name in self.actor_class_names_to_ignore:
			return False

		return True

	def generate_export_list(self):
		export_list = []

		for actor in unreal.ActorIterator(world=self.capture.world):
			if not self.should_export_actor(actor):
				continue
			info = ExportSequenceActorInfo()
			export_list.append(info)
			info.unreal_object = actor
			info.dest_usd_path = usd_unreal.utils.get_usd_path_from_actor_labels(actor)

		self.export_list = export_list
		return export_list

	def export_initial_scene(self):
		stage = self.stage

		for parent_usd_file in self.parent_usd_files:
			stage.GetRootLayer().subLayerPaths.append(parent_usd_file)

		if self.stage_up_axis == 'y':
			UsdGeom.SetStageUpAxis(stage, UsdGeom.Tokens.y)
		elif self.stage_up_axis == 'z':
			UsdGeom.SetStageUpAxis(stage, UsdGeom.Tokens.z)

		stage.SetFramesPerSecond(self.frame_rate)

		for info in self.export_list:
			usd_node = None
			for handler in self.actor_export_handlers:
				usd_node = handler(info)
				if usd_node != None:
					break

	def set_unreal_class_usd_attribute(self, info):
		info.usd_node.GetPrim().CreateAttribute(usd_unreal.attributes.actor_class_variable_name, Sdf.ValueTypeNames.String).Set(info.unreal_object.get_class().get_name())

	def export_actor(self, info):
		stage = self.stage

		# TODO: Export separate .usd for StaticMeshActor's asset and reference it

		usd_node = UsdGeom.Xform.Define(self.stage, info.dest_usd_path)
		info.usd_node = usd_node
		xform_prim = usd_node.GetPrim()

		self.handle_staticmesh_component(info)
		self.handle_skinnedmesh_component(info)
		self.set_unreal_class_usd_attribute(info)

		return usd_node

	def handle_staticmesh_component(self, info):
		components = info.unreal_object.get_components_by_class(unreal.StaticMeshComponent.static_class())
		if len(components) == 0:
			return False

		component = components[0]
		if component.static_mesh == None:
			# TODO: Override and clear existing USD attribute?
			return True

		usd_attribute = info.usd_node.GetPrim().CreateAttribute(usd_unreal.attributes.asset_path_variable_name, Sdf.ValueTypeNames.String)
		usd_attribute.Set(component.static_mesh.get_path_name())
		return True

	def handle_skinnedmesh_component(self, info):
		components = info.unreal_object.get_components_by_class(unreal.SkinnedMeshComponent.static_class())
		if len(components) == 0:
			return False

		component = components[0]
		if component.skeletal_mesh == None:
			# TODO: Override and clear existing USD attribute?
			return True

		usd_attribute = info.usd_node.GetPrim().CreateAttribute(usd_unreal.attributes.asset_path_variable_name, Sdf.ValueTypeNames.String)
		usd_attribute.Set(component.skeletal_mesh.get_path_name())
		return True

	def export_camera(self, info):
		if not usd_unreal.attributes.camera.is_unreal_camera_actor(info.unreal_object):
			return None
		usd_node = UsdGeom.Camera.Define(self.stage, info.dest_usd_path)
		info.usd_node = usd_node
		usd_camera_prim = usd_node.GetPrim()
		usd_camera_prim.SetMetadata('kind', 'assembly')
		for attribute in usd_unreal.attributes.camera.attributes:
			value = usd_unreal.attributes.camera.get_from_unreal_actor(attribute, info.unreal_object)
			if value != None:
				info.baked_list.append(BakedAttribute(attribute))

		# rotation correction
		rotate_y_op = usd_node.AddRotateYOp(opSuffix='rotateAxis')
		rotate_y_op.Set(-90)

		return usd_node

	def export_light(self, info):
		if not usd_unreal.attributes.LightAttributes.is_light_actor(info.unreal_object):
			return None

		usd_node = usd_unreal.attributes.LightAttributes.construct_usd_light(self.stage, info.unreal_object, info.dest_usd_path)
		info.usd_node = usd_node
		for attribute in usd_unreal.attributes.light.attributes:
			value = usd_unreal.attributes.light.get_from_unreal_actor(attribute, info.unreal_object)
			if value != None:
				info.baked_list.append(BakedAttribute(attribute))

		return usd_node

	def export_current_frame(self, capture):
		if self.has_exported_initial_scene == False:
			self.has_exported_initial_scene = True
			self.capture = capture
			self.generate_export_list()
			self.export_initial_scene()

		for item in self.export_list:
			self.export_frame_for_object(item)

	def export_frame_for_object(self, info):
		for b in info.baked_list:
			b.append_frame(info, self)

	def commit_baked(self, info):
		for b in info.baked_list:
			b.commit(info, self)

def generate_export_sequence(sequencer_path, usd_filename, called_from_ui=False):
	task = usd_unreal.capture_sequence.SequenceExporterUsdBake()

	task.usd_filename = usd_filename
	task.sequence = unreal.load_asset(sequencer_path)

	task.init_capture_settings(task.sequence.get_path_name())

	# Ok to texture stream as not actually rendering final pixels
	task.capture_settings.settings.enable_texture_streaming = True

	# Match frame rate of sequence
	task.capture_settings.settings.frame_rate = task.sequence.get_display_rate()
	task.frame_rate = float(task.capture_settings.settings.frame_rate.numerator) / float(task.capture_settings.settings.frame_rate.denominator)

	# Create usd file on disk
	task.stage = Usd.Stage.CreateNew(task.usd_filename)

	# Note: Optionally assign function to task.on_task_finished
	# Note: Call task.start_capture_async() to begin the task
	return task

# Called by 'Render Movie Settings' GUI when 'Capture Movie' button is pressed
def setup_ui_based_render(capture):
	automated_level_sequence_capture = capture.get_outer()
	level_sequence_asset = automated_level_sequence_capture.level_sequence_asset
	soft_object_ref = unreal.SystemLibrary.conv_soft_obj_path_to_soft_obj_ref(level_sequence_asset)
	sequencer_path = unreal.SystemLibrary.conv_soft_object_reference_to_string(soft_object_ref)

	generated_filename = capture.generate_filename(capture.get_current_frame_metrics()) + ".usda"

	task = usd_unreal.capture_sequence.SequenceExporterUsdBake()
	task.usd_filename = os.path.abspath(generated_filename)
	task.sequence = unreal.load_asset(sequencer_path)
	task.capture_settings = automated_level_sequence_capture
	task.frame_rate = float(task.capture_settings.settings.frame_rate.numerator) / float(task.capture_settings.settings.frame_rate.denominator)

	task.stage = Usd.Stage.CreateNew(task.usd_filename)

	return task

def export_sequence(sequencer_path, usd_filename):
	task = generate_export_sequence(sequencer_path, usd_filename)
	task.start_capture_async()
