# MinGW Setup

To setup Falcon on Windows using MinGW, one has to:

1. Install MinGW somewhere (e.g. C:\MinGW)
2. Build or download the developer binaries for SDL and SDL_image
3. Put the SDL_image binaries in the SDL bin directory
4. Put the SDL_image headers in the SDL headers directory
5. Put the SDL_image libs in the SDL libs directory

A script to setup the build environment is recommended. A sample batch script (`mingwenv.bat`) for setting up the enviroment looks like this:
```
REM Set the MinGW path
SET MINGWPATH=C:\Program Files\mingw-w64\x86_64-7.2.0-posix-seh-rt_v5-rev0\mingw64

REM Set the path to your SDL directory
SET SDLPATH=C:\SDL\MinGW\SDL2-2.0.7\x86_64-w64-mingw32

REM Set the g++ header path variable
SET CPATH=%SDLPATH%\include;

REM Set the g++ libs path variable
SET LIBRARY_PATH=%MINGWPATH%\x86_64-w64-mingw32\lib;%SDLPATH%\lib;

REM Set the path for MinGW and SDL
SET PATH=%PATH%;%MINGWPATH%\bin;%SDLPATH%\bin;

```

To build Falcon, one only has to start their environment script and run `tup`.