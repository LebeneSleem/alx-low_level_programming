#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * main - program tonskipnalphabets using putchar
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		if (a == 'q' || a == 'e')
			continue;

		putchar(a);
	}
	putchar('\n');
	return (0);
}
