#include <stdio.h>

/**
 * main - print sum of multiples of 3 or 5 below 1024 ok
 * Return: Always 0
 */
int main(void)
{
	int num1;
	int num2;

	num2 = 0;
	for (num1 = 0; num1 < 1024; num1++)
	{
		if ((num1 % 3 == 0) || (num1 % 5 == 0))
		{
			num2 = num2 + num1;
		}
	}
	printf("%d\n", num2);
	return (0);
}
