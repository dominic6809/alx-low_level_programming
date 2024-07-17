#include "search_algos.h"

/**
 * linear_search - Searches for a value in an array of integers
 *                  using the Linear search algorithm.
 * @array: A pointer to the first element of the array to search in.
 * @size:  The number of elements in the array.
 * @value: The value to search for.
 * Return: The index of the first occurrence of the value.
 *         If the value is not found or if the array is NULL, return -1.
 */
int linear_search(int *array, size_t size, int value)
{
	int val;

	if (array == NULL)
		return (-1);

	for (val = 0; val < (int)size; val++)
	{
		printf("Value checked array[%u] = [%d]\n", val, array[val]);
		if (value == array[val])
			return (val);
	}
	return (-1);
}
