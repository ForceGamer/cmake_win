# cmake_win

Have these installed: MSYS2, MINGW, CMake, Make, ${Your_favorite_editor}

## Building

Make a `build` folder

```sh
cd build
```

```sh
cmake .. -G "MinGW Makefiles"
```

Non-windows users don't use MinGW, so you can just do this:

```sh
cmake ..
```
