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
## Tests :heavy_check_mark:

* [tests](./tests): Folder of test files for all tasks. Provided by ALX
School.

## Helper File :raised_hands:

* [binary_tree_print.c](./binary_tree_print.c): C function that prints binary
trees in a pretty way.

## Header File :file_folder:

* [binary_trees.h](./binary_trees.h): Header file containing definitions and
prototypes for all types and functions written for the project.

Data Structures
```
struct binary_tree_s
{
    int n;
    struct binary_tree_s *parent;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
};

typedef struct binary_tree_s binary_tree_t;
typedef struct binary_tree_s bst_t;
typedef struct binary_tree_s avl_t;
typedef struct binary_tree_s heap_t;
```
--------------------------------------------------------

Function Prototypes

| File                             | Prototype                                                                                        |
| -------------------------------- | ------------------------------------------------------------------------------------------------ |
| `binary_tree_print.c`            | `void binary_tree_print(const binary_tree_t *tree)`                                              |
| `0-binary_tree_node.c`           | `binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);`                             |
| `1-binary_tree_insert_left.c`    | `binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);`                      |
| `2-binary_tree_insert_right.c`   | `binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value);`                     |
| `3-binary_tree_delete.c`         | `void binary_tree_delete(binary_tree_t *tree);`                                                  |
| `4-binary_tree_is_leaf.c`        | `int binary_tree_is_leaf(const binary_tree_t *node);`                                            |
| `5-binary_tree_is_root.c`        | `int binary_tree_is_root(const binary_tree_t *node);`                                            |
| `6-binary_tree_preorder.c`       | `void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int));`                       |
| `7-binary_tree_inorder.c`        | `void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int));`                        |
| `8-binary_tree_postorder.c`      | `void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int));`                      |
| `9-binary_tree_height.c`         | `size_t binary_tree_height(const binary_tree_t *tree);`                                          |
| `10-binary_tree_depth.c`         | `size_t binary_tree_depth(const binary_tree_t *tree);`                                           |
| `11-binary_tree_size.c`          | `size_t binary_tree_size(const binary_tree_t *tree);`                                            |
| `12-binary_tree_leaves.c`        | `size_t binary_tree_leaves(const binary_tree_t *tree);`                                          |
| `13-binary_tree_nodes.c`         | `size_t binary_tree_nodes(const binary_tree_t *tree);`                                           |
| `14-binary_tree_balance.c`       | `int binary_tree_balance(const binary_tree_t *tree);`                                            |
| `15-binary_tree_is_full.c`       | `int binary_tree_is_full(const binary_tree_t *tree);`                                            |
| `16-binary_tree_is_perfect.c`    | `int binary_tree_is_perfect(const binary_tree_t *tree);`                                         |
| `17-binary_tree_sibling.c`       | `binary_tree_t *binary_tree_sibling(binary_tree_t *node);`                                       |
| `18-binary_tree_uncle.c`         | `binary_tree_t *binary_tree_uncle(binary_tree_t *node);`                                         |
| `100-binary_trees_ancestor.c`    | `binary_tree_t *binary_trees_ancestor(const binary_tree_t *first, const binary_tree_t *second);` |
| `101-binary_tree_levelorder.c`   | `void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int));`                     |
| `102-binary_tree_is_complete.c`  | `int binary_tree_is_complete(const binary_tree_t *tree);`                                        |
| `103-binary_tree_rotate_left.c`  | `binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree);`                                   |
| `104-binary_tree_rotate_right.c` | `binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree);`                                  |
| `110-binary_tree_is_bst.c`       | `int binary_tree_is_bst(const binary_tree_t *tree);`                                             |
| `111-bst_insert.c`               | `bst_t *bst_insert(bst_t **tree, int value);`                                                    |
| `112-array_to_bst.c`             | `bst_t *array_to_bst(int *array, size_t size);`                                                  |
| `113-bst_search.c`               | `bst_t *bst_search(const bst_t *tree, int value);`                                               |
| `114-bst_remove.c`               | `bst_t *bst_remove(bst_t *root, int value);`                                                     |
| `115-O`                          |                        
| `120-binary_tree_is_avl.c`       | `int binary_tree_is_avl(const binary_tree_t *tree);`                                             |
| `121-avl_insert.c`               | `avl_t *avl_insert(avl_t **tree, int value);`                                                    |
| `122-array_to_avl.c`             | `avl_t *array_to_avl(int *array, size_t size);`                                                  |
| `123-avl_remove.c`               | `avl_t *avl_remove(avl_t *root, int value);`                                                     |
| `124-sorted_array_to_avl.c`      | `avl_t *sorted_array_to_avl(int *array, size_t size);`                                           |
| `125-O`                          |                        
| `130-binary_tree_is_heap.c`      | `int binary_tree_is_heap(const binary_tree_t *tree);`                                            |
| `131-heap_insert.c`              | `heap_t *heap_insert(heap_t **root, int value)`                                                  |  
| `132-array_to_heap.c`            | `heap_t *array_to_heap(int *array, size_t size);`                                                |
| `133-heap_extract.c`             | `int heap_extract(heap_t **root);`                                                               |
| `134-heap_to_sorted_array.c`     | `int *heap_to_sorted_array(heap_t *heap, size_t *size);`                                         |
| `135-O`                          |             
## Tasks :page_with_curl:

