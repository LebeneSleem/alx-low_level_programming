#include "main.h"

/**
 * _strpbrk - locates the first occurrence in the string
 * @s: input
 * @accept: input
 * Return: 0 (success)
 */
char *_strpbrk(char *s, char *accept)
{
	int a;

	while (*s)
	{
		for (a = 0; accept[a]; a++)
		{
			if (*s == accept[a])
				return (s);
		}
		s++;
	}
	return ('\0');
}
