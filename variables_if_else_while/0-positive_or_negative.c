#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*main - Indicates if a random number is positive or negative
 *Description: 
 Generates a random number.
 *positive, negative or equal
*/
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX /2;
	
	if (n > 0) 
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else (n < 0)
		printf("%d is negative\n", n);

	return(0);
}
