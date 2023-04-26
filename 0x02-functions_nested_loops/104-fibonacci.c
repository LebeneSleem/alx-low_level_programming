#include <stdio.h>

/**
 * main - Entry Point
 * Return: 0
 */
int main(void)
{
	int a = 1, b = 2, c;

	printf("%d, %d, ", a, b);
	for (int i = 2; i < 98; i++)
	{
		c = a + b;
		a = b;
		b = c;
		printf("%d, ", c);
	}
	printf("%d\n", a + b);
	return (0);
}
