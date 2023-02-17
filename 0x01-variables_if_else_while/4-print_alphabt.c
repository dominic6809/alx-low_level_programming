#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 *
 * Description: prints lowercase alphabets
 * Return: Always 0 when successful
 */
int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != 'e' && ch != 'q')
		{
			putchar(ch);
		}
		else
		{
		}
	}
	putchar('\n');
	return (0);
}
