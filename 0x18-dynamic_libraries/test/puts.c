#include "main.h"
/**
 * _puts - prints a string to stdandard output.
 * @s: ptr to the string to be printed.
 * Return: sucess 0, -1 failure
 */
void _puts(char *s)
{
	while (*s)
		_putchar(*s++);

	_putchar('\n');
}
