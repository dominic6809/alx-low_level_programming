#include "main.h"

/**
 *  string_length - function returns the length of a string
 *  @b: pointer to a string of 0 and 1 characters
 *  Return: size of the string
 */

int string_length(const char *b)
{
	int index, string_length;

	string_length = 0;

	if (b == 0)
	{
		return (string_length);
	}
	for (index = 0; b[index]; index++)
		string_length++;
	return (string_length);
}

/**
 * power - function that returns the exponential power
 * @b: the base integer
 * @xp: exponential integer
 * Return: unsigned integer
 */
unsigned int power(int b, int xp)
{
	unsigned int total;

	total = 1;

	if (b < 0)
	{
		return (0);
	}
	if (xp == 0)
		return (total);
	while (xp > 0)
	{
		total *= b;
		xp--;
	}
	return (total);
}

/**
 * binary_to_unit - it converts a binary to an unsigned integer
 * @b: pointer to a string of 0 and 1 characters
 * Return: unsigned number or 0 is not valid
 */
unsigned int binary_to_unit(const char *b)
{
	int pos, slen;
	unsigned int total;

	total = 0;
	slen = string_length(b) - 1;

	if (b == 0)
		return (0);
	for (pos = slen; pos >= 0; pos--)
	{
		if (b[pos] == '1')
		{
			total += power(2, (slen - pos));
		}
		else if (b[pos] != '0' && b[pos] != '1')
		{
			return (0);
		}
	}
	return (total);
}
