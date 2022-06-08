#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase also in backwards
 *
 * Description: Prints the alphabet in lowercase also in backwards
 * followed by a new line.
 *
 * Return: Always return 0
 */

int main(void)
{
	char alphabet = 'z';

	while (alphabet >= 'a')
	{
		putchar(alphabet);
		alphabet--;
	}

	putchar(10);
	return (0);
}
