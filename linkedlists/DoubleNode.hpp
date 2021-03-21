#ifndef DOUBLENODE_HPP_
#define DOUBLENODE_HPP_

template<typename ItemType>
class DoubleNode {
private:
    DoubleNode<ItemType>* next_;
    DoubleNode<ItemType>* previous_;
    const ItemType item_;
public:
    DoubleNode();

    DoubleNode(const ItemType& item);

    DoubleNode(const ItemType& item, DoubleNode<ItemType>* next, DoubleNode<ItemType>* previous);

    ItemType getItem() const;

    DoubleNode<ItemType>* getNext() const;

    DoubleNode<ItemType>* getPrevious() const;

    bool setNext(DoubleNode<ItemType>* ptr);

    bool setPrev(DoubleNode<ItemType>* ptr);
};

#include "DoubleNode.cpp"
#endif // DOUBLENODE_HPP_
