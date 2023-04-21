#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry Point
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("&lu is positive\n");
	}
	else if (n == 0)
	{
		printf("&lu is zero\n");
	}
	else
	{
		printf("&lu is negative\n");
	}
	return (0);
}
