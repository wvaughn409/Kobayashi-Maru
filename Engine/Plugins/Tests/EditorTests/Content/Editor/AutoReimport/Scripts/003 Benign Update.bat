@echo off
call Base.bat

copy /b "%dst_folder%\TestAsset.png"+,, "%dst_folder%\TestAsset.png"

echo Ensure that no changes are reported (press any key to continue)...
pause >nul