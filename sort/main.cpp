#include "Solutions.cpp"

int main() {

    DoublyLinkedList<int> list;
    list.insert(4);
    list.insert(1);
    list.insert(2);
    list.insert(9);
    list.insert(5);
    list.insert(7);
    list.insert(8);
    list.insert(6);
    list.insert(10);
    list.insert(3);

    std::cout << "Unsorted" << std::endl;
    list.display();
    std::cout << "Sorted" << std::endl;
    solutions::mergeSort(list, std::less<int>());
    list.display();


    return 0;
}
