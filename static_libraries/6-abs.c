#include "main.h"

/**
 * _abs - show absolute value of integer
 * @var: integer to evaluate
 * Return: absolute value
 */
int _abs(int var)
{
	if (var > 0)
		return (var);
	else if (var < 0)
		return (-var);
	return (0);
}
