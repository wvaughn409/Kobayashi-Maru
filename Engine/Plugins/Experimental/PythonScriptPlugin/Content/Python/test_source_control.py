import unreal
import os
import sys


# Display source control state of specified file and return state object
def _sc_test_state(file_str):
    unreal.log("Getting source control state for:\n  {0}".format(file_str))
    state = unreal.SourceControl.query_file_state(file_str)
    
    # Is state valid?
    if state.is_valid:
        unreal.log("is_unknown: {0}".format(state.is_unknown))
        unreal.log("is_source_controlled: {0}".format(state.is_source_controlled))
        unreal.log("can_check_out: {0}".format(state.can_check_out))
        unreal.log("is_checked_out: {0}".format(state.is_checked_out))
        unreal.log("can_check_in: {0}".format(state.can_check_in))
        unreal.log("is_checked_out_other: {0}".format(state.is_checked_out_other))
        unreal.log("checked_out_other: {0}".format(state.checked_out_other))
        unreal.log("is_current: {0}".format(state.is_current))
        unreal.log("can_add: {0}".format(state.can_add))
        unreal.log("is_added: {0}".format(state.is_added))
        unreal.log("can_delete: {0}".format(state.can_delete))
        unreal.log("is_deleted: {0}".format(state.is_deleted))
        unreal.log("is_ignored: {0}".format(state.is_ignored))
        unreal.log("can_edit: {0}".format(state.can_edit))
        unreal.log("is_conflicted: {0}".format(state.is_conflicted))
        unreal.log("can_revert: {0}".format(state.can_revert))
        unreal.log("is_modified: {0}".format(state.is_modified))
    else:
        unreal.log("- state is invalid!")
    return state


# Get the resolved file path from the specified file string
def _sc_get_file_from_state(file_str):
    state = unreal.SourceControl.query_file_state(file_str)
    unreal.log("File string: {0}".format(file_str))
    
    # Is state valid?
    if state.is_valid:
        unreal.log("- converted path: {0}".format(state.filename))
        return state.filename
    else:
        unreal.log("- state is invalid!")
        return ""


# Test of resolving file string to fully qualified file path for use with
# source control.
def _sc_test_file_strings():
    unreal.log("\nTesting source control file strings.")
    
    # File strings used in source control commands can be:
    # - export text path (often stored on clipboard)
    file1 = _sc_get_file_from_state(r"Texture2D'/Engine/EditorResources/S_Actor.S_Actor'")
    # - asset
    file2 = _sc_get_file_from_state(r"/Engine/EditorResources/S_Actor.S_Actor")
    # - long package name
    file3 = _sc_get_file_from_state(r"/Engine/EditorResources/S_Actor")
    # - relative path
    file4 = _sc_get_file_from_state(r"Content/EditorResources/S_Actor.uasset")
    # - fully qualified path (just use result of relative path)
    file5 = _sc_get_file_from_state(file4)
    # All the resolved file paths should be the same
    same_paths = file1 == file2 == file3 == file4 == file5
    unreal.log("The resolved file paths are all the same: {0}".format(same_paths))

