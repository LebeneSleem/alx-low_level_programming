#include <stdio.h>

/**
 * main - Entry Point
 * Return: 0
 */
int main(void)
{
	int i = 0;
	unsigned long int a = 0, b = 1, next = 0;

	printf("0, 1, ");

	while (i < 96)
	{
		next = a + b;
		a = b;
		b = next;
		printf("%lu", next);

		if (i < 95)
		{
			printf(", ");
		}
		i++;
	}
	putchar('\n');
	return (0);
}
