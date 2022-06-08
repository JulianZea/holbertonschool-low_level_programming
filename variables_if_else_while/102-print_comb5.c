#include <stdio.h>

/**
 * main - Prints all possible combinations of two two-digit numbers.
 *
 * Description: Prints all possible combinations of two two-digit numbers.
 *
 * Return: Always return 0
 */

int main(void)
{
	int onePair = 0, twoPair = 0;

	for (; onePair <= 99; onePair++)
		for (twoPair = 0; twoPair <= 99; twoPair++)
			if (onePair < twoPair)
			{
				putchar((onePair / 10) + 48);
				putchar((onePair % 10) + 48);
				putchar(' ');
				putchar((twoPair / 10) + 48);
				putchar((twoPair % 10) + 48);
				if (onePair != 98 || twoPair != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
	putchar('\n');
	return (0);
}
