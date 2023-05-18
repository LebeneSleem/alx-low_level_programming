#include "main.h"
#include <stdlib.h>
/**
  * array_range - Create an array of integers
  * @min: minimum integer to be created
  * @max: maximum integer to be created
  * Return: Pointer to newly created array
  */
int *array_range(int min, int max)
{
	int *ptr, a = 0;

	if (min > max)
		return (NULL);
	ptr = malloc((sizeof(int) * (max - min)) + sizeof(int));

	if (ptr == NULL)
		return (NULL);
	while (min <= max)
	{
		ptr[a] = min;
		a++;
		min++;
	}
	return (ptr);
}
