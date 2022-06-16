#include "main.h"
/**
 * _puts - prints a string, followed by a new line
 * @str: address to print of value
 */
void _puts(char *str)
{
	int string;

	string = 0;

	while (*(str + string) != '\0')
	{
		_putchar(str[string]);
		string++;
	}
	_putchar('\n');
}
