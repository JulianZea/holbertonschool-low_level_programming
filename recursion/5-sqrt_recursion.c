#include "main.h"
/**
 * jarvis - checks the input number from n to the base.
 * @z: iterative number to compare its power to the number.
 * @num: given number.
 * Return: square root of number.
 */
int jarvis(int z, int num)
{
	if (z * z == num)
		return (z);
	if (z * z > num)
		return (-1);
	return (jarvis(z + 1, num));
}
/**
 * _sqrt_recursion - square root of a number.
 * @n: number to check for square roots.
 * Return: the square root of number.
 */
int _sqrt_recursion(int n)
{
	return (jarvis(1, n));
}
