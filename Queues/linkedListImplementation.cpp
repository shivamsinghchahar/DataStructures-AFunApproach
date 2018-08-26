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

/*
	In this implementation we are making linked list to behave like a queue. we make
	two reference variables 'front' and 'rear' to keep track of head and tail 
	respectively. The reason we make a 'rear' reference is that we have to perform
	the insertion operation in O(1) time and to do that we need to have a reference
	to tail else it would take O(n) time.
*/

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
	// Make a temporary node to keep track of Nodes
	Node *temp = Q -> front;
	
	// if Queue is empty
	if(Q -> front == NULL)
		return 0;
 	
 	// To keep track of size
	int sz = 1;
	// Traverse till 'rear' node is reached
	while(temp != Q -> rear) {
		// Move forward
		temp = temp -> next;
		sz++;
	}
	// return size
	return sz;
}

void EnQueue(Queue *Q, int data) {
	// Make a new node
	Node *newNode = new Node();
	// Insert data and make it point to NULL
	newNode -> data = data;
	newNode -> next = NULL;
	// If Queue is empty
	if (Q->front == NULL && Q->rear == NULL) 
	{
		// Make front and rear equal. since we have only one element
		Q->front = Q->rear = newNode;
		return;
	}
	// else, make the rear node point to newNode
	Q -> rear -> next = newNode;
	// Make rear node equal to newNode
	Q -> rear = newNode;
}

int DeQueue(Queue *Q) {
	// To store the data that we will delete
	int data = 0;
	// To keep track of the front
	Node *temp = Q -> front;

	data = Q -> front -> data;
	// Move the front to next element in queue
	Q -> front = Q -> front -> next;
	// Delete the temp node
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