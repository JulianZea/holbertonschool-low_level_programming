#include "variadic_functions.h"
/**
 * print_numbers - Print all the numbers passed like arguments
 *
 * @separator: String to separate numbers
 *
 * @n: Number of arguments
 *
 * Return: Void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list num;
	unsigned int z;

	va_start(num, n);

	for (z = 0; z < n; z++)
	{
		printf("%d", va_arg(num, int));
		if (z < (n - 1) && separator)
			printf("%s", separator);
	}

	va_end(num);
	putchar(10);
}
