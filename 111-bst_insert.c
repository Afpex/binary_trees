#include "binary_trees.h"

/**
 * bst_insert - inserts a value in a Binary Search Tree
 * @tree: double pointer to the root node of the BST to insert
 *	the value
 * @value: value to store in the node to be inserted
 *
 * Return: A pointer to the created node, or NULL on failure
 */
bst_t *bst_insert(bst_t **tree, int value)
{
	bst_t *prsnt, *new;

	if (tree != NULL)
	{
		prsnt = *tree;

		if (prsnt == NULL)
		{
			new = binary_tree_node(prsnt, value);
			if (new == NULL)
				return (NULL);
			return (*tree = new);
		}

		if (value < prsnt->n) /* inserts in the left subtree */
		{
			if (prsnt->left != NULL)
				return (bst_insert(&prsnt->left, value));

			new = binary_tree_node(prsnt, value);
			if (new == NULL)
				return (NULL);
			return (prsnt->left = new);
		}
		if (value > prsnt->n) /* inserts in the right subtree */
		{
			if (prsnt->right != NULL)
				return (bst_insert(&prsnt->right, value));

			new = binary_tree_node(prsnt, value);
			if (new == NULL)
				return (NULL);
			return (prsnt->right = new);
		}
	}
	return (NULL);
}
