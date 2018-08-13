#include <bits/stdc++.h>

using namespace std;

struct Node
{
	int data;
	Node *next;
};

void traverse(Node *head) {
	Node *currentNode;

	currentNode = head;

	do {
		cout << currentNode -> data << endl;
		currentNode = currentNode -> next;
	}
	while(currentNode != head);
}

/*
	To insert the node at front, we have to traverse until we reach tail and connect
	connect it to our new node which is at front. follow below steps:

	- Make a new node and a node to keep track of current node
	- Reach the tail node using the currentNode
	- Make the newNode point to head
	- connect the currentNode to newNode
	- Move the head pointer to newNode
*/

void insertAtFront(Node **head, int data) {
	Node *newNode, *currentNode;

	traverse(*head);
//  point to head 
	currentNode = *head;
//  initialize the newNode
	newNode = new Node();
	newNode -> data = data;	
// 	Reach the tail node
	while(currentNode -> next != (*head))
		currentNode = currentNode -> next;	

//  connect the newNode to head
	newNode -> next = *head;
//  Connect the tail node(currentNode) to newNode
	currentNode -> next = newNode;
//  Move the head pointer to newNode
	*head = newNode;

	traverse(*head);
}

int main()
{
	Node *head, *second, *third, *tail;

	head = new Node();
	second = new Node();
	third = new Node();
	tail = new Node();

	head -> data = 1;
	head -> next = second;

	second -> data = 2;
	second -> next = third;

	third -> data = 3;
	third -> next = tail;

	tail -> data = 4;
	tail -> next = head;

	insertAtFront(&head, 0);

	return 0;
}