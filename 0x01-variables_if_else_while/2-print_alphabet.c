#include <stdio.h>
/**
 * main - main block
 * Description: print the alphabet in lowercase
 * Return: 0
 */
int main(void)
{
	for (int i = 0; i < 26; i++)
	{
		putchar(97 + i);
	}
	putchar('\n');

	return (0);
}
