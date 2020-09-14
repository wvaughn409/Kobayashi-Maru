import unreal
import usd_unreal.utils
from pxr import Usd, UsdGeom, UsdLux, Sdf, Gf

class UnrealUSDAttributeInfo:
	""" Stores getter and setter functions (`get_from_actor` and `set_on_unreal_actor`)
	for accessing a specific attribute to/from an unreal actor 
	"""
	unreal_property_path_attribute_name = "unreal_property_path"
	get_from_actor_attribute_name = "get_from_actor"
	set_on_unreal_actor_attribute_name = "set_on_unreal_actor"

	def __init__(self, sequencer_track_name, num_channels=1):
		self.sequencer_track_name = sequencer_track_name
		self.num_channels = num_channels
		if num_channels == 1:
			self.sequencer_channel_names = [sequencer_track_name]

	def call_get_from_actor(self, actor):
		""" Calls the `get_from_actor` function on `actor` and returns the result, or None """
		# Call custom function to get attribute
		function_value = getattr(self, UnrealUSDAttributeInfo.get_from_actor_attribute_name, None)
		if function_value != None:
			return function_value(actor)

		# Walk chain of attribute names to get attribute generically
		path_array = getattr(self, UnrealUSDAttributeInfo.unreal_property_path_attribute_name, None)
		if path_array != None:
			sub_attribute = actor
			for i in xrange(0, len(path_array) - 1):
				sub_attribute = getattr(sub_attribute, path_array[i])
			return sub_attribute.get_editor_property(path_array[len(path_array) - 1])

		return None

	def call_set_on_unreal_actor(self, actor, value):
		""" Calls the `set_on_unreal_actor` function on `actor` with `value`, and returns `True` if succeeded """
		# Call custom function to manage setting attribute
		function_value = getattr(self, UnrealUSDAttributeInfo.set_on_unreal_actor_attribute_name, None)
		if function_value != None:
			function_value(actor, value)
			return True

		# Walk chain of attribute names to set attribute generically
		path_array = getattr(self, UnrealUSDAttributeInfo.unreal_property_path_attribute_name, None)
		if path_array != None:
			sub_attribute = actor
			for i in xrange(0, len(path_array) - 1):
				sub_attribute = getattr(sub_attribute, path_array[i])
			sub_attribute.set_editor_property(path_array[len(path_array) - 1], value)
			return True

		return False

class AttributesContainerBase:
	""" Container for a list of `attributes` that can be accessed from an Unreal actor """
	def __init__(self):
		self.attributes = []

	@staticmethod
	def default_convert_unreal_to_usd(value):
		return value

	def define_attribute(self, sequencer_track_name, num_channels=1):
		attribute = UnrealUSDAttributeInfo(sequencer_track_name, num_channels)
		attribute.convert_unreal_to_usd = AttributesContainerBase.default_convert_unreal_to_usd
		self.attributes.append(attribute)
		return attribute

class NodeAttributes(AttributesContainerBase):
	def __init__(self):
		AttributesContainerBase.__init__(self)

		attribute = self.define_attribute("Visibility")
		self.visibility = attribute
		attribute.construct_usd_attribute = lambda usd_node : usd_node.GetVisibilityAttr()
		attribute.convert_unreal_to_usd = lambda visible : UsdGeom.Tokens.inherited if visible else UsdGeom.Tokens.invisible
		attribute.get_from_usd = lambda usd_node : UsdGeom.Imageable(usd_node).ComputeVisibility() != UsdGeom.Tokens.invisible
		attribute.get_from_actor = lambda actor : actor.hidden == False
		attribute.set_on_unreal_actor = lambda actor, value : actor.set_editor_property("hidden", value != True)

