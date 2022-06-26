#include "main.h"
#include <string.h>

/**
 * _strdup - Creates a pointer with a copy of the str param
 *
 * @str: String to copy
 *
 * Return: a pointer to the duplicated string or
 * null if the memory is insufficient or if the str is NULL
 */

char *_strdup(char *str)
{
	char *string;
	int z = 0, memory = 0;

	if (str == NULL)
		return (NULL);

	while (str[z])
		z++;

	string = malloc((z + 1) * sizeof(char));

	if (string == NULL)
		return (NULL);

	while (memory < z)
	{
		string[memory] = str[memory];
		memory++;
	}

	return (string);
}
