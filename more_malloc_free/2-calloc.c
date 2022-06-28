#include "main.h"

/**
 * _calloc - Allocates memory for an array, using malloc.
 *
 * @nmemb: number of elements
 *
 * @size: size of an element
 *
 * Return: hola
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unigned int z, size_finish = nmemb * size;
	char *array_finish = NULL;

	if (nmemb == 0 || size == 0)
		return (NULL);

	array_finish = malloc(size_finish);
	
	if (!array_finish)
	{
		free(array_finish);
		return (NULL);
	}

	for (z = 0; z < size_finish; z++)
		array_finish[i] = 0;

	return (array finish);
}
