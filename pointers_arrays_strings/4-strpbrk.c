#include "main.h"
#include <stddef.h>
/**
 * _strpbrk - searching a string
 * @s: the string
 * @accept: set of bytes
 * Return: a pointer to the byte it matches
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int z;
	unsigned int c;

	for (z = 0; s[z] != '\0'; z++)
	{
		for (c = 0; accept[c] != '\0'; c++)
		{
			if (s[z] == accept[c])
				return (&s[z]);
		}
	}
	return (NULL);
}
