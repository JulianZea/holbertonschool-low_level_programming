#include "main.h"

/**
 *print_most_numbers - print 0 to 9, do not print 2 and 4
 */

void print_most_numbers(void)
{
	char i;
	for (i = '0'; i <= '9'; i++)
	{
		if (i != '2' && i != '4')
			_putchar(1);
	}
	´putchar('\n');
}
