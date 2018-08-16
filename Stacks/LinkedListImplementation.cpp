#include <bits/stdc++.h>

using namespace std;

struct Stack
{
	int data;
	Stack *next;
};

Stack *createStack() {
	return NULL;
}

void push(Stack **top, int data) {
	Stack *temp = new Stack();

	temp -> data = data;
	temp -> next = *top;

	*top = temp;
}

int isEmpty(Stack *top) {
	return top == NULL;
}

int pop(Stack **top) {
	int data;
	Stack *temp;

	temp = *top;
	*top = (*top) -> next;
	data = temp -> data;

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