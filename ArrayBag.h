/*
 * Header file for an array-based implementation of the ADT bag.
 * @file ArraBag.h
 */

/* 
 * File:   ArrayBag.h
 * Author: Arman B.
 *
 * Created on September 9, 2019, 8:58 PM
 */

#ifndef ARRAYBAG_H
#define ARRAYBAG_H
#include "BagInterface.h"

template <class ItemType>
class ArrayBag : public BagInterface<ItemType>
{
private:
    static const int DEFAULT_CAPACITY = 6; // Small size to test for a full bag.
    ItemType items[DEFAULT_CAPACITY]; // Array of bag items.
    int itemCount; // Current count of bag items.
    int maxItems; // Max capacity of the bag.
    
    // Returns either the index of the element in the array items that contains
    // the given target or -1, if the array does not contein the target.
    int getIndexOf(const ItemType& target) const;

public:
    ArrayBag();
    int getCurrentSize() const;
    bool isEmpty() const;
    bool add(const ItemType& newEntry);
    bool remove(const ItemType& anEnry);
    void clear();
    bool contains(const ItemType& anEntry) const;
    int getFrequencyOf(const ItemType& anEntry) const;
    vector<ItemType> toVector() const;
};
#include "ArrayBag.cpp"
#endif /* ARRAYBAG_H */
