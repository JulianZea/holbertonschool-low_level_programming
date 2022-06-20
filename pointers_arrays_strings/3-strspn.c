#include "main.h"

/**
 * _strspn - Function that gets the length of a prefix
 *           substring.
 *
 * @s: String.
 * @accept: Source.
 *
 * Return: Number of bytes in the initial segment of s.
 */

unsigned int _strspn(char *s, char *accept)
{
	int z;
	int c;
	unsigned int length;

	length = 0;

	for (z = 0; s[z] != '\0'; z++)
	{
		for (c = 0; accept[c] != '\0' && accept[c] != s[z]; c++)
		{}
		if (s[z] == accept[c])
			length++;
		if (accept[c] == '\0')
			return (length);
	}
	return (length);
}
