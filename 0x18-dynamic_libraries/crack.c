#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

/**
 * print - function to print a message and exit
 * @format: format string (ignored)
 * Return: void success
 */

int print(const char *format, ...)
{
	/* write the winning numbers */
	write(1, "9 8 10 24 75 +9\n", 17);
	write(1, "Congrats, You won the mega prize!\n", 38);

	/* Exit the program with success status */
	exit(EXIT_SUCCESS);
}
