#include "binary_trees.h"
#include "102-binary_tree_is_complete.c"
/**
 * check_max - goes through a binary tree cheking ropt as max value
 * @tree: pointer to the root
 * Return: 1 if all nodes are max, 0 in other cases
 **/
int check_max(const binary_tree_t *tree)
{
	int tmpleft = 1, tmpright = 1;

	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (1);
	if (tree->left)
	{
		if (tree->n <= tree->left->n)
			return (0);
		tmpleft = check_max(tree->left);
	}
	if (tree->right)
	{
		if (tree->n <= tree->right->n)
			return (0);
		tmpright = check_max(tree->right);
	}
	return (tmpleft && tmpright);
}
/**
 * binary_tree_is_heap - checks if a binary tree is heap
 * @tree: pointer to the root node of the tree to be checked
 * Return: 1 in case tree is a heap BTS, 0 otherwise
 **/
int binary_tree_is_heap(const binary_tree_t *tree)
{
	int tmp;

	if (!tree)
		return (0);

	tmp = binary_tree_is_complete(tree);
	if (!tmp)
		return (0);
	return (check_max(tree));
}
