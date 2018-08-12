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

void deleteAtPosition(Node **head, int position) {
	Node *tempNode, *prevNode;

	traverse(*head);
	prevNode = *head;
	tempNode = prevNode -> next;

	int i = 2;
	while(i < position) {
		i++;

		prevNode = tempNode;
		tempNode = tempNode -> next;
	}

	prevNode -> next = tempNode -> next;
	(tempNode -> next) -> prev = prevNode;

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