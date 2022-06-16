#include "main.h"

/**
 * puts2 - prints every second character
 * @str: string to print
 */
void puts2(char *str)
{
	int p;

	for (p = 0; str[p] != '\0'; p++)
	{
		if (p % 2 == 0)
			_putchar(str[p]);
	}
	_putchar('\n');
}