* **0. New node**
  * [0-binary_tree_node.c](./0-binary_tree_node.c): C function that creates a
  binary tree node with a given parent and value.
  * Returns a pointer to the new node, or `NULL` on failure.

* **1. Insert left**
  * [1-binary_tree_insert](./1-binary_tree_insert): C function that inserts a
  node as the left-child of another.
  * Returns a pointer to the new node, or `NULL` on failure.
  * If the given `parent` already contains a left node, the new node takes its
  place and the old left-child becomes the left-child of the new node.

* **2. Insert right**
  * [2-binary_tree_insert_right.c](./2-binary_tree_insert_right.c): C function that
  inserts a node as the right-child of another.
  * Returns a pointer to the new node, or `NULL` on failure.
  * If the given `parent` already contains a right node, the new node takes its
  place and the old right-child becomes the right-child of the new node.

* **3. Delete**
  * [3-binary_tree_delete.c](./3-binary_tree_delete.c): C function that deletes
  an entire binary tree.

* **4. Is leaf**
  * [4-binary_tree_is_leaf.c](./4-binary_tree_is_leaf.c): C function that checks
  if a given node is a leaf.
  * Returns `1` if the node is a leaf, `0` otherwise.

* **5. Is root**
  * [5-binary_tree_is_root.c](./5-binary_tree_is_root.c): C function that checks
  if a given node is a root.
  * Returns `1` if the node is a root, `0` otherwise.

* **6. Pre-order traversal**
  * [6-binary_tree_preorder.c](./6-binary_tree_preorder.c): C function that
  traverses a tree using pre-order traversal.

* **7. In-order traversal**
  * [7-binary_tree_inorder.c](./7-binary_tree_inorder.c): C function that
  traverses a tree using in-order traversal.

* **8. Post-order traversal**
  * [8-binary_tree_postorder.c](./8-binary_tree_postorder.c): C function that
  traverses a tree using post-order traversal.

* **9. Height**
  * [9-binary_tree_height.c](./9-binary_tree_height.c): C function that returns
  the height of a binary tree.

* **10. Depth**
  * [10-binary_tree_depth.c](./10-binary_tree_depth.c): C function that returns
  the depth of a given node in a binary tree.

* **11. Size**
  * [11-binary_tree_size.c](./11-binary_tree_size.c): C function that returns
  the size of a binary tree.

* **12. Leaves**
  * [12-binary_tree_leaves.c](./12-binary_tree_leaves.c): C function that returns
  the number of leaves in a binary tree.

* **13. Nodes**
  * [13-binary_tree_nodes.c](./13-binary_tree_nodes.c): C function that returns
  the number of nodes in a binary tree with at least one child.

* **14. Balance factor**
  * [14-binary_tree_balance.c](./14-binary_tree_balance.c): C function that
  returns the balance factor of a binary tree.

* **15. Is full**
  * [15-binary_tree_is_full.c](./15-binary_tree_is_full.c): C function that
  checks if a binary tree is full.
  * Returns `1` if a tree is full, `0` otherwise.

* **16. Is perfect**
  * [16-binary_tree_is_perfect.c](./16-binary_tree_is_perfect.c): C function
  that checks if a binary tree is perfect.
  * Returns `1` if a tree is perfect, `0` otherwise.

* **17. Sibling**
  * [17-binary_tree_sibling.c](./17-binary_tree_sibling.c): C function that
  returns a pointer to the sibling of a given node in a binary tree.
  * Returns `NULL` if no sibling is found.

* **18. Uncle**
  * [18-binary_tree_uncle.c](./18-binary_tree_uncle.c): C function that
  returns a pointer to the uncle of a given node in a binary tree.
  * Returns `NULL` if no uncle is found.

* **19. Lowest common ancestor**
  * [100-binary_trees_ancestor.c](./100-binary_trees_ancestor.c): C function
  that returns a pointer to the lowest common ancestor node of two given nodes
  in a binary tree.
  * Returns `NULL` if no common ancestor is found.

* **20. Level-order traversal**
  * [101-binary_tree_levelorder.c](./101-binary_tree_levelorder.c): C function
  that traverses a binary tree using level-order traversal.

* **21. Is complete**
  * [102-binary_tree_is_complete.c](./102-binary_tree_is_complete.c): C function
  that checks if a binary tree is complete.
  * Returns `1` if the tree is complete, `0` otherwise.

* **22. Rotate left**
  * [103-binary_tree_rotate_left.c](./103-binary_tree_rotate_left.c): C function
  that performs a left-rotation on a binary tree.
  * Returns a pointer to the new root node of the tree after rotation.

* **23. Rotate right**
  * [104-binary_tree_rotate_right.c](./104-binary_tree_rotate_right.c): C function
  that performs a right-rotation on a binary tree.
  * Returns a pointer to the new root node of the tree after rotation.

