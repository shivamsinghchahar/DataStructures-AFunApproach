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

void deleteFront(Node **head) {
	Node *temp_node;
	temp_node = *head;
	traverse(*head);

	*head = (temp_node) -> next;
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
	deleteFront(&head);
	return 0;
}
