#include "search_algos.h"

/**
 * linear_search - Searches for a value in an array of integers
 *                  using the Linear search algorithm.
 *
 * @array: A pointer to the first element of the array to search in.
 * @size:  The number of elements in the array.
 * @value: The value to search for.
 *
 * Return: The index of the first occurrence of the value.
 *         If the value is not found or if the array is NULL, return -1.
 */
int linear_search(int *array, size_t size, int value)
{
    size_t i;
    
    if (array == NULL)
    {
        return (-1);
    }
    
    for (i = 0; i < size; i++)
    {
        /* Print the value at the current index */
        printf("Value checked array[%zu] = [%d]\n", i, array[i]);

        /* Check if the current element is the value we are looking for */
        if (array[i] == value)
        {
            return ((int)i);
        }
    }

    /* Return -1 if the value is not found */
    return (-1);
}
