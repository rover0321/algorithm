//
// Created by huangxiang on 2017/10/26.
//

#include <iostream>
#include "LinkedListBinTree.h"
void LinkedListBinTree::preOrderTraverse() {
    preOrderTraverse(root);
}

void LinkedListBinTree::inOrderTraverse() {
    inOrderTraverse(root);
}

void LinkedListBinTree::postOrderTraverse() {
    postOrderTraverse(root);
}

LinkedListBinTree::LinkedListBinTree() {
    this->root = nullptr;
}

void LinkedListBinTree::__build(BinTreeNode<char> **tree) {
    char ch;
    std::cout << "请输入结点值，无子结点输入#" << std::endl;
    std::cin >> ch;
    if (ch == '#'){
        *tree = nullptr;
    } else {
        *tree = new BinTreeNode<char>();
        (*tree)->data = ch;
        __build(&(*tree)->lChild);
        __build(&(*tree)->rChild);
    }
}

void LinkedListBinTree::buildTree() {
    this->__build(&root);
}

void LinkedListBinTree::distroy() {

}

void LinkedListBinTree::visit(BinTreeNode<char> *node) {
    std::cout << node->data << std::endl;
}

void LinkedListBinTree::preOrderTraverse(BinTreeNode<char> *node) {
    if (node != nullptr){
        visit(node);
        preOrderTraverse(node->lChild);
        preOrderTraverse(node->rChild);
    }
}

void LinkedListBinTree::inOrderTraverse(BinTreeNode<char> *node) {
    if (node != nullptr){
        inOrderTraverse(node->lChild);
        visit(node);
        inOrderTraverse(node->rChild);
    }
}

void LinkedListBinTree::postOrderTraverse(BinTreeNode<char> *node) {
    if (node != nullptr){
        postOrderTraverse(node->lChild);
        postOrderTraverse(node->rChild);
        visit(node);
    }
}
