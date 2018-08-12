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
	To insert a node at any position we have to reach the node that comes before 'position'
	or is at 'position - 1'. After that :

	- Make a new node that is to be inserted and current_node to keep track of current node
	- Traverse till we reach the node at 'position - 1'
	- Connect the *next of newNode with the node next to current node
	- Connect the *prev of newNode with the current node
	- Connect the *prev of node next to current node to point the newNode
	- Connect the *next of current node to point to new node

	Yes, it could be confusing because of so many pointer operations :| 
	But we have inserted our node in the list :)
*/

void insertAtPosition(Node **head, int data, int position) {
	traverse(*head);

	Node *newNode, *current_node;
//  Keep track of current node
	current_node = *head;
//  initialize newNode
	newNode = new Node();
	newNode -> data = data;
//  To insert the node at the front
	if(position == 1) {
		newNode -> next = current_node;
		current_node -> prev = newNode;
		*head = newNode;

		traverse(*head);
		return;
	}
//  keep track of position
	int i = 1;
//  Traverse till we reach the node at 'position - 1'
	while(i < position - 1) {
		i++;
		current_node = current_node -> next;
	}
//  connect *next of newNode to the node at 'position'
	newNode -> next = current_node -> next;
//  connect *prev of newNode to current_node
	newNode -> prev = current_node;
//  connect the *prev of node at 'position' with newNode
	(current_node -> next) -> prev = newNode;
//  connect the *next of current_node with newNode
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

	insertAtPosition(&head, 0, 3);

	return 0;
}