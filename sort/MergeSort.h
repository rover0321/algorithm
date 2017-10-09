//
// Created by huangxiang on 2017/10/8.
//

#ifndef ALGORITHM_MERGESORT_H
#define ALGORITHM_MERGESORT_H


class MergeSort {
public:
    static void mergeSort(long a[], int low, int high);

private:
    static void merge(long a[], int low, int mid, int high);
};


#endif //ALGORITHM_MERGESORT_H
