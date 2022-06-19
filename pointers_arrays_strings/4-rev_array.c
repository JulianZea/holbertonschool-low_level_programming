#include "main.h"

/**
 * reverse_array - Reverses the content of an array of integers.
 *
 * @a: Pointer of type int.
 * @n: number of elements.
 */

void reverse_array(int *a, int n)
{
	int h, k;

	for (h = 0; h < n / 2; h++)
	{
		k = a[h];
		a[h] = a[n - h - 1];
		a[n - h - 1] = k;
	}
}
