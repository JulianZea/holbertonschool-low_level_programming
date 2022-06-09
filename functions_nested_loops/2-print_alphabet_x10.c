#include "main.h"

/**
 * main - check the code.
 * Description: prints 10 times the alphabet, in lowercase, new line.
 * Return: Always 0.
 */

void print_alphabet_x10(void)
{
	char alphabet;
	int i;

	for (i = 0; i <= 9; i++)
	{
		for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		_putchar(alphabet);
	_putchar('\n');
	}
}
