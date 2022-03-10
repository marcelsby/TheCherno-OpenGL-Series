cmake_minimum_required(VERSION 3.22.2)
project(TheCherno-OpenGL-Series VERSION 1.0.0)

# Some util variables
set(LIB_DIR ${CMAKE_SOURCE_DIR}/Libraries)
set(LEARN_OPENGL_INCLUDE_DIRS ${LIB_DIR}/glad/include ${LIB_DIR}/glfw-3.3.6/include)

# Setup GLFW to build only the necessary as a library
set(GLFW_BUILD_DOCS OFF CACHE BOOL "" FORCE)
set(GLFW_BUILD_TESTS OFF CACHE BOOL "" FORCE)
set(GLFW_BUILD_EXAMPLES OFF CACHE BOOL "" FORCE)

add_subdirectory(${LIB_DIR}/glfw-3.3.6)

# Setup GLAD
add_subdirectory(${LIB_DIR}/glad)

# Add our project source code directory
add_subdirectory(Source)
