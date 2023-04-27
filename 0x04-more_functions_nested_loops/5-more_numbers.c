#include "main.h"

/**
 * more_numbers -  prints 10 times the numbers, from 0 to 14
 * Return: 0
 */
void more_numbers(void)
{
	int a, b;
	char num[] = "01234567891011121314";

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b <= 19; b++)
		{
			_putchar(num[b]);
		}
		{
			_putchar('\n');
		}
	}
}
