#include "main.h"

/**
 * _strlen_recursion - Function that returns the length of a string.
 *
 * @s: Pointer to a string.
 *
 * Return: Returns the length of the string in this case pointed by s.
 */

int _strlen_recursion(char *s)
{
	int z;

	z = 0;

	if (s[z] == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(&(s[z + 1])));
	}
}
