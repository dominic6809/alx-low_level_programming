#include "main.h"
/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of file
 * @text_content: NULL terminated string to add at end of file
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int i, bytes_written, j;
	mode_t mode = S_IRUSR | S_IWUSR;

	if (filename == NULL)
		return (-1);

	i = open(filename, O_WRONLY | O_APPEND, mode);
	if (i == -1)
		return (-1);

	if (text_content != NULL)
	{
		bytes_written = write(i, text_content, strlen(text_content));
		if (bytes_written == -1)
		{
			j = -1;
			goto cleanup;
		}
	}

	j = 1;

cleanup:
	close(i);
	return (j);
}
