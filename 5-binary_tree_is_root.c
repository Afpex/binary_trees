#include "binary_trees.h"

/**
 * binary_tree_is_root - checks if a given binary node is root
 * @node: the binary node to be checked
 *
 * Return: 1 if the node is root, 0 if otherwise
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node)
		return (0);

	if (node->parent == NULL)
		return (1);

	return (0);
}
