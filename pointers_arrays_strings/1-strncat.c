#include "main.h"
#include <string.h>

/**
 * _strncat - concatenates two string
 *
 * @dest: string-base.
 *
 * @src: string to add in the string-base.
 *
 * @n: cuantity of letters to use of src.
 *
 * Return: Void
 */

char *_strncat(char *dest, char *src, int n)
{
	int n1, n2, b, w;

	for (n1 = 0; *(dest + n1) != '\0'; n1++)
		;

	for (n2 = 0; *(src + n2) != '\0'; n2++)
		;

	w = (n > n2) ? n2 : n;

	for (b = 0; b != w; b++)
	{
		*(dest + n1 + b) = *(src + b);
	}

	*(dest + n1 + b + 1) = '\0';

	return (dest);
}
