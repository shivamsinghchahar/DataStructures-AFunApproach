#include <bits/stdc++.h>

using namespace std;

struct Node
{
	int data;
	Node *prev;
	Node *next;
};

void traverse(Node *head) {
	Node *current_node = head;

	while(current_node != NULL) {
		cout << current_node -> data << endl;
		current_node = current_node -> next;
	}
	
	cout << endl;
}
/*
	This process is quite easy, we only need to go to tail node and change the *next
	of current tail node and *prev of new node. Follow the steps below:

	- Make newNode and current_node
	- Make the *next of newNode NULL
	- Go to the tail node
	- Make the *prev of newNode point current_node
	- Make the *next of current_node point newNode

	Done! :)
*/

void insertAtEnd(Node **head, int data) {
	Node *current_node, *newNode;

	traverse(*head);
//  Keep track of current node
	current_node = *head;
//  Initialize new node
	newNode = new Node();
	newNode -> data = data;
	newNode -> next = NULL;
//  Go to tail node
	while(current_node -> next != NULL)
		current_node = current_node -> next;
//  Make *prev of newNode point to current_node
	newNode -> prev = current_node;
//  Make *next of current_node point to newNode
	current_node -> next = newNode;

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
	head -> prev = NULL;
	head -> next = second;

	second -> data = 2;
	second -> prev = head;
	second -> next = third;

	third -> data = 3;
	third -> prev = second;
	third -> next = tail;

	tail -> data = 4;
	tail -> prev = third;
	tail -> next = NULL;

	insertAtEnd(&head, 0);

	return 0;
}