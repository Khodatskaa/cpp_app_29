#include "Priority.h"

template <typename T>
PriorityQueue<T>::PriorityQueue() {
	front = nullptr;
}

template <typename T>
PriorityQueue<T>::~PriorityQueue() {
	Node* temp;

	while (front != nullptr) {
		temp = front;
		front = front->next;
		delete temp;
	}
}

template <typename T>
bool PriorityQueue<T>::IsEmpty() const {
	return front == nullptr;
}

template <typename T>
bool PriorityQueue<T>::IsFull() const {
	Node* temp = new Node;

	if (temp == nullptr) {
		return true;
	}

	delete temp;
	return false;
}

template <typename T>
void PriorityQueue<T>::InsertWithPriority(T value, int priority) {
	Node* newNode = new Node;
	newNode->data = value;
	newNode->priority = priority;

	if (IsEmpty() || priority < front->priority) {
		newNode->next = front;
		front = newNode;
	}
	else {
		Node* temp = front;

		while (temp->next != nullptr && temp->next->priority <= priority) {
			temp = temp->next;
		}

		newNode->next = temp->next;
		temp->next = newNode;
	}
}

template <typename T>
T PriorityQueue<T>::PullHighestPriorityElement() {
	if (IsEmpty()) {
		std::cout << "Priority queue is empty." << std::endl;
		return T();
	}

	Node* temp = front;
	T value = front->data;
	front = front->next;
	delete temp;

	return value;
}

template <typename T>
T PriorityQueue<T>::Peek() const {
	if (IsEmpty()) {
		std::cout << "Priority queue is empty." << std::endl;
		return T();
	}

	return front->data;
}

template <typename T>
void PriorityQueue<T>::Show() const {
	if (IsEmpty()) {
		std::cout << "Priority queue is empty." << std::endl;
		return;
	}

	Node* temp = front;

	while (temp != nullptr) {
		std::cout << temp->data << " ";
		temp = temp->next;
	}

	std::cout << std::endl;
}