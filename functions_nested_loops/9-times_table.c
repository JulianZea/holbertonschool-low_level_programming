#include "main.h"

/**
 * times_table - multiplex table
 * Description: print munber in table.
 */
void times_table(void)
{
	int var1, var2, var3, var4, var5;

	var1 = 0;
	while (var1 <= 9)
	{
		_putchar('0');
		var2 = 1;
		while (var2 <= 9)
		{
			var3 = var1 * var2;
			var4 = var3 / 10;
			var5 = var3 % 10;
			_putchar(',');
			_putchar(' ');
			if (var3 <= 9)
			{
				_putchar(' ');
				_putchar(var3 + '0');
			}
			else
			{
				var4 = var3 / 10;
				var5 = var3 % 10;
				_putchar(var4 + '0');
				_putchar(var5 + '0');
			}
			var2++;
		}
		var1++;
		_putchar('\n');
	}
}
