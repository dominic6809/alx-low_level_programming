#include "main.h"
/**
 * read_textfile - short description
 * @filename: name of file
 * @letters: characters inside the file
 * Return: returns the description
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *file;
	size_t written;
	int print;

	written = 0;

	if (filename == NULL)
		return (0);

	file = fopen(filename, "r");

	if (file == NULL)
		return (0);

	print = fgetc(file);
	while (written <= letters)
	{
		if (written == letters || print == -1)
			break;
		if (write(STDOUT_FILENO, &print, 1) == -1)
			return (0);

		written++;
		print = fgetc(file);
	}

	fclose(file);
	return (written);
}
