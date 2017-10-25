//
// Created by huangxiang on 2017/10/25.
//

#ifndef ALGORITHM_SQUENCESTACK_H
#define ALGORITHM_SQUENCESTACK_H

typedef char ElemType;

class SequenceStack {
public:
    SequenceStack();
    SequenceStack(unsigned int initialSize);
    ~SequenceStack();
    bool push(ElemType elemType);
    ElemType* pop();
    ElemType* top();

private:
    static const unsigned int DEFAULT_INITIAL_SIZE = 100;
    unsigned int mTop;
    ElemType* elements;
    const unsigned int MAX_ELEMENTS_SIZE;
    bool isStackFull();
    bool isEmpty();
};


#endif //ALGORITHM_SQUENCESTACK_H
