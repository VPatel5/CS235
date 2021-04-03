#include "DoublyLinkedList.hpp"

int main() {

    DoublyLinkedList<int> firstList;

    firstList.insert(1, 1);
    firstList.insert(3,2);
    firstList.insert(5,3);

    DoublyLinkedList<int> secondList;

    secondList.insert(2, 1);
    secondList.insert(4,2);
    secondList.insert(6,3);
    secondList.insert(8,4);
    secondList.insert(10,5);

    firstList.interleave(secondList).display();

    return 0;
    
}
