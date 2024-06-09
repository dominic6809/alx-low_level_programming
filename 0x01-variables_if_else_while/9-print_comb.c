#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry point
 * Description: prints combined single-digit numbers
 * Return: 0 when always successful
 */

int main(void)
{
	int i;

	for (i = '0'; i <= '9' ; i++)
	{
		putchar(i);

		if (i != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');
	return (0);
}
