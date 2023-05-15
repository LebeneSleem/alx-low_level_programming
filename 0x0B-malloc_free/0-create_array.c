#include "main.h"
#include <stdlib.h>

/**
 * create_array -  creates an array of chars, and
 * initializes it with a specific char.
 * @size: size of the character
 * @c: character to be used
 * Return: Pointer to the array or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *ptra;
	unsigned int b;

	ptra = (char *) malloc(size * sizeof(char));

	for (b = 0; b < size; b++)
	{
		ptra[b] = c;
	}
	return (ptra);

	if (size == 0)
		return (NULL);
}
