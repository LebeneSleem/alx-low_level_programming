#include "main.h"
#include <stdio.h>

/**
 * main - prints arguments
 * @argv - array of arguments
 * @argc : number of arguments
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
	int a;

	for (a = 0; a < argc; a++)
	{
		printf("%s\n", argv[a]);
	}
	return (0);
}
