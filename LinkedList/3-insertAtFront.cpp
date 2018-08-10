#include <bits/stdc++.h>

using namespace std;

struct Node {
  int data;
  Node *next;
};

void insertAtFront(Node **head, int data) {
  Node *newNode, *current_node;
  
  newNode = (Node*)calloc(1, sizeof(Node));
  
  newNode -> data = data;
  newNode -> next = *head;
  
  *head = newNode;
  
  current_node = *head;
  
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
  
  insertAtFront(&head, 0);
  
}
