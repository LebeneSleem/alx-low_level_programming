#include "lists.h"

/**
 * list_len - function that returns the number of elements
 * in a linked list_t list
 * @h: The head or pointer
 * Return: Number of elements in the lists
 */
size_t list_len(const list_t *h)
{
	size_t total = 0;

	while (h != NULL)
	{
		total++;
		h = h->next;
	}
	return (total);
}
