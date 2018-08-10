// Let's start coding our data structure
#include <bits/stdc++.h>

using namespace std;

// First step: Type declaration
struct Node {
  int data; // will hold our data
  Node *next; // will hold reference to next node
};

// Let's make a function that prints our list to which we need to pass the 'head' of node as an argument
// The basic idea here is to follow the pointers and print the data
void traverse(Node *head) {
  // pointer of Node type to keep a track of current node
  Node *current_node = head;
  
  while(current_node != NULL) {
    cout << "Data : " <<current_node -> data << endl; // To access the data member we use '->'
    current_node = current_node -> next; // Now we move to the next node
  }
}
// Driver function
int main() {
  // Let's declare three nodes
  Node *head = NULL;
  Node *second = NULL;
  Node *end = NULL;
  
  head = new Node(); // Allocate memory to node in the heap using 'calloc'
  second = new Node();
  end = new Node();
  
  // Let's insert data and connect our nodes together
  head -> data = 1;
  head -> next = second;
  
  second -> data = 2;
  second -> next = end;
  
  end -> data = 3;
  end -> next = NULL;
  
  traverse(head);
}

// NOTE : We can also calculate the length of our list by adding a counter in our traverse() function
