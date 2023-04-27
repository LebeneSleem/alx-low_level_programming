#include "main.h"

/**
 * print - draws a diagonal line in the terminal
 * @n: number of times the character should be printed
 * Return: 0
 */
void print_diagonal(int n)
{
	int d, i;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}
	for (i = 0; i < n; i++)
	{
		for (d = 0; d < i; d++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
