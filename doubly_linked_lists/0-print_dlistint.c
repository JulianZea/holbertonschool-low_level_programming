#include "lists.h"

/**
  * print_dlistint - prints a doubly linked list
  * @h: Head of the list
  * Return: Number of items in the linked list
  */
size_t print_dlistint(const dlistint_t *h)
{
	size_t z;

	for (z = 0; h; z++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (z);
}
