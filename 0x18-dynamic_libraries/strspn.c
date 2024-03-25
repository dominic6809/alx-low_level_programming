#include "main.h"
#include <stdio.h>

/**
 * _strspn - Gets the length of a prefix substring.
 * @s: The string to be searched.
 * @accept: The prefix to be measured.
 * Return: The number of bytes in s which
 * consist only of bytes from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	int m, n;
	unsigned int count = 0;

	for (m = 0; s[m] != '\0'; m++)
	{
		/* Check if the character is not a space */
		if (s[m] != ' ')
		{
			/* Check if the character is present in accept */
			for (n = 0; accept[n] != '\0'; n++)
			{
				if (s[m] == accept[n])
				{
					count++;
					break;
				}
			}
		}
		else
		{
			/* If a space is encountered, return the count */
			return (count);
		}
	}

	return (count);
}
