#include <iostream>
#include "util/DataUtil.h"
#include "list/ListDemo.h"
#include "stack/SequenceStack.h"
#include "stack/LinkStack.h"
#include "queue/SequenceQueue.h"
#include "tree/LinkedListBinTree.h"

int main(int argc, char* argv[]) {
//    while (argc-- > 1){
//        std::cout << *(++argv) << std::endl;
//    }
//
//    ElemType A[] = {3, 7, 9, 6, 21, 13, 21, 5};
//    unsigned int count = sizeof A / sizeof A[0]; // This is a standard way to get a length of array.
//    DataUtil::print(A, count);
//    ListDemo::deleteItem(A, count, 21);
//    DataUtil::print(A, count);
//
//
//    PList list = ListDemo::createList(4);
//    ListDemo::displayList(list);
//    ListDemo::displayList(ListDemo::inverseList(list));
//    ListDemo::deleteList(list);
//
//    ListDemo::josephus(8, 1, 4);
//
//
//    SequenceStack* pSequenceStack = new SequenceStack(10);
//    pSequenceStack->push('a');
//    pSequenceStack->push('b');
//    pSequenceStack->push('c');
//    pSequenceStack->push('d');
//    std::cout << std::endl << *pSequenceStack->top() << std::endl;
//    std::cout << *pSequenceStack->pop() << std::endl;
//    std::cout << std::endl << *pSequenceStack->top() << std::endl;
//    delete pSequenceStack;
//
//    LinkStack* pLinkStack = new LinkStack();
//    pLinkStack->push('1');
//    pLinkStack->push('2');
//    pLinkStack->push('3');
//    pLinkStack->push('4');
//    pLinkStack->push('5');
//    std::cout << *pLinkStack->top() << *pLinkStack->pop() << std::endl;
//    delete pLinkStack;
//
//    /**
//     * practise stack
//     */
//    SequenceQueue* pSequenceQueue = new SequenceQueue(4);
//    pSequenceQueue->add('2');
//    pSequenceQueue->add('3');
//    pSequenceQueue->add('8');
//    pSequenceQueue->add('3');
//    pSequenceQueue->add('6');
//
//    std::cout << *pSequenceQueue->remove() << std::endl;
//    std::cout << *pSequenceQueue->remove() << std::endl;
//    std::cout << *pSequenceQueue->remove() << std::endl;
//    std::cout << *pSequenceQueue->remove() << std::endl;

    LinkedListBinTree* binTree = new LinkedListBinTree();
    binTree->buildTree();
    binTree->preOrderTraverse();
    std::cout << "---------------------------------" << std::endl;
    binTree->inOrderTraverse();
    std::cout << "---------------------------------" << std::endl;
    binTree->postOrderTraverse();
    delete binTree;
    return 0;
}

