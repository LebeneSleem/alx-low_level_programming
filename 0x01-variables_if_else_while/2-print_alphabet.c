#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * main - using putchar to print values
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
