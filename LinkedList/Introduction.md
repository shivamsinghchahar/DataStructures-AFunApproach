# Linked List
### Introduction

Just like a list, linked list is another data structure but the elements (or nodes) are connected with the help of pointers. Let's dive
into the explanation now..

*Imagine we have **n** pieces of paper that are marked from **1 to n** and we are allowed to write data on it.*
*Now, we mix up all the pieces and ask you to arrange them in a sequence. So, how would you go about it? yes, we can use the pre-marked numbers*
*to arrange them in a sequence to make a list.*

*The whole point here is that the pieces are individual elements that have some data and they are linked with the help of pre-marked numbers*
*(or pointers).*
*Similarly, Linked list is a collection of nodes with each node pointing to the next one and that's how linked list comes into being.*

While dealing with **Linked list** we have two things to care about:
* data
* pointer to the next element

This abstract structure is known as a **node**.

#### Properties of a linked list:
* Nodes are connected by pointers
* Last node points to **NULL**
* Dynamic in nature

> Note : The first node is known as **head**

#### Operations:
* Insert an element
* Delete an element
* Count the number of elements
* Delete the list (remove all elements)
* Find n<sup>th</sup> node from the end of the list

### Why Linked List?
There are similar data structures as that of linked list which do the same thing but a little differently **e.g.** Arrays

#### Advantages of using Linked list:
* It is dynamic in nature i.e. it can shrink and expand in a constant time.

And like every other thing in this world, Linked lists too have some disadvantages.

#### Disadvantages:
* It takes **O(n)** time to access an element
* Unlike arrays, It does not have contiguous block of memory but the *nodes are scattered in the memory*.
* Memory is wasted in terms of extra reference points.

We can dive deeper into the Arrays and Linked list comparison but I assume you can easily figure that out or you can google it :)
