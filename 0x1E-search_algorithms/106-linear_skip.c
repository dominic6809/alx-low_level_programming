#include <stdio.h>
#include "search_algos.h"

/**
 * linear_skip - Searches for a value in a sorted skip list of integers
 *               using the express lane nodes to skip sections of the list.
 *
 * @list: A pointer to the head of the skip list to search in.
 * @value: The value to search for.
 * Return: A pointer to the first node where value is located,
 *         or NULL if value is not present in the list or if head is NULL.
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *node;

	if (list == NULL)
		return (NULL);

	node = list;

	do {
		list = node;
		node = node->express;
		printf("Value checked at index [%lu] = [%d]\n", node->index, node->n);
	} while (node->express && node->n < value);

	if (node->express == NULL)
	{
		list = node;
		while (node->next)
			node = node->next;
	}

	printf("Value found between indexes [%lu] and [%lu]\n"
		       list->index, node->index);

	while (list != node->next)
	{
		printf("Value checked at index [%lu] = [%d]\n", list->index, list->n);
		if (list->n == value)
			return (list);
		list = list->next;
	}

	return (NULL);
}
