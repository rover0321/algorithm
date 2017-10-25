//
// Created by huangxiang on 2017/10/25.
//

#include "SequenceStack.h"

SequenceStack::SequenceStack():MAX_ELEMENTS_SIZE(DEFAULT_INITIAL_SIZE) {
    this->elements = new ElemType[DEFAULT_INITIAL_SIZE];
    this->mTop = -1;
}

SequenceStack::SequenceStack(unsigned int initialSize):MAX_ELEMENTS_SIZE(initialSize) {
    this->elements = new ElemType(initialSize);
    this->mTop = -1;
}

bool SequenceStack::push(ElemType elemType) {
    if (isStackFull()){
        return false;
    } else {
        this->elements[++mTop] = elemType;
        return true;
    }
}

ElemType* SequenceStack::pop() {
    if (isEmpty()){
        return nullptr;
    } else{
        return &this->elements[mTop--];
    }
}

ElemType* SequenceStack::top() {
    if (isEmpty()){
        return nullptr;
    } else{
        return &this->elements[mTop];
    }
}

SequenceStack::~SequenceStack() {
    delete[] this->elements;
}

bool SequenceStack::isStackFull() {
    return mTop == this->MAX_ELEMENTS_SIZE;
}

bool SequenceStack::isEmpty() {
    return mTop == -1;
}
