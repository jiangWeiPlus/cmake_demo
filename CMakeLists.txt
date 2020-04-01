#cmake最低版本需求
cmake_minimum_required(VERSION 2.8) 

#project用于指定项目名称，版本，编译语言等
#项目名自动存入CMAKE_PROJECT_NAME中
project("defender") 

set(CMAKE_DISABLE_IN_SOURCE_BUILD ON)
set(CMAKE_DISABLE_SOURCE_CHANGES ON) 

if("${CMAKE_SOURCE_DIR}" STREQUAL "${CMAKE_BINARY_DIR}")
    message(SEND_ERROR "In-source builds are not allowed")
endif () 

set(CMAKE_VERBOSE_MAKEFILE ON) 
set(CMAKE_COLOR_MAKEFILE ON) 


add_subdirectory(src) 
