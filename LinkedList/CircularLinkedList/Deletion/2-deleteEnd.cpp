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
	To delete the node at end, we need to keep track of node that comes before the
	tail node and also the tail node, when we reach the node before tail node we can
	make it point to head and dispose the tail node :

	- Make a temporary node to keep track of node before tail and a node to keep track of
	  nodes while traversing
  	- Go to node before the tail node using tempNode and tail node using currentNode
  	- Make the tempNode point to head
  	- Dispose the tail node
*/

void deleteEnd(Node **head) {
	Node *tempNode = *head, *currentNode = *head;

	traverse(*head);
//  Go to tail node and node before tail node
	while(currentNode -> next != *head) {
		tempNode = currentNode;
		currentNode = currentNode -> next;
	}
//  connect the tempNode with the head
	tempNode -> next = currentNode -> next;
//  Dispose the tail node
	delete currentNode;

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

	deleteEnd(&head);

	return 0;
}