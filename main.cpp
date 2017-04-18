#include <iostream>
#include "tree/ArrayTree.h"
#include "tree/LinkedTree.h"
#include "search/Search.h"

int main() {
    std::cout << "Hello, World!" << std::endl;

//    int root = 1;
//    ArrayTree* tree = new ArrayTree(10, &root);
//
//    int node2 = 3;
//    int node3 = 6;
//    tree->addNode(0, 0, &node2);
//    tree->addNode(0, 1, &node3);
//
//    int node4 = 13;
//    int node5 = 26;
//    tree->addNode(1, 0, &node4);
//    tree->addNode(1, 1, &node5);
//
//    int deletedNode;
//    tree->deleteNode(3, &deletedNode);
//    std::cout << "Deleted node = " << deletedNode << std::endl;
//
//    std::cout << "Node = " << *tree->searchNode(4) << std::endl;
//    tree->treeTraverse();
//    delete(tree);

    LinkedTree* linkedTree = new LinkedTree();
    BinTreeNode node1 = BinTreeNode(1, 10);
    linkedTree->addNode(0, 0, &node1);

    BinTreeNode node2 = BinTreeNode(2, 3);
    linkedTree->addNode(0, 1, &node2);

    BinTreeNode node3 = BinTreeNode(3, 5);
    linkedTree->addNode(1, 0, &node3);

    BinTreeNode node4 = BinTreeNode(4, 6);
    linkedTree->addNode(1, 1, &node4);

    BinTreeNode node5 = BinTreeNode(5, 1);
    linkedTree->addNode(2, 0, &node5);

    BinTreeNode node6 = BinTreeNode(6, 8);
    linkedTree->addNode(2, 1, &node6);

    linkedTree->deleteNode(3);

    linkedTree->preOrderTraversal();
    linkedTree->inOrderTraversal();
    linkedTree->postOrderTraversal();
    delete linkedTree;

    /**
     * 测试查找
     */

    int a[10] = {0, 3, 5, 8, 11, 33, 78, 96, 114, 238};
    std::cout << Search::sequentialSearch(a, 10, 33) << std::endl;
    std::cout << Search::optimizeSequentialSearch(a, 10, 33) << std::endl;
    return 0;
}