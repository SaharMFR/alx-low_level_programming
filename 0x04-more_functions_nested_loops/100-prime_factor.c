#include <stdio.h>
#include <math.h>
/**
 * main - Print the largest prime factor of the number
 * 612852475143 , followed by a new line.
 * Return: 0
 */
int main(void)
{
	int i, largestPrimeFactor = -1;
	long number = 612852475143;

	while ((number % 2) == 0)
	{
		largestPrimeFactor = 2;
		number /= 2;
	}
	for (i = 3; i <= sqrt(number); i += 2)
	{
		while ((number % i) == 0)
		{
			largestPrimeFactor = i;
			number /= i;
		}
	}
	if (number > 2)
		largestPrimeFactor = number;

	printf("%d\n", largestPrimeFactor);

	return (0);
}
