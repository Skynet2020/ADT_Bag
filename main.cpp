/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Arman B.
 * Created on September 9, 2019, 8:44 PM
 */

#include <iostream>
#include <string>
#include "ArrayBag.h"
using namespace std;

/*
 * 
 */

// Displays content of the bag:
void displayBag(ArrayBag<string> &bag){
    cout << "The bag contains " << bag.getCurrentSize()
            << " items:" << endl;
    vector<string> bagItems = bag.toVector();
    
    int numberOfEntries = bagItems.size();
    for (int i=0; i < numberOfEntries; i++){
        cout << bagItems[i] << " ";
    }
}

void bagTester(ArrayBag<string> &bag){
    cout << "isEmpty: returns " << bag.isEmpty()
            << "; should be 1 (true)" << endl;
    displayBag(bag);
    
    string items[] = {"one", "two", "three", "four", "five", "one"};
    cout << "Add 6 items to the bag: " << endl;
    for (int i = 0; i<6; i++){
        bag.add(items[i]);
    } // end for
    
    displayBag(bag);
    cout << "isEmpty returns: " << bag.isEmpty()
            << "; should be 0 (false)" << endl;
    cout << "getCurrentSize: returns " << bag.getCurrentSize()
            << "; should be 6" << endl;
    cout << "Try to add another entry: add(\"extra\") returns "
            << bag.add("extra") << endl;
} // end bagTester

int main(int argc, char** argv) {
    
    ArrayBag<string> bag;
    cout << "Testing the Array-Based Bag: " << endl;
    cout << "The initial bag is empty." << endl;
    bagTester(bag);
    cout << "All done!" << endl;
    
    return 0;
}
