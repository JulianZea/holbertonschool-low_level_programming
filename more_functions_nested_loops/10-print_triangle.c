#include "main.h"

/**
 * print_triangle - Print a triangle.
 *
 * @size: Size of the triangle
 *
 * Return: Void
 */

void print_triangle(int size)
{
	int c, s, espace;

	if (size > 0)
	{
		for (c = 0; c < size; c++)
		{
			for (espace = size - c; espace > 1; espace--)
			{
				_putchar(' ');
			}

			for (s = 0; s <= c; s++)
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
