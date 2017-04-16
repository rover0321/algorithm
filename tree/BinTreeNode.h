//
// Created by huangxiang on 17-4-16.
//

#ifndef CPP_BINTREENODE_H
#define CPP_BINTREENODE_H


class BinTreeNode {
public:
    int nodeIndex;
    BinTreeNode* left;
    BinTreeNode* right;
    BinTreeNode* parent;
    int data;

    BinTreeNode(int nodeIndex, int data);
    void displayNode();
    BinTreeNode* searchNode(int nodeIndex);
    void preOrderTraversal();
    void inOrderTraversal();
    void postOrderTraversal();

    virtual ~BinTreeNode();
};


#endif //CPP_BINTREENODE_H
