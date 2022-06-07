#include <stdio.h>

/**
 *main - print alphabeth
 *Return: Always 0 (Success)
 */

int main(void)
{
	char a = 'a';

	while (a  <= 'z')
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
