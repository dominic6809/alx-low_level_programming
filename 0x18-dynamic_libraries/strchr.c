#include "main.h"
#include <stdio.h>

/**
 * _strchr - Locates a character in a string.
 *
 * @s: The string to check.
 * @c: The character we're looking for.
 * Return: A pointer to the first occurrence of the character @c in the string
 * @s. Return NULL if the character not found.
 */
char *_strchr(char *s, char c)
{
	int pos;

	for (pos = 0; s[pos] != '\0'; pos++)
	{
		if (s[pos] == c)
		{
			return (s + pos);
		}
	}

	return (NULL);
}
