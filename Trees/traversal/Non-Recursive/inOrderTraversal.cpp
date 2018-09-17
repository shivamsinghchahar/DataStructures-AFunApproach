/*
This is the non-recursive implementation of in-order traverasl. In this implementation
we use stack to keep track of nodes so that we can move from node to node and process
them in desired order.
*/

#include <bits/stdc++.h>

using namespace std;

struct Node
{
	int data;
	Node *left;
	Node *right;
};

void inOrder(Node *currentNode) {
	stack <Node *> s;

	while(1) {
		while(currentNode) {
			// Keep pushing the left nodes from left subtree
			s.push(currentNode);
			currentNode = currentNode -> left;
		}

		if(s.empty()) break;

		currentNode = s.top();
		// Pop the current node
		s.pop();
		// Process the current node
		cout << currentNode -> data << endl;
		// This point is reached after we have processed the left subtree
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

	inOrder(root);

	return 0;
}