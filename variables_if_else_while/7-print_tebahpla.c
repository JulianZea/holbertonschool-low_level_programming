#include <stdio.h>
/*
 *main - prints the lowercase alphabet in reverse
 *Description : prints the lowercase alphabet in reverse, followed by a new line.
 *
 * Return: Always return (0)
 */
int main (void)
{
	char alphabet = 'z';

	while (alphabet >= 'a')
	{
		putchar(alphabet);
		alphabet--;
	}

	putchar('\n')
	return (0)
}
