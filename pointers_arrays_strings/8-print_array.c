#include "main.h"
#include <stdio.h>

/**
 * print_array - prints 'n' elements of an array of integers
 * @a: array
 * @n: number of elements
 * Description:  function that prints half of a string, followed by a new line
 * Return: always
 */
void print_array(int *a, int n)
{
	int z;

	for (z = 0; z < n; z++)
	{
		if (z != (n - 1))
			printf("%d, ", a[z]);
		else
			printf("%d", a[z]);
	}
	printf("\n");
}
