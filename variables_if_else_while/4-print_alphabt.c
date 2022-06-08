#include <stdio.h>
/**
 *main - Entry point
 *Description : print lowercase alpha a-z but 'q' and 'e'
 *Return: Always 0 (success)
 */
int main(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		if ((alphabet != 'q') && (alphabet != 'e'))
		putchar(alphabet);
		alphabet++;
	}
	putchar(10);
	return (0);
}
