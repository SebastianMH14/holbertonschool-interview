#include "lists.h"

/**
 * insert_node - node
 * @head: node point to head
 * @number: number to insert
 * Return: list with new node
 */
listint_t *insert_node(listint_t **head, int number)
{
	listint_t *node = NULL;
	listint_t *aux = NULL;



	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);
	node->n = number;

	if (*head == NULL)
	{
		*head = node;
		node->next = NULL;
		return (node);
	}
	aux = *(head);
	if (aux->n >= number)
	{
		node->next = aux;
		*(head) = node;
		return (node);
	}

	while (aux->next != NULL)
	{
		if (aux->next->n > number)
		{
			node->next = aux->next;
			aux->next = node;
			return (node);
		}
		aux = aux->next;
	}
	aux->next = node;
	node->next = NULL;
	return (node);
}
