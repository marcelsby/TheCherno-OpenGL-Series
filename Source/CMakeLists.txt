set(SOURCES Application.cpp)

add_executable(learn-opengl ${SOURCES})

target_include_directories(learn-opengl PUBLIC ${LEARN_OPENGL_INCLUDE_DIR})

target_link_libraries(learn-opengl glfw glad)