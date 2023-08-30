#include "binary_trees.h"

/**
 * binary_trees_ancestor - Finds the lowest common ancestor of two nodes.
 * @first: Pointer to the first node.
 * @second: Pointer to the second node.
 *
 * Return: If no common ancestors return NULL, else return common ancestor.
 */
/* Function to find the lowest common ancestor */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first, const binary_tree_t *second) {
    if (first == NULL || second == NULL)
        return NULL;

    // Create a set to store ancestors of the first node
    binary_tree_t *ancestors[100];  // Assuming the maximum tree depth is 100
    size_t num_ancestors = 0;

    // Store ancestors of the first node in the set
    const binary_tree_t *current = first;
    while (current != NULL) {
        ancestors[num_ancestors] = (binary_tree_t *)current;
        num_ancestors++;
        current = current->parent;
    }

    // Check ancestors of the second node
    current = second;
    while (current != NULL) {
        // If we find a common ancestor, return it
        for (size_t i = 0; i < num_ancestors; i++) {
            if (current == ancestors[i]) {
                return (binary_tree_t *)current;
            }
        }
        current = current->parent;
    }

    // No common ancestor found
    return NULL;
}
