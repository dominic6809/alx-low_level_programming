#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position.
 * @h: Pointer to the pointer to the head of the list
 * @idx: Index of the list where the new node should be added
 * @n: The value to store in the new node
 * Return: The address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_n, *current;
	unsigned int temp = 0;

	if (h == NULL)
		return (NULL);

	if (idx == 0)
		return (add_dnodeint(h, n));

	current = *h;
	while (current != NULL && temp < idx - 1)
	{
		current = current->next;
		temp++;
	}

	if (current == NULL && temp == idx - 1)
		return (add_dnodeint_end(h, n));
	else if (current != NULL)
	{
		new_n = malloc(sizeof(dlistint_t));
		if (new_n == NULL)
			return (NULL);

		new_n->n = n;
		new_n->prev = current;
		new_n->next = current->next;
		if (current->next != NULL)
			current->next->prev = new_n;
		current->next = new_n;

		return (new_n);
	}

	return (NULL);
}
