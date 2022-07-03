#include "function_pointers.h"

/**
 * int_index - Searches for an integer.
 *
 * @array: An array with numbers (int)
 *
 * @size: number of elements of the array
 *
 * @cmp: function for do the search
 *
 * Return: The index of the first element that match or -1 otherwise.
 * if size is less than 0 return -1.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int z = 0, resultElement = 0;

	if (size <= 0 || !array || !cmp)
		return (-1);

	for (z = 0; z < size; z++)
	{
		resultElement = cmp(array[z]);

		if (resultElement != 0)
			return (z);
	}
	return (-1);
}
