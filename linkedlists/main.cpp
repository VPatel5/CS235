#include "DoublyLinkedList.hpp"

using namespace std;

int main() {
    DoublyLinkedList<int> doublyLinkedList;

    //66 1 69 2 85 3 63 14 10000 32 100082390
    doublyLinkedList.insert(1, -1);
    doublyLinkedList.insert(2, -1);
    doublyLinkedList.insert(3, -1);
    doublyLinkedList.insert(4, -1);

    doublyLinkedList.display();
    std::cout << "Size: " << doublyLinkedList.getSize() << std::endl;

    return 0;
}
