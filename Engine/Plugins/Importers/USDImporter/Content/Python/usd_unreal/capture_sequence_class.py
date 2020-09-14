import unreal
import usd_unreal.capture_sequence

@unreal.uclass()
class SequencerCaptureUSD(unreal.UserDefinedCaptureProtocol):

	task = None
	on_finished_callback = None

	@staticmethod
	def set_active_task(task):
		if task != None and SequencerCaptureUSD.task != None:
			raise Exception("Already has active task")

		SequencerCaptureUSD.task = task
		if task != None:
			if SequencerCaptureUSD.on_finished_callback == None:
				SequencerCaptureUSD.on_finished_callback = unreal.OnRenderMovieStopped()
				SequencerCaptureUSD.on_finished_callback.bind_callable(SequencerCaptureUSD.finished_render_movie)

	@staticmethod
	def get_active_task():
		return SequencerCaptureUSD.task

	@staticmethod
	def render_movie(task, capture_settings):
		SequencerCaptureUSD.set_active_task(task)
		unreal.SequencerTools.render_movie(capture_settings, SequencerCaptureUSD.on_finished_callback)

	@staticmethod
	def finished_render_movie(success):
		if SequencerCaptureUSD.task != None:
			task = SequencerCaptureUSD.task
			SequencerCaptureUSD.set_active_task(None)
			task.on_finished_render_movie(success)

	@unreal.ufunction(override=True)
	def on_warm_up(self):
		if SequencerCaptureUSD.task == None:
			if usd_unreal.developer_mode == True:
				reload(usd_unreal.capture_sequence)
			task = usd_unreal.capture_sequence.setup_ui_based_render(self)
			task.called_from_gui = True
			SequencerCaptureUSD.set_active_task(task)
		else:
			SequencerCaptureUSD.task.called_from_gui = False

		SequencerCaptureUSD.task.on_warm_up(self)

	@unreal.ufunction(override=True)
	def on_capture_frame(self):
		if SequencerCaptureUSD.task != None:
			SequencerCaptureUSD.task.on_capture_frame(self)

	@unreal.ufunction(override=True)
	def on_begin_finalize(self):
		if SequencerCaptureUSD.task != None:
			SequencerCaptureUSD.task.on_begin_finalize(self)

	@unreal.ufunction(override=True)
	def on_finalize(self):
		if SequencerCaptureUSD.task != None:
			SequencerCaptureUSD.task.on_finalize(self)
			if SequencerCaptureUSD.task != None and SequencerCaptureUSD.task.called_from_gui == True:
				task = SequencerCaptureUSD.task
				SequencerCaptureUSD.set_active_task(None)
				task.on_finished_render_movie(True)
