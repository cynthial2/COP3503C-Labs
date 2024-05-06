// COP3503C: Lab 3 (ABQ.h)
// Array-Based Queue (first in, first out)
// Last Edited: 10/3/22

#include <iostream>
#pragma once

template <typename T>
class ABQ {

    float scale_factor = 2.0f;
    int size;
    int max_capacity;
    T* data = nullptr;

    void Set(const ABQ &d);

public:
    // Constructors
    ABQ();
    ABQ(int capacity);

    // Big Three
    ABQ(const ABQ &d);
    ABQ &operator=(const ABQ &d);
    ~ABQ();

    // Public class member functions
    void enqueue(T data);
    T dequeue();
    T peek();
    unsigned int getSize();
    unsigned int getMaxCapacity();
    T* getData();

    //void Print();
};

/// IMPLEMENTATION BELOW ///

// How to copy data over?
template <typename T>
void ABQ<T>::Set(const ABQ &d) {
    // Copy data
    this->max_capacity = d.max_capacity;
    this->size = d.size;
    this->scale_factor = d.scale_factor;

    // Deep copy: new array > copy data from array
    data = new int[max_capacity];
    for (int i = 0; i < size; ++i) {
        data[i] = d.data[i];
    }
}

// Constructors
template <typename T>
ABQ<T>::ABQ() {
    size = 0;
    max_capacity = 1;
    data = new T[max_capacity];
}
template <typename T>
ABQ<T>::ABQ(int capacity) {
    size = 0;
    max_capacity = capacity;
    data = new T[max_capacity];
}

// Copy Constructor
template <typename T>
ABQ<T>::ABQ(const ABQ &d) {
    Set(d);
}

// Copy Assignment Operator
template <typename T>
ABQ<T>& ABQ<T>::operator=(const ABQ &d) {
    // delete old array
    delete[] data;
    Set(d);
    return *this;
}

// Destructor
template <typename T>
ABQ<T>::~ABQ() {
    // delete old array
    delete[] data;
}

// Public class member functions
template <typename T>
void ABQ<T>::enqueue(T num) {
    // check if full > resize if necessary
    if (size == max_capacity) {
        // create new array
        max_capacity *= scale_factor;
        T* tempArray = new T[max_capacity];
        // copy stuff over
        for (int i = 0; i < size; ++i) {
            tempArray[i] = data[i];
        }
        // add new item
        tempArray[size] = num;
        size += 1;
        // delete old array (prevent memory leaks)
        delete[] data;
        // redirect old array pointer to new array
        data = tempArray;
    }
    else {
        data[size] = num;
        size += 1;
    }
}

template <typename T>
T ABQ<T>::dequeue() {
    // check if empty > throw runtime_error if necessary
    if (size == 0) {
        throw std::runtime_error("An error has occurred.");
    }
    // check if resize is necessary > get resized capacity if so
    if ((float)(size-1)/max_capacity < 1/scale_factor) {
        max_capacity /= scale_factor;
    }
    //create new array
    T* tempArray = new T[max_capacity];
    // copy stuff over (minus first element)
    for (int i = 0; i < size-1; ++i) {
        tempArray[i] = data[i+1];
    }
    T deleted_value = data[0];
    size -= 1;
    // delete old array (prevent memory leaks)
    delete[] data;
    // redirect old array pointer to new array
    data = tempArray;
    // return removed item
    return deleted_value;
}

template <typename T>
T ABQ<T>::peek() {
    // check if empty > throw runtime_error if necessary
    if (size == 0) {
        throw std::runtime_error("An error has occurred.");
    }
    // return first(top) item
    return data[0];
}

template <typename T>
unsigned int ABQ<T>::getSize() {
    return size;
}

template <typename T>
unsigned int ABQ<T>::getMaxCapacity() {
    return max_capacity;
}

template <typename T>
T* ABQ<T>::getData() {
    return data;
}

/*
template <typename T>
void ABQ<T>::Print() {
    for (i = 0; i < size; ++i) {
        std::cout << data[i] << " ";
    }
    std::cout << "\nfirst value: " << peek() << std::endl;
}
*/