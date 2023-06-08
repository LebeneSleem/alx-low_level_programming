#include "main.h"

/**
 * binary_to_uint - function that converts a binary
 * number to an unsigned int.
 * @b:  pointing to a string of 0 and 1 chars
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal = 0;
	int a;

	if (!b)
		return (0);

	for (a = 0; b[a]; a++)
	{
		if (b[a] < '0' || b[a] > '1')
			return (0);
		decimal = 2 * decimal + (b[a] - '0');
	}
	return (decimal);
}
