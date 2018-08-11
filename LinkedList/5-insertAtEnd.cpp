#include <bits/stdc++.h>

using namespace std;

struct Node
{
	int data;
	Node *next;
};

void insertAtEnd(Node **head, int data) {
	Node *current_node, *newNode;
	
	newNode = new Node();
	
	newNode -> data = data;
	newNode -> next = NULL;
	
	current_node = *head;
	
	while(current_node->next != NULL)
	       current_node = current_node -> next;
	       
   current_node -> next = newNode;
   current_node = *head;
   
   while(current_node != NULL) {
        cout << current_node -> data << endl;
        current_node = current_node -> next;
   }
	       
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
