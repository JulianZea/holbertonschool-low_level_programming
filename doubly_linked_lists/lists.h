#ifndef LISTS_H
#define LISTS_H

#include <stdio.h> /* printf */
#include <stdlib.h> /* malloc, free */

/**
 * struct dlistint_s - doubly linked list
 * @n: integer
 * @prev: points to the previous node
 * @next: points to the next node
 *
 * Description: doubly linked list node structure
 * for Holberton project
 */
typedef struct dlistint_s
{
	int n;
	struct dlistint_s *prev;
	struct dlistint_s *next;
} dlistint_t;

/* function prototypes */

/* task 0 */
size_t print_dlistint(const dlistint_t *h);
/* task 1 */
size_t dlistint_len(const dlistint_t *h);
/* task 2 */

/* task 3 */

/* task 4 */

/* task 5 */


#endif
