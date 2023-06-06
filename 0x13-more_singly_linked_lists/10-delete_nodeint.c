#include "lists.h"

/**
 * delete_nodeint_at_index - function that deletes the node at
 * index index of a listint_t linked list
 * @head: head of the noce
 * @index: index of the node that should be deleted. Index starts at 0
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *curr = *head;
	listint_t *current_node = NULL;
	unsigned int a = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(curr);
		return (1);
	}
	while (a < index - 1)
	{
		if (curr == NULL || (curr->next) == NULL)
			return (-1);
		curr = curr->next;
		a++;
	}
	current_node = curr->next;
	curr->next = current_node->next;
	free(current_node);
	return (1);
}
