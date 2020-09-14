import unreal
import usd_unreal.utils
import usd_unreal.attributes
from pxr import Usd, UsdGeom, Sdf
import hashlib

class USDImportNode:
	def __init__(self):
		pass

class USDImportLevel:
	def __init__(self):
		self.generated_asset_base_path = "/Game/meshes/"
		self.unit_scale = 1.0
		self.hash_generated_paths = False
		self.allow_actor_attachments = True
		self.import_generic_xforms = True
		self.overwrite_existing_mesh_assets = True
		self.edit_existing_actors = True
		self.custom_attribute_prefix = usd_unreal.utils.get_app_custom_attribute_prefix()
		self.allow_asset_import = True

		self.actor_import_handlers = [self.import_camera, self.import_light, self.import_static_mesh_actor, self.import_generic_actor]
		self.stage = None
		self.stage_up_axis = 'y'

	def get_usd_attribute_value(self, usd_object, full_name, default=None):
		if not usd_object.HasAttribute(full_name):
			return default
		usd_attribute = usd_object.GetAttribute(full_name)
		return usd_attribute.Get()

	def get_usd_attribute_value_by_app_name(self, usd_object, name, default=None):
		return self.get_usd_attribute_value(usd_object, self.custom_attribute_prefix + "_" + name, default)

	def should_import_actor(self, actor):
		return True

	def spawn_actor(self, node, actor_class=None, rotate_axis=None):
		usd_node = node.usd_node
		xformable = UsdGeom.Xformable(usd_node)

		#local_transform = xformable.GetLocalTransformation(self.current_frame)
		world_transform = self.xform_cache.GetLocalToWorldTransform(usd_node)

		if actor_class == None:
			actor_class = unreal.Actor.static_class()

		usd_location = world_transform[3]

		location = None
		if self.stage_up_axis == 'z':
			location = (usd_location[0] * self.unit_scale, usd_location[1] * self.unit_scale, usd_location[2] * self.unit_scale)
			m = usd_unreal.attributes.TransformAttributes.convert_rotation_from_usd_z_up(world_transform)
			#print(str(world_transform))
			#print(str(m))
		elif self.stage_up_axis == 'y':
			location = (usd_location[0] * self.unit_scale, usd_location[2] * self.unit_scale, usd_location[1] * self.unit_scale)
			m = usd_unreal.attributes.TransformAttributes.convert_rotation_from_usd_y_up(world_transform)

		t = m.transform()
		rotation = t.rotation.rotator()

		# Cameras/Lights in unreal may face a different direction
		if rotate_axis != None:
			if rotate_axis.yaw != 0 or rotate_axis.pitch != 0 or rotate_axis.roll != 0:
				location = unreal.MathLibrary.transform_location(rotate_axis.transform(), location)
				rotation = unreal.MathLibrary.compose_rotators(rotation, rotate_axis)

		actor = self.existing_actors.get(str(usd_node.GetPath()), None)
		if actor == None:
			actor = unreal.EditorLevelLibrary.spawn_actor_from_object(actor_class, location, rotation)
			if actor == None:
				print("Failed to spawn actor! " + str(usd_node.GetPath()))
				return None

			if hasattr(node, "label") and node.label != None:
				actor.set_actor_label(node.label)
			else:
				actor.set_actor_label(usd_node.GetName())

			if actor_class == unreal.Actor.static_class() and actor.root_component != None:
				actor.root_component.set_mobility(unreal.ComponentMobility.STATIC)
		else:
			actor.set_actor_location(location, True, True)
			actor.set_actor_rotation(rotation, True)

		actor.set_actor_scale3d(t.scale3d)

		node.actor = actor

		if self.allow_actor_attachments:
			if hasattr(node, "parent") and node.parent != None:
				if not hasattr(node.parent, "actor"):
					print("Error: Parent actor missing: " + str(node.parent.usd_node.GetPath()))
				if hasattr(node.parent, "actor") and node.parent.actor != None:
					#rule = unreal.AttachmentRule.KEEP_RELATIVE
					rule = unreal.AttachmentRule.KEEP_WORLD
					actor.attach_to_actor(node.parent.actor, '', rule, rule, rule, False)

		return actor

	def apply_attributes(self, actor, attributes, node):
		for attribute in attributes:
			if hasattr(attribute, "get_from_usd") and attribute.get_from_usd != None:
				value = attribute.get_from_usd(node.usd_node)
				if value != None:
					attribute.call_set_on_unreal_actor(actor, value)

	def import_camera(self, node):
		if node.unreal_class == None:
			return None
		if not isinstance(unreal.get_default_object(node.unreal_class), unreal.CineCameraActor):
			return None
		actor = None
		if node.unreal_class != None:
			actor = self.spawn_actor(node, node.unreal_class, unreal.Rotator(yaw=-90))
			if actor != None:
				self.apply_attributes(actor, usd_unreal.attributes.camera.attributes, node)

		return actor

	def import_light(self, node):
		if node.unreal_class == None:
			return None
		if not isinstance(unreal.get_default_object(node.unreal_class), unreal.Light):
			return None

		actor = self.spawn_actor(node, node.unreal_class)
		if actor == None:
			return None

		self.apply_attributes(actor, usd_unreal.attributes.light.attributes, node)

		return actor

	def import_static_mesh_actor(self, node):
		if node.unreal_class == None:
			return None
		if not isinstance(unreal.get_default_object(node.unreal_class), unreal.StaticMeshActor):
			return None

		actor = self.spawn_actor(node, node.unreal_asset)
		if actor == None:
			return None

		self.apply_attributes(actor, usd_unreal.attributes.node.attributes, node)

		return actor

	def import_generic_actor(self, node):
		if not self.import_generic_xforms:
			return None

		return self.spawn_actor(node, node.unreal_class)

	def usd_path_to_asset_path(self, usd_path):
		if self.hash_generated_paths:
			h = hashlib.new('md5')
			h.update(usd_path)
			return h.hexdigest()
		else:
			result = unreal.PackageTools.sanitize_package_name(usd_path)
			return result.lstrip('/')

	def generate_asset_path(self, source_path):
		return self.generated_asset_base_path + self.usd_path_to_asset_path(source_path)

	def create_mesh_import_task(self, lookup_by_dest_path):
		sub_tasks = []
		instance_masters = {}

		def create_sub_task(prim, dest_path = None):
			task = unreal.USDBatchImportOptionsSubTask()
			task.source_path = str(prim.GetPath())
			task.dest_path = self.generated_asset_base_path + self.usd_path_to_asset_path(task.source_path)
			lookup_by_dest_path[task.dest_path] = task
			sub_tasks.append(task)
			return task

		def walk_children(prim, instance):
			print("walk_children: " + str(prim.GetPath()) + ", of instance: " + str(instance.GetPath()))
			print("  prim.IsA(UsdGeom.Mesh): " + str(prim.IsA(UsdGeom.Mesh)))
			#if prim.IsA(UsdGeom.Mesh):

			for child in prim.GetChildren():
				walk_children(child, instance)
				#print("  child: " + str(child.GetPath()))

		# Inspect metadata of primitive for first reference path
		def get_first_reference_path_of_prim(prim):
			prim_path = None
			references_metadata = prim.GetMetadata("references")
			for reference_metadata in references_metadata.prependedItems:
				prim_path = reference_metadata.primPath
				break
			return prim_path

		def handle_instance(prim):
			return False

			if not prim.IsInstance():
				return False
			master = prim.GetMaster()
			if not master.IsValid():
				return True
			if master in instance_masters:
				# instance has already been handled
				return True

			# Determine name for StaticMesh asset imported into Unreal
			#
			# Best choice at the moment is the first referenced path
			# Could hash multiple paths together as well
			#
			# Cannot use '__master__1' as those will change each time the scene is modified and re-imported
			#
			# Most accurate choice would be to require asset info or other attribute to tell us what path to use in Unreal
			# Maya plugin does not supply this information on export currently, it would require custom setup before export
			#
			first_reference_path = get_first_reference_path_of_prim(prim)
			if first_reference_path == None:
				return True

			first_reference_path_text = str(first_reference_path)
			if first_reference_path_text in instance_masters:
				# instance has already been handled
				return True

			def visit(prim):
				print(" visiting: " + str(prim.GetPath()))
				if prim.IsA(UsdGeom.Mesh):
					return prim
				for c in prim.GetChildren():
					result = visit(c)
					if result != None:
						return result
				return None

			instance_masters[master] = first_reference_path_text

			geo = visit(master)
			if geo == None:
				return True

			task = unreal.USDBatchImportOptionsSubTask()
			task.source_path = str(first_reference_path)
			task.dest_path = self.generated_asset_base_path + self.usd_path_to_asset_path(str(first_reference_path))
			lookup_by_dest_path[task.dest_path] = task
			sub_tasks.append(task)

			print("  task.dest_path: " + str(task.dest_path))

			return True

		for prim in self.stage.Traverse():
			if prim.IsA(UsdGeom.Mesh):
				create_sub_task(prim)
			else:
				if handle_instance(prim):
					continue

		return sub_tasks

	def spawn_actors_recursive(self, prim, parent_info):

		info = None

		# Spawn an actor for each xformable usd object
		if prim.IsA(UsdGeom.Xformable):

			# Setup container to hold import state for one node
			info = USDImportNode()
			info.usd_path = str(prim.GetPath())
			info.usd_node = prim
			info.parent = parent_info

			#print("spawn: " + str(prim.GetPath()))

			# Set label displayed in world outliner, not the internal object name
			info.label = prim.GetName()

			# Check for custom attributes in the usd scene
			info.unreal_asset  = None
			info.unreal_asset_path = self.get_usd_attribute_value(prim, usd_unreal.attributes.asset_path_variable_name)
			if info.unreal_asset_path != None:
				info.unreal_asset = unreal.load_asset(info.unreal_asset_path)

			info.unreal_class = None
			info.unreal_class_path_name = self.get_usd_attribute_value(prim, usd_unreal.attributes.actor_class_variable_name)
		 	if info.unreal_class_path_name != None:
		 		info.unreal_class = unreal.load_class(None, info.unreal_class_path_name)

			# Fallback try to find asset that was auto imported (without custom unreal property)
			if info.unreal_asset_path == None and info.unreal_asset == None:
				if prim.IsA(UsdGeom.Mesh):
					possible_asset_path = self.generate_asset_path(str(prim.GetPath()))
					if self.allow_asset_import:
						unreal_asset = unreal.load_asset(possible_asset_path)
						if unreal_asset != None:
							info.unreal_asset = unreal_asset
							info.unreal_class = unreal.StaticMeshActor.static_class()

			# Support for generic USD object types (Meshes, Cameras, Lights, ...)
			#if prim.IsA(UsdGeom.Mesh):
			#	if info.unreal_class == None:
			#		info.unreal_class = unreal.StaticMeshActor.static_class()
			#	if info.unreal_asset_path == None:
			#		info.unreal_asset_path = self.generated_asset_base_path + self.usd_path_to_asset_path(str(prim.GetPath()))

			if prim.IsA(UsdGeom.Camera):
				if info.unreal_class == None:
					info.unreal_class = unreal.CineCameraActor.static_class()
			else:
				if info.unreal_class == None:
					unreal_light_class = usd_unreal.attributes.LightAttributes.get_unreal_light_class_from_usd_prim(prim)
					if unreal_light_class != None:
						info.unreal_class = unreal_light_class.static_class()

			# Spawn actor
			actor = None
			for handler in self.actor_import_handlers:
		 		actor = handler(info)
				if actor != None:
					break

		for child in prim.GetChildren():
			self.spawn_actors_recursive(child, info)

	def spawn_actors(self):
		self.read_stage_up_axis(self.stage)
		self.current_frame = Usd.TimeCode.Default()
		self.xform_cache = UsdGeom.XformCache(self.current_frame)
		prim = self.stage.GetPseudoRoot()
		if prim.IsA(UsdGeom.Xformable):
			self.spawn_actors_recursive(prim, None)
		else:
			for child in prim.GetChildren():
				self.spawn_actors_recursive(child, None)

	def read_stage_up_axis(self, stage):
		up_axis = UsdGeom.GetStageUpAxis(stage)
		if up_axis == UsdGeom.Tokens.y:
			self.stage_up_axis = 'y'
		elif up_axis == UsdGeom.Tokens.z:
			self.stage_up_axis = 'z'

	def import_stage_assets(self, assets_to_import):
		if len(assets_to_import) == 0:
			return

		usd_batch_import_options = unreal.USDBatchImportOptions()
		usd_batch_import_options.sub_tasks = assets_to_import
		usd_batch_import_options.generate_unique_path_per_usd_prim = False
		usd_batch_import_options.apply_world_transform_to_geometry = False
		usd_batch_import_options.scale = self.unit_scale

		import_task = unreal.AssetImportTask()
		import_task.filename = self.filename
		import_task.destination_path = self.generated_asset_base_path
		import_task.replace_existing = self.overwrite_existing_mesh_assets
		import_task.automated = True
		import_task.options = usd_batch_import_options
		unreal.AssetToolsHelpers.get_asset_tools().import_asset_tasks([import_task])

	def set_stage_up_axis(self):
		up_axis = UsdGeom.GetStageUpAxis(self.stage)
		if up_axis == UsdGeom.Tokens.y:
			self.stage_up_axis = 'y'
		elif up_axis == UsdGeom.Tokens.z:
			self.stage_up_axis = 'z'

	def import_assets(self):
		assets_to_import = []
		lookup_by_dest_path = {}
		with usd_unreal.utils.USDStageWrapper(self, Usd.Stage.Open(self.filename)) as stage_wrapper:
			self.set_stage_up_axis()
			assets_to_import = self.create_mesh_import_task(lookup_by_dest_path)

		self.import_stage_assets(assets_to_import)

	def import_level(self, filename, world=None):
		self.filename = filename

		if world == None:
			self.world = unreal.EditorLevelLibrary.get_editor_world()
		else:
			self.world = world

		# Import assets that will be spawned in level
		if self.allow_asset_import:
			self.import_assets()

		# Build lookup so we can edit existing actors
		self.existing_actors = {}
		actors = unreal.EditorLevelLibrary.get_all_level_actors()
		for actor in actors:
			usd_path = usd_unreal.utils.get_usd_path_from_actor_labels(actor)
			self.existing_actors[usd_path] = actor

		# Spawn assets
		with usd_unreal.utils.USDStageWrapper(self, Usd.Stage.Open(filename)) as stage_wrapper:
			self.set_stage_up_axis()
			usd_unreal.utils.set_usd_level_info(None, [usd_unreal.utils.convert_to_relative_path(filename)], self.unit_scale)
			self.spawn_actors()

def run_asset_import_task(import_task):
	world = unreal.EditorLevelLibrary.get_editor_world()
	usd_import_task = usd_unreal.import_level.USDImportLevel()
	usd_import_task.import_level(import_task.filename, world)
	import_task.result = world
