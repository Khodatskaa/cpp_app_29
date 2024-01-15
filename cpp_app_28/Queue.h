#ifndef QUEUE_H
#define QUEUE_H

#include <iostream>
using namespace std;

class Queue {
private:
    int* arr;
    int front, back, capacity, size;

public:
    Queue(int capacity);
    ~Queue();

    bool IsEmpty() const;
    bool IsFull() const;
    void Enqueue(int value);
    int Dequeue();
    void Show() const;
};

#endif 
