template<typename ItemType>
DoublyLinkedList<ItemType>::DoublyLinkedList() : current_size_{0}, head_{nullptr}, tail_{nullptr} {}

template<typename ItemType>
DoublyLinkedList<ItemType>::DoublyLinkedList(const DoublyLinkedList<ItemType> &old_list) {
    current_size_ = old_list.getSize();
    head_ = new DoubleNode<ItemType>(old_list.head_->getItem());

    DoubleNode<ItemType>* current_ptr = old_list.head_->getNext();
    DoubleNode<ItemType>* new_current_ptr = head_;
    while (current_ptr != nullptr) {
        DoubleNode<ItemType>* to_add = new DoubleNode<ItemType>(current_ptr->getItem(), nullptr, new_current_ptr);
        new_current_ptr->setNext(to_add);
        new_current_ptr = new_current_ptr->getNext();
        current_ptr = current_ptr->getNext();
    }
}

template<typename ItemType>
DoublyLinkedList<ItemType>::~DoublyLinkedList() {
    clear();
}

template<typename ItemType>
bool DoublyLinkedList<ItemType>::insert(const ItemType &item, const int &position) {

    DoubleNode<ItemType>* to_add = new DoubleNode<ItemType>(item);
    DoubleNode<ItemType>* pos_ptr = getAtPos(position);

    // List is empty create new head ptr and tail ptr
    if (head_ == nullptr) {
        head_ = to_add;
        tail_ = to_add;
    }
    // Change head ptr
    else if (head_ == pos_ptr) {
        DoubleNode<ItemType>* current_ptr = head_;
        head_ = to_add;
        current_ptr->setPrev(head_);
        head_->setNext(current_ptr);
    }
    // Add to the end
    else if (pos_ptr == nullptr) {
        to_add->setNext(nullptr);
        to_add->setPrev(tail_);
        tail_->setNext(to_add);
        tail_ = to_add;
    }
    // Replace at a specific location
    else {
        to_add->setPrev(pos_ptr->getPrevious());
        to_add->setNext(pos_ptr);
        pos_ptr->getPrevious()->setNext(to_add);
        pos_ptr->setPrev(to_add);
    }

    current_size_++;
    return true;
}

template<typename ItemType>
bool DoublyLinkedList<ItemType>::remove(const int &position) {
    DoubleNode<ItemType>* to_remove = getAtPos(position);

    // Not in list
    if (to_remove == nullptr) return false;

    // Remove head
    if (to_remove == head_) {
        head_ = to_remove->getNext();
        to_remove->setPrev(nullptr);
    }
    // Remove tail
    else if (to_remove == tail_) {
        tail_ = to_remove->getPrevious();
        tail_->setNext(nullptr);
    }
    // Remove at specific position
    else {
        DoubleNode<ItemType>* next = to_remove->getNext();
        to_remove->getPrevious()->setNext(next);
        next->setPrev(to_remove->getPrevious());

        to_remove->setPrev(nullptr);
        to_remove->setNext(nullptr);
    }

    delete to_remove;
    to_remove = nullptr;

    current_size_--;
    return true;
}

template<typename ItemType>
int DoublyLinkedList<ItemType>::getSize() const {
    return current_size_;
}

template<typename ItemType>
DoubleNode<ItemType> *DoublyLinkedList<ItemType>::getHeadPtr() const {
    return head_;
}

template<typename ItemType>
DoubleNode<ItemType> *DoublyLinkedList<ItemType>::getAtPos(const int &pos) const {
    if (isEmpty()) return nullptr;
    if (pos == 1) return head_;
    if (pos == current_size_) return tail_;
    if (pos > current_size_) return nullptr;

    int counter = 1;

    DoubleNode<ItemType>* current_ptr = head_;

    while (current_ptr != nullptr) {

        if (counter == pos) {
            return current_ptr;
        }

        current_ptr = current_ptr->getNext();
        counter++;
    }

    return nullptr;
}

template<typename ItemType>
bool DoublyLinkedList<ItemType>::isEmpty() const {
    return current_size_ == 0;
}

template<typename ItemType>
void DoublyLinkedList<ItemType>::clear() {

    DoubleNode<ItemType>* delete_ptr = head_;

    while (head_ != nullptr) {
        head_ = head_->getNext();

        delete_ptr->setNext(nullptr);
        delete delete_ptr;

        delete_ptr = head_;
    }

    current_size_ = 0;
}

template<typename ItemType>
void DoublyLinkedList<ItemType>::display() const {
    DoubleNode<ItemType>* current_ptr = head_;
    while (current_ptr != nullptr) {
        std::cout << current_ptr->getItem() << std::endl;
        current_ptr = current_ptr->getNext();
    }
}

template<typename ItemType>
void DoublyLinkedList<ItemType>::displayBackwards() const {
    DoubleNode<ItemType>* current_ptr = tail_;
    while (current_ptr != nullptr) {
        std::cout << current_ptr->getItem() << std::endl;
        current_ptr = current_ptr->getPrevious();
    }
}

template<typename ItemType>
DoublyLinkedList<ItemType> DoublyLinkedList<ItemType>::interleave(const DoublyLinkedList<ItemType> &a_list) {
    return DoublyLinkedList<ItemType>();
}

template<typename ItemType>
DoubleNode<ItemType> *DoublyLinkedList<ItemType>::getTailPtr() const {
    return tail_;
}


