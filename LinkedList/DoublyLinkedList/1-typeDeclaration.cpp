#include <bits/stdc++.h>

using namespace std;

/*
	In doubly linked list, we can move in two directions i.e. Forward(using *next) and
	backward(using *prev). Doubly linked list has some adavantages over the singly linked
	list e.g. deletion requires us to keep track of previous node in singly linked list but
	in doubly linked list we already have the pointer to previous node.

	there are some disadvantages too:
	- Requires extra space for *prev pointer
	- More pointer operations while inserting or deleting a node
*/

struct Node
{
	int data;
	Node *prev;
	Node *next;
};