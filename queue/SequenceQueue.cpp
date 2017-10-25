//
// Created by huangxiang on 2017/10/25.
//

#include "SequenceQueue.h"

SequenceQueue::SequenceQueue(unsigned int initialSize): MAX_SIZE(initialSize) {
    this->elements = new ElemType[MAX_SIZE];
    this->front = -1;
    this->tail = -1;
}

bool SequenceQueue::add(ElemType element) {
    if (isFull()){
        return false;
    }
    this->elements[this->tail++ % MAX_SIZE] = element;
    return true;
}

bool SequenceQueue::isEmpty() {
    return this->front == this->tail;
}

bool SequenceQueue::isFull() {
    return (this->tail + 1) % MAX_SIZE == front;
}

ElemType *SequenceQueue::remove() {
    if (isEmpty()){
        return nullptr;
    }

    return &this->elements[this->front++ % MAX_SIZE];
}
