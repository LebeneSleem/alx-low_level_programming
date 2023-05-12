#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: string number
 * @argv: argument
 * Return: 0 if two numners else Error
 */
int main(int argc, char **argv)
{
	int a;
	int b;
	int c;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	a = atoi(argv[1]);
	b = atoi(argv[2]);
	c = a * b;

	printf("%d\n", c);
	return (0);
}
