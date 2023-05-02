#include "main.h"
#include <stdio.h>

/**
 * print_array - prints elements of an array of ontegers
 * @a: array of integers
 * @n: number of elements
 */
void print_array(int *a, int n)
{
	int l;

	for (l = 0; l < n; l++)
	{
		printf("%d", a[l]);
		if (l != (n - 1))
		{
			printf(", ");
		}}
	printf("\n");
}
