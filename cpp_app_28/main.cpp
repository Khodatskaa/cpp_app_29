#include "Priority.h"

int main() {
    PriorityQueue<int> intPriorityQueue;

    std::cout << "Is priority queue empty? " << (intPriorityQueue.IsEmpty() ? "Yes" : "No") << std::endl;

    intPriorityQueue.InsertWithPriority(10, 2);
    intPriorityQueue.InsertWithPriority(20, 1);
    intPriorityQueue.InsertWithPriority(30, 3);

    std::cout << "Is priority queue full? " << (intPriorityQueue.IsFull() ? "Yes" : "No") << std::endl;

    std::cout << "Priority queue elements: " << std::endl;
    intPriorityQueue.Show();

    std::cout << "Peek highest priority element: " << intPriorityQueue.Peek() << std::endl;

    std::cout << "Pull highest priority element: " << intPriorityQueue.PullHighestPriorityElement() << std::endl;

    std::cout << "Priority queue elements after pulling: " << std::endl;
    intPriorityQueue.Show();

    return 0;
}
