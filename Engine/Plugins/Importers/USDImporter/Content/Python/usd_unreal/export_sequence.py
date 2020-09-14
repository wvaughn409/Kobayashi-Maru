import unreal
import usd_unreal
import usd_unreal.utils
import usd_unreal.attributes
from pxr import Usd, UsdGeom, UsdLux, Sdf
import os
import math

def get_app_custom_attribute_prefix():
	return usd_unreal.utils.get_app_custom_attribute_prefix()

# Reduces baked list of values for each frame to keyframes
# Also sets keyframe before each change to help with curve tangents
def compact_boolean_keys(values):
	out_values = []
	last_set_value = None
	last_set_index = None
	for i in xrange(0, len(values)):
		value = values[i]
		if last_set_value == None or last_set_value != value:
			if last_set_index != None and last_set_index != i - 1:
				out_values.append((i - 1, last_set_value))
			out_values.append((i, value))
			last_set_value = value
			last_set_index = i
	return out_values

class UsdSequenceExporterUtils:

	@staticmethod
	def find_first_exact_track_section(track, section_class):
		for section in track.get_sections():
			if section.get_class() == section_class:
				return section

	@staticmethod
	def expand_range_by_sequencer_range(timespan, new_range):
		if new_range.has_start():
			usd_unreal.utils.expand_range(timespan, new_range.get_start_frame())
		if new_range.has_end():
			usd_unreal.utils.expand_range(timespan, new_range.get_end_frame())

	# Returns range using display rate
	@staticmethod
	def make_sequence_range_in_display_rate(sequence, input_range):
		display_rate = sequence.get_display_rate()
		tick_resolution = sequence.get_tick_resolution()
		display_rate_float = float(display_rate.numerator) / float(display_rate.denominator)
		tick_resolution_float = float(tick_resolution.numerator) / float(tick_resolution.denominator)
		ticks_per_frame = tick_resolution_float / display_rate_float
		delta = input_range[1] - 1 - input_range[0]
		if delta < 0:
			delta = 0
		num_frames = delta / ticks_per_frame
		num_frames = math.ceil(num_frames)
		# Add one because range ends with exclusive value
		num_frames += 1
		return sequence.make_range(input_range[0] / ticks_per_frame, num_frames)

