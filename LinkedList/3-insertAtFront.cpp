#include <bits/stdc++.h>

using namespace std;
// Type Declaration
struct Node {
  int data;
  Node *next;
};

// Let's make a function that takes 'head' and 'data' as arguments. Since we need to modify the head after we have connected our 'newNode'
// to our list we need to pass double pointer for 'head'.

void insertAtFront(Node **head, int data) {
  Node *newNode, *current_node;
  
  newNode = (Node*)calloc(1, sizeof(Node));
  
  newNode -> data = data; // Insert data into 'newNode'
  newNode -> next = *head; // Tell 'newNode' to point to current head
  // Update head pointer to point to 'newNode'  
  *head = newNode;
  // current_node points to new 'head' now  
  current_node = *head;
  // traverse the list
  while(current_node != NULL) {
    cout << current_node -> data << endl;
    current_node = current_node -> next;
  }
}

int main() {
  Node *head, *second, *end;
  
  head = (Node*)calloc(1, sizeof(Node));
  second = (Node*)calloc(1, sizeof(Node));
  end = (Node*)calloc(1, sizeof(Node));

  head -> data = 1;
  head -> next = second;
  
  second -> data = 2;
  second -> next = end;
  
  end -> data = 3;
  end -> next = NULL;
  // Pass reference of head
  insertAtFront(&head, 0);
  
}
