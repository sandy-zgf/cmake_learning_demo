cmake_minimum_required(VERSION 3.10)

project(POSITION)

aux_source_directory(src SRC_DIR_P)

include_directories(include)

add_library(pst_library ${SRC_DIR_P})