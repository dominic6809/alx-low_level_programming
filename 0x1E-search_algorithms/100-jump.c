#include <stdio.h>
#include <math.h>
#include "search_algos.h"

/**
 * jump_search - Searches for a value in a sorted singly linked list of integers
 *              using the Jump search algorithm.
 *
 * @list: A pointer to the head of the list to search in.
 * @size: The number of nodes in the list.
 * @value: The value to search for.
 * Return: A pointer to the first node where the value is located.
 *         If the value is not found or if the list is NULL, return NULL.
 */
int jump_search(int *array, size_t size, int value)
{
    if (array == NULL)
        return -1;

    size_t curr;
    size_t prev;
    size_t i;

    curr = sqrt(size);
    prev = 0;

    while (array[prev] < value)
    {
        printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);

        if (prev + curr >= size)
        {
            for (i = prev; i < size; i++)
                printf("Value checked array[%lu] = [%d]\n", i, array[i]);
            break;
        }

        if (array[prev + curr] >= value)
        {
            for (i = prev; i <= prev + curr; i++)
                printf("Value checked array[%lu] = [%d]\n", i, array[i]);
            break;
        }

        prev += curr;
    }

    for (i = prev; i < size && i < prev + curr; i++)
    {
        printf("Value checked array[%lu] = [%d]\n", i, array[i]);
        if (array[i] == value)
            return i;
    }

    return -1;
}
