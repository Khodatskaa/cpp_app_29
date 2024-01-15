#ifndef PRIORITY_H
#define PRIORITY_H

#include <iostream>

template <typename T>
class PriorityQueue {
private:
    struct Node {
        T data;
        int priority;
        Node* next;
    };

    Node* front;

public:
    PriorityQueue();
    ~PriorityQueue();

    bool IsEmpty() const;
    bool IsFull() const;

    void InsertWithPriority(T value, int priority);
    T PullHighestPriorityElement();
    T Peek() const;
    void Show() const;
};

#endif 
