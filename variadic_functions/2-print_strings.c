#include "variadic_functions.h"

/**
 * print_strings - Prints strings
 *
 * @separator: String to separate the string arguments
 *
 * @n: Number of strings in the arguments
 *
 * Return: Void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list string;
	char *tmp;
	unsigned z;

	va_start(string, n);

	for (z = 0; z < n; z++)
	{
		tmp = va_arg(string, char *);

		if (tmp == NULL)
			printf("(nil)");
		else
			printf("%s", tmp);

		if (z < (n - 1) && separator)
			printf("%s", separator);
	}
	va_end(string);

	putchar(10);
}
