#include "main.h"
/**
 * print_alphabet_x10 - Print 10 times the alphabet
 * in lowercase.
 * Return: 0
 */
void print_alphabet_x10(void)
{
	int i = 0;

	while (i < 10)
	{
		print_alphabet();
		i++;
	}
}
