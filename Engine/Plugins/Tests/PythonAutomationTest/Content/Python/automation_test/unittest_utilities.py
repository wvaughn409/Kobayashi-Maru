"""
Collections of functions and classes to accomodate unit testing
"""
import os
import uuid
import inspect
import traceback
from functools import wraps
import platform as _platform

import unreal

log = unreal.log
log_error = unreal.log_error

class TestRunner(object):
    """
    A class that collect test functions to be run.
    Callback can be added to be called:
    - before all   (test functions)
    - before each  (test function)
    - after each   (test function)
    - after all    (test functions)
    """
    def __init__(self):
        self.tests = []
        self.before_each = lambda: None
        self.before_all = lambda: None
        self.after_each = lambda: None
        self.after_all = lambda: None
    
    def run(self, *tests):
        """
        Run the test functions provided as argument
        """
        tests = self.filter_tests_by_platform(tests)
        self.set_expected_log_errors(tests)
        self.before_all()
        
        for test in tests:
            if hasattr(test, '_registered'):
                test()

            else:
                self.run_one_test(test)
        
        self.after_all()

    def run_all(self):
        """
        Run all registered tests
        """
        self.run(*self.tests)
    
    def add_test(self, function_under_test):
        """
        Decorator. Register a test.
        It will wrap the test functions so that any raise exception will be output in the log,
        but will not stop script execution
        """
        @wraps(function_under_test)
        def run_one_test(*args, **kwargs):
            self.run_one_test(function_under_test, *args, **kwargs)

        if hasattr(function_under_test, '_expected_log_error'):
            run_one_test._expected_log_error = function_under_test._expected_log_error

        if hasattr(function_under_test, '_platforms'):
            run_one_test._platforms = function_under_test._platforms

        run_one_test._registered = 1
        run_one_test.__name__ = function_under_test.__name__
        
        self.tests.append(run_one_test)
        return run_one_test
        
    def skip_test(self, function_under_test):
        """
        Decorator. Remove a register test function
        """
        self.tests.remove(function_under_test)
        return function_under_test
        
    def set_before_all(self, func):
        """
        Decorator. Set a function to be executed before all test functions
        """
        self.before_all = func
        return func
    
    def set_before_each(self, func):
        """
        Decorator. Set a function to be executed before each test function
        """
        self.before_each = func
        return func
    
    def set_after_each(self, func):
        """
        Decorator. Set a function to be executed after each test function
        """
        self.after_each = func
        return func
    
    def set_after_all(self, func):
        """
        Decorator. Set a function to be executed after all test functions
        """
        self.after_all = func
        return func
    
    def run_one_test(self, function_under_test, function_name=None):
        """
        Execute test function so that any raised exception will be output in the log.
        It will call before_each and after_each functions
        """
        if function_name is None:
            function_name = function_under_test.__name__

        log('Testing %s' % function_name)
        
        self.before_each()
        
        try:
            function_under_test()

        except Exception as e:
            log_error('%s - Exception: %r' % (function_name, e))
            for trace_line in traceback.format_exc().splitlines():
                log_error(trace_line)

        finally:
            self.after_each()

    @staticmethod
    def filter_tests_by_platform(tests):
        """
        Filter out tests that are not supported on the current platform.
        """
        def is_tested_platform(test):
            if hasattr(test, '_platforms') and Platform.editor not in test._platforms:
                log('Skipping test %s, current platform not supported.' % test.__name__)
                return False

            return True

        return filter(is_tested_platform, tests)

    @staticmethod
    def set_expected_log_errors(tests):
        """
        Set expected log errors based on the test functions list provided.
        The functions need to have been tag with @add_expected_log_error
        """
        expected = {}

        for test in tests:
            if not hasattr(test, '_expected_log_error'):
                continue

            for pattern, count in test._expected_log_error.items():
                if pattern not in expected:
                    expected[pattern] = 0

                expected[pattern] += count

        for pattern, count in expected.items():
            unreal.AutomationLibrary.add_expected_log_error(pattern, count)

