#include <stdio.h>
/**
 *main - print lowercase alpha a-z but 'q' and 'e'
 *Return: Always 0 (Success)
 */
int main(void)
	{
		char alphabet = 'a';
		while (alphabet <= 'z')
		{
			if (alphabet != 'q' && alphabet != 'e')
			putchar(alphabet);
			alphabet++;
		}
		putchar('\n');
		return (0);
	}
