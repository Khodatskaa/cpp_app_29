#include "Priority.h"

int main() {
    PriorityQueue priorityQueue;

    std::cout << "Is priority queue empty? " << (priorityQueue.IsEmpty() ? "Yes" : "No") << std::endl;

    priorityQueue.InsertWithPriority(10, 2);
    priorityQueue.InsertWithPriority(20, 1);
    priorityQueue.InsertWithPriority(30, 3);

    std::cout << "Is priority queue full? " << (priorityQueue.IsFull() ? "Yes" : "No") << std::endl;

    std::cout << "Priority queue elements: " << std::endl;
    priorityQueue.Show();

    std::cout << "Peek highest priority element: " << priorityQueue.Peek() << std::endl;

    std::cout << "Pull highest priority element: " << priorityQueue.PullHighestPriorityElement() << std::endl;

    std::cout << "Priority queue elements after pulling: " << std::endl;
    priorityQueue.Show();

    return 0;
}