#include "search_algos.h"
#include <stdio.h>
#include <stddef.h>

/**
 * interpolation_search - Searches for a value in a sorted array of integers
 * using the Interpolation search algorithm.
 * @array: A pointer to the first element of the array to search in.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 * Return: The first index where value is located, or -1 if not found.
 */
int interpolation_search(int *array, size_t size, int value)
{
    size_t low, high, pos;
    double ft;

    if (array == NULL || size == 0)
        return (-1);

    low = 0;
    high = size - 1;

    while (low <= high && value >= array[low] && value <= array[high])
    {
        ft = (double)(high - low) / (array[high] - array[low]) * (value - array[low]);
        pos = (size_t)(low + ft);

        printf("Value checked array[%zu] = [%d]\n", pos, array[pos]);

        if (array[pos] == value)
            return ((int)pos);

        if (array[pos] < value)
            low = pos + 1;
        else
            high = pos - 1;
    }

    return (-1);
}
