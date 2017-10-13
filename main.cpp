#include <iostream>
#include "tree/ArrayTree.h"
#include "tree/LinkedTree.h"
#include "search/Search.h"
#include "util/DataUtil.h"
#include "sort/InsertSort.h"
#include "util/StringUtil.h"
#include "sort/SelectionSort.h"
#include "sort/MergeSort.h"
#include "sort/QuickSort.h"
#include "exercises/stackExercise.h"


int* mysum(int (*pInt)[4]){
    int* sum = new int();
    for (int i = 0; i < 4; i++){
        *sum = *sum + *(*pInt + i);
    }
    return sum;
}

int main(int argc, char* argv[]) {
    while (argc-- > 1){
        std::cout << *(++argv) << std::endl;
    }


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
    std::cout << Search::binarySearch(a, 10, 33) << std::endl;
    std::cout << Search::interpolationSearch(a, 10, 33) << std::endl;

    int n = 15;
//    long* c = DataUtil::generateRandomArray(n);
    long c[] = {3L, 44L, 38L, 5L, 47L, 15L, 36L, 26L};
//    StringUtil::display("排序前");
//    DataUtil::print(c, n);
//
    // 插入排序
//    InsertSort::insertSort(c, n);
//    StringUtil::display("排序后");
//    DataUtil::print(c, n);

    // 合并排序
//    StringUtil::display("排序前");
//    MergeSort::mergeSort(c, 0, 7);
//    StringUtil::display("排序后");
//    DataUtil::print(c, 0, 7);

    // 快速排序
    StringUtil::display("排序前");
    QuickSort::quickSort(c, 0, 7);
    StringUtil::display("排序后");
    DataUtil::print(c, 0, 7);

//    delete[](c);

//    long* d = DataUtil::generateRandomArray(n);
//    StringUtil::display("排序前");
//    DataUtil::print(d, n);
//    SelectionSort::simpleSelectionSort(d, n);
//    StringUtil::display("排序后");
//    DataUtil::print(d, n);

//    std::cout << stackExercise::bracketMatching("sfs{adfal[[dsfasdf]asdfjalsd}");

    int x[3][4] = {1, 3, 5, 9, 11, 13, 15, 17, 19, 21, 23, 25};
    int (*pInt)[4] = x + 1; // pInt 是一个指向一维数组的指针。
    while (pInt++ < x + 3){
        std::cout << pInt[0][0] << std::endl;
        std::cout << *(*pInt) << std::endl;
    }

    std::cout << *mysum(&x[1]) << std::endl;


    int* (*pFunc)(int (*pInt)[4]) = mysum;
    std::cout << *(*pFunc)(x + 1) << std::endl;
    return 0;
}

