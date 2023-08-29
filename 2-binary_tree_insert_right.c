#include "binary_trees.h"

/**
<<<<<<< HEAD
 * binary_tree_insert_right - inserts a node as
 * the right-child of another node
 * @parent: ptr to the node to insert the right-child in
 * @value: the value to store in the new node
 *
 * Return: a ptr to the created node, or NULL on failure
 * or if parent is NULL
 *
=======
 * binary_tree_insert_right - Insert a node as the right-child
 *                            of another in a binary tree.
 * @parent: A pointer to the node to insert the right-child in.
 * @value: The value to store in the new node.
 *
 * Return: If parent is NULL or an error occurs - NULL.
 *         Otherwise - a pointer to the new node.
 *
 * Description: If parent already has a right-child, the new node
 *              takes its place and the old right-child is set as
 *              the right-child of the new node.
>>>>>>> 584f7cb02d80ec4e854dcfb6c54524413860367f
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

<<<<<<< HEAD
	if (!parent)
		return (NULL);
	new = malloc(sizeof(binary_tree_t));
	if (!new)
		return (NULL);

	new->n = value;
	parent->right = new;
	new->parent = parent;
	new->right = parent->right;
	new->left = NULL;

	if (new->right)
		new->right->parent = new;
	return (new);

=======
	if (parent == NULL)
		return (NULL);

	new = binary_tree_node(parent, value);
	if (new == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		new->right = parent->right;
		parent->right->parent = new;
	}
	parent->right = new;

	return (new);
>>>>>>> 584f7cb02d80ec4e854dcfb6c54524413860367f
}
