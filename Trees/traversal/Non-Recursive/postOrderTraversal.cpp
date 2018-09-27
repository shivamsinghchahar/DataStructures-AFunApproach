/*
This is non-recursive implementation of post-order traversal. In this implementation 
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

void postOrder(Node *currentNode) {
    stack <Node *> s1, s2;
   	if(currentNode == NULL) return;

   	s1.push(currentNode);
   	Node *previous;
   	while(!s1.empty()) {
   		previous = s1.top(); s1.pop();
   		s2.push(previous);

   		if (previous -> left)
   			s1.push(previous -> left);
		if (previous -> right)
   			s1.push(previous -> right);
   	}

   	while(!s2.empty()) {
   		previous = s2.top(); s2.pop();
   		cout << previous -> data << endl;
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

	postOrder(root);

	return 0;
}