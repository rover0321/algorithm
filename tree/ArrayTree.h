//
// Created by huangxiang on 17-4-15.
//

#ifndef CPP_TREE_H
#define CPP_TREE_H


class ArrayTree {
public:
    ArrayTree(int size, int* root);
    ~ArrayTree();
    int* searchNode(int nodeIndex);
    bool addNode(int nodeIndex, int direction, int* pNode);
    bool deleteNode(int nodeIndex, int* pNode);
    void treeTraverse();

private:
    int* pTree;
    int iSize;
};


#endif //CPP_TREE_H
