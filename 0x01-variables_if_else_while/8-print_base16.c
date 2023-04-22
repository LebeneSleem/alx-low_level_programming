#include <stdio.h>

/**
 * main - Entry Point
 * Retirn: 0
 */
int main(void)
{
	int n;
	char a;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
	}
	for (a = 'a'; a <= 'f'; a++)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
