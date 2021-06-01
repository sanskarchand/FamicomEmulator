project(FamicomEmulator)
cmake_minimum_required(VERSION 3.10)

set(CMAKE_BUILD_TYPE Debug)
#set(OpenGL_GL_PREFERENCE GLVND)

# find packages
#find_package(GLEW REQUIRED)
#find_package(OpenGL REQUIRED)
#find_package(SDL2 REQUIRED)

#include directories for these
#include_directories(${GLEW_INCLUDE_DIRS})
#include_directories(${OPENGL_INCLUDE_DIR})  # special case
#include_directories(${SDL2_INCLUDE_DIRS})
#include_directories(${ASSIMP_INCLUDE_DIRS})

# headers
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include)
file(GLOB_RECURSE SOURCES "src/*.cpp")

#message(STATUS "sources are ${SOURCES}")

add_executable(famemu ${SOURCES})
#target_link_libraries(vilasita SDL2::SDL2 SOIL ${GLEW_LIBRARIES} ${OPENGL_LIBRARY}  ${ASSIMP_LIBRARIES})



#https://discourse.libsdl.org/t/arch-linux-cmake-find-package-sdl2-required-passes-but-doesnt-find-anything/24226/2
#target_link_libraries(vilasita ${SDL2_LIBRARIES})
