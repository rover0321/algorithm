//
// Created by huangxiang on 2017/10/9.
//

#ifndef ALGORITHM_QUICKSORT_H
#define ALGORITHM_QUICKSORT_H


class QuickSort {
public:
    static void quickSort(long a[], int low, int high);

private:
    static int partition(long a[], int i, int j);
};


#endif //ALGORITHM_QUICKSORT_H
