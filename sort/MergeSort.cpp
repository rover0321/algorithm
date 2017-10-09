//
// Created by huangxiang on 2017/10/8.
//

#include "MergeSort.h"
#include "../util/DataUtil.h"

void MergeSort::merge(long a[], int low, int mid, int high) {
    int N = high - low + 1;
    long* b = new long[N];
    int left = low, right = mid + 1, bIdx = 0;

    // 将左右两边较小的元素放在临时数组的前面
    while (left <= mid && right <= high){
        b[bIdx++] = (a[left] <= a[right]) ? a[left++] : a[right++];
    }

    while (left <= mid){
        b[bIdx++] = a[left++];
    }

    while (right <= high){
        b[bIdx++] = a[right++];
    }

    // 将处理完的数组重新拷贝回原来的数组
    for (int k = 0; k < N; k++){
        a[low + k] = b[k];
    }

    delete[] b;
}

void MergeSort::mergeSort(long a[], int low, int high) {
    DataUtil::print(a, low, high);
    if (low < high){
        int mid = (low + high) / 2;
        mergeSort(a, low, mid);
        mergeSort(a, mid + 1, high);
        merge(a, low, mid, high);
    }
}
