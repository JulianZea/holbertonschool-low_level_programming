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
/*task 3*/
listint_t *add_nodeint_end(listint_t **head, const int n);
/*task 4*/
void free_listint(listint_t *head);
/*task 5*/
void free_listint2(listint_t **head);
/*task 6*/
int pop_listint(listint_t **head);
/*task 7*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);
/*task 8*/
int sum_listint(listint_t *head);
/*task 9*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n);
/*task 10*/
int delete_nodeint_at_index(listint_t **head, unsigned int index);

/*task advance*/
/*task 11*/

#endif /*list*/
