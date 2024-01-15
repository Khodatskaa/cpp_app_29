#include "Queue.h"

Queue::Queue(int capacity) {
	this->capacity = capacity;
	arr = new int[capacity];
	front = back = size = 0;
}

Queue::~Queue() {
	delete[] arr;
}

bool Queue::IsEmpty() const {
	return size == 0;
}

bool Queue::IsFull() const {
	return size == capacity;
}

void Queue::Enqueue(int value) {
	if (IsFull()) {
		cout << "Queue is full" << endl;
		return;
	}

	arr[back] = value;
	back = (back + 1) % capacity;
	size++;
}

int Queue::Dequeue() {
	if (IsEmpty()) {
		cout << "Queue is empty" << endl;
		return -1;
	}

	int value = arr[front];
	front = (front + 1) % capacity;
	size--;
	return value;
}

void Queue::Show() const {
	if (IsEmpty()) {
		cout << "Queue is empty" << endl;
		return;
	}

	cout << "Queue: ";
	for (int i = front; i < front + size; i++) {
		cout << arr[i % capacity] << " ";
	}
	cout << endl;
}
