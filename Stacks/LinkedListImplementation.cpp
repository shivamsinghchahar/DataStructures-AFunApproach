#include <bits/stdc++.h>

using namespace std;
/*
	Let's implement the stack using a linked list. In this approach a new node is added at
	the front and removed from the front in case of push and pop respectively.
*/
struct Stack
{
	int data;
	Stack *next;
};
// To create stack, returns a Stack node with NULL values
Stack *createStack() {
	return NULL;
}

void push(Stack **top, int data) {
	Stack *temp = new Stack();
	// Put data into the stack
	temp -> data = data;
	// Point to the current top
	temp -> next = *top;
	// Move the top pointer to temp
	*top = temp;
}

int isEmpty(Stack *top) {
	return top == NULL;
}

int pop(Stack **top) {
	// To catch the value of data
	int data;
	Stack *temp;
    // To keep track of top
	temp = *top;
	// Move the top pointer to next element
	*top = (*top) -> next;
	data = temp -> data;
    // Dispose the temp
	delete temp;
	return data;
}

int top(Stack *top) {
	return top -> data;
}

int main()
{
	Stack *stack = createStack();

	push(&stack, 1);
	push(&stack, 2);
	push(&stack, 3);

	cout << pop(&stack) << endl;
	cout << top(stack) << endl;
	
	return 0;
}