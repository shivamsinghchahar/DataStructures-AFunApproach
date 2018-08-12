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
	Assuming that the node to be deleted lies between head and tail node.
	To delete a node at any position we have to keep track of node that 
	comes before the position. 

	Follow the below steps:

	- Make a temporary node and previous node
	- Make the previous node point to head and keep the temporary node ahead of it
	- Traverse until the position is reached
	- Connect the *next of previous node with the node ahead of temporary node
	- Connect the *prev of node that is ahead of temporary node with the previous node
	- Delete the temporary node
*/

void deleteAtPosition(Node **head, int position) {
	Node *tempNode, *prevNode;

	traverse(*head);
//  Make the prevNode point to head
	prevNode = *head;
//  Keep the tempNode ahead of prevNode
	tempNode = prevNode -> next;
//  Keep track of tempNode's position
	int i = 2;
//  Traverse until the position is reached
	while(i < position) {
		i++;
	//  Move prevNode ahead
		prevNode = tempNode;
	//  Move tempNode ahead
		tempNode = tempNode -> next;
	}
//  Make the prevNode point to node ahead of tempNode
	prevNode -> next = tempNode -> next;
//  Make the node that is ahead of tempNode point to prevNode	
	(tempNode -> next) -> prev = prevNode;
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

	deleteAtPosition(&head, 3);

	return 0;
}