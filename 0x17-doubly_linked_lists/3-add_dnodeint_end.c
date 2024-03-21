#include "lists.h"

/**
 * add_dnodeint_end - Adds a new node at the end of a dlistint_t list.
 * @head: Pointer to the pointer to the head of the list
 * @n: The value to store in the new node
 *
 * Return: The address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_n = malloc(sizeof(dlistint_t));
	dlistint_t *last_n = *head;

	if (new_n == NULL)
		return (NULL);

	new_n->n = n;
	new_n->next = NULL;

	if (*head == NULL)
	{
		new_n->prev = NULL;
		*head = new_n;
		return (new_n);
	}

	while (last_n->next != NULL)
		last_n = last_n->next;

	last_n->next = new_n;
	new_n->prev = last_n;

	return (new_n);
}
