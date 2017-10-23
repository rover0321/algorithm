//
// Created by huangxiang on 2017/10/23.
//

#include <cstdio>
#include <cstdlib>
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

PList ListDemo::inverseList(PList pList) {
    PList p, q, r;
    p = pList;
    q = nullptr;
    while (p != nullptr){
        r = q;
        q = p;
        p = p -> link;
        q ->link = r;
    }
    return q;
}

PList ListDemo::createList(unsigned int n) {
    unsigned int i = 0;
    PList list = nullptr;
    PList tail = nullptr;
    while (i++ < n){
        char d;
        std::scanf("%c", &d);
        PList p = (PList)malloc(sizeof(ListNode));
        p->data = d;
        p->link = nullptr;
        if (list == nullptr){
            list = p;
        } else {
            tail->link = p;
        }
        tail = p;
    }
    return list;
}

void ListDemo::deleteList(PList list) {
    while (list->link != nullptr){
        PList p = list;
        list = list->link;
        free(p);
    }
}

void ListDemo::displayList(PList list) {
    while (list != nullptr){
        printf("%c ", list->data);
        list = list->link;
    }
    printf("\n");
}
