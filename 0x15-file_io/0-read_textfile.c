#include "main.h"

/**
 * read_textfile - Reads a text file and prints it to the POSIX standard output.
 * @filename: The name of the file (char string).
 * @letters: The number of letters it should read and print.
 * Return: The actual number of letters it could read and print, 0 if error.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int myFile;
	ssize_t Read, Write;
	char *buffer;

	if (filename == NULL || letters == 0)
		return (0);

	myFile = open(filename, O_RDWR);
	
	if (myFile == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	Read = read(myFile, buffer, letters);

	if (Read == -1)
		return (0);

	Write = write(STDOUT_FILENO, buffer, Read);

	if (Write == -1 || Read != Write)
		return (0);

	free(buffer);
	close(myFile);

	return (Write);
}
