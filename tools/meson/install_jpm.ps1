Write-Host "SOURCE $env:MESON_SOURCE_ROOT"
Write-Host "BUILD  $env:MESON_BUILD_ROOT"
Write-Host "ARGS   $args"

$JPM_TAG = "master"

$JPM_DIR = "$env:MESON_BUILD_ROOT/jpm"

if (Test-Path -Path $JPM_DIR) {
    Remove-Item $JPM_DIR -Force -Recurse
}

git clone --depth=1 --branch=$JPM_TAG https://github.com/janet-lang/jpm.git $JPM_DIR

Set-Location $JPM_DIR

$PREFIX = $args[0]

$env:PREFIX = $args[0]
$env:DESTDIR = ""
$env:JANET_MANPATH = "$PREFIX/share/man/man1/"
$env:JANET_HEADERPATH = "$PREFIX/include/janet"
$env:JANET_BINPATH = "$PREFIX/bin"
$env:JANET_LIBPATH = "$PREFIX/lib"

&"$env:MESON_BUILD_ROOT/janet.exe" bootstrap.janet