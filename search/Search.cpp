//
// Created by huangxiang on 2017/4/18.
//

#include "Search.h"

int Search::sequentialSearch(int *a, int n, int key) {
    // 有效数字从1开始
    for (int i = 1; i <= n; i++){
        if (a[i] == key){
            return i;
        }
    }
    return 0;
}

int Search::optimizeSequentialSearch(int *a, int n, int key) {
    int i = n ;
    a[0] = key;
    while (a[i] != key){
        i--;
    }
    return i;
}

int Search::binarySearch(int *a, int n, int key) {
    int low = 1;
    int high = n;
    int mid;

    while (low < high){
        mid = (low + high) / 2;
        if (a[mid] == key){
            return mid;
        } else if (a[mid] < key){
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    return 0;
}

int Search::interpolationSearch(int *a, int n, int key) {
    int low = 1;
    int high = n;
    int mid;

    while (low < high){
        mid = low + (key - a[low]) / (a[high] - a[low]) * (high - low);
        if (a[mid] == key){
            return mid;
        } else if (a[mid] < key){
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    return 0;
}

int Search::fibonacciSearch(int *a, int n, int key) {
    return 0;
}
