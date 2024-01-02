cmake_minimum_required (VERSION 3.5)
project (chapter)
set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall")
# c++14 required
set(CMAKE_CXX_STANDARD 14)
message(STATUS "Compile use CXX_STANDAER is c++${CMAKE_CXX_STANDARD}")

#告知当前使用的是交叉编译方式，必须配置
set (CMAKE_SYSTEM_NAME Linux)

#设置include目录
include_directories(./include ./chapter1 ./chapter2 ./chapter3 ./chapter4)
message(STATUS "add header file include directories")

#设置libs目录
set(LINK_DIR ${PROJECT_SOURCE_DIR}/lib)

#添加子目录
aux_source_directory(./chapter1 CHAPTER1_SRC)
aux_source_directory(./chapter2 CHAPTER2_SRC)
aux_source_directory(./chapter3 CHAPTER3_SRC)
aux_source_directory(./chapter4 CHAPTER4_SRC)
aux_source_directory(./chapter5 CHAPTER5_SRC)
aux_source_directory(./chapter6 CHAPTER6_SRC)
aux_source_directory(./chapter7 CHAPTER7_SRC)


#add_executable (chapter ${CHAPTER1_SRC})
#add_executable (chapter ${CHAPTER2_SRC})
#add_executable (chapter ${CHAPTER4_SRC})
#add_executable (chapter ${CHAPTER7_SRC})

