#include "main.h"
int actual_prime(int n, int a);

/**
 * is_prime_number - returns 1 if ths integer is a prime numger
 * otherwise 0
 * @n: input integer
 * Return: 1 if a prime number otherwise 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}
/**
 * actual_prime - calculates if a number is prime with recursion
 * @n: number to be used
 * @a: iterator
 * Return: 1 if a prime otherwise 0
 */
int actual_prime(int n, int a)
{
	if (a == 1)
		return (1);
	if (n % a == 0 && a > 0)
		return (0);
	return (actual_prime(n, a - 1));
}
