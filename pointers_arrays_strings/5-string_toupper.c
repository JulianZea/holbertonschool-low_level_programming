#include "main.h"

/**
 * string_toupper - Changes all lower case letters of a
 *                   string to uppercase.
 *
 *@p: Pointer added.
 *
 * Return: Pointer.
 */
char *string_toupper(char *p)
{
	int i;

	for (i = 0; p[i] != '\0'; i++)
	{

		if (p[i] >= 'a' && p[i] <= 'z')
		{
			p[i] = p[i] - 32;
		}
	}
	return (p);
}
