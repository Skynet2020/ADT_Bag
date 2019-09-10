/* 
 * File:   BagInterface.h
 * Author: Arman B.
 *
 * Created on September 9, 2019, 8:45 PM
 */

#ifndef BAGINTERFACE_H
#define BAGINTERFACE_H

#include <vector>
using namespace std;

template <class ItemType>
class BagInterface
{
    public:
        virtual int getCurrentSize() const = 0;
        virtual bool isEmpty() const = 0;
        virtual bool add(const ItemType& newEntry) = 0;
        virtual bool remove(const ItemType& anEntry) = 0;
        virtual void clear() = 0;
        virtual int getFrequencyOf(const ItemType& anEntry) = 0;
        virtual bool contains(const ItemType& anEntry) const =0;
        virtual vector<ItemType> toVector() const = 0;
        virtual ~BagInterface(){};
};
#endif /* BAGINTERFACE_H */

