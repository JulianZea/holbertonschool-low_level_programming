#include "main.h"

/**
 * string_toupper - Changes all lower case letters of a string to uppercase.
 * @p: Pointer added.
 *
 * return: Pointer.
 */

char *mytoupper(char *s) {
    int i = 0;
    while (s[i] != '\0') {
        if (s[i] >= 'a' && s[i] <= 'z') {
            s[i] = s[i] -32; /* es igual a 97='a', 65='A', -97 + 65*/
        }
        i++;
    }
    return s;
}

int main(void) {
    char s[32];
    printf("Insert string:");
    if (scanf("%31s", s) == 1) {
        printf("%s\n", mytoupper(s));
    }
    return 0;
}
