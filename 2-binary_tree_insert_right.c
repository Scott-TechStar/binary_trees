#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as
 * the right-child of another node
 * @parent: ptr to the node to insert the right-child in
 * @value: the value to store in the new node
 *
 * Return: a ptr to the created node, or NULL on failure
 * or if parent is NULL
 *
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

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

}
