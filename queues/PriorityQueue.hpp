#ifndef PRIORITYQUEUE_HPP_
#define PRIORITYQUEUE_HPP_

#include "PriorityNode.hpp"
#include "iostream"

template<typename ItemType>
class PriorityQueue {
public:
    PriorityQueue();
    PriorityQueue(const PriorityQueue<ItemType>& a_priority_queue);
    ~PriorityQueue();
    void enqueue(const ItemType& new_entry, int priority); //adds by priority
    void dequeue(); // removes element from front of the queue
    ItemType front() const; // returns a copy of the front element
    PriorityNode<ItemType>* getFrontPtr() const; //returns front_ pointer
    int size() const; // returns the number of elements in the queue
    bool isEmpty() const; // returns true if no elements in the queue
private:
    PriorityNode<ItemType>* back_; // Pointer to back of the queue
    PriorityNode<ItemType>* front_; // Pointer to front of the queue
    int item_count;
};

#include "PriorityQueue.cpp"

#endif //PRIORITYQUEUE_HPP_
