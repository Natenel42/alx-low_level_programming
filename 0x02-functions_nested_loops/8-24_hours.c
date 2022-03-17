#include "main.h"
#include <stdio.h>

/**
 * jack_bauer - print every minute of jack bauer.
 *
 */
void jack_bauer(void)
{
	int hour;
	int minute;

	for (hour = 0; hour <= 59; hour++)
	{
		for (minute = 0; minute <= 59; minute++)
		{
			_putchar(hour / 10 + '0');
			_putchar(hour % 10 + '0');
			_putchar(':');
			_putchar(minute / 10 + '0');
			_putchar(minute % 10 + '0');
			_putchar('\n');
		}
	}
}
