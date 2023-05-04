#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: array to be reversed
 * @n: number of elements of the array
 * Return: Pointer to the revrsed array
 */
void reverse_array(int *a, int n)
{
	int leb, sle;

	for (sle = n - 1; sle >= n / 2; sle--)
	{
		leb = a[n - 1 - sle];
		a[n - 1 - sle] = a[sle];
		a[sle] = leb;
	}
}
