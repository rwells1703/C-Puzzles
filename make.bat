@echo off

set sourceextension=c
set binaryextension=exe
set directory=bin
IF NOT EXIST %directory% (
MKDIR bin
ECHO made 'bin' directory
)

FOR /r %%i IN (*.%sourceextension%) DO (
echo %%~ni.c
gcc %%~ni.%sourceextension% -o bin\%%~ni.%binaryextension%
)

echo finished compilation
PAUSE > nul