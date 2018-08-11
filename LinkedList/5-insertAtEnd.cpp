#include <bits/stdc++.h>

using namespace std;

struct Node
{
	int data;
	Node *next;
};

void traverse(Node *head) {
	Node *current_node = head;

	while(current_node != NULL) {
		cout << current_node -> data << endl;
		current_node = current_node -> next;
	}
}

/*
	Let's insert a node at the end:
	- First, make a new node
	- then, go to the last node of current list
	- Update the next of last node to point to new node
	- Now, our new node is added at the end of our list
*/
void insertAtEnd(Node **head, int data) {
	Node *current_node, *newNode;

	newNode = new Node();

	newNode -> data = data;
	newNode -> next = NULL;

	// To keep track of nodes
	current_node = *head;

	// go to the last node
	while(current_node->next != NULL)
		current_node = current_node -> next;

	// Update the next of last node to point to new node      
	current_node -> next = newNode;
	
	// Traverse and print the list
	traverse(*head);       
}

int main()
{
	Node *head, *second, *end;
  
	head = new Node();
	second = new Node();
	end = new Node();

	head -> data = 1;
	head -> next = second;

	second -> data = 2;
	second -> next = end;

	end -> data = 3;
	end -> next = NULL;

	insertAtEnd(&head, 25);

	return 0;
}
