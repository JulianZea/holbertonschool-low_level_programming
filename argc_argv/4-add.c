#include "main.h"

/**
 * main - Adds positive numbers.
 *
 * @argc: number of parameters
 *
 * @argv: numbers to add.
 *
 * Return: EXIT_SUCCESS
 */

int main(int argc, char *argv[])
{
	int z, result = 0;
	unsigned int c;

	for (z = 1; z < argc; z++)
	{
		for (c = 0; c < strlen(argv[z]); c++)
		{
			if (!(argv[z][c] >= '0' && argv[z][c] <= '9'))
			{
				printf("Error\n");
				return (1);
			}
		}
		result += atoi(argv[z]);
	}

	printf("%d\n", result);
	return (0);
}
