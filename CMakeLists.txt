cmake_minimum_required(VERSION 3.7)
project(algorithm)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES
        tree/ArrayTree.cpp
        tree/ArrayTree.h
        tree/BinTreeNode.cpp
        tree/BinTreeNode.h
        tree/LinkedTree.cpp
        tree/LinkedTree.h
        main.cpp search/Search.cpp search/Search.h sort/InsertSort.cpp sort/InsertSort.h util/DataUtil.cpp util/DataUtil.h util/StringUtil.cpp util/StringUtil.h sort/SelectionSort.cpp sort/SelectionSort.h)

add_executable(algorithm ${SOURCE_FILES})