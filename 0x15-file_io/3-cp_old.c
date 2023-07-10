#include "main.h"

/**
 * main - Copies the content of a file to another file.
 * @argc: The number of arguments passed to the function.
 * @argv: The list of the arguments.
 * Return: 0.
 */

int main(int argc, char *argv[])
{
	int fileFrom, fileTo, statusFrom, statusTo;
	char buffer[1204];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usege: cp file_from file_to\n");
		exit(97);
	}
	fileFrom = open(argv[1], O_RDONLY);
	if (fileFrom == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fileTo = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	if (fileTo == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	do {
		statusFrom = read(fileFrom, buffer, 1204);
		if (statusFrom == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		if (statusFrom > 0)
		{
			statusTo = write(fileTo, buffer, (ssize_t) statusFrom);
			if (statusTo == -1)
			{
				dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
				exit(99);
			}
		}
	} while (statusFrom > 0);
	statusFrom = close(fileFrom);
	if (statusFrom == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fileFrom);
		exit(100);
	}
	statusTo = close(fileTo);
	if (statusTo == -1)
	{
		dprint(STDERR_FILENO, "Error: Can't close fd %d\n", fileTo);
		exit(100);
	}
	return (0);
}
