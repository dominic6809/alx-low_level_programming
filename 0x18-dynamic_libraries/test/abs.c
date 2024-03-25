#include "main.h"

/**
 * _abs - function to compute absolute value of an integer.
 * @n: integer to be checked
 * Return: absolute value of the int.
 */
int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else if (n < 0)
	{
		return (-n);
	}
	return (0);
}
