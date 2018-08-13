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
	To insert the node at end, we need to go to the tail node and connect our tail
	node to new node. Also, we need to connect the new node to head. Follow below 
	Steps:

	- Make a newNode and currentNode
	- Traverse until the end is reached
	- Connect the newNode to head
	- Connect the end node to newNode

*/

void insertAtEnd(Node **head, int data) {
	Node *newNode, *currentNode;

	traverse(*head);
//  Initialize newNode
	newNode = new Node();
	newNode -> data = data;
//  Keep track of current node
	currentNode = *head;
//  Go to the end node
	while(currentNode -> next != (*head))
		currentNode = currentNode -> next;
//  Connect the newNode to head
	newNode -> next = *head;
//  Connect the end node to newNode	
	currentNode -> next = newNode;

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

	insertAtEnd(&head, 0);

	return 0;
}