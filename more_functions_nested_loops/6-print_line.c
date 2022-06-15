#include "main.h"

/**
 * print_line - draws a straight line in the terminal.
 *
 * @n: ampount of "_"
 *
 * Return: Void
 */

void print_line(int n)
{
	int line = 0;

	if (n > 0)
	{
		while (line < n)
		{
			putchar('');
			line++;
		}
	}
	_putchar('\n');
}
