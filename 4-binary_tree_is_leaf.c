#include "binary_trees.h"

/**
 * binary_tree_is_leaf - checks if a binary tree is a leaf
 * @node: The node to be checked
 *
 * Return: 1 if node is a leaf, 0 if otherwise
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->left != NULL || node->right != NULL)
		return (0);

	return (1);
}
