//
// Created by huangxiang on 17-5-7.
//

#include "InsertSort.h"
#include "../util/DataUtil.h"

void InsertSort::insertSort(long *a, int n) {
    // 从第二个元素开始
    // 假设当前待排序之前的数组已经是排序的
    for (int i = 1; i < n; i++){
        // 如果将要插入的元素比已经排序的最大的元素大，那么不必插入到已经排序的数组中
        if (a[i] < a[i - 1]){
            // 当前要插入的元素已排序的最大元素要小， 那么需要在已经排序的数组中查找一个合适的位置存放.
            long x = a[i]; // 存放当前要插入的元素
            int j = i - 1;
            while (x < a[j] && j >= 0){
                // 将元素后移
                a[j + 1] = a[j];
                j--; // 继续向前寻找
            }
            a[j + 1] = x;
        }
        DataUtil::print(a, n);
    }
}