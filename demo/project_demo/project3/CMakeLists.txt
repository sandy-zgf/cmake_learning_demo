cmake_minimum_required(VERSION 3.10)

project(P2)

aux_source_directory(src SRC_DIR)
include_directories(include voltageManagement/include)

add_subdirectory(voltageManagement)

add_executable(p2_test ${SRC_DIR})

target_link_libraries(p2_test VM)