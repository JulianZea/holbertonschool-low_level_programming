#include "main.h"
#include <stdio.h>

/**
 * main - Prints the first 50 Fibonacci numbers, starting with 1 and 2.
 *
 * Return: 0
 */

int main(void)
{
	long int var1 = 1, var = 2, result = 0, counter = 0;

	printf("%lu, %lu, ", var1, var2 );

	while (counter < 48)
	{
		result = var1 + var2;
		var1 = var2;
		var2 = result;
		if (counter != 47)
			printf("%lu, ", result);
		else
			printf("%lu\n", result);
		counter++;
	}
	return (0);
}
