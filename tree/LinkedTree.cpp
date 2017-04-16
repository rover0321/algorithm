//
// Created by huangxiang on 17-4-16.
//

#include "LinkedTree.h"

LinkedTree::~LinkedTree() {
//    deleteNode(0);
}

BinTreeNode *LinkedTree::searchNode(int nodeIndex) {
    return root->searchNode(nodeIndex);
}

bool LinkedTree::deleteNode(int nodeIndex) {
    BinTreeNode* node = searchNode(nodeIndex);
    if (node == nullptr){
        return false;
    }
    delete node;
    return true;
}

void LinkedTree::preOrderTraversal() {
    this->root->preOrderTraversal();
}

void LinkedTree::inOrderTraversal() {
    this->root->inOrderTraversal();
}

void LinkedTree::postOrderTraversal() {
    this->root->postOrderTraversal();
}

LinkedTree::LinkedTree() {
    root = new BinTreeNode(0, 0);
}

bool LinkedTree::addNode(int nodeIndex, int direction, BinTreeNode *node) {
    BinTreeNode* searched = root->searchNode(nodeIndex);
    if (searched != nullptr){
        BinTreeNode* temp = new BinTreeNode(node->nodeIndex, node->data);
        temp->parent = searched;
        if (direction == 0){
            searched->left = temp;
        }

        if (direction == 1){
            searched->right = temp;
        }

        return true;
    } else{
        return false;
    }
}
