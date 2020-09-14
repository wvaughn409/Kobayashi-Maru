import unreal
import usd_unreal
import usd_unreal.export_sequence

@unreal.uclass()
class USDScriptedSequenceExporter(unreal.Exporter):
	def _post_init(self):
		self.format_extension = ["usd", "usda"]
		self.format_description = ["USD File", "USD File"]
		self.supported_class = unreal.MovieSceneSequence
		self.text = False

	@unreal.ufunction(override=True)
	def script_run_asset_export_task(self, task):
		if usd_unreal.developer_mode:
			reload(usd_unreal.export_sequence)
		usd_unreal.export_sequence.run_asset_export_task(task)
		return True
