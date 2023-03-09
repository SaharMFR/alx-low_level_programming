#include "main.h"
/**
 * assistantFunction - Assistant function to the function
 * is_prime_number.
 * @n: the number (type int).
 * @divisor: type int.
 * Return: 1 if number is prime, 0 otherwise.
 */
int assistantFunction(int n, int divisor)
{
	if (n < 2)
		return (0);

	if (n == 2)
		return (1);

	if (n % divisor == 0)
		return (0);

	if (divisor * divisor > n)
		return (1);

	return (assistantFunction(n, divisor + 1));
}

/**
 * is_prime_number - Check if the geven number is
 * prime or not.
 * @n: the number we want to check (type int).
 * Return: 1 if the number is prime, 0 otherwise.
 */
int is_prime_number(int n)
{
	return (assistantFunction(n, 2));
}
