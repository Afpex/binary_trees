#include "binary_trees.h"

/**
 * binary_tree_size - Measures the size of a binary tree.
 * @tree: A pointer to the root node ofthe whose size is being measured
 *
 * Return: The size of the tree.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t t_size = 0;

	if (tree)
	{
		t_size += 1;
		t_size += binary_tree_size(tree->left);
		t_size += binary_tree_size(tree->right);
	}
	return (t_size);
}
