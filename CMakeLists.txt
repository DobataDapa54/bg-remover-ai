cmake_minimum_required(VERSION 3.16)
project(bg-remover-ai CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(bgremoverai
    src/main.cpp
    src/remover.cpp
    src/video.cpp
    src/batch.cpp
)

target_include_directories(bgremoverai PRIVATE include)

if(WIN32)
    target_link_libraries(bgremoverai PRIVATE userenv)
endif()
