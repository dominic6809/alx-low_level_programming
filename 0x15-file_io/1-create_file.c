#include "main.h"
/**
 * create_file - creates a file
 * @filename: pointer to name of file to create
 * @text_content: NULL terminated string to write to the file
 * Return: 1 on success, otherwise -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int i, bytes_written;
	mode_t mode = S_IRUSR | S_IWUSR;

	if (filename == NULL)
		return (-1);

	i = open(filename, O_CREAT | O_WRONLY | O_TRUNC, mode);
	if (i == -1)
		return (-1);

	if (text_content != NULL)
	{
		bytes_written = write(i, text_content, strlen(text_content));
		if (bytes_written == -1)
			return (-1);
	}

	close(i);
	return (1);
}
