//
// Created by huangxiang on 2017/4/18.
//

#ifndef ALGORITHM_SEARCH_H
#define ALGORITHM_SEARCH_H


class Search {
public:
    static int sequentialSearch(int* a, int n, int key);
    static int optimizeSequentialSearch(int* a, int n, int key);
    static int binarySearch(int* a, int n, int key);
    static int interpolationSearch(int* a, int n, int key);
    static int fibonacciSearch(int* a, int n, int key);
};


#endif //ALGORITHM_SEARCH_H
