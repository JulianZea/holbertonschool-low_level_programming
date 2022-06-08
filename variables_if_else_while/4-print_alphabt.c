#include <stdio.h>
/**
 *main - print lowercase alpha a-z but 'q' and 'e'
 *Return 0 
 */
int main(void)
{
	char alphabet = 'a';
	while (alphabet <= 'z')
	{
		if (alphabet != 'q') && (alphabet != 'e')
		putchar(alphabet);
		alphabet++;
	}
	putchar(10);
	return (0);
}
