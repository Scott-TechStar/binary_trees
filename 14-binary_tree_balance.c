#include "binary_trees.h"

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: ptr to the root node of the tree to measure the balance factor
 *
 * Return: 0 if tree is NULL
 *
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int height_r, height_l;

	if (!tree)
		return (0);

	height_r = tree->left ? (int)binary_tree_height(tree->left) : -1;
	height_l = tree->right ? (int)binary_tree_height(tree->right) : -1;

	return (height_r - height_l);
}


#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: ptr to the root node of the tree to measure the height
 *
 * Return: 0 If tree is NULL
 *
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_r = 0;
	size_t height_l = 0;

	if (!tree)
		return (0);

	height_r = tree->right ? 1 + binary_tree_height(tree->right) : 0;
	height_l = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	return (height_r > height_l ? height_r : height_l);
}
