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

void insertAtPosition(Node **head, int data, int position) {
	Node *newNode, *current_node;
	traverse(*head);
	current_node = *head;

	newNode = new Node();
	newNode -> data = data;

	int i = 1;
	while(i < position - 1) {
		i++;
		current_node = current_node -> next;
	}

	newNode -> next = current_node -> next;
	newNode -> prev = current_node;

	(current_node -> next) -> prev = newNode;
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