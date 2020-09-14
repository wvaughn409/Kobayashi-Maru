@echo off
call Base.bat

echo Ensure /Game/Content/AutoReimportTests does not exist (press any key to continue)...
pause >nul

copy "..\square.png" "%dst_folder%\TestAsset.png"

echo Import changes, and verify the asset is a white square (press any key to finish)...
pause >nul