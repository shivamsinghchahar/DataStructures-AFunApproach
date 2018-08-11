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
	To delete a node from the front of linked list:
	
	- Create a temporary node and make it point to head of the list
	- Now, move the head pointer to the next node
	- delete the temporary node
	
	We have successfully deleted the node :)
*/
void deleteFront(Node **head) {
// 	Create temporary node
	Node *temp_node;
// 	Point to the head
	temp_node = *head;
// 	Traverse to see the list before deletion
	traverse(*head);
// 	Move the head pointer to next node
	*head = (temp_node) -> next;
// 	Now, delete the temporary node
	delete temp_node;
// 	Traverse again to see the result after deletion
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
	deleteFront(&head);
	return 0;
}