class CameraAttributes(AttributesContainerBase):
	def __init__(self):
		AttributesContainerBase.__init__(self)

		attribute = self.define_attribute("CurrentFocalLength")
		attribute.construct_usd_attribute = lambda camera : UsdGeom.Camera(camera).GetFocalLengthAttr()
		attribute.get_from_usd = lambda usd_node : usd_unreal.utils.get_usd_attribute_value(usd_node.GetPrim(), "focalLength")
		attribute.unreal_property_path = ["camera_component", "current_focal_length"]
		attribute.get_from_actor = lambda actor : actor.camera_component.current_focal_length

		attribute = self.define_attribute("ManualFocusDistance")
		attribute.construct_usd_attribute = lambda camera : UsdGeom.Camera(camera).GetFocusDistanceAttr()
		attribute.get_from_usd = lambda usd_node : usd_unreal.utils.get_usd_attribute_value(usd_node.GetPrim(), "focusDistance")
		attribute.unreal_property_path = ["camera_component", "focus_settings", "manual_focus_distance"]
		attribute.get_from_actor = lambda actor : actor.camera_component.focus_settings.manual_focus_distance

		attribute = self.define_attribute("CurrentAperture")
		attribute.construct_usd_attribute = lambda camera : UsdGeom.Camera(camera).GetFStopAttr()
		attribute.get_from_usd = lambda usd_node : usd_unreal.utils.get_usd_attribute_value(usd_node.GetPrim(), "fStop")
		attribute.unreal_property_path = ["camera_component", "current_aperture"]
		attribute.get_from_actor = lambda actor : actor.camera_component.current_aperture

		attribute = self.define_attribute("SensorWidth")
		attribute.construct_usd_attribute = lambda camera : UsdGeom.Camera(camera).GetHorizontalApertureAttr()
		attribute.get_from_usd = lambda usd_node : usd_unreal.utils.get_usd_attribute_value(usd_node.GetPrim(), "horizontalAperture")
		attribute.unreal_property_path = ["camera_component", "filmback", "sensor_width"]
		attribute.get_from_actor = lambda actor : actor.camera_component.filmback.sensor_width

		attribute = self.define_attribute("SensorHeight")
		attribute.construct_usd_attribute = lambda camera : UsdGeom.Camera(camera).GetVerticalApertureAttr()
		attribute.get_from_usd = lambda usd_node : usd_unreal.utils.get_usd_attribute_value(usd_node.GetPrim(), "verticalAperture")
		attribute.unreal_property_path = ["camera_component", "filmback", "sensor_height"]
		attribute.get_from_actor = lambda actor : actor.camera_component.filmback.sensor_height

	def is_unreal_camera_actor(self, actor):
		return isinstance(actor, unreal.CameraActor)

	def get_from_unreal_actor(self, attribute, actor):
		if actor.camera_component != None and isinstance(actor.camera_component, unreal.CineCameraComponent):
			return attribute.call_get_from_actor(actor)
		return None

