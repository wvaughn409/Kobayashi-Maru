# Import the Unreal module to gain access to the UObject/UStruct types.
# Import the JSON module to gain access to json export 
import unreal, json, sequencer_key_examples

# Ensure you have enabled both the "Python Editor Script Plugin" and the "SequencerScripting" plugins for these examples to work.

'''
	Summary:
		This is a minimal example of using Sequencer's Render to Movie API via Python. This covers setting minimal settings
		needed to have output work. Ensure you have enabled both the "Python Editor Script Plugin" and the "SequencerScripting" plugin in your project.
		Open the Python interactive console and use:
			import sequencer_examples
			sequencer_examples.render_sequence_to_movie_minimal("/Game/TestSequence")
		
	Params:
		sequencer_asset_path - String that points to the Movie Scene sequence asset we should load and play when we render.
'''
def render_sequence_to_movie_minimal(sequencer_asset_path):
	# If you do not override all of the settings in the AutomatedLevelSequenceCapture then the other settings are inherited
	# from Unreal's Class Default Object (CDO). Previous versions of Unreal (4.19 and below) stored the Render to Movie UI's settings in config files. Config
	# values are automatically loaded and applied to the CDO when the editor starts up. Unreal 4.20 and above now store the UI settings in a unique
	# instance in the config files, so modifications to the Render to Movie UI will no longer affect the CDO. However, legacy projects that are upgrading
	# from 4.19 to 4.20 may end up with the CDO being modified by their last Render to Movie UI settings. The CDO settings for AutomatedLevelSequenceCapture
	# is stored in /Engine/Saved/Config/<Platform>/EditorSettings.ini under the sections labeled "[/Script/MovieSceneCapture.AutomatedLevelSequenceCapture]", 
	# and "[/Script/LevelSequence.LevelSequenceBurnInOptions]" .
	# If you happen to upgrade your engine and this file persists, then the old settings will be applied by default to the CDO, and thus to the instance created
	# in Python. If you want to ensure that your Python instances come with default settings set via C++ then you should remove that section from the config file
	# on each users machine, or you should override every possible setting via Python (see below).
	
	# Create an instance of UAutomatedLevelSequenceCapture
	capture_settings = unreal.AutomatedLevelSequenceCapture()
	capture_settings.level_sequence_asset = unreal.SoftObjectPath(sequencer_asset_path)
	
	# Invoke Sequencer's Render to Movie. This will throw an exception if a movie render is already
	# in progress, an invalid setting is passed, etc.
	try:
		print("Rendering to movie...")
		unreal.SequencerTools.render_movie(capture_settings, unreal.OnRenderMovieStopped())
	except Exception as e:
		print("Python Caught Exception:")
		print(e)
	
'''
	Summary:
		This is an example of using Sequencer's Render to Movie API via Python. This covers setting all
		possible values on the settings object and configures rendering out separate passes to image sequence.
		Ensure you have enabled both the "Python Editor Script Plugin" and the "SequencerScripting" plugin in your project.
		Open the Python interactive console and use:
			import sequencer_examples
			sequencer_examples.render_sequence_to_movie("/Game/TestSequence")
		
	Params:
		sequencer_asset_path - String that points to the Movie Scene sequence asset we should load and play when we render.
	ToDo:
		InheritedCommandLineArguments - Look up how this works.
'''

def on_render_movie_finished(success):
	print("Movie has finished rendering. Python can now invoke another movie render if needed. Sucess: " + str(success))
	
on_finished_callback = unreal.OnRenderMovieStopped()
on_finished_callback.bind_callable(on_render_movie_finished)

