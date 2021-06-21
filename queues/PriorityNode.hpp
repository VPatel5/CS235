#ifndef PRIORITYNODE_HPP_
#define PRIORITYNODE_HPP_

template<typename ItemType>
class PriorityNode {
public:
    PriorityNode();
    PriorityNode(const ItemType& an_item);
    PriorityNode(const ItemType& an_item, int priority);
    PriorityNode(const ItemType& an_item, int priority, PriorityNode<ItemType>* next_node_ptr);
    void setItem(const ItemType& an_item);
    void setPriority(const int priority);
    void setNext(PriorityNode<ItemType>* next_node_ptr);
    ItemType getItem() const;
    int getPriority() const;
    PriorityNode<ItemType>* getNext() const;
private:
    ItemType item_; // A data item
    int priority_; // The item's priority
    PriorityNode<ItemType>* next_; // Pointer to next node
};

#include "PriorityNode.cpp"

#endif //PRIORITYNODE_HPP_
