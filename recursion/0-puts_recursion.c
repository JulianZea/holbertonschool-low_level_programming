#include "main.h"

/**
 * _puts_recursion - Function that prints a string,
 *                    followed by a new line.
 *
 * @s: String.
 *
 */

void _puts_recursion(char *s)
{
	int z;

	z = 0;

	if (s[z] != '\0')
	{
		_putchar(s[z]);
		_puts_recursion(&(s[z + 1]));
	}
	else
	{
		_putchar(10);
	}
}
