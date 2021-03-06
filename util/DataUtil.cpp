//
// Created by huangxiang on 17-5-7.
//

#include "DataUtil.h"
#include <iostream>

long *DataUtil::generateRandomArray(int n) {
    if (n <= 0){
        return nullptr;
    }
    long* a = new long(n);
    for (int i = 0; i < n; i++){
        a[i] = random();
    }
    return a;
}

void DataUtil::print(long *a, int low, int high) {
    for (int j = low; j <= high; j++){
        std::cout << a[j] << " ";
    }
    std::cout << std::endl;
}

void DataUtil::swap(long *a, int m, int n) {
    long temp = a[m];
    a[m] = a[n];
    a[n] = temp;
}

void DataUtil::print(char *a, unsigned int n) {
    for (int i = 0; i < n; i++){
        printf("%d ", a[i]);
    }
    printf("\n");
}
