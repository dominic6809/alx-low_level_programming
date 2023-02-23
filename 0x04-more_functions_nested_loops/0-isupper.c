#include "main.h"

/**
 * _isupper - checks if a character is uppercase
 * @c: carrier integer variable
 * Return: 1 if true, 0 if false
 */

int _isupper(int a)
{
	if (a >= 65 && a <= 90)
	{
		return (1);
	}
	return (0);
}
