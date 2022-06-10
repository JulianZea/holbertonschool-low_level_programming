#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints 'z' number to 98.
 * @n: This number is 'z'
 * Return: Always 0.
 */
void print_to_98(int n)
{
	/*if 'z' is less than 98 we increment*/
	while (n < 98)
	{
		printf("%d, ", n);
		n++;
	}
	/*value 'z' is greater than 98 we decrease*/
	while (n > 98)
	{
		printf("%d, ", n);
		n--;
	}
	/*If 'z' is 98, write the number without a space*/
	if (n == 98)
	{
		printf("%d\n", n);
	}
}
