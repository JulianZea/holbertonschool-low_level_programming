#include "main.h"
#include <stdio.h>

/**
 * main - Prints the first 50 Fibonacci numbers, starting with 1 and 2.
 *
 * Return: 0
 */

int main(void)
{
	long int a = 1, b = 2, result = 0, counter = 0;

	printf("%lu, %lu, ", a, b);

	while (counter < 48)
	{
		result = a + b;
		a = b;
		b = result;
		if (counter != 47)
			printf("%lu, ", result);
		else
			printf("%lu\n", result);
		counter++;
	}
	return (0);
}
