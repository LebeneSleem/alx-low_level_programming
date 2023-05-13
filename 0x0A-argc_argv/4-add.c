#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _isdigit - checks for a digit
 * @c: digi to be checked
 * Return: 1 if a digit
 * else 0
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

/**
 * main - adds positive integers
 * @argv: array ofbarguments
 * @argc: number of arguments
 * Return: 0 ( succes) else 1
 */
int main(int argc, char *argv[])
{
	int a = 0;
	int b;
	int c;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (b = 1; b < argc; b++)
	{
		for (c = 0; argv[b][c] != '\0'; c++)
		{
			if (!_isdigit(argv[b][c]))
			{
				printf("Error\n");
				return (1);
			}
		}
		a += atoi(argv[b]);
	}
	printf("%d\n", a);
	return (0);
}
