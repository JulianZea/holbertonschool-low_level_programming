#include <stdlib.h>
#include <time.h>
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
  int n;
  srand();
  n = rand(time(0)) - RAND_MAX / 2;
  if(n>5)
  
    printf("Last digit of %d and great 5\n",n);
  else if(n==0)
  
      printf("Last digit of %d and is 0\n",n);
  else (n<6 && n != 0)
    
    printf("Last digit if %d and is less than 6 and not 0\n",n);
  
  return(0);
}
