cmake_minimum_required(VERSION 3.10)

project(P5)

aux_source_directory(src SRC_DIR)

include_directories(include position/include)

add_subdirectory(position)

add_executable(p5test ${SRC_DIR})

target_link_libraries(p5test pst_library)