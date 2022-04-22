#include "search.h"


/**
 * main - Entry point
 *
 * Return: Always EXIT_SUCCESS
 */
skiplist_t *linear_skip(skiplist_t *list, int value) 
{
    skiplist_t *current = list, *find = list;

    if (list == NULL)
        return (NULL);

    while (find || find->express != NULL || find->n < value)
    {
        current = find;
        find = find->express;
        printf("Value checked at index [%lu] = [%d]\n", find->index, find->n);
    }

    if (!(find->express) || !(find->n > value))
    {
        current = find;
        while (find -> next)
        {
            find = find->next;
        }
    }

    printf("Value found between indexes [%lu] and [%lu]\n",
		   current->index, find->index);

    while (current || current->n < value)
    {
        printf("Value checked at index [%lu] = [%d]\n", current->index, current->n);
        current = current->next;
    }

    if (current)
    {
        printf("Value checked at index [%lu] = [%d]\n", current->index, current->n);
    }

    return (current && current->n == value ? current : NULL);
}
