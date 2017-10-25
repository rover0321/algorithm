//
// Created by huangxiang on 2017/10/25.
//

#ifndef ALGORITHM_SEQUENCEQUEUE_H
#define ALGORITHM_SEQUENCEQUEUE_H

typedef char ElemType;

class SequenceQueue {
public:
    explicit SequenceQueue(unsigned int initialSize);
    bool add(ElemType element);
    ElemType* remove();

private:
    unsigned int front, tail;
    ElemType* elements;
    const unsigned int MAX_SIZE;
    bool isEmpty();
    bool isFull();
};


#endif //ALGORITHM_SEQUENCEQUEUE_H
