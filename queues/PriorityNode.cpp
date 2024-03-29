template<typename ItemType>
PriorityNode<ItemType>::PriorityNode() {}

template<typename ItemType>
PriorityNode<ItemType>::PriorityNode(const ItemType &an_item) : item_{an_item}, next_{nullptr} {}

template<typename ItemType>
PriorityNode<ItemType>::PriorityNode(const ItemType &an_item, int priority) : item_{an_item}, priority_{priority}, next_{nullptr} {}

template<typename ItemType>
PriorityNode<ItemType>::PriorityNode(const ItemType &an_item, int priority, PriorityNode<ItemType> *next_node_ptr) : item_{an_item}, priority_{priority}, next_{next_node_ptr} {}

template<typename ItemType>
ItemType PriorityNode<ItemType>::getItem() const {
    return item_;
}

template<typename ItemType>
PriorityNode<ItemType>* PriorityNode<ItemType>::getNext() const {
    return next_;
}

template<typename ItemType>
int PriorityNode<ItemType>::getPriority() const {
    return priority_;
}

template<typename ItemType>
void PriorityNode<ItemType>::setItem(const ItemType &an_item) {
    this->item_ = an_item;
}

template<typename ItemType>
void PriorityNode<ItemType>::setPriority(const int priority) {
    this->priority_ = priority;
}

template<typename ItemType>
void PriorityNode<ItemType>::setNext(PriorityNode<ItemType> *next_node_ptr) {
    this->next_ = next_node_ptr;
}
