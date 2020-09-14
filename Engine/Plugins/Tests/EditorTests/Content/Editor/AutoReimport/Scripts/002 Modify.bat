@echo off
call Base.bat

copy "..\red-square.png" "%dst_folder%\TestAsset.png"

echo Import changes, and verify the asset is a red square (press any key to finish)...
pause >nul