#include "main.h"
#include <stdio.h>

/**
 * leet - encodes a string
 * @l: string o be analysed
 * Return: string with all vowels changed
 */
char *leet(char *l)
{
	char a[] = "aeotLAEOTL";
	char b[] = "4307143071";
	int c = 0;
	int d;

	while (*(l + c) != '\0')
	{
		for (d = 0; d <= 9; d++)
		{
			if (*(l + c) == a[d])
			{
				*(l + c) = b[d];
			}
		}
		d++;
	}
	return (l);
}
