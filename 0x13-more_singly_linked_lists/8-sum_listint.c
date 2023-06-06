#include "lists.h"

/**
 * sum_listint - function that returns the sum of all the data (n)
 * of a listint_t linked list.
 * @head: head of the node
 * Return: 0 if the list is empty
 */
int sum_listint(listint_t *head)
{
	int a = 0;
	listint_t *curr = head;

	while (curr)
	{
		a += curr->n;
		curr = curr->next;
	}
	return (a);
}
