#include "main.h"

/**
 * print_last_digit - prinys the last digit of a number
 * @n: the number
 * Return: value of the last digit
 */
int print_last_digit(int n)
{
	int i = n % 10;

	if (n < 0)
		n = -n;
	if (i < 0)
		i = -i;

	_putchar(i + '0');

	return (i);
}
