import unreal

'''
	Summary:
		This is an example of how to export skeletal animation in sequencer as an anim sequence.  In this example we load a
		map and corresponding level sequence, and grab the first binding which is the one containing the skeletal mesh.
		And save that's skeletal mesh animation over the sequence length into the passed in animation sequence.
		To create this sequence
		Open the Python interactive console and do similarly as below:
			import sequencer_anim_examples
			asset_tools = unreal.AssetToolsHelpers.get_asset_tools()
                        anim_sequence_factory = unreal.AnimSequenceFactory()
                        anim_sequence = asset_tools.create_asset("AnimSequenceFromPython", "/Game/", unreal.AnimSequence, anim_sequence_factory)
			sequencer_anim_examples.export_anim_sequence("/Game/Maps/AnimTest","/Game/AnimSequenceTest", anim_sequence)
		
	Params:
	        map_asset_path - String that points to the map that conatains the possessables contained in the Movie Scene sequence.
		sequencer_asset_path - String that points to the Movie Scene sequence asset.
		anim_sequence - Sequence that we will save into
		output_file - String that shows the full path of the created fbx file.
'''
def export_anim_sequence(map_asset_path, sequencer_asset_path, anim_sequence):
        # Load the map, get the world
        world = unreal.EditorLoadingAndSavingUtils.load_map(map_asset_path)
	# Load the sequence asset
	sequence = unreal.load_asset(sequencer_asset_path, unreal.LevelSequence)
        # Get Bindings, we are assuming the first binding has the skeletal mesh we want to export
	bindings = sequence.get_bindings()
        # Export
	unreal.SequencerTools.export_anim_sequence(world, sequence, anim_sequence, bindings[0])

	return
