#include "binary_trees.h"

/**
 * binary_tree_rotate_right - does a right-rotation on a binary tree
 * @tree: pointer to the root node of the tree to rotate
 *
 * Return: pointer to the new root node after rotation
 */
binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *old, *new;

	if (tree == NULL || tree->left == NULL)
		return (NULL);

	old = tree->left;
	new = old->right;
	old->right = tree;
	tree->left = new;
	if (new != NULL)
		new->parent = tree;
	new = tree->parent;
	tree->parent = old;
	old->parent = new;
	if (new != NULL)
	{
		if (new->left == tree)
			new->left = old;
		else
			new->right = old;
	}

	return (old);
}
