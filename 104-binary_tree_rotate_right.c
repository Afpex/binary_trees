#include "binary_trees.h"

/**
 * binary_tree_rotate_right - does a right-rotation on a binary tree
 * @tree: pointer to the root node of the tree to rotate
 *
 * Return: pointer to the new root node after rotation
 */
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *old, *new;

	if (!tree)
		return (0);

	old = tree;
	new = tree->left;

	old->parent = new;
	new->parent = NULL;
	old->left = new->right;
	if (old->left)
		old->left->parent = old;
	new->right = old;

	return (new);
}
