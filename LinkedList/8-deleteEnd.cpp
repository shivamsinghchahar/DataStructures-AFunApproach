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

void deleteEnd(Node **head) {
	Node *temp_node, *prev_node;
	prev_node = *head;
	temp_node = prev_node -> next;
	traverse(*head);

	while((temp_node -> next) != NULL) {
		temp_node = temp_node -> next;
		prev_node = prev_node -> next;
	}

	prev_node -> next = NULL;
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
