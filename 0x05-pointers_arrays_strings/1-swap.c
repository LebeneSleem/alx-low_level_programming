#include "main.h"
#include <stdio.h>

/**
 * swap_int - swaps the values of two integers
 * @a: The first integer
 * @b: The second integer
 * Return: 0
 */
void swap_int(int *a, int *b)
{
	int swp = *a;
	*a = *b;
	*b = swp;
}
