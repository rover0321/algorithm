//
// Created by huangxiang on 17-4-15.
//

#include <iostream>
#include "ArrayTree.h"

ArrayTree::ArrayTree(int size, int* root) {
    this->pTree = new int[size];
    this->iSize = size;

    for (int i = 0; i < size; i++){
        pTree[i] = 0;
    }

    pTree[0] = *root;
}

ArrayTree::~ArrayTree() {
    delete[] pTree;
}

int* ArrayTree::searchNode(int nodeIndex) {
    if (nodeIndex < 0 || nodeIndex > iSize){
        return nullptr;
    }

    if (pTree[nodeIndex] == 0){
        return nullptr;
    }
    return &pTree[nodeIndex];
}

bool ArrayTree::addNode(int nodeIndex, int direction, int *pNode) {
    if (nodeIndex < 0 || nodeIndex > iSize){
        return false;
    }

    if (pTree[nodeIndex] == 0){
        return false;
    }

    if (direction == 0){
        pTree[nodeIndex * 2 + 1] = *pNode;
    }

    if (direction == 1){
        pTree[nodeIndex * 2 + 2] = *pNode;
    }
    return true;
}

bool ArrayTree::deleteNode(int nodeIndex, int *pNode) {
    if (nodeIndex < 0 || nodeIndex > iSize){
        return false;
    }

    *pNode = pTree[nodeIndex];
    pTree[nodeIndex] = 0;
    return true;
}

void ArrayTree::treeTraverse() {
    for (int i = 0; i < iSize; i++){
        std::cout << pTree[i] << " ";
    }
    std::cout << std::endl;
}
