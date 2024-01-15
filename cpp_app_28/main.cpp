#include "PrintQueue.h"

int main() {
	PrintQueue pq;

	pq.enqueue("John", 1);
	pq.enqueue("Jane", 2);
	pq.enqueue("Joe", 3);
	pq.enqueue("Jill", 4);
	pq.enqueue("Jack", 5);
	pq.enqueue("Jen", 6);
	pq.enqueue("James", 7);
	pq.enqueue("Jenny", 8);
	pq.enqueue("Jared", 9);
	pq.enqueue("Jasmine", 10);

	pq.displayQueue();

	pq.dequeue();
	pq.dequeue();
	pq.dequeue();
	pq.dequeue();
	pq.dequeue();
	pq.dequeue();
	pq.dequeue();
}