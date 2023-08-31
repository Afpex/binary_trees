#include "binary_trees.h"
/**
 * binary_trees_ancestor - finds the lowest common ancestor of two nodes
 * @first: a pointer to the first node
 * @second: a pointer to the second node
 *
 * Return: pointer to the lowest common ancestor
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second)
{
	binary_tree_t *c, *d;

	if (!first || !second)
		return (NULL);
	if (first == second)
		return ((binary_tree_t *)first);

	c = first->parent;
	d = second->parent;
	if (first == d || !c || (!c->parent && d))
		return (binary_trees_ancestor(first, d));
	else if (c == second || !d || (!d->parent && c))
		return (binary_trees_ancestor(c, second));
	return (binary_trees_ancestor(c, d));
}
