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
	
*/

void insertAtEnd(Node **head, int data) {
	Node *newNode, *currentNode;

	traverse(*head);

	newNode = new Node();
	newNode -> data = data;
	currentNode = *head;

	while(currentNode -> next != (*head))
		currentNode = currentNode -> next;

	newNode -> next = *head;
	currentNode -> next = newNode;

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

	insertAtEnd(&head, 0);

	return 0;
}