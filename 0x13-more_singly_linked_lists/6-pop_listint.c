#include "lists.h"

/**
 * pop_listint - function that deletes the head node of a listint_t
 * linked list, and returns the head node’s data (n).
 * @head: Head of node
 * Return: Head node's data
 */
int pop_listint(listint_t **head)
{
	listint_t *curr;
	int a;

	if (head == NULL || *head == NULL)
		return (0);

	a = (*head)->n;
	curr = (*head)->next;

	free(*head);
	*head = curr;

	return (a);
}
