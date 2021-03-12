#include <iostream>
#include "Garage.hpp"

template <typename ItemType>
Garage<ItemType>::Garage(size_t capacity): items_{new ItemType[capacity]}, spaces_occupied_{0}, capacity_{capacity}
{

}

template<typename ItemType>
size_t Garage<ItemType>::getCurrentSize() const {
    return spaces_occupied_;
}

template<typename ItemType>
bool Garage<ItemType>::isEmpty() const {
    return spaces_occupied_ == 0;
}

template<typename ItemType>
bool Garage<ItemType>::add(const ItemType &to_add) {
    if (isFull()) return false;

    items_[spaces_occupied_] = to_add;

    spaces_occupied_++;
    return true;
}

template<typename ItemType>
bool Garage<ItemType>::remove(const ItemType &to_remove) {
    if (isEmpty()) return false;

    int index = getIndexOf(to_remove);
    if (index == -1) return false;

    items_[index] = items_[spaces_occupied_];
    spaces_occupied_--;
}

template<typename ItemType>
bool Garage<ItemType>::swap(ItemType in, ItemType out) {

    remove(out);

    return add(in);
}

template<typename ItemType>
int Garage<ItemType>::getFrequencyOf(const ItemType &an_entry) const {

    int index = 0;
    int counter = 0;

    while (index != spaces_occupied_)
    {
        if (items_[index] == an_entry) {
            counter++;
        }
        index++;
    }

    return counter;
}

template<typename ItemType>
std::vector <ItemType> Garage<ItemType>::toVector() const {
    std::vector<ItemType> garage;

    for (int i = 0; i < spaces_occupied_; i++) {
        garage.push_back(items_[i]);
    }

    return garage;
}

template<typename ItemType>
bool Garage<ItemType>::isFull() const {
    return spaces_occupied_ == capacity_;
}

template<typename ItemType>
void Garage<ItemType>::clear() {
    spaces_occupied_ = 0;
}

template<typename ItemType>
bool Garage<ItemType>::contains(const ItemType &an_entry) const {
    return getIndexOf(an_entry) != -1;
}

template<typename ItemType>
void Garage<ItemType>::display() const {
    for (int i = 0; i < spaces_occupied_; i++) {
        ItemType type = items_[i];
        if (instanceof<Object>(type)) {
            dynamic_cast<Object>(type).getManufacturer();
        }
    }
}

template<typename ItemType>
void Garage<ItemType>::operator+=(const Garage <ItemType> &a_garage) {

}

template<typename ItemType>
void Garage<ItemType>::operator-=(const Garage <ItemType> &a_garage) {

}

template<typename ItemType>
void Garage<ItemType>::operator/=(const Garage <ItemType> &a_garage) {

}

template<typename ItemType>
int Garage<ItemType>::getIndexOf(const ItemType &target) const {

    int index = 0;
    while (index != spaces_occupied_)
    {
        if (items_[index] == target) {
            return index;
        }
        index++;
    }

    return -1;
}
