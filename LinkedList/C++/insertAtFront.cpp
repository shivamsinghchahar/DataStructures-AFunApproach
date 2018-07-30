#include <bits/stdc++.h>

using namespace std;

//Creates a struct of type Node
struct Node {
    int data;
    struct Node *next;
};

//This Function traverses the list
void printList(struct Node *n) {
    int count = 0; // To count the length of list
    while(n != NULL) {
        count++;
        cout << n->data << " ";
        n = n->next;
    }
    cout << "\nLength : " << count << endl;
}

/* Given a reference (pointer to pointer) to the head of a list
   and an int,  inserts a new node on the front of the list. */
void push(struct Node** head, int new_data) {
    //Declare new_node and allocate memory to it
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    //Assign data to new node
    new_node->data = new_data;
    //Assign next of new_node to head 
    new_node->next = (*head);
    //Move the head to point new node
    (*head) = new_node;
}

int main() {
    //Declare three variables of type Node
    struct Node* head = NULL;
    struct Node* first = NULL;
    struct Node* second = NULL;
    
    //Allocate memory to the nodes in the heap
    head = (struct Node*)malloc(sizeof(struct Node));
    first = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    
    head->data = 1; //Assign data
    head->next = first; //Link the 'head' node with 'first' node
    
    first->data = 2;
    first->next = second;
    
    second->data = 3;
    second->next = NULL;
    
    printList(head);
    push(&head, 9);//Pass the reference of head pointer
    printList(head);
    
}