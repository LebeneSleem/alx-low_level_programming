#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - function that prints a name
 * @name: string
 * @f: pointer to function
 * Return: 0
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)/*check if name and pointer is NULL*/
		return;
	f(name);
}
