#include "main.h"

/**
 * _atoi - code to convert a string to an integer.
 * @s: string to be converted
 * Return: integer value of the converted string.
 */
int _atoi(char *s)
{
	int digit = 1;
	unsigned int val = 0;

	while (*s)
	{
		if (*s == '-')
		{
			digit *= -1;
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

	return (val * digit);
}
