#include "main.h"

/**
 * clear_bit - sets value of a bit to 0
 * @n: pointer to unsigned long int
 * @index: index starting from 0
 * Return: 1 otherwise 0
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	i = ~(1UL << index);
	*n &= i;

	return (1);
}