class ExportVectorPropertyTrack:
	def __init__(self, sequence, track, attribute):
		self.sequence = sequence
		self.track = track
		self.attribute = attribute
		self.num_channels = len(self.attribute.sequencer_channel_names)
		self.values = [None] * len(self.attribute.sequencer_channel_names)
		self.export_range = [None, None]
		self.channels = [None] * self.num_channels
		self.default_values = [None] * self.num_channels
		self.num_values = 0

	# populate task.values if there are one or more keyframes
	# sets task.default_values if there is a track and section
	def evaluate_keys(self, bake_frame_rate):
		if self.track == None:
			return False
		sections = self.track.get_sections()
		section = sections[0] if len(sections) > 0 else None
		if section == None:
			return False

		unordered_channels = section.get_channels()
		has_more_than_one_key = False
		for i in xrange(0, self.num_channels):
			channel_name = self.attribute.sequencer_channel_names[i]
			channel = None
			for unordered_channel in unordered_channels:
				if unordered_channel.get_name() == channel_name:
					channel = unordered_channel
					break

			if channel == None and self.num_channels == 1 and len(unordered_channels) == 1:
				channel = unordered_channels[0]

			if channel != None:
				self.channels[i] = channel
				num_keys_in_channel = channel.get_num_keys()
				if num_keys_in_channel > 0:
					if num_keys_in_channel > 1:
						has_more_than_one_key = True
					UsdSequenceExporterUtils.expand_range_by_sequencer_range(self.export_range, channel.compute_effective_range())
				if channel.has_default():
					self.default_values[i] = channel.get_default()

		if self.export_range[0] != None and self.export_range[1] != None:
			self.export_scripting_range = UsdSequenceExporterUtils.make_sequence_range_in_display_rate(self.sequence, self.export_range)

		missing_channels = []
		for channel_index in xrange(0, self.num_channels):
			channel = self.channels[channel_index]
			if channel == None:
				missing_channels.append(channel_index)
				continue

			num_keys_in_channel = channel.get_num_keys()
			if num_keys_in_channel == 1 and not has_more_than_one_key:
				keys = channel.get_keys()
				self.values[channel_index] = [keys[0].get_value()]
				self.num_values = 1
			elif num_keys_in_channel > 1:
				self.values[channel_index] = channel.evaluate_keys(self.export_scripting_range, bake_frame_rate)
				self.num_values = len(self.values[channel_index])
			else:
				missing_channels.append(channel_index)

		# Fill missing channels
		if self.num_values > 0:
			for i in missing_channels:
				value = self.default_values[i]
				if value == None:
					value = 0.0
				self.values[i] = [value] * self.num_values

		return True

	def apply_keys(self, usd_node):
		usd_op = self.attribute.construct_usd_attribute(usd_node)
		if self.num_values > 0:
			start_frame = self.export_scripting_range.get_start_frame()
			if self.num_channels == 1:
				if getattr(self.attribute, "export_compacted_boolean_keys", False):
					compacted = compact_boolean_keys(self.values[0])
					for key in compact_boolean_keys(self.values[0]):
						usd_op.Set(time = key[0] + start_frame, value=key[1])
				else:
					for i in xrange(0, self.num_values):
						usd_op.Set(time = i + start_frame, value=self.values[0][i])
			if self.num_channels == 2:
				for i in xrange(0, self.num_values):
					usd_op.Set(time = i + start_frame, value=(self.values[0][i], self.values[1][i]))
			if self.num_channels == 3:
				for i in xrange(0, self.num_values):
					usd_op.Set(time = i + start_frame, value=(self.values[0][i], self.values[1][i], self.values[2][i]))
			if self.num_channels == 4:
				for i in xrange(0, self.num_values):
					usd_op.Set(time = i + start_frame, value=(self.values[0][i], self.values[1][i], self.values[2][i], self.values[3][i]))
		elif self.default_values != None:
			if self.num_channels == 1:
				usd_op.Set(value=self.default_values[0])
			if self.num_channels == 2:
				usd_op.Set(value=(self.default_values[0], self.default_values[1]))
			if self.num_channels == 3:
				usd_op.Set(value=(self.default_values[0], self.default_values[1], self.default_values[2]))
			if self.num_channels == 4:
				usd_op.Set(value=(self.default_values[0], self.default_values[1], self.default_values[2], self.default_values[3]))

class ExportTransformComponent:
	def __init__(self, sequence, track):
		self.sequence = sequence
		self.location = ExportVectorPropertyTrack(sequence, track, usd_unreal.attributes.transform.location)
		self.rotation = ExportVectorPropertyTrack(sequence, track, usd_unreal.attributes.transform.rotation)
		self.scale = ExportVectorPropertyTrack(sequence, track, usd_unreal.attributes.transform.scale)
		self.properties = [self.location, self.rotation, self.scale]

	def evaluate_keys(self, bake_frame_rate, bound_objects):
		baked = False
		for task in self.properties:
			if task.evaluate_keys(bake_frame_rate) == True:
				baked = True
			elif len(bound_objects) > 0:
				task.default_values = task.attribute.call_get_from_actor(bound_objects[0])
				baked = True
		return baked

