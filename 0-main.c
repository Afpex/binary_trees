#include <stdlib.h>
#include "binary_trees.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	binary_tree_t *root;

	root = binary_tree_node(NULL, 83);

	root->left = binary_tree_node(root, 21);
	root->left->left = binary_tree_node(root->left, 12);
	root->left->right = binary_tree_node(root->left, 25);

	root->right = binary_tree_node(root, 398);
	root->right->left = binary_tree_node(root->right, 245);
	root->right->right = binary_tree_node(root->right, 527);

	binary_tree_print(root);
	return (0);
}
