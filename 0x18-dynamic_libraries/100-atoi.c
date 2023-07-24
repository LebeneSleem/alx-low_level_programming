#include "main.h"
#include <stdio.h>

/**
 * _atoi - convert a syring to an integer
 * @s: string to be converted
 * Return: an integer
 */
int _atoi(char *s)
{
	int a = 0;
	unsigned int ab = 0;
	int min = 1;
	int isi = 0;

	while (s[a])
	{
		if (s[a] == 45)
		{
			min *= -1;
		}
		while (s[a] >= 48 && s[a] <= 57)
		{
			isi = 1;
			ab = (ab * 10) + (s[a] - '0');
			a++;
		}
		if (isi == 1)
		{
			break;
		}
		a++;
	}
	ab *= min;
	return (ab);
}
