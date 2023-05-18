#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat - concatenates two strings.
 * @s1: first string
 * @s2: second string
 * @n: number of bytes
 * Return: Pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int str_len1, str_len2;
	unsigned int a = 0, b = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[str_len1] != '\0')
	{
		str_len1++;
	}
	while (s2[str_len2] != '\0')
	{
		str_len2++;
	}
	if (n >= str_len2)
		n = str_len2;
	ptr = malloc((str_len1 + n + 1) * sizeof(char));
	if (ptr == NULL)
	{
		return (NULL);
	}
	while (a < str_len1)
	{
		ptr[a] = s1[a];
		a++;
	}
	while (b < n)
	{
		ptr[a] = s2[b];
		a++;
		b++;
	}
	ptr[a] = '\0';
	return (ptr);
}
