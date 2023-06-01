#include "lists.h"

/**
 * add_node_end - function that adds a new
 * node at the end of a list_t list.
 * @head: begining of the node
 * @str: node to be duplicated
 * Return: The adress of the new element orNULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int len = 0;
	list_t *new_node, *current = *head;

	if (str == NULL)
		return (NULL);

	while (str[len])
		len++;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->len = len;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		current = *head;
		while (current->next != NULL)
			current = current->next;
		current->next = new_node;
	}

	return (new_node);
}

