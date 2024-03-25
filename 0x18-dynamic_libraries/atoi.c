#include "main.h"

/**
 * _atoi - Converts a string to an integer.
 * @s: The string to be converted
 * Return: The integer value of the converted string.
 */
int _atoi(char *s)
{
	int index = 1;
	unsigned int val = 0;

	while (*s)
	{
		if (*s == '-')
		{
			index *= -1;
		}
		else if (*s >= '0' && *s <= '9')
		{
			val = (val * 10) + (*s - '0');
		}
		else if (val > 0)
		{
			break;
		}
		s++;
	}

	return (val * index);
}
