#include "binary_trees.h"

/**
 * binary_tree_node - Entry Point
 * @parent: variable
 * @value: variable
 * Return: 0
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{

	binary_tree_t *nodo;

	nodo = malloc(sizeof(binary_tree_t));
	if (nodo == NULL)
		return (NULL);
	/*Asignar el dato e iniciar hojas*/
	nodo->parent = parent;
	nodo->n = value;
	nodo->left = nodo->right = NULL;
	return (nodo);
}
