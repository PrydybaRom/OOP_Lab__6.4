#include "Queue.h"

template <typename T, int MAX_SIZE>

// Add
void CircularQueue<T, MAX_SIZE>::enqueue(const T& item) {
    if (count == MAX_SIZE) {
        std::cerr << "Queue is full. Cannot enqueue.\n";
        return;
    }

    elements[rear] = item;
    rear = (rear + 1) % MAX_SIZE;
    count++;
    std::cout << "Enqueued: " << item << std::endl;
}

// Delete
template <typename T, int MAX_SIZE>
T CircularQueue<T, MAX_SIZE>::dequeue() {
    if (isEmpty()) {
        std::cerr << "Queue is empty. Cannot dequeue.\n";
        exit(1);
    }
    T item = elements[front];
    front = (front + 1) % MAX_SIZE;
    count--;
    return item;
}


// Cheack
template <typename T, int MAX_SIZE>
bool CircularQueue<T, MAX_SIZE>::isEmpty() const {
    return count == 0;
}

template <typename T, int MAX_SIZE>
void CircularQueue<T, MAX_SIZE>::print() const {
    if (isEmpty()) {
        std::cout << "Queue is empty.\n";
        return;
    }
    std::cout << "Queue elements: ";
    int i = front;
    int numPrinted = 0;
    while (numPrinted < count) {
        std::cout << elements[i] << " ";
        i = (i + 1) % MAX_SIZE;
        numPrinted++;
    }
    std::cout << std::endl;
}

