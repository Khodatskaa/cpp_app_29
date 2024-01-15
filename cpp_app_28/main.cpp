#include "Queue.h"

int main() {
    Queue queue(5);

    cout << "Is queue empty? " << (queue.IsEmpty() ? "Yes" : "No") << endl;

    queue.Enqueue(10);
    queue.Enqueue(20);
    queue.Enqueue(30);

    cout << "Is queue full? " << (queue.IsFull() ? "Yes" : "No") << endl;

    cout << "Queue elements: ";
    queue.Show();

    cout << "Dequeue: " << queue.Dequeue() << endl;

    cout << "Queue elements after dequeue: ";
    queue.Show();

    return 0;
}

