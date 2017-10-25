//
// Created by huangxiang on 2017/10/25.
//

#ifndef ALGORITHM_LINKSTACK_H
#define ALGORITHM_LINKSTACK_H

typedef char ElemType;

typedef struct linkStackNode{
    ElemType data;
    linkStackNode* next;
}LinkStackNode;

class LinkStack {
public:
    void push(ElemType element);
    ElemType* pop();
    ElemType* top();
    LinkStack();

private:
    LinkStackNode* mTop;
    bool isEmpty();
};


#endif //ALGORITHM_LINKSTACK_H
