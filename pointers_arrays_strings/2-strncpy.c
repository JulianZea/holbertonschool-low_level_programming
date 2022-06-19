#include "main.h"

/**
 * _strncpy - Copy a string to another
 *
 * @dest: string-base.
 *
 * @src: string to replce the string-base.
 *
 * @n: cuantity of letters to use of src.
 *
 * Return: Void
 */
char *_strncpy(char *dest, char *src, int n)
{
	int x;

	x = 0;

	while  (x < n && src[x] != '\0')
	{
		dest[x] = src[x];
		x++;
	}
	for (; x < n; x++)
	{
		dest[x] = '\0';
	}
	return (dest);
}
