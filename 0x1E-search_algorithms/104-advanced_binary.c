#include <stdio.h>
#include <stddef.h>
#include "search_algos.h"

/**
 * advanced_binary_recursive - searches for the first occurrence of a value
 * @array: A pointer to the first element of the array to search in.
 * @size: size of the array.
 * @value: The value to search for.
 * Return: The index where value is located, or -1 if not found.
 */
int advanced_binary_recursive(int *array, size_t size, int value)
{
	size_t half = size / 2;
	size_t i;

	if (array == NULL || size == 0)
		return (-1);

	printf("Searching in array");

	for (i = 0; i < size; i++)
		printf("%s %d", (i == 0) ? ":" : ",", array[i]);

	printf("\n");

	if (half && size % 2 == 0)
		half--;

	if (value == array[half])
	{
		if (half > 0)
			return (advanced_binary_recursive(array, half + 1, value));
		return ((int)half);
	}

	if (value < array[half])
		return (advanced_binary_recursive(array, half + 1, value));

	half++;
	return (advanced_binary_recursive(array + half, size - half, value) + half);
}

/**
 * advanced_binary - Searches for the first occurrence of a value in a sorted
 * array of integers using an advanced binary search algorithm
 * @array: A pointer to the first element of the array to search in.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 * Return: The index where value is located, or -1 if not found.
 */
int advanced_binary(int *array, size_t size, int value)
{
	int index;

	index = advanced_binary_recursive(array, size, value);

	if (index >= 0 && array[index] != value)
		return (-1);

	return (index);
}
