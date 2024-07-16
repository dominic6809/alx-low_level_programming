#include <stdio.h>
#include <math.h>
#include "search_algos.h"

/**
 * jump_list - Searches for a value in a sorted singly linked list of integers
 *              using the Jump search algorithm.
 *
 * @list: A pointer to the head of the list to search in.
 * @size: The number of nodes in the list.
 * @value: The value to search for
 * Return: A pointer to the first node where the value is located.
 *         If the value is not found or if the list is NULL, return NULL.
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
    size_t jump, prev, curr;
    listint_t *start, *end;
    
    if (list == NULL || size == 0)
    {
        return (NULL);
    }
    
    jump = sqrt(size);
    start = list;
    end = list;
    
    while (end->next != NULL && end->n < value)
    {
        printf("Value checked at index [%zu] = [%d]\n", prev, end->n);

        prev += jump;
        for (size_t i = 0; i < jump && end->next != NULL; i++)
        {
            end = end->next;
        }
        
        printf("Value checked at index [%zu] = [%d]\n", prev, end->n);
        
        if (end->n >= value)
        {
            break;
        }
    }
    
    listint_t *node = start;
    while (node != NULL && node->n <= value)
    {
        printf("Value checked at index [%zu] = [%d]\n", prev, node->n);

        if (node->n == value)
        {
            return node;
        }
        node = node->next;
        prev++;
    }

    return (NULL);
}