def render_sequence_to_movie(sequencer_asset_path):
	# 1) Create an instance of our UAutomatedLevelSequenceCapture and override all of the settings on it. This class is currently
	# set as a config class so settings will leak between the Unreal Sequencer Render-to-Movie UI and this object. To work around
	# this, we set every setting via the script so that no changes the user has made via the UI will affect the script version.
	# The users UI settings will be reset as an unfortunate side effect of this.
	capture_settings = unreal.AutomatedLevelSequenceCapture()

	# Set all POD settings on the UMovieSceneCapture
	capture_settings.settings.output_directory = unreal.DirectoryPath("../../../QAGame/Saved/VideoCaptures/")
	
	# If you game mode is implemented in Blueprint, load_asset(...) is going to return you the C++ type ('Blueprint') and not what the BP says it inherits from.
	# Instead, because game_mode_override is a TSubclassOf<AGameModeBase> we can use unreal.load_class to get the UClass which is implicitly convertable.
	# ie: capture_settings.settings.game_mode_override = unreal.load_class(None, "/Game/AI/TestingSupport/AITestingGameMode.AITestingGameMode_C")
	capture_settings.settings.game_mode_override = None
	capture_settings.settings.output_format = "{world}"
	capture_settings.settings.overwrite_existing = True
	capture_settings.settings.use_relative_frame_numbers = False
	capture_settings.settings.handle_frames = 0
	capture_settings.settings.zero_pad_frame_numbers = 4
	# If you wish to override the output framerate you can use these two lines, otherwise the framerate will be derived from the sequence being rendered
	capture_settings.settings.use_custom_frame_rate = True
	capture_settings.settings.custom_frame_rate = unreal.FrameRate(24,1)
	capture_settings.settings.resolution.res_x = 1280
	capture_settings.settings.resolution.res_y = 720
	capture_settings.settings.enable_texture_streaming = False
	capture_settings.settings.cinematic_engine_scalability = True
	capture_settings.settings.cinematic_mode = True
	capture_settings.settings.allow_movement = False 	# Requires cinematic_mode = True
	capture_settings.settings.allow_turning = False 	# Requires cinematic_mode = True
	capture_settings.settings.show_player = False 		# Requires cinematic_mode = True
	capture_settings.settings.show_hud = False 			# Requires cinematic_mode = True
	capture_settings.use_separate_process = False
	capture_settings.close_editor_when_capture_starts = False 					# Requires use_separate_process = True
	capture_settings.additional_command_line_arguments = "-NOSCREENMESSAGES"	# Requires use_separate_process = True
	capture_settings.inherited_command_line_arguments = ""						# Requires use_separate_process = True

	# Set all the POD settings on UAutomatedLevelSequenceCapture
	capture_settings.use_custom_start_frame = False 	# If False, the system will automatically calculate the start based on sequence content
	capture_settings.use_custom_end_frame = False 		# If False, the system will automatically calculate the end based on sequence content
	capture_settings.custom_start_frame = unreal.FrameNumber(0)		# Requires use_custom_start_frame = True
	capture_settings.custom_end_frame = unreal.FrameNumber(0)		# Requires use_custom_end_frame = True
	capture_settings.warm_up_frame_count = 0.0
	capture_settings.delay_before_warm_up = 0
	capture_settings.delay_before_shot_warm_up = 0.0
	capture_settings.write_edit_decision_list = True

	# Tell the capture settings which level sequence to render with these settings. The asset does not need to be loaded, 
	# as we're only capturing the path to it and when the PIE instance is created it will load the specified asset.
	# If you only had a reference to the level sequence, you could use "unreal.SoftObjectPath(mysequence.get_path_name())"
	capture_settings.level_sequence_asset = unreal.SoftObjectPath(sequencer_asset_path)

	# To configure the video output we need to tell the capture settings which capture protocol to use. The various supported
	# capture protocols can be found by setting the Unreal Content Browser to "Engine C++ Classes" and filtering for "Protocol"
	# ie: CompositionGraphCaptureProtocol, ImageSequenceProtocol_PNG, etc. Do note that some of the listed protocols are not intended
	# to be used directly. 
	# Right click on a Protocol and use "Copy Reference" and then remove the extra formatting around it. ie: 
	# Class'/Script/MovieSceneCapture.ImageSequenceProtocol_PNG' gets transformed into "/Script/MovieSceneCapture.ImageSequenceProtocol_PNG"
	capture_settings.set_image_capture_protocol_type(unreal.load_class(None, "/Script/MovieSceneCapture.ImageSequenceProtocol_PNG"))
	
	# After we have set the capture protocol to a soft class path we can start editing the settings for the instance of the protocol that is internallyc reated.
	capture_settings.get_image_capture_protocol().compression_quality = 100
	
	# The other complex settings is the burn-in. Create an instance of the LevelSequenceBurnInOptions which is used to 
	# specify if we should use a burn in, and then which settings.
	burn_in_options = unreal.LevelSequenceBurnInOptions()
	burn_in_options.use_burn_in = True

	# You have to specify a path to a class to use for the burn in (if use_burn_in = True), and this class specifies a UClass to define the
	# settings object type. We've created a convinence function which takes the class path, loads the class at that path and assigns it to 
	# the Settings object.
	burn_in_options.set_burn_in(unreal.SoftClassPath("/Engine/Sequencer/DefaultBurnIn.DefaultBurnIn_C"))

	# The default burn in is implemented entirely in Blueprint which means that the method we've been using to set properties will not 
	# work for it. The python bindings that turn bSomeVariableName into "some_variable_name" only work for C++ classes with 
	# UPROPERTY(BlueprintReadWrite) marked fields. Python doesn't know about the existence of Blueprint classes and their fields, so we 
	# have to use an alternative method.
	burn_in_options.settings.set_editor_property('TopLeftText', "{FocalLength}mm,{Aperture},{FocusDistance}")
	burn_in_options.settings.set_editor_property('TopCenterText', "{MasterName} - {Date} - {EngineVersion}")
	burn_in_options.settings.set_editor_property('TopRightText', "{TranslationX} {TranslationY} {TranslationZ}, {RotationX} {RotationY} {RotationZ}")

	burn_in_options.settings.set_editor_property('BottomLeftText', "{ShotName}")
	burn_in_options.settings.set_editor_property('BottomCenterText', "{hh}:{mm}:{ss}:{ff} ({MasterFrame})")
	burn_in_options.settings.set_editor_property('BottomRightText', "{ShotFrame}")

	# Load a Texture2D asset and assign it to the UTexture2D reference that Watermark is.
	# burn_in_settings.set_editor_property('Watermark', None)
	# Note that this example creates a really obvious watermark (a big blurry green smiley face) just so that you know it's working!
	burn_in_options.settings.set_editor_property('Watermark', unreal.load_asset("/Engine/EngineResources/AICON-Green"))
	burn_in_options.settings.set_editor_property('WatermarkTint', unreal.LinearColor(1.0, 0.5, 0.5, 0.5)) # Create a FLinearColor to tint our Watermark


	# Assign our created instances to our original capture_settings object.
	capture_settings.burn_in_options = burn_in_options

	# Finally invoke Sequencer's Render to Movie functionality. This will examine the specified settings object and either construct a new PIE instance to render in,
	# or create and launch a new process (optionally shutting down your editor).
	unreal.SequencerTools.render_movie(capture_settings, on_finished_callback)


