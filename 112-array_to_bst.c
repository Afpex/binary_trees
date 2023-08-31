#include "binary_trees.h"

/**
 * array_to_bst - Builds a Binary Search Tree from an array
 * @array: pointer to the first element of the array to be converted
 * @size: number of element in the array
 *
 * Return: pointer to the root node of the created BST, or NULL
 *	on failure
 */
bst_t *array_to_bst(int *array, size_t size)
{
	bst_t *tree = NULL;
	size_t f, g;

	if (array == NULL)
		return (NULL);

	for (f = 0; f < size; f++)
	{
		for (g = 0; g < f; g++)
		{
			if (array[g] == array[f])
				break;
		}
		if (g == f)
		{
			if (bst_insert(&tree, array[f]) == NULL)
				return (NULL);
		}
	}

	return (tree);
}
