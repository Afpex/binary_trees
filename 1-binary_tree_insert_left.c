#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a node as a left-child of
 *			of another in a binary tree.
 * @parent: A pointer to the node where the left child should
 *		be inserted.
 * @value: The value to be stored in the new node.
 *
 * Return: If 'parent' is NULL or an error occurs - NULL.
 *        Otherwise - a pointer to the newly inserted node.
 *
 * Description: If 'parent' already has a left child, the new
 *        node takes its place, and the old left child becomes
 *        the left child of the new node.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);

	new = binary_tree_node(parent, value);
	if (new == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		new->left = parent->left;
		parent->left->parent = new;
	}
	parent->left = new;

	return (new);
}
