cmake_minimum_required(VERSION 3.5)
project(diploma)

set( CMAKE_C_STANDARD 11 )

set( SOURCE_FILES utilities.h utilities.c datablock.h datablock.c logger.h logger.c RiDE_server.h RiDE_server.c main.c)

set( CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wall -fopenmp")
#set( CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} -luv")

add_executable(diploma ${SOURCE_FILES})
target_link_libraries(diploma uv gomp pthread)
