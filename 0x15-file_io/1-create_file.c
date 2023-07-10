#include "main.h"

/**
 * create_file - Creates a file and write a given string to it.
 * @filename: The name of the file to create (char string).
 * @text_content: NULL terminated string to write to the file.
 * Return: 1 on success, -1 on failure.
 */

int create_file(const char *filename, char *text_content)
{
	int file, status, i;

	if (filename == NULL)
		return (0);

	file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (file == -1)
		return (-1);

	if (text_content)
	{
		for (i = 0; text_content[i] != '\0'; i++)
			;
		status = write(file, text_content, i);
		if (status == -1)
			return (-1);
	}

	close(file);
	return (1);
}
