#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - Searches a string for any of a set of bytes.
 * @s: The string to be searched.
 * @accept: The set of bytes to search for
 * Return: A pointer to the byte in @s that matches one of the bytes in @accept
 *         or NULL if no such byte is found.
 */
char *_strpbrk(char *s, char *accept)
{
	int x = 0;

	while (s[x])
	{
		int j;

		for (j = 0; accept[j]; j++)
		{
			if (s[x] == accept[j])
				return (s + x);
		}
		x++;
	}

	return (NULL);
}
