#include <stdio.h>
#include <math.h>
#include "search_algos.h"

/**
 * jump_search - Searches for a value in a sorted singly linked list of integers
 * using the Jump search algorithm.
 *
 * @array: A pointer to the first element of the array to search in.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 * Return: The first index where the value is located, or -1 if not found.
 */
int jump_search(int *array, size_t size, int value)
{
    int index, i, curr, prev;

    if (array == NULL || size == 0)
        return (-1);

    i = (int)sqrt((double)size);
    curr = 0;
    prev = index = 0;

    do {
        printf("Value checked array[%d] = [%d]\n", index, array[index]);

        if (array[index] == value)
            return (index);
        curr++;
        prev = index;
        index = curr * i;
    } while (index < (int)size && array[index] < value);

    printf("Value found between indexes [%d] and [%d]\n", prev, index);

    for (; prev <= index && prev < (int)size; prev++)
    {
        printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
        if (array[prev] == value)
            return (prev);
    }

    return (-1);
}
