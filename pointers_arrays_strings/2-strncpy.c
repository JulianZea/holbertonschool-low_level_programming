#include "main.h"
#include <string.h>

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
char _strncpy(chardest, char src, int n)
{
    int x;

    x = 0;

    while(x < n && src[x] != '\0')
    {
        dest[x] = src[x];
        x++;
    }
    while (x < n)
    {
        dest[x] = '\0';
        x++;
    }
    return (dest);
}
