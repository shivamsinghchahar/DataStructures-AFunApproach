/*
This is non-recursive implementation of pre-order traversal. In this implementation 
a stack is required as we need to remember the nodes so that we can go from left 
subtrees to right subtrees.
*/

#include <bits/stdc++.h>

using namespace std;

struct Node
{
	int data;
	Node *left;
	Node *right;
};

void preOrder(Node *currentNode) {
    stack <Node *> s;
    while(1) {
        while(currentNode) {
        	// Process the current node
            cout << currentNode -> data << endl;
            // Push the node onto stack
            s.push(currentNode);
            // Move to the left node
            currentNode = currentNode -> left;
        }
        // Break if the stack is empty
        if(s.empty()) break;
        // To check if there are nodes to the right of current node
        currentNode = s.top();
        // Pop the nodes that have been processed
        s.pop();
        // This point is reached after we have processed the left-subtree
        currentNode = currentNode -> right;
    }
}

int main()
{
	Node *root, *left, *right;

	root = new Node();
	left = new Node();
	right = new Node();
	
	root -> data = 1;
	root -> left = left;
	root -> right = right;
	
	left -> data = 2;
	left -> left = NULL;
	left -> right = NULL;
	
	right -> data = 3;
	right -> left = NULL;
	right -> right = NULL;

	preOrder(root);

	return 0;
}