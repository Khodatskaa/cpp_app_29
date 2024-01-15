#include "Priority.h"

PriorityQueue::PriorityQueue() {
	front = nullptr;
}

PriorityQueue::~PriorityQueue() {
	Node* temp;
	while (front != nullptr) {
		temp = front;
		front = front->next;
		delete temp;
	}
}

bool PriorityQueue::IsEmpty() const {
	return front == nullptr;
}

bool PriorityQueue::IsFull() const {
	Node* newNode = new Node;
	if (newNode == nullptr) {
		return true;
	}
	delete newNode;
	return false;
}

void PriorityQueue::InsertWithPriority(int value, int priority) {
	if (IsFull()) {
		std::cout << "Priority queue is full.\n";
		return;
	}

	Node* newNode = new Node;
	newNode->data = value;
	newNode->priority = priority;

	if (IsEmpty()) {
		front = newNode;
		newNode->next = nullptr;
	}
	else {
		Node* temp = front;
		Node* prev = nullptr;
		while (temp != nullptr && temp->priority >= priority) {
			prev = temp;
			temp = temp->next;
		}
		if (prev == nullptr) {
			newNode->next = front;
			front = newNode;
		}
		else {
			prev->next = newNode;
			newNode->next = temp;
		}
	}
}

int PriorityQueue::PullHighestPriorityElement() {
	if (IsEmpty()) {
		std::cout << "Priority queue is empty.\n";
		return -1;
	}

	Node* temp = front;
	int value = temp->data;
	front = front->next;
	delete temp;
	return value;
}

int PriorityQueue::Peek() const {
	if (IsEmpty()) {
		std::cout << "Priority queue is empty\n";
		return -1;
	}

	return front->data;
}

void PriorityQueue::Show() const {
	if (IsEmpty()) {
		std::cout << "Priority queue is empty\n";
		return;
	}

	Node* temp = front;
	while (temp != nullptr) {
		std::cout << temp->data << " ";
		temp = temp->next;
	}
	std::cout << "\n";
}