class Expectation(object):
    """
    Provide simple interface for function return expectation testing.
    A failing condition test will raise a TestFailedException
    """
    def __init__(self, function, args, blocking=True):
        self.function = function
        self.args = args
        self.function_name = function.__name__
        self.blocking = blocking
        

    def not_to_raise(self):
        self.blocking = False

        return self

    def to_return_internal(self, predicate, message):
        result = self.function(*self.args)
        
        if not predicate(result):
            message = 'Expected call to %s to return %s' % (str(self.function_name), message(result))

            if self.blocking:
                raise TestFailedException(message)

            log_error('%s - Exception: %r' % (self.function_name, message))
            log_stack_as_error()

            log_error(message)

        return result
    
    def not_to_return_internal(self, predicate, message):
        result = self.function(*self.args)
        
        if not predicate(result):
            message = 'Expected call to %s not to return %s' % (str(self.function_name), message(result))

            if self.blocking:
                raise TestFailedException(message)

            log_error('%s - Exception: %r' % (self.function_name, message))
            log_stack_as_error()

            log_error(message)

        return result

    def to_return(self, expected_result):
        """
        Test if self.function return ::expected_result::
        """
        return self.to_return_internal(lambda result: result == expected_result, lambda result: '%s. (Actual: %s)' % (expected_result, result))

    def not_to_return(self, expected_result):
        """
        Test if self.function does not return ::expected_result::
        """
        return self.not_to_return_internal(lambda result: result != expected_result, lambda result: '%s. (Actual: %s)' % (expected_result, result))
    
    def to_be(self, expected_result):
        """
        Alias for self.to_return
        """
        return self.to_return(expected_result)
        
    def not_to_be(self, expected_result):
        """
        Alias for self.not_to_return
        """
        return self.not_to_return(expected_result)
    
    def to_have_length(self, expected_length):
        """
        Test if self.function returned object has a length of ::expected_length::
        """
        return self.to_return_internal(lambda result: len(result) == expected_length, lambda result: 'an array of length %s. (Actual: %s)' % (expected_length, len(result)))
    
    def not_to_have_length(self, expected_length):
        """
        Test if self.function returned object does not have a length of ::expected_length::
        """
        return self.not_to_return_internal(lambda result: len(result) != expected_length, lambda result: 'an array of length %s. (Actual: %s)' % (expected_length, len(result)))

    def to_be_greater_than(self, expected_result):
        """
        Test if self.function returned object is greater than ::expected_length::
        """
        return self.to_return_internal(lambda result: result > expected_result, lambda result: 'greater than %s. (Actual: %s)' % (expected_result, result))

    def to_be_lower_than(self, expected_result):
        """
        Test if self.function returned object is lower than ::expected_length::
        """
        return self.to_return_internal(lambda result: result < expected_result, lambda result: 'lower than %s. (Actual: %s)' % (expected_result, result))
    
    def to_contain(self, object):
        """
        Test if self.function returned object contains ::object::
        """
        return self.to_return_internal(lambda resulting_list: object in resulting_list, lambda result: 'an array containing the object passed as parameter')
    
    def not_to_contain(self, object):
        """
        Test if self.function returned object does not contain ::object::
        """
        return self.not_to_return_internal(lambda resulting_list: object not in resulting_list, lambda result: 'an array not containing the object passed as parameter')
    
    def to_be_in(self, array):
        """
        Alias for self.to_contain
        """
        return self.to_return_internal(lambda result: result in array, lambda result: 'an object contained in the array passed as an argument')
    
    def not_to_be_in(self, array):
        """
        Alias for self.not_to_contain
        """
        return self.not_to_return_internal(lambda result: result not in array, lambda result: 'an object not contained in the array passed as an argument')

    def to_exist(self):
        """
        Test if self.function returned object is not None
        """
        return self.not_to_return(None)
        
    def not_to_exist(self):
        """
        Test if self.function returned object is None
        """
        return self.to_return(None)


