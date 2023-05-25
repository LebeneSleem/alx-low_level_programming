#include "variadic_functions.h"

/**
 * print_numbers - a function that prints numbers
 * @n: num,ber to be passed
 * @separator: string to be printed between numbers
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numbers;
	unsigned int list;

	va_start(numbers, n);

	for (list = 0; list < n; list++)
	{
		printf("%d", va_arg(numbers, int));
		if (list != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(numbers);
}
