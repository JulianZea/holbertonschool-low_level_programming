#ifndef _LIST_H_
#define _LIST_H_

#include <stdio.h>
#include <stdlib.h>

/**
 * struct listint_s - singly linked list
 *
 * @n: integer
 *
 * @next: points to the next node
 *
 * Description: Singly linked list node structure
 */

typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

/*prototype C - More singly linked lists*/
int _putchar(char c);
/*task 0*/
size_t print_listint(const listint_t *h);
/*task 1*/
size_t listint_len(const listint_t *h);
/*task 2*/
listint_t *add_nodeint(listint_t **head, const int n);
#endif /*list*/
