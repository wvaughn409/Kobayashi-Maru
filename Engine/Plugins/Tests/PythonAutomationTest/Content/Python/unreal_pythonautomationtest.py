from _unreal_pythonautomationtest import *
import _unreal_slate

from collections import (deque as _deque, Iterable as _Iterable, Callable as _Callable)
from threading import Lock as _Lock

class AutomationScheduler(object):
    """
    Used to schedule python functions and generators to be run between editor ticks.
    One iteration of a generator is done per tick. It means that each yield statement will call for an editor tick.
    If a function or yield statement returns a function or a generator, that object is scheduled right after the next
    tick. The previously scheduled tasks are run afterwards.
    """

    # class properties
    _singleton_instance = None
    _lock = _Lock()
    # instance properties
    _delegate_handle = None
    _current = None
    schedule = None

    def __new__(cls):
        # We use __new__ instead of __init__ here to get a singleton behavior
        if cls._singleton_instance is None:
            cls._singleton_instance = super(AutomationScheduler, cls).__new__(cls)
            instance = cls._singleton_instance
            # Initiate singleton instance
            instance.schedule = _deque()
            instance._delegate_handle = _unreal_slate.register_slate_post_tick_callback(instance._callback)
            PyAutomationTest.set_is_running_py_latent_command(True)

        return cls._singleton_instance

    def _callback(self, _):
        """Main loop"""
        # Test if the lock is acquired by another thread.
        # If it is, we skip this tick
        if not self._lock.acquire(False):
            return

        if self._current is None:
            if self.schedule:
                # Get next schedule task
                self._current = self.schedule.popleft()

            else:
                # Otherwise, the queue is empty, and we close the instance
                _unreal_slate.unregister_slate_post_tick_callback(self._delegate_handle)
                if self._singleton_instance is self:
                    self._shutdown()

                self._lock.release()
                return

        try:
            is_callable = isinstance(self._current, _Callable)
            if is_callable:
                # If it is a callable, execute it first and check if it is an iterable that was generated
                task = self._current()
                self._current = None

            else:
                # If it is an iterable, iterate through it piece by piece
                task = self._current.next()

            if task is not None and (isinstance(task, _Iterable) or isinstance(task, _Callable)):
                # What is returned is an iterable or a callable
                # It means it is a new task to run next
                if not is_callable:
                    # reschedule current iterable task for later, and do the new one
                    self.schedule.appendleft(self._current)

                self._current = task

        except StopIteration:
            # Normal iteration closure
            self._current = None

        except:
            # An error was raised, avoid re-executing it and go to next schedule if any
            self._current = None
            raise

        finally:
            self._lock.release()

    @classmethod
    def _shutdown(cls):
        # Unregister the singleton instance
        cls._singleton_instance = None
        # No more task is scheduled
        PyAutomationTest.set_is_running_py_latent_command(False)

    @classmethod
    def add_latent_command(cls, task):
        """
        Add a function or a generator to the AutomationScheduler schedule.
        Can be used as a decorator to add a function.
        Note that order sequence is important here. Registered first is run first.
        ie:
        @unreal.AutomationScheduler.add_latent_command
        def setup_level():
            pass
        """
        cls().schedule.append(task)
        return task

    @classmethod
    def set_latent_command_timeout(cls, seconds):
        """Set the Python Automation Test latent command timeout in second"""
        PyAutomationTest.set_py_latent_command_timeout(seconds)

    @classmethod
    def cleanup(cls):
        """Force a shutdown of the singleton instance if any is running"""
        instance = cls._singleton_instance
        if instance is not None:
            instance.schedule.clear()
            instance._current = None
            cls._singleton_instance = None
