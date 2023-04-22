#include <stdio.h>

/**
 * main - Entry point
 * Return: 0
 */
int main(void)
{
	int l;

	for (l = 48; l < 58; l++)
	{
		putchar(l);
	}
		if (l != 57)
	{
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
