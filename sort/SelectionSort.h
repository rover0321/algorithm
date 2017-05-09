//
// Created by huangxiang on 2017/5/9.
//

#ifndef ALGORITHM_SELECTIONSORT_H
#define ALGORITHM_SELECTIONSORT_H


class SelectionSort {
public:
    static void simpleSelectionSort(long* a, int n);

private:
    static int selectMinimal(long* a, int n, int bin);
};


#endif //ALGORITHM_SELECTIONSORT_H
