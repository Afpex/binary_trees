#include "binary_trees.h"

/**
 * array_to_heap -Builds Max Binary Heap tree from an array
 * @array: pointer to the first element of the array to be converted
 * @size: the number of elementS in the array
 *
 * Return: pointer to node of the created Binary Heap
 *         NULL on failure
 */
heap_t *array_to_heap (int *array, size_t size)
{
	unsigned int j;
	heap_t *root = NULL;

	for (j = 0; j < size; j++)
		heap_insert(&root, array[j]);

	return (root);
}
