@echo off

rem Tests that making an insignificant change to a file that differs from the asset's last imported file still gets imported if a previous change was ignored.
rem The thrust of this test is to check that the custom change logic within the file cache is working correctly (to ensure we're checking against the asset's state, not the file cache's)

call Base.bat

copy "..\square.png" "%dst_folder%\TestAsset.png"

echo Import changes, and ensure the asset is a white square (press any key to continue)...
pause >nul

copy "..\red-square.png" "%dst_folder%\TestAsset.png"

echo **Do not** import changes (press any key to continue)...
pause >nul

copy /b "%dst_folder%\TestAsset.png"+,, "%dst_folder%\TestAsset.png"

echo Import changes, and ensure the asset is a red square (press any key to continue)...
pause >nul