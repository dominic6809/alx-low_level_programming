#include "search_algos.h"

/**
 * print_subarray - Prints the subarray currently being searched.
 *
 * @array: A pointer to the first element of the array.
 * @start: The start index of the subarray.
 * @end:   The end index of the subarray.
 */
void print_subarray(int *array, size_t start, size_t end)
{
    printf("Searching in array:");
    for (size_t i = start; i <= end; i++)
    {
        printf(" %d", array[i]);
    }
    printf("\n");
}

/**
 * binary_search - Searches for a value in a sorted array of integers
 *                  using the Binary search algorithm.
 *
 * @array: A pointer to the first element of the array to search in.
 * @size:  The number of elements in the array.
 * @value: The value to search for.
 *
 * Return: The index of the value if found.
 *         If the value is not found or if the array is NULL, return -1.
 */
int binary_search(int *array, size_t size, int value)
{
    size_t start = 0;
    size_t end = size - 1;
    size_t mid;
    
    if (array == NULL)
    {
        return (-1);
    }

    while (start <= end)
    {
        print_subarray(array, start, end);

        mid = start + (end - start) / 2;
        
        if (array[mid] == value)
        {
            return ((int)mid);  /* Return the index if the value is found */
        }
        else if (array[mid] < value)
        {
            start = mid + 1;  /* Move to the right subarray */
        }
        else
        {
            end = mid - 1;  /* Move to the left subarray */
        }
    }

    /* Return -1 if the value is not found */
    return (-1);
}