'''
	Summary:
		ToDo:
	Params:
		track - The UMovieSceneTrack to convert to a dictionary
	Returns:
		ToDo:
'''
def track_to_dict(track):
	t = {
		'name' : str(track.get_display_name()),
		'type' : track.get_class().get_name(),
		'sections' : []
	}

	for section in track.get_sections():
		section_range = section.get_range()
		t['sections'].append({
			'range' : {
				'has_start' : section_range.has_start,
				'start' : section_range.inclusive_start,
				'has_end' : section_range.has_end,
				'end' : section_range.exclusive_end,
			},
			'type': section.get_class().get_name()
		})

	return t

'''
	Summary:
		ToDo:
	Params:
		sequence - The UMovieScene to convert to a dictionary
	Returns:
		ToDo:
'''
def sequence_to_dict(sequence):
	d = {
		'master_tracks' : [],
		'bindings' : []
	}

	for master_track in sequence.find_master_tracks_by_type(unreal.MovieSceneTrack):
		d['master_tracks'].append(track_to_dict(master_track))

	for binding in sequence.get_bindings():
		b = {
			'name' : 'todo',
			'type' : 'todo',
			'id' : str(binding.get_id()),
			'tracks' : [],
		}
		for track in binding.get_tracks():
			b['tracks'].append(track_to_dict(track))

		d['bindings'].append(b)

	return d
	
