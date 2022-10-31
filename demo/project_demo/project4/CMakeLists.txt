cmake_minimum_required(VERSION 3.10)

project(P4)

aux_source_directory(src SRC_DIR)

include_directories(include)

add_executable(p4test ${SRC_DIR})