#include "main.h"
#include <stdio.h>

/**
 * main - Prints the sum of the even-valued terms.
 *
 * Return: 0
 */

int main(void)
{
	int var1 = 1, var2 = 2, sum = 0, result = 2;

	while (sum < 4000000)
	{
		sum = var1 + var2;
		var1 = var2;
		var2 = sum;
		if (sum % 2 == 0)
			result += sum;
	}
	printf("%d\n", result);
	return (0);
}
