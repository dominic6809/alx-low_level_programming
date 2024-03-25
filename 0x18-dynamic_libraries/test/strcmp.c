#include "main.h"

/**
 * _strcmp - function that compares string values
 * @s1: first string value to be compared
 * @s2: second input value
 * Return: 0 success, -1 error
 */
int _strcmp(char *s1, char *s2)
{
	int b = 0;
	int i;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}
