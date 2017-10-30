//
// Created by huangxiang on 2017/10/26.
//

#include <iostream>
#include <stack>
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

LinkedListBinTree::~LinkedListBinTree() {
    destroy(root);
}

void LinkedListBinTree::destroy(BinTreeNode<char> *node) {
    if (node != nullptr){
        destroy(node->lChild);
        destroy(node->rChild);
        free(node);
    }
}

void LinkedListBinTree::inOrderTraverseInNonRecursiveWay() {
    BinTreeNode<char>* p = this->root;
    std::stack<BinTreeNode<char>*> __stack = std::stack<BinTreeNode<char>*>();

    do {
        while (p != nullptr){
            __stack.push(p);
            p = p->lChild;
        }

        p = __stack.top();
        __stack.pop();
        visit(p);
        p = p->rChild;

    } while(!(p == nullptr && __stack.empty()));
}

void LinkedListBinTree::preOrderTraverseInNonRecursiveWay() {
    BinTreeNode<char>* p = this->root;
    std::stack<BinTreeNode<char>*> __stack = std::stack<BinTreeNode<char>*>();
    do {
        while (p != nullptr){
            visit(p);
            __stack.push(p);
            p = p->lChild;
        }
        p = __stack.top();
        __stack.pop();
        p = p->rChild;
    } while (!(p == nullptr && __stack.empty()));
}
