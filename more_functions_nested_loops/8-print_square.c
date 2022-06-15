#include "main.h"

/**
 * print_square - Prints a square.
 *
 * @size: ampount of "#"
 *
 * Return: Void
 */

void print_square(int size)
{
	int var1, var2;

	if (size > 1)
	{
		for (var1 = 0; var1 < size; var1++)
		{
			for (var2 = 0; var2 < size; var2++)
			{
				_putchar('#');
			}
			_putchar(10);
		}
	}
	else
	{
		_putchar(10);
	}
}
