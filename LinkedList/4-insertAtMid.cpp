#include <bits/stdc++.h>

using namespace std;

struct Node
{
	int data;
	Node *next;
};

void insertAtMid(Node **head, int position, int data) {
	Node *newNode, *current_node;
	int i = 1;
	newNode = new Node();

	newNode -> data = data;
	newNode -> next = NULL;

	current_node = *head;

	// Traverse the list until the position is reached
	while((current_node != NULL) && (i < position))  {
		i++;
		current_node = current_node -> next;
		if(i == position) {
			newNode -> next = current_node -> next;
			current_node -> next = newNode;
		}
		
	}
	current_node = *head;
	while(current_node != NULL) {
		cout << current_node -> data << endl;
		current_node = current_node -> next;
	}
}

int main(int argc, char const *argv[])
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

	insertAtMid(&head, 3, 25);

	return 0;
}
