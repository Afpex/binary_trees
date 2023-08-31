#include "binary_trees.h"

/**
 * binary_tree_rotate_left - performs a left-rotation on a
 *				binary tree
 * @tree: a pointer to the root node of the tree to rotate
 *
 * Return: Pointer to the new root node of the binary tree
 */
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *old, *new;

	if (tree == NULL || tree->right == NULL)
		return (NULL);

	old = tree->right;
	new = old->left;
	old->left = tree;
	tree->right = new;
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
