#include "main.h"

/**
 * _strncat - appends a string
 * @dest: the string to be appended
 * @src: the string to be appended to dest
 * @n: The number of bytes
 * Return: A pointer to the resulting string
 */
char *_strncat(char *dest, char *src, int n)
{
	int index = 0, dest_leb = 0;

	while (dest[index++])
		dest_leb++;
	for (index = 0; src[index] && index < n; index++)
		dest[dest_leb++] = src[index];
	return (dest);
}
