#include "main.h"
#include <stdio.h>

/**
 * _strchr - finds a char in a string.
 * @s: The string to be checked.
 * @c: character to be searched.
 * Return: A pointer to the first occurrence of the char @c in the string @s
 * and Return NULL if char not found in the indexes.
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
