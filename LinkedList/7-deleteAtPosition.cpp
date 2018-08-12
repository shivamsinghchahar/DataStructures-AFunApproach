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
	To delete node at any position we have to keep track of current node and previous node:
	
	- create prev_node and temp_node
	- make the prev_node point head and keep the temp_node just ahead of it to keep track of current node
	- Once the position is reached, connect the next of prev_node to next of temp_node
	- delete the temp_node
	
	We have successfully deleted our node :)
*/


void deleteAtPosition(Node **head, int position) {
	Node *prev_node, *temp_node;

// 	to keep track of previous node
	prev_node = *head;

//	 to keep track of current node, always keep it ahead of prev_node
	temp_node = prev_node -> next;

// 	if we have to delete the head of our list
	if(position == 1) {
		traverse(*head);
// 		Move the head pointer to the next node
		*head = prev_node -> next;
// 		Delete the current node
		delete prev_node;
		
		traverse(*head);
		return;
	}

	int i = 2;

	while(i != position) {
// 		Move prev_node ahead
		prev_node = temp_node;
// 		Move temp_node ahead
		temp_node = temp_node -> next;
		i++;
	}
	
	traverse(*head);
// 	connect the prev_node to the node next to temp_node
	prev_node -> next = temp_node -> next;

	delete temp_node;
	
	traverse(*head);
}

int main()
{
	Node *head, *second, *third, *end;

	head = new Node();
	second = new Node();
	third = new Node();
	end = new Node();

	head -> data = 1;
	head -> next = second;

	second -> data = 2;
	second -> next = third;

	third -> data = 3;
	third -> next = end;

	end -> data = 4;
	end -> next = NULL;
	// Pass reference of head
	deleteAtPosition(&head, 3);
	return 0;
}
