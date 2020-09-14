import unreal

'''
	Summary:
		This is an example of how to export fbx with animation  information with sequencer.  In this example we load a map and corresponding level sequence,
		grab all of the bindings from that sequence, set some export options, then export the fbx file.
		To save less you need to only choose those bindings you want to export. 
		Open the Python interactive console and do similarly as below:
			import sequencer_fbx_examples
			sequencer_fbx_examples.export_fbx("/Game/Maps/FbxTest","/Game/FbxTest", "D:\\FBX_Test.fbx")
		
	Params:
	        map_asset_path - String that points to the map that conatains the possessables contained in the Movie Scene sequence.
		sequencer_asset_path - String that points to the Movie Scene sequence asset.
		output_file - String that shows the full path of the created fbx file.
'''
def export_fbx(map_asset_path, sequencer_asset_path, output_file):
        # Load the map, get the world
        world = unreal.EditorLoadingAndSavingUtils.load_map(map_asset_path)
	# Load the sequence asset
	sequence = unreal.load_asset(sequencer_asset_path, unreal.LevelSequence)
	# Set Options
	export_options = unreal.FbxExportOption()
	export_options.ascii = True
	export_options.level_of_detail = False
        # Get Bindings
	bindings = sequence.get_bindings()
        # Export
	unreal.SequencerTools.export_fbx(world, sequence, bindings, export_options, output_file)

	return

'''
	Summary:
		This is an example of how to import fbx including animation onto a sequencer level sequence.  In this example we create sequencer asset, use passed in
		actor labels to create bindings in the sequence, then import the fbx onto these bindings.
		Open the Python interactive console and use:
			import sequencer_fbx_examples
			label_list = ["Floor"]  #Assuming that we have a Floor in the scene and the Fbx file has animation loading onto a Floor Node.
			sequencer_fbx_examples.import_fbx("/Game/Maps/FbxTest","NewFbxTest", "/Game/",label_list, "D:\\FBX_Test.fbx")
		
	Params:
	        map_asset_path - String that points to the Map that conatains the possessables contained in the Movie Scene sequence.
		sequencer_asset_name - String that is our level sequence name.
		package_path - String to path to create the level sequence asset.
		actor_label_list - Array of actor labels that we want to creete tracks for and then import onto.
		output_file - String that shows the full path of the imported fbx file.
'''
def import_fbx(map_asset_path, sequencer_asset_name, package_path, actor_label_list, input_file):
        
        # Load the map, get the world
        world = unreal.EditorLoadingAndSavingUtils.load_map(map_asset_path)
        # Get Actors from passed in names
        level_actors = unreal.EditorLevelLibrary.get_all_level_actors()
        actor_list = []
        for label in actor_label_list:
                filtered_list = unreal.EditorFilterLibrary.by_actor_label(level_actors, label,unreal.EditorScriptingStringMatchType.EXACT_MATCH)
                actor_list.extend(filtered_list)
	# Create the sequence asset
	sequence = unreal.AssetToolsHelpers.get_asset_tools().create_asset(sequencer_asset_name, package_path, unreal.LevelSequence, unreal.LevelSequenceFactoryNew())
        # Create Bindings
        for actor in actor_list:
                sequence.add_possessable(actor)
	bindings = sequence.get_bindings()
	# Set Options
	import_options = unreal.MovieSceneUserImportFBXSettings()
	#import_options.set_editor_property("create_cameras",True)
	import_options.set_editor_property("reduce_keys",False)

        # Import
	unreal.SequencerTools.import_fbx(world, sequence, bindings, import_options, input_file)

	return sequence