class LightAttributes(AttributesContainerBase):
	def __init__(self):
		AttributesContainerBase.__init__(self)

		attribute = self.define_attribute("Intensity")
		#attribute.construct_usd_attribute = lambda usd_node : usd_node.GetPrim().CreateAttribute("intensity", Sdf.ValueTypeNames.Double)
		attribute.construct_usd_attribute = lambda usd_node : UsdLux.Light(usd_node).GetIntensityAttr()
		attribute.get_from_usd = lambda usd_node : usd_unreal.utils.get_usd_attribute_value(usd_node.GetPrim(), "intensity")
		attribute.unreal_property_path = ["light_component", "intensity"]
		attribute.get_from_actor = lambda actor : actor.light_component.intensity

		attribute = self.define_attribute("LightColor", 3)
		attribute.construct_usd_attribute = lambda usd_node : UsdLux.Light(usd_node).GetColorAttr()
		attribute.convert_unreal_to_usd = lambda color : Gf.Vec3f(color)
		attribute.get_from_usd = lambda usd_node : usd_unreal.utils.get_usd_attribute_value(usd_node.GetPrim(), "color")
		attribute.sequencer_channel_names = ["Color.R", "Color.G", "Color.B"]
		attribute.get_from_actor = lambda actor : LightAttributes.get_light_color(actor.light_component)
		attribute.set_on_unreal_actor = lambda actor, value : actor.light_component.set_light_color(value)

		attribute = self.define_attribute("CastShadows")
		attribute.construct_usd_attribute = lambda usd_node : UsdLux.ShadowAPI(usd_node).CreateShadowEnableAttr()
		attribute.get_from_usd = lambda usd_node : usd_unreal.utils.get_usd_attribute_value(usd_node, "shadow:enable")
		attribute.unreal_property_path = ["light_component", "cast_shadows"]
		attribute.export_compacted_boolean_keys = True
		attribute.get_from_actor = lambda actor : actor.light_component.cast_shadows

		def get_temperature_from_light_component(component):
			return component.temperature if not isinstance(component, unreal.SkyLightComponent) else None
		attribute = self.define_attribute("Temperature")
		attribute.construct_usd_attribute = lambda usd_node : UsdLux.Light(usd_node).GetColorTemperatureAttr()
		attribute.get_from_usd = lambda usd_node : usd_unreal.utils.get_usd_attribute_value(usd_node.GetPrim(), "colorTemperature")
		attribute.unreal_property_path = ["light_component", "temperature"]
		attribute.get_from_actor = lambda actor : get_temperature_from_light_component(actor.light_component)

		def get_use_temperature_from_light_component(component):
			return component.use_temperature if not isinstance(component, unreal.SkyLightComponent) else None
		attribute = self.define_attribute("UseTemperature")
		attribute.construct_usd_attribute = lambda usd_node : UsdLux.Light(usd_node).GetEnableColorTemperatureAttr()
		attribute.get_from_usd = lambda usd_node : usd_unreal.utils.get_usd_attribute_value(usd_node.GetPrim(), "enableColorTemperature")
		attribute.unreal_property_path = ["light_component", "use_temperature"]
		attribute.get_from_actor = lambda actor : get_use_temperature_from_light_component(actor.light_component)
		attribute.export_compacted_boolean_keys = True

	@staticmethod
	def get_light_color(component):
		v = component.get_light_color()
		return (v.r, v.g, v.b)

	@staticmethod
	def get_light_actor(binding, bound_objects):
		if len(bound_objects) > 0:
			if LightAttributes.is_light_actor(bound_objects[0]):
				return bound_objects[0]
		return None

	@staticmethod
	def get_light_component_binding(binding, bound_objects):
		for child in binding.get_child_possessables():
			child_class = child.get_possessed_object_class()
			if child_class != None and isinstance(unreal.get_default_object(child_class), unreal.LightComponentBase):
				return child
		return None

	def get_from_unreal_actor(self, attribute, actor):
		if hasattr(actor, "light_component") and actor.light_component != None:
			if isinstance(actor.light_component, unreal.LightComponentBase):
				return attribute.call_get_from_actor(actor)
		return None

	@staticmethod
	def is_light_actor(actor):
		return isinstance(actor, unreal.Light) or isinstance(actor, unreal.SkyLight)

	@staticmethod
	def construct_usd_light(stage, actor, dest_name):
		usd_node = None
		if isinstance(actor, unreal.RectLight):
			usd_node = UsdLux.RectLight.Define(stage, dest_name)
		elif isinstance(actor, unreal.PointLight):
			usd_node = UsdLux.SphereLight.Define(stage, dest_name)
		elif isinstance(actor, unreal.DirectionalLight):
			usd_node = UsdLux.DistantLight.Define(stage, dest_name)
		elif isinstance(actor, unreal.SpotLight):
			usd_node = UsdLux.DiskLight.Define(stage, dest_name)
		elif isinstance(actor, unreal.Light):
			usd_node = UsdLux.SphereLight.Define(stage, dest_name)
		elif isinstance(actor, unreal.SkyLight):
			usd_node = UsdLux.DomeLight.Define(stage, dest_name)
		return usd_node

	@staticmethod
	def get_unreal_light_class_from_usd_prim(prim):
		if prim.IsA(UsdLux.RectLight):
			return unreal.RectLight
		elif prim.IsA(UsdLux.SphereLight):
			return unreal.PointLight
		elif prim.IsA(UsdLux.DistantLight):
			return unreal.DirectionalLight
		elif prim.IsA(UsdLux.DiskLight):
			return unreal.SpotLight
		elif prim.IsA(UsdLux.DomeLight):
			return unreal.SkyLight
		return None

