#include "PrintQueue.h"

PrintQueue::PrintQueue() : front(nullptr), rear(nullptr), statisticsFront(nullptr) {}

PrintQueue::~PrintQueue() {
    while (front != nullptr) {
        Node* temp = front;
        front = front->next;
        delete temp;
    }

    while (statisticsFront != nullptr) {
        StatisticsNode* temp = statisticsFront;
        statisticsFront = statisticsFront->next;
        delete temp;
    }
}

void PrintQueue::enqueue(const std::string& user, int priority) {
    Node* newNode = new Node{ user, priority, nullptr };

    if (front == nullptr) {
        front = rear = newNode;
    }
    else {
        if (priority > front->priority) {
            newNode->next = front;
            front = newNode;
        }
        else {
            Node* current = front;

            while (current->next != nullptr && priority <= current->next->priority) {
                current = current->next;
            }

            newNode->next = current->next;
            current->next = newNode;

            if (newNode->next == nullptr) {
                rear = newNode;
            }
        }
    }
}

void PrintQueue::dequeue() {
    if (front == nullptr) {
        std::cout << "Print queue is empty.\n";
        return;
    }

    Node* temp = front;
    front = front->next;
    std::cout << "Printing: User " << temp->user << " (Priority: " << temp->priority << ")\n";
    delete temp;
}

void PrintQueue::displayQueue() const {
    if (front == nullptr) {
        std::cout << "Print queue is empty.\n";
        return;
    }

    std::cout << "Print Queue:\n";
    Node* current = front;
    while (current != nullptr) {
        std::cout << "User: " << current->user << " (Priority: " << current->priority << ")\n";
        current = current->next;
    }
}

void PrintQueue::recordPrintStatistics(const std::string& user) {
    addToStatistics(user);
}

void PrintQueue::addToStatistics(const std::string& user) {
    time_t currentTime;
    time(&currentTime);

    StatisticsNode* newNode = new StatisticsNode{ user, currentTime, nullptr };

    if (statisticsFront == nullptr) {
        statisticsFront = newNode;
    }
    else {
        newNode->next = statisticsFront;
        statisticsFront = newNode;
    }
}
