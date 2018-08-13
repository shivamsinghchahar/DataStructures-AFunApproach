# Stack 
### Introduction

Just like linked list, Stack is another data structure used to store data. Stack is known as
LIFO(last in first out) data structure because in a stack we add and remove elements from only
one end i.e. Top. 

*A simple example for this would be a stack of plates, we keep the plates on
top of each other and when we have to use a plate, we take it from top. Same happens when we 
have to keep a plate back on stack. So the last plate that is kept on the top will be the first
one to be used.*

#### Properties Of A Stack:
* Any insertion or deletion can only be performed on top
* It is an ordered list of same type
* Said to be in **Overflow** state when full and **Underflowo** when empty

#### Operations:
* Insert an element i.e. Push
* Remove an element i.e. Pop
* Return the element at top i.e. Peek
* Check if the stack is empty
* Size of the stack
* Check if the stack is full

### Why Stack?
Stack is used in Scheduling high priority tasks on top. It is also used in function calls/
recursion to keep a tack of calls. Another use can be found in compilers, they check if the
parentheses are balanced or not using a stack. There can be many other examples.

### Advantages:
* Stack allows us to add and remove element in O(1) time

### Disadvantages:
* Stack makes it hard to access an element that is not on top, we have to pop the elements to get to the element

Stack has variety of uses. It also has some disadvantages, But that's why we have different data structures ;)