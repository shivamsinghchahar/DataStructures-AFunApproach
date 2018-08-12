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
	To delete the head node :

	- Create a temporary node
	- Move the head pointer ahead
	- Make the *prev of new head point to NULL
	- Dispose the temporary node

*/

void deleteFront(Node **head) {
	Node *tempNode;

	traverse(*head);
//  Make the temporary node point to head
	tempNode = *head;
//  Move the head pointer ahead 
	*head = tempNode -> next;
//  Make the *prev of new head point to NULL
	(*head) -> prev = NULL;
//  Delete the temporary node
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

	deleteFront(&head);

	return 0;
}