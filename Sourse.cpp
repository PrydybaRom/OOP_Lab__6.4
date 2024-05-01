
#include "Queue.cpp"

int main() {
    const int MAX_SIZE = 5; 

    CircularQueue<int, MAX_SIZE> intQueue;
    std::cout << "Is queue empty? " << (intQueue.isEmpty() ? "Yes" : "No") << std::endl;

    intQueue.enqueue(10);
    intQueue.enqueue(20);
    intQueue.enqueue(30);
    intQueue.enqueue(40);

    intQueue.print();

    std::cout << "Is queue empty? " << (intQueue.isEmpty() ? "Yes" : "No") << std::endl;

    std::cout << "Dequeue: " << intQueue.dequeue() << std::endl;
    std::cout << "Dequeue: " << intQueue.dequeue() << std::endl;
    std::cout << "Dequeue: " << intQueue.dequeue() << std::endl;
    std::cout << "Dequeue: " << intQueue.dequeue() << std::endl;

    std::cout << "Is queue empty? " << (intQueue.isEmpty() ? "Yes" : "No") << std::endl;

    return 0;
}
