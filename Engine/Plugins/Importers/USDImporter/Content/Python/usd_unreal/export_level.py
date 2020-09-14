import unreal
import usd_unreal.utils
import usd_unreal.attributes
import os
import math
from pxr import Usd, UsdGeom, UsdLux, Sdf

class USDExportLevel:
	def __init__(self):
		self.unit_scale = 1.0
		self.actor_export_handlers = [self.export_camera, self.export_light, self.export_generic_actor]
		self.custom_attribute_prefix = usd_unreal.utils.get_app_custom_attribute_prefix()
		self.stage = None
		self.export_selected = False

	def should_export_actor(self, actor):
		if isinstance(actor, unreal.USDLevelInfo):
			return False
		return True

	def export_transform_attribute(self, actor, usd_node, attribute):
		value = attribute.convert_unreal_to_usd(attribute.call_get_from_actor(actor), self.unit_scale)
		attribute.construct_usd_attribute(usd_node).Set(value=value)

	def export_transform_attributes(self, actor, usd_node):
		self.export_transform_attribute(actor, usd_node, usd_unreal.attributes.transform.location)
		self.export_transform_attribute(actor, usd_node, usd_unreal.attributes.transform.rotation)
		self.export_transform_attribute(actor, usd_node, usd_unreal.attributes.transform.scale)

		# Camera actors need an extra -90 degree rotation around the y axis (see export_camera).
		# That rotation is added to the usd_node before this, but needs to be the last op, so here
		# we move the first op to the last position
		if isinstance(actor, unreal.CameraActor):
			ops = usd_node.GetOrderedXformOps()
			if len(ops) == 4:
				ops = ops[1:] + ops[0:1]
				usd_node.SetXformOpOrder(ops)

	def export_visibility(self, actor, usd_node):
		attribute = usd_unreal.attributes.node.visibility
		value = attribute.call_get_from_actor(actor)
		if value == False:
			attribute.construct_usd_attribute(usd_node).Set(value=attribute.convert_unreal_to_usd(value))

	def export_camera(self, actor, dest_actor_name):
		""" Tries converting the unreal camera actor `actor` into an USD Camera node with name `dest_actor_name`
		
		Returns the USD camera node or None
		"""
		if not usd_unreal.attributes.camera.is_unreal_camera_actor(actor):
			return None

		usd_node = UsdGeom.Camera.Define(self.stage, '/' + dest_actor_name)
		usd_camera_prim = usd_node.GetPrim()
		usd_camera_prim.SetMetadata('kind', 'assembly')

		for attribute in usd_unreal.attributes.camera.attributes:
			value = usd_unreal.attributes.camera.get_from_unreal_actor(attribute, actor)
			if value != None:
				attribute.construct_usd_attribute(usd_node).Set(value=value)

		# Rotation correction. Note: This needs to later be moved to be the last op in the xform order
		rotate_y_op = usd_node.AddRotateYOp(opSuffix='rotateAxis')
		rotate_y_op.Set(-90)

		return usd_node

	def export_light(self, actor, dest_actor_name):
		""" Tries converting the unreal light actor `actor` into the corresponding USD light node with name `dest_actor_name`
		
		Returns the USD light node or None
		"""
		if not usd_unreal.attributes.LightAttributes.is_light_actor(actor):
			return None

		usd_node = usd_unreal.attributes.LightAttributes.construct_usd_light(self.stage, actor, '/' + dest_actor_name)

		for attribute in usd_unreal.attributes.light.attributes:
			value = usd_unreal.attributes.light.get_from_unreal_actor(attribute, actor)
			if value != None:
				attribute.construct_usd_attribute(usd_node).Set(value=attribute.convert_unreal_to_usd(value))

		return usd_node

	def export_generic_actor(self, actor, dest_actor_name):
		""" Tries converting the unreal Actor `actor` into an USD Xform node with name `dest_actor_name`
		
		Returns the USD Xform node or None
		"""
		usd_node = UsdGeom.Xform.Define(self.stage, '/' + dest_actor_name)
		xform_prim = usd_node.GetPrim()

		static_mesh_components = actor.get_components_by_class(unreal.StaticMeshComponent.static_class())
		if len(static_mesh_components) > 0:
			component = static_mesh_components[0]
			if component.static_mesh != None:
				static_mesh_path = component.static_mesh.get_path_name()
				xform_prim.CreateAttribute(usd_unreal.attributes.asset_path_variable_name, Sdf.ValueTypeNames.String).Set(static_mesh_path)

		return usd_node

	def export_level(self, filename):
		""" Tries exporting the level actors to a USD file with name `filename`"""
		with usd_unreal.utils.USDStageWrapper(self, Usd.Stage.CreateNew(filename)) as stage_wrapper:
			UsdGeom.SetStageUpAxis(self.stage, UsdGeom.Tokens.y)

			if self.export_selected:
				actors = unreal.EditorLevelLibrary.get_selected_level_actors()
			else:
				actors = unreal.EditorLevelLibrary.get_all_level_actors()

			unique_names = {}
			for actor in actors:
				if not self.should_export_actor(actor):
					continue

				dest_actor_name = usd_unreal.utils.clean_node_name(actor.get_actor_label())
				dest_actor_name = usd_unreal.utils.generate_unique_name(unique_names, dest_actor_name)

				usd_node = None
				for handler in self.actor_export_handlers:
					usd_node = handler(actor, dest_actor_name)
					if usd_node is not None:
						break

				if usd_node is None:
					continue

				unique_names[dest_actor_name] = True

				xform_prim = usd_node.GetPrim()
				xform_prim.CreateAttribute("unrealActorClass", Sdf.ValueTypeNames.String).Set(actor.get_class().get_path_name())

				self.export_visibility(actor, usd_node)
				self.export_transform_attributes(actor, usd_node)

			self.stage.Save()

def run_asset_export_task(task):
	usd_export_task = usd_unreal.export_level.USDExportLevel()
	usd_export_task.export_selected = task.selected
	usd_export_task.export_level(task.filename)
