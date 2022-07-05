#include "stdarg.h"

/**
 * sum_them_all - sum of all its parameters.
 *
 * @n: Cuantity of arguemts
 *
 * Return: The sum of all the numbers
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int z;
	int var;

	if (n == 0)
		return (0);

	va_start(ap, n);

	for (z = 0, var = 0; z < n; z++)
		var += va_arg(ap, int);

	va_end(ap);
	return (var);
}
