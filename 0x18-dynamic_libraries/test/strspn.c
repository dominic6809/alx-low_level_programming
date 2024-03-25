#include "main.h"
#include <stdio.h>

/**
 * _strspn - function to get the length of a prefix substring.
 * @s: string to be searched.
 * @accept: prefix to measure
 * Return: number of bytes in @s which consist only of bytes from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	int m, p;
	unsigned int val = 0;

	for (m = 0; s[m] != '\0'; m++)
	{
		/* Check if the character is not a space */
		if (s[m] != ' ')
		{
			/* Check if the character is present in accept */
			for (p = 0; accept[p] != '\0'; p++)
			{
				if (s[m] == accept[p])
				{
					val++;
					break;
				}
			}
		}
		else
		{
			/* If a space is encountered, return the val */
			return (val);
		}
	}

	return (val);
}
