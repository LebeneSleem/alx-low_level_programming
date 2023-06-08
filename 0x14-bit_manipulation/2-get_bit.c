#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index.
 * @n: Number to search
 * @index: index
 * Return: value of the bit at index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int a; /* bit value */

	if (index > 63)
		return (-1);

	a = (n >> index) & 1;
	return (a);
}
