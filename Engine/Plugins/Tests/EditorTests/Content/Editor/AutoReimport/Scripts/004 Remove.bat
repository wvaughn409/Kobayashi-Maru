@echo off
call Base.bat

del "%dst_folder%\TestAsset.png"

echo Import changes, and ensure the asset is deleted (press any key to finish)...
pause >nul