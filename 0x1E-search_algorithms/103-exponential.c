#include <stdio.h>
#include <stddef.h>
#include <math.h>
#include "search_algos.h"

/**
 * binary_search - Searches for a value in a sorted array of integers
 *                 using the Binary search algorithm.
 *
 * @array: A pointer to the first element of the array to search in.
 * @left: The starting index of the subarray to search in.
 * @right: The ending index of the subarray to search in.
 * @value: The value to search for.
 * Return: The first index where value is located, or -1 if not found.
 */
int binary_search(int *array, size_t left, size_t right, int value)
{
    size_t i;

    if (array == NULL)
        return (-1);

    while (right >= left)
    {
        printf("Searching in array: ");
        for (i = left; i < right; i++)
            printf("%d, ", array[i]);
        printf("%d\n", array[i]);

        i = left + (right - left) / 2;
        if (array[i] == value)
            return (i);
        if (array[i] > value)
            right = i - 1;
        else
            left = i + 1;
    }

    return (-1);
}

/**
 * exponential_search - Searches for a value in a sorted array of integers
 *                      using the Exponential search algorithm.
 *
 * @array: A pointer to the first element of the array to search in.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 * Return: The first index where value is located, or -1 if not found.
 */
int exponential_search(int *array, size_t size, int value)
{
    size_t bound = 1;
    size_t left, right;

    if (array == NULL || size == 0)
        return (-1);

    if (array[0] == value)
        return (0);

    while (bound < size && array[bound] < value)
    {
        printf("Value checked array[%lu] = [%d]\n", bound, array[bound]);
        bound *= 2;
    }

    left = bound / 2;
    right = (bound < size) ? bound : size - 1;
    printf("Value found between indexes [%lu] and [%lu]\n", left, right);

    return binary_search(array, left, right, value);
}
