#include "DoublyLinkedList.hpp"

int main() {

    DoublyLinkedList<int> doublyLinkedList;

    doublyLinkedList.insert(1, 1);
    doublyLinkedList.insert(2,2);
    doublyLinkedList.insert(3,3);

    DoublyLinkedList<int> newList(doublyLinkedList);

    return 0;
    
}
