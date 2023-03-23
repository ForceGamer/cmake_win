cmake_minimum_required(VERSION 3.24)
project(seepeepee)
add_subdirectory(fmt)

set(CMAKE_CXX_STANDARD 20)
#set(CMAKE_CXX_COMPILER "C:/Program Files/Microsoft Visual Studio/2022/Preview/VC/Tools/MSVC/14.36.32502/bin/Hostx86/x86/cl.exe")
#set(CMAKE_C_COMPILER "C:/Program Files/Microsoft Visual Studio/2022/Preview/VC/Tools/MSVC/14.36.32502/bin/Hostx86/x86/cl.exe")
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)


add_executable(seepeepee
        main.cpp)
target_link_libraries(seepeepee fmt::fmt)
