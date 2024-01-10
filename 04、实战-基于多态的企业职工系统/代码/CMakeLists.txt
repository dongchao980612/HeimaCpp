cmake_minimum_required(VERSION 3.0)# 指定使用的 cmake 的最低版本

# project name
project(main) # 定义工程名称

# set conf
set(CMAKE_EXPORT_COMPILE_COMMANDS on)
set(CMAKE_VERBOSE_MAKEFILE off) # 显示编译过程

file(GLOB SRC_LIST ${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp)# add src file 
include_directories(${PROJECT_SOURCE_DIR}/include)# add header file 

# conf output file 
set(HOME ${CMAKE_CURRENT_SOURCE_DIR}) # build的上级目录
set(EXECUTABLE_OUTPUT_PATH ${HOME}/bin)

add_executable(main main.cpp ${SRC_LIST})
