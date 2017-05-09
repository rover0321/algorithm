//
// Created by huangxiang on 2017/5/9.
//

#include "SelectionSort.h"
#include "../util/DataUtil.h"

void SelectionSort::simpleSelectionSort(long *a, int n) {
    for (int i = 0; i < n; i++){
        // 每个循环在剩下的数组中选出最小的元素
        int minIndex = selectMinimal(a, n, i);

        // 交换两个元素
        DataUtil::swap(a, i, minIndex);
        DataUtil::print(a, n);
    }
}

/**
 * 在数组中选择最小元素
 * @param a
 * @param n
 * @param bin
 * @return
 */
int SelectionSort::selectMinimal(long *a, int n, int bin) {
    int k = bin;
    long min = a[bin];
    for (int j = bin + 1; j < n; j++){
        if (a[j] < min){
            k = j;
            min = a[j];
        }
    }
    return k;
}
