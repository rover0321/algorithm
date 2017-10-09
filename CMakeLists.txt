cmake_minimum_required(VERSION 3.8)
project(algorithm)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES
        search/Search.cpp
        search/Search.h
        sort/InsertSort.cpp
        sort/InsertSort.h
        sort/SelectionSort.cpp
        sort/SelectionSort.h
        tree/ArrayTree.cpp
        tree/ArrayTree.h
        tree/BinTreeNode.cpp
        tree/BinTreeNode.h
        tree/LinkedTree.cpp
        tree/LinkedTree.h
        util/DataUtil.cpp
        util/DataUtil.h
        util/StringUtil.cpp
        util/StringUtil.h
        main.cpp sort/MergeSort.cpp sort/MergeSort.h sort/QuickSort.cpp sort/QuickSort.h)

add_executable(algorithm ${SOURCE_FILES})