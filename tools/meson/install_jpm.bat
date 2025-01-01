set SRC_DIR=%CD%
set JPM_DIR="jpm"
set JPM_TAG="master"

if exist %JPM_DIR% (
    rd /s /q %JPM_DIR%
)

git clone --depth=1 --branch=%JPM_TAG% https://github.com/janet-lang/jpm.git %JPM_DIR%
cd %JPM_DIR%

set PREFIX=%SRC_DIR%/build
set JANET_MANPATH=%PREFIX%
set JANET_HEADERPATH=%PREFIX%
set JANET_BINPATH=%PREFIX%
set JANET_LIBPATH=%PREFIX%
set JANET_MODPATH=%PREFIX%/janet

"%SRC_DIR%\janet.exe" bootstrap.janet