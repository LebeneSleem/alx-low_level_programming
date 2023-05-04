#include "main.h"
#include <stdio.h>

/**
 * rot13 - encodes a string using rot13
 * @l: string to be encoded
 * Return: The encoded string
 */
char *rot13(char *l)
{
	int a, b;
	char *string1 = {"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz"};
	char *string2 = {"NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm"};

	for (a = 0; l[a] != '\0'; a++)
	{
		for (b = 0; b < 52; b++)
		{
			if (l[a] == string1[b])
			{
				l[a] = string2[b];
				break;
			}
		}
	}
	return (l);
}
