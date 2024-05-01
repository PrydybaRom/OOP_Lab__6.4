#pragma once
#include <iostream>

template <typename T, int MAX_SIZE>
class CircularQueue {
private:
    T elements[MAX_SIZE];
    int front;
    int rear;
    int count;

public:
    CircularQueue() : front(0), rear(0), count(0) {}

    // Add
    void enqueue(const T& item);

    // Delete
    T dequeue();

    // Cheack
    bool isEmpty() const;

   // Print
    void print() const;
};



