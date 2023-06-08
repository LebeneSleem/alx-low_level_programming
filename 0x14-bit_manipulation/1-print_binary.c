#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: number whose binary is to be printed
 * Return: 0 (Success)
 */
void print_binary(unsigned long int n)
{
	int a, total = 0;
	unsigned long int number;

	for (a = 63; a >= 0; a--)
	{
		number = n >> 1;

		if (number & 1)
		{
			_putchar('1');
			total++;
		}
		else if (total)
			_putchar('0');
	}
	if (!total)
		_putchar('0');
}
