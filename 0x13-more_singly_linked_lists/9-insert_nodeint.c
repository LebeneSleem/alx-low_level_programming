#include "lists.h"

/**
 * insert_nodeint_at_index -  inserts a new node at a given position.
 * @head: head oof the node
 * @idx: index
 * @n: data to be added
 * Return: Pointer to the new node or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head,
		unsigned int idx, int n)
{
	unsigned int a;
	listint_t *new_node;
	listint_t *curr = *head;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL || head == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	for (a = 0; curr && a < idx; a++)
	{
		if (a == idx - 1)
		{
			new_node->next = curr->next;
			curr->next = new_node;
			return (new_node);
		}
		else
			curr = curr->next;
	}
	return (NULL);
}
