#include "main.h"

/**
 * _strlen - Returns the length of a string.
 * @s: The string to evaluate
 * Return: The length of the string.
 */
int _strlen(char *s)
{
	int n = 0;

	while (s[n] != '\0')
	{
		n++;
	}
	return (n);
}
