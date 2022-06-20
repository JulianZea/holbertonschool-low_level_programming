#include "main.h"
/**
 * _memset - Fills n bytes of memory area pointed to by s with
 *           the constant byte b.
 *
 * @s: Pointer.
 * @b: Char variable.
 * @n: Unsigned char. N bytes to be filled.
 *
 * Return: The pointer to the memory area s.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int z;

	for (z = 0; z < n; z++)
	{
		s[z] = b;
	}
	return (s);
}
