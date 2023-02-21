#include "main.h"
/**
 * main - main block
 * Description: Print _putchar without including standard libraries.
 * Return: 0
 */
int main(void)
{
	char arr[] = "_putchar";
	int i = 0;

	while (arr[i] != '\0')
	{
		_putchar(arr[i]);
		i++;
	}

	_putchar('\n');

	return (0);
}
