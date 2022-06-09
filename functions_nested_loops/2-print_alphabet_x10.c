#include "main.h"

/**
 * Prototype: void print_alphabet_x10(void)
 * Description: Write a function that prints 10 times the alphabet, in lowercase, followed by a new line.
 * Return: 0 Always is (success)
 */
void print_alphabet_x10(void)
{
	char alphabet;
	int i;

	for (i = 0; i <=9; i++)
	{
		for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		_putchar(alphabet);
	_putchar('\n');
	}
}
