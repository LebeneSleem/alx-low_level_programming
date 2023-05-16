#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings.
 * @s1: first string
 * @s2: second string
 * Return: Pointer to the allocated space
 */
char *str_concat(char *s1, char *s2)
{
	int length1 = 0;
	int length2 = 0;
	int a;
	int b;
	char *ptr;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[length1] != '\0')
	{
		length1++;
	}
	while (s2[length2] != '\0')
	{
		length2++;
	}

	ptr = ((char *) malloc(((length1 + length2 + 1) * sizeof(char))));
	if (ptr == NULL)
	{
		return (NULL);
	}

	for (a = 0; a < length1; a++)
	{
		ptr[a] = s1[a];
	}
	for (b = 0; b < length2; b++)
	{
		ptr[a + b] = s2[b];
	}
	ptr[a + b] = '\0';

	return (ptr);
}
