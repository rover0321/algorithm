//
// Created by huangxiang on 17-4-16.
//

#ifndef CPP_LINKEDTREE_H
#define CPP_LINKEDTREE_H


#include "BinTreeNode.h"

class LinkedTree {
public:
    LinkedTree();
    BinTreeNode* searchNode(int nodeIndex);
    bool addNode(int nodeIndex, int direction, BinTreeNode* node);
    bool deleteNode(int nodeIndex);
    void preOrderTraversal();
    void inOrderTraversal();
    void postOrderTraversal();

    virtual ~LinkedTree();

private:
    BinTreeNode* root;
};


#endif //CPP_LINKEDTREE_H
