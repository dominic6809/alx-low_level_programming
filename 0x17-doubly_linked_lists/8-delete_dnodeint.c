#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes the node at a given position.
 * @head: Pointer to the pointer to the head of the list
 * @index: Index of the node to delete
 *
 * Return: 1 if successful, -1 if failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *new_n = *head, *temp;
	unsigned int num = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(new_n);
		return (1);
	}

	while (new_n != NULL && num < index - 1)
	{
		new_n = new_n->next;
		num++;
	}

	if (new_n == NULL || new_n->next == NULL)
		return (-1);

	temp = new_n->next;
	new_n->next = temp->next;
	if (temp->next != NULL)
		temp->next->prev = new_n;
	free(temp);

	return (1);
}
