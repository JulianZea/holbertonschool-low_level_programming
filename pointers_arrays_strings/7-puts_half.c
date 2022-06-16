#include "main.h"
/**
 * puts_half - task 07
 * @str : Variable char to validate
 * Description:  function that prints half of a string, followed by a new line
 * Return: always
 */
void puts_half(char *str)
{
	int a = 0, b;

	while (str[a] != '\0')
		a++;
	if (a % 2 != 0)
		a = (a / 2) + 1;
	else
		a = a / 2;

	for (b = a; str[b] != '\0'; b++)
	{
		_putchar(str[b]);
	}
	_putchar('\n');
}