'''
	Summary:
		ToDo:
	Params:
		sequence - The UMovieScene to convert to export to JSON
	Returns:
		ToDo:
'''
def sequence_to_json(sequence):
	return json.dumps(sequence_to_dict(sequence))

'''
	Summary:
		Populates the specified sequence and track with some test sections.
	Params:
		sequence - The UMovieScene to populate
		track - The track within the movie scene to create sections from.
		num_sections - The number of sections to create.
		section_length_seconds - The length of each section it is creating.
'''
def populate_track(sequence, track, num_sections = 1, section_length_seconds = 1):

	for i in range(num_sections):
		section = track.add_section()
		section.set_start_frame_seconds(i*section_length_seconds)
		section.set_end_frame_seconds(section_length_seconds)
		
'''
	Summary:
		Populates the specified sequence and object binding with some test sections.
	Params:
		track - The UMovieScene to populate
		binding - The FMovieSceneObjectBindingID to create sections for.
		num_sections - The number of sections to create.
		section_length_seconds - The length of each section it is creating.
'''
def populate_binding(sequence, binding, num_sections = 1, section_length_seconds = 1):

	for track in binding.get_tracks():
		populate_track(sequence, track, num_sections, section_length_seconds)

'''
	Summary:
		Creates a level sequence with the given name under the specified directory. This is an example of how to create Level Sequence assets,
		how to add objects from the current map into the sequence and how to create some example bindings/etc. Assumes you have a default level
		named "Map" located in the content folder.
		
	Params:
		asset_name - Name of the resulting asset, ie: "MyLevelSequence"
		package_path - Name of the package path to put the asest into, ie: "/Game/LevelSequences/"
	Returns:
		The created LevelSequence asset.
'''
def create_level_sequence(asset_name, package_path = '/Game/'):

	sequence = unreal.AssetToolsHelpers.get_asset_tools().create_asset(asset_name, package_path, unreal.LevelSequence, unreal.LevelSequenceFactoryNew())

	floor = unreal.load_object(None, "/Game/Map.Map:PersistentLevel.Floor")
	sm_component = unreal.load_object(None, "/Game/Map.Map:PersistentLevel.Floor.StaticMeshComponent0")

	floor_binding = sequence.add_possessable(floor)
	floor_binding.add_track(unreal.MovieScene3DTransformTrack)
	populate_binding(sequence, floor_binding, 1, 5)

	print("Floor {0} is bound as {1}".format(floor, floor_binding.get_id()))

	sm_component_binding = sequence.add_possessable(sm_component)
	sm_component_binding.add_track(unreal.MovieSceneSkeletalAnimationTrack)
	populate_binding(sequence, sm_component_binding, 1, 5)	

	print("Static mesh component {0} is bound as {1}".format(sm_component, sm_component_binding.get_id()))

	# Create a spawnable from the floor instance
	spawnable_floor_binding = sequence.add_spawnable_from_instance(floor)
	transform_track = spawnable_floor_binding.add_track(unreal.MovieScene3DTransformTrack)
	populate_track(sequence, transform_track, 1, 5)

	# Create a spawnable from an actor class
	spawnable_camera_binding = sequence.add_spawnable_from_class(unreal.CineCameraActor)
	# add an infinite transform track
	transform_section = spawnable_camera_binding.add_track(unreal.MovieScene3DTransformTrack).add_section()
	transform_section.set_start_frame_bounded(0)
	transform_section.set_end_frame_bounded(0)
	
	return sequence

