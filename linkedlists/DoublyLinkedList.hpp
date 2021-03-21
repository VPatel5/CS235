#ifndef DOUBLY_LINKED_LIST_HPP_
#define DOUBLY_LINKED_LIST_HPP_

#include "iostream"
#include "DoubleNode.hpp"

template<typename ItemType>
class DoublyLinkedList {
private:
    int current_size_;
    DoubleNode<ItemType>* head_;
    DoubleNode<ItemType>* tail_;
public:

    DoublyLinkedList();

    DoublyLinkedList(const DoublyLinkedList<ItemType> &old_list);

    ~DoublyLinkedList();

    bool insert(const ItemType &item, const int &position);  //inserts item at position in caller list

    bool remove(const int &position); //removes the node at position

    int getSize() const; // returns the number of the nodes in the calling list

    DoubleNode<ItemType> *getHeadPtr() const; // returns a copy of the hearPtr

    DoubleNode<ItemType> *getTailPtr() const; // returns a copy of the hearPtr

    DoubleNode<ItemType> *getAtPos(const int &pos) const; // returns a pointer to the node located at pos

    bool isEmpty() const; // returns whether the calling list is empty

    void clear(); // clears the list

    void display() const; // prints the contents of the calling list in order

    void displayBackwards() const; // prints the contents of the calling list in reverse order

    DoublyLinkedList<ItemType> interleave(const DoublyLinkedList<ItemType> &a_list); // returns the interleaved list of the calling and parameter lists
};

#include "DoublyLinkedList.cpp"
#endif //DOUBLY_LINKED_LIST_HPP_
