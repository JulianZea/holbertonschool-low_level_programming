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
	int n1;
	int n2;
	int n3;

	for (n1 = '0'; n1 < ':'; n1++)
	{
		for (n2 = '1'; n2 < ':'; n2++)
		{
			for (n3 = '2'; n3 < '0'; n3++)
			{
				if (n1 != n2 && n2 != n3 && n1 != n3 && n2 > n1 && n3 > n2)
				{
					putchar(n1);
					putchar(n2);
					putchar(n3);
					if (!(n1 == '7' && n2 == '8' && n3 == '9'))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
