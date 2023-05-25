#include "variadic_functions.h"

/**
 * print_strings - a function that prints strings
 * @n: number of strings passed to the function
 * @separator: string to be printed between the strings
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list string;
	char *ptr;
	unsigned int list;

	va_start(string, n);

	for (list = 0; list < n; list++)
	{
		ptr = va_arg(string, char *);
		if (ptr == NULL)
		printf("nil");

		else
			printf("%s", ptr);

		if (list != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(string);
}