class TransformAttributes(AttributesContainerBase):
	def __init__(self):
		AttributesContainerBase.__init__(self)

		attribute = self.define_attribute("Location", 3)
		self.location = attribute
		attribute.sequencer_channel_names = ["Location.X", "Location.Y", "Location.Z"]
		attribute.construct_usd_attribute = lambda usd_node : usd_node.AddTranslateOp()
		attribute.get_from_actor = lambda x : x.get_actor_location().to_tuple()
		attribute.convert_unreal_to_usd = lambda x, unit_scale : TransformAttributes.convert_location_from_unreal(x, unit_scale)

		attribute = self.define_attribute("Rotation", 3)
		self.rotation = attribute
		attribute.sequencer_channel_names = ["Rotation.X", "Rotation.Y", "Rotation.Z"]
		attribute.construct_usd_attribute = lambda usd_node : usd_node.AddRotateXZYOp()
		attribute.get_from_actor = lambda x : x.get_actor_rotation().to_tuple()
		attribute.convert_unreal_to_usd = lambda x, unit_scale : TransformAttributes.convert_rotation_from_unreal(x, unit_scale)

		attribute = self.define_attribute("Scale", 3)
		self.scale = attribute
		attribute.sequencer_channel_names = ["Scale.X", "Scale.Y", "Scale.Z"]
		attribute.construct_usd_attribute = lambda usd_node : usd_node.AddScaleOp()
		attribute.get_from_actor = lambda x : x.get_actor_scale3d().to_tuple()
		attribute.convert_unreal_to_usd = lambda x, unit_scale : TransformAttributes.convert_scale_from_unreal(x, unit_scale)

		self.usd_camera_import_rotation = unreal.Quat()
		self.usd_camera_import_rotation.set_from_euler([0, 0, -90]) # roll, pitch, yaw

	@staticmethod
	def convert_location_from_unreal(v, unit_scale):
		return Gf.Vec3d(v[0] * unit_scale, v[2] * unit_scale, v[1] * unit_scale)

	@staticmethod
	def convert_rotation_from_unreal(v, unit_scale=1):
		return Gf.Vec3f(v[0], -v[2], v[1])

	@staticmethod
	def convert_scale_from_unreal(v, unit_scale=1):
		return Gf.Vec3f(v[0], v[2], v[1])

	@staticmethod
	def convert_rotation_from_usd_y_up(t):
		def swap_y(value):
			return unreal.Plane(x=value[0], y=value[2], z=value[1], w=value[3])
		m = unreal.Matrix()
		m.x_plane = swap_y(t[0])
		m.y_plane = swap_y(t[2])
		m.z_plane = swap_y(t[1])
		m.w_plane = swap_y(t[3])
		return m

	@staticmethod
	def convert_rotation_from_usd_z_up(t):
		def handle_row(value):
			return unreal.Plane(x=value[0], y=value[1], z=value[2], w=value[3])
		m = unreal.Matrix()
		m.x_plane = handle_row(t[0])
		m.y_plane = handle_row(t[1])
		m.z_plane = handle_row(t[2])
		m.w_plane = handle_row(t[3])
		return m

	def local_transform_from_usd_node(self, prim, unit_scale=1.0, up_axis='y', extra_rotate=None, frame=Usd.TimeCode.Default()):
		usd_xform = UsdGeom.Xformable(prim)
		usd_transform = usd_xform.GetLocalTransformation(frame)
		return self.transform_from_usd_transform(usd_transform, unit_scale, up_axis, extra_rotate)

	def transform_from_usd_transform(self, usd_transform, unit_scale=1.0, up_axis='y', extra_rotate=None):

		transform = None
		if up_axis == 'z':
			transform = TransformAttributes.convert_rotation_from_usd_z_up(usd_transform).transform()
		elif up_axis == 'y':
			transform = TransformAttributes.convert_rotation_from_usd_y_up(usd_transform).transform()

		# Cameras/Lights in unreal may face a different direction
		if extra_rotate != None and not extra_rotate.is_identity():

			t = unreal.Transform()
			t.rotation = extra_rotate
			transform.translation = unreal.MathLibrary.transform_location(t, transform.translation)

			transform.rotation = extra_rotate * transform.rotation

		transform.translation.x *= unit_scale
		transform.translation.y *= unit_scale
		transform.translation.z *= unit_scale

		return transform

	def usd_transform_from_unreal_transform(self, unreal_transform, unit_scale=1.0, up_axis='y'):
		location = TransformAttributes.convert_location_from_unreal(unreal_transform.translation.to_tuple(), unit_scale)
		rotation = TransformAttributes.convert_rotation_from_unreal(unreal_transform.rotation.rotator().to_tuple(), unit_scale)
		scale = TransformAttributes.convert_scale_from_unreal(unreal_transform.scale3d.to_tuple(), unit_scale)
		return (location, rotation, scale)

	def get_from_unreal_actor(self, attribute, actor):
		if isinstance(actor, unreal.Actor):
			return attribute.call_get_from_actor(actor)
		return None

asset_path_variable_name = "unrealAssetPath"
actor_class_variable_name = "unrealActorClass"

node = NodeAttributes()
camera = CameraAttributes()
light = LightAttributes()
transform = TransformAttributes()
