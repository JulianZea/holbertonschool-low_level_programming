#include <stdio.h>

/**
 * main - Indicates if a random number is positive or negative
 *
 * Description: Generates a random number.
 *   indicates if it's positive or negative
 *
 * Return: 0
 */

int main(void) {
  char alphabet = 'a';
  
  while(alphabet<='z')
    {
      putchar(alphabet);
      alphabet++;
    }

  putchar(10);
  return(0);
}
