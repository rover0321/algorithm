//
// Created by huangxiang on 2017/10/25.
//

#include "LinkStack.h"

LinkStack::LinkStack(): mTop(nullptr) {

}

ElemType *LinkStack::top() {
    if (isEmpty()){
        return nullptr;
    }
    return &this->mTop->data;
}

ElemType *LinkStack::pop() {
    if (isEmpty()){
        return nullptr;
    }
    LinkStackNode* _topNode = this->mTop;
    this->mTop = _topNode->next;
    return &_topNode->data;
}

void LinkStack::push(ElemType element) {
    LinkStackNode* _newNode = new LinkStackNode();
    _newNode->data = element;
    _newNode->next = this->mTop;
    this->mTop = _newNode;
}

bool LinkStack::isEmpty() {
    return this->mTop == nullptr;
}
