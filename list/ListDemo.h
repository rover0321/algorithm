//
// Created by huangxiang on 2017/10/23.
//

#ifndef ALGORITHM_LISTDEMO_H
#define ALGORITHM_LISTDEMO_H

typedef char ElemType;

typedef struct listNode{
    ElemType data;
    struct listNode* link;
}ListNode, *PList;

class ListDemo {
public:
    static void deleteItem(ElemType A[], unsigned int& n, ElemType item);
    static PList inverseList(PList pList);
    static PList createList(unsigned int n);
    static void deleteList(PList list);
    static void displayList(PList list);
    static void josephus(unsigned int n, unsigned int m, unsigned int k);
};


#endif //ALGORITHM_LISTDEMO_H