# This tests a sampling of source control commands.
#
# Also has optional arguments:
#   arg1 - source controlled file that is not yet checked out.
#   arg2 - source controlled file that is checked out and modified
#   arg3 - source controlled file that is checked out by another user
#
# Example:
# test_source_control.py Source\Developer\SourceControl\Private\SourceControlModule.cpp Source\Developer\SourceControl\Private\SourceControlHelpers.cpp Plugins\Experimental\PythonScriptPlugin\Source\PythonScriptPlugin\Private\PythonScriptPlugin.cpp
if __name__ == "__main__":
    unreal.log("Source control tests started!")

    
    #---------------------------------------    
    # Set file defaults - overriding with any supplied arguments
    arg_num = len(sys.argv)

    if arg_num == 1:
        unreal.log(("Supply arguments for custom files to test:\n"
                      "  arg1 - source controlled file that is not yet checked out\n"
                      "  arg2 - source controlled file that is checked out and modified\n"
                      "  arg3 - source controlled file that is checked out by another user"))
    
    # Source controlled file that is not yet checked out
    file_in_sc = r"Source\Developer\SourceControl\Private\SourceControlSettings.cpp"
    if arg_num > 1:
        file_in_sc = sys.argv[1]
      
    # Source controlled file that is checked out and modified
    file_modified = ""
    if arg_num > 2:
        file_modified = sys.argv[2]
      
    # Source controlled file that is checked out by another user
    file_other = ""
    if arg_num > 3:
        file_other = sys.argv[3]

        
    #---------------------------------------    
    unreal.log("\nDisplaying source control script commands")
    help(unreal.SourceControl)
    
    unreal.log("\nDisplaying source control file state members")
    help(unreal.SourceControlState)

  
    #---------------------------------------    
    # Source control tests
    
    _sc_test_file_strings()
    
    # Outside of source controlled directories
    unreal.log("\nTesting state of file not in source control: \NoSuchFile.txt")
    state = _sc_test_state(r"\NoSuchFile.txt")
    if state.is_source_controlled:
        unreal.log_error("Expected '\NoSuchFile.txt' to not be source controlled.")

    # Test checking out, deleting, adding and reverting
    if len(file_in_sc):
        #---------------------------------------    
        unreal.log("\nTesting state of file during check out and revert: {0}".format(file_in_sc))
        
        # Test pre check out
        state = _sc_test_state(file_in_sc)
        if not state.can_check_out:
            unreal.log_error("Expected '{0}' to be able checked out.".format(file_in_sc))
            
        # Test check out
        unreal.SourceControl.check_out_or_add_file(file_in_sc)
        state = _sc_test_state(file_in_sc)
        if not state.is_checked_out:
            unreal.log_error("Expected '{0}' to be checked out.".format(file_in_sc))
            
        # Test revert
        unreal.SourceControl.revert_file(file_in_sc)
        state = _sc_test_state(file_in_sc)
        if state.is_checked_out:
            unreal.log_error("Expected '{0}' to not be checked out.".format(file_in_sc))
            
        #---------------------------------------    
        unreal.log("\nTesting file mark for delete and revert: {0}".format(file_in_sc))
        
        # Test pre delete
        if not state.can_delete:
            unreal.log_error("Expected '{0}' to be able to delete.".format(file_in_sc))
            
        # Test delete
        unreal.SourceControl.mark_file_for_delete(file_in_sc)
        state = _sc_test_state(file_in_sc)
        if not state.is_deleted:
            unreal.log_error("Expected '{0}' to be marked for delete.".format(file_in_sc))
            
        # Test revert
        unreal.SourceControl.revert_file(file_in_sc)
        state = _sc_test_state(file_in_sc)
        if state.is_deleted:
            unreal.log_error("Expected '{0}' to not be marked for delete.".format(file_in_sc))

        #---------------------------------------    
        # File to mark for add and revert
        
        # Make a file to add based on the resolved file_in_sc name stored in
        # state so it uses a directory that is source controlled.
        file_add = os.path.join(os.path.dirname(state.filename), "AddTest.txt")
        unreal.log("\nTesting file mark for add and revert: {0}".format(file_add))
        open(file_add, "w+")
        
        # Test pre add
        state = _sc_test_state(file_add)
        if not state.can_add:
            unreal.log_error("Expected '{0}' to be able to add.".format(file_add))
            
        # Test add
        unreal.SourceControl.mark_file_for_add(file_add)
        state = _sc_test_state(file_add)
        if not state.is_added:
            unreal.log_error("Expected '{0}' to be added.".format(file_add))
        if not state.is_source_controlled:
            unreal.log_error("Expected '{0}' to be under source control.".format(file_add))
            
        # Test revert
        unreal.SourceControl.revert_file(file_add)
        state = _sc_test_state(file_add)
        if state.is_source_controlled:
            unreal.log_error("Expected '{0}' to not be under source control.".format(file_add))
            
        # Remove test add file
        os.remove(file_add)
            
    #---------------------------------------    
    # Modified and checked out
    if len(file_modified):
        unreal.log("\nTesting file modified state: {0}".format(file_in_sc))
        state = _sc_test_state(file_modified)
        if not state.is_modified:
            unreal.log_error("Expected {0} to be modified compared to checked in version and it is not.".format(file_modified))
    
    #---------------------------------------    
    # Checked out by another
    if len(file_other):
        unreal.log("\nTesting file checked out by another user: {0}".format(file_in_sc))
        state = _sc_test_state(file_other)
        if not state.is_checked_out_other:
            unreal.log_error("Expected {0} to be checked out by another user and it is not.".format(file_other))

    unreal.log("Source control tests completed!")
    