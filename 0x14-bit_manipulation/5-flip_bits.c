#include "main.h"

/**
 * flip_bits -  returns the number of bits you would
 * need to flip to get from one number to another.
 * @n: 1st number
 * @m: 2nd number
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int a, total = 0;
	unsigned long int b; /*current num*/
	unsigned long int c = n ^ m;

	for (a = 63; a >= 0; a--)
	{
		b = c >> a;
		if (b & 1)
		total++;
	}
	return (total);
}
