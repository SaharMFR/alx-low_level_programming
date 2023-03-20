#include <stdio.h>
/**
 * main - Print the name of the file that the funciton was compiled from.
 * Return: 0.
 */
int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
