#include <stdio.h>
/**
 * main -  writes nnumber of args
 * @argc: counter
 * @argv: value
 * z - variable
 * Return: 0
 **/
int main(int argc, char *argv[])
{
	int z;

	for (z = 0; z < argc; z++)
	{
		printf("%s\n", argv[z]);
	}
	return (0);
}
