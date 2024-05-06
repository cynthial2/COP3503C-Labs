// COP3503C: Lab 3 (ABS.h)
// Array-Based Stack (last in, first out)
// Last Edited: 10/3/22

#include <iostream>
#pragma once

template <typename T>
class ABS {

    float scale_factor = 2.0f;
    int size;
    int max_capacity;
    T* data = nullptr;

    void Set(const ABS &d);

public:
    // Constructors
    ABS();
    ABS(int capacity);

    // Big Three
    ABS(const ABS &d);
    ABS& operator=(const ABS &d);
    ~ABS();

    // Public class member functions
    void push(T data);
    T pop();
    T peek();
    unsigned int getSize();
    unsigned int getMaxCapacity();
    T* getData();

    //void Print();
};

/// IMPLEMENTATION BELOW ///

// How to copy data over?
template <typename T>
void ABS<T>::Set(const ABS &d) {
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
ABS<T>::ABS() {
    size = 0;
    max_capacity = 1;
    data = new T[max_capacity];
}
template <typename T>
ABS<T>::ABS(int capacity) {
    size = 0;
    max_capacity = capacity;
    data = new T[max_capacity];
}

// Copy Constructor
template <typename T>
ABS<T>::ABS(const ABS &d) {
    Set(d);
}

// Copy Assignment Operator
template <typename T>
ABS<T>& ABS<T>::operator=(const ABS &d) {
    // delete old array
    delete[] data;
    Set(d);
    return *this;
}

// Destructor
template <typename T>
ABS<T>::~ABS() {
    // delete old array
    delete[] data;
}

// Public class member functions
template <typename T>
void ABS<T>::push(T num) {
    // check if full > resize if so > add new item to end
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
T ABS<T>::pop() {
    // check if empty > throw runtime_error if so
    if (size == 0) {
        throw std::runtime_error("An error has occurred.");
    }
    // check if resize is necessary > get resized capacity if so
    if ((float)(size-1)/max_capacity < 1/scale_factor) {
        max_capacity /= scale_factor;
    }
    //create new array
    T* tempArray = new T[max_capacity];
    // copy stuff over (minus last element)
    for (int i = 0; i < size-1; ++i) {
        tempArray[i] = data[i];
    }
    T deleted_value = data[size-1];
    size -= 1;
    // delete old array (prevent memory leaks)
    delete[] data;
    // redirect old array pointer to new array
    data = tempArray;
    // return removed item
    return deleted_value;
}

template <typename T>
T ABS<T>::peek(){
    // check if empty > throw runtime_error if so
    if (size == 0) {
        throw std::runtime_error("An error has occurred.");
    }
    // return end item (last added item)
    return data[size-1];
}

template <typename T>
unsigned int ABS<T>::getSize() {
    return size;
}

template <typename T>
unsigned int ABS<T>::getMaxCapacity(){
    return max_capacity;
}

template <typename T>
T* ABS<T>::getData() {
    return data;
}

/*
template <typename T>
void ABS<T>::Print() {
    for (i = 0; i < size; ++i) {
        std::cout << data[i] << " ";
    }
    std::cout << std::endl;
}
*/