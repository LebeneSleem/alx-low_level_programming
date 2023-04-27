#include "main.h"
#include <stdio.h>

/**
 * print_most_numbers - prints the numbers, from 0 to 9
 * Return: 0
 */
void print_most_numbers(void)
{
	char numbers[] = "01356789";
	int i;

	for (i = 0; i < 10; i++)
	{
		_putchar(numbers[i]);
	}
	_putchar('\n');
}