def create_sequence_from_selection(asset_name, length_seconds = 5, package_path = '/Game/'):

	sequence = unreal.AssetToolsHelpers.get_asset_tools().create_asset(asset_name, package_path, unreal.LevelSequence, unreal.LevelSequenceFactoryNew())

	for actor in unreal.SelectedActorIterator(unreal.EditorLevelLibrary.get_editor_world()):
		binding = sequence.add_possessable(actor)
		
		# Add a transform track for the actor
		transform_track = binding.add_track(unreal.MovieScene3DTransformTrack)
		transform_section = transform_track.add_section()
		transform_section.set_start_frame_seconds(0)
		transform_section.set_end_frame_seconds(length_seconds)

		# Add a visibility track for the actor
		visibility_track = binding.add_track(unreal.MovieSceneVisibilityTrack)
		visibility_track.set_property_name_and_path('bHidden', 'bHidden')
		visibility_section = visibility_track.add_section()
		visibility_section.set_start_frame_seconds(0)
		visibility_section.set_end_frame_seconds(length_seconds)
		
		# Add a bool simulate physics property track to the root component
		root_component_binding = sequence.add_possessable(actor.root_component)
		root_component_binding.set_parent(binding)
		
		simulate_physics_track = root_component_binding.add_track(unreal.MovieSceneBoolTrack)
		simulate_physics_track.set_property_name_and_path('bSimulatePhysics', 'BodyInstance.bSimulatePhysics')
		simulate_physics_section = simulate_physics_track.add_section()
		simulate_physics_section.set_start_frame_seconds(0)
		simulate_physics_section.set_end_frame_seconds(length_seconds)

		# Add a dummy vector track for 2 channels
		vector_track = root_component_binding.add_track(unreal.MovieSceneVectorTrack)
		vector_track.set_property_name_and_path('Dummy2Vector', 'Dummy2Vector')
		vector_track.set_num_channels_used(2)
		vector_section = vector_track.add_section()
		vector_section.set_start_frame_seconds(0)
		vector_section.set_end_frame_seconds(length_seconds)

		try:
			camera = unreal.CameraActor.cast(actor)
			camera_cut_track = sequence.add_master_track(unreal.MovieSceneCameraCutTrack)

			# Add a camera cut track for this camera
			camera_cut_section = camera_cut_track.add_section()
			camera_cut_section.set_start_frame_seconds(0)
			camera_cut_section.set_end_frame_seconds(length_seconds)

			camera_binding_id = unreal.MovieSceneObjectBindingID()
			camera_binding_id.set_editor_property("Guid", binding.get_id())
			camera_cut_section.set_editor_property("CameraBindingID", camera_binding_id)
			
			# Add a current focal length track to the cine camera component
			camera_component = actor.get_cine_camera_component()
			camera_component_binding = sequence.add_possessable(camera_component)
			camera_component_binding.set_parent(binding)
			focal_length_track = camera_component_binding.add_track(unreal.MovieSceneFloatTrack)
			focal_length_track.set_property_name_and_path('CurrentFocalLength', 'CurrentFocalLength')
			focal_length_section = focal_length_track.add_section()
			focal_length_section.set_start_frame_bounded(0)
			focal_length_section.set_end_frame_bounded(0)	
			
		except TypeError:
			pass

		print("{0} is bound as {1}".format(actor, binding.get_id()))

	return sequence
	
'''
	Summary:
		Creates a  master level sequence with the given name under the specified directory. This is an example of how to create Level Sequence assets,
		how to add objects from the current map into the sequence and how to create some example bindings/etc. Assumes you have a default level
		named "Map" located in the content folder and a 'CineCameraActor1' in that map.
		
	Params:
		asset_name - Name of the resulting asset, ie: "MyLevelSequence"
		package_path - Name of the package path to put the asest into, ie: "/Game/LevelSequences/"
	Returns:
		The created LevelSequence asset.
'''
def create_master_level_sequence(asset_name, package_path = '/Game/', num_subsequences = 1, length_seconds = 5):

	master_sequence = unreal.AssetToolsHelpers.get_asset_tools().create_asset(asset_name, package_path, unreal.LevelSequence, unreal.LevelSequenceFactoryNew())
	cinematic_shot_track = master_sequence.add_master_track(unreal.MovieSceneCinematicShotTrack)

	camera = unreal.load_object(None, "/Game/Map.Map:PersistentLevel.CineCameraActor_1")
	
	for i in range(num_subsequences):
		subsequence_asset_name = 'shot_' + str(i)
		subsequence = unreal.AssetToolsHelpers.get_asset_tools().create_asset(subsequence_asset_name, package_path, unreal.LevelSequence, unreal.LevelSequenceFactoryNew())
		
		# add a subsection for this subsequence
		subsequence_section = cinematic_shot_track.add_section()
		subsequence_section.set_sequence(subsequence)
		subsequence_section.set_start_frame_seconds(0)
		subsequence_section.set_end_frame_seconds(length_seconds)

		# add a camera cut track	
		camera_cut_track = subsequence.add_master_track(unreal.MovieSceneCameraCutTrack)
		camera_cut_section = camera_cut_track.add_section()
		camera_cut_section.set_start_frame_seconds(0)
		camera_cut_section.set_end_frame_seconds(length_seconds)

		# add a binding for the camera
		camera_binding = subsequence.add_possessable(camera)
		transform_track = camera_binding.add_track(unreal.MovieScene3DTransformTrack)
		transform_section = transform_track.add_section()
		transform_section.set_start_frame_bounded(0)
		transform_section.set_end_frame_bounded(0)

		# add the binding for the camera cut section
		camera_binding_id = subsequence.make_binding_id(camera_binding, unreal.MovieSceneObjectBindingSpace.LOCAL)
		camera_cut_section.set_camera_binding_id(camera_binding_id)

	return master_sequence
	
	
