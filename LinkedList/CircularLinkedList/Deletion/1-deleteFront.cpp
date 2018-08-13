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
	To delete the node at front, we need to connect our tail node to the node after
	head node and move our head pointer ahead. then we can dispose our previous head :

	- Make a temporary node to point to current head and a node to keep track of
	  nodes while traversing
  	- Go to tail node
  	- Make the tail node point to next of head
  	- Move head pointer ahead
  	- Dispose the previous head node

*/

void deleteFront(Node **head) {
	Node *tempNode = *head, *currentNode = *head;

	traverse(*head);
//  Go to tail node
	while(currentNode -> next != *head)
		currentNode = currentNode -> next;
//  connect the tail node with the node next to head node
	currentNode -> next = tempNode -> next;
//  Move the head pointer ahead
	*head = tempNode -> next;
//  Dispose the previous head node
	delete tempNode;

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

	deleteFront(&head);

	return 0;
}