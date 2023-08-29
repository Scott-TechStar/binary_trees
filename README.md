## THE BINARY TREES
---------------------------------------------
<img src = "https://encrypted-tbn0.gstatic.com/images?q=tbn:ANd9GcS1ZosEhGqUcD5AXiAPhrxDmPEo2kgkhMdDzw&usqp=CAU" alt = "binary tree">

-------------------------------------------------------------------
## DESCRIPTION
---------------------------------------------
A Binary tree is a k-ary k=2 tree data structure in which each node has atmost two children which are reffered to as left-child and right-child.
A tree is as well a non-linear abstract data type with a hierarchy-based structure, which allows efficiency during insertion, deletion and search operations. It has nodes-which stores data that are connected via links.

----------------------------------------------------
## LEARNING OBJECTIVES

At the end of project, one should be able to define or explain:

* What is a binary tree
* What is the difference between a binary tree and a Binary Search Tree
* What is the possible gain in terms of time complexity compared to linked lists
* What are the depth, the height, the size of a binary tree
* What are the different traversal methods to go through a binary tree
* What is a complete, a full, a perfect, a balanced binary tree.

--------------------------------------------------
## Data Structures

In the header file include;

Basic Binary Tree:
-----------------------------------------------------
/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
struct binary_tree_s
{
    int n;
    struct binary_tree_s *parent;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
};

typedef struct binary_tree_s binary_tree_t;

----------------------------------------------------------
Binary Search Tree
typedef struct binary_tree_s bst_t;

--------------------------------------------------------------
AVL Tree
typedef struct binary_tree_s avl_t;

-------------------------------------------------------------
Max Binary Heap
typedef struct binary_tree_s heap_t;

--------------------------------------------------------

## Contacts
-------------------------------------------

Email: johnniekips@gmail.com or swabulwenyi@gmail.com

Project link: https://github.com/Scott-TechStar/binary_trees


## Acknowledgements
--------------------------------------------------
The listed sites were helpful for insights on the project. You're free to access them if you need to.

a) https://www.youtube.com/watch?v=H5JubkIy_p8

b) https://en.wikipedia.org/wiki/Binary_search_tree

c) https://www.programiz.com/dsa/tree-traversal

d) https://www.tutorialspoint.com/data_structures_algorithms/tree_data_structure.htm
