#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the nt
 * node of a listint_t linked list
 * @head: head of the node
 * @index: node index
 * Return: Pointer to the node or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int a = 0;
	listint_t *curr = head;

	while (curr && a < index)
	{
		curr = curr->next;
		a++;
	}

	return (curr ? curr : NULL);
}
