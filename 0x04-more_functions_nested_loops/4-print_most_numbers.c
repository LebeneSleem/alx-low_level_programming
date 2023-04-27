#include "main.h"
#include <stdio.h>

/**
 * print_most_numbers - prints the numbers, from 0 to 9
 * Return: 0
 */
void print_most_numbers(void)
{
	char numbers[] = {'0', '1', '3', '5', '6', '7', '8', '9'};
	int i;

	for (i = 0; i < 10; i++)
	{
		_putchar(numbers[i]);
	}
	_putchar('\n');
}
