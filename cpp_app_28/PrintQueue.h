#ifndef PrintQueue_h
#define PrintQueue_h

#include <iostream>
#include <ctime>

class PrintQueue {
public:
    PrintQueue();
    ~PrintQueue();

    void enqueue(const std::string& user, int priority);
    void dequeue();
    void displayQueue() const;

    void recordPrintStatistics(const std::string& user);

private:
    struct Node {
        std::string user;
        int priority;
        Node* next;
    };

    Node* front;
    Node* rear;

    struct StatisticsNode {
        std::string user;
        time_t time;
        StatisticsNode* next;
    };

    StatisticsNode* statisticsFront;

    void addToStatistics(const std::string& user);
};

#endif 
