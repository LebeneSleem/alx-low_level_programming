#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @str: the string to be capitalized
 * Return: Pointer to the capitalized string
 */
char *cap_string(char *str)
{
	int sle = 0;

	while (str[sle])
	{
		while (!(str[sle] >= 'a' && str[sle] <= 'z'))
			sle++;
		if (str[sle - 1] == ' ' ||
		str[sle - 1] == '\t' ||
		str[sle - 1] == '\n' ||
		str[sle - 1] == ',' ||
		str[sle - 1] == ';' ||
		str[sle - 1] == '.' ||
		str[sle - 1] == '!' ||
		str[sle - 1] == '?' ||
		str[sle - 1] == '"' ||
		str[sle - 1] == '(' ||
		str[sle - 1] == ')' ||
		str[sle - 1] == '{' ||
		str[sle - 1] == '}' ||
		sle == 0)
		str[sle] -= 32;
		sle++;
	}
	return (str);
}
