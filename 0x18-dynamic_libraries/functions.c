#include <stdio.h>
#include <unistd.h>

/**
 * add - Calculates the sum of 2 integers.
 * @a: The first integer.
 * @b: The second integer.
 * Return: The sum.
 */
int add(int a, int b)
{
	return (a + b);
}

/**
 * sub - Subtracts the second integer from the first one.
 * @a: The first integer.
 * @b: The second integer.
 * Return: The result of subtraction.
 */
int sub(int a, int b)
{
	return (a - b);
}

/**
 * mul - Calculates the multiplication of 2 integers.
 * @a: The first integer.
 * @b: The second integer.
 * Return: The result of multiplication.
 */
int mul(int a, int b)
{
	return (a * b);
}

/**
 * div - Divides the first integer by the second one.
 * @a: The first integer.
 * @b: The second integer.
 * Return: The result of division.
 */
int div(int a, int b)
{
	return (a / b);
}

/**
 * mod - Calculates the remainder of division.
 * @a: The first integer.
 * @b: The second integer.
 * Return: The remainder.
 */
int mod(int a, int b)
{
	return (a % b);
}
