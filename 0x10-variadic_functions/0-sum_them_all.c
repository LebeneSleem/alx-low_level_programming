#include "variadic_functions.h"

/**
 * sum_them_all - a function that returns the sum of all its parameters
 * @n: first integer to be used
 * Return: Sum of All
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list numbers;
	unsigned int a, sum = 0;


	va_start(numbers, n);

	if (n == 0)
		return (0);

	for (a = 0; a < n; a++)
		sum += va_arg(numbers, int);
	va_end(numbers);
	return (sum);
}
