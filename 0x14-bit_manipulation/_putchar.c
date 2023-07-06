#include <unistd.h>
/**
 * _putchar - To write a character.
 * Description: Write the cahracter c to standard output library to print it.
 * @c: The character to print. (char)
 * Return: 1 on success.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
