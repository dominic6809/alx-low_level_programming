#include <stdio.h>
#include <math.h>
#include "search_algos.h"

/**
 * jump_list - Searches for a value in a sorted list of integers using the
 *             Jump search algorithm.
 *
 * @list: A pointer to the head of the list to search in.
 * @size: The number of nodes in the list.
 * @value: The value to search for.
 * Return: A pointer to the first node where value is located,
 *         or NULL if value is not present in list or if head is NULL.
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t curr, index, i;
	listint_t *prev;

	if (list == NULL || size == 0)
		return (NULL);

	curr = (size_t)sqrt((double)size);
	index = 0;
	i = 0;

	do {
		prev = list;
		i++;
		index = i * curr;

		while (list->next && list->index < index)
			list = list->next;

		if (list->next == NULL && index != list->index)
			index = list->index;

		printf("Value checked at index [%lu] = [%d]\n", index, list->n);

	} while (index < size && list->next && list->n < value);

	printf("Value found between indexes [%lu] and [%lu]\n", prev->index, list->index);

	for (; prev && prev->index <= list->index; prev = prev->next)
	{
		printf("Value checked at index [%lu] = [%d]\n", prev->index, prev->n);
		if (prev->n == value)
			return (prev);
	}

	return (NULL);
}
