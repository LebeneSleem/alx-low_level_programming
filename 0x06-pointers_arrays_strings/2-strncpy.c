#include "main.h"

/**
 * _strncpy - copies a string
 * @src: The source string
 * @dest: the buffer storing the string copy
 * @n: the number of bytes to be copied
 * Return: a pointer to the resulting string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int index = 0, src_lebx = 0;

	while (src[index++])
		src_lebx++;

	for (index = 0; src[index] && index < n; index++)
		dest[index] = src[index];

	for (index = src_lebx; index < n; index++)
		dest[index] = '\0';
	return (dest);
}
