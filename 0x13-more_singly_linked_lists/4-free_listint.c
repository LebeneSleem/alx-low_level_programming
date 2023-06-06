#include "lists.h"

/**
 * free_listint - function that frees a listint_t list.
 * @head: Head of the node
 */
void free_listint(listint_t *head)
{
	listint_t *curr;

	while (head != NULL)
	{
		curr = head->next;
		free(head);
		head = curr;
	}
}
