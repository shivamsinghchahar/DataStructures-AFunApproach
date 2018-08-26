#include <bits/stdc++.h>

using namespace std;

struct Node
{
	int data;
	Node *next;
};

struct Queue
{
	Node *front;
	Node *rear;
};

Queue *createQueue() {
	Queue *Q;

	Q = new Queue();

	Q -> front = Q -> rear = NULL;

	return Q;
}

bool isEmpty(Queue *Q) {
	return (Q -> front == NULL);
}

int size(Queue *Q) {
	Node *temp = Q -> front;

	if(Q -> front == NULL)
		return 0;

	int i = 1;
	while(temp != Q -> rear) {
		temp = temp -> next;
		i++;
	}

	return i;
}

void EnQueue(Queue *Q, int data) {
	Node *newNode = new Node();
	
	newNode -> data = data;
	newNode -> next = NULL;

	if (Q->front == NULL && Q->rear == NULL) 
	{
		Q->front = Q->rear = newNode;
		return;
	}

	Q -> rear -> next = newNode;
	Q -> rear = newNode;
}

int DeQueue(Queue *Q) {
	int data = 0;

	Node *temp = Q -> front;

	data = Q -> front -> data;
	Q -> front = Q -> front -> next;

	delete temp;

	return data; 
}

int main()
{
	Queue *Q = new Queue();
    
    cout << "Size before EnQueueing: " << size(Q) << endl;
	
	EnQueue(Q, 1);
	EnQueue(Q, 2);
	EnQueue(Q, 3);
	EnQueue(Q, 4);

	cout << "Deleted : " << DeQueue(Q) << endl;

	string s = (isEmpty(Q))?"Empty":"Not Empty";

	cout << "Queue is " << s << endl;
	
	cout << "Final size: " <<size(Q) << endl;
	return 0;
}