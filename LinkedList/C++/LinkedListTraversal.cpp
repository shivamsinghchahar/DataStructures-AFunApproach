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
}