* **24. Is BST**
  * [110-binary_tree_is_bst.c](./110-binary_tree_is_bst.c): C function that
  checks if a binary tree is a valid binary search tree.
  * Returns `1` if the tree is a valid BST, `0` otherwise.

* **25. BST - Insert**
  * [111-bst_insert.c](./111-bst_insert.c): C function that inserts a value into
  a binary search tree.
  * Returns a pointer to the new node, or `NULL` on failure.
  * If the tree is `NULL`, the value becomes the root node.
  * The value is ignored if it is already present in the tree.

* **26. BST - Array to BST**
  * [112-array_to_bst.c](./112-array_to_bst.c): C function that builds a binary
  search tree from an array.
  * Returns a pointer to the root node of the created tree, or `NULL` on failure.

* **27. BST - Search**
  * [113-bst_search.c](./113-bst_search.c): C function that searches for a value
  in a binary search tree.
  * If the value is matched in the BST, returns a pointer to the matched node.
  * Otherwise, returns `NULL`.

* **28. BST - Remove**
  * [114-bst_remove.c](./114-bst_remove.c): C function that removes a node from
  a binary search tree.
  * Returns a pointer to the new root node of the tree after deletion.
  * If the node to be deleted has two children, it is replaced with its first
  in-order successor.

* **29. Big O #BST**
  * [115-O](1 answer/line): The average time complexities of those operations on a Binary Search Tree
  * Inserting the value n
  * Removing the node with the value n
  * Searching for a node in a BST of size n

* **30. Is AVL**
  * [120-binary_tree_is_avl.c](./120-is_avl): C function that checks if a binary tree is a valid AVL Tree
  * Returns 1 if tree is a valid AVL Tree, and 0 otherwise
  * If tree is NULL, return 0

* **31. AVL - Insert**
  * [121-avl_insert.c](./121-avl_insert): C function that inserts a value in an AVL Tree
  * Returns a pointer to the created node, or NULL on failure
  * If the address stored in tree is NULL, the created node must become the root node

* **32. AVL - Array to AVL**
  * [122-array_to_avl.c](./122-avl_array): C function that builds an AVL tree from an array
  * Returns a pointer to the root node of the created AVL tree, or NULL on failure
  * array  is a pointer to the first element of the array to be converted

* **33. AVL - Remove**
  * [123-avl_remove.c](./123-avl_rm): C function that removes a node from an AVL tree
  * Returns a pointer to the new root node of the tree after removing the desired value, and after rebalancing
  * If the node to be deleted has two children, it must be replaced with its first in-order successor (not predecessor)

* **34. AVL - From sorted array**
  * [124-sorted_array_to_avl.c](./124-avl_sorted): C function that builds an AVL tree from an array
  * Returns a pointer to the root node of the created AVL tree, or NULL on failure
  * You can assume there will be no duplicate value in the array
  * You are not allowed to rotate
  * You can only have 2 functions in your file

* **35. Big O #AVL Tree**
  * [125-O](1 answer/line): The average time complexities of those operations on an AVL Tree
  * Inserting the value n
  * Removing the node with the value n
  * Searching for a node in an AVL tree of size n

* **36. Is Binary heap**
  * [130-binary_tree_is_heap.c](./130-is_heap): C function that checks if a binary tree is a valid Max Binary Heap
  * Returns 1 if tree is a valid Max Binary Heap, and 0 otherwise
  * If tree is NULL, return 0 
  * The last property must be recursively true for all nodes in Binary Tree

* **37. Heap - Insert**
  * [131-heap_insert.c](./131-heap_insert): C function that inserts a value in Max Binary Heap
  * Returns a pointer to the created node, or NULL on failure
  * If the address stored in root is NULL, the created node must become the root node.
  * You have to respect a Max Heap ordering
  * You are allowed to have up to 6 functions in your file

* **38. Heap - Array to Binary Heap**
  * [132-array_to_heap.c](./132-heap_array): C function that builds a Max Binary Heap tree from an array
  * Returns a pointer to the root node of the created Binary Heap, or NULL on failure

* **39. Heap - Extract**
  * [133-heap_extract.c](./133-heap_extract): C function that extracts the root node of a Max Binary Heap
  * Returns the value stored in the root node
  * The root node must be freed and replace with the last level-order node of the heap
  * Once replaced, the heap must be rebuilt if necessary
  * If your function fails, return 0

* **40. Heap - Sort**
  * [134-heap_to_sorted_array.c](./134-heap_sort): C function that converts a Binary Max Heap to a sorted array of integers
  * Where heap is a pointer to the root node of the heap to convert
  * And size is an address to store the size of the array
  * You can assume size is a valid address
  * Since we are using Max Heap, the returned array must be sorted in descending order
  
* **41. Big O #Binary Heap**
  * [135-O](1 answer/line): The average time complexities of those operations on a Binary Heap
  * Inserting the value n
  * Extracting the root node
  * Searching for a node in a binary heap of size n

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