'''
	Summary:
		Retrieves objects in the map that are bound to the given sequence. 
		This will open the map and the sequence asset, evaluate the sequence at the 
		lower bound of the playback range, and return all bound objects (including 
		spawnables that exist at the lower bound).
		
	Params:
		map_asset_path - Name of the map to resolve the bindings from
		sequencer_asset_path - Name of the sequence that has the bindings
'''
def get_bound_objects(map_asset_path, sequencer_asset_path):

	world = unreal.EditorLoadingAndSavingUtils.load_map(map_asset_path)
	sequence = unreal.load_asset(sequencer_asset_path, unreal.LevelSequence)	
	range = sequence.get_playback_range()
	
	bound_objects = unreal.SequencerTools.get_bound_objects(world, sequence, sequence.get_bindings(), range)
	
	for bound_object in bound_objects:
		print 'Binding: %s' % bound_object.binding_proxy
		print 'Bound Objects: %s' % bound_object.bound_objects
		print '----\n'

'''
	Summary:
		Creates a level sequence with a spawnable camera and a cine camera component binding
		
	Params:
		asset_name - Name of the resulting asset, ie: "MyLevelSequence"
		package_path - Name of the package path to put the asest into, ie: "/Game/LevelSequences/"
	Returns:
		The created LevelSequence asset.
'''
def create_level_sequence_with_spawnable_camera(asset_name, package_path = '/Game/'):

	sequence = unreal.AssetToolsHelpers.get_asset_tools().create_asset(asset_name, package_path, unreal.LevelSequence, unreal.LevelSequenceFactoryNew())

	# Create a cine camera actor
	camera_actor = unreal.EditorLevelLibrary().spawn_actor_from_class(unreal.CineCameraActor, unreal.Vector(0,0,0), unreal.Rotator(0,0,0))

	# Add a spawnable using that cine camera actor
	camera_binding = sequence.add_spawnable_from_instance(camera_actor)
	
	# Add a cine camera component binding using the component of the camera actor
	camera_component_binding = sequence.add_possessable(camera_actor.get_cine_camera_component())
	camera_component_binding.set_parent(camera_binding)	

	# Add a focal length track and default it to 60
	focal_length_track = camera_component_binding.add_track(unreal.MovieSceneFloatTrack)
	focal_length_track.set_property_name_and_path('CurrentFocalLength', 'CurrentFocalLength')
	focal_length_section = focal_length_track.add_section()
	focal_length_section.set_start_frame_bounded(0)
	focal_length_section.set_end_frame_bounded(0)	
			
	for channel in focal_length_section.find_channels_by_type(unreal.MovieSceneScriptingFloatChannel):
		channel.set_default(60.0)
		
	# Add a transform track
	camera_transform_track = camera_binding.add_track(unreal.MovieScene3DTransformTrack)
	populate_track(sequence, camera_transform_track, 1, 5)
	
	return sequence

