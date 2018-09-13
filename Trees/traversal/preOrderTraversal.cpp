/*
	In pre-order traversal, we process the current node before left or right subtrees
	While we are traversing the tree we have to maintain some information. We have to
	keep track of root information with the help of stack. We push the root on stack
	if we move down the tree and pop when we come up.	 

	Preorder traversal is defined as follows:
	- Visit the root.
	- Traverse the left subtree in Preorder.
	- Traverse the right subtree in Preorder.

	Or we can remember it as "Current Left Right (CLR)", where we process the current
	node then we move to left and after that we move to right.
*/

#include <bits/stdc++.h>

using namespace std;

struct Node
{
	int data;
	Node *left;
	Node *right;
};
// Recursive approach to PreOrder traversal
void PreOrder(Node *currentNode) {
	if (currentNode) {
		cout << currentNode -> data << endl;
		// Move to left subtree
		PreOrder(currentNode -> left);
		// Move to right subtree
		PreOrder(currentNode -> right);
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

	PreOrder(root);

	return 0;
}