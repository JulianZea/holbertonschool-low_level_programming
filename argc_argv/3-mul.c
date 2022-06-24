#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiply
 * @argc: count
 * @argv: value
 * Return: result or 1
 **/
int main(int argc, char *argv[])
{
	int z;
	int c; 
	int result;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	z = ultron(argv[1]);
	c = ultron(argv[2]);
	result = z * c;
	printf("%d\n", result);
	return (0);
}
