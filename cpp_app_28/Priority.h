#ifndef PRIORITY_H
#define PRIORITY_H

#include <iostream>

class PriorityQueue {
private:
    struct Node {
        int data;
        int priority;
        Node* next;
    };

    Node* front;

public:
    PriorityQueue();
    ~PriorityQueue();

    bool IsEmpty() const;
    bool IsFull() const;

    void InsertWithPriority(int value, int priority);
    int PullHighestPriorityElement();
    int Peek() const;
    void Show() const;
};

#endif 
