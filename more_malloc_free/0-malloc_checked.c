#include "main.h"
#include <limits.h>

/**
 * malloc_checked - Allocates memory using malloc.
 *
 * @b: size on bytes
 *
 * Return: A pointer to the allocate memory,
 * otherwise exit the program with status 98
 */

void *malloc_checked(unsigned int b)
{
	void *z;

	if (b >= UINT_MAX || b == 0)
		exit(98);

	z = malloc(b);
	if (!z)
	{
		free(z);
		exit(98);
	}

	return (z);
}
