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
        util/DataUtil.cpp
        util/DataUtil.h
        util/StringUtil.cpp
        util/StringUtil.h
        main.cpp sort/MergeSort.cpp sort/MergeSort.h sort/QuickSort.cpp sort/QuickSort.h exercises/stackExercise.cpp exercises/stackExercise.h list/ListDemo.cpp list/ListDemo.h stack/SequenceStack.cpp stack/SequenceStack.h stack/LinkStack.cpp stack/LinkStack.h queue/SequenceQueue.cpp queue/SequenceQueue.h tree/LinkedListBinTree.cpp tree/LinkedListBinTree.h tree/BinTreeNode.cpp tree/BinTreeNode.h)

add_executable(algorithm ${SOURCE_FILES})