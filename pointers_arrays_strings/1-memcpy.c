#include "main.h"

/**
 * _memcpy - Function that copies memory area.
 *
 * @dest: Memory area.
 * @src: Source memory.
 * @n: Bytes from src memory area.
 *
 * Return: dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int z;

	for (z = 0; z < n;  z++)
	{
		dest[z] = src[z];
	}
	return (dest);
}
