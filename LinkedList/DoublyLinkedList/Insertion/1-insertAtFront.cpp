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
	This is quite similar to what we did in singly linked list. To insert a node at front:

	- Make a new node
	- Set its *prev to NULL
	- Make the *prev of head node point new node
	- Make it point the head of list
	- Move the head pointer to new node
	
	Successfully inserted the node at front of the list :)
*/

void insertAtFront(Node **head, int data) {
	Node *newNode;

	traverse(*head);
//  Initialize the newNode
	newNode = new Node();
	newNode -> data = data;
	newNode -> prev = NULL;
//	Make the *prev of head node point to newNode 		
	(*head) -> prev = newNode;
//	Make the newNode point to head node	
	newNode -> next = *head;
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

	insertAtFront(&head, 0);

	return 0;
}