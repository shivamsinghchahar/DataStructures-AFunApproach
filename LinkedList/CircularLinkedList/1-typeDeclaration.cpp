#include <bits/stdc++.h>

using namespace std;
/*
	Type declaration is similar to that of singly linked list but in circular linked list
	the tail node is connected to the head node again, forming a loop or circle
*/
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

	traverse(head);

	return 0;
}