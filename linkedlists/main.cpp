#include "DoublyLinkedList.hpp"

using namespace std;

int main() {
    DoublyLinkedList<int> doublyLinkedList;

    //66 1 69 2 85 3 63 14 10000 32 100082390
    doublyLinkedList.insert(1, 1);
    doublyLinkedList.insert(2, 2);
    doublyLinkedList.insert(3, 3);
    doublyLinkedList.insert(4, 4);
    doublyLinkedList.insert(5, 5);
    doublyLinkedList.insert(6, 6);
    doublyLinkedList.insert(7, 7);
    doublyLinkedList.insert(8, 8);
    doublyLinkedList.insert(9, 9);
    doublyLinkedList.insert(10, 10);
    doublyLinkedList.insert(11, 11);

    doublyLinkedList.display();
    std::cout << "Size: " << doublyLinkedList.getSize() << std::endl;

    DoublyLinkedList<int> newList(doublyLinkedList);

    std::cout << "===================" << std::endl;
    std::cout << "Copying............" << std::endl;
    std::cout << "===================" << std::endl;

    newList.display();
    std::cout << "Size: " << newList.getSize() << std::endl;

    return 0;
}
