import unreal
import usd_unreal
import usd_unreal.import_level
import os

@unreal.uclass()
class USDScriptedSceneImportFactory(unreal.SceneImportFactory):
	def _post_init(self):
		self.create_new = False
		self.edit_after_new = True
		self.supported_class = unreal.World
		self.editor_import = True
		self.text = False

		#self.import_options

		self.formats = [
			"usd;Universal Scene Descriptor files",
			"usda;Universal Scene Descriptor files",
			"usdc;Universal Scene Descriptor files"
			]

	@unreal.ufunction(override=True)
	def script_factory_can_import(self, filename):
		name_part, file_extension = os.path.splitext(filename)
		if file_extension != None and len(file_extension) > 1:
			if file_extension[0] == '.':
				file_extension = file_extension[1:]
			file_extension = file_extension.lower()
			if file_extension == "usd" or file_extension == "usda" or file_extension == "usdc":
				return True
		return False

	@unreal.ufunction(override=True)
	def script_factory_create_file(self, task):
		if usd_unreal.developer_mode:
			reload(usd_unreal.import_level)
		usd_unreal.import_level.run_asset_import_task(task)
		return True
