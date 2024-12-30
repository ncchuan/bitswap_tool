@echo off

cd %~dp0

::clear last build info
del /Q bin\*.*

md bin
::switch path and build
cd ..
mingw32-make.exe

cd build
