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
	To delete the tail node we need to keep track of current and node that comes before
	current node. Follow the below steps:

	- Create a temporary node and previous node
	- Make previous node point the head node and keep the temporary node ahead of it
	- Traverse till the the tail node is reached
	- Make the *next of previous node NULL
	- Delete the temporary node

*/

void deleteEnd(Node **head) {
	Node *tempNode, *prevNode;

	traverse(*head);
//  Make the  prevNode point to head
	prevNode = *head;
//  Keep the tempNode ahead of prevNode
	tempNode = prevNode -> next;
//  Go to tail node
	while(tempNode -> next != NULL) {
		// Move tail node ahead
		prevNode = tempNode;
		// Move tempNode ahead
		tempNode = tempNode -> next;
	}
//  Make *next of prevNode NULL
	prevNode -> next = NULL;
//  Dispose tempNode
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

	deleteEnd(&head);

	return 0;
}