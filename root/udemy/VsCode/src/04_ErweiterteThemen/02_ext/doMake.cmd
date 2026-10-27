::  ###########################################################################
::	P.Hassen VT
::  Dieses Script entspricht der Datei:
::      makeret.bat
::  input:
::      v_PRJ_release := C:\Entwicklung\TCMc\VR115HV\RET.TCMc_R24.03_03
::  output: in...
::      C:\Entwicklung\TCMc\VR115HV\RET.TCMc_R24.03_03\lib\Source_Voith
::  ###########################################################################

::	start
@cls 
@echo.
@echo --- doMakeTcmc [%date%:%time%]
@echo.
@timeout 3

:: 	define TCMC
@set RLMDIR=%SystemDrive%\HIGHTEC
@set RLM_LICENSE=hdhapphighteclic@5053

::  define MsVs2017 studio
@set v_TMP=%ProgramFiles(x86)%\Microsoft Visual Studio\2017\Professional
@set v_MSVS_ide=%v_TMP%\Common7\IDE
@set v_MSVS_bin=%v_TMP%\VC\Tools\MSVC\14.16.27023\bin\Hostx64\x64

::  define DIR make using RELEASE variable
::  @set v_SRC_root=%v_PRJ_release%
@set v_DIR_make=%v_PRJ_release%\make

:: 	gote 
@pushd %v_DIR_make%

::	call clean 
@echo.
@echo --- cleanDir
@echo.
@timeout 2
@call ..\CleanTempFiles.bat

:: no build path if already set
@if "%v_MAKE_PREPARE_READY%" neq "" @goto L_DO_MAKE_RUN

::	prepare make call
:L_DO_MAKE_PREPARE
@echo build Path
@set v_PATH_project=%v_MSVS_bin%;%v_MSVS_ide%;%path%
@set path=%v_PATH_project%
@set v_MAKE_PREPARE_READY=ready

::	run make clean only
:L_DO_MAKE_RUN
@echo.
@echo --- run nMake
@echo.
@timeout 2
nmake clean /s /NOLOGO /fret_tcng2.mak all

::	goto caller dir
@popd
@echo.
@echo --- ready make
@echo.
