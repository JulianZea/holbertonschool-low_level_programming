#include "main.h"

/**
 * print_times_table - Show table of multiplication of 'n'.
 * Description: no show nothing is 'n' > 15 or 'n' < 0 .
 * @n: table of 'n'
 */
void print_times_table(int n)
{
	int var1, var2, var3;

	if (n >= 0 && n <= 15)
	{
		for (var1 = 0; n >= var1; var1++)
		{
			_putchar('0');
			for (var2 = 1; n >= var2; var2++)
			{
				var3 = var1 * var2;
				_putchar(',');
				_putchar(' ');
				if (var3 <= 9)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar('0' + var3);
				}
				else if (var3 >=  10 && var3 <= 99)
				{
					_putchar(' ');
					_putchar('0' + (var3 / 10));
					_putchar('0' + (var3 % 10));
				}
				else if (var3 >= 100 && var3 < 999)
				{
					_putchar('0' + (var3 / 100));
					_putchar('0' + ((var3 / 10) % 10));
					_putchar('0' + (var3 % 10));
				}
			}
			_putchar('\n');
		}
	}
}
