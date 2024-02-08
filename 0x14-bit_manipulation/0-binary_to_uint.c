#include "main.h"

/**
 * string_length - function retruns the length of a string
 * @b: Pointer to a string of 0 and 1 chars
 *
 * Return: size of string
 */
int string_length(const char *b)
{
	int index, string_length;

	string_length = 0;
	if (b == 0)
		return (string_length);
	for (index = 0; b[index]; index++)
		string_length++;
	return (string_length);
}

/**
 * power - function that returns the exponential power
 * @b: base integer
 * @xp: exponential integer
 *
 * Return: unsigned integer
 */
unsigned int power(int b, int xp)
{
	unsigned int total;

	total = 1;
	if (b < 0)
		return (0);
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
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: Pointer to a string of 0 and 1 chars
 *
 * Return: unsigned number or 0 is not valid
 */
unsigned int binary_to_uint(const char *b)
{
	int pos, slen;
	unsigned int total;

	total = 0;
	slen = string_length(b) - 1;

	if (b == 0)
		return (0);

	for (pos = slen;
			pos >= 0;
			pos--)
	{
		if (b[pos] == '1')
		{
			total += power(2, (slen - pos));
		}
		else if (b[pos] != '0'
				&& b[pos] != '1')
		{
			return (0);
		}
	}
	return (total);
}
