//
// Created by huangxiang on 2017/10/23.
//

#include "ListDemo.h"

void ListDemo::deleteItem(ElemType *A, unsigned int& n, ElemType item) {
    int k = 0;
    for (int i = 0; i < n; i++){
        if (A[i] == item){
            k++;
        } else {
            A[i - k] = A[i];
        }
    }
    n = n - k;
}
