#include "main.h"

/**
 * _calloc - Allocates memory for an array, using malloc.
 *
 * @nmemb: number of elements
 *
 * @size: size of an element
 *
 * Return: hello
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int z, final_size = nmemb * size;
	char *final_array = NULL;

	if (nmemb == 0 || size == 0)
		return (NULL);

	final_array = malloc(final_size);

	if (!final_array)
	{
		free(final_array);
		return (NULL);
	}

	for (z = 0; z < final_size; z++)
		final_array[z] = 0;

	return (final_array);
}
