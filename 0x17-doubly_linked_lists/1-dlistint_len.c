#include "lists.h"

/**
 * dlistint_len - Counts the number of elements in a dlistint_t list.
 * @h: Pointer to the head of the list
 *
 * Return: The number of nodes in the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t temp = 0;
	const dlistint_t *current = h;

	while (current != NULL)
	{
		temp++;
		current = current->next;
	}

	return (temp);
}
