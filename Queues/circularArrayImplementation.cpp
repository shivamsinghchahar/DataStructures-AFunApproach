#include <bits/stdc++.h>

using namespace std;

struct Queue {
	int front, rear;
	int size;
	int *array;
};


/*Create a queue of given size*/
Queue *createQueue(int size) {
	Queue *Q = new Queue();

	Q -> size = size;
	// Make the front and rear -1 to tell that the queue is empty
	Q -> front = Q -> rear = -1;
	// Make an array with size
	Q -> array = new int[size];

	return Q;
}

bool isEmpty(Queue *Q) {
	// If front is -1 it means queue is empty
	return (Q -> front == -1);
}

bool isFull(Queue *Q) {
	// If rear and front are the same it means that queue is full
	return ((Q -> rear + 1) % Q -> size == Q -> front);
}

int Size(Queue *Q) {
	return (Q -> size - Q -> front + Q -> rear + 1) % Q -> size;
}

void EnQueue(Queue *Q, int data) {
	// Add the element at the end of queue
	Q -> rear = (Q -> rear + 1) % Q -> size;
	// Put data into the array 
	Q -> array[Q -> rear] = data;
	// If queue was empty earlier, now it contains only one element. So, front and rear are equal
	if(Q -> front == -1) Q -> front = Q -> rear;
}

int DeQueue(Queue *Q) {
	int data = 0;

	data = Q -> array[Q -> front];
	// If Queue had only one element
	if(Q -> front == Q -> rear)
		Q -> front = Q -> rear = -1;
	// else Increment front
	else	Q -> front = (Q -> front + 1) % Q -> size;

	return data;
}

int main() {
	Queue *Q = createQueue(10);
	
	EnQueue(Q, 1);
	EnQueue(Q, 2);
	EnQueue(Q, 3);
	EnQueue(Q, 4);
	
	cout << DeQueue(Q) << endl;
	cout << isEmpty(Q) << endl;
	cout << Size(Q) << endl;
}
