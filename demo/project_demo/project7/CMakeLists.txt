cmake_minimum_required(VERSION 3.10)

project(age_project)

set(INC_DIR1 EGE20.08/include)
set(INC_DIR2 EGE20.08/include/ege)

set(LIB_DIR1 EGE20.08/lib/mingw64)

include_directories(${INC_DIR1} ${INC_DIR2})


link_directories(${LIB_DIR1})

add_executable(age_mydemo src/main.cpp)

target_link_libraries(age_mydemo graphics64 msimg32 gdi32 imm32 ole32 oleaut32 winmm gdiplus)