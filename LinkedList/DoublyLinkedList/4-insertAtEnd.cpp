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
	
*/

void insertAtEnd(Node **head, int data) {
	Node *current_node, *newNode;

	traverse(*head);

	current_node = *head;

	newNode = new Node();
	newNode -> data = data;
	newNode -> next = NULL;

	while(current_node -> next != NULL)
		current_node = current_node -> next;

	newNode -> prev = current_node;
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