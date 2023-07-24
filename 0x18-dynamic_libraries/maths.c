#include "main.h"

/**
 * add - Adds two integers.
 * @a: The first integer.
 * @b: The second integer.
 *
 * Return: The sum of the two integers.
 */
int add(int a, int b)
{
	return (a + b);
}

/**
 * sub - Subtracts two integers.
 * @a: The first integer.
 * @b: The second integer.
 *
 * Return: The result of subtraction (a - b).
 */
int sub(int a, int b)
{
	return (a - b);
}

/**
 * mul - Multiplies two integers.
 * @a: The first integer.
 * @b: The second integer.
 *
 * Return: The product of the two integers.
 */
int mul(int a, int b)
{
	return (a * b);
}

/**
 * div - Divides two integers.
 * @a: The first integer (dividend).
 * @b: The second integer (divisor).
 *
 * Return: The result of division (a / b).
 *         If b is zero, returns 0
 */
int div(int a, int b)
{
	if (b != 0)
		return (a / b);
	else
		return (0);
}

/**
 * mod - Computes the modulus of two integers.
 * @a: The first integer (dividend).
 * @b: The second integer (divisor).
 *
 * Return: The result of modulus (a % b).
 *         If b is zero, returns 0
 */
int mod(int a, int b)
{
	if (b != 0)
		return (a % b);
	else
		return (0);
}
