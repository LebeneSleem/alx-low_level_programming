#include "dog.h"
#include <stdio.h>

/**
 * print_dog - function that prints a struct dog
 * @d: variable
 * Return: 0
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d->name == NULL)
		d->name = "(nil)";
	printf("name: %s\n", d->name);

	if (d->age >= 0.0 && d->age <= 100.0)
		printf("age: %6f\n", d->age);
	else
		puts("age: (nil)\n");

	if (d->owner == NULL)
		d->owner = "(nil)";
	printf("owner: %s\n", d->owner);
}
