#include "main.h"

/**
 * print_last_digit - print the last digit of number
 * @var1: Number where extract the last digit
 * Return: the Last number
 */
int print_last_digit(int var1)
{
	int var2;

	var2 = var1 % 10;
	if (var2 < 0)
	{
		_putchar(-var2 + '0');
		return (-var2);
	}
	else
	{
		_putchar(var2 + '0');
		return (var2);
	}
}
