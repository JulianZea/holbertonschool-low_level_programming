#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *string_nconcat - malloa and If it fails exit with 98 value
 * @s1: 1st string
 * @s2: 2nd string
 * @n: N numbers of the second string
 * Return: s3.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s3;
	int z;
	unsigned int c;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	z = 0;
	while (s1[z] != '\0')
		z++;
	s3 = malloc(sizeof(char) * (z + n + 1));
	if (s3 == NULL)
		return (NULL);
	z = c = 0;
	while (s1[z] != '\0')
	{
		s3[z] = s1[z];
		z++;
	}
	while (c < n && s2[c] != '\0')
	{
		s3[z] = s2[c];
		z++, c++;
	}
	s3[z] = '\0';
	return (s3);
}
