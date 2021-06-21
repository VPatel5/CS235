using namespace std;

int main() {
    return 0;
}

class Polygon {

public:
    Polygon(int height, int width) : height_{height},  width_{width} { }

    int getHeight() {
        return height_;
    }

    int getWidth() {
        return width_;
    }

    double area() {
        return width_ * height_;
    }
private:
    int height_;
    int width_;
};

class Triangle : public Polygon {
public:
    Triangle(int base, int height) : Polygon(height, base) {}

    @Override
    double area() {
        return (width_ * height_)/2;
    }
};

class Rectangle : public Polygon {
public:
    Rectangle(int length, int width) : Polygon(length, width) {}

    @Override
    double area() {
        return (width_ * height_);
    }
};

template<typename ItemType>
bool ArrayBag<ItemType>::remove(const ItemType& an_entry) {
    int located_index = getIndexOf(an_entry);
    bool can_remove_item = !isEmpty() && (located_index > -1) && located_index < item_count_;
    if (can_remove_item) {
        item_count_--;
        for (int j=i; j<item_count_; j++)
            arr[j] = arr[j+1];
    }
    return can_remove_item;
}


template<typename ItemType>
bool ArrayBag<ItemType>::remove(int located_index) {
    bool can_remove_item = !isEmpty() && (located_index > -1) && located_index < item_count_;
    if (can_remove_item) {
        item_count_--;
        for (int j=i; j<item_count_; j++)
            arr[j] = arr[j+1];
    }
    return can_remove_item;
}

bool ArrayBag<ItemType>::removeRandom(const ItemType& an_entry) {
    return remove((rand() % item_count_));
}

template<typename ItemType>
bool ArrayBag<ItemType>::add(const ItemType&
new_entry)
{
    bool has_room_to_add = (item_count_ <
                            DEFAULT_CAPACITY) && getIndexOf(new_entry) == -1;
    if (has_room_to_add)
    {
        items_[item_count_] = new_entry;
        item_count_++;
    } // end if
    return has_room_to_add;
} // end add

template<typename ItemType>
ArrayBag<ItemType>::ArrayBag(ItemType items, int item_count): items_{items}, item_count_{item_count}
{
} // end default constructor

bool LinkedBag<ItemType>::remove(const ItemType& an_entry) {

    Node<ItemType>* to_remove = getPointerTo(entry);
    Node<ItemType>* current = head_;
    Node<ItemType>* prev = nullptr;

    // Not in list
    if (to_remove == nullptr) return false;

    // Remove head
    if (to_remove == head_) {
        head_ = to_remove->getNext();
    }
        // Remove at specific position
    else {


        while (current != nullptr ) {
            if (current->getItem() == an_entry) {
                prev = current;
                current = current->next;
                break;
            }
        }
    }

    prev->next = current->next;

    delete to_remove;
    to_remove = nullptr;

    current_size_--;
    return true;
}

template<class ItemType>
bool LinkedList<ItemType>::insert(int position, const ItemType& entry){

    if(head_ == nullptr){
        Node<ItemType>* new_node_ = new Node<ItemType>(entry);
        head_ = new_node_;
        itemCount = 1;
        return true;
    }
    bool can_insert = (position >=1 ) && ( position <= itemCount + 1 );

    if(can_insert){
        Node<ItemType>* new_node_ptr = new Node<ItemType>(entry);

        if(position == 1){
            new_node_ptr->setNext(headPtr);
            head_ = new_node_ptr;
        }
        else{
            Node<ItemType>* prev = getNodeAt(position - 1);
            new_node_ptr->setNext(prev->getNext());
            prev->setNext(new_node_ptr);
        }
        item_count++;
    }
    return can_insert;
}

//Design an application that maintains dat for a simple social network. Each person in the
//network should have a profile that contains the person’s name, optional image, current
//        status, and a list of friends. Your application should allow a user to join the network, leave
//the network, create a profile, modify the profile, search for other profiles and add friends.

class Network {
private:
    User* users;
public:
    bool join(User user);
    bool leave(User user);
    bool createUser(User user);
    bool deleteUser(User user);
    User getUserByName(String name);
};

class User {
private:
    Image image;
    std::string name;
    std::string status;
    DoubleLinkedList<User> friends
public:
    User(std::string name);
    std::string getName();
    std::string getStatus();
    Image getImage();
    void setName(std::string name);
    void setStatus(std::string status);
    void setImage(Image image);
    bool addFriend(User user);
    bool removeFriend(User user);

            };