class UsdSequenceExporterTask:

	def __init__(self):
		self.unit_scale = 1.0
		self.custom_attribute_prefix = get_app_custom_attribute_prefix()
		self.scene_timespan = [None, None]
		self.bake_frame_rate = None
		self.asset_export_task = None
		self.sequencer_context = None
		self.parent_usd_file = None

	def convert_key_time(self, key_time):
		result = 0
		if key_time.sub_frame > 0:
			result = key_time.frame_number.value + key_time.sub_frame
		else:
			result = key_time.frame_number.value
		usd_unreal.utils.expand_range(self.scene_timespan, result)
		return result

	def generate_node_custom_data(self, binding, bound_objects):
		custom_data = {
			'display_name': str(binding.get_display_name()),
			'id': binding.get_id().to_string()
			}
		object_template = binding.get_object_template()
		if object_template:
			custom_data['object_template'] = object_template.get_path_name()
			custom_data['object_template_class'] = object_template.get_class().get_path_name()
		if len(bound_objects) > 0 and bound_objects[0] != None:
			custom_data['bound_object'] = bound_objects[0].get_path_name()
			custom_data['bound_object_class'] = bound_objects[0].get_class().get_path_name()
		return custom_data

	def handle_transform(self, usd_node, tracks, bound_objects):
		handled = False
		track = usd_unreal.utils.find_first_of_class(tracks, unreal.MovieScene3DTransformTrack)
		export_transform = ExportTransformComponent(self.sequence, track)
		export_transform.evaluate_keys(self.bake_frame_rate, bound_objects)

		def set_usd_keys(task, unit_scale=1):
			convert_unreal_to_usd = task.attribute.convert_unreal_to_usd
			if task.num_values > 0:
				usd_op = task.attribute.construct_usd_attribute(usd_node)
				values = task.values
				start_frame = task.export_scripting_range.get_start_frame()
				for i in xrange(0, task.num_values):
					usd_op.Set(time = i + start_frame, value=convert_unreal_to_usd((values[0][i], values[1][i], values[2][i]), unit_scale))
			elif task.default_values != None and not None in task.default_values:
				usd_op = task.attribute.construct_usd_attribute(usd_node)
				usd_op.Set(value=convert_unreal_to_usd(task.default_values, unit_scale))

		set_usd_keys(export_transform.location, self.unit_scale)
		set_usd_keys(export_transform.rotation)
		set_usd_keys(export_transform.scale)

	def handle_visibility(self, usd_node, tracks, bound_objects):
		handled = False
		attribute = usd_unreal.attributes.node.visibility
		track = usd_unreal.utils.find_first_of_class(tracks, unreal.MovieSceneVisibilityTrack)
		task = ExportVectorPropertyTrack(self.sequence, track, attribute)
		if task.evaluate_keys(self.bake_frame_rate) == True:
			if task.num_values > 0:
				handled = True
				dest_usd_attribute = task.attribute.construct_usd_attribute(usd_node)
				start_frame = task.export_scripting_range.get_start_frame()
				compacted_keys = compact_boolean_keys(task.values[0])
				for key in compacted_keys:
					value = attribute.convert_unreal_to_usd(key[1])
					dest_usd_attribute.Set(time = key[0] + start_frame, value=value)
			else:
				value = task.default_values[0]
				if value != None:
					handled = True
					if value == False:
						attribute.construct_usd_attribute(usd_node).Set(value=attribute.convert_unreal_to_usd(value))

		if handled == False and len(bound_objects) > 0:
			value = attribute.call_get_from_actor(bound_objects[0])
			if value == False:
				attribute.construct_usd_attribute(usd_node).Set(value=attribute.convert_unreal_to_usd(False))

	def export_property_track(self, usd_node, track, attribute):
		task = ExportVectorPropertyTrack(self.sequence, track, attribute)
		if task.evaluate_keys(self.bake_frame_rate) == True:
			task.apply_keys(usd_node)
			return True
		return False

	def class_is_camera_component(self, object_class):
		if object_class == unreal.CineCameraComponent.static_class():
			return True
		return False

	def add_camera(self, stage, dest_name, binding, child_camera_component, bound_objects):
		usd_camera = UsdGeom.Camera.Define(stage, dest_name)
		usd_camera_prim = usd_camera.GetPrim()
		usd_camera_prim.SetMetadata('kind', 'assembly')

		# Fetch attributes based on object in level or other context
		camera_actor = None
		camera_component = None
		for bound_object in bound_objects:
			if camera_actor == None:
				if usd_unreal.attributes.camera.is_unreal_camera_actor(bound_object):
					camera_actor = bound_object
					camera_component = bound_object.camera_component
					break

		# Fetch attributes using object template embedded in sequence asset
		object_template = binding.get_object_template()
		if object_template != None:
			if camera_actor == None:
				if usd_unreal.attributes.camera.is_unreal_camera_actor(object_template):
					camera_actor = object_template
					camera_component = object_template.camera_component

		camera_component_guid = child_camera_component.get_id().to_string()
		for camera_attribute in usd_unreal.attributes.camera.attributes:
			has_track = False
			for track in child_camera_component.get_tracks():
				property_name = track.get_property_name()
				if camera_attribute.sequencer_track_name == property_name:
					if self.export_property_track(usd_camera, track, camera_attribute):
						has_track = True
			if has_track != True and camera_actor != None:
				value = usd_unreal.attributes.camera.get_from_unreal_actor(camera_attribute, camera_actor)
				if value != None:
					camera_attribute.construct_usd_attribute(usd_camera).Set(value=value)

		tracks = binding.get_tracks()
		self.handle_transform(usd_camera, tracks, bound_objects)
		self.handle_visibility(usd_camera, tracks, bound_objects)

		# rotation correction
		rotate_y_op = usd_camera.AddRotateYOp(opSuffix='rotateAxis')
		rotate_y_op.Set(-90)

		custom_data = self.generate_node_custom_data(binding, bound_objects)
		custom_data['camera_component_id'] = camera_component_guid
		usd_camera_prim.SetCustomDataByKey(self.custom_attribute_prefix, custom_data)

		return usd_camera

	def add_light(self, stage, dest_name, binding, bound_objects):
		actor = usd_unreal.attributes.LightAttributes.get_light_actor(binding, bound_objects)
		if actor == None:
			return None
		usd_node = usd_unreal.attributes.LightAttributes.construct_usd_light(stage, actor, dest_name)
		if usd_node == None:
			return None

		tracks = []
		child_binding = usd_unreal.attributes.LightAttributes.get_light_component_binding(binding, bound_objects)
		if child_binding != None:
			tracks = child_binding.get_tracks()

		for attribute in usd_unreal.attributes.light.attributes:

			# set keyframes
			has_track = False
			for track in tracks:
				if attribute.sequencer_track_name == track.get_property_name():
					if self.export_property_track(usd_node, track, attribute):
						has_track = True
						break

			# set value from world actor if no keyframes
			if has_track != True and actor != None and child_binding != None:
				value = usd_unreal.attributes.light.get_from_unreal_actor(attribute, actor)
				if value != None:
					attribute.construct_usd_attribute(usd_node).Set(value=value)

		custom_data = self.generate_node_custom_data(binding, bound_objects)
		usd_node.GetPrim().SetCustomDataByKey(self.custom_attribute_prefix, custom_data)
		return usd_node

	def get_original_prim(self, prim_path):
		original_prim = None
		if self.parent_usd_file != None:
			original_prim = stage.GetPrimAtPath(prim_path)
			if not original_prim.IsValid():
				original_prim = None
		return original_prim

	def add_node(self, stage, dest_name, binding, bound_objects):
		original_prim = None
		if self.parent_usd_file != None:
			object_template = binding.get_object_template()
			first_bound_object = bound_objects[0] if len(bound_objects) > 0 else None
			if first_bound_object != None:
				#prim_path = self.get_usd_path_from_actor_labels(first_bound_object)
				pass
			elif object_template != None:
				# Cannot attach a spawnable to another actor in the level
				# So if we want to override something in an existing USD file we need a custom attribute
				# something that lets us provide the full path in the scene to

				#or we need to generically update sequencer to allow attaching spawnables to actors in level

				pass

			# 1) Handle Spawnable
			# - What name will we give it in the USD file?
			# Note it could be attached to another actor in the level
			# - Is it possible that this will override an object already in the USD file?
			# - Note: During the level export this spawnable will appear
			#     Probably should exclude sequencer spawnables from level exports
			# 2) Handle possession of level object
			# a) Object is in level already
			# a) Object not in level (unlinked)

			# TODO: override existing usd stage prim instead of adding new one
			#
			#if len(bound_objects) > 0 and bound_objects[0] != None:
			#	prim_path = self.get_usd_path_from_actor_labels(bound_objects[0])
			#	original_prim = self.get_original_prim(prim_path)

		xform = UsdGeom.Xform.Define(stage, dest_name)
		#sphere_prim = UsdGeom.Sphere.Define(stage, node_base_path + '/' + node_name + 'Shape')
		#xform_prim.SetMetadata('comment', 'Example comment')

		xform_prim = xform.GetPrim()
		#xform_prim.CreateAttribute(self.custom_attribute_prefix + "_" + "display_name", Sdf.ValueTypeNames.String).Set(str(binding.get_display_name()))
		#xform_prim.CreateAttribute(self.custom_attribute_prefix + "_" + "binding_guid", Sdf.ValueTypeNames.String).Set(binding.get_id().to_string())

		custom_data = self.generate_node_custom_data(binding, bound_objects)
		xform_prim.SetCustomDataByKey(self.custom_attribute_prefix, custom_data)

		return xform

	def list_actors_in_unreal_sequence(self):
		return []

	def get_usd_path_from_actor_labels(self, actor):
		result = ""
		current = actor
		while current != None:
			modified_name = usd_unreal.utils.clean_node_name(current.get_actor_label())
			result = "/" + modified_name + result
			current = current.get_attach_parent_actor()
		return result

	# indivdiual sequence, assuming no sub-sequences
	def export_sequence(self, sequence, filename):

		self.filename = filename

		# Convert parent path to relative
		if self.parent_usd_file != None:
			if len(self.parent_usd_file) == 0:
				self.parent_usd_file = None
			elif self.filename == self.parent_usd_file:
				self.parent_usd_file = None
			else:
				dirname = os.path.dirname(self.filename)
				parent_dirname = os.path.dirname(self.parent_usd_file)
				relative_path = os.path.relpath(parent_dirname, dirname)
				relative_path = relative_path.replace('\\', '/')
				self.parent_usd_file = relative_path + "/" + os.path.basename(self.parent_usd_file)

		# List actors in Unreal sequence
		self.unreal_prims = {}
		actors = self.list_actors_in_unreal_sequence()
		for actor in actors:
			prim_path = self.get_usd_path_from_actor_labels(actor)
			self.unreal_prims[prim_path] = actor

		# Write USD file
		with usd_unreal.utils.USDStageWrapper(self, Usd.Stage.CreateNew(filename)) as stage_wrapper:
			stage = self.stage
			if self.parent_usd_file != None:
				stage.GetRootLayer().subLayerPaths.append(self.parent_usd_file)

			self.export_sequence_internal(sequence, filename)

	def export_sequence_internal(self, sequence, filename):
		self.sequence = sequence
		self.bake_frame_rate = sequence.get_display_rate()
		self.bake_frame_rate_float = float(self.bake_frame_rate.numerator) / float(self.bake_frame_rate.denominator)
		self.tick_resolution = sequence.get_tick_resolution()
		self.tick_resolution_float = float(self.tick_resolution.numerator) / float(self.tick_resolution.denominator)
		self.ticks_per_frame = self.tick_resolution_float / self.bake_frame_rate_float
		#print("Export Sequence: " + str(sequence.get_path_name()))
		#print("  Frame Rate: " + str(sequence.get_display_rate().numerator) + " / " + str(sequence.get_display_rate().denominator))
		#print("  Tick Resolution: " + str(sequence.get_tick_resolution().numerator) + " / " + str(sequence.get_tick_resolution().denominator))
		#print("  Ticks Per Frame: " + str(self.ticks_per_frame))

		stage = self.stage
		UsdGeom.SetStageUpAxis(stage, UsdGeom.Tokens.y)
		stage.SetFramesPerSecond(self.bake_frame_rate_float)

		# Movie Scene
		#movie_scene = sequence.get_movie_scene()
		#print("  movie_scene " + str(movie_scene))
		#for master_track in sequence.find_master_tracks_by_type(unreal.MovieSceneTrack):
		#	print("  master track: " + str(master_track))

		def export_binding(binding, is_spawnable):
			# Skip component bindings
			if binding.get_parent().is_valid():
				return

			child_camera_component = None
			for child in binding.get_child_possessables():
				if self.class_is_camera_component(child.get_possessed_object_class()):
					child_camera_component = child

			first_bound_object = None
			bound_objects = []
			if self.sequencer_context != None:
				bound_objects = sequence.locate_bound_objects(binding, self.sequencer_context)
				if len(bound_objects) > 0:
					first_bound_object = bound_objects[0]

			dest_name = None
			if first_bound_object != None:
				# Possessed actor
				dest_name = usd_unreal.utils.get_usd_path_from_actor_labels(first_bound_object)
			else:
				# Spawnable actor
				#
				# Binding name is actor label when spawned in level
				#
				# Limitation: Cannot currently be parented to another actor in the Unreal level
				# Limitation: Cannot currently query most attributes from an object template directly
				#
				node_name = str(binding.get_name())
				node_name = usd_unreal.utils.clean_node_name(node_name)
				dest_name = '/' + node_name

			binding_guid_string = binding.get_id().to_string()

			if usd_unreal.developer_mode == True:
				print("Export Binding: '" + str(binding.get_display_name()) + "', name: '" + str(binding.get_name()) + "', id: " + binding_guid_string)
				print("  is_spawnable: " + str(is_spawnable))
				print("  first_bound_object: " + str(first_bound_object))
				print("  binding.get_object_template(): " + str(binding.get_object_template()))
				print("  binding.get_possessed_object_class(): " + str(binding.get_possessed_object_class()))
				print("  dest_name: " + str(dest_name))

			usd_node = None
			if usd_unreal.attributes.LightAttributes.is_light_actor(first_bound_object):
				usd_node = self.add_light(stage, dest_name, binding, bound_objects)
			elif child_camera_component != None:
				self.add_camera(stage, dest_name, binding, child_camera_component, bound_objects)
				return
			else:
				usd_node = self.add_node(stage, dest_name, binding, bound_objects)
			if usd_node == None:
				return

			tracks = binding.get_tracks()
			self.handle_transform(usd_node, tracks, bound_objects)
			self.handle_visibility(usd_node, tracks, bound_objects)

		for binding in sequence.get_spawnables():
			export_binding(binding, True)

		for binding in sequence.get_possessables():
			export_binding(binding, False)

		if self.scene_timespan[0] == None:
			self.scene_timespan[0] = 0
		if self.scene_timespan[1] == None:
			self.scene_timespan[1] = 0

		stage.SetStartTimeCode(self.scene_timespan[0])
		stage.SetEndTimeCode(self.scene_timespan[1])

		stage.Save()

def get_level_editor_sequencer_context():
	return unreal.EditorLevelLibrary.get_editor_world() if hasattr(unreal, "EditorLevelLibrary") and unreal.EditorLevelLibrary != None else None

def run_asset_export_task(asset_export_task):
	task = UsdSequenceExporterTask()
	task.asset_export_task = asset_export_task
	if isinstance(asset_export_task, unreal.SequencerExportTask):
		task.sequencer_context = asset_export_task.sequencer_context
	task.export_sequence(asset_export_task.object, asset_export_task.filename)
	task.sequencer_context = None
