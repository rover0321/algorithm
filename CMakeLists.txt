cmake_minimum_required(VERSION 3.6)
project(CPP)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp tree/ArrayTree.cpp tree/ArrayTree.h tree/LinkedTree.cpp tree/LinkedTree.h tree/BinTreeNode.cpp tree/BinTreeNode.h)
add_executable(CPP ${SOURCE_FILES})