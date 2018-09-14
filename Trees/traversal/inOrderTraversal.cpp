/*
	In In-order traversal, we first traverse the left subtree and if there is are 
	more nodes on the left then we process the current node after that we traverse
	the right subtree in In-order	 

	Inorder traversal is defined as follows:
	- Traverse the left subtree in Inorder.
	- Visit the root.
	- Traverse the right subtree in Inorder.

	Or we can remember it as "Left Current Right (LCR)", where we move to the left
	node then we process the current node and after that we move to right.
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
void InOrder(Node *currentNode) {
	if (currentNode) {
		// Move to left subtree
		InOrder(currentNode -> left);
		// Process the current node
		cout << currentNode -> data << endl;
		// Move to right subtree
		InOrder(currentNode -> right);
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

	InOrder(root);

	return 0;
}