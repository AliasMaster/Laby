#include "DynamicArray.h"
#include <iostream>

DynamicArray::DynamicArray(const DynamicArray& other) : size(other.size), array(nullptr) {
    if(other.size > 0) {
        array = new int[size];
        for(int i = 0; i < size; ++i) {
            array[i] = other.array[i];
        }
    }
}

DynamicArray::DynamicArray(int size, int initValue) : size(size), array(nullptr) {
    if (size > 0) {
        array = new int[size];
        for(int i = 0; i < size; ++i) {
            array[i] = initValue;
        }
    }
}