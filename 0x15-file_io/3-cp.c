#include "main.h"
/**
 * close_handler - function to handle close errors
 * @src: source file
 * @dest: destination_file
 * Return: void upon success
 */

void close_handler(int src, int dest)
{
	int code;

	code = close(src);
	if (code == FILE_ERROR)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n",
				src);
		exit(CANNOT_CLOSE);
	}
	code = close(dest);
	if (code == FILE_ERROR)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n",
				dest);
		exit(CANNOT_CLOSE);
	}
}

/**
 * error_handler - function to handle file errors
 * @src: source_file
 * @dest: destination_file
 * @argv: arguments vector.
 * Return: void on success
 */

void error_handler(int src, int dest, char *argv[])
{
	if (src == FILE_ERROR)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
				argv[1]);
		exit(DOES_NOT_EXIST_OR_UNABLE_TO_READ);
	}
	if (dest == FILE_ERROR)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n",
				argv[2]);
		exit(CANNOT_CREATE_OR_WRITE);
	}
}

/**
 * main - copies the content of a file to another file.
 * @argc: argument count
 * @argv: arguments vector
 * Return: 0 for sucess and anything else is an error
 */

int main(int argc, char *argv[])
{
	int src, dest;
	char file_buffer[BUFFER_SIZE];
	ssize_t red, written;

	if (argc != ARGUMENT_COUNT_EXPECTED)
	{
		dprintf(STDERR_FILENO, "%s\n",
				"Usage: cp file_from file_to");
		exit(INVALID_NUMBER_OF_ARGUMENTS);
	}
	src = open(argv[1], O_RDONLY);
	dest = open(argv[2], O_CREAT | O_WRONLY
			| O_TRUNC | O_APPEND, 0664);
	error_handler(src, dest, argv);
	red = BUFFER_SIZE;
	while (red == BUFFER_SIZE)
	{
		red = read(src, file_buffer, BUFFER_SIZE);
		if (red == FILE_ERROR)
			error_handler(FILE_ERROR, 0, argv);
		written = write(dest, file_buffer, red);
		if (written == FILE_ERROR)
			error_handler(0, FILE_ERROR, argv);
	}
	close_handler(src, dest);
	return (0);
}
