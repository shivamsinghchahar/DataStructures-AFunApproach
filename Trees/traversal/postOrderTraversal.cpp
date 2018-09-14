/*
	In Post-order traversal, we first traverse the left subtree and if there is are 
	more nodes on the left then we process the current node after that we traverse
	the right subtree in In-order and after that we will process the root node.	 

	Postorder traversal is defined as follows:
	- Traverse the left subtree in Postorder.
	- Traverse the right subtree in Postorder.
	- Visit the root.

	Or we can remember it as "Left Right Current (LRC)", where we move to the left
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
// Recursive approach to PostOrder traversal
void PostOrder(Node *currentNode) {
	if (currentNode) {
		// Move to left subtree
		PostOrder(currentNode -> left);
		// Move to right subtree
		PostOrder(currentNode -> right);
		// Process the current node
		cout << currentNode -> data << endl;
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

	PostOrder(root);

	return 0;
}