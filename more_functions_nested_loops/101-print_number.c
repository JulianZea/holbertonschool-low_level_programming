#include "main.h"

/**
 * print_number - prints number only use _putchar
 * @n: integer to print
 */
void print_number(int n)
{
	int num_nu = num;
	int size = size;
	int unid = uni;
	int dig_position = posiDig;

	size = 1;
	uni = i % 10;
	i = i / 10;
	num = i;
	/*if the number is negative*/
	if (uni < 0)
	{
		uni = -uni;
		num = -num;
		i = -i;
		_putchar('-');
	}
	/*if the number has 2 digit or more*/
	/*because before "/10" the number*/
	if (num > 0)
	{
		/*number total of digit in size */
		while (num / 10 != 0)
		{
			num = num / 10;
			size = size * 10;
		}
		/*print digits except "unid" digit and reduce size*/
		/**/
		while (size > 0)
		{
			/*print the first digit*/
			posiDig = i / size;
			_putchar('0' + posiDig);
			/*need erase the first digit and pass next digit to first*/
			i = i - (posiDig * size);
			size = size / 10;
		}
	}
	_putchar('0' + uni);/*print only last digit*/
}
