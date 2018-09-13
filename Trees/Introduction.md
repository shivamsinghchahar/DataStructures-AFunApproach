# Binary Trees
### Introduction

Trees are quite like linked list but each node is connected to 2 other nodes, producing a non-linear structure.

Trees are called *hierarchical data structures*. They are used when the data that we want to store is hierarchical e.g. File system on our computer

#### Tree Vocabulary

- **Root** node is the first node that has no ancestor (quite like the genesis block in linked list).

- **Children** of a node are those nodes that are directly under it.

- **Parent** of a node is that node which is the direct ancestor of it.

- **Leaves** are those nodes that have no children

- **Sibling** nodes are those nodes that have a common parent

- **Height** is the length of the longest path to a leaf.

- **Depth** is the length of the path to its root.

while dealing with **Trees** we need to care about three things:

- Data
- Pointer to left node
- Pointer to right node

#### Properties

- Maximum number of nodes at level 'l' of a binary tree is 2<sup>l-1</sup>.

- Maximum number of nodes at height 'h' of a binary tree is 2<sup>h</sup> - 1.

- In a binary tree with N nodes, minimum possible height or minimum number of levels is **[log<sub>2</sub>(N+1)]**.

- In a binary tree with L leaves, we have at least **[log<sub>2</sub>L] + 1** levels.

- In Binary tree where every node has 0 or 2 children, number of leaf nodes is always one more than nodes with two children.

#### Why Trees?

Trees are used to when we need to deal with hierarchical data

- Trees are faster than Linked List but slower than Arrays when it comes to  performing traversal  and search operations.

- Trees are faster than Arrays but slower than Linked List (Unordered) when it comes to performing insertion/deletion operations.

- Like Linked List, Tress also don't have an upper-limit on the number of nodes since we are dynamically creating nodes and linking them using pointers.

- Trees are also used in data compression

#### Binary Trees

A tree is called **Binary tree** if each node has zero child, one child or two children. We can think of binary tree as a root that has two disjoint binary trees,
called the left and right subtree. Binary trees further have some types that you can check out yourself.

#### Operations on Binary Trees

- Insertion
- Deletion
- Searching
- Traversing
- Finding size of the tree
- Height of the tree
- Level which has maximum sum
- Finding LCA (Least common ancestor) for a given pair of nodes