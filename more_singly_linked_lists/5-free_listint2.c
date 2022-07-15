#include "lists.h"

/**
 * free_listint2 - Free a listint_list.
 *
 * @head: Double pointer to the head (element) of a linked list.
 *
 * Return: Void.
 */

void free_listint2(listint_t **head)
{
	listint_t *release = NULL;

	if (!head)
		return;

	while (*head)
	{
		release = (*head)->next;
		free(*head);
		*head = release;
	}
}
