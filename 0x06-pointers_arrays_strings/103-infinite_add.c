#include "main.h"
#include <stdio.h>
/**
 * infinite_add - adds two numbers
 * @n1: number one.
 * @n2: number two.
 * @r: buffer that the function will use to store the result.
 * @size_r: buffer size:
 * Return: the pointer to dest.
 */
#include <string.h>
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1 = strlen(n1);
	int len2 = strlen(n2);
	int carry = 0;
	int i, j, digit, sum;

	if (len1 + len2 >= size_r - 1)
	{
		return (0);
	}
	r[len1 + len2] = '\0';
	i = len1 - 1;
	j = len2 - 1;
	while (i >= 0 || j >= 0 || carry)
	{
		sum = carry;
		if (i >= 0)
		{
			sum += n1[i] - '0';
			i--;
		}
		if (j >= 0)
		{
			sum += n2[j] - '0';
			j--;
		}
		digit = sum % 10;
		carry = sum / 10;
		len1--;
		r[len1 + len2 + carry] = digit + '0';
	}
	if (carry == 1)
	{
		r[0] = carry + '0';
		return (&r[0]);
	}
	else
	{
		return (&r[len1 + len2 - strlen(r)]);
	}
}
