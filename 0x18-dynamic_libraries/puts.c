#include "main.h"
/**
 * _puts - Prints a string to stdout.
 * @s: Pointer to the string to print.
 */
void _puts(char *s)
{
	while (*s)
		_putchar(*s++);

	_putchar('\n');
}
