#include "variadic_functions.h"

/**
 * print_strings - a function that prints strings
 * @n: number of strings passed to the function
 * @separator: string to be printed between the strings
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list string;
	unsigned int list;
	const char *str;
	
	va_start(string, n);
	
	for (list = 0; list < n; list++)
	{
		str = va_arg(string, const char *);
		
		if (str == NULL)
		{
			printf("(nil)");
		}
        else
        {
            printf("%s", str);
        }

        if (separator != NULL && i < n - 1)
        {
            printf("%s", separator);
        }
    }

    va_end(args);

    printf("\n");
}
