#include "main.h"

/**
 * leet - Capitalize the string.
 *
 * @s: Pointer to string
 *
 * Return: The string with leet
 */

char *leet(char *s)
{
	int cadena1[10] = {'a', 'e', 'o', 't', 'l', 'A', 'E', 'O', 'T', 'L'};
	int cadena2[10] = {'4', '3', '0', '7', '1', '4', '3', '0', '7', '1'};
	int com1;
	int com2;

	for (com1 = 0; s[com1]; com1++)
	{
		for (com2 = 0; com2 < 10; com2++)
		{
			if (s[com1] == cadena1[com2])
			{
				s[com1] = cadena2[com2];
			}
		}
	}
	return (s);
}
