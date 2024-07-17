#include <stdio.h>
#include <math.h>
#include "search_algos.h"

/**
 * linear_skip - Searches for a value in a sorted skip list of integers
 *               using the Jump search algorithm.
 *
 * @list: A pointer to the head of the skip list to search in.
 * @value: The value to search for.
 * Return: A pointer to the first node where value is located,
 *         or NULL if value is not present in list or if head is NULL.
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *nd;

	if (list == NULL)
		return (NULL);

	nd = list;

	do {
		list = nd;
		nd = nd->express;
		printf("Value checked at index [%d] = [%d]\n", (int)nd->index, nd->n);
	} while (nd->express && nd->n < value);

	if (nd->express == NULL)
	{
		list = nd;
		while (nd->next)
			nd = nd->next;
	}

	printf("Value found between indexes [%d] and [%d]\n",
	       (int)list->index, (int)nd->index);

	while (list != nd->next)
	{
		printf("Value checked at index [%d] = [%d]\n", (int)list->index, list->n);
		if (list->n == value)
			return (list);
		list = list->next;
	}

	return (NULL);
}
