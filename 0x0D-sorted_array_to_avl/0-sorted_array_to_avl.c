#include "binary_trees.h"

/**
 * sorted_array_to_avl - tree avl
 * @array: convert into the tree
 * @size: size of array
 *
 * Return: tree avl
 */

avl_t *sorted_array_to_avl(int *array, size_t size)
{
	avl_t *root = NULL;

	root = insert(array, 0, size - 1, NULL);
	return (root);
}

/**
 * insert - a sorted array into a tree avl
 * @arr: the array to convert into the tree
 * @end: the size of the array
 * @start: the start of the array
 * @previos_node: the parent of the node
 *
 * Return: a tree avl
 */
avl_t *insert(int *array, int start, int end, avl_t *previos_node)
{
	size_t mid = 0;
	avl_t *root = NULL;

	if (start > end)
	{
		return (NULL);
	}

	mid = start + (end - start) / 2;
	root = new_node(array[mid], previos_node);
	if (root == NULL)
		return (NULL);

	root->left = insert(array, start, mid - 1, root);

	root->right = insert(array, mid + 1, end, root);

	return (root);
}


/**
 * new_node - creates a new node
 * @data: the value of the node
 * @previos_node: the parent of the node
 * Return: the node
 */
avl_t *new_node(int data, avl_t *previos_node)
{
	avl_t *node = NULL;

	node = malloc(sizeof(avl_t));
	if (node == NULL)
		return (NULL);

	node->n = data;
	node->right = NULL;
	node->left = NULL;
	node->parent = previos_node;


	return (node);
}
