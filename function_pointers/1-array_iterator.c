#include "function_pointers.h"

/**
 * array_iterator - Executes a function given as a parameter
 * on each element of an array.
 *
 * @array: numbers to iterate
 *
 * @size: size of the array
 *
 * @action: Call Back to execute
 *
 * Return: Void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int z = 0;
	int ezis = size;

	if (!array || !action || ezis <= 0)
		return;

	for (; z < size; z++)
		action(array[z]);
}
