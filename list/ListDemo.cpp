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

void ListDemo::josephus(unsigned int n, unsigned int m, unsigned int k) {
    PList p, r, list = nullptr;

    /*Initialize this circle list*/
    for (int i = 0; i < n; i++){
        p = (PList)malloc(sizeof(PList));
        p->data = i;
        if (list == nullptr){
            list = p;
        } else {
            r->link = p;
        }
        r = p;
    }

    // link tail node to head node as we get a circle link.
    r->link = list;

    p = list; // p points to the head node.

    for (int i = 1; i < k; i++){
        r = p;
        p = p->link;
    }
    // p points to the kth node according to the head node.

    while (p->link != p){
        for (int i = 1; i < m; i++){
            r = p;
            p = p->link;
        }
        r->link = p->link;
        printf("%4d", p->data);
        free(p);
        p = r->link;
    }

    printf("\nThe last one node is %4d", p->data);
    free(p);
}
