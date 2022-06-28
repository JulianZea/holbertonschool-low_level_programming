#include "main.h"

/**
 * array_range - Creates an array of integers.
 *
 * @min: min number to add in the array
 *
 * @max: max number to add in the array
 *
 * range: array rank 
 * Return: The pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int *new_array = NULL;
	int range, z, c = 0;

	if (min > max)
		return (NULL);

	range = max - min + 1;
	new_array = malloc(range * sizeof(int));

	if (!new_array)
	{
		free(new_array);
		return (NULL);
	}

	for (z = min; z <= max; z++)
	{
		new_array[c] = z;
		c++;
	}

	return (new_array);
}
