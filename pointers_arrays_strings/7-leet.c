#include "main.h"
#include <string.h>
/**
 * puts_half - Print in reverse a string
 * Description: Show thr last part of the string
 * @str: The char
 */
void puts_half(char *str)
{
	int i, len;

	len = strlen(str);

	if (len % 2 == 0)
	{
		for (i = len / 2; i < len; i++)
		{
			_putchar(str[i]);
		}
	}
	else
	{
		for (i = (len / 2) + 1; i < len; i++)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
