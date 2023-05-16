#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: string to be duplicated
 * Return: a pointer to the duplicated string or NULL
 */
char *_strdup(char *str)
{
	char *ptr;
	int a;
	int length = 0;

	length = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[length] != '\0')
	{
		length++;
	}

	ptr = ((char *) malloc((length * sizeof(char)) + 1));
	if (ptr == NULL)
	{
		return (NULL);
	}

	for (a = 0; a <= length; a++)
	{
		ptr[a] = str[a];
	}

	return (ptr);
}
