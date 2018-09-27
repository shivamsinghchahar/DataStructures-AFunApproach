/*
	
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

		cout << temp -> data << endl;

		if(temp -> left)
			Q.push(temp -> left);
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