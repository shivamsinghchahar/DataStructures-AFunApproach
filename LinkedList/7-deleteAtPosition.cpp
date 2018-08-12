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

void deleteAtPosition(Node **head, int position) {
	Node *prev_node, *temp_node;

	prev_node = *head;
	temp_node = prev_node -> next;

	if(position == 1) {
		traverse(*head);
		
		*head = prev_node -> next;
		
		delete prev_node;
		
		traverse(*head);
		return;

	}

	int i = 2;

	while(i != position) {
		prev_node = temp_node;
		temp_node = temp_node -> next;
		i++;
	}
	traverse(*head);
	
	prev_node -> next = temp_node -> next;

	if(temp_node)
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
