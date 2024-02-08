#include "main.h"
/**
 * flip_bits -  return flip bits
 * @n: current number
 * @m: new number
 * Return: 1 or -1 otherwise
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int i = n ^ m;
	unsigned int j = 0;

	while (i != 0)
	{
		j += (i & 1);
		i >>= 1;
	}
	return (j);
}
