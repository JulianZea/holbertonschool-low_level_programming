#include "main.h"

/**
 * _print_rev_recursion - Prints a strinjg in reverse using
 *                        recursion.
 *
 * @s: String.
 */

void _print_rev_recursion(char *s)
{
	int z;

	z = 0;

	if (s[z] != '\0')
	{
		_print_rev_recursion(&(s[z + 1]));
		 _putchar(s[z]);
	}
}
