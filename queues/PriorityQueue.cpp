template<typename ItemType>
PriorityQueue<ItemType>::PriorityQueue() : item_count{0}, back_{nullptr}, front_{nullptr} {}

template<typename ItemType>
PriorityQueue<ItemType>::PriorityQueue(const PriorityQueue<ItemType>& a_priority_queue) {
    item_count = a_priority_queue.item_count;
    front_ = a_priority_queue.front_;
    back_ = a_priority_queue.back_;
}

template<typename ItemType>
PriorityQueue<ItemType>::~PriorityQueue() {
    while (!isEmpty()) {
        dequeue();
    }
}

// lower the number = higher priority
template<typename ItemType>
void PriorityQueue<ItemType>::enqueue(const ItemType &new_entry, int priority) {

    PriorityNode<ItemType>* current_ptr = front_;
    PriorityNode<ItemType>* previous_ptr = nullptr;

    while (current_ptr != nullptr && priority >= current_ptr->getPriority())
    {
        previous_ptr = current_ptr;
        current_ptr = current_ptr->getNext();
    }

    PriorityNode<ItemType>* to_add = new PriorityNode<ItemType>(new_entry, priority);

    if (isEmpty() || previous_ptr == nullptr)
    {
        to_add->setNext(front_);
        front_ = to_add;
    }
    else
    {
        to_add->setNext(previous_ptr->getNext());
        previous_ptr->setNext(to_add);
    }

    item_count++;
}

template<typename ItemType>
void PriorityQueue<ItemType>::dequeue() {

    if (isEmpty()) return;

    PriorityNode<ItemType>* toRemove = front_;

    if (item_count > 1)
    {
        front_ = toRemove->getNext();
        toRemove->setNext(nullptr);
        delete toRemove;
        toRemove = nullptr;
    }
    else {
        front_ = nullptr;
        back_ = nullptr;
    }

    item_count--;
}

template<typename ItemType>
ItemType PriorityQueue<ItemType>::front() const {
    return front_->getItem();
}

template<typename ItemType>
PriorityNode<ItemType> *PriorityQueue<ItemType>::getFrontPtr() const {
    return front_;
}

template<typename ItemType>
int PriorityQueue<ItemType>::size() const {
    return item_count;
}

template<typename ItemType>
bool PriorityQueue<ItemType>::isEmpty() const {
    return size() == 0;
}