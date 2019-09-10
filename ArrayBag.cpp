/*
 * Implementation file for the clss ArrayBag.
 * @file ArrayBag.cpp
 */
#include "ArrayBag.h"

// Constructor:
template <typename ItemType>
ArrayBag<ItemType>::ArrayBag(): itemCount(0), maxItems(DEFAULT_CAPACITY){}

// Adds an element to the array of values:
template <typename ItemType>
bool ArrayBag<ItemType>::add(const ItemType& newEntry){
    bool hasRoomToAdd = (itemCount < maxItems);
    if (hasRoomToAdd){
        items[itemCount] = newEntry;
        itemCount++;
    }
    return hasRoomToAdd;
}

// Transfers array content to a vector:
template <typename ItemType>
vector<ItemType> ArrayBag<ItemType>::toVector() const {
    vector<ItemType> bagContents;
    for (int i = 0; i < itemCount; i++){
        bagContents.push_back(items[i]);
    }
    return bagContents;
}

// Getter for the current size of the bag:
template <typename ItemType>
int ArrayBag<ItemType>::getCurrentSize() const{
    return itemCount;
}

// Checks if the bag is empty (i.e. the count of the elements == 0):
template <typename ItemType>
bool ArrayBag<ItemType>::isEmpty() const{
    return itemCount == 0;
}

// Stub - incomplete definition of a method (to make the syntax checker happy):
template <typename ItemType>
bool ArrayBag<ItemType>::remove(const ItemType& anEntry){
    cout << "Stub remove() method was called" << endl;
    return false;
}

template <typename ItemType>
void ArrayBag<ItemType>::clear(){
    // STUB
    cout << "Stub clear() method was called" << endl;
}
template <typename ItemType>
int ArrayBag<ItemType>::getFrequencyOf(const ItemType& anEntry) const{
    cout << "Stub fetFrequencyOf() was called" << endl;
    return 0;
}
/***** END OF STUB BLOCK *****/

