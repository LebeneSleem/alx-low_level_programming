#include "main.h"
#include <stdio.h>

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 * Return: 0
 */
void rev_string(char *s)
{
	int leb = 0, index = 0;
	char sle;

	while (s[index++])
		leb++;

	for (index = leb - 1; index >= leb / 2; index--)
	{
		sle = s[index];
		s[index] = s[leb - index - 1];
		s[leb - index - 1] = sle;
	}
}
