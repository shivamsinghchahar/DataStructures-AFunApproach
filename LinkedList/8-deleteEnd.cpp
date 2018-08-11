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
	Deleting a node from end can be tricky because we have to keep track of the node that comes just before the 
	node at end. To delete the node at end :
	
	- Make a temporary node and previous node
	- Traverse the list such that temporary node reaches the end and previous node is just behind it
	- Once we have the previous node, we have to make its next point to NULL
	- After that we have to delete the temporary node
	
	Now, we are done deleting the last node :)
*/
void deleteEnd(Node **head) {
	Node *temp_node, *prev_node;
// 	Make prev_node point to head,
	prev_node = *head;
// 	point the temp_node to the next of prev_node, the idea is to keep the temp_node ahead of prev_node
	temp_node = prev_node -> next;
// 	See the list before deleting the last node
	traverse(*head);
// 	Follow the pointers till we reach NULL
	while((temp_node -> next) != NULL) {
		temp_node = temp_node -> next;
		prev_node = prev_node -> next;
	}
// 	Make the prev_node point to NULL
	prev_node -> next = NULL;
// 	Delete the temp_node
	delete temp_node;

	cout << "After deletion\n";
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
	// Pass reference of head
	deleteEnd(&head);
	return 0;
}
