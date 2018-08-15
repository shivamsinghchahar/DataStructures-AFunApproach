#include <bits/stdc++.h>

using namespace std;

struct Stack
{
	// To keep track of top element
	int top;
	// To set the capacity
	unsigned int capacity;
	// Array to store data
	int *array;
};
/*
	To create stack
*/
Stack *createStack(unsigned int capacity) {
	Stack *stack = new Stack();
	// Set the size of stack
	stack -> capacity = capacity;
	// Set the top as -1 to tell that stack is empty
	stack -> top = -1;
	// Allocate memory to array
	stack -> array = new int[capacity];

	return stack;
}
// Check if the stack is full
bool isFull(Stack *stack) {
	return stack->top == stack->capacity - 1;
}
// Check if the stack is empty
bool isEmpty(Stack *stack) {
	return stack -> top == -1;
}
// To add element on top of stack
void push(Stack *stack, int data) {
	if(isFull(stack))
		return;

	stack -> array[++stack->top] = data;
	cout << "Pushed: " << data << endl; 
}
// To remove element from top of stack
int pop(Stack *stack) {
	if(isEmpty(stack))
		return 0;

    return stack -> array[stack->top--];
}

int main() {
	Stack *stack = createStack(100);

	string s = (isEmpty(stack))?"Empty":"Not Empty";
	cout << s << endl;
	push(stack, 1);
    push(stack, 2);
    push(stack, 3);
 
    cout << "Popped: " << pop(stack) << endl;
 
    return 0;
}