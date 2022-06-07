#include <stdio.h>

/**
 *main - print alphabet
 *Return 0
 */
int main(void) {
  char alphabet;
  alphabet = 'a';


  while(alphabet<='z')
    {
      putchar(alphabet);
      alphabet++;
    }

  putchar(10);
  return(0);
}
