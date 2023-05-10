#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: string whose length is to be returned
 * Return: The length of the string
 */
int _strlen_recursion(char *s)
{
	int lebx = 0;

	if (*s)
	{
		lebx++;
		lebx += _strlen_recursion(s + 1);
	}
	return (lebx);
}
