#include "main.h"
/**
  * ultron - checks recursively the input from is_prime_number
  * @i: iterator
  * @num: base number to check
  * Return: 1 if n is a prime, else return 0 otherwise.
  */
int ultron(int i, int num)
{
	if (num % i == 0 || num < 2)
		return (0);
	else if (i == num - 1)
		return (1);
	else if (num > i)
		return (checker(i + 1, num));
	return (1);
}
/**
  * is_prime_number - checks if the number is a prime number
  * @n: the number to check
  * Return: 1 if n is a prime, else return 0 otherwise.
  */
int is_prime_number(int n)
{
	return (ultron(2, n));
}
