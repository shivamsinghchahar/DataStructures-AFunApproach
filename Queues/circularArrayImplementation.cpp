#include <bits/stdc++.h>

using namespace std;

struct Queue {
	int front, rear;
	int size;
	int *array;
};

Queue *createQueue(int size) {
	Queue *Q = new Queue();

	Q -> size = size;
	Q -> front = Q -> rear = -1;
	Q -> array = new int[size];

	return Q;
}

bool isEmpty(Queue *Q) {
	return (Q -> front == -1);
}

bool isFull(Queue *Q) {
	return ((Q -> rear + 1) % Q -> size == Q -> front);
}

int Size(Queue *Q) {
	return (Q -> size - Q -> front + Q -> rear + 1) % Q -> size;
}

void EnQueue(Queue *Q, int data) {
	
	Q -> rear = (Q -> rear + 1) % Q -> size;
	Q -> array[Q -> rear] = data;
	
	if(Q -> front == -1) Q -> front = Q -> rear;

}

int DeQueue(Queue *Q) {
	int data = 0;

	data = Q -> array[Q -> front];
	if(Q -> front == Q -> rear)
		Q -> front = Q -> rear = -1;
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
