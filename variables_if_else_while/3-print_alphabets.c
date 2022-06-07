#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase and uppercase
 *
 * Description: Prints the alphabet in lowercase and uppercase
 * followed by a new line.
 *
 * Return: Always return 0
 */

int main(void)
{
	char minus = 'a';
	char mayus = 'A';

	while (minus <= 'z')
	{
		putchar(minus);
		minus++;
	}

	while (mayus <= 'Z')
	{
		putchar(mayus);
		mayus++;
	}

	putchar(10);
	return (0);
}
