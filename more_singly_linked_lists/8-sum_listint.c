#include "lists.h"

/**
 * sum_listint - The sum of the all data of the list.
 *
 * @head: Pointer to the head of the list.
 *
 * Return: Sum of the all data of the linked list.
 */

int sum_listint(listint_t *head)
{
	int addition = 0;

	if (!head)
		return (0);

	while (head)
	{
		addition += head->n;
		head = head->next;
	}

	return (addition);
}
