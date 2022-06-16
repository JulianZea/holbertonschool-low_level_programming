#include <stdio.h>

/**
 * main - print largest prime factor of "612852475143"
 * Return: 0 for success
 */

int main(void)
{
	unsigned long var1;
	unsigned long divide;

	var1 = 612852475143;
	divide = 2;

	while (divide < var1)
	{
		if (var1 % divide == 0)
		{
			var1 = (var1 / divide);
			divide = 2;
		}
		else
			divide++;
	}
	printf("%lu\n", var1);
	return (0);
}
