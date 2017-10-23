//
// Created by huangxiang on 17-5-7.
//

#include "InsertSort.h"
#include "../util/DataUtil.h"

void InsertSort::insertSort(long *a, int n) {
    // 从第二个元素开始
    // 假设当前待排序之前的数组已经是有序的
    for (int i = 1; i < n; i++){
        // 如果将要插入的元素比已经排序的最大的元素大，那么不必插入到已经排序的数组中
        long x = a[i];
        for (int j = i -1; j >= 0 && a[j] > x; j--){
            a[j + 1] = a[j]; // 将所有比待插元素大的元素右移一个位置
            a[j] = x; // 用待插入元素x填补右移后的空缺
        }
        DataUtil::print(a, 0, n - 1);
    }
}