#include "main.h"

/**
 * jack_bauer - Print all minute and hour of a day
 *
 * Description: Prints every minute of the day of Jack Bauer.
 * starting from 00:00 to 23:59.
 *
 * Return: void
 */

void jack_bauer(void)
{
	int hour, min, prime_digit, finish_digit;

	for (hour = 0; hour < 24; hour++)
	{
		for (min = 0; min < 60; min++)
		{
			prime_digit = hour / 10;
			finish_digit = hour % 10;

			_putchar('0' + prime_digit);
			_putchar('0' + finish_digit);
			_putchar(':');

			prime_digit = min / 10;
			finish_digit = min % 10;

			_putchar('0' + prime_digit);
			_putchar('0' + finish_digit);
			_putchar(10);
		}
	}
}
