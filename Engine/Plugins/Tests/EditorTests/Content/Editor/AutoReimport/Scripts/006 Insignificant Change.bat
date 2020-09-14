@echo off

rem Tests that deleting a file that is not relevant to the auto reimport gets safely ignored

call Base.bat

echo Ensure /Game/Content/AutoReimportTests does not exist (press any key to continue)...
pause >nul

copy "..\square.png" "%dst_folder%\TestAsset.png"

echo *Do not* import changes in the editor (press any key to continue)...
pause >nul

del "%dst_folder%\TestAsset.png"

echo Ensure you receive no notification of any changes in the editor (press any key to continue)...
pause >nul

copy "..\square.png" "%dst_folder%\TestAsset.png"
echo Import changes, and verify the asset is a white square (press any key to finish)...
pause >nul