#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: string to be looked.
 * @accept: set of bytes to search for
 * Return: pointer to the byte in @s that matches one of the bytes in @accept
 *         or NULL if not found.
 */
char *_strpbrk(char *s, char *accept)
{
	int h = 0;

	while (s[h])
	{
		int j = 0;

		for (; accept[j]; j++)
		{
			if (s[h] == accept[j])
				return (s + h);
		}
		h++;
	}

	return (NULL);
}
