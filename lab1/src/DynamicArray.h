#pragma once

class DynamicArray {
private:
    int* array;
    int size;
public:
    DynamicArray(int size, int initValue);

    ~DynamicArray() {
        delete[] array;
    }


    DynamicArray(const DynamicArray& other);

    // accessors
    const int* getArray() const {
        return array;
    }

    int getSize() const {
        return size;
    }
};