template<typename ItemType>
DoubleNode<ItemType>::DoubleNode() : next_{nullptr}, previous_{nullptr} {}

template<typename ItemType>
DoubleNode<ItemType>::DoubleNode(const ItemType& item) : item_{item}, next_{nullptr}, previous_{nullptr} {}

template<typename ItemType>
DoubleNode<ItemType>::DoubleNode(const ItemType& item, DoubleNode<ItemType>* next, DoubleNode<ItemType>* previous) : item_{item}, next_{next}, previous_{previous} {}

template<typename ItemType>
ItemType DoubleNode<ItemType>::getItem() const {
    return item_;
}

template<typename ItemType>
DoubleNode<ItemType>* DoubleNode<ItemType>::getNext() const {
    return next_;
}

template<typename ItemType>
DoubleNode<ItemType>* DoubleNode<ItemType>::getPrevious() const {
    return previous_;
}

template<typename ItemType>
bool DoubleNode<ItemType>::setNext(DoubleNode<ItemType>* ptr) {
    next_ = ptr;
    return true;
}

template<typename ItemType>
bool DoubleNode<ItemType>::setPrev(DoubleNode<ItemType>* ptr) {
    previous_ = ptr;
    return true;
}

