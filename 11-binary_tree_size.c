#include "binary_trees.h"

/**
 * binary_tree_size - measures the size of the tree
 * @tree: ptr to the root node of the tree to measure the size
 *
 * Return: 0 If tree is NULL
 *
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (binary_tree_size(tree->right) + binary_tree_size(tree->left) + 1);
}