class ValueExpectation(Expectation):
    """
    Extend Expectation class to support object instead of function
    """
    def __init__(self, value, function_name, blocking=True):
        self.value = value
        self.function_name = function_name
        self.blocking = blocking
    
    def to_return_internal(self, predicate, message):
        if not predicate(self.value):
            message = 'Expected expression to be %s' % (message(self.value))

            if self.blocking:
                raise TestFailedException(message)

            log_error('%s - Exception: %r' % (self.function_name, message))
            log_stack_as_error()

            log_error(message)

        return self.value
    
    def not_to_return_internal(self, predicate, message):
        if not predicate(self.value):
            message = 'Expected expression not to be %s' % (message(self.value))

            if self.blocking:
                raise TestFailedException(message)

            log_error('%s - Exception: %r' % (self.function_name, message))
            log_stack_as_error()

            log_error(message)

        return self.value


class TestSetupFailedException(Exception):
    pass


class TestFailedException(Exception):
    pass

def expect(expression, *args):
    """
    Return an Expectation object if ::expression:: is a callable, otherwise a ValueExpectation object
    """
    if callable(expression):
        return Expectation(expression, args)
    else:
        return ValueExpectation(expression, inspect.stack()[1][3])


def expect_true(expression, *args):
    """
    Raise a TestFailedException if ::expression:: does not return True
    """
    if callable(expression):
        return Expectation(expression, args).to_return(True)
    else:
        return ValueExpectation(expression, inspect.stack()[1][3]).to_return(True)


def expect_false(expression, *args):
    """
    Raise a TestFailedException if ::expression:: does not return False
    """
    if callable(expression):
        return Expectation(expression, args).to_return(False)
    else:
        return ValueExpectation(expression, inspect.stack()[1][3]).to_return(False)


def unique_path(path):
    """
    Generate a unique path by appending uuid.uuid4().hex to the path
    """
    while path[-1] == '/' or path[-1] == '\\':
        path = path[:-1]
        
    return path + '_' + uuid.uuid4().hex


def remove_dir_sync(dir_path):
    """
    Remove the content of a directory. It does not remove sub-folder. All error are ignored.
    """
    if not os.path.exists(dir_path):
        return

    all_list = os.listdir(dir_path)

    folders = [os.path.join(dir_path, f) for f in all_list if os.path.isdir(os.path.join(dir_path, f))]
    for folder in folders:
        remove_dir_sync(folder)

    files = [os.path.join(dir_path, f) for f in all_list if os.path.isfile(os.path.join(dir_path, f))]
    for file in files:
        try:
            os.remove(file)

        except:
            pass

    try:
        os.rmdir(dir_path)

    except:
        pass

def add_expected_log_error(pattern, count=1):
    """
    Decorator factory. Returns a decorator that tags a test function with expected log error
    To be used in conjonction with @TestRunner.add_test
    """
    def _tag(func):
        if not hasattr(func, '_expected_log_error'):
            func._expected_log_error = {}

        if pattern not in func._expected_log_error:
            func._expected_log_error[pattern] = 0

        func._expected_log_error[pattern] += count

        return func

    return _tag

def log_stack_as_error():
    stack_list = traceback.extract_stack()[5:-3]
    log_error('Traceback (most recent call last):')
    for frame in traceback.format_list(stack_list):
        for line in frame.splitlines():
            log_error('   '+line.rstrip())

class Platform(object):
    """
    High level Editor platforms
    """
    WIN = 1
    MAC = 2
    LINUX = 3

    editor = (_platform.system() == 'Windows' and WIN)\
            or (_platform.system() == 'Darwin' and MAC)\
            or LINUX

def test_on_platforms(*platforms):
    """
    Decorator factory. Returns a decorator that tags function with target platforms.
    To be used in conjonction with @TestRunner.add_test
    """
    def _tag(func):
        if hasattr(func, '_platforms'):
            func._platforms.update(platforms)

        else:
            func._platforms = set(platforms)

        return func

    return _tag

def test_on_mac(func):
    """
    Decorator. Tags test function with Mac platform.
    """
    return test_on_platforms(Platform.MAC)(func)

def test_on_win(func):
    """
    Decorator. Tags test function with Windows platform.
    """
    return test_on_platforms(Platform.WIN)(func)

def test_on_linux(func):
    """
    Decorator. Tags test function with Linux platform.
    """
    return test_on_platforms(Platform.LINUX)(func)
