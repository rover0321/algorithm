//
// Created by huangxiang on 2017/10/9.
//

#include "QuickSort.h"
#include "../util/DataUtil.h"

void QuickSort::quickSort(long *a, int low, int high) {
    if (low < high){
        DataUtil::print(a, low, high);
        int pivotIdx = partition(a, low, high); // O(N)
        quickSort(a, low, pivotIdx - 1);
        quickSort(a, pivotIdx + 1, high);
    }
}

int QuickSort::partition(long *a, int i, int j) {
    int p = a[i]; // p is the pivot
    int m = i; // S1 and S2 are initially empty
    for (int k = i + 1; k <= j; k++){ // explore the unknown region
        if (a[k] < p){
            m++;
            DataUtil::swap(a, k, m);
        }
        DataUtil::print(a, i, j);
    }
    DataUtil::swap(a, i, m);
    DataUtil::print(a, i, j);
    return m; // 找到一个S1 和 S2 的分界点 使得 S1中的元素全部小于p同时S2中的元素全部大于等于p
}
