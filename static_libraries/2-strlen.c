#include "main.h"
/**
 * _strlen - returns the length of a string.
 * @s: string
 * Return: length of a string
 */
int _strlen(char *s)
{
	int length;

	length = 0;

	while (*s != '\0') /*'\0'endline*/
	{
		length++;
		s++;
	}
	return (length);
}
