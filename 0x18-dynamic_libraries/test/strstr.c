#include "main.h"
#include "stdio.h"

/**
 * _strstr - function to locate a substring
 * @haystack: longer string to search
 * @needle: substring to be searched for
 * Return: string or NULL
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *h = haystack;
		char *t = needle;

		while (*h == *t && *t != '\0')
		{
			h++;
			t++;
		}

		if (*t == '\0')
			return (haystack);
	}

	return (NULL);
}
