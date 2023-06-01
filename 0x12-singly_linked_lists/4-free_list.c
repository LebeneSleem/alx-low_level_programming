#include "lists.h"

/**
 * free_list - function that frees a list_t list
 * @head: list to be freed
 * Return: Nothing
 */
void free_list(list_t *head)
{
	list_t *curr;

	while (head)
	{
		curr = head->next;
		free(head->str);
		free(head);
		head = curr;
	}
}
