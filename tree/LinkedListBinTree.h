//
// Created by huangxiang on 2017/10/26.
//

#ifndef ALGORITHM_LINKEDLISTBINTREE_H
#define ALGORITHM_LINKEDLISTBINTREE_H

#include "BinTreeNode.h"

class LinkedListBinTree {
public:
    void preOrderTraverse();
    void inOrderTraverse();
    void postOrderTraverse();
    explicit LinkedListBinTree();
    void buildTree();

private:
    void __build(BinTreeNode<char> **tree);
    BinTreeNode<char>* root;
    void distroy();
    void visit(BinTreeNode<char>* node);
    void preOrderTraverse(BinTreeNode<char> *node);
    void inOrderTraverse(BinTreeNode<char> *node);
    void postOrderTraverse(BinTreeNode<char> *node);
};




#endif //ALGORITHM_LINKEDLISTBINTREE_H
