/*
	In level order traversal, we visit the root and while traversing the level 'l'
	keep all the elements at level 'l+1' in queue.
*/

#include <bits/stdc++.h>

using namespace std;

struct Node
{
	int data;
	Node *left;
	Node *right;
};

void levelOrder(Node *currentNode) {
	Node *temp;
	queue <Node *> Q;
	
	if(!currentNode)
		return;
	Q.push(currentNode);

	while(!Q.empty()) {
		temp = Q.front();
		Q.pop();
		// Process the node
		cout << temp -> data << endl;
		// Enque the left child of node
		if(temp -> left)
			Q.push(temp -> left);
		// Enque the right child of node
		if (temp -> right)
			Q.push(temp -> right);
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

	levelOrder(root);

	return 0;
}