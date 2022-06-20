#include "main.h"

/**
 * _strchr - Locates a character in a string.
 * @s: String.
 * @c: Character to find.
 *
 * Return: A pointer to the first ocurrence or
 *         NULL if character is not found.
 */

char *_strchr(char *s, char c)
{
	int z;

	for (z = 0; s[z] >= '\0'; z++)
	{
		if (s[z] == c)
		{
			return (s + z);
		}
	}
	return ('\0');
}
