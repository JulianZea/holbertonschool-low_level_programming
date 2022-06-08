#include "main.h"

/**
 * main - Entry point
 * Description: prints "_putchar", followed by a new line.
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;
	char ascii[] = "_putchar";

	/*My codig*/
	for (i = 0; i <= 7; i++)
	{
		_putchar(ascii[i]);
	}
	_putchar('\n');
	return (0);
}
