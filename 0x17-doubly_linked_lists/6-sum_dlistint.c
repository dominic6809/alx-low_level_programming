#include "lists.h"

/**
 * sum_dlistint - Returns sum of all the data (n) of a dlistint_t linked list.
 * @head: Pointer to the head of the list
 *
 * Return: The sum of all the data in the list, or 0 if the list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int i = 0;
	dlistint_t *new = head;

	while (new != NULL)
	{
		i += new->n;
		new = new->next;
	}

	return (i);
}
