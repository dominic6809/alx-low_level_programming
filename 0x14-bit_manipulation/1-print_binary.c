#include "main.h"
/**
 * print_binary - prints binary representation of a number
 * @n: pointer to a long imt
 *
 * Return: always 0
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
	{
		print_binary(n >> 1);
	}
	_putchar((n & 1) ? '1' : '0');
}
