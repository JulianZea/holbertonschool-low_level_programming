#include "main.h"

/**
 * rev_string - reverses a string.
 * @s: string
 */
void rev_string(char *s)
{
	int length;
	int a;
	char *y;
	int b;
	int c;
	char n;

	length = 0;
	a = 0;
	y = s;
	b = 0;

	while (*y != '\0')
	{
		y++;
		length++;
	}
	a = length - 1;
	for (; b < ((a / 2) + 1); b++)
	{
		c = (a - b);
		n = s[b];
		s[b] = s[c];
		s[c] = n;
	}
}
