import unreal
import usd_unreal
import usd_unreal.export_level

@unreal.uclass()
class USDScriptedSceneExporter(unreal.Exporter):
	def _post_init(self):
		self.format_extension = ["usd", "usda"]
		self.format_description = ["USD File", "USD File"]
		self.supported_class = unreal.World
		self.text = False

	@unreal.ufunction(override=True)
	def script_run_asset_export_task(self, task):
		if usd_unreal.developer_mode:
			reload(usd_unreal.export_level)
		usd_unreal.export_level.run_asset_export_task(task)
		return True
