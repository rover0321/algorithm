//
// Created by huangxiang on 17-4-16.
//

#include <iostream>
#include "BinTreeNode.h"

void BinTreeNode::displayNode() {
    std::cout << this->data << std::endl;
}

BinTreeNode::BinTreeNode(int nodeIndex, int data) {
    this->parent = nullptr;
    this->nodeIndex = nodeIndex;
    this->data = data;
    this->left = nullptr;
    this->right = nullptr;
}

BinTreeNode *BinTreeNode::searchNode(int nodeIndex) {
    if (this->nodeIndex == nodeIndex){
        return this;
    }

    BinTreeNode* temp = nullptr;
    if (this->left != nullptr){
        if (this->left->nodeIndex == nodeIndex){
            return this->left;
        } else{
            temp = this->left->searchNode(nodeIndex);
            if (temp != nullptr){
                return temp;
            }
        }
    }

    if (this->right != nullptr){
        if (this->right->nodeIndex == nodeIndex){
            return this->right;
        }else{
            temp = this->right->searchNode(nodeIndex);
            if (temp != nullptr){
                return temp;
            }
        }
    }

    return nullptr;
}

BinTreeNode::~BinTreeNode() {
    delete this->left;
    delete this->right;
    if (this->parent != nullptr){
        if (this == this->parent->left){
            this->parent->left = nullptr;
        }
        if (this == this->parent->right){
            this->parent->right = nullptr;
        }
    }
}

void BinTreeNode::preOrderTraversal() {
    std::cout << this->data << std::endl;

    if (this->left != nullptr){
        this->left->preOrderTraversal();
    }

    if (this->right != nullptr){
        this->right->preOrderTraversal();
    }
}

void BinTreeNode::inOrderTraversal() {

    if (this->left != nullptr){
        this->left->inOrderTraversal();
    }

    std::cout << this->data << std::endl;

    if (this->right != nullptr){
        this->right->inOrderTraversal();
    }
}

void BinTreeNode::postOrderTraversal() {

    if (this->left != nullptr){
        this->left->postOrderTraversal();
    }

    if (this->right != nullptr){
        this->right->postOrderTraversal();
    }
    std::cout << this->data << std::endl;
}
