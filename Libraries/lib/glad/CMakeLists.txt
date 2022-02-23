add_library(glad glad.c)

message(STATUS "GLAD: ${LEARN_OPENGL_INCLUDE_DIR}")

target_include_directories(glad PUBLIC ${LEARN_OPENGL_INCLUDE_DIR})