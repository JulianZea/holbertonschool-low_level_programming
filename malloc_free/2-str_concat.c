#include "main.h"

/**
 * str_concat - Concatenates two strings.
 *
 * @s1: First string
 *
 * @s2: Second string
 *
 * Return: Both string concatenated of NULL
 */

char *str_concat(char *s1, char *s2)
{
	char *retorno_final;
	int iterador1 = 0, iterador2 = 0;
	int retorno;
	int i;

	if (s1)
	{
		while (s1[iterador1])
			iterador1++;
	}

	if (s2)
	{
		while (s2[iterador2])
			iterador2++;
	}

	retorno = iterador1 + iterador2 + 1;
	retorno_final = malloc(retorno * sizeof(char));

	if (!retorno_final)
		return (NULL);

	for (i = 0; i < retorno; i++)
	{
		if (iterador1)
			retorno_final[i] = s1[i];
		if (i >= iterador1 && s2)
			retorno_final[i] = s2[i - iterador1];
	}

	retorno_final[i] = '\0';
	return (retorno_final);